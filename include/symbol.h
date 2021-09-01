#pragma once

#include <ParserRuleContext.h>
#include <oxadvancedBaseListener.h>
#include <oxadvancedLexer.h>

enum class eSymbol
{
	FunctionMember =0,
	// ex mem::func1()
	ExternalFunction=1,
	// ex func1()
	Null=2,
	ExternalFunctionDefinition
};

class SymbolItem
{
public :
	SymbolItem();

	SymbolItem(eSymbol symb);;
	std::string classeName;
	std::string FunctionName;

	eSymbol type;

	// for prototype : ex : MEM::SETGET  ou SETGET 
	size_t CharPositionStartInLine = 1;
	size_t CharPositionEndInLine = 1;
	size_t LineStart{};
	size_t LineEnd{};

	//bis for complexe symbols 

	// pour la fonction en entier
	size_t Scope_CharPositionStartInLine = 1;
	size_t Scope_CharPositionEndInLine = 1;
	size_t Scope_LineStart{};
	size_t Scope_LineEnd{};

	void FillPosition(antlr4::CommonTokenStream* tokenstream, oxcode::oxadvancedParser::External_functionContext* ctx);
	 

	virtual ~SymbolItem()
	{
	}; //for polymorphisme
};

class ISymbolReporter
{
public:
	//virtual void reportSymbol(SymbolItem symbolreport) =0 ;
	virtual void reportImplementation(SymbolItem symbolreport) =0;
};

class SymbolDetector : public oxcode::oxadvancedBaseListener
{
public:

	SymbolDetector()
	{
	}

	void InitDetector(antlr4::CommonTokenStream* tokenstream, oxcode::oxadvancedParser* parser,
	                  oxcode::oxadvancedLexer* lexer, ISymbolReporter* report) ///, IrepportError& report  ) 
	{
		_parser = parser;
		_lexer = lexer;
		_Ireport = report;
		Start();
		_isinit = true;
		_tokenstream = tokenstream;
	}

	void reportImplem(SymbolItem issue)
	{
		//std::cout << "report symbol" << std::endl;
		_Ireport->reportImplementation(issue);
	}

	bool _isinit = false;

	virtual void Start()
	{
	};

	virtual bool AppliesTo(antlr4::ParserRuleContext& context, std::string filename) { return false; }

	virtual void End()
	{
	}

	virtual void CreateListener(antlr4::ParserRuleContext& node) { ; };

protected:
	oxcode::oxadvancedLexer* _lexer;
	oxcode::oxadvancedParser* _parser;
	antlr4::CommonTokenStream* _tokenstream;
	ISymbolReporter* _Ireport;
};

class ClassVariablePtr
{
public:
	oxcode::oxadvancedParser::External_functionContext* scope;
	std::string classeName;
	antlr4::tree::ParseTree* variable;
};

class CompletitionClassVariable
{
public:
	size_t scopeStartLine;
	size_t endStartLine;
	std::string classeName;
	std::string variableName;
};

class SymbolImplementationDetector : public SymbolDetector
{
public:
	SymbolImplementationDetector()
	{
	}

	bool AppliesTo(antlr4::ParserRuleContext& context, std::string filename) override;
	void enterExternal_function(oxcode::oxadvancedParser::External_functionContext* ctx) override;
	void CreateListener(antlr4::ParserRuleContext& node) override;
};

class ObjectClassPtr
{
public:
	oxcode::oxadvancedParser::ClassspecifierContext* classe;
	std::vector<oxcode::oxadvancedParser::MemberdeclaratorContext*> publicMember;
	std::vector<oxcode::oxadvancedParser::MemberdeclaratorContext*> protectedMember;
	std::vector<oxcode::oxadvancedParser::External_functionContext*> publicFuncton;
	std::vector<oxcode::oxadvancedParser::External_functionContext*> protectedFunction;
};

struct Member
{
	std::string name;
	size_t CharPositionStartInLine;
	size_t CharPositionEndInLine;
	size_t LineStart;
	size_t LineEnd;
};

struct Argument
{
	std::string name;
	std::string specifier;
};

struct FunctionDefinition
{
	std::string specifier;
	std::string javadoc;
	std::string name;
	std::vector<Argument> arguments;
	size_t CharPositionStartInLine;
	size_t CharPositionEndInLine;
	size_t LineStart;
	size_t LineEnd;
	std::string filename;

	std::string GetPrototype();
};

struct ObjectClass
{
	std::string filename;
	std::string name;
	std::string parentClasse;
	std::vector<FunctionDefinition> publicFunctions;
	std::vector<FunctionDefinition> protectedFunctions;
	std::vector<Member> publicMembers;
	std::vector<Member> protectedMembers;
	size_t CharPositionStartInLine;
	size_t CharPositionEndInLine;
	size_t LineStart;
	size_t LineEnd;

	bool IsThereABaseClasse()
	{
		return !filename.empty();
	}
};

class AutoCompletitionDetector : public SymbolDetector
{
public:
	std::string ScopeOfExternalFunction = ""; // for autocompletition 
	int LineNumberForSearchScopeOfExternalFunction = -1; // for autocompletition 
	AutoCompletitionDetector()
	{
	}

	std::vector<ObjectClassPtr> ListeObjectClassInHeader;
	std::vector<ClassVariablePtr> ListClassVariable;
	std::vector<SymbolItem> ListOfSymbolItems;
	std::vector<oxcode::oxadvancedParser::External_functionContext*> ListGlobalFunctionDefinitions;

	void enterExternal_function(oxcode::oxadvancedParser::External_functionContext* ctx) override;
	bool AppliesTo(antlr4::ParserRuleContext& context, std::string filename) override;
	void CreateListener(antlr4::ParserRuleContext& node) override;
	std::string GetMatchingClasseName(std::string variableNameToSearch, int LineOfVariable);
	void enterClassspecifier(oxcode::oxadvancedParser::ClassspecifierContext* ctx) override;
	void PrintObjectClassFound();
	std::vector<ObjectClass> GetClassFounds(std::string filename);

	FunctionDefinition* GetExternFunctionDefinition(std::string funcname)
	{
		return nullptr;
	}
};

class GenDocDetector : public SymbolDetector
{
public:
	bool alreadyOneTreatede = false;
	FunctionDefinition function;

	GenDocDetector()
	{
	}
	void enterExternal_function(oxcode::oxadvancedParser::External_functionContext* ctx) override;
	bool AppliesTo(antlr4::ParserRuleContext& context, std::string filename) override;
	void CreateListener(antlr4::ParserRuleContext& node) override;
};
