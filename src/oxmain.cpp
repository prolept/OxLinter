#include "oxmain.h"
#include "waveidl/cpp.hpp"
#include <ostream>
#include <iostream>

#include "oxlinter.h"
using std::cout;
using std::endl;





// print the current version
std::string get_compile_version()
{
	char buffer[sizeof(BOOST_PLATFORM) + sizeof(BOOST_COMPILER) + sizeof(OXLINTER_VERSION) + sizeof(__DATE__) + 5];
	sprintf(buffer, "%s [%s/%s](%s)", OXLINTER_VERSION, BOOST_PLATFORM, BOOST_COMPILER, __DATE__);
	std::string compileinfo(buffer);
	compileinfo = "Version: " + compileinfo;
	return compileinfo;
}
/*
     FindDefintion   :  Try to locate the declaration of a function.
     
	 F12 shortcut in visual studio code
    
     TODO: extend to member variables + search for external funcion (case 3) + search for base classes. 

     In the following table FUNCTION is the symbol clicked. The search doesn't look into base classes.
     
	+-----------------------+------------------------------------+------+---------------------------------------------------------+
	|                       | Example                            | CASE | Result                                                  |
	+-----------------------+------------------------------------+------+---------------------------------------------------------+
	| Symbols directly      | Mem::FUNCTION()	                 | 1    | Need to look in class definition of Mem                 | OK
	| linked to a class     +------------------------------------+------+---------------------------------------------------------+
	|                       | mem.FUNCTION()                     | 2    | Need to look for type of mem, then its class definition | OK
	+-----------------------+------------------------------------+------+---------------------------------------------------------+
	|                       | mem::get() { FUNCTION() }          | 3    |  Need to look for member functions and then external    | OK 
	|						|									 |DOING | functions	(last not implemented)    	     			  |
	| Others                +------------------------------------+------+---------------------------------------------------------+
	|                       | FUNC() {FUNCTION()}				 |      | Need to look for all external fuctions                  | OK
	|						| when FUNC and FUNCTION are		 |  4   | Aso work if we click on the prototype					  |
	|						| external functions                 |		|                                                         |
	+-----------------------+------------------------------------+------+---------------------------------------------------------+
*/
int  oxMain::FindDefinition(std::string  wordToSearch, std::vector<int> linecol, std::string const& filecontentstdin,  boost::program_options::variables_map const &vm)
{
			Log("FindDefinition");
			antlr4::ANTLRInputStream input(filecontentstdin);
			LinterOx linter(m_FileStdInPath, false, m_IsDebugMode);
			if (!linter.InitLinter(&input, RunAutoCompletion))
				throw  std::runtime_error("Failure Linter [L11]");
			linter.Run();

	
			tree::ParseTree* parentFunction = linter.GetLocalContext(linecol[1], linecol[0]);
			int LineToAvoid = linecol[0] + 1; //line 0 based + 1 based
			if (parentFunction->getText() != wordToSearch)
			{
				Log("Error file has been modified");
				auto jsonObjectsempty = json::array();
				std::cout << jsonObjectsempty << std::endl;
				return eSucces;
			}
			string parentDotClass;
			bool isDotBefore = false; // True--> mem.SetGet(...) and False --> SetGet()	
			bool isDoubleDotBefore = false; //  MEM::SetGet
			antlr4::Token* tokenbefore = linter.m_tokenstream->get(parentFunction->getSourceInterval().a - 1);
			std::string strtemp = tokenbefore->getText();
			if (tokenbefore != nullptr)
			{
				if (tokenbefore->getText() == ".") // ok semble fonctionner
				{
					isDotBefore = true;
					antlr4::Token* variableBeforeDot = linter.m_tokenstream->get(parentFunction->getSourceInterval().a - 2);
					string parentvar = variableBeforeDot->getText();
					int line = variableBeforeDot->getLine();
					std::string MatchingClasse = (linter.m_SymAutoCompletition)->GetMatchingClasseName(parentvar, line);
					if (!MatchingClasse.empty())
					{
						parentDotClass = MatchingClasse;
					}
					else
					{
						Log("Error MLJVp");

						return eSucces;
					}
				}
				else if (tokenbefore->getText() == "::") 
				{
					isDoubleDotBefore = true;
				}
			}
		 
			if (isDotBefore || isDoubleDotBefore)
			{
				/*	
				 CASE 1 :  Mem::FUNCTION()  
				 CASE 2 :  mem.FUNCTION()  
				*/
				Log("CASE 1-2");
				Log("Case dot/double dot");
				
				string classOfFunction;
				if (isDotBefore)
					classOfFunction = parentDotClass;
				else // double dot 
				{
					antlr4::Token* classtoken = linter.m_tokenstream->get(parentFunction->getSourceInterval().a - 2);
					classOfFunction = classtoken->getText();
				}
				std::stringstream text;
				int res = do_preprocessing(m_FileStdInPath, filecontentstdin, vm, text.rdbuf(), true);
				if (res != 0)
				{
					cerr << "Internal error [DLG8A]";
					return res;
				}
				std::string content = text.str();
				antlr4::ANTLRInputStream input2(content); 
				LinterOx linter2(m_FileStdInPath, true, m_IsDebugMode);
				ObjectClass foundedclass;
				auto jsonObjects = json::array();
				if (!linter2.InitLinter(&input2, RunAutoCompletion))
					throw  std::runtime_error("Failure Linter [L12]");
				linter2.Run();
				FunctionDefinition function;
				if (linter2.GetMemberFunctionDefinition(linter2.m_SymAutoCompletition->ListeObjectClassInHeader, classOfFunction, wordToSearch, function, LineToAvoid))
				{
					Log("Code [KML]");
					json j = CreateJsonFromFunctionDefinition(function);
					jsonObjects.push_back(j);
					std::cout << jsonObjects << std::endl;
					return eSucces;
				}
				 ;
				Log("TODO need to search in base class  ...");
				std::cout << jsonObjects << std::endl;
				return eSucces;
			}


			/*  CASE 3 AND 4 */

			int LineStartPos = linecol[0] + 1; //line 0 based + 1 based
			auto Symbols = linter.GetImplementations();
			SymbolItem ParentSymbolFunction = GetParentFunction(Symbols, LineStartPos);
			
			if (ParentSymbolFunction.type == eSymbol::FunctionMember) // CASE 3
			{
				Log("CASE 3");
				std::string classOfFunction = ParentSymbolFunction.classeName;
				FunctionDefinition function;
				if (linter.GetMemberFunctionDefinition(linter.m_SymAutoCompletition->ListeObjectClassInHeader, classOfFunction, wordToSearch, function, LineToAvoid))
				{
					auto jsonObjects = json::array();
					json j = CreateJsonFromFunctionDefinition(function);
					jsonObjects.push_back(j);
					std::cout << jsonObjects << std::endl;
					return eSucces;
				}
				std::stringstream text;
				// not found so need to preprocess..
				int res = do_preprocessing(m_FileStdInPath, filecontentstdin, vm, text.rdbuf(), true);
				if (res != 0)
				{
					cerr << "Internal error [DLG8]";
					return res;
				}
				antlr4::ANTLRInputStream input2(text.str());
				LinterOx linter2(m_FileStdInPath, true, m_IsDebugMode);
				if (linter2.InitLinter(&input2, RunAutoCompletion))
				{
					linter2.Run();
					if (linter2.GetMemberFunctionDefinition(linter2.m_SymAutoCompletition->ListeObjectClassInHeader, classOfFunction, wordToSearch, function, LineToAvoid))
					{ 
						auto jsonObjects = json::array();
						json j = CreateJsonFromFunctionDefinition(function);
						jsonObjects.push_back(j);
						std::cout << jsonObjects << std::endl;
						return eSucces;
					}
				}
				// Need to look for external functions .. 
				Log("TODO - Not implemented [KFA]");
			}
			else if (ParentSymbolFunction.type == eSymbol::ExternalFunction) // CASE 5
			{	Log("CASE 5");
				FunctionDefinition function;
				if (linter.GetGlobalExternFunctionDefinition(linter.m_SymAutoCompletition.get()->ListGlobalFunctionDefinitions, wordToSearch, function, LineToAvoid))
				{
					auto jsonObjects = json::array();
					json j = CreateJsonFromFunctionDefinition(function);
					jsonObjects.push_back(j);
					std::cout << jsonObjects << std::endl;
					return eSucces;
				}
				// search by preprocessing the file 
				std::stringstream text;
				int res = do_preprocessing(m_FileStdInPath, filecontentstdin, vm, text.rdbuf(), true);
				if (res != 0)
				{
					cerr << "Internal error [DLG8]";
					return res;
				}
				antlr4::ANTLRInputStream input2(text.str());
				LinterOx linter2(m_FileStdInPath, true, m_IsDebugMode);
				if (!linter2.InitLinter(&input2, RunAutoCompletion))
					throw  std::runtime_error("Failure Linter [L13]");
				linter2.Run();
				FunctionDefinition function2;
				if (linter2.GetGlobalExternFunctionDefinition(linter2.m_SymAutoCompletition.get()->ListGlobalFunctionDefinitions, wordToSearch, function2, LineToAvoid))
				{
					//LogConsole("code:KFSP");  
					auto jsonObjects = json::array();
					json j = CreateJsonFromFunctionDefinition(function2);
					jsonObjects.push_back(j);
					std::cout << jsonObjects << std::endl;
					return eSucces;
				}

				// Should we search in implementations instead of declarations/definitiion ?
				Log("TODO - Not implemented [DEF]");
				auto jsonObjects = json::array();
				std::cout << jsonObjects << std::endl;
				return eSucces;
			}
			else
			{
				Log("TODO - Not implemented [KFE]");
			}
			auto jsonObjects = json::array();
			std::cout << jsonObjects << std::endl;
			return eSucces;
}
/**
 *  Find Implementation : locate the implemenation of a function
 *  //TODO doc et code a revoir 
 *
 *  CASE  1  mem.FUNCTION
 *  CASE  2  CustomClass::Func(){ FUNCTION(...) }

 	 +--------------------------------------------+------+---------------------------------------------------------+
	 | Example									  | CASE | Result                                                  |
	 +--------------------------------------------+------+---------------------------------------------------------+
	 | mem.FUNCTION								  |  1   | Need to look for type of mem and find implementation    |  
	 +--------------------------------------------+------+---------------------------------------------------------+
	 |  CustomClass::Func(){ FUNCTION(...) }      |  2   | Determine parent class (CustomClass) and find implemntation
	 |											  |      | Can also work if no parent function,                    
	 +--------------------------------------------+------+---------------------------------------------------------+
	 |  FUNCTION();  (delcaration in .oxh )		  |  3   |     |  
	 +--------------------------------------------+------+---------------------------------------------------------+	 
	
 */

	
int oxMain::FindImplementation(std::string  wordToSearch, std::vector<int> linecol, std::string const& filecontentstdin,  boost::program_options::variables_map const &vm)
{		 
			//EN COURS A DEVOPER ET UTILISER CF https://stackoverflow.com/questions/53979802/how-to-recover-the-parserrulecontext-for-a-specific-line-and-character-position/53985729#53985729
	 
			antlr4::ANTLRInputStream input(filecontentstdin);
			LinterOx linter(m_FileStdInPath, false, m_IsDebugMode);
			if (!linter.InitLinter(&input, RunAutoCompletion))
				throw  std::runtime_error("Failure Linter [31]");
			linter.Run();


			tree::ParseTree* parentFunction = linter.GetLocalContext(linecol[1], linecol[0]);

		
			//// a ameliorer pour verifier que le mot recehrche est bien une fonction ! (par exemple ca ne sert a rien de chercher pour un "decl dsd = sdkldk")		 
			string parentDotClass;
			bool isDotBefore = false;  	
			antlr4::Token* tokenbefore = linter.m_tokenstream->get(parentFunction->getSourceInterval().a - 1); // possible problem if -1 --> inferior a zero ??
			if (tokenbefore != nullptr)
			{
				if (tokenbefore->getText() == ".")
				{
					// look for the name of the class
					isDotBefore = true;
					antlr4::Token* variableBeforeDot = linter.m_tokenstream->get(parentFunction->getSourceInterval().a - 2);
					string parentvar = variableBeforeDot->getText();
					int line = variableBeforeDot->getLine();
					std::string MatchingClasse = (linter.m_SymAutoCompletition)->GetMatchingClasseName(parentvar, line);
					if (!MatchingClasse.empty())
					{
						parentDotClass = MatchingClasse;
					}
				}
			}
			/* [START]  trouve la classe de la fonction */
			string classOfFunction;
			string BaseParentClasss;
			if (isDotBefore) //ex : mem.SetGet(); CASE 1
			{
				classOfFunction = parentDotClass;
			}
			else // ex: SetGet();  CASE 2
			{
				// trouve la fonction dans la classe de la fonction externe (ex : MEM::dsd(){FUNCTION()}) --> Find MEM	
				int LineStartPos = linecol[0] + 1; 
				auto Symbols = linter.GetImplementations();
				SymbolItem ParentSymbolFunction = GetParentFunction(Symbols, LineStartPos);
				if (ParentSymbolFunction.type == eSymbol::FunctionMember)
				{
					classOfFunction = ParentSymbolFunction.classeName;
				}
				else if (ParentSymbolFunction.type == eSymbol::ExternalFunction)
				{
					//search for external functions in current file
#pragma region SearchExternalFunctions
					for (size_t i = 0; i < Symbols.size(); i++)
					{
						auto currentSymbol = Symbols[i];
						if (currentSymbol.type == eSymbol::ExternalFunction && currentSymbol.FunctionName == wordToSearch)
						{
							auto jsonobject = linter.Beutifull_GetSymbol(currentSymbol);
							auto jsonObjects = json::array();
							jsonObjects.push_back(jsonobject);
							std::cout << jsonObjects << std::endl;
							return eSucces;
							//AA 
						}
					}

					// preprocess and try to find again
					std::stringstream text;
					int res = do_preprocessing(m_FileStdInPath, filecontentstdin, vm, text.rdbuf(), true);
					if (res != 0)
					{
						cerr << "Internal error [DLG8]";
						return res;
					}
					std::string content = text.str();
					antlr4::ANTLRInputStream input2(content);  
					LinterOx linter2(m_FileStdInPath, true, m_IsDebugMode);
					if (!linter2.InitLinter(&input2, RunAutoCompletion))
						throw  std::runtime_error("Failure Linter [32]");
					linter2.Run();
					auto Symbols2 = linter2.GetImplementations();
					for (size_t i = 0; i < Symbols2.size(); i++)
					{
						auto currentSymbol = Symbols2[i];
						if (currentSymbol.type == eSymbol::ExternalFunction && currentSymbol.FunctionName == wordToSearch)
						{
							auto jsonobject = linter2.Beutifull_GetSymbol(currentSymbol);
							auto jsonObjects = json::array();
							jsonObjects.push_back(jsonobject);
							std::cout << jsonObjects << std::endl;
							return eSucces;
							 
						}
					}
#pragma endregion 
				}
				else
				{
					// in header file
					// CASE 3
					std::vector<ObjectClass> classesInCurrent = linter.GetClassFounds(linter.m_SymAutoCompletition->ListeObjectClassInHeader);
					if (!GetParentClasseFromHeaderClass(classesInCurrent, LineStartPos, classOfFunction))
					{
						Log("Parent function not found [dsklds]");
						return eSucces;
					}
				}
			}
			Log("classOfFunction : " + classOfFunction);
			/* [END]  trouve la classe de la fonction */
			if (classOfFunction.empty())
			{
				Log("classOfFunction :is empty ! ");
				auto jsonObjects = json::array();
				std::cout << jsonObjects << std::endl;
				// a emliorer ici pour prendre en compte lorsque l'on cherche une fonction externe 
				// a l'interieur d'une autre fonction externe. (la suite de AA) 
				return eInvalidArgument;
			}

			/* [START]  trouve la  base de la classe si elle existe */
			std::stringstream text;
			int res = do_preprocessing(m_FileStdInPath, filecontentstdin, vm, text.rdbuf(), true);
			if (res != 0)
			{
				cerr << "Internal error [DLG8]";
				return res;
			}
			std::string content = text.str();
			std::string contentCopy = content;
			antlr4::ANTLRInputStream input2(content);  
			LinterOx linter2(m_FileStdInPath, true, m_IsDebugMode);
			if (!linter2.InitLinter(&input2, RunAutoCompletion))
				throw  std::runtime_error("Failure Linter [32]");
			linter2.Run();
			std::vector<ObjectClass> classesInCurrentFile2 = linter2.GetClassFounds(linter2.m_SymAutoCompletition->ListeObjectClassInHeader);
			for (size_t i = 0; i < classesInCurrentFile2.size(); i++)
			{
				ObjectClass object_class = classesInCurrentFile2[i];
				if (object_class.name == classOfFunction && !object_class.parentClasse.empty())
				{
					BaseParentClasss = object_class.parentClasse;
					break;
				}
			}
			SimpleClassDef classInformation;
			classInformation.baseclasseName = BaseParentClasss;
			classInformation.classeName = classOfFunction;
			Log("classInformation.baseclasseName  : " + classInformation.baseclasseName);
			Log("classInformation.classeName  : " + classInformation.classeName);
			/* [END]  trouve la  base de la classe si elle existe */


			// problem oxfloat.oxh une fois preprocessed ne fonctionne plus !! 
			antlr4::ANTLRInputStream input3(contentCopy); 
			LinterOx linter3(m_FileStdInPath, true, m_IsDebugMode);
			if (!linter3.InitLinter(&input3, RunImplementationAndSymbols))
				throw  std::runtime_error("Failure Linter [32]");
			linter3.Run();
			std::vector<json> AdditionalIssuesReported;
			std::vector<SymbolItem> AdditionalvSymboleItem;
			json jsonobject;
			if (linter3.FindImplementation(wordToSearch, classInformation, jsonobject))
			{
				auto jsonObjects = json::array();
				jsonObjects.push_back(jsonobject);
				std::cout << jsonObjects << std::endl;
				return eSucces;
			}
			Log("FIND [II]");
			/* ca fonctionne ici mais c'est tres long  
			2 ieme tentative pour voir si plus rapide en loopant sans prepocesser cette fois sur tous les fichiers du dossier ??
			*/
			bool analyseSymbol = false, analyseError = false, analyseImplementation = true;

			//the next line should print the implement if found
			//TODO
			linter3.RunAssociatedOxFiles(vm, m_FileStdInPath, filecontentstdin, analyseError, analyseSymbol, analyseImplementation, AdditionalIssuesReported, AdditionalvSymboleItem, wordToSearch, classInformation);

			return eSucces;
}
void oxMain::Log(std::string log)
{
	if(m_IsDebugMode)
		std::cerr << "Log console: " << log << std::endl;
	
}
oxlinter_error_code oxMain::GenerateDocumentation(std::string prototypeFunction)
{

			if (prototypeFunction.empty())
			{
				std::cout << "*" << std::endl;
				std::cout << "*/" << std::endl;
				Log("Empty gendoc");
				return eSucces;
			}
			antlr4::ANTLRInputStream input(prototypeFunction);
			LinterOx linter(m_FilePath, false, m_IsDebugMode);
			if (linter.InitLinter(&input, RunGenDoc))
			{
				linter.Run();
			}
			if ((linter.m_SymGenDocDetector)->alreadyOneTreatede)
			{
				//doxygen style
				FunctionDefinition function = (linter.m_SymGenDocDetector)->function;
				std::cout << "*" << std::endl;
				for (unsigned i = 0; i < function.arguments.size(); i++)
				{
					Argument arg = function.arguments[i];
					std::cout << "* @param    " << arg.name << std::endl;
				}
				std::cout << "*" << std::endl;
				std::cout << "* @return    " << std::endl;
				std::cout << "*/" << std::endl;
			}
			else
			{
				std::cout << "*" << std::endl;
				std::cout << "*/" << std::endl;
			}
			return eSucces;
}


/*  PrintAutoCompletion
 *  
 *  Try to autocomplete, variableToSearch is the word before the "." (dot)
 *  
 *  Exemple 1 :
 *   > decl myInstance = new Modelbase(); 
 *   Then
 *   > myInstance.   ---> should find public function/members of myInstance 
 *
 *   Exemple 2 :
 *   
 *   > Modelbase::Func(){
 *   > this. --> should find public and protected function/members
 *   > }
 *
 *   Remark: Currently it first tries on the non-preprocessed file, might be not efficient.
 */
 int oxMain::PrintAutoCompletion(std::string  variableToSearch,  std::string const& filecontentstdin, int LineOfVariable,  boost::program_options::variables_map const &vm)
{
			std::string fakefile;
			if (variableToSearch == "this") // Inside an External Member function
			{
				bool printProtectedFunction = true, printProtectedMember = true, printPublicMember = true, printPublicFunction = true;
				string parentClass;
				antlr4::ANTLRInputStream input(filecontentstdin);
				LinterOx linter(m_FileStdInPath, false, m_IsDebugMode);
				// try to find the parent class (Modelbase in the example)
				if (!linter.InitLinter(&input, RunAutoCompletion))
					throw  std::runtime_error("Failure Linter [L1]");
				(linter.m_SymAutoCompletition)->LineNumberForSearchScopeOfExternalFunction = LineOfVariable;
				linter.Run();
				parentClass = (linter.m_SymAutoCompletition)->ScopeOfExternalFunction;//  "MEM";//TODO GET SCOPE OF EXTERNAL FUNCTION HERE  linter.GetScopeClassFromLine(LineOfVariable);			
				if (parentClass.empty())
				{
					json empty;
					std::cout << empty << endl;;
					return eSucces;
				}
				std::vector<ObjectClass> classesInCurrentFile = linter.GetClassFounds(linter.m_SymAutoCompletition->ListeObjectClassInHeader);
				json jsonObject = GetAutocompletitionClassJson(classesInCurrentFile, parentClass, printProtectedFunction, printProtectedMember, printPublicMember, printPublicFunction);
				if (!jsonObject.empty())
				{
					std::cout << jsonObject << endl;;
					return eSucces;
				}
				// if not found in the current ox file, need to work on the preprocessed content
				std::stringstream text;
				int res = do_preprocessing(m_FileStdInPath, filecontentstdin, vm, text.rdbuf(), true);
				if (res != 0)
				{
					cerr << "Internal error [DLG8]";
					return res;
				}
				std::ofstream output;
				antlr4::ANTLRInputStream input2(text);
				LinterOx linter2(fakefile, true, m_IsDebugMode);
				if (!linter2.InitLinter(&input2, RunAutoCompletion))
					throw  std::runtime_error("Failure Linter [L2]");
				linter2.Run();
				std::vector<ObjectClass> classesInCurrentFile2 = linter2.GetClassFounds(linter2.m_SymAutoCompletition->ListeObjectClassInHeader);
				jsonObject = GetAutocompletitionClassJson(classesInCurrentFile2, parentClass, printProtectedFunction, printProtectedMember, printPublicMember, printPublicFunction);
				if (!jsonObject.empty())
				{
					std::cout << jsonObject << endl;;
					return eSucces;
				}
				json empty;
				std::cout << empty << endl;;
				return eSucces;
			}

			// after a dot ('.') ex : myInstance.SetGet, do not print protected member
			{
				bool printProtectedFunction = false, printProtectedMember = false, printPublicMember = true, printPublicFunction = true;
				antlr4::ANTLRInputStream input(filecontentstdin);
				LinterOx linter(m_FileStdInPath, false, m_IsDebugMode);
				if (!linter.InitLinter(&input, RunAutoCompletion))
					throw  std::runtime_error("Failure Linter [L3]");
				linter.Run();
				// try to find the class based on the name of the instance (exemple :try to find ModelBase from myInstance)
				std::string MatchingClasse = (linter.m_SymAutoCompletition)->GetMatchingClasseName(variableToSearch, LineOfVariable);
				if (MatchingClasse.empty())
				{
					Log("Code [KFIF]");
					json empty;
					std::cout << empty << endl;;
					return eSucces;
				}

				std::vector<ObjectClass> classesInCurrentFile = linter.GetClassFounds(linter.m_SymAutoCompletition->ListeObjectClassInHeader);

				json jsonObject = GetAutocompletitionClassJson(classesInCurrentFile, MatchingClasse, printProtectedFunction, printProtectedMember, printPublicMember, printPublicFunction);
				if (!jsonObject.empty())
				{
					std::cout << jsonObject << endl;;
					return eSucces;
				}
				// if not found in the current ox file, need to work on the preprocessed content
				std::stringstream text;
				int res = do_preprocessing(m_FileStdInPath, filecontentstdin, vm, text.rdbuf(), true);
				if (res != 0)
				{
					cerr << "Internal error [DLG8PP]";
					return res;
				}
				std::ofstream output;
				antlr4::ANTLRInputStream input2(text); //  // Input is expected to be encoded in UTF-8
				LinterOx linter2(fakefile, true, m_IsDebugMode);
				if (!linter2.InitLinter(&input2, RunAutoCompletion))
					throw  std::runtime_error("Failure Linter [L4]");
				linter2.Run();
				std::vector<ObjectClass> classesInCurrentFile2 = linter2.GetClassFounds(linter2.m_SymAutoCompletition->ListeObjectClassInHeader);
				jsonObject = GetAutocompletitionClassJson(classesInCurrentFile2, MatchingClasse, printProtectedFunction, printProtectedMember, printPublicMember, printPublicFunction);
				if (!jsonObject.empty())
				{
					std::cout << jsonObject << endl;;
					return eSucces;
				}
				json empty;
				std::cout << empty << endl;;
				return eSucces;
			}
}
void oxMain::printCopyright()
{
	char const *copyright[] = {
			   "",
			   "OxLinter: a linter for ox",
			   "",
			   "Copyright (c) 2019-2021 Prolept, www.prolept.com",
			   "MIT License",
				0
	};

	for (int i = 0; 0 != copyright[i]; ++i)
		cout << copyright[i] << endl;
}

void oxMain::printVersion()
{
	std::cout << get_compile_version() << endl;
}

void oxMain::SetDebugMode(bool debug)
{
	m_IsDebugMode = debug;
}

void oxMain::SetFilePath(std::string filepath)
{
	m_FilePath = filepath;
	m_IsFilePath = true;
}
void oxMain::SetFilePathStdIn(std::string filepath)
{
	m_FileStdInPath = filepath;
	m_IsFileStdInPath  = true;
}
 