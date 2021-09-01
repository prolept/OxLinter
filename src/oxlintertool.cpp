#include "oxlintertool.h"
#include <nlohmann/json_fwd.hpp>
#include <tree/ParseTree.h>
#include "include/symbol.h"
#include <nlohmann/json.hpp>

#pragma region Test
 
static bool treeContainsPosition(antlr4::tree::ParseTree* node, size_t position)
{
	auto terminal = dynamic_cast<tree::TerminalNode*>(node);
	if (terminal != nullptr)
	{
		return terminal->getSymbol()->getStartIndex() <= position && position <= terminal->getSymbol()->getStopIndex();
	}

	auto context = dynamic_cast<ParserRuleContext*>(node);
	if (context == nullptr)
		return false;

	return context->start->getStartIndex() <= position && position <= context->stop->getStopIndex();
}

antlr4::tree::ParseTree* contextFromPosition(antlr4::tree::ParseTree* root, size_t position)
{
	if (!treeContainsPosition(root, position))
		return nullptr;

	for (auto child : root->children)
	{
		auto result = contextFromPosition(child, position);
		if (result != nullptr)
			return result;
	}

	// No child contains the given position, so it must be in whitespaces between them. Return the root for that case.
	return root;
}

/**
 * Returns the previous sibling of the given tree, which could be a
 * non-terminal. Requires that tree has a valid parent.
 */
tree::ParseTree* getPreviousSibling(tree::ParseTree* tree)
{
	tree::ParseTree* parent = tree->parent;
	if (parent == nullptr)
		return nullptr;

	if (parent->children.front() == tree)
		return nullptr;

	for (auto iterator = parent->children.begin(); iterator != parent->children.end(); ++iterator)
		if (*iterator == tree)
			return *(--iterator); // We know we have another node before this,
	// because of the test above.

	return nullptr; // We actually never arrive here, but compilers want to be silenced.
}

//----------------------------------------------------------------------------------------------------------------------
/**
 * Returns the next sibling of the given tree, which could be a non-terminal.
 * Requires that tree has a valid parent.
 */
tree::ParseTree* getNextSibling(tree::ParseTree* tree)
{
	tree::ParseTree* parent = tree->parent;
	if (parent == nullptr)
		return nullptr;

	if (parent->children.back() == tree)
		return nullptr;

	for (auto iterator = parent->children.begin(); iterator != parent->children.end(); ++iterator)
		if (*iterator == tree)
			return *(++iterator); // We know we have another node after this, because
	// of the test above.

	return nullptr; // We actually never arrive here, but compilers want to be silenced.
}

/**
 * Returns the terminal node right before the given position. Parameter tree can
 * be a terminal or non-terminal node.
 * Returns nullptr if there is no such node.
 */
tree::ParseTree* getPrevious(tree::ParseTree* tree)
{
	do
	{
		tree::ParseTree* sibling = getPreviousSibling(tree);
		if (sibling != nullptr)
		{
			if (antlrcpp::is<tree::TerminalNode*>(sibling))
				return sibling;

			tree = sibling;
			while (!tree->children.empty())
				tree = tree->children.back();
			if (antlrcpp::is<tree::TerminalNode*>(tree))
				return tree;
		}
		else
			tree = tree->parent;
	}
	while (tree != nullptr);

	return nullptr;
}

tree::ParseTree* getNext(tree::ParseTree* tree)
{
	// If we have children return the first one.
	if (!tree->children.empty())
	{
		do
		{
			tree = tree->children.front();
		}
		while (!tree->children.empty());
		return tree;
	}
	// No children, so try our next sibling (or that of our parent(s)).
	do
	{
		tree::ParseTree* sibling = getNextSibling(tree);
		if (sibling != nullptr)
		{
			if (antlrcpp::is<tree::TerminalNode*>(sibling))
				return sibling;
			return getNext(sibling);
		}
		tree = tree->parent;
	}
	while (tree != nullptr);

	return nullptr;
}

tree::ParseTree* terminalFromPosition(tree::ParseTree* root, std::pair<size_t, size_t> position)
{
	// Credits: mysql-workbench 
	do
	{
		root = getNext(root);
		if (antlrcpp::is<tree::TerminalNode*>(root))
		{
			Token* token = ((tree::TerminalNode*)root)->getSymbol();
			if (token->getType() == Token::EOF)
				return getPrevious(root);

			// If we reached a position after the given one then we found a situation
			// where that position is between two terminals. Return the previous one in this case.
			if (position.second < token->getLine())
				return getPrevious(root);
			if (position.second == token->getLine() && position.first < token->getCharPositionInLine())
				return getPrevious(root);

			size_t length = token->getStopIndex() - token->getStartIndex() + 1;
			if (position.second == token->getLine() && (position.first < token->getCharPositionInLine() + length))
				return root;
		}
	}
	while (root != nullptr);

	return nullptr;
}
#pragma endregion

#pragma region Tools

SymbolItem GetParentFunction(std::vector<SymbolItem> Symbols, int LineStartPos)
{
	SymbolItem ParentSymbolFunction;

	for (size_t i = 0; i < Symbols.size(); i++)
	{
		auto currentSymbol = Symbols[i];
		if (currentSymbol.type == eSymbol::FunctionMember && currentSymbol.Scope_LineStart <= LineStartPos &&
			currentSymbol.Scope_LineEnd >= LineStartPos)
		{
			ParentSymbolFunction = Symbols[i];
			break;
		}
		if (currentSymbol.type == eSymbol::ExternalFunction && currentSymbol.Scope_LineStart <= LineStartPos &&
			currentSymbol.Scope_LineEnd >= LineStartPos)
		{
			ParentSymbolFunction = Symbols[i];
			break;
		}
	}
	return ParentSymbolFunction;
}

bool GetParentClasseFromHeaderClass(std::vector<ObjectClass> classes, int LineStartPos, std::string& classename)
{
	for (size_t i = 0; i < classes.size(); i++)
	{
		auto classeobj = classes[i];
		if (classeobj.LineStart <= LineStartPos && classeobj.LineEnd >= LineStartPos)
		{
			classename = classeobj.name;
			return true;
		}
	}
	return false;
}

nlohmann::json CreateJsonFromFunctionDefinition(FunctionDefinition function)
{
	nlohmann::json j;
	j["startLine"] = function.LineStart;
	j["endLine"] = function.LineEnd;
	j["startcharacter"] = function.CharPositionStartInLine;
	j["endcharacter"] = function.CharPositionEndInLine;
	j["symboltype"] = "ExternalFunction";
	j["symboltext"] = function.name;
	j["file"] = function.filename;
	j["prototype"] = function.GetPrototype();
	j["javadoc"] = function.javadoc;
	return j;
}

#pragma endregion
#pragma region Astyle

// Error handler for the Artistic Style formatter.
void ASErrorHandler(int errorNumber, const char* errorMessage)
{
	cerr << "astyle error " << errorNumber << "\n"
		<< errorMessage << endl;
}

// Allocate memory for the Artistic Style formatter.
char* ASMemoryAlloc(unsigned long memoryNeeded)
{
	// error condition is checked after return from AStyleMain
	char* buffer = new(std::nothrow) char [memoryNeeded];
	return buffer;
}

// Error message function for this example.
void error(string message)
{
	cerr << message << endl;
	cerr << "The program has terminated!" << endl;
	exit(EXIT_FAILURE);
}

// Prepend the project directory to the subpath.
// This may need to be changed for your directory structure.
string getProjectDirectory(const string& subPath)
{
#ifdef _WIN32
	char* homeDirectory = getenv("USERPROFILE");
#else
    char* homeDirectory = getenv("HOME");
#endif
	if (!homeDirectory)
		error("Cannot find HOME directory");
	string projectPath = string(homeDirectory) + "/Projects/" + subPath;
	return projectPath;
}

// Get the text to be formatted.
// Usually the text would be obtained from an edit control.
char* getText(const string& filePath)
{
	// open input file
	ifstream in(filePath.c_str());
	if (!in)
		error("Cannot open input file " + filePath);

	// get length of buffer
	const int bufferSizeIn = 1310720; // 1280 KB

	// allocate memory
	char* bufferIn = new(std::nothrow) char [bufferSizeIn];
	if (bufferIn == NULL)
	{
		in.close();
		error("Memory allocation failure on input");
	}

	// read data as a block
	in.read(bufferIn, bufferSizeIn);
	// get actual size - must be smaller than buffer size
	int textSizeIn = static_cast<int>(in.gcount());
	if (textSizeIn > bufferSizeIn)
	{
		in.close();
		error("Read buffer is too small");
	}
	bufferIn[textSizeIn] = '\0';
	in.close();

	return bufferIn;
}

// Return the formatted text.
// Usually the text would be returned to an edit control.
void setText(const char* textOut, const string& filePathStr)
{
	// create a backup file
	const char* filePath = filePathStr.c_str();
	string origfilePathStr = filePathStr + ".bak";
	const char* origfilePath = origfilePathStr.c_str();
	remove(origfilePath); // remove a pre-existing file

	if (rename(filePath, origfilePath) < 0)
		error("Cannot open input file " + filePathStr);

	// open the output file
	std::ofstream out(filePath);
	if (!out)
		error("Cannot open output file " + filePathStr);

	// write the text
	size_t textSizeOut = strlen(textOut);
	out.write(textOut, static_cast<std::streamsize>(textSizeOut));
	out.close();
}
#pragma endregion
