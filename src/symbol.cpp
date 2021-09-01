#include "symbol.h"

SymbolItem::SymbolItem()
{
	type = eSymbol::Null;
}

SymbolItem::SymbolItem(eSymbol symb)
{
	type = symb;
}

void SymbolItem::FillPosition(antlr4::CommonTokenStream* tokenstream, oxcode::oxadvancedParser::External_functionContext* ctx)
	{
		if (type == eSymbol::ExternalFunction || type == eSymbol::ExternalFunctionDefinition)
		{
			oxcode::oxadvancedParser::FunctionnameContext* fname = ctx->functionname();
			antlr4::Token* tokenfunction = tokenstream->get(fname->getSourceInterval().a);
			CharPositionStartInLine = tokenfunction->getCharPositionInLine();
			CharPositionEndInLine = (tokenfunction->getStopIndex() - tokenfunction->getStartIndex()) + tokenfunction->
				getCharPositionInLine() + 1;
			LineStart = tokenfunction->getLine();
			LineEnd = tokenfunction->getLine();


			// SCOPE
			antlr4::Token* tokenScope = tokenstream->get(ctx->getSourceInterval().a);
			Scope_CharPositionStartInLine = tokenScope->getCharPositionInLine();
			Scope_LineStart = tokenScope->getLine();

			antlr4::Token* tokenScopeEnd = tokenstream->get(ctx->getSourceInterval().b);
			Scope_CharPositionEndInLine = tokenScopeEnd->getCharPositionInLine();
			Scope_LineEnd = tokenScopeEnd->getLine();
		}
		else if (type == eSymbol::FunctionMember)
		{
			oxcode::oxadvancedParser::ClassnameContext* classname = ctx->classname();
			oxcode::oxadvancedParser::FunctionnameContext* fname = ctx->functionname();
			// oxcode::oxadvancedParser::FunctionbodyContext* functionbody = ctx->functionbody();

			antlr4::Token* tokenclassClasse = tokenstream->get(classname->getSourceInterval().a);
			CharPositionStartInLine = tokenclassClasse->getCharPositionInLine();
			//  symn.CharPositionEndInLine = (tokenclass->getStopIndex() - tokenclass->getStartIndex()) + tokenclass->getCharPositionInLine() + 1;
			LineStart = tokenclassClasse->getLine();
			//  symn.LineEnd = tokenclass->getLine();

			antlr4::Token* tokenfunction = tokenstream->get(fname->getSourceInterval().a);
			//  symn.CharPositionStartInLine_1 = tokenfunction->getCharPositionInLine();
			CharPositionEndInLine = (tokenfunction->getStopIndex() - tokenfunction->getStartIndex()) + tokenfunction->
				getCharPositionInLine() + 1;
			// symn.LineStart_1 = tokenfunction->getLine();
			LineEnd = tokenfunction->getLine();

			// SCOPE
			antlr4::Token* tokenScope = tokenstream->get(ctx->getSourceInterval().a);
			Scope_CharPositionStartInLine = tokenScope->getCharPositionInLine();
			Scope_LineStart = tokenScope->getLine();

			antlr4::Token* tokenScopeEnd = tokenstream->get(ctx->getSourceInterval().b);
			Scope_CharPositionEndInLine = tokenScopeEnd->getCharPositionInLine();
			Scope_LineEnd = tokenScopeEnd->getLine();
		}
	}
std::string FunctionDefinition::GetPrototype()
{
	std::string prototype = "emptyproto";
	if (!name.empty()) prototype = name;
	prototype += "(";

	for (size_t i = 0; i < arguments.size(); i++)
	{
		prototype += arguments[i].name;

		if (i < arguments.size() - 1) prototype += ",";
		//Argument arg = function.arguments[i];
	}
	prototype += ")";
	return prototype;
}
