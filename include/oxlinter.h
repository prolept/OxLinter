#pragma once
#include <oxadvancedBaseListener.h>
#include <oxadvancedLexer.h>
#include "detectors.h"
#include <regex>
#include <memory>
#include "symbol.h"
#include <nlohmann/json.hpp>
#include <boost/filesystem/path.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/program_options/variables_map.hpp>
#include "constantlinter.h"
#include <oxlintertool.h>

using json = nlohmann::json;

class IncludeInfo
{
public:
	IncludeInfo(int iIncludeLine, int iBeelowLine, std::string file, bool import = false)
	{
		_iIncludeLine = iIncludeLine;
		_iBeelowLine = iBeelowLine;
		_file = file;
		_IsImport = import;
	}

	int _iIncludeLine; // line in the original file
	int _iBeelowLine;
	std::string _file;
	bool _IsImport = false;

	std::string GetPrint()
	{
		if (_IsImport)
			return "//IMPORT LINE : " + std::to_string(_iIncludeLine) + "   BEELOW : " + std::to_string(_iBeelowLine) +
				" FILEPATH : " + _file;
		else
			return "//INCLUDE LINE : " + std::to_string(_iIncludeLine) + "   BEELOW : " + std::to_string(_iBeelowLine) +
				" FILEPATH : " + _file;
	}
 
};

class SimpleClassDef
{
public:
	std::string classeName;
	std::string baseclasseName;
};

class LinterOx : public oxcode::oxadvancedBaseListener, IrepportError, ISymbolReporter
{
	std::vector<Detector*> m_ListdecDetectors{};
	std::vector<Issue> m_IssuesReported{};
	std::vector<SymbolItem> m_ImplementationItem{};

	std::shared_ptr<oxcode::oxadvancedParser> m_parser;
	std::shared_ptr<oxcode::oxadvancedLexer> m_lexer;
	std::shared_ptr<CustomRegistry> m_reg;

	oxcode::oxadvancedParser::TranslationunitContext* m_context{};

	bool m_IsNewAllocated = false;
	bool m_IsThereSomeErrorsNotReported = false;
	unsigned char currentflag = 0;
	int m_iMaxNumberErrors = 100;
	int m_iCounterErrors = 0;
	bool m_IsInDevMode = false;
	std::shared_ptr<std::vector<IncludeInfo>> m_IncludeVector{};
	std::string m_currentFile;
	bool m_IsPreprocessedFile = true;

	const size_t JAVADOC_CHANNEL = 7;
	std::shared_ptr<SymbolImplementationDetector> m_SymImplementation;

public:

	std::shared_ptr<antlr4::CommonTokenStream> m_tokenstream;
	bool m_IsLinter = true;
	std::shared_ptr<GenDocDetector> m_SymGenDocDetector;
	std::shared_ptr<AutoCompletitionDetector> m_SymAutoCompletition;

	LinterOx(std::string filename, bool IsFilePreprocessed, bool DebugMode)
	{
		m_IsPreprocessedFile = IsFilePreprocessed;
		m_currentFile = filename;
		m_reg = std::make_shared<CustomRegistry>(CustomRegistry());
		m_IsInDevMode = DebugMode;
	}

	~LinterOx(void)
	{
	}

	template <typename T>
	void remove_duplicates(std::vector<T>& vec)
	{
		std::sort(vec.begin(), vec.end());
		vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
	}

	tree::ParseTree* GetLocalContext(size_t caracter, size_t zerobase_line);

	std::shared_ptr<std::vector<IncludeInfo>> analyse_include(antlr4::ANTLRInputStream input);

	bool InitLinter(antlr4::ANTLRInputStream* inputStream, unsigned char flag = 0);
	 
	void WriteToDebugConsole(std::string str) const
	{
		if (m_IsInDevMode)
			std::cerr << str << std::endl;
	}

	oxcode::oxadvancedParser::TranslationunitContext* GetRootContext();

	void Run();

	// analyse ox files that are implicitly integrated via header files....
	// par exemple #import <toinclude>  integre bien le toinclude mais le toinclude.ox (si présent) n'est pas actuellement traité
	// essaie d'analyser les fichiers ox qui sont associés
	// actuellement traite meme les include , il ne faut traiter que les imports ? pas sur...
	void RunAssociatedOxFiles(boost::program_options::variables_map const& vm, std::string file_name,
	                          std::string file_content,
	                          bool analyseError, bool analyseSymbol, bool analyseImplementation,
	                          std::vector<json>& AdditionalIssuesReported,
	                          std::vector<SymbolItem>& AdditionalvSymboleItem,
	                          std::string searchImpelmentation, SimpleClassDef ParentScopeFunction);

	void AnalyseAdditionalOxFileToImport(boost::program_options::variables_map const& vm,
	                                     std::vector<boost::filesystem::path> vecOxFiles,
	                                     std::vector<std::string> vecIncludePaths,
	                                     bool analyseError,
	                                     bool analyseSymbol,
	                                     bool analyseImplementation,
	                                     std::vector<json>& AdditionalIssuesReported,
	                                     std::vector<SymbolItem>& AdditionalvSymboleItem,
	                                     std::string wordToSearch, SimpleClassDef ParentScopeFunction);

	void GetLineAndFile(size_t linePreprocessed, int& lineInfile, std::string& file) const;

	bool GetGlobalExternFunctionDefinition(
		std::vector<oxcode::oxadvancedParser::External_functionContext*> ListGlobalFunctionDefinitions,
		std::string funcname, FunctionDefinition& Outfunction, int LineToAvoid) const;

	bool GetMemberFunctionDefinition(std::vector<ObjectClassPtr> ListeObjectClass, std::string classnameToFind,
	                                 std::string funcnameToFind, FunctionDefinition& Outfunction, int LineToAvoid);

	std::vector<ObjectClass> GetClassFounds(std::vector<ObjectClassPtr> ListeObjectClass);

	void exitEveryRule(ParserRuleContext* context) override;
	void enterEveryRule(antlr4::ParserRuleContext* context) override;

	void reportError(Issue issue);

	void reportImplementation(SymbolItem issue);

	void printIncludeFound() const;

#pragma region  Json
	json GetjsonErrors();
	json Beutifull_GetSymbol(SymbolItem symmbolItem);
	json Beutifull_GetError(Issue issue);
#pragma endregion

#pragma region Print errors/symbols
	bool FindImplementation(std::string tosearch, SimpleClassDef ParentScopeClasseName, json& object);
	void PrintSymbols();
	void PrintErrors(const std::vector<json> AdditionalIssuesReported = std::vector<json>());
#pragma endregion

#pragma region Tests unitaires
	std::vector<Issue> GetErrors()
	{
		return m_IssuesReported;
	}

	std::vector<SymbolItem> GetImplementations()
	{
		return m_ImplementationItem;
	}
#pragma endregion

#pragma region Tools
	std::string CategoryToString(CATEGORY Sev);
	std::string SeverityToString(SEVERITY Sev);
	bool LoacateOxFiles(const std::string fileName, std::vector<std::string> vecIncludePaths,
	                    std::string& OutPutFullPath);
#pragma endregion
	int GetLine(int iLocationStartToken) const; // to find original position after preprocessing.
	int GetPreviousLine(std::string filename) const;
	void GetLineAndFile(Issue isse, size_t linePreprocessed, int& lineInfile, std::string& file) const;
	void GetLineAndFile(SymbolItem isse, size_t linePreprocessed, int& lineInfile, std::string& file) const;
};

static json GetAutocompletitionClassJson(std::vector<ObjectClass> vectorClass, std::string classeNameToPrint,
                                         bool printProtectedFunction, bool printProtectedMember, bool printPublicMember,
                                         bool printPublicFunction)
{
	auto jsonObjects = json::array();

	for (size_t i = 0; i < vectorClass.size(); i++)
	{
		if (vectorClass[i].name == classeNameToPrint)
		{
			if (printPublicFunction)
			{
				auto toprintinjson = vectorClass[i].publicFunctions;

				for (size_t i = 0; i < toprintinjson.size(); i++)
				{
					json function;
					function["name"] = toprintinjson[i].name;
					function["type"] = "function";
					jsonObjects.push_back(function);
				}
			}
			if (printPublicMember)
			{
				auto toprintinjson = vectorClass[i].publicMembers;

				for (size_t i = 0; i < toprintinjson.size(); i++)
				{
					json function;
					function["name"] = toprintinjson[i].name;
					function["type"] = "member";
					jsonObjects.push_back(function);
				}
			}
			if (printProtectedMember)
			{
				auto toprintinjson = vectorClass[i].protectedMembers;

				for (size_t i = 0; i < toprintinjson.size(); i++)
				{
					json function;
					function["name"] = toprintinjson[i].name;
					function["type"] = "member";
					jsonObjects.push_back(function);
				}
			}
			if (printProtectedFunction)
			{
				auto toprintinjson2 = vectorClass[i].protectedFunctions;

				for (size_t i = 0; i < toprintinjson2.size(); i++)
				{
					json function;
					function["name"] = toprintinjson2[i].name;
					function["type"] = "function";
					jsonObjects.push_back(function);
				}
			}

			return jsonObjects;
		}
	}

	return jsonObjects;
}

class proxyUnitTestLinter
{
public:
	std::string _message;

	proxyUnitTestLinter(std::string message)
	{
		_message = message;
	}

	std::vector<Issue> GetErrors();;

	std::vector<SymbolItem> GetSymbols();;

	void RunAutocompletitionTest();;

	FunctionDefinition GenDocDetectorGetArgument();

	std::vector<SymbolItem> GetImplementations();
};
