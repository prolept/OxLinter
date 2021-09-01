#include "Detectors.h"

void UnusedLocal_Detector::enterInitdeclarator(oxcode::oxadvancedParser::InitdeclaratorContext * context)
{
	
	 antlr4::ParserRuleContext dummyRoot;
     const std::string xpath_enum = "*//initdeclarator/declarator/ptrdeclarator/noptrdeclarator/declaratorid//*/Identifier";
 	 antlr4::tree::xpath::XPath finder(_parser, xpath_enum);
	 std::vector<antlr4::tree::ParseTree *>subtrees = finder.evaluate(context);
	 for   (antlr4::tree::ParseTree * var : subtrees)
	 {			
  	   			 if(antlr4::tree::TerminalNode* d = dynamic_cast<antlr4::tree::TerminalNode*>(var))
				 {
					 std::string localVar = d->getText();

					  std::map<std::string, TempInfo>::iterator it = DeclaredLocVars.find(localVar);
						 
						if(it == DeclaredLocVars.end())
						{
						   TempInfo info;
						   info.tree = d;
						   DeclaredLocVars[localVar] = info;
						}			    			
				 }
	 }	

          
}
void UnusedLocal_Detector::enterParametersandqualifiers(oxcode::oxadvancedParser::ParametersandqualifiersContext* ctx)
{
	 antlr4::ParserRuleContext dummyRoot;
     const std::string xpath_enum = "*//declarator/ptrdeclarator/noptrdeclarator/declaratorid//*/Identifier";
 	 antlr4::tree::xpath::XPath finder(_parser, xpath_enum);
	 std::vector<antlr4::tree::ParseTree *>subtrees = finder.evaluate(ctx);
	 for (antlr4::tree::ParseTree * var : subtrees)
	 {			
  	   			 if(antlr4::tree::TerminalNode* d = dynamic_cast<antlr4::tree::TerminalNode*>(var))
				 {
					 std::string argument = d->getText();

					  std::map<std::string, TempInfo>::iterator it = Parameters.find(argument);
						 
						if(it == Parameters.end())
						{
						   TempInfo info;
						   info.tree = d;
						   Parameters[argument] = info;
						}			    			
				 }
	 }	
}
bool UnusedLocal_Detector::AppliesTo(antlr4::ParserRuleContext & context, std::string filename)
{
	if (antlrcpp::is<oxcode::oxadvancedParser::InitdeclaratorContext *>(&context))
		return true;
	
 	if (antlrcpp::is<oxcode::oxadvancedParser::AssignmentexpressionContext *>(&context))
		return true;
	
	if (antlrcpp::is<oxcode::oxadvancedParser::External_functionContext *>(&context))
		return true;
	
	if (antlrcpp::is<oxcode::oxadvancedParser::ParametersandqualifiersContext *>(&context))
		return true;
	
     return false;
}
bool UnusedLocal_Detector::ExitAppliesTo(antlr4::ParserRuleContext & context, std::string filename)
{
	if (antlrcpp::is<oxcode::oxadvancedParser::External_functionContext *>(&context))
		return true;
	return false;
}
void UnusedLocal_Detector::enterExternal_function(oxcode::oxadvancedParser::External_functionContext * ctx)
{
	DeclaredLocVars.clear();
	Parameters.clear();
}
void UnusedLocal_Detector::exitExternal_function(oxcode::oxadvancedParser::External_functionContext * ctx)
{
	for (std::map<std::string, TempInfo>::iterator it = DeclaredLocVars.begin(); it != DeclaredLocVars.end(); it++)
	{
		TempInfo info = it->second;
		if (info.NbTimesUsed == 0)
		{
			antlr4::tree::ParseTree * var = info.tree;
			antlr4::Token* tok = _tokenstream->get(var->getSourceInterval().a);


			Issue UnusedLocalIssue =  Issue("idUnusedLocalIssue",
											"A local variable is defined but never used",
											CATEGORY::Memory,
											SEVERITY::Warning);


			UnusedLocalIssue.CharPositionStartInLine = tok->getCharPositionInLine();
			UnusedLocalIssue.CharPositionEndInLine = (tok->getStopIndex() - tok->getStartIndex()) + tok->getCharPositionInLine() + 1;
			UnusedLocalIssue.LineStart = tok->getLine();
			UnusedLocalIssue.LineEnd = tok->getLine();
			UnusedLocalIssue.detailedmessage = it->first;
			reportError(UnusedLocalIssue);

		}
	}

	for (std::map<std::string, TempInfo>::iterator it = Parameters.begin(); it != Parameters.end(); it++)
	{
		TempInfo info = it->second;
		if (info.NbTimesUsed == 0)
		{
			antlr4::tree::ParseTree * var = info.tree;
			antlr4::Token* tok = _tokenstream->get(var->getSourceInterval().a);


			Issue UnusedLocalIssue =  Issue("idUnusedMethodParameter",
											"A argument is never used",
											CATEGORY::Memory,
											SEVERITY::Warning);


			UnusedLocalIssue.CharPositionStartInLine = tok->getCharPositionInLine();
			UnusedLocalIssue.CharPositionEndInLine = (tok->getStopIndex() - tok->getStartIndex()) + tok->getCharPositionInLine() + 1;
			UnusedLocalIssue.LineStart = tok->getLine();
			UnusedLocalIssue.LineEnd = tok->getLine();
			UnusedLocalIssue.detailedmessage = it->first;
			reportError(UnusedLocalIssue);

		}
	}


	
	DeclaredLocVars.clear();
	DeclaredLocVars.clear();
}
void UnusedLocal_Detector::enterAssignmentexpression(oxcode::oxadvancedParser::AssignmentexpressionContext * context)
{
	 antlr4::ParserRuleContext dummyRoot;
     const std::string xpath_enum = "*//unqualifiedid//*/Identifier";
 	 antlr4::tree::xpath::XPath finder(_parser, xpath_enum);
	 std::vector<antlr4::tree::ParseTree *>subtrees = finder.evaluate(context);
	 for   (antlr4::tree::ParseTree * var : subtrees)
	 {			
  	   			 if(antlr4::tree::TerminalNode* d = dynamic_cast<antlr4::tree::TerminalNode*>(var))
				 {
					 	   std::string localVar = d->getText();
					       std::map<std::string, TempInfo>::iterator it = DeclaredLocVars.find(localVar);
							if(it != DeclaredLocVars.end())
							{
							   TempInfo info =   DeclaredLocVars[localVar];
							   info.NbTimesUsed += 1;
							    DeclaredLocVars[localVar] = info;
							}

  	   			 		    std::map<std::string, TempInfo>::iterator it2 = Parameters.find(localVar);
							if(it2 != Parameters.end())
							{
							   TempInfo info =   Parameters[localVar];
							   info.NbTimesUsed += 1;
							    Parameters[localVar] = info;
							}


  	   			 	  
				 }
	 }	
}
 
void UnusedLocal_Detector::CreateListener(antlr4::ParserRuleContext & node)
{
	if (antlrcpp::is<oxcode::oxadvancedParser::External_functionContext *>(&node))
	{
		oxcode::oxadvancedParser::External_functionContext& ctx = dynamic_cast<oxcode::oxadvancedParser::External_functionContext&>(node);
		enterExternal_function(&ctx);

	}
	      if (antlrcpp::is<oxcode::oxadvancedParser::InitdeclaratorContext *>(&node))
		   {
				oxcode::oxadvancedParser::InitdeclaratorContext& ctx = dynamic_cast<oxcode::oxadvancedParser::InitdeclaratorContext&>(node);
				enterInitdeclarator(&ctx);
		   } 
		 if (antlrcpp::is<oxcode::oxadvancedParser::AssignmentexpressionContext *>(&node))
		   {
			    oxcode::oxadvancedParser::AssignmentexpressionContext& ctx = dynamic_cast<oxcode::oxadvancedParser::AssignmentexpressionContext&>(node);
				enterAssignmentexpression(&ctx);
		   }
		 if (antlrcpp::is<oxcode::oxadvancedParser::ParametersandqualifiersContext *>(&node))
		   {
			    oxcode::oxadvancedParser::ParametersandqualifiersContext& ctx = dynamic_cast<oxcode::oxadvancedParser::ParametersandqualifiersContext&>(node);
				enterParametersandqualifiers(&ctx);
		   }
		/* if (antlrcpp::is<oxcode::oxadvancedParser::AssignmentexpressionContext *>(&node))
		 {
			 oxcode::oxadvancedParser::AssignmentexpressionContext& ctx = dynamic_cast<oxcode::oxadvancedParser::AssignmentexpressionContext&>(node);
			 enterAssignmentexpression(&ctx);
		 }*/
}
void UnusedLocal_Detector::CreateExitListener(antlr4::ParserRuleContext & node)
{
	 
	if (antlrcpp::is<oxcode::oxadvancedParser::External_functionContext *>(&node))
	{
		oxcode::oxadvancedParser::External_functionContext& ctx = dynamic_cast<oxcode::oxadvancedParser::External_functionContext&>(node);
		 
		exitExternal_function(&ctx);
	}
	 
}
void UnusedLocal_Detector::Start()
{
}
void UnusedLocal_Detector::End()
{ 
}