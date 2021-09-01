#pragma once
#include <ParserRuleContext.h>
#include <oxadvancedBaseListener.h>
#include <oxadvancedLexer.h>
 
enum class SEVERITY
{
	Ignore = 1,
	Informational =2,
	Warning =3,
	Error=4,
	Fatal=5,
};

enum class CATEGORY
{
	Memory=1,
	Typing=2,
	Performance=3
};

enum class SCOPE
{
	HEADER=1,
	OX=2,
	ALL_OX=3
};

class Type
{
public:
	virtual ~Type()
	{
	}

	virtual void* allocate() const =0;
	virtual void* cast(void* obj) const =0;
};

template <typename T>
class TypeImpl : public Type
{
public:
	virtual void* allocate() const { return new T; }
	virtual void* cast(void* obj) const { return static_cast<T*>(obj); }
};

class Implementation;  

class Issue
{
public :
	Issue(std::string ID, std::string messa, CATEGORY cat, SEVERITY sev, Implementation* imp = nullptr)
	{
		id = ID;
		generalmessage = messa;
		category = cat;
		severity = sev;
		implementation = imp;
	};

	CATEGORY category;
	SEVERITY severity;

	std::string generalmessage;
	std::string detailedmessage;
	std::string id;

	Implementation* implementation;
	size_t CharPositionStartInLine = 1;
	size_t CharPositionEndInLine = 1;

	size_t LineStart;
	size_t LineEnd;
};

class IrepportError
{
public:
	virtual void reportError(Issue issue) =0;
};

class Detector : public oxcode::oxadvancedBaseListener
{
protected:
	oxcode::oxadvancedLexer* _lexer;
	oxcode::oxadvancedParser* _parser;
	antlr4::CommonTokenStream* _tokenstream;
	IrepportError* _Ireport;
public:

	void InitDetector(antlr4::CommonTokenStream* tokenstream, oxcode::oxadvancedParser* parser,
	                  oxcode::oxadvancedLexer* lexer, IrepportError* report) ///, IrepportError& report  ) 
	{
		_parser = parser;
		_lexer = lexer;
		_Ireport = report;
		Start();
		_isinit = true;
		_tokenstream = tokenstream;
	}

	void reportError(Issue issue)
	{
		_Ireport->reportError(issue);
	}

	bool _isinit = false;

	virtual void Start()
	{
	};

	virtual bool AppliesTo(antlr4::ParserRuleContext& context, std::string filename) { return false; }
	virtual bool ExitAppliesTo(antlr4::ParserRuleContext& context, std::string filename) { return false; }

	virtual void End()
	{
	}

	virtual void CreateListener(antlr4::ParserRuleContext& node) { ; };
	virtual void CreateExitListener(antlr4::ParserRuleContext& node) { ; };
};

class Registry
{
public :
	std::vector<Issue> Issues;
};

class Implementation
{
public :

	Implementation(SCOPE scope, Type* imp)
	{
		pDetectorClass = imp;
		pDetectorScope = scope;
	}

	Detector* GetNewDetector()
	{
		return static_cast<Detector*>(pDetectorClass->allocate());
	}

	Type* pDetectorClass;
	SCOPE pDetectorScope;
};

class Enum_Detector : public Detector
{
public:

	static bool IsAllUpper(std::string input);

	bool AppliesTo(antlr4::ParserRuleContext& context, std::string filename) override;

	void enterEnumeratordefinition(oxcode::oxadvancedParser::EnumeratordefinitionContext* context) override;

	bool isalluperr(std::string str);

	void CreateListener(antlr4::ParserRuleContext& node) override;
};

class TempInfo
{
public:
	int NbTimesUsed = 0;
	antlr4::tree::ParseTree* tree;
};

class UnusedLocal_Detector : public Detector
{
public:

	bool ExitAppliesTo(antlr4::ParserRuleContext& context, std::string filename) override;
	bool AppliesTo(antlr4::ParserRuleContext& context, std::string filename) override;
	void CreateListener(antlr4::ParserRuleContext& node) override;
	void CreateExitListener(antlr4::ParserRuleContext& node) override;
	void enterInitdeclarator(oxcode::oxadvancedParser::InitdeclaratorContext* context) override;

	void enterAssignmentexpression(oxcode::oxadvancedParser::AssignmentexpressionContext* context) override;
	void enterExternal_function(oxcode::oxadvancedParser::External_functionContext* ctx) override;
	void exitExternal_function(oxcode::oxadvancedParser::External_functionContext* ctx) override;
	void enterParametersandqualifiers(oxcode::oxadvancedParser::ParametersandqualifiersContext* ctx) override;
	
	void End() override;

	void Start() override;
	std::map<std::string, TempInfo> DeclaredLocVars;
	std::map<std::string, TempInfo> Parameters;
};
 
class CustomRegistry : public Registry
{
public:
	CustomRegistry()
	{
		/*Issue AllocIssue2 = Issue("idAllocIssue",
		                          "New / Delete should be together",
		                          CATEGORY::Memory,
		                          SEVERITY::Informational,
		                          new Implementation(SCOPE::ALL_OX, new TypeImpl<Alloc_Detector>));*/

		Issue EnumeIssue2 = Issue("idEnumIssue",
		                          "Enum should be written in UPPER CASE",
		                          CATEGORY::Memory,
		                          SEVERITY::Informational,
		                          new Implementation(SCOPE::ALL_OX, new TypeImpl<Enum_Detector>));


		Issue UnusedLocalIssue = Issue("idUnusedLocalIssue",
		                               "A local variable seems not used",
		                               CATEGORY::Memory,
		                               SEVERITY::Warning,
		                               new Implementation(SCOPE::ALL_OX, new TypeImpl<UnusedLocal_Detector>));


		/*	
			Issues.push_back(AllocIssue2);*/
		Issues.push_back(UnusedLocalIssue);
		Issues.push_back(EnumeIssue2);
	}
};
