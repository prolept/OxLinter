 
// Generated from oxadvanced.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"


namespace oxcode {


class  oxadvancedLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, IN = 22, MultiLineMacro = 23, Directive = 24, Alignas = 25, 
    Alignof = 26, Asm = 27, Auto = 28, Bool = 29, Break = 30, Case = 31, 
    Catch = 32, Char = 33, Char16 = 34, Char32 = 35, Class = 36, Const = 37, 
    Constexpr = 38, Const_cast = 39, Continue = 40, Decltype = 41, Default = 42, 
    Delete = 43, Do = 44, Double = 45, Dynamic_cast = 46, Else = 47, Enum = 48, 
    Explicit = 49, Extern = 50, False = 51, Final = 52, Float = 53, For = 54, 
    Foreach = 55, Friend = 56, Goto = 57, If = 58, Inline = 59, Int = 60, 
    Array = 61, Decl = 62, Long = 63, Mutable = 64, Namespace = 65, New = 66, 
    Noexcept = 67, Nullptr = 68, Operator = 69, Override = 70, Private = 71, 
    Protected = 72, Public = 73, Register = 74, Reinterpret_cast = 75, Return = 76, 
    Short = 77, Signed = 78, Static = 79, Static_assert = 80, Static_cast = 81, 
    Struct = 82, Switch = 83, Switchsingle = 84, Template = 85, This = 86, 
    Thread_local = 87, Throw = 88, True = 89, Try = 90, Typedef = 91, Typeid = 92, 
    Typename = 93, Unsigned = 94, Using = 95, Virtual = 96, Void = 97, Volatile = 98, 
    Wchar = 99, While = 100, LeftParen = 101, RightParen = 102, LeftBracket = 103, 
    RightBracket = 104, LeftBrace = 105, RightBrace = 106, Plus = 107, Minus = 108, 
    Star = 109, Div = 110, Mod = 111, Caret = 112, And = 113, Or = 114, 
    Tilde = 115, Not = 116, Assign = 117, Less = 118, Greater = 119, PlusAssign = 120, 
    MinusAssign = 121, StarAssign = 122, DivAssign = 123, ModAssign = 124, 
    XorAssign = 125, AndAssign = 126, Parallel = 127, OrAssign = 128, LeftShift = 129, 
    LeftShiftAssign = 130, Equal = 131, NotEqual = 132, LessEqual = 133, 
    GreaterEqual = 134, AndAnd = 135, OrOr = 136, PlusPlus = 137, MinusMinus = 138, 
    Comma = 139, ArrowStar = 140, Arrow = 141, Question = 142, Colon = 143, 
    Doublecolon = 144, Semi = 145, Dot = 146, DotStar = 147, Ellipsis = 148, 
    Identifier = 149, Integerliteral = 150, Decimalliteral = 151, Octalliteral = 152, 
    Hexadecimalliteral = 153, Binaryliteral = 154, Integersuffix = 155, 
    Characterliteral = 156, Floatingliteral = 157, Stringliteral = 158, 
    Userdefinedintegerliteral = 159, Userdefinedfloatingliteral = 160, Userdefinedstringliteral = 161, 
    Userdefinedcharacterliteral = 162, Whitespace = 163, Newline = 164, 
    JavaDoc = 165, BlockComment = 166, LineComment = 167
  };

  explicit oxadvancedLexer(antlr4::CharStream *input);
  ~oxadvancedLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace oxcode
