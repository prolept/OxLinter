#pragma once
#include <nlohmann/json_fwd.hpp>
#include <tree/ParseTree.h>
#include "include/symbol.h"
#include <nlohmann/json.hpp>
#include "../Astyle/astyle_main.h"

using namespace antlr4;
using std::ifstream;
using std::cout;
using std::cerr;
using std::endl;
using std::ostream;
using std::string;
using std::pair;
using std::vector;
using std::getline;
tree::ParseTree* terminalFromPosition(tree::ParseTree* root, std::pair<size_t, size_t> position);
nlohmann::json CreateJsonFromFunctionDefinition(FunctionDefinition function);
SymbolItem GetParentFunction(std::vector<SymbolItem> Symbols, int LineStartPos);
bool GetParentClasseFromHeaderClass(std::vector<ObjectClass> classes, int LineStartPos, std::string &classename);


#pragma region Astyle
void  ASErrorHandler(int errorNumber, const char* errorMessage);
char*  ASMemoryAlloc(unsigned long memoryNeeded);

// other functions
void error(const string message);
string getProjectDirectory(const string& subPath);
char* getText(const string& filePath);
void setText(const char* textOut, const string& filePathStr);
#pragma endregion