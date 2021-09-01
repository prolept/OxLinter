//// OxLinter.cpp : Defines the entry point for the console application.
//#include "stdafx.h"
//
#include "OxLinter.h"

#pragma region  Json

json LinterOx::GetjsonErrors()
{
	auto jsonObjects = json::array();
	for (auto var : m_IssuesReported)
	{
		jsonObjects.push_back(Beutifull_GetError(var));
	}
	return jsonObjects;
}

json LinterOx::Beutifull_GetSymbol(SymbolItem symmbolItem)
{
	std::string detailmeassage = "";

	std::string file = "";
	if (symmbolItem.type == eSymbol::FunctionMember)
	{
		std::string startcharacter_class = std::to_string(symmbolItem.CharPositionStartInLine);
		std::string endcharacter_class = std::to_string(symmbolItem.CharPositionEndInLine);

		/*std::string startcharacter_function = std::to_string(symmbolItem.CharPositionStartInLine_1);
		std::string endcharacter_function = std::to_string(symmbolItem.CharPositionEndInLine_1);*/


		int lineStartInFile_class;
		int lineEndinFile_class;

		/*	int lineStartInFile_function;
			int lineEndinFile_function;*/

		if (m_IsPreprocessedFile)
		{
			GetLineAndFile(symmbolItem, symmbolItem.LineStart, lineStartInFile_class, file);
			GetLineAndFile(symmbolItem, symmbolItem.LineEnd, lineEndinFile_class, file);

			/*	GetLineAndFile(symmbolItem, symmbolItem.LineStart_1, lineStartInFile_function, file);
				GetLineAndFile(symmbolItem, symmbolItem.LineEnd_1, lineEndinFile_function, file);*/
		}
		else
		{
			file = m_currentFile;
			lineStartInFile_class = symmbolItem.LineStart;
			lineEndinFile_class = symmbolItem.LineEnd;

			/*	lineStartInFile_function = symmbolItem.LineStart_1;
				lineEndinFile_function = symmbolItem.LineEnd_1;*/
		}


		json j;
		j["startLine"] = std::to_string(lineStartInFile_class);
		j["endLine"] = std::to_string(lineEndinFile_class);
		j["startcharacter"] = startcharacter_class;
		j["endcharacter"] = endcharacter_class; // endcharacter_function;
		j["symboltype"] = "FunctionMember";
		j["classeName"] = symmbolItem.classeName;
		j["functionName"] = symmbolItem.FunctionName;
		j["file"] = file;

		//symmbolItem.
		return j;
	}
	else if (symmbolItem.type == eSymbol::ExternalFunction)
	{
		std::string startcharacter_function = std::to_string(symmbolItem.CharPositionStartInLine);
		std::string endcharacter_function = std::to_string(symmbolItem.CharPositionEndInLine);


		int lineStartInFile_function;
		int lineEndinFile_function;

		if (m_IsPreprocessedFile)
		{
			GetLineAndFile(symmbolItem, symmbolItem.LineStart, lineStartInFile_function, file);
			GetLineAndFile(symmbolItem, symmbolItem.LineEnd, lineEndinFile_function, file);
		}
		else
		{
			file = m_currentFile;

			lineStartInFile_function = symmbolItem.LineStart;
			lineEndinFile_function = symmbolItem.LineEnd;
		}


		json j;
		j["startLine"] = std::to_string(lineStartInFile_function);
		j["endLine"] = std::to_string(lineEndinFile_function);
		j["startcharacter"] = startcharacter_function;
		j["endcharacter"] = endcharacter_function;
		j["symboltype"] = "ExternalFunction";
		j["functionName"] = symmbolItem.FunctionName;
		j["file"] = file;
		return j;
	}
	else if (symmbolItem.type == eSymbol::ExternalFunctionDefinition)
	{
		std::string startcharacter_function = std::to_string(symmbolItem.CharPositionStartInLine);
		std::string endcharacter_function = std::to_string(symmbolItem.CharPositionEndInLine);


		int lineStartInFile_function;
		int lineEndinFile_function;

		if (m_IsPreprocessedFile)
		{
			GetLineAndFile(symmbolItem, symmbolItem.LineStart, lineStartInFile_function, file);
			GetLineAndFile(symmbolItem, symmbolItem.LineEnd, lineEndinFile_function, file);
		}
		else
		{
			file = m_currentFile;

			lineStartInFile_function = symmbolItem.LineStart;
			lineEndinFile_function = symmbolItem.LineEnd;
		}


		json j;
		j["startLine"] = std::to_string(lineStartInFile_function);
		j["endLine"] = std::to_string(lineEndinFile_function);
		j["startcharacter"] = startcharacter_function;
		j["endcharacter"] = endcharacter_function;
		j["symboltype"] = "ExternalFunctionDefinition";
		j["functionName"] = symmbolItem.FunctionName;
		j["file"] = file;
		return j;
	}

	json empty;
	//empty["res"] = "empty";
	return empty;
}

json LinterOx::Beutifull_GetError(Issue issue)
{
	std::string detailmeassage = "";
	if (!issue.detailedmessage.empty())
		detailmeassage = issue.detailedmessage;

	std::string file = "";

	std::string severity = SeverityToString(issue.severity);
	std::string category = CategoryToString(issue.category);

	std::string startcharacter = std::to_string(issue.CharPositionStartInLine);
	std::string endcharacter = std::to_string(issue.CharPositionEndInLine);

	int lineStartInFile;
	int lineEndinFile;

	if (m_IsPreprocessedFile)
	{
		GetLineAndFile(issue, issue.LineStart, lineStartInFile, file);
		GetLineAndFile(issue, issue.LineEnd, lineEndinFile, file);
	}
	else
	{
		file = m_currentFile;
		lineStartInFile = issue.LineStart;
		lineEndinFile = issue.LineEnd;
	}


	std::string startLine = std::to_string(lineStartInFile);
	std::string endLine = std::to_string(lineEndinFile);


	json j;
	j["startLine"] = startLine;
	j["endLine"] = endLine;
	j["startcharacter"] = startcharacter;
	j["endcharacter"] = endcharacter;
	j["Severity"] = severity;
	j["category"] = category;
	j["file"] = file;
	j["generalmessage"] = issue.generalmessage;
	j["detailmeassage"] = detailmeassage;
	return j;
}
#pragma endregion

#pragma region Print errors/symbols  related

void LinterOx::AnalyseAdditionalOxFileToImport(boost::program_options::variables_map const& vm,
                                               std::vector<boost::filesystem::path> vecOxFiles,
                                               std::vector<std::string> vecIncludePaths,
                                               bool analyseError,
                                               bool analyseSymbol,
                                               bool analyseImplementation,
                                               std::vector<json>& AdditionalIssuesReported,
                                               std::vector<SymbolItem>& AdditionalvSymboleItem,
                                               std::string wordToSearch, SimpleClassDef ParentScopeFunction)
{
	//possible que le fchier ne soit pas trouvé (dans le cas où il s'agit d'un oxo)

	bool oneImplementationFound = false;

	for (auto oxfile : vecOxFiles)
	{
		std::string fullpath;
		if (LoacateOxFiles(oxfile.generic_string(), vecIncludePaths, fullpath))
		{
			if (analyseImplementation)
			{
				bool isfilePreprocessed = false;
				//TODO TRES IMPORTANT (je crois...) ici je dois encore essayer de preprocessed le file  normalement 
				//  mais desactivié temporariement car il y a un probleme lorsque l'on preprocesse oxfloat.oxh ...
				/*	std::ifstream ifs;
					ifs.open(fullpath);
					std::stringstream text;	 
					
					int res = do_actual_work(fullpath, vm, text.rdbuf())
					isfilePreprocessed=true;*/
				std::cerr << "TEST PATH : " + fullpath << std::endl;
				int res = 0;
				std::ifstream text;
				text.open(fullpath);

				if (res == 0)
				{
					std::ofstream output;
					antlr4::ANTLRInputStream input(text);
					LinterOx linter(fullpath, isfilePreprocessed, m_IsInDevMode);
					if (linter.InitLinter(&input, RunImplementationAndSymbols))
					{
						linter.Run();
						json jsonobject;
						if (linter.FindImplementation(wordToSearch, ParentScopeFunction, jsonobject))
						{
							std::cerr << "PrintImplementations intra" << std::endl;
							//pas la peine de chercher dans ts les fichiers ox si deja trouve a ce stade.
							//linter.PrintImplementations(wordToSearch,ParentScopeFunction);	
							//std::cerr << "PrintImplementations intra" << std::endl;
							auto jsonObjects = json::array();
							jsonObjects.push_back(jsonobject);
							std::cout << jsonObjects << std::endl;
							oneImplementationFound = true;
							//break;
							//text.close();

							return;
						}
					}
				}
				else
				{
					std::cerr << "Error: fail to load the file (558)" << fullpath << std::endl;
				}
				text.close();
			} // if(analyseImplementation)
			else
			{
				std::ifstream ifs;
				ifs.open(fullpath);
				if (!ifs.fail())
				{
					antlr4::ANTLRInputStream input(ifs);
					LinterOx linter(fullpath, false, m_IsInDevMode);
					if (linter.InitLinter(&input))
					{
						linter.Run();
						if (analyseError)
						{
							//std::cerr << "START analyseError additional "  << std::endl;
							AdditionalIssuesReported.push_back(linter.GetjsonErrors());
							//IssuesReported = linter.IssuesReported;
							//linter.PrintErrors();
							//std::cerr << "END analyseError additional "  << std::endl;
						}

						if (analyseSymbol)
						{
							/*	std::cerr << "analyseSymbol additional"  << std::endl;
					 
								AdditionalvSymboleItem = linter.vSymboleItem;*/
						}
					}
					ifs.close();
				}
				else
				{
					std::cerr << "Error: fail to load the file (558)" << fullpath << std::endl;
				}
			}
		} // 	if (LoacateOxFiles
	}


	if (analyseImplementation && ! oneImplementationFound)
	{
		// if not found print empty one 
		auto jsonObjects = json::array();
		std::cout << jsonObjects << std::endl;
	}
}

std::shared_ptr<std::vector<IncludeInfo>> LinterOx::analyse_include(antlr4::ANTLRInputStream input)
{
	auto vecincludeInfo = std::shared_ptr<std::vector<IncludeInfo>>(new std::vector<IncludeInfo>());
	try
	{
		oxcode::oxadvancedLexer lexer(&input);
		antlr4::CommonTokenStream tokenstream(&lexer);
		tokenstream.fill();
		//	std::vector<antlr4::Token *> tok = tokenstream.getTokens(0, tokenstream.size()-1, 23);
		std::vector<antlr4::Token*> tok = tokenstream.getTokens(0, tokenstream.size() - 1);
		std::vector<antlr4::Token*> tokenInclude;

		for (antlr4::Token* token : tok)
		{
			std::string text = token->getText();
			if (text.substr(0, 5) == "#line")
			{
				tokenInclude.push_back(token);
			}
			if (text.substr(0, 5) == "#impo")
			{
				tokenInclude.push_back(token);
			}
		}
		for (antlr4::Token* token : tokenInclude)
		{
			std::string text = token->getText();
			if (text.find("#line") != std::string::npos)
			{
				std::regex reg("#line ([0-9]*) \"(.*?)\"");
				if (std::regex_match(text, reg))
				{
					std::smatch cm; // same as std::match_results<const char*> cm;
					std::regex_match(text, cm, reg);
					int LineBeelow = std::stoi(cm[1]);
					std::string file = cm[2];
					//auto inc =  std::make_shared<IncludeInfo*>(new IncludeInfo(token->getLine(), LineBeelow, file));
					IncludeInfo inc(token->getLine(), LineBeelow, file);
					(*vecincludeInfo).push_back(inc);
				}
			}
			if (text.find("#impo") != std::string::npos)
			{
				std::regex reg("#impo ([0-9]*) \"(.*?)\"");
				if (std::regex_match(text, reg))
				{
					std::smatch cm; // same as std::match_results<const char*> cm;
					std::regex_match(text, cm, reg);
					int LineBeelow = std::stoi(cm[1]);
					std::string file = cm[2];
					//auto inc =  std::make_shared<IncludeInfo*>(new IncludeInfo(token->getLine(), LineBeelow, file));
					IncludeInfo inc(token->getLine(), LineBeelow, file, true);
					(*vecincludeInfo).push_back(inc);
				}
			}
		}
	}
	catch (std::runtime_error ex)
	{
		std::cerr << ex.what() << std::endl;
		throw ex;
	}
	return vecincludeInfo;
}

void LinterOx::exitEveryRule(ParserRuleContext* context)
{
	if (m_IsLinter)
	{
		if (m_iCounterErrors > m_iMaxNumberErrors)
		{
			m_IsThereSomeErrorsNotReported = true;
			return;
		}
		for (Detector* dect : m_ListdecDetectors)
		{
			if (dect->ExitAppliesTo(*context, ""))
			{
				dect->CreateExitListener(*context);
			}
		}
	}
}

void LinterOx::enterEveryRule(antlr4::ParserRuleContext* context)
{
	if (m_IsLinter)
	{
		if (m_iCounterErrors > m_iMaxNumberErrors)
		{
			m_IsThereSomeErrorsNotReported = true;
			return;
		}
		for (Detector* dect : m_ListdecDetectors)
		{
			if (dect->AppliesTo(*context, ""))
			{
				dect->CreateListener(*context);
			}
		}
	}

	//if (currentflag  & RunFunctionMember )
	//{
	//	auto symbolmemberfunction = (sym_functionMembre);
	//	if (symbolmemberfunction->AppliesTo(*context, ""))
	//	{
	//		symbolmemberfunction->CreateListener(*context);
	//	}
	//}
	if (currentflag & RunImplementationAndSymbols)
	{
		auto symbolImplementation = (m_SymImplementation);
		if (symbolImplementation->AppliesTo(*context, ""))
		{
			symbolImplementation->CreateListener(*context);
		}
	}
	if (currentflag & RunAutoCompletion)
	{
		auto completition = (m_SymAutoCompletition);
		if (completition->AppliesTo(*context, ""))
		{
			completition->CreateListener(*context);
		}
	}
	if (currentflag & RunGenDoc)
	{
		auto completition = (m_SymGenDocDetector);
		if (completition->AppliesTo(*context, ""))
		{
			completition->CreateListener(*context);
		}
	}
}

std::vector<ObjectClass> LinterOx::GetClassFounds(std::vector<ObjectClassPtr> ListeObjectClass)
{
	std::vector<ObjectClass> vecObject;
	try
	{
		for (size_t i = 0; i < ListeObjectClass.size(); i++)
		{
			ObjectClassPtr object_class_ptr = ListeObjectClass[i];
			ObjectClass object;

			std::string classeName = object_class_ptr.classe->classhead()->classheadname()->classname()->getText();
			antlr4::Token* tokenclass = m_tokenstream->get(object_class_ptr.classe->getSourceInterval().a);
			antlr4::Token* tokenclassEnd = m_tokenstream->get(object_class_ptr.classe->getSourceInterval().b);
			object.name = classeName;
			object.CharPositionStartInLine = tokenclass->getCharPositionInLine();
			object.CharPositionEndInLine = (tokenclass->getStopIndex() - tokenclass->getStartIndex()) + tokenclass->
				getCharPositionInLine() + 1;

			if (classeName == "MEM")
				int debug = 55;
			if (m_IsPreprocessedFile)
			{
				int lineStart, lineEnd;
				std::string fileTemp;
				GetLineAndFile(tokenclass->getLine(), lineStart, fileTemp);
				GetLineAndFile(tokenclassEnd->getLine(), lineEnd, fileTemp);
				object.LineStart = lineStart;
				object.LineEnd = lineEnd;
				object.filename = fileTemp;
			}
			else
			{
				object.LineStart = tokenclass->getLine();
				object.LineEnd = tokenclassEnd->getLine();
				object.filename = m_currentFile;
			}


			if (object_class_ptr.classe->classhead()->children.size() == 3)
			{
				std::string baseclasse = object_class_ptr.classe->classhead()->children[2]->children[1]->getText();
				object.parentClasse = baseclasse;
			}


			for (size_t j = 0; j < object_class_ptr.publicFuncton.size(); j++)
			{
				oxcode::oxadvancedParser::External_functionContext* func = object_class_ptr.publicFuncton[j];
				FunctionDefinition function;
				function.name = func->functionname()->getText();
				if (func->functionspecifier())
				{
					function.specifier = func->functionspecifier()->getText();
				}
				///new to optimize to import only if correct functon
				const std::string xpath_enum = "*//*/functionarguments"; // 
				antlr4::tree::xpath::XPath finder2(m_parser.get(), xpath_enum);
				std::vector<antlr4::tree::ParseTree*> subtrees2 = finder2.evaluate(func);
				for (antlr4::tree::ParseTree* var : subtrees2)
				{
					if (oxcode::oxadvancedParser::FunctionargumentsContext* argument = dynamic_cast<oxcode::
						oxadvancedParser::FunctionargumentsContext*>(var))
					{
						Argument arg;
						if (argument->optionalargument() != nullptr)
						{
							arg.name = "...";
						}
						else
						{
							arg.name = argument->declarator()->getText();
							if (argument->declspecifierseq())
							{
								arg.specifier = argument->declspecifierseq()->getText();
							}
						}
						function.arguments.insert(function.arguments.begin(), arg);
					}
				}

				antlr4::Token* tokenclass = m_tokenstream->get(func->getSourceInterval().a);
				function.CharPositionStartInLine = tokenclass->getCharPositionInLine();
				function.CharPositionEndInLine = (tokenclass->getStopIndex() - tokenclass->getStartIndex()) +
					tokenclass->getCharPositionInLine() + 1;
				if (m_IsPreprocessedFile)
				{
					int lineStart, lineEnd;
					std::string fileTemp;
					GetLineAndFile(tokenclass->getLine(), lineStart, fileTemp);
					GetLineAndFile(tokenclass->getLine(), lineEnd, fileTemp);
					function.LineStart = lineStart;
					function.LineEnd = lineEnd;
				}
				else
				{
					function.LineStart = tokenclass->getLine();
					function.LineEnd = tokenclass->getLine();
				}
				object.publicFunctions.push_back(function);
			}
			for (size_t j = 0; j < object_class_ptr.protectedFunction.size(); j++)
			{
				oxcode::oxadvancedParser::External_functionContext* func = object_class_ptr.protectedFunction[j];
				FunctionDefinition function;
				function.name = func->functionname()->getText();
				if (func->functionspecifier())
				{
					function.specifier = func->functionspecifier()->getText();
				}
				///new to optimize to import only if correct functon
				const std::string xpath_enum = "*//*/functionarguments"; // 
				antlr4::tree::xpath::XPath finder2(m_parser.get(), xpath_enum);
				std::vector<antlr4::tree::ParseTree*> subtrees2 = finder2.evaluate(func);
				for (antlr4::tree::ParseTree* var : subtrees2)
				{
					if (oxcode::oxadvancedParser::FunctionargumentsContext* argument = dynamic_cast<oxcode::
						oxadvancedParser::FunctionargumentsContext*>(var))
					{
						Argument arg;
						if (argument->optionalargument() != nullptr)
						{
							arg.name = "...";
						}
						else
						{
							arg.name = argument->declarator()->getText();
							if (argument->declspecifierseq())
							{
								arg.specifier = argument->declspecifierseq()->getText();
							}
						}
						function.arguments.insert(function.arguments.begin(), arg);
					}
				}
				antlr4::Token* tokenclass = m_tokenstream->get(func->getSourceInterval().a);
				function.CharPositionStartInLine = tokenclass->getCharPositionInLine();
				function.CharPositionEndInLine = (tokenclass->getStopIndex() - tokenclass->getStartIndex()) +
					tokenclass->getCharPositionInLine() + 1;

				if (m_IsPreprocessedFile)
				{
					int lineStart, lineEnd;
					std::string fileTemp;
					GetLineAndFile(tokenclass->getLine(), lineStart, fileTemp);
					GetLineAndFile(tokenclass->getLine(), lineEnd, fileTemp);
					function.LineStart = lineStart;
					function.LineEnd = lineEnd;
				}
				else
				{
					function.LineStart = tokenclass->getLine();
					function.LineEnd = tokenclass->getLine();
				}
				object.protectedFunctions.push_back(function);
			}
			for (size_t j = 0; j < object_class_ptr.publicMember.size(); j++)
			{
				oxcode::oxadvancedParser::MemberdeclaratorContext* memb = object_class_ptr.publicMember[j];
				Member member;
				//member.name = memb->children[1]->getText();
				if (memb->children.size() > 1)
					member.name = memb->children[1]->getText();
				else
					member.name = memb->children[0]->getText();
				antlr4::Token* tokenclass = m_tokenstream->get(memb->getSourceInterval().a);
				member.CharPositionStartInLine = tokenclass->getCharPositionInLine();
				member.CharPositionEndInLine = (tokenclass->getStopIndex() - tokenclass->getStartIndex()) +
					tokenclass->getCharPositionInLine() + 1;

				if (m_IsPreprocessedFile)
				{
					int lineStart, lineEnd;
					std::string fileTemp;
					GetLineAndFile(tokenclass->getLine(), lineStart, fileTemp);
					GetLineAndFile(tokenclass->getLine(), lineEnd, fileTemp);
					member.LineStart = lineStart;
					member.LineEnd = lineEnd;
				}
				else
				{
					member.LineStart = tokenclass->getLine();
					member.LineEnd = tokenclass->getLine();
				}
				object.publicMembers.push_back(member);
			}
			for (size_t j = 0; j < object_class_ptr.protectedMember.size(); j++)
			{
				oxcode::oxadvancedParser::MemberdeclaratorContext* memb = object_class_ptr.protectedMember[j];
				Member member;
				if (memb->children.size() > 1)
					member.name = memb->children[1]->getText();
				else
					member.name = memb->children[0]->getText();
				antlr4::Token* tokenclass = m_tokenstream->get(memb->getSourceInterval().a);
				member.CharPositionStartInLine = tokenclass->getCharPositionInLine();
				member.CharPositionEndInLine = (tokenclass->getStopIndex() - tokenclass->getStartIndex()) +
					tokenclass->getCharPositionInLine() + 1;

				if (m_IsPreprocessedFile)
				{
					int lineStart, lineEnd;
					std::string fileTemp;
					GetLineAndFile(tokenclass->getLine(), lineStart, fileTemp);
					GetLineAndFile(tokenclass->getLine(), lineEnd, fileTemp);
					member.LineStart = lineStart;
					member.LineEnd = lineEnd;
				}
				else
				{
					member.LineStart = tokenclass->getLine();
					member.LineEnd = tokenclass->getLine();
				}
				object.protectedMembers.push_back(member);
			}
			vecObject.push_back(object);
		}
	}
	catch (std::runtime_error ex)
	{
		std::cerr << ex.what() << std::endl;
	}
	return vecObject;
}

bool LinterOx::GetGlobalExternFunctionDefinition(
	std::vector<oxcode::oxadvancedParser::External_functionContext*> ListGlobalFunctionDefinitions,
	std::string funcname, FunctionDefinition& Outfunction, int LineToAvoid) const
{
	for (size_t i = 0; i < ListGlobalFunctionDefinitions.size(); i++)
	{
		oxcode::oxadvancedParser::External_functionContext* func = ListGlobalFunctionDefinitions[i];
		if (func->functionname()->getText() != funcname)continue;
		/*FunctionDefinition* function = new FunctionDefinition();*/
		Outfunction.name = func->functionname()->getText();

		if (func->functionspecifier())
		{
			Outfunction.specifier = func->functionspecifier()->getText();
		}
		///new to optimize to import only if correct functon
		const std::string xpath_enum = "*//*/functionarguments"; // 
		antlr4::tree::xpath::XPath finder2(m_parser.get(), xpath_enum);
		std::vector<antlr4::tree::ParseTree*> subtrees2 = finder2.evaluate(func);
		for (size_t si = 0; si < subtrees2.size(); si++)
		{
			//for each (antlr4::tree::ParseTree * var in subtrees2){
			antlr4::tree::ParseTree* var = subtrees2[si];
			if (oxcode::oxadvancedParser::FunctionargumentsContext* argument = dynamic_cast<oxcode::oxadvancedParser
				::FunctionargumentsContext*>(var))
			{
				Argument arg;
				if (argument->optionalargument() != nullptr)
				{
					arg.name = "...";
				}
				else
				{
					arg.name = argument->declarator()->getText();
					if (argument->declspecifierseq())
					{
						arg.specifier = argument->declspecifierseq()->getText();
					}
				}
				Outfunction.arguments.insert(Outfunction.arguments.begin(), arg);
			}
		}

		antlr4::Token* tokenclass = m_tokenstream->get(func->getSourceInterval().a);
		Outfunction.CharPositionStartInLine = tokenclass->getCharPositionInLine();
		Outfunction.CharPositionEndInLine = (tokenclass->getStopIndex() - tokenclass->getStartIndex()) + tokenclass
			->getCharPositionInLine() + 1;
		if (m_IsPreprocessedFile)
		{
			int lineStart, lineEnd;
			std::string fileTemp;
			GetLineAndFile(tokenclass->getLine(), lineStart, fileTemp);
			GetLineAndFile(tokenclass->getLine(), lineEnd, fileTemp);
			Outfunction.LineStart = lineStart;
			Outfunction.LineEnd = lineEnd;
			Outfunction.filename = fileTemp;
		}
		else
		{
			Outfunction.filename = m_currentFile;
			Outfunction.LineStart = tokenclass->getLine();
			Outfunction.LineEnd = tokenclass->getLine();
		}
		if (Outfunction.LineStart == LineToAvoid)continue;
		if (m_tokenstream->size() >= func->getSourceInterval().a - 1)
		{
			antlr4::Token* tokendoc = m_tokenstream->get(func->getSourceInterval().a - 1);
			if (tokendoc->getChannel() == JAVADOC_CHANNEL)
			{
				Outfunction.javadoc = tokendoc->getText();
			}
		}
		//Outfunction = function;
		return true;
	}
	return false;
}

void LinterOx::GetLineAndFile(size_t linePreprocessed, int& lineInfile, std::string& file) const
{
	int size = m_IncludeVector.get()->size();
	if (size > 1)
	{
		for (size_t i = 0; i < size; i++)
		{
			IncludeInfo dm = m_IncludeVector.get()->at(i);
			//std::cout << "test file :" << dm._file << "| line :"<< std::to_string(dm._iIncludeLine) << std::endl;
			if (dm._iIncludeLine >= linePreprocessed)
			{
				IncludeInfo dm2 = m_IncludeVector.get()->at(i - 1);

				lineInfile = linePreprocessed - dm2._iIncludeLine + dm2._iBeelowLine - 1;
				file = dm2._file;
				return;
			}
		}
		//ici dans le dernier fichier
		IncludeInfo dm2 = m_IncludeVector.get()->at(size - 1);
		lineInfile = linePreprocessed - dm2._iIncludeLine + dm2._iBeelowLine - 1;
		file = dm2._file;
		return;
	}
	else
	{
		// if no include that means only a single file
		file = m_currentFile;
		lineInfile = linePreprocessed;
	}
}

int LinterOx::GetLine(int iLocationStartToken) const
{
	antlr4::Token* token = (m_tokenstream)->get(iLocationStartToken);
	return token->getLine();
}

// pour retrouver le position initial suite a un preprocess...
int LinterOx::GetPreviousLine(std::string filename) const
{
	int size = m_IncludeVector.get()->size();
	if (size > 1)
	{
		for (size_t i = 0; i < size; i++)
		{
			IncludeInfo dm = m_IncludeVector.get()->at(i);

			if (dm._file == filename)
			{
				return dm._iBeelowLine + 1;
			}
		}
		
	}
	return 0;
}

void LinterOx::GetLineAndFile(Issue isse, size_t linePreprocessed, int& lineInfile, std::string& file) const
{
	int size = m_IncludeVector.get()->size();
	if (size > 1)
	{
		for (size_t i = 0; i < size; i++)
		{
			IncludeInfo dm = m_IncludeVector.get()->at(i);
			//std::cout << "test file :" << dm._file << "| line :"<< std::to_string(dm._iIncludeLine) << std::endl;
			if (dm._iIncludeLine >= linePreprocessed)
			{
				IncludeInfo dm2 = m_IncludeVector.get()->at(i - 1);

				lineInfile = linePreprocessed - dm2._iIncludeLine + dm2._iBeelowLine - 1;
				file = dm2._file;
				return;
			}
		}
		//ici dans le dernier fichier
		IncludeInfo dm2 = m_IncludeVector.get()->at(size - 1);
		lineInfile = linePreprocessed - dm2._iIncludeLine + dm2._iBeelowLine - 1;
		file = dm2._file;
		return;
	}
	else
	{
		// if no include that means only a single file
		file = m_currentFile;
		lineInfile = linePreprocessed;

		/*  IncludeInfo dm =	 _include_vector.get()->at(0) ;
		  lineInfile = linePreprocessed - dm._iIncludeLine + dm._iBeelowLine - 1 ;
		  file = dm._file;*/
	}
}

void LinterOx::GetLineAndFile(SymbolItem isse, size_t linePreprocessed, int& lineInfile, std::string& file) const
{
	int size = m_IncludeVector.get()->size();
	if (size > 1)
	{
		for (size_t i = 0; i < size; i++)
		{
			IncludeInfo dm = m_IncludeVector.get()->at(i);
			//std::cout << "test file :" << dm._file << "| line :"<< std::to_string(dm._iIncludeLine) << std::endl;
			if (dm._iIncludeLine >= linePreprocessed)
			{
				IncludeInfo dm2 = m_IncludeVector.get()->at(i - 1);

				lineInfile = linePreprocessed - dm2._iIncludeLine + dm2._iBeelowLine - 1;
				file = dm2._file;
				return;
			}
		}
		//ici dans le dernier fichier
		IncludeInfo dm2 = m_IncludeVector.get()->at(size - 1);
		lineInfile = linePreprocessed - dm2._iIncludeLine + dm2._iBeelowLine - 1;
		file = dm2._file;
		return;
	}
	else
	{
		// if no include that means only a single file
		file = m_currentFile;
		lineInfile = linePreprocessed;

		/*  IncludeInfo dm =	 _include_vector.get()->at(0) ;
		  lineInfile = linePreprocessed - dm._iIncludeLine + dm._iBeelowLine - 1 ;
		  file = dm._file;*/
	}
}

#pragma region proxyUnitTestLinter


std::vector<Issue> proxyUnitTestLinter::GetErrors()
{
	antlr4::ANTLRInputStream input(_message);
	LinterOx linter("fake", false, false);

	if (linter.InitLinter(&input, RunIssue))
	{
		linter.Run();
		//linter.PrintErrors();
	}
	return linter.GetErrors();
}

std::vector<SymbolItem> proxyUnitTestLinter::GetSymbols()
{
	antlr4::ANTLRInputStream input(_message);
	LinterOx linter("fake", false, false);

	if (linter.InitLinter(&input, RunImplementationAndSymbols))
	{
		linter.Run();
		//linter.PrintErrors();
	}
	return linter.GetImplementations();
}

void proxyUnitTestLinter::RunAutocompletitionTest()
{
	antlr4::ANTLRInputStream input(_message);
	LinterOx linter("fake", false, false);

	if (linter.InitLinter(&input, RunAutoCompletion))
	{
		linter.Run();
	}
}

FunctionDefinition proxyUnitTestLinter::GenDocDetectorGetArgument()
{
	antlr4::ANTLRInputStream input(_message);
	LinterOx linter("fake", false, false);

	if (linter.InitLinter(&input, RunGenDoc))
	{
		linter.Run();
	}
	return (linter.m_SymGenDocDetector)->function;
}

std::vector<SymbolItem> proxyUnitTestLinter::GetImplementations()
{
	antlr4::ANTLRInputStream input(_message);
	LinterOx linter("fake", false, false);
	if (linter.InitLinter(&input, RunImplementationAndSymbols))
	{
		linter.Run();
	}
	return linter.GetImplementations();
}

#pragma endregion 

tree::ParseTree* LinterOx::GetLocalContext(size_t caracter, size_t zerobase_line)
	{
		auto rootcontext = GetRootContext();
		std::pair<size_t, size_t> pair;
		pair.first = caracter; //caracter
		pair.second = zerobase_line + 1; //line 0 based + 1 based
		int LineToAvoid = pair.second;
		return terminalFromPosition(rootcontext, pair);
	}
bool LinterOx::GetMemberFunctionDefinition(std::vector<ObjectClassPtr> ListeObjectClass, std::string classnameToFind,
                                           std::string funcnameToFind, FunctionDefinition& Outfunction, int LineToAvoid)
{
	try
	{
		for (size_t i = 0; i < ListeObjectClass.size(); i++)
		{
			ObjectClassPtr object_class_ptr = ListeObjectClass[i];
			//ObjectClass object;

			std::string classeName = object_class_ptr.classe->classhead()->classheadname()->classname()->getText();
			if (classeName != classnameToFind) continue;
			antlr4::Token* tokenclass = m_tokenstream->get(object_class_ptr.classe->getSourceInterval().a);
			for (size_t j = 0; j < object_class_ptr.publicFuncton.size(); j++)
			{
				oxcode::oxadvancedParser::External_functionContext* func = object_class_ptr.publicFuncton[j];
				std::string funcname = func->functionname()->getText();
				if (funcname != funcnameToFind)continue;
				Outfunction.name = funcname;


				if (func->functionspecifier())
				{
					Outfunction.specifier = func->functionspecifier()->getText();
				}
				///new to optimize to import only if correct functon
				const std::string xpath_enum = "*//*/functionarguments"; // 
				antlr4::tree::xpath::XPath finder2(m_parser.get(), xpath_enum);
				std::vector<antlr4::tree::ParseTree*> subtrees2 = finder2.evaluate(func);
				for (antlr4::tree::ParseTree* var : subtrees2)
				{
					if (oxcode::oxadvancedParser::FunctionargumentsContext* argument = dynamic_cast<oxcode::
						oxadvancedParser::FunctionargumentsContext*>(var))
					{
						/*Argument arg;
						arg.name = argument->declarator()->getText();
						if (argument->declspecifierseq())
						{
							arg.specifier = argument->declspecifierseq()->getText();
						}*/
						Argument arg;
						if (argument->optionalargument() != nullptr)
						{
							arg.name = "...";
						}
						else
						{
							arg.name = argument->declarator()->getText();
							if (argument->declspecifierseq())
							{
								arg.specifier = argument->declspecifierseq()->getText();
							}
						}
						Outfunction.arguments.insert(Outfunction.arguments.begin(), arg);
					}
				}

				antlr4::Token* tokenclass = m_tokenstream->get(func->getSourceInterval().a);
				Outfunction.CharPositionStartInLine = tokenclass->getCharPositionInLine();
				Outfunction.CharPositionEndInLine = (tokenclass->getStopIndex() - tokenclass->getStartIndex()) +
					tokenclass->getCharPositionInLine() + 1;
				if (m_IsPreprocessedFile)
				{
					int lineStart, lineEnd;
					std::string fileTemp;
					GetLineAndFile(tokenclass->getLine(), lineStart, fileTemp);
					GetLineAndFile(tokenclass->getLine(), lineEnd, fileTemp);
					Outfunction.LineStart = lineStart;
					Outfunction.LineEnd = lineEnd;
					Outfunction.filename = fileTemp;
				}
				else
				{
					Outfunction.filename = m_currentFile;
					Outfunction.LineStart = tokenclass->getLine();
					Outfunction.LineEnd = tokenclass->getLine();
				}

				if (m_tokenstream->size() >= func->getSourceInterval().a - 1)
				{
					antlr4::Token* tokendoc = m_tokenstream->get(func->getSourceInterval().a - 1);
					if (tokendoc->getChannel() == JAVADOC_CHANNEL)
					{
						Outfunction.javadoc = tokendoc->getText();
					}
				}

				if (Outfunction.LineStart == LineToAvoid)continue;
				return true;
			}
			for (size_t j = 0; j < object_class_ptr.protectedFunction.size(); j++)
			{
				oxcode::oxadvancedParser::External_functionContext* func = object_class_ptr.protectedFunction[j];
				std::string funcname = func->functionname()->getText();
				if (funcname != funcnameToFind)continue;

				if (func->functionspecifier())
				{
					Outfunction.specifier = func->functionspecifier()->getText();
				}
				///new to optimize to import only if correct functon
				const std::string xpath_enum = "*//*/functionarguments"; // 
				antlr4::tree::xpath::XPath finder2(m_parser.get(), xpath_enum);
				std::vector<antlr4::tree::ParseTree*> subtrees2 = finder2.evaluate(func);
				for (antlr4::tree::ParseTree* var : subtrees2)
				{
					if (oxcode::oxadvancedParser::FunctionargumentsContext* argument = dynamic_cast<oxcode::
						oxadvancedParser::FunctionargumentsContext*>(var))
					{
						Argument arg;
						if (argument->optionalargument() != nullptr)
						{
							arg.name = "...";
						}
						else
						{
							arg.name = argument->declarator()->getText();
							if (argument->declspecifierseq())
							{
								arg.specifier = argument->declspecifierseq()->getText();
							}
						}
						Outfunction.arguments.insert(Outfunction.arguments.begin(), arg);
					}
				}

				antlr4::Token* tokenclass = m_tokenstream->get(func->getSourceInterval().a);
				Outfunction.CharPositionStartInLine = tokenclass->getCharPositionInLine();
				Outfunction.CharPositionEndInLine = (tokenclass->getStopIndex() - tokenclass->getStartIndex()) +
					tokenclass->getCharPositionInLine() + 1;
				if (m_IsPreprocessedFile)
				{
					int lineStart, lineEnd;
					std::string fileTemp;
					GetLineAndFile(tokenclass->getLine(), lineStart, fileTemp);
					GetLineAndFile(tokenclass->getLine(), lineEnd, fileTemp);
					Outfunction.LineStart = lineStart;
					Outfunction.LineEnd = lineEnd;
					Outfunction.filename = fileTemp;
				}
				else
				{
					Outfunction.LineStart = tokenclass->getLine();
					Outfunction.LineEnd = tokenclass->getLine();
					Outfunction.filename = m_currentFile;
				}
				if (m_tokenstream->size() >= func->getSourceInterval().a - 1)
				{
					antlr4::Token* tokendoc = m_tokenstream->get(func->getSourceInterval().a - 1);
					if (tokendoc->getChannel() == JAVADOC_CHANNEL)
					{
						Outfunction.javadoc = tokendoc->getText();
					}
				}

				if (Outfunction.LineStart == LineToAvoid)continue;
				return true;
			}
		}
	}
	catch (std::runtime_error ex)
	{
		std::cerr << ex.what() << std::endl;
	}
	return false;
}

	oxcode::oxadvancedParser::TranslationunitContext* LinterOx::GetRootContext()
	{
		return m_context;
	}


bool  LinterOx::InitLinter(antlr4::ANTLRInputStream* inputStream, unsigned char flag  )
	{
		try
		{
			m_IncludeVector = analyse_include(*inputStream);
			m_lexer = std::make_shared<oxcode::oxadvancedLexer>(inputStream);
			m_tokenstream = std::make_shared<antlr4::CommonTokenStream>(m_lexer.get());
			m_parser = std::make_shared<oxcode::oxadvancedParser>(m_tokenstream.get()); //_tokenstream
			m_context = m_parser->translationunit();
			currentflag = flag;
			m_IsNewAllocated = true;
			if (flag & RunIssue)
			{
				//std::cerr << "RunIssue On" << std::endl;
				// a ameliorer pour utiliser uniquement les detecteurs souhaites TODO par eemple pour symbol function pas besoin de traverser les autres...
				for (Issue dec : (m_reg)->Issues)
				{
					Detector* dect = dec.implementation->GetNewDetector();
					dect->InitDetector(m_tokenstream.get(), m_parser.get(), m_lexer.get(), this);
					m_ListdecDetectors.push_back(dect);
				}
			}

			// utilisé aussi pour les symbols (code outline)
			// retorune uniquement (sans les arguments) :
			// eSymbol::FunctionMember
			// eSymbol::ExternalFunction
			// eSymbol::ExternalFunctionDefinition
			if (flag & RunImplementationAndSymbols)
			{
				//std::cerr << "  RunImplementation On" << std::endl;
				m_SymImplementation = std::make_shared<SymbolImplementationDetector>(SymbolImplementationDetector());
				(m_SymImplementation)->InitDetector(m_tokenstream.get(), m_parser.get(), m_lexer.get(), this);
			}
			//else std::cerr << "RunImplementation Off" << std::endl;

			if (flag & RunAutoCompletion)
			{
				//std::cerr << "  RunAutoCompletion On" << std::endl;
				m_SymAutoCompletition = std::make_shared<AutoCompletitionDetector>(AutoCompletitionDetector());
				(m_SymAutoCompletition)->InitDetector(m_tokenstream.get(), m_parser.get(), m_lexer.get(), this);
				//	listdecDetectors.push_back((*sym_AutoCompletition));
			}
			if (flag & RunGenDoc)
			{
				m_SymGenDocDetector = std::make_shared<GenDocDetector>(GenDocDetector());
				m_SymGenDocDetector->InitDetector(m_tokenstream.get(), m_parser.get(), m_lexer.get(), this);
			}
			//else std::cerr << "RunAutoCompletion Off" << std::endl;
			return true;
		}
		catch (...)
		{
			return false;
		}
	}
void LinterOx::printIncludeFound() const
{
	int size = m_IncludeVector.get()->size();
	if (size == 0)
		WriteToDebugConsole("not include found !");

	for (size_t i = 0; i < size; i++)
	{
		IncludeInfo dm = m_IncludeVector.get()->at(i);
		WriteToDebugConsole(dm.GetPrint());
	}
}

void LinterOx::PrintSymbols()
{
	auto jsonObjects = json::array();
	for (auto var : m_ImplementationItem)
	{
		jsonObjects.push_back(Beutifull_GetSymbol(var));
	}
	std::cout << jsonObjects << std::endl;
}

bool LinterOx::FindImplementation(std::string tosearch, SimpleClassDef ParentScopeClasseName, json& jsonobject)
{
	for (auto symn : m_ImplementationItem)
	{
		if (symn.type == eSymbol::FunctionMember && symn.FunctionName == tosearch && symn.classeName /*class*/ ==
			ParentScopeClasseName.classeName)
		{
			jsonobject = Beutifull_GetSymbol(symn);
			return true;
		}
		else if (symn.type == eSymbol::FunctionMember && symn.FunctionName == tosearch && symn.classeName /*class*/ ==
			ParentScopeClasseName.baseclasseName)
		{
			jsonobject = Beutifull_GetSymbol(symn);
			return true;
		}
		else if (symn.type == eSymbol::ExternalFunction && symn.FunctionName == tosearch)
		{
			jsonobject = Beutifull_GetSymbol(symn);
			return true;;
		}
	}
	return false;
}

//void LinterOx::PrintImplementations(std::string tosearch ,SimpleClassDef ParentScopeClasseName)
//{
//	auto jsonObjects = json::array();
//	auto jsonObjectsDebug = json::array();
//	for each (auto symn in vImplementationItem)
//	{
//		if (symn.type == eSymbol::FunctionMember && symn.FunctionName == tosearch &&  symn.classeName /*class*/ == ParentScopeClasseName.classeName)
//		{
//			jsonObjects.push_back(Beutifull_GetSymbol(symn));
//			break;
//		}
//		else if (symn.type == eSymbol::FunctionMember && symn.FunctionName == tosearch &&  symn.classeName /*class*/ == ParentScopeClasseName.baseclasseName)
//		{
//			jsonObjects.push_back(Beutifull_GetSymbol(symn));
//			break;
//		}
//	     
//		if (symn.type == eSymbol::ExternalFunction && symn.FunctionName == tosearch && symn.classeName=="")
//		{
//			jsonObjects.push_back(Beutifull_GetSymbol(symn));
//			break;
//		}
//	}
//	std::cout << jsonObjects << std::endl;
//}
void LinterOx::PrintErrors(const std::vector<json> AdditionalIssuesReported)
{
	auto jsonObjects = json::array();
	for (auto var : m_IssuesReported)
	{
		jsonObjects.push_back(Beutifull_GetError(var));
	}

	for (auto var : AdditionalIssuesReported)
	{
		jsonObjects.push_back(var);
	}
	std::cout << jsonObjects << std::endl;
}

void LinterOx::Run()
{
	antlr4::tree::ParseTreeWalker::DEFAULT.walk(this, m_context);

	for (Detector* dect : m_ListdecDetectors)
	{
		dect->End();
	}
	if (currentflag & RunAutoCompletion)
	{
		auto completition = (m_SymAutoCompletition);
		completition->End();
	}
	if (m_IsThereSomeErrorsNotReported)
		std::cerr << "!! Others errors are omitted." << std::endl;
}

void LinterOx::RunAssociatedOxFiles(boost::program_options::variables_map const& vm, std::string file_name,
                                    std::string file_content,
                                    bool analyseError, bool analyseSymbol, bool analyseImplementation,
                                    std::vector<json>& AdditionalIssuesReported,
                                    std::vector<SymbolItem>& AdditionalvSymboleItem,
                                    std::string searchImpelmentation, SimpleClassDef ParentScopeFunction)
{
	//  std::vector<SymbolItem>& AdditionalvImplementationItem)
	std::cerr << "RunAssociatedOxFiles" << std::endl;

	std::vector<boost::filesystem::path> vecOxFiles;
	std::vector<boost::filesystem::path> newdir;
	int size = m_IncludeVector.get()->size();
	for (size_t i = 0; i < size; i++)
	{
		IncludeInfo dm = m_IncludeVector.get()->at(i);
		//if (!dm._IsImport)continue; /// je ne saias pas si je dois le decommenter pas sur 22/12/18
		std::string filename = dm._file;
		if (filename.substr(filename.find_last_of(".") + 1) == "oxh" || filename.substr(
			filename.find_last_of(".") + 1) == "h")
		{
			//first check it is not already appened somewhere ...
			boost::filesystem::path p{filename};
			boost::filesystem::path onlyname = p.filename();
			boost::filesystem::path dir = p.parent_path();
			bool IsAlreadyPresent = false;
			boost::filesystem::path oxextension = onlyname;
			oxextension.replace_extension("ox");
			std::string tosearch = oxextension.generic_string();
			for (size_t i2 = 0; i2 < size; i2++)
			{
				IncludeInfo include = m_IncludeVector.get()->at(i2);
				if (onlyname.generic_string() == tosearch)
				{
					IsAlreadyPresent = true;
					break;
				}
			}
			if (IsAlreadyPresent)continue;
			vecOxFiles.push_back(oxextension);
			newdir.push_back(dir);
		}
	}

	if (vecOxFiles.size() > 0)
	{
		WriteToDebugConsole("(vecOxFiles.size()>0");
		namespace po = boost::program_options;
		namespace fs = boost::filesystem;
		std::vector<std::string> vecIncludePaths;
		if (vm.count("include"))
		{
			std::vector<fs::path> vec = vm["include"].as<std::vector<fs::path>>();
			int length = vec.size();
			for (size_t i = 0; i < length; i++)
			{
				std::string path = vec.at(i).string();
				vecIncludePaths.push_back(path);
			}
			// add folder containing the current file
			boost::filesystem::path p(file_name);
			boost::filesystem::path dir = p.parent_path();
			vecIncludePaths.push_back(dir.string());
		}
		for (size_t i = 0; i < newdir.size(); i++)
			vecIncludePaths.push_back(newdir.at(i).string());

		remove_duplicates(vecIncludePaths);
		remove_duplicates(vecOxFiles);

		if (vecOxFiles.size() > 0)
		{
			WriteToDebugConsole("Additonal Ox Files:");
			for (auto oxfile : vecOxFiles)
			{
				WriteToDebugConsole(oxfile.string());
			}
		}
		AnalyseAdditionalOxFileToImport(vm, vecOxFiles, vecIncludePaths, analyseError, analyseSymbol,
		                                analyseImplementation,
		                                AdditionalIssuesReported,
		                                AdditionalvSymboleItem,
		                                searchImpelmentation, ParentScopeFunction);
	}
	else
		WriteToDebugConsole("(vecOxFiles.size()<0");
}

void LinterOx::reportError(Issue issue)
{
	m_IssuesReported.push_back(issue);
	m_iCounterErrors++;
}

void LinterOx::reportImplementation(SymbolItem issue)
{
	m_ImplementationItem.push_back(issue);
}
#pragma endregion

#pragma region Tools

std::string LinterOx::CategoryToString(CATEGORY Sev)
{
	switch (Sev)
	{
	case CATEGORY::Memory:
		return "Memory";
	case CATEGORY::Typing:
		return "Typing";
	case CATEGORY::Performance:
		return "Performance";
	default:
		return "Unknow";
	}
}

std::string LinterOx::SeverityToString(SEVERITY Sev)
{
	switch (Sev)
	{
	case SEVERITY::Ignore:
		return "Ignore";
	case SEVERITY::Informational:
		return "Informational";
	case SEVERITY::Warning:
		return "Warning";
	case SEVERITY::Error:
		return "Error";
	case SEVERITY::Fatal:
		return "Fatal";
	default:
		return "Unknow";
	}
}

bool LinterOx::LoacateOxFiles(const std::string fileName, std::vector<std::string> vecIncludePaths,
                              std::string& OutPutFullPath)
{
	for (auto path : vecIncludePaths)
	{
		std::string str = path + "\\" + fileName;
		if (boost::filesystem::exists(str))
		{
			OutPutFullPath = str;
			return true;
		}
	}


	OutPutFullPath = "";
	return false;
}

#pragma endregion
