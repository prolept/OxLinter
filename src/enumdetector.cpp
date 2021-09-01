#include "Detectors.h"



bool Enum_Detector::IsAllUpper(std::string input)
{
	for (size_t i =0 ;i < input.size();i++)
	{
         if (isupper(input[i]))
             return false;
     }
     return true;
}	
bool Enum_Detector::AppliesTo(antlr4::ParserRuleContext& context, std::string filename)  
 {          	
	if (antlrcpp::is<oxcode::oxadvancedParser::EnumeratordefinitionContext *>(&context))
		return true;
 	       
     return false;
 }  
void Enum_Detector::enterEnumeratordefinition(oxcode::oxadvancedParser::EnumeratordefinitionContext* context)  
 {

     antlr4::ParserRuleContext dummyRoot;
     const std::string xpath_enum = "*//enumerator/Identifier";
 	 antlr4::tree::xpath::XPath finder(_parser, xpath_enum);
	 std::vector<antlr4::tree::ParseTree *>subtrees = finder.evaluate(context);
	for  (antlr4::tree::ParseTree * var : subtrees)
	{			
  	    std::string enumString = var->toString();
		if (!isalluperr(enumString))
		{

			      Issue EnumeIssue = Issue("idEnumIssue",
							   "Enum should be written in UPPER CASE",
							   CATEGORY::Typing,
							   SEVERITY::Informational);

				 
		 	       antlr4::Token* tok = _tokenstream->get(var->getSourceInterval().a);
				   EnumeIssue.CharPositionStartInLine = tok->getCharPositionInLine();
				   EnumeIssue.CharPositionEndInLine =   (tok->getStopIndex() - tok->getStartIndex())+tok->getCharPositionInLine()+1;
				   EnumeIssue.LineStart = tok->getLine();
				   EnumeIssue.LineEnd = tok->getLine();
				   EnumeIssue.detailedmessage = enumString;
                   reportError(EnumeIssue); 
		} 
	}		
 }

bool Enum_Detector::isalluperr(std::string str)
{
    std::string criteria("ABCDEFGHIJKLMNOPQRSTUVWXYZ_-0123456789");
	return (std::string::npos == str.find_first_not_of(criteria));

}
void Enum_Detector::CreateListener(antlr4::ParserRuleContext& node)  
{ 
	oxcode::oxadvancedParser::EnumeratordefinitionContext& ctx = dynamic_cast<oxcode::oxadvancedParser::EnumeratordefinitionContext&>(node);
	enterEnumeratordefinition(&ctx);
};
