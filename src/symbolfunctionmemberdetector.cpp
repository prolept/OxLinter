//#pragma once
#include "Symbol.h"
 

  
		 
#pragma region Implementation
	   bool SymbolImplementationDetector::AppliesTo(antlr4::ParserRuleContext& context, std::string filename)  
	   {
		   if (antlrcpp::is<oxcode::oxadvancedParser::External_functionContext *>(&context))
		     return true;
           return false;
	   }
	   
		void SymbolImplementationDetector::enterExternal_function(oxcode::oxadvancedParser::External_functionContext * ctx) 
		{			
			
			oxcode::oxadvancedParser::ClassnameContext*  classname = ctx->classname();
			oxcode::oxadvancedParser::FunctionnameContext* fname = ctx->functionname();
			oxcode::oxadvancedParser::FunctionbodyContext* functionbody = ctx->functionbody();
			if (functionbody == nullptr)
					return;
			if (classname != nullptr && fname != nullptr  )
			{
			
				std::string sclasse=classname->getText();
				std::string sfuncname = fname->getText();
				if (sclasse.empty() || sfuncname.empty())
					return;
				SymbolItem symn(eSymbol::FunctionMember);
				symn.classeName = sclasse;
				symn.FunctionName = sfuncname;
				symn.FillPosition(_tokenstream, ctx);	
				reportImplem(symn);
			}
			else if (classname == nullptr && fname != nullptr)
			{
				 
				std::string sfuncname = fname->getText();
				if (sfuncname.empty())
					return;
				 
				SymbolItem symn(eSymbol::ExternalFunction);	 
				symn.FunctionName = sfuncname;
				symn.FillPosition(_tokenstream, ctx);		 
				reportImplem(symn);
			}
		 
		}
   
		void  SymbolImplementationDetector::CreateListener(antlr4::ParserRuleContext & node)  
		{
			  if (antlrcpp::is<oxcode::oxadvancedParser::External_functionContext *>(&node))
			   {
					oxcode::oxadvancedParser::External_functionContext& ctx = dynamic_cast<oxcode::oxadvancedParser::External_functionContext&>(node);
					enterExternal_function(&ctx);
			   } 
		}
#pragma endregion



#pragma region AutoCompletitionDetector

	   
		void AutoCompletitionDetector::PrintObjectClassFound()
	    {
#pragma DisableCodeCoverage
			for (size_t i = 0; i < ListeObjectClassInHeader.size(); i++)
			{
				ObjectClassPtr object = ListeObjectClassInHeader[i];
			    std::string classeName = object.classe->classhead()->classheadname()->classname()->getText();
				std::cout << "Classe ["<<  classeName << "]"<< std::endl;
				if( object.classe->classhead()->children.size()==3)
				{
					   std::string derivedclasse =  object.classe->classhead()->children[2]->getText();
						std::cout << "Derivee de  ["<<  derivedclasse << "]"<< std::endl;
				}
				for (size_t j = 0; j < object.publicFuncton.size(); j++){
					oxcode::oxadvancedParser::External_functionContext* func = object.publicFuncton[j];
					std::cout << "		Public Function ["<<  func->functionname()->getText() << "]"<< std::endl;

					if(func->functionspecifier())
					{
						std::cout << "		  Function specifier  ["<<  func->functionspecifier()->getText() << "]"<< std::endl;
					}
						const std::string xpath_enum = "*//*/parameterdeclaration";// 
						antlr4::tree::xpath::XPath finder2(_parser, xpath_enum);
						std::vector<antlr4::tree::ParseTree *>subtrees2 = finder2.evaluate(func);
						for   (antlr4::tree::ParseTree * var : subtrees2)
						{
							if (oxcode::oxadvancedParser::ParameterdeclarationContext * argument = dynamic_cast<oxcode::oxadvancedParser::ParameterdeclarationContext*>(var))
							{
								std::cout << "		Argument Nom [" << argument->declarator()->getText() << std::endl;
								if(!argument->declspecifierseq())
									std::cout << "		Argument Nom ["<< argument->declarator()->getText() <<  "]  Type [NULL]"<< std::endl;
								else
									std::cout << "		Argument Nom ["<< argument->declarator()->getText() <<  "]  Type ["<< argument->declspecifierseq()->getText() << "]"<< std::endl;
						    }
							
						}

				}
				for (size_t j = 0; j < object.protectedFunction.size(); j++){
					oxcode::oxadvancedParser::External_functionContext* func = object.protectedFunction[j];
					std::cout << "		Protected Function ["<<  func->functionname()->getText() << "]"<< std::endl;
				}
					for (size_t j = 0; j < object.publicMember.size(); j++){
					oxcode::oxadvancedParser::MemberdeclaratorContext* memb = object.publicMember[j];
					 if(memb->children.size()>1)
					std::cout << "		Public Member ["<<  memb->children[1]->getText() << "]"<< std::endl;
				}
					for (size_t j = 0; j < object.protectedMember.size(); j++){
					oxcode::oxadvancedParser::MemberdeclaratorContext* memb = object.protectedMember[j];
				      if(memb->children.size()>1)
					std::cout << "		Protected Member ["<<  memb->children[1]->getText() << "]"<< std::endl;
				}
			 
			}
#pragma EnableCodeCoverage
	    }

	 std::string AutoCompletitionDetector::GetMatchingClasseName(std::string variableNameToSearch, int LineOfVariable)
	  {
	  //void AutoCompletitionDetector::End()
	   
		  for (size_t i = ListClassVariable.size(); i >0 ; i--)
		  {
			  ClassVariablePtr variable = ListClassVariable[i-1];
			//  std::cerr << "Variabe : [" << variable.variable->getText()<< "] Scope [" << variable.scope->functionname()->getText()<< "] class name ["<< variable.classeName << "]" << std::endl;
		 	   


			     antlr4::Token* tokenclass_ScopeStart = _tokenstream->get(variable.scope->getSourceInterval().a);
				/* size_t   CharPositionStartInLine_ScopeStart = tokenclass_ScopeStart->getCharPositionInLine();
				 size_t CharPositionEndInLine_ScopeStart =   (tokenclass_ScopeStart->getStopIndex() - tokenclass_ScopeStart->getStartIndex())+tokenclass_ScopeStart->getCharPositionInLine()+1;
				 size_t LineStart_ScopeStart = tokenclass_ScopeStart->getLine();*/
				 size_t LineEnd_ScopeStart = tokenclass_ScopeStart->getLine();
				// std::cout << "Start CharPositionStartInLine : [" << CharPositionStartInLine_ScopeStart << "] CharPositionEndInLine [" << CharPositionEndInLine_ScopeStart<< "]  LineStart ["<< LineStart_ScopeStart<< "]"<< "]  LineEnd ["<< LineEnd_ScopeStart<< "]" << std::endl;


			     antlr4::Token* tokenclass_ScopeEnd = _tokenstream->get(variable.scope->getSourceInterval().b);
				/* size_t   CharPositionStartInLine = tokenclass_ScopeEnd->getCharPositionInLine();
				 size_t CharPositionEndInLine =   (tokenclass_ScopeEnd->getStopIndex() - tokenclass_ScopeEnd->getStartIndex())+tokenclass_ScopeEnd->getCharPositionInLine()+1;
				 size_t LineStart = tokenclass_ScopeEnd->getLine();*/
				 size_t LineEnd = tokenclass_ScopeEnd->getLine();
				// std::cerr << "Scope Start Line : [" << LineEnd_ScopeStart<< "] Scope End Line "<< LineEnd <<  std::endl;
				 if(variableNameToSearch == variable.variable->getText() && LineOfVariable> LineEnd_ScopeStart && LineOfVariable <LineEnd )
				 { 
					 return variable.classeName;
				 }
				 //  std::cout << "End CharPositionStartInLine : [" << CharPositionStartInLine<< "] CharPositionEndInLine [" << CharPositionEndInLine<< "]  LineStart ["<< LineStart<< "]"<< "]  LineEnd ["<< LineEnd<< "]" << std::endl;
		  }
		  return "";
	    }
	
	 void AutoCompletitionDetector::enterClassspecifier(oxcode::oxadvancedParser::ClassspecifierContext * ctx)
	 {
		std::string className= ctx->classhead()->classheadname()->classname()->getText();
		//std::cout <<  className << std::endl;
		//int debug = 5;
		auto bodyContext = ctx->memberspecification();
		 if (bodyContext == nullptr)
				 return;

		 ObjectClassPtr object;
		 object.classe = ctx;
//		 TOKEN_REF=1
//RULE_REF=2
//ANYWHERE=3 '//'=3
//ROOT=4 '/'=4
//WILDCARD=5 '*'=5
//BANG=6 '!'=6
//ID=7
//STRING=8
 
		 try
		 {
	 

			   // decl .... 
			 	const std::string xpath_enum = "*//*/memberdeclarator";// 
				antlr4::tree::xpath::XPath finder2(_parser, xpath_enum);
				std::vector<antlr4::tree::ParseTree *>subtrees2 = finder2.evaluate(bodyContext);
				for   (antlr4::tree::ParseTree * var : subtrees2)
				{
					bool IsProtected = true; // dans ox les membres sont protege par default
					antlr4::tree::ParseTree * parent = var->parent;
					// remonte le tree pour voir si ces tpublic ou protected
				    while (!antlrcpp::is<oxcode::oxadvancedParser::ClassspecifierContext *>(parent)  )
					{
						if (oxcode::oxadvancedParser::AccessmemberspecificationContext * d = dynamic_cast<oxcode::oxadvancedParser::AccessmemberspecificationContext*>(parent))
						{
							  oxcode::oxadvancedParser::AccessspecifierContext* specif = 	d ->accessspecifier();
 
						   if (specif->Protected())
						   {
							   IsProtected = true;
						   }
						   else  if (specif->Public())
						   {
							   IsProtected = false;
						   }
						   else
							   throw  std::runtime_error("not implemented ...");
						  
							break;
						}
						parent = parent->parent;
					}
					/*if (IsProtected)
						std::cout << "Protected ! " << std::endl;
					else 
						std::cout << "Public ! " << std::endl;
					std::cout << var->toStringTree() << std::endl;*/

					if(antlrcpp::is<oxcode::oxadvancedParser::MemberdeclaratorContext *>(var))
					{
						oxcode::oxadvancedParser::MemberdeclaratorContext * memb = dynamic_cast<oxcode::oxadvancedParser::MemberdeclaratorContext*>(var);
						if (IsProtected)
							object.protectedMember.push_back(memb);
						else
							object.publicMember.push_back(memb);
					}
					else
						 throw  std::runtime_error("error LKJDS ...");
				}



				//function
				const std::string xpath_func = "*//*/external_function";// 
				antlr4::tree::xpath::XPath finderexternal_function(_parser, xpath_func);
				std::vector<antlr4::tree::ParseTree *>subtreesexternal_function = finderexternal_function.evaluate(bodyContext);
				for   (antlr4::tree::ParseTree * var : subtreesexternal_function)
				{
					bool IsProtected = false; //dans ox les fonctions sont publiques par default
					antlr4::tree::ParseTree * parent = var->parent;
					// remonte le tree pour voir si c est public ou protected
				    while (!antlrcpp::is<oxcode::oxadvancedParser::ClassspecifierContext *>(parent)  )
					{
						if (oxcode::oxadvancedParser::AccessmemberspecificationContext * d = dynamic_cast<oxcode::oxadvancedParser::AccessmemberspecificationContext*>(parent))
						{
							  oxcode::oxadvancedParser::AccessspecifierContext* specif = 	d ->accessspecifier();
 
						   if (specif->Protected())
						   {
							   IsProtected = true;
						   }
						   else  if (specif->Public())
						   {
							   IsProtected = false;
						   }
						   else
							   throw  std::runtime_error("not implemented ...");
						  
							break;
						}
						parent = parent->parent;
					}
					/*if (IsProtected)
						std::cout << "Protected ! " << std::endl;
					else 
						std::cout << "Public ! " << std::endl;
					std::cout << var->toStringTree() << std::endl;*/

						if(antlrcpp::is<oxcode::oxadvancedParser::External_functionContext *>(var))
					{
						oxcode::oxadvancedParser::External_functionContext * func = dynamic_cast<oxcode::oxadvancedParser::External_functionContext*>(var);
						if (IsProtected)
							object.protectedFunction.push_back(func);
						else
							object.publicFuncton.push_back(func);
					}
					else
						 throw  std::runtime_error("error LKJDS ...");

				}
			
				
				
				ListeObjectClassInHeader.push_back(object);
					
					//const std::string xpath_without = "*/!accessmemberspecification//";   
			//antlr4::tree::xpath::XPath finder(_parser, xpath_without);
			//std::vector<antlr4::tree::ParseTree *>subtreesDeclWithoutAccess = finder.evaluate(bodyContext);

			//for (size_t i = 0; i < subtreesDeclWithoutAccess.size(); i++)
			//{
			//	const std::string xpath_enum = "*//*/memberdeclarator";// "*//memberspecification/memberdeclaration/memberdeclaratorlist/memberdeclarator";
			//	antlr4::tree::xpath::XPath finder2(_parser, xpath_enum);
			//	std::vector<antlr4::tree::ParseTree *>subtrees2 = finder2.evaluate(subtreesDeclWithoutAccess[i]);
			//	for each (antlr4::tree::ParseTree * var in subtrees2)
			//	{
			//		std::cout << var->toStringTree() << std::endl;
			//	}
			//}
		   //const std::string xpath_enum = "*//accessmemberspecification//*/memberdeclarator";  //only decl with protected or public keyword ok
		   //const std::string xpath_enum = "*//*/memberdeclarator";  // tous les decls ok
		   
		 }
		 catch (  std::runtime_error ex )
		 {
			 std::cout << ex.what() << std::endl;
		 }

	 }
	     bool AutoCompletitionDetector::AppliesTo(antlr4::ParserRuleContext& context, std::string filename)  
	   {
		  	if (antlrcpp::is<oxcode::oxadvancedParser::External_functionContext *>(&context))
				return true;
			if (antlrcpp::is<oxcode::oxadvancedParser::ClassspecifierContext *>(&context))
				return true;
           return false;
	   }
		 /**
 * Returns the previous sibling of the given tree, which could be a
 * non-terminal. Requires that tree has a valid parent.
 */
 //bool IsDocBefore(antlr4::tree::ParseTree* tr)
	//{
	//	    tr->getSourceInterval().a
	//    }


void AutoCompletitionDetector::enterExternal_function(oxcode::oxadvancedParser::External_functionContext * ctx)
		 {
			 
			 oxcode::oxadvancedParser::ClassnameContext*  classname = ctx->classname();
			 oxcode::oxadvancedParser::FunctionnameContext* fname = ctx->functionname();
			 oxcode::oxadvancedParser::FunctionbodyContext* functionbodyContext = ctx->functionbody();

			/* if (_tokenstream->size() >=  ctx->getSourceInterval().a - 1)
			 {
				 antlr4::Token* tokendoc = _tokenstream->get(ctx->getSourceInterval().a - 1);
				 if (tokendoc->getChannel() == JAVADOC_CHANNEL)
				 {
					 std::string docstr = tokendoc->getText();
				 }
			 }*/
			/* if (functionbodyContext == nullptr)
				 return;*/
			//bool IsDocBefor  = IsDocBefore(ctx);
			/*   if(prev != nullptr)
			  if (antlrcpp::is<oxcode::oxadvancedParser::JavadocContext *>(prev))
				{
					oxcode::oxadvancedParser::JavadocContext * doc = dynamic_cast<oxcode::oxadvancedParser::JavadocContext*>(ctx->parent);
					std::string docstr = doc->getText();
					int a = 5555;
				}*/
#pragma region Symbol item
			 if (classname != nullptr && fname != nullptr)
			 {

				 std::string sclasse = classname->getText();
				 std::string sfuncname = fname->getText();
				 if (sclasse.size() == 0 || sfuncname.size() == 0)
					 return;
				 int aclass = classname->getSourceInterval().a;
				 int bclasse = classname->getSourceInterval().b;
				 int afunc = fname->getSourceInterval().a;
				 int bfunc = fname->getSourceInterval().b;
				 SymbolItem symn(eSymbol::FunctionMember);
				 symn.classeName = sclasse;
				 symn.FunctionName = sfuncname;
				 symn.FillPosition(_tokenstream, ctx);
				 reportImplem(symn);
			 }
			 else if (classname == nullptr && fname != nullptr)
			 {
				 std::string sfuncname = fname->getText();
				 if (sfuncname.size() == 0)
					 return;
				 SymbolItem symn(eSymbol::ExternalFunction);
				 symn.FunctionName = sfuncname;
				 symn.FillPosition(_tokenstream, ctx);
				 reportImplem(symn);
			 }
#pragma endregion
			 if (functionbodyContext == nullptr)
			 {
				/* SymbolItem symn(eSymbol::ExternalFunctionDefinition);
				 symn.FunctionName =  fname->getText();
				 symn.FillPosition(_tokenstream, ctx);
				 reportSymbol(symn);*/
				 ListGlobalFunctionDefinitions.push_back(ctx);
				 return;
			 }
			 if(classname != nullptr)
			 {
				  antlr4::Token* tokenfunction = _tokenstream->get(functionbodyContext->getSourceInterval().a);
				  antlr4::Token* tokenfunctionEnd = _tokenstream->get(functionbodyContext->getSourceInterval().b);
				   int LineStart = tokenfunction->getLine();
					int LineEnd = tokenfunctionEnd->getLine();
				 int line = LineNumberForSearchScopeOfExternalFunction;
				 if (line >= LineStart && line <= LineEnd)
					 ScopeOfExternalFunction = classname->getText();
			 }
			 std::string s = fname->toString();

		//	const std::string xpath_enum = "*//*/initializer//*//newexpression";


			 // ex : decl garchobj = new Garch();
		   const std::string xpath_enum = "*//*/initdeclarator"; 
			antlr4::tree::xpath::XPath finder(_parser, xpath_enum);
			std::vector<antlr4::tree::ParseTree *>subtrees = finder.evaluate(functionbodyContext);
			 		
				 
						for   (antlr4::tree::ParseTree * var : subtrees)
								{
							
							    //std::cout << 	var->toStringTree() << std::endl;
						
								const std::string xpath_new_variables2 ="*/declarator//*//Identifier";
								antlr4::tree::xpath::XPath finder(_parser, xpath_new_variables2);
								std::vector<antlr4::tree::ParseTree *>decltree = finder.evaluate(var);

								 const std::string xpath_new_variables3 ="*/initializer//*//newexpression";
								antlr4::tree::xpath::XPath finder2(_parser, xpath_new_variables3);
								std::vector<antlr4::tree::ParseTree *>newtree = finder2.evaluate(var);
 
								if ((decltree.size()) > 0 && newtree.size() > 0)
								{
									  /*	std::string classe= newtree[0]->children[1]->getText();
										std::cout <<"classe : " << classe << std::endl;
										std::string variable = decltree[0]->getText();
										std::cout <<"variable : " << variable << std::endl;
										std::cout <<"-----" << std::endl;*/

										ClassVariablePtr cvar;
										cvar.scope = ctx;
										cvar.variable =decltree[0];
										cvar.classeName = newtree[0]->children[1]->getText();
									    ListClassVariable.push_back(cvar);	

								}
 
								}	
				 
			 
						
			//TODO en cours pour assignment ex : garchobj = new Garch(); PAS SUR A VOIR 
			const std::string xpath_assign = "*//*/assignmentexpression";
			antlr4::tree::xpath::XPath finderAssi(_parser, xpath_assign);
			std::vector<antlr4::tree::ParseTree *>subtreesAssign = finderAssi.evaluate(functionbodyContext);
			for   (antlr4::tree::ParseTree * var : subtreesAssign)
			{
				oxcode::oxadvancedParser::AssignmentexpressionContext* ctxAssign = dynamic_cast<oxcode::oxadvancedParser::AssignmentexpressionContext*>(var);
				if (ctxAssign == nullptr) return;
				if (ctxAssign->children.size() != 3) continue;
				//if (ctxAssign->assignmentoperator.getText() != "=") continue;
			/*	if (ctxAssign->logicalorexpression.isEmpty()) continue;
				if (ctxAssign->initializerclause.isEmpty()) continue;
				if (ctxAssign->initializerclause.children() == 0) continue;*/

				const std::string xpath_new_variables3 = "*/initializerclause//*//newexpression";
				antlr4::tree::xpath::XPath finder2(_parser, xpath_new_variables3);
				std::vector<antlr4::tree::ParseTree *>newtree = finder2.evaluate(var);
				if (!newtree.empty())
				{

					ClassVariablePtr cvar;
					cvar.scope = ctx;
					cvar.variable = var->children[0];
					cvar.classeName = newtree[0]->children[1]->getText();
					ListClassVariable.push_back(cvar);
				}
			}
		 }
	 
      void  AutoCompletitionDetector::CreateListener(antlr4::ParserRuleContext & node)  
		{
			  if (antlrcpp::is<oxcode::oxadvancedParser::External_functionContext *>(&node))
			   {
					oxcode::oxadvancedParser::External_functionContext& ctx = dynamic_cast<oxcode::oxadvancedParser::External_functionContext&>(node);
					enterExternal_function(&ctx);
			   } 
			    if (antlrcpp::is<oxcode::oxadvancedParser::ClassspecifierContext *>(&node))
			   {
					oxcode::oxadvancedParser::ClassspecifierContext& ctx = dynamic_cast<oxcode::oxadvancedParser::ClassspecifierContext&>(node);
					enterClassspecifier(&ctx);
			   } 
		}
#pragma endregion


	 
	  
#pragma region GenDocDetector


 
	     bool GenDocDetector::AppliesTo(antlr4::ParserRuleContext& context, std::string filename)  
	   {
		  	if (antlrcpp::is<oxcode::oxadvancedParser::External_functionContext *>(&context))
				return true;
			 
           return false;
	   }
		 void GenDocDetector::enterExternal_function(oxcode::oxadvancedParser::External_functionContext * ctx)
		 {
			 if (alreadyOneTreatede)return;
			 oxcode::oxadvancedParser::ClassnameContext*  classname = ctx->classname();
			 oxcode::oxadvancedParser::FunctionnameContext* fname = ctx->functionname();
			 oxcode::oxadvancedParser::FunctionbodyContext* functionbodyContext = ctx->functionbody();
			 
 	                
				
					function.name = fname->getText();
					if(ctx->functionspecifier()){
						function.specifier = ctx->functionspecifier()->getText();
					 }
						const std::string xpath_enum = "*//*/functionarguments";// 
						antlr4::tree::xpath::XPath finder2(_parser, xpath_enum);
						std::vector<antlr4::tree::ParseTree *>subtrees2 = finder2.evaluate(ctx);
						for   (antlr4::tree::ParseTree * var : subtrees2){

							if (oxcode::oxadvancedParser::FunctionargumentsContext * argument = dynamic_cast<oxcode::oxadvancedParser::FunctionargumentsContext*>(var))
							{

								Argument arg;
								if(argument->optionalargument() !=nullptr)
								{
									arg.name = "...";
									function.arguments.insert(function.arguments.begin(), arg);
								}
								else
								{
									arg.name = argument->declarator()->getText();
									if (argument->declspecifierseq())
									{
										arg.specifier = argument->declspecifierseq()->getText();
									}
									function.arguments.insert(function.arguments.begin(), arg);
								}
								
							}
						}
						alreadyOneTreatede = true;
			         
		 }	 
        void  GenDocDetector::CreateListener(antlr4::ParserRuleContext & node)  
		{
			  if (antlrcpp::is<oxcode::oxadvancedParser::External_functionContext *>(&node))
			   {
					oxcode::oxadvancedParser::External_functionContext& ctx = dynamic_cast<oxcode::oxadvancedParser::External_functionContext&>(node);
					enterExternal_function(&ctx);
			   } 
			   
		}
#pragma endregion
