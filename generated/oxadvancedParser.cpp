 

// Generated from  oxadvanced.g4 by ANTLR 4.9.2


#include "oxadvancedListener.h"

#include "oxadvancedParser.h"


using namespace antlrcpp;
using namespace oxcode;
using namespace antlr4;

oxadvancedParser::oxadvancedParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

oxadvancedParser::~oxadvancedParser() {
  delete _interpreter;
}

std::string oxadvancedParser::getGrammarFileName() const {
  return "oxadvanced.g4";
}

const std::vector<std::string>& oxadvancedParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& oxadvancedParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- CompilationUnitContext ------------------------------------------------------------------

oxadvancedParser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::CompilationUnitContext::EOF() {
  return getToken(oxadvancedParser::EOF, 0);
}

oxadvancedParser::TranslationunitContext* oxadvancedParser::CompilationUnitContext::translationunit() {
  return getRuleContext<oxadvancedParser::TranslationunitContext>(0);
}


size_t oxadvancedParser::CompilationUnitContext::getRuleIndex() const {
  return oxadvancedParser::RuleCompilationUnit;
}

void oxadvancedParser::CompilationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilationUnit(this);
}

void oxadvancedParser::CompilationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilationUnit(this);
}

oxadvancedParser::CompilationUnitContext* oxadvancedParser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, oxadvancedParser::RuleCompilationUnit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(341);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      setState(340);
      translationunit();
      break;
    }

    default:
      break;
    }
    setState(343);
    match(oxadvancedParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TranslationunitContext ------------------------------------------------------------------

oxadvancedParser::TranslationunitContext::TranslationunitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::TranslationunitContext::EOF() {
  return getToken(oxadvancedParser::EOF, 0);
}

oxadvancedParser::DeclarationseqContext* oxadvancedParser::TranslationunitContext::declarationseq() {
  return getRuleContext<oxadvancedParser::DeclarationseqContext>(0);
}


size_t oxadvancedParser::TranslationunitContext::getRuleIndex() const {
  return oxadvancedParser::RuleTranslationunit;
}

void oxadvancedParser::TranslationunitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTranslationunit(this);
}

void oxadvancedParser::TranslationunitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTranslationunit(this);
}

oxadvancedParser::TranslationunitContext* oxadvancedParser::translationunit() {
  TranslationunitContext *_localctx = _tracker.createInstance<TranslationunitContext>(_ctx, getState());
  enterRule(_localctx, 2, oxadvancedParser::RuleTranslationunit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(346);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 20) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 20)) & ((1ULL << (oxadvancedParser::T__19 - 20))
      | (1ULL << (oxadvancedParser::IN - 20))
      | (1ULL << (oxadvancedParser::Auto - 20))
      | (1ULL << (oxadvancedParser::Bool - 20))
      | (1ULL << (oxadvancedParser::Class - 20))
      | (1ULL << (oxadvancedParser::Const - 20))
      | (1ULL << (oxadvancedParser::Constexpr - 20))
      | (1ULL << (oxadvancedParser::Decltype - 20))
      | (1ULL << (oxadvancedParser::Double - 20))
      | (1ULL << (oxadvancedParser::Enum - 20))
      | (1ULL << (oxadvancedParser::Explicit - 20))
      | (1ULL << (oxadvancedParser::Extern - 20))
      | (1ULL << (oxadvancedParser::Float - 20))
      | (1ULL << (oxadvancedParser::Inline - 20))
      | (1ULL << (oxadvancedParser::Int - 20))
      | (1ULL << (oxadvancedParser::Array - 20))
      | (1ULL << (oxadvancedParser::Decl - 20))
      | (1ULL << (oxadvancedParser::Long - 20))
      | (1ULL << (oxadvancedParser::Mutable - 20))
      | (1ULL << (oxadvancedParser::Namespace - 20))
      | (1ULL << (oxadvancedParser::Operator - 20))
      | (1ULL << (oxadvancedParser::Register - 20))
      | (1ULL << (oxadvancedParser::Short - 20))
      | (1ULL << (oxadvancedParser::Signed - 20))
      | (1ULL << (oxadvancedParser::Static - 20))
      | (1ULL << (oxadvancedParser::Static_assert - 20))
      | (1ULL << (oxadvancedParser::Struct - 20)))) != 0) || ((((_la - 86) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 86)) & ((1ULL << (oxadvancedParser::This - 86))
      | (1ULL << (oxadvancedParser::Typedef - 86))
      | (1ULL << (oxadvancedParser::Unsigned - 86))
      | (1ULL << (oxadvancedParser::Using - 86))
      | (1ULL << (oxadvancedParser::Virtual - 86))
      | (1ULL << (oxadvancedParser::Void - 86))
      | (1ULL << (oxadvancedParser::Volatile - 86))
      | (1ULL << (oxadvancedParser::Wchar - 86))
      | (1ULL << (oxadvancedParser::LeftParen - 86))
      | (1ULL << (oxadvancedParser::Doublecolon - 86))
      | (1ULL << (oxadvancedParser::Semi - 86))
      | (1ULL << (oxadvancedParser::Ellipsis - 86))
      | (1ULL << (oxadvancedParser::Identifier - 86)))) != 0)) {
      setState(345);
      declarationseq(0);
    }
    setState(348);
    match(oxadvancedParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryexpressionContext ------------------------------------------------------------------

oxadvancedParser::PrimaryexpressionContext::PrimaryexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::LiteralContext* oxadvancedParser::PrimaryexpressionContext::literal() {
  return getRuleContext<oxadvancedParser::LiteralContext>(0);
}

tree::TerminalNode* oxadvancedParser::PrimaryexpressionContext::LeftParen() {
  return getToken(oxadvancedParser::LeftParen, 0);
}

oxadvancedParser::ExpressionContext* oxadvancedParser::PrimaryexpressionContext::expression() {
  return getRuleContext<oxadvancedParser::ExpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::PrimaryexpressionContext::RightParen() {
  return getToken(oxadvancedParser::RightParen, 0);
}

tree::TerminalNode* oxadvancedParser::PrimaryexpressionContext::Ellipsis() {
  return getToken(oxadvancedParser::Ellipsis, 0);
}

oxadvancedParser::MatrixIndexSeqContext* oxadvancedParser::PrimaryexpressionContext::matrixIndexSeq() {
  return getRuleContext<oxadvancedParser::MatrixIndexSeqContext>(0);
}

tree::TerminalNode* oxadvancedParser::PrimaryexpressionContext::LeftBrace() {
  return getToken(oxadvancedParser::LeftBrace, 0);
}

tree::TerminalNode* oxadvancedParser::PrimaryexpressionContext::RightBrace() {
  return getToken(oxadvancedParser::RightBrace, 0);
}

oxadvancedParser::IdexpressionContext* oxadvancedParser::PrimaryexpressionContext::idexpression() {
  return getRuleContext<oxadvancedParser::IdexpressionContext>(0);
}

oxadvancedParser::PrimaryexpressionContext* oxadvancedParser::PrimaryexpressionContext::primaryexpression() {
  return getRuleContext<oxadvancedParser::PrimaryexpressionContext>(0);
}

oxadvancedParser::LambdaexpressionContext* oxadvancedParser::PrimaryexpressionContext::lambdaexpression() {
  return getRuleContext<oxadvancedParser::LambdaexpressionContext>(0);
}

std::vector<tree::TerminalNode *> oxadvancedParser::PrimaryexpressionContext::Stringliteral() {
  return getTokens(oxadvancedParser::Stringliteral);
}

tree::TerminalNode* oxadvancedParser::PrimaryexpressionContext::Stringliteral(size_t i) {
  return getToken(oxadvancedParser::Stringliteral, i);
}

tree::TerminalNode* oxadvancedParser::PrimaryexpressionContext::Less() {
  return getToken(oxadvancedParser::Less, 0);
}

tree::TerminalNode* oxadvancedParser::PrimaryexpressionContext::Greater() {
  return getToken(oxadvancedParser::Greater, 0);
}

oxadvancedParser::OxmatrixContext* oxadvancedParser::PrimaryexpressionContext::oxmatrix() {
  return getRuleContext<oxadvancedParser::OxmatrixContext>(0);
}

tree::TerminalNode* oxadvancedParser::PrimaryexpressionContext::Doublecolon() {
  return getToken(oxadvancedParser::Doublecolon, 0);
}

oxadvancedParser::TransposeContext* oxadvancedParser::PrimaryexpressionContext::transpose() {
  return getRuleContext<oxadvancedParser::TransposeContext>(0);
}

tree::TerminalNode* oxadvancedParser::PrimaryexpressionContext::Dot() {
  return getToken(oxadvancedParser::Dot, 0);
}


size_t oxadvancedParser::PrimaryexpressionContext::getRuleIndex() const {
  return oxadvancedParser::RulePrimaryexpression;
}

void oxadvancedParser::PrimaryexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryexpression(this);
}

void oxadvancedParser::PrimaryexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryexpression(this);
}

oxadvancedParser::PrimaryexpressionContext* oxadvancedParser::primaryexpression() {
  PrimaryexpressionContext *_localctx = _tracker.createInstance<PrimaryexpressionContext>(_ctx, getState());
  enterRule(_localctx, 4, oxadvancedParser::RulePrimaryexpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(394);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(350);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(351);
      match(oxadvancedParser::LeftParen);
      setState(353);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::Ellipsis) {
        setState(352);
        match(oxadvancedParser::Ellipsis);
      }
      setState(355);
      expression(0);
      setState(356);
      match(oxadvancedParser::RightParen);
      setState(358);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
      case 1: {
        setState(357);
        matrixIndexSeq();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(360);
      match(oxadvancedParser::LeftBrace);
      setState(361);
      expression(0);
      setState(362);
      match(oxadvancedParser::RightBrace);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(364);
      idexpression();
      setState(366);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
      case 1: {
        setState(365);
        primaryexpression();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(368);
      idexpression();
      setState(369);
      matrixIndexSeq();
      setState(374);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
      case 1: {
        setState(370);
        match(oxadvancedParser::LeftParen);
        setState(371);
        primaryexpression();
        setState(372);
        match(oxadvancedParser::RightParen);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(376);
      lambdaexpression();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(377);
      match(oxadvancedParser::Stringliteral);
      setState(378);
      match(oxadvancedParser::Stringliteral);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(379);
      match(oxadvancedParser::LeftBrace);
      setState(380);
      match(oxadvancedParser::RightBrace);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(381);
      match(oxadvancedParser::Less);
      setState(382);
      match(oxadvancedParser::Greater);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(383);
      oxmatrix();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(384);
      match(oxadvancedParser::Doublecolon);
      setState(385);
      idexpression();
      setState(387);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
      case 1: {
        setState(386);
        transpose();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(390);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::LeftBracket) {
        setState(389);
        matrixIndexSeq();
      }
      setState(392);
      match(oxadvancedParser::Dot);

      setState(393);
      primaryexpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdexpressionContext ------------------------------------------------------------------

oxadvancedParser::IdexpressionContext::IdexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::UnqualifiedidContext* oxadvancedParser::IdexpressionContext::unqualifiedid() {
  return getRuleContext<oxadvancedParser::UnqualifiedidContext>(0);
}

oxadvancedParser::QualifiedidContext* oxadvancedParser::IdexpressionContext::qualifiedid() {
  return getRuleContext<oxadvancedParser::QualifiedidContext>(0);
}

tree::TerminalNode* oxadvancedParser::IdexpressionContext::Array() {
  return getToken(oxadvancedParser::Array, 0);
}


size_t oxadvancedParser::IdexpressionContext::getRuleIndex() const {
  return oxadvancedParser::RuleIdexpression;
}

void oxadvancedParser::IdexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdexpression(this);
}

void oxadvancedParser::IdexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdexpression(this);
}

oxadvancedParser::IdexpressionContext* oxadvancedParser::idexpression() {
  IdexpressionContext *_localctx = _tracker.createInstance<IdexpressionContext>(_ctx, getState());
  enterRule(_localctx, 6, oxadvancedParser::RuleIdexpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(399);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(396);
      unqualifiedid();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(397);
      qualifiedid();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(398);
      match(oxadvancedParser::Array);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnqualifiedidContext ------------------------------------------------------------------

oxadvancedParser::UnqualifiedidContext::UnqualifiedidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::UnqualifiedidContext::Identifier() {
  return getToken(oxadvancedParser::Identifier, 0);
}

tree::TerminalNode* oxadvancedParser::UnqualifiedidContext::This() {
  return getToken(oxadvancedParser::This, 0);
}

tree::TerminalNode* oxadvancedParser::UnqualifiedidContext::IN() {
  return getToken(oxadvancedParser::IN, 0);
}

oxadvancedParser::OperatorfunctionidContext* oxadvancedParser::UnqualifiedidContext::operatorfunctionid() {
  return getRuleContext<oxadvancedParser::OperatorfunctionidContext>(0);
}

oxadvancedParser::ConversionfunctionidContext* oxadvancedParser::UnqualifiedidContext::conversionfunctionid() {
  return getRuleContext<oxadvancedParser::ConversionfunctionidContext>(0);
}

oxadvancedParser::LiteraloperatoridContext* oxadvancedParser::UnqualifiedidContext::literaloperatorid() {
  return getRuleContext<oxadvancedParser::LiteraloperatoridContext>(0);
}


size_t oxadvancedParser::UnqualifiedidContext::getRuleIndex() const {
  return oxadvancedParser::RuleUnqualifiedid;
}

void oxadvancedParser::UnqualifiedidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnqualifiedid(this);
}

void oxadvancedParser::UnqualifiedidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnqualifiedid(this);
}

oxadvancedParser::UnqualifiedidContext* oxadvancedParser::unqualifiedid() {
  UnqualifiedidContext *_localctx = _tracker.createInstance<UnqualifiedidContext>(_ctx, getState());
  enterRule(_localctx, 8, oxadvancedParser::RuleUnqualifiedid);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(407);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(401);
      match(oxadvancedParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(402);
      match(oxadvancedParser::This);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(403);
      match(oxadvancedParser::IN);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(404);
      operatorfunctionid();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(405);
      conversionfunctionid();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(406);
      literaloperatorid();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiedidContext ------------------------------------------------------------------

oxadvancedParser::QualifiedidContext::QualifiedidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::NestednamespecifierContext* oxadvancedParser::QualifiedidContext::nestednamespecifier() {
  return getRuleContext<oxadvancedParser::NestednamespecifierContext>(0);
}

oxadvancedParser::UnqualifiedidContext* oxadvancedParser::QualifiedidContext::unqualifiedid() {
  return getRuleContext<oxadvancedParser::UnqualifiedidContext>(0);
}


size_t oxadvancedParser::QualifiedidContext::getRuleIndex() const {
  return oxadvancedParser::RuleQualifiedid;
}

void oxadvancedParser::QualifiedidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualifiedid(this);
}

void oxadvancedParser::QualifiedidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualifiedid(this);
}

oxadvancedParser::QualifiedidContext* oxadvancedParser::qualifiedid() {
  QualifiedidContext *_localctx = _tracker.createInstance<QualifiedidContext>(_ctx, getState());
  enterRule(_localctx, 10, oxadvancedParser::RuleQualifiedid);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(409);
    nestednamespecifier(0);
    setState(410);
    unqualifiedid();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NestednamespecifierContext ------------------------------------------------------------------

oxadvancedParser::NestednamespecifierContext::NestednamespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::NestednamespecifierContext::Doublecolon() {
  return getToken(oxadvancedParser::Doublecolon, 0);
}

oxadvancedParser::ThetypenameContext* oxadvancedParser::NestednamespecifierContext::thetypename() {
  return getRuleContext<oxadvancedParser::ThetypenameContext>(0);
}

tree::TerminalNode* oxadvancedParser::NestednamespecifierContext::This() {
  return getToken(oxadvancedParser::This, 0);
}

tree::TerminalNode* oxadvancedParser::NestednamespecifierContext::Dot() {
  return getToken(oxadvancedParser::Dot, 0);
}

tree::TerminalNode* oxadvancedParser::NestednamespecifierContext::Arrow() {
  return getToken(oxadvancedParser::Arrow, 0);
}

oxadvancedParser::NestednamespecifierContext* oxadvancedParser::NestednamespecifierContext::nestednamespecifier() {
  return getRuleContext<oxadvancedParser::NestednamespecifierContext>(0);
}

tree::TerminalNode* oxadvancedParser::NestednamespecifierContext::Identifier() {
  return getToken(oxadvancedParser::Identifier, 0);
}


size_t oxadvancedParser::NestednamespecifierContext::getRuleIndex() const {
  return oxadvancedParser::RuleNestednamespecifier;
}

void oxadvancedParser::NestednamespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNestednamespecifier(this);
}

void oxadvancedParser::NestednamespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNestednamespecifier(this);
}


oxadvancedParser::NestednamespecifierContext* oxadvancedParser::nestednamespecifier() {
   return nestednamespecifier(0);
}

oxadvancedParser::NestednamespecifierContext* oxadvancedParser::nestednamespecifier(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::NestednamespecifierContext *_localctx = _tracker.createInstance<NestednamespecifierContext>(_ctx, parentState);
  oxadvancedParser::NestednamespecifierContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, oxadvancedParser::RuleNestednamespecifier, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(421);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(414);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::Identifier) {
        setState(413);
        thetypename();
      }
      setState(416);
      match(oxadvancedParser::Doublecolon);
      break;
    }

    case 2: {
      setState(417);
      match(oxadvancedParser::This);
      setState(418);
      match(oxadvancedParser::Dot);
      break;
    }

    case 3: {
      setState(419);
      match(oxadvancedParser::This);
      setState(420);
      match(oxadvancedParser::Arrow);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(428);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<NestednamespecifierContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleNestednamespecifier);
        setState(423);

        if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
        setState(424);
        match(oxadvancedParser::Identifier);
        setState(425);
        match(oxadvancedParser::Doublecolon); 
      }
      setState(430);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LambdaexpressionContext ------------------------------------------------------------------

oxadvancedParser::LambdaexpressionContext::LambdaexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::LambdaintroducerContext* oxadvancedParser::LambdaexpressionContext::lambdaintroducer() {
  return getRuleContext<oxadvancedParser::LambdaintroducerContext>(0);
}

oxadvancedParser::CompoundstatementContext* oxadvancedParser::LambdaexpressionContext::compoundstatement() {
  return getRuleContext<oxadvancedParser::CompoundstatementContext>(0);
}

oxadvancedParser::LambdadeclaratorContext* oxadvancedParser::LambdaexpressionContext::lambdadeclarator() {
  return getRuleContext<oxadvancedParser::LambdadeclaratorContext>(0);
}


size_t oxadvancedParser::LambdaexpressionContext::getRuleIndex() const {
  return oxadvancedParser::RuleLambdaexpression;
}

void oxadvancedParser::LambdaexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaexpression(this);
}

void oxadvancedParser::LambdaexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaexpression(this);
}

oxadvancedParser::LambdaexpressionContext* oxadvancedParser::lambdaexpression() {
  LambdaexpressionContext *_localctx = _tracker.createInstance<LambdaexpressionContext>(_ctx, getState());
  enterRule(_localctx, 14, oxadvancedParser::RuleLambdaexpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(431);
    lambdaintroducer();
    setState(433);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == oxadvancedParser::LeftParen) {
      setState(432);
      lambdadeclarator();
    }
    setState(435);
    compoundstatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaintroducerContext ------------------------------------------------------------------

oxadvancedParser::LambdaintroducerContext::LambdaintroducerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::LambdaintroducerContext::LeftBracket() {
  return getToken(oxadvancedParser::LeftBracket, 0);
}

tree::TerminalNode* oxadvancedParser::LambdaintroducerContext::RightBracket() {
  return getToken(oxadvancedParser::RightBracket, 0);
}

oxadvancedParser::LambdacaptureContext* oxadvancedParser::LambdaintroducerContext::lambdacapture() {
  return getRuleContext<oxadvancedParser::LambdacaptureContext>(0);
}


size_t oxadvancedParser::LambdaintroducerContext::getRuleIndex() const {
  return oxadvancedParser::RuleLambdaintroducer;
}

void oxadvancedParser::LambdaintroducerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaintroducer(this);
}

void oxadvancedParser::LambdaintroducerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaintroducer(this);
}

oxadvancedParser::LambdaintroducerContext* oxadvancedParser::lambdaintroducer() {
  LambdaintroducerContext *_localctx = _tracker.createInstance<LambdaintroducerContext>(_ctx, getState());
  enterRule(_localctx, 16, oxadvancedParser::RuleLambdaintroducer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(437);
    match(oxadvancedParser::LeftBracket);
    setState(439);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 86) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 86)) & ((1ULL << (oxadvancedParser::This - 86))
      | (1ULL << (oxadvancedParser::And - 86))
      | (1ULL << (oxadvancedParser::Assign - 86))
      | (1ULL << (oxadvancedParser::Identifier - 86)))) != 0)) {
      setState(438);
      lambdacapture();
    }
    setState(441);
    match(oxadvancedParser::RightBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdacaptureContext ------------------------------------------------------------------

oxadvancedParser::LambdacaptureContext::LambdacaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::CapturedefaultContext* oxadvancedParser::LambdacaptureContext::capturedefault() {
  return getRuleContext<oxadvancedParser::CapturedefaultContext>(0);
}

oxadvancedParser::CapturelistContext* oxadvancedParser::LambdacaptureContext::capturelist() {
  return getRuleContext<oxadvancedParser::CapturelistContext>(0);
}

tree::TerminalNode* oxadvancedParser::LambdacaptureContext::Comma() {
  return getToken(oxadvancedParser::Comma, 0);
}


size_t oxadvancedParser::LambdacaptureContext::getRuleIndex() const {
  return oxadvancedParser::RuleLambdacapture;
}

void oxadvancedParser::LambdacaptureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdacapture(this);
}

void oxadvancedParser::LambdacaptureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdacapture(this);
}

oxadvancedParser::LambdacaptureContext* oxadvancedParser::lambdacapture() {
  LambdacaptureContext *_localctx = _tracker.createInstance<LambdacaptureContext>(_ctx, getState());
  enterRule(_localctx, 18, oxadvancedParser::RuleLambdacapture);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(449);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(443);
      capturedefault();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(444);
      capturelist(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(445);
      capturedefault();
      setState(446);
      match(oxadvancedParser::Comma);
      setState(447);
      capturelist(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CapturedefaultContext ------------------------------------------------------------------

oxadvancedParser::CapturedefaultContext::CapturedefaultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::CapturedefaultContext::And() {
  return getToken(oxadvancedParser::And, 0);
}

tree::TerminalNode* oxadvancedParser::CapturedefaultContext::Assign() {
  return getToken(oxadvancedParser::Assign, 0);
}


size_t oxadvancedParser::CapturedefaultContext::getRuleIndex() const {
  return oxadvancedParser::RuleCapturedefault;
}

void oxadvancedParser::CapturedefaultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCapturedefault(this);
}

void oxadvancedParser::CapturedefaultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCapturedefault(this);
}

oxadvancedParser::CapturedefaultContext* oxadvancedParser::capturedefault() {
  CapturedefaultContext *_localctx = _tracker.createInstance<CapturedefaultContext>(_ctx, getState());
  enterRule(_localctx, 20, oxadvancedParser::RuleCapturedefault);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(451);
    _la = _input->LA(1);
    if (!(_la == oxadvancedParser::And

    || _la == oxadvancedParser::Assign)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CapturelistContext ------------------------------------------------------------------

oxadvancedParser::CapturelistContext::CapturelistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::CaptureContext* oxadvancedParser::CapturelistContext::capture() {
  return getRuleContext<oxadvancedParser::CaptureContext>(0);
}

tree::TerminalNode* oxadvancedParser::CapturelistContext::Ellipsis() {
  return getToken(oxadvancedParser::Ellipsis, 0);
}

oxadvancedParser::CapturelistContext* oxadvancedParser::CapturelistContext::capturelist() {
  return getRuleContext<oxadvancedParser::CapturelistContext>(0);
}

tree::TerminalNode* oxadvancedParser::CapturelistContext::Comma() {
  return getToken(oxadvancedParser::Comma, 0);
}


size_t oxadvancedParser::CapturelistContext::getRuleIndex() const {
  return oxadvancedParser::RuleCapturelist;
}

void oxadvancedParser::CapturelistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCapturelist(this);
}

void oxadvancedParser::CapturelistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCapturelist(this);
}


oxadvancedParser::CapturelistContext* oxadvancedParser::capturelist() {
   return capturelist(0);
}

oxadvancedParser::CapturelistContext* oxadvancedParser::capturelist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::CapturelistContext *_localctx = _tracker.createInstance<CapturelistContext>(_ctx, parentState);
  oxadvancedParser::CapturelistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 22;
  enterRecursionRule(_localctx, 22, oxadvancedParser::RuleCapturelist, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(454);
    capture();
    setState(456);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(455);
      match(oxadvancedParser::Ellipsis);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(466);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<CapturelistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleCapturelist);
        setState(458);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(459);
        match(oxadvancedParser::Comma);
        setState(460);
        capture();
        setState(462);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
        case 1: {
          setState(461);
          match(oxadvancedParser::Ellipsis);
          break;
        }

        default:
          break;
        } 
      }
      setState(468);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- CaptureContext ------------------------------------------------------------------

oxadvancedParser::CaptureContext::CaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::SimplecaptureContext* oxadvancedParser::CaptureContext::simplecapture() {
  return getRuleContext<oxadvancedParser::SimplecaptureContext>(0);
}

oxadvancedParser::InitcaptureContext* oxadvancedParser::CaptureContext::initcapture() {
  return getRuleContext<oxadvancedParser::InitcaptureContext>(0);
}


size_t oxadvancedParser::CaptureContext::getRuleIndex() const {
  return oxadvancedParser::RuleCapture;
}

void oxadvancedParser::CaptureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCapture(this);
}

void oxadvancedParser::CaptureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCapture(this);
}

oxadvancedParser::CaptureContext* oxadvancedParser::capture() {
  CaptureContext *_localctx = _tracker.createInstance<CaptureContext>(_ctx, getState());
  enterRule(_localctx, 24, oxadvancedParser::RuleCapture);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(471);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(469);
      simplecapture();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(470);
      initcapture();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimplecaptureContext ------------------------------------------------------------------

oxadvancedParser::SimplecaptureContext::SimplecaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::SimplecaptureContext::Identifier() {
  return getToken(oxadvancedParser::Identifier, 0);
}

tree::TerminalNode* oxadvancedParser::SimplecaptureContext::And() {
  return getToken(oxadvancedParser::And, 0);
}

tree::TerminalNode* oxadvancedParser::SimplecaptureContext::This() {
  return getToken(oxadvancedParser::This, 0);
}


size_t oxadvancedParser::SimplecaptureContext::getRuleIndex() const {
  return oxadvancedParser::RuleSimplecapture;
}

void oxadvancedParser::SimplecaptureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimplecapture(this);
}

void oxadvancedParser::SimplecaptureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimplecapture(this);
}

oxadvancedParser::SimplecaptureContext* oxadvancedParser::simplecapture() {
  SimplecaptureContext *_localctx = _tracker.createInstance<SimplecaptureContext>(_ctx, getState());
  enterRule(_localctx, 26, oxadvancedParser::RuleSimplecapture);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(477);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case oxadvancedParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(473);
        match(oxadvancedParser::Identifier);
        break;
      }

      case oxadvancedParser::And: {
        enterOuterAlt(_localctx, 2);
        setState(474);
        match(oxadvancedParser::And);
        setState(475);
        match(oxadvancedParser::Identifier);
        break;
      }

      case oxadvancedParser::This: {
        enterOuterAlt(_localctx, 3);
        setState(476);
        match(oxadvancedParser::This);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitcaptureContext ------------------------------------------------------------------

oxadvancedParser::InitcaptureContext::InitcaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::InitcaptureContext::Identifier() {
  return getToken(oxadvancedParser::Identifier, 0);
}

oxadvancedParser::InitializerContext* oxadvancedParser::InitcaptureContext::initializer() {
  return getRuleContext<oxadvancedParser::InitializerContext>(0);
}

tree::TerminalNode* oxadvancedParser::InitcaptureContext::And() {
  return getToken(oxadvancedParser::And, 0);
}


size_t oxadvancedParser::InitcaptureContext::getRuleIndex() const {
  return oxadvancedParser::RuleInitcapture;
}

void oxadvancedParser::InitcaptureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitcapture(this);
}

void oxadvancedParser::InitcaptureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitcapture(this);
}

oxadvancedParser::InitcaptureContext* oxadvancedParser::initcapture() {
  InitcaptureContext *_localctx = _tracker.createInstance<InitcaptureContext>(_ctx, getState());
  enterRule(_localctx, 28, oxadvancedParser::RuleInitcapture);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(484);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case oxadvancedParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(479);
        match(oxadvancedParser::Identifier);
        setState(480);
        initializer();
        break;
      }

      case oxadvancedParser::And: {
        enterOuterAlt(_localctx, 2);
        setState(481);
        match(oxadvancedParser::And);
        setState(482);
        match(oxadvancedParser::Identifier);
        setState(483);
        initializer();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdadeclaratorContext ------------------------------------------------------------------

oxadvancedParser::LambdadeclaratorContext::LambdadeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::LambdadeclaratorContext::LeftParen() {
  return getToken(oxadvancedParser::LeftParen, 0);
}

oxadvancedParser::ParameterdeclarationlistContext* oxadvancedParser::LambdadeclaratorContext::parameterdeclarationlist() {
  return getRuleContext<oxadvancedParser::ParameterdeclarationlistContext>(0);
}

tree::TerminalNode* oxadvancedParser::LambdadeclaratorContext::RightParen() {
  return getToken(oxadvancedParser::RightParen, 0);
}

oxadvancedParser::TrailingreturntypeContext* oxadvancedParser::LambdadeclaratorContext::trailingreturntype() {
  return getRuleContext<oxadvancedParser::TrailingreturntypeContext>(0);
}


size_t oxadvancedParser::LambdadeclaratorContext::getRuleIndex() const {
  return oxadvancedParser::RuleLambdadeclarator;
}

void oxadvancedParser::LambdadeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdadeclarator(this);
}

void oxadvancedParser::LambdadeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdadeclarator(this);
}

oxadvancedParser::LambdadeclaratorContext* oxadvancedParser::lambdadeclarator() {
  LambdadeclaratorContext *_localctx = _tracker.createInstance<LambdadeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 30, oxadvancedParser::RuleLambdadeclarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(486);
    match(oxadvancedParser::LeftParen);
    setState(487);
    parameterdeclarationlist(0);
    setState(488);
    match(oxadvancedParser::RightParen);
    setState(490);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == oxadvancedParser::Arrow) {
      setState(489);
      trailingreturntype();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixexpressionContext ------------------------------------------------------------------

oxadvancedParser::PostfixexpressionContext::PostfixexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::PrimaryexpressionContext* oxadvancedParser::PostfixexpressionContext::primaryexpression() {
  return getRuleContext<oxadvancedParser::PrimaryexpressionContext>(0);
}

oxadvancedParser::LiteralContext* oxadvancedParser::PostfixexpressionContext::literal() {
  return getRuleContext<oxadvancedParser::LiteralContext>(0);
}

tree::TerminalNode* oxadvancedParser::PostfixexpressionContext::LeftParen() {
  return getToken(oxadvancedParser::LeftParen, 0);
}

oxadvancedParser::ExpressionlistContext* oxadvancedParser::PostfixexpressionContext::expressionlist() {
  return getRuleContext<oxadvancedParser::ExpressionlistContext>(0);
}

tree::TerminalNode* oxadvancedParser::PostfixexpressionContext::RightParen() {
  return getToken(oxadvancedParser::RightParen, 0);
}

oxadvancedParser::SimpletypespecifierContext* oxadvancedParser::PostfixexpressionContext::simpletypespecifier() {
  return getRuleContext<oxadvancedParser::SimpletypespecifierContext>(0);
}

oxadvancedParser::MatrixIndexSeqContext* oxadvancedParser::PostfixexpressionContext::matrixIndexSeq() {
  return getRuleContext<oxadvancedParser::MatrixIndexSeqContext>(0);
}

oxadvancedParser::BracedinitlistContext* oxadvancedParser::PostfixexpressionContext::bracedinitlist() {
  return getRuleContext<oxadvancedParser::BracedinitlistContext>(0);
}

oxadvancedParser::PostfixexpressionContext* oxadvancedParser::PostfixexpressionContext::postfixexpression() {
  return getRuleContext<oxadvancedParser::PostfixexpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::PostfixexpressionContext::PlusPlus() {
  return getToken(oxadvancedParser::PlusPlus, 0);
}

tree::TerminalNode* oxadvancedParser::PostfixexpressionContext::MinusMinus() {
  return getToken(oxadvancedParser::MinusMinus, 0);
}

oxadvancedParser::TransposeContext* oxadvancedParser::PostfixexpressionContext::transpose() {
  return getRuleContext<oxadvancedParser::TransposeContext>(0);
}


size_t oxadvancedParser::PostfixexpressionContext::getRuleIndex() const {
  return oxadvancedParser::RulePostfixexpression;
}

void oxadvancedParser::PostfixexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixexpression(this);
}

void oxadvancedParser::PostfixexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixexpression(this);
}


oxadvancedParser::PostfixexpressionContext* oxadvancedParser::postfixexpression() {
   return postfixexpression(0);
}

oxadvancedParser::PostfixexpressionContext* oxadvancedParser::postfixexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::PostfixexpressionContext *_localctx = _tracker.createInstance<PostfixexpressionContext>(_ctx, parentState);
  oxadvancedParser::PostfixexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, oxadvancedParser::RulePostfixexpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(511);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      setState(493);
      primaryexpression();
      break;
    }

    case 2: {
      setState(494);
      literal();
      setState(495);
      match(oxadvancedParser::LeftParen);
      setState(496);
      expressionlist();
      setState(497);
      match(oxadvancedParser::RightParen);
      break;
    }

    case 3: {
      setState(499);
      simpletypespecifier();
      setState(500);
      match(oxadvancedParser::LeftParen);
      setState(502);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << oxadvancedParser::IN)
        | (1ULL << oxadvancedParser::Auto)
        | (1ULL << oxadvancedParser::Bool)
        | (1ULL << oxadvancedParser::Decltype)
        | (1ULL << oxadvancedParser::Delete)
        | (1ULL << oxadvancedParser::Double)
        | (1ULL << oxadvancedParser::False)
        | (1ULL << oxadvancedParser::Float)
        | (1ULL << oxadvancedParser::Int)
        | (1ULL << oxadvancedParser::Array)
        | (1ULL << oxadvancedParser::Decl)
        | (1ULL << oxadvancedParser::Long))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (oxadvancedParser::New - 66))
        | (1ULL << (oxadvancedParser::Nullptr - 66))
        | (1ULL << (oxadvancedParser::Operator - 66))
        | (1ULL << (oxadvancedParser::Short - 66))
        | (1ULL << (oxadvancedParser::Signed - 66))
        | (1ULL << (oxadvancedParser::This - 66))
        | (1ULL << (oxadvancedParser::True - 66))
        | (1ULL << (oxadvancedParser::Unsigned - 66))
        | (1ULL << (oxadvancedParser::Void - 66))
        | (1ULL << (oxadvancedParser::Wchar - 66))
        | (1ULL << (oxadvancedParser::LeftParen - 66))
        | (1ULL << (oxadvancedParser::LeftBracket - 66))
        | (1ULL << (oxadvancedParser::LeftBrace - 66))
        | (1ULL << (oxadvancedParser::Plus - 66))
        | (1ULL << (oxadvancedParser::Minus - 66))
        | (1ULL << (oxadvancedParser::Star - 66))
        | (1ULL << (oxadvancedParser::And - 66))
        | (1ULL << (oxadvancedParser::Or - 66))
        | (1ULL << (oxadvancedParser::Not - 66))
        | (1ULL << (oxadvancedParser::Less - 66)))) != 0) || ((((_la - 137) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 137)) & ((1ULL << (oxadvancedParser::PlusPlus - 137))
        | (1ULL << (oxadvancedParser::MinusMinus - 137))
        | (1ULL << (oxadvancedParser::Doublecolon - 137))
        | (1ULL << (oxadvancedParser::Dot - 137))
        | (1ULL << (oxadvancedParser::Identifier - 137))
        | (1ULL << (oxadvancedParser::Integerliteral - 137))
        | (1ULL << (oxadvancedParser::Characterliteral - 137))
        | (1ULL << (oxadvancedParser::Floatingliteral - 137))
        | (1ULL << (oxadvancedParser::Stringliteral - 137))
        | (1ULL << (oxadvancedParser::Userdefinedintegerliteral - 137))
        | (1ULL << (oxadvancedParser::Userdefinedfloatingliteral - 137))
        | (1ULL << (oxadvancedParser::Userdefinedstringliteral - 137))
        | (1ULL << (oxadvancedParser::Userdefinedcharacterliteral - 137)))) != 0)) {
        setState(501);
        expressionlist();
      }
      setState(504);
      match(oxadvancedParser::RightParen);
      setState(506);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
      case 1: {
        setState(505);
        matrixIndexSeq();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 4: {
      setState(508);
      simpletypespecifier();
      setState(509);
      bracedinitlist();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(527);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(525);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(513);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(514);
          match(oxadvancedParser::PlusPlus);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(515);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(516);
          match(oxadvancedParser::MinusMinus);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(517);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(518);
          transpose();
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(519);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(520);
          match(oxadvancedParser::LeftParen);
          setState(521);
          match(oxadvancedParser::RightParen);
          setState(523);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
          case 1: {
            setState(522);
            matrixIndexSeq();
            break;
          }

          default:
            break;
          }
          break;
        }

        default:
          break;
        } 
      }
      setState(529);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MatrixIndexContext ------------------------------------------------------------------

oxadvancedParser::MatrixIndexContext::MatrixIndexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::MatrixIndexContext::LeftBracket() {
  return getToken(oxadvancedParser::LeftBracket, 0);
}

tree::TerminalNode* oxadvancedParser::MatrixIndexContext::RightBracket() {
  return getToken(oxadvancedParser::RightBracket, 0);
}

tree::TerminalNode* oxadvancedParser::MatrixIndexContext::Colon() {
  return getToken(oxadvancedParser::Colon, 0);
}

std::vector<oxadvancedParser::ExpressionContext *> oxadvancedParser::MatrixIndexContext::expression() {
  return getRuleContexts<oxadvancedParser::ExpressionContext>();
}

oxadvancedParser::ExpressionContext* oxadvancedParser::MatrixIndexContext::expression(size_t i) {
  return getRuleContext<oxadvancedParser::ExpressionContext>(i);
}


size_t oxadvancedParser::MatrixIndexContext::getRuleIndex() const {
  return oxadvancedParser::RuleMatrixIndex;
}

void oxadvancedParser::MatrixIndexContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatrixIndex(this);
}

void oxadvancedParser::MatrixIndexContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatrixIndex(this);
}

oxadvancedParser::MatrixIndexContext* oxadvancedParser::matrixIndex() {
  MatrixIndexContext *_localctx = _tracker.createInstance<MatrixIndexContext>(_ctx, getState());
  enterRule(_localctx, 34, oxadvancedParser::RuleMatrixIndex);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(549);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(530);
      match(oxadvancedParser::LeftBracket);
      setState(533);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::Colon) {
        setState(531);
        match(oxadvancedParser::Colon);
        setState(532);
        expression(0);
      }
      setState(535);
      match(oxadvancedParser::RightBracket);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(536);
      match(oxadvancedParser::LeftBracket);
      setState(537);
      expression(0);
      setState(540);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::Colon) {
        setState(538);
        match(oxadvancedParser::Colon);
        setState(539);
        expression(0);
      }
      setState(542);
      match(oxadvancedParser::RightBracket);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(544);
      match(oxadvancedParser::LeftBracket);
      setState(545);
      expression(0);
      setState(546);
      match(oxadvancedParser::Colon);
      setState(547);
      match(oxadvancedParser::RightBracket);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MatrixIndexSeqContext ------------------------------------------------------------------

oxadvancedParser::MatrixIndexSeqContext::MatrixIndexSeqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::MatrixIndexContext* oxadvancedParser::MatrixIndexSeqContext::matrixIndex() {
  return getRuleContext<oxadvancedParser::MatrixIndexContext>(0);
}

oxadvancedParser::MatrixIndexSeqContext* oxadvancedParser::MatrixIndexSeqContext::matrixIndexSeq() {
  return getRuleContext<oxadvancedParser::MatrixIndexSeqContext>(0);
}


size_t oxadvancedParser::MatrixIndexSeqContext::getRuleIndex() const {
  return oxadvancedParser::RuleMatrixIndexSeq;
}

void oxadvancedParser::MatrixIndexSeqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatrixIndexSeq(this);
}

void oxadvancedParser::MatrixIndexSeqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatrixIndexSeq(this);
}

oxadvancedParser::MatrixIndexSeqContext* oxadvancedParser::matrixIndexSeq() {
  MatrixIndexSeqContext *_localctx = _tracker.createInstance<MatrixIndexSeqContext>(_ctx, getState());
  enterRule(_localctx, 36, oxadvancedParser::RuleMatrixIndexSeq);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(555);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(551);
      matrixIndex();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(552);
      matrixIndex();
      setState(553);
      matrixIndexSeq();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TransposeContext ------------------------------------------------------------------

oxadvancedParser::TransposeContext::TransposeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t oxadvancedParser::TransposeContext::getRuleIndex() const {
  return oxadvancedParser::RuleTranspose;
}

void oxadvancedParser::TransposeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTranspose(this);
}

void oxadvancedParser::TransposeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTranspose(this);
}

oxadvancedParser::TransposeContext* oxadvancedParser::transpose() {
  TransposeContext *_localctx = _tracker.createInstance<TransposeContext>(_ctx, getState());
  enterRule(_localctx, 38, oxadvancedParser::RuleTranspose);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(557);
    match(oxadvancedParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionlistContext ------------------------------------------------------------------

oxadvancedParser::ExpressionlistContext::ExpressionlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::InitializerlistContext* oxadvancedParser::ExpressionlistContext::initializerlist() {
  return getRuleContext<oxadvancedParser::InitializerlistContext>(0);
}


size_t oxadvancedParser::ExpressionlistContext::getRuleIndex() const {
  return oxadvancedParser::RuleExpressionlist;
}

void oxadvancedParser::ExpressionlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionlist(this);
}

void oxadvancedParser::ExpressionlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionlist(this);
}

oxadvancedParser::ExpressionlistContext* oxadvancedParser::expressionlist() {
  ExpressionlistContext *_localctx = _tracker.createInstance<ExpressionlistContext>(_ctx, getState());
  enterRule(_localctx, 40, oxadvancedParser::RuleExpressionlist);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(559);
    initializerlist(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryexpressionContext ------------------------------------------------------------------

oxadvancedParser::UnaryexpressionContext::UnaryexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::PostfixexpressionContext* oxadvancedParser::UnaryexpressionContext::postfixexpression() {
  return getRuleContext<oxadvancedParser::PostfixexpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::UnaryexpressionContext::PlusPlus() {
  return getToken(oxadvancedParser::PlusPlus, 0);
}

oxadvancedParser::CastexpressionContext* oxadvancedParser::UnaryexpressionContext::castexpression() {
  return getRuleContext<oxadvancedParser::CastexpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::UnaryexpressionContext::MinusMinus() {
  return getToken(oxadvancedParser::MinusMinus, 0);
}

oxadvancedParser::UnaryoperatorContext* oxadvancedParser::UnaryexpressionContext::unaryoperator() {
  return getRuleContext<oxadvancedParser::UnaryoperatorContext>(0);
}

tree::TerminalNode* oxadvancedParser::UnaryexpressionContext::Dot() {
  return getToken(oxadvancedParser::Dot, 0);
}

oxadvancedParser::NewexpressionContext* oxadvancedParser::UnaryexpressionContext::newexpression() {
  return getRuleContext<oxadvancedParser::NewexpressionContext>(0);
}

oxadvancedParser::DeleteexpressionContext* oxadvancedParser::UnaryexpressionContext::deleteexpression() {
  return getRuleContext<oxadvancedParser::DeleteexpressionContext>(0);
}


size_t oxadvancedParser::UnaryexpressionContext::getRuleIndex() const {
  return oxadvancedParser::RuleUnaryexpression;
}

void oxadvancedParser::UnaryexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryexpression(this);
}

void oxadvancedParser::UnaryexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryexpression(this);
}

oxadvancedParser::UnaryexpressionContext* oxadvancedParser::unaryexpression() {
  UnaryexpressionContext *_localctx = _tracker.createInstance<UnaryexpressionContext>(_ctx, getState());
  enterRule(_localctx, 42, oxadvancedParser::RuleUnaryexpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(573);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(561);
      postfixexpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(562);
      match(oxadvancedParser::PlusPlus);
      setState(563);
      castexpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(564);
      match(oxadvancedParser::MinusMinus);
      setState(565);
      castexpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(566);
      unaryoperator();
      setState(567);
      castexpression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(569);
      match(oxadvancedParser::Dot);
      setState(570);
      _la = _input->LA(1);
      if (!(_la == oxadvancedParser::T__1

      || _la == oxadvancedParser::T__2)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(571);
      newexpression();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(572);
      deleteexpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryoperatorContext ------------------------------------------------------------------

oxadvancedParser::UnaryoperatorContext::UnaryoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::UnaryoperatorContext::Or() {
  return getToken(oxadvancedParser::Or, 0);
}

tree::TerminalNode* oxadvancedParser::UnaryoperatorContext::Star() {
  return getToken(oxadvancedParser::Star, 0);
}

tree::TerminalNode* oxadvancedParser::UnaryoperatorContext::And() {
  return getToken(oxadvancedParser::And, 0);
}

tree::TerminalNode* oxadvancedParser::UnaryoperatorContext::Plus() {
  return getToken(oxadvancedParser::Plus, 0);
}

tree::TerminalNode* oxadvancedParser::UnaryoperatorContext::Not() {
  return getToken(oxadvancedParser::Not, 0);
}

tree::TerminalNode* oxadvancedParser::UnaryoperatorContext::Minus() {
  return getToken(oxadvancedParser::Minus, 0);
}


size_t oxadvancedParser::UnaryoperatorContext::getRuleIndex() const {
  return oxadvancedParser::RuleUnaryoperator;
}

void oxadvancedParser::UnaryoperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryoperator(this);
}

void oxadvancedParser::UnaryoperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryoperator(this);
}

oxadvancedParser::UnaryoperatorContext* oxadvancedParser::unaryoperator() {
  UnaryoperatorContext *_localctx = _tracker.createInstance<UnaryoperatorContext>(_ctx, getState());
  enterRule(_localctx, 44, oxadvancedParser::RuleUnaryoperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(575);
    _la = _input->LA(1);
    if (!(((((_la - 107) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 107)) & ((1ULL << (oxadvancedParser::Plus - 107))
      | (1ULL << (oxadvancedParser::Minus - 107))
      | (1ULL << (oxadvancedParser::Star - 107))
      | (1ULL << (oxadvancedParser::And - 107))
      | (1ULL << (oxadvancedParser::Or - 107))
      | (1ULL << (oxadvancedParser::Not - 107)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewexpressionContext ------------------------------------------------------------------

oxadvancedParser::NewexpressionContext::NewexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::NewexpressionContext::New() {
  return getToken(oxadvancedParser::New, 0);
}

oxadvancedParser::NewtypeidContext* oxadvancedParser::NewexpressionContext::newtypeid() {
  return getRuleContext<oxadvancedParser::NewtypeidContext>(0);
}

tree::TerminalNode* oxadvancedParser::NewexpressionContext::Doublecolon() {
  return getToken(oxadvancedParser::Doublecolon, 0);
}

oxadvancedParser::NewplacementContext* oxadvancedParser::NewexpressionContext::newplacement() {
  return getRuleContext<oxadvancedParser::NewplacementContext>(0);
}

oxadvancedParser::NewinitializerContext* oxadvancedParser::NewexpressionContext::newinitializer() {
  return getRuleContext<oxadvancedParser::NewinitializerContext>(0);
}

tree::TerminalNode* oxadvancedParser::NewexpressionContext::LeftParen() {
  return getToken(oxadvancedParser::LeftParen, 0);
}

oxadvancedParser::ThetypeidContext* oxadvancedParser::NewexpressionContext::thetypeid() {
  return getRuleContext<oxadvancedParser::ThetypeidContext>(0);
}

tree::TerminalNode* oxadvancedParser::NewexpressionContext::RightParen() {
  return getToken(oxadvancedParser::RightParen, 0);
}

tree::TerminalNode* oxadvancedParser::NewexpressionContext::Identifier() {
  return getToken(oxadvancedParser::Identifier, 0);
}

tree::TerminalNode* oxadvancedParser::NewexpressionContext::LeftBracket() {
  return getToken(oxadvancedParser::LeftBracket, 0);
}

oxadvancedParser::ExpressionContext* oxadvancedParser::NewexpressionContext::expression() {
  return getRuleContext<oxadvancedParser::ExpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::NewexpressionContext::RightBracket() {
  return getToken(oxadvancedParser::RightBracket, 0);
}

oxadvancedParser::MatrixIndexSeqContext* oxadvancedParser::NewexpressionContext::matrixIndexSeq() {
  return getRuleContext<oxadvancedParser::MatrixIndexSeqContext>(0);
}

tree::TerminalNode* oxadvancedParser::NewexpressionContext::Array() {
  return getToken(oxadvancedParser::Array, 0);
}


size_t oxadvancedParser::NewexpressionContext::getRuleIndex() const {
  return oxadvancedParser::RuleNewexpression;
}

void oxadvancedParser::NewexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewexpression(this);
}

void oxadvancedParser::NewexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewexpression(this);
}

oxadvancedParser::NewexpressionContext* oxadvancedParser::newexpression() {
  NewexpressionContext *_localctx = _tracker.createInstance<NewexpressionContext>(_ctx, getState());
  enterRule(_localctx, 46, oxadvancedParser::RuleNewexpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(622);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(578);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::Doublecolon) {
        setState(577);
        match(oxadvancedParser::Doublecolon);
      }
      setState(580);
      match(oxadvancedParser::New);
      setState(582);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::LeftParen) {
        setState(581);
        newplacement();
      }
      setState(584);
      newtypeid();
      setState(586);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
      case 1: {
        setState(585);
        newinitializer();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(589);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::Doublecolon) {
        setState(588);
        match(oxadvancedParser::Doublecolon);
      }
      setState(591);
      match(oxadvancedParser::New);
      setState(593);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
      case 1: {
        setState(592);
        newplacement();
        break;
      }

      default:
        break;
      }
      setState(595);
      match(oxadvancedParser::LeftParen);
      setState(596);
      thetypeid();
      setState(597);
      match(oxadvancedParser::RightParen);
      setState(599);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
      case 1: {
        setState(598);
        newinitializer();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(601);
      match(oxadvancedParser::New);
      setState(602);
      match(oxadvancedParser::Identifier);
      setState(604);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
      case 1: {
        setState(603);
        newinitializer();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(606);
      match(oxadvancedParser::New);
      setState(607);
      match(oxadvancedParser::Identifier);
      setState(608);
      match(oxadvancedParser::LeftBracket);
      setState(609);
      expression(0);
      setState(610);
      match(oxadvancedParser::RightBracket);
      setState(612);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
      case 1: {
        setState(611);
        matrixIndexSeq();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(614);
      match(oxadvancedParser::New);
      setState(615);
      match(oxadvancedParser::Array);
      setState(616);
      match(oxadvancedParser::LeftBracket);
      setState(617);
      expression(0);
      setState(618);
      match(oxadvancedParser::RightBracket);
      setState(620);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
      case 1: {
        setState(619);
        matrixIndexSeq();
        break;
      }

      default:
        break;
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewplacementContext ------------------------------------------------------------------

oxadvancedParser::NewplacementContext::NewplacementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::NewplacementContext::LeftParen() {
  return getToken(oxadvancedParser::LeftParen, 0);
}

oxadvancedParser::ExpressionlistContext* oxadvancedParser::NewplacementContext::expressionlist() {
  return getRuleContext<oxadvancedParser::ExpressionlistContext>(0);
}

tree::TerminalNode* oxadvancedParser::NewplacementContext::RightParen() {
  return getToken(oxadvancedParser::RightParen, 0);
}


size_t oxadvancedParser::NewplacementContext::getRuleIndex() const {
  return oxadvancedParser::RuleNewplacement;
}

void oxadvancedParser::NewplacementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewplacement(this);
}

void oxadvancedParser::NewplacementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewplacement(this);
}

oxadvancedParser::NewplacementContext* oxadvancedParser::newplacement() {
  NewplacementContext *_localctx = _tracker.createInstance<NewplacementContext>(_ctx, getState());
  enterRule(_localctx, 48, oxadvancedParser::RuleNewplacement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(624);
    match(oxadvancedParser::LeftParen);
    setState(625);
    expressionlist();
    setState(626);
    match(oxadvancedParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewtypeidContext ------------------------------------------------------------------

oxadvancedParser::NewtypeidContext::NewtypeidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::TypespecifierseqContext* oxadvancedParser::NewtypeidContext::typespecifierseq() {
  return getRuleContext<oxadvancedParser::TypespecifierseqContext>(0);
}

oxadvancedParser::NewdeclaratorContext* oxadvancedParser::NewtypeidContext::newdeclarator() {
  return getRuleContext<oxadvancedParser::NewdeclaratorContext>(0);
}


size_t oxadvancedParser::NewtypeidContext::getRuleIndex() const {
  return oxadvancedParser::RuleNewtypeid;
}

void oxadvancedParser::NewtypeidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewtypeid(this);
}

void oxadvancedParser::NewtypeidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewtypeid(this);
}

oxadvancedParser::NewtypeidContext* oxadvancedParser::newtypeid() {
  NewtypeidContext *_localctx = _tracker.createInstance<NewtypeidContext>(_ctx, getState());
  enterRule(_localctx, 50, oxadvancedParser::RuleNewtypeid);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(628);
    typespecifierseq();
    setState(630);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      setState(629);
      newdeclarator();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewdeclaratorContext ------------------------------------------------------------------

oxadvancedParser::NewdeclaratorContext::NewdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::NoptrnewdeclaratorContext* oxadvancedParser::NewdeclaratorContext::noptrnewdeclarator() {
  return getRuleContext<oxadvancedParser::NoptrnewdeclaratorContext>(0);
}


size_t oxadvancedParser::NewdeclaratorContext::getRuleIndex() const {
  return oxadvancedParser::RuleNewdeclarator;
}

void oxadvancedParser::NewdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewdeclarator(this);
}

void oxadvancedParser::NewdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewdeclarator(this);
}

oxadvancedParser::NewdeclaratorContext* oxadvancedParser::newdeclarator() {
  NewdeclaratorContext *_localctx = _tracker.createInstance<NewdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 52, oxadvancedParser::RuleNewdeclarator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(632);
    noptrnewdeclarator(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoptrnewdeclaratorContext ------------------------------------------------------------------

oxadvancedParser::NoptrnewdeclaratorContext::NoptrnewdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::NoptrnewdeclaratorContext::LeftBracket() {
  return getToken(oxadvancedParser::LeftBracket, 0);
}

oxadvancedParser::ExpressionContext* oxadvancedParser::NoptrnewdeclaratorContext::expression() {
  return getRuleContext<oxadvancedParser::ExpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::NoptrnewdeclaratorContext::RightBracket() {
  return getToken(oxadvancedParser::RightBracket, 0);
}

oxadvancedParser::NoptrnewdeclaratorContext* oxadvancedParser::NoptrnewdeclaratorContext::noptrnewdeclarator() {
  return getRuleContext<oxadvancedParser::NoptrnewdeclaratorContext>(0);
}

oxadvancedParser::ConstantexpressionContext* oxadvancedParser::NoptrnewdeclaratorContext::constantexpression() {
  return getRuleContext<oxadvancedParser::ConstantexpressionContext>(0);
}


size_t oxadvancedParser::NoptrnewdeclaratorContext::getRuleIndex() const {
  return oxadvancedParser::RuleNoptrnewdeclarator;
}

void oxadvancedParser::NoptrnewdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoptrnewdeclarator(this);
}

void oxadvancedParser::NoptrnewdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoptrnewdeclarator(this);
}


oxadvancedParser::NoptrnewdeclaratorContext* oxadvancedParser::noptrnewdeclarator() {
   return noptrnewdeclarator(0);
}

oxadvancedParser::NoptrnewdeclaratorContext* oxadvancedParser::noptrnewdeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::NoptrnewdeclaratorContext *_localctx = _tracker.createInstance<NoptrnewdeclaratorContext>(_ctx, parentState);
  oxadvancedParser::NoptrnewdeclaratorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 54;
  enterRecursionRule(_localctx, 54, oxadvancedParser::RuleNoptrnewdeclarator, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(635);
    match(oxadvancedParser::LeftBracket);
    setState(636);
    expression(0);
    setState(637);
    match(oxadvancedParser::RightBracket);
    _ctx->stop = _input->LT(-1);
    setState(646);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<NoptrnewdeclaratorContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleNoptrnewdeclarator);
        setState(639);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(640);
        match(oxadvancedParser::LeftBracket);
        setState(641);
        constantexpression();
        setState(642);
        match(oxadvancedParser::RightBracket); 
      }
      setState(648);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- NewinitializerContext ------------------------------------------------------------------

oxadvancedParser::NewinitializerContext::NewinitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::NewinitializerContext::LeftParen() {
  return getToken(oxadvancedParser::LeftParen, 0);
}

tree::TerminalNode* oxadvancedParser::NewinitializerContext::RightParen() {
  return getToken(oxadvancedParser::RightParen, 0);
}

oxadvancedParser::ExpressionlistContext* oxadvancedParser::NewinitializerContext::expressionlist() {
  return getRuleContext<oxadvancedParser::ExpressionlistContext>(0);
}

oxadvancedParser::BracedinitlistContext* oxadvancedParser::NewinitializerContext::bracedinitlist() {
  return getRuleContext<oxadvancedParser::BracedinitlistContext>(0);
}


size_t oxadvancedParser::NewinitializerContext::getRuleIndex() const {
  return oxadvancedParser::RuleNewinitializer;
}

void oxadvancedParser::NewinitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewinitializer(this);
}

void oxadvancedParser::NewinitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewinitializer(this);
}

oxadvancedParser::NewinitializerContext* oxadvancedParser::newinitializer() {
  NewinitializerContext *_localctx = _tracker.createInstance<NewinitializerContext>(_ctx, getState());
  enterRule(_localctx, 56, oxadvancedParser::RuleNewinitializer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(655);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case oxadvancedParser::LeftParen: {
        enterOuterAlt(_localctx, 1);
        setState(649);
        match(oxadvancedParser::LeftParen);
        setState(651);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << oxadvancedParser::IN)
          | (1ULL << oxadvancedParser::Auto)
          | (1ULL << oxadvancedParser::Bool)
          | (1ULL << oxadvancedParser::Decltype)
          | (1ULL << oxadvancedParser::Delete)
          | (1ULL << oxadvancedParser::Double)
          | (1ULL << oxadvancedParser::False)
          | (1ULL << oxadvancedParser::Float)
          | (1ULL << oxadvancedParser::Int)
          | (1ULL << oxadvancedParser::Array)
          | (1ULL << oxadvancedParser::Decl)
          | (1ULL << oxadvancedParser::Long))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 66)) & ((1ULL << (oxadvancedParser::New - 66))
          | (1ULL << (oxadvancedParser::Nullptr - 66))
          | (1ULL << (oxadvancedParser::Operator - 66))
          | (1ULL << (oxadvancedParser::Short - 66))
          | (1ULL << (oxadvancedParser::Signed - 66))
          | (1ULL << (oxadvancedParser::This - 66))
          | (1ULL << (oxadvancedParser::True - 66))
          | (1ULL << (oxadvancedParser::Unsigned - 66))
          | (1ULL << (oxadvancedParser::Void - 66))
          | (1ULL << (oxadvancedParser::Wchar - 66))
          | (1ULL << (oxadvancedParser::LeftParen - 66))
          | (1ULL << (oxadvancedParser::LeftBracket - 66))
          | (1ULL << (oxadvancedParser::LeftBrace - 66))
          | (1ULL << (oxadvancedParser::Plus - 66))
          | (1ULL << (oxadvancedParser::Minus - 66))
          | (1ULL << (oxadvancedParser::Star - 66))
          | (1ULL << (oxadvancedParser::And - 66))
          | (1ULL << (oxadvancedParser::Or - 66))
          | (1ULL << (oxadvancedParser::Not - 66))
          | (1ULL << (oxadvancedParser::Less - 66)))) != 0) || ((((_la - 137) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 137)) & ((1ULL << (oxadvancedParser::PlusPlus - 137))
          | (1ULL << (oxadvancedParser::MinusMinus - 137))
          | (1ULL << (oxadvancedParser::Doublecolon - 137))
          | (1ULL << (oxadvancedParser::Dot - 137))
          | (1ULL << (oxadvancedParser::Identifier - 137))
          | (1ULL << (oxadvancedParser::Integerliteral - 137))
          | (1ULL << (oxadvancedParser::Characterliteral - 137))
          | (1ULL << (oxadvancedParser::Floatingliteral - 137))
          | (1ULL << (oxadvancedParser::Stringliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedintegerliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedfloatingliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedstringliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedcharacterliteral - 137)))) != 0)) {
          setState(650);
          expressionlist();
        }
        setState(653);
        match(oxadvancedParser::RightParen);
        break;
      }

      case oxadvancedParser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(654);
        bracedinitlist();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeleteexpressionContext ------------------------------------------------------------------

oxadvancedParser::DeleteexpressionContext::DeleteexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::DeleteexpressionContext::Delete() {
  return getToken(oxadvancedParser::Delete, 0);
}

oxadvancedParser::CastexpressionContext* oxadvancedParser::DeleteexpressionContext::castexpression() {
  return getRuleContext<oxadvancedParser::CastexpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::DeleteexpressionContext::Doublecolon() {
  return getToken(oxadvancedParser::Doublecolon, 0);
}

tree::TerminalNode* oxadvancedParser::DeleteexpressionContext::LeftBracket() {
  return getToken(oxadvancedParser::LeftBracket, 0);
}

tree::TerminalNode* oxadvancedParser::DeleteexpressionContext::RightBracket() {
  return getToken(oxadvancedParser::RightBracket, 0);
}


size_t oxadvancedParser::DeleteexpressionContext::getRuleIndex() const {
  return oxadvancedParser::RuleDeleteexpression;
}

void oxadvancedParser::DeleteexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeleteexpression(this);
}

void oxadvancedParser::DeleteexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeleteexpression(this);
}

oxadvancedParser::DeleteexpressionContext* oxadvancedParser::deleteexpression() {
  DeleteexpressionContext *_localctx = _tracker.createInstance<DeleteexpressionContext>(_ctx, getState());
  enterRule(_localctx, 58, oxadvancedParser::RuleDeleteexpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(669);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(658);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::Doublecolon) {
        setState(657);
        match(oxadvancedParser::Doublecolon);
      }
      setState(660);
      match(oxadvancedParser::Delete);
      setState(661);
      castexpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(663);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::Doublecolon) {
        setState(662);
        match(oxadvancedParser::Doublecolon);
      }
      setState(665);
      match(oxadvancedParser::Delete);
      setState(666);
      match(oxadvancedParser::LeftBracket);
      setState(667);
      match(oxadvancedParser::RightBracket);
      setState(668);
      castexpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CastexpressionContext ------------------------------------------------------------------

oxadvancedParser::CastexpressionContext::CastexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::UnaryexpressionContext* oxadvancedParser::CastexpressionContext::unaryexpression() {
  return getRuleContext<oxadvancedParser::UnaryexpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::CastexpressionContext::LeftParen() {
  return getToken(oxadvancedParser::LeftParen, 0);
}

oxadvancedParser::ThetypeidContext* oxadvancedParser::CastexpressionContext::thetypeid() {
  return getRuleContext<oxadvancedParser::ThetypeidContext>(0);
}

tree::TerminalNode* oxadvancedParser::CastexpressionContext::RightParen() {
  return getToken(oxadvancedParser::RightParen, 0);
}

oxadvancedParser::CastexpressionContext* oxadvancedParser::CastexpressionContext::castexpression() {
  return getRuleContext<oxadvancedParser::CastexpressionContext>(0);
}


size_t oxadvancedParser::CastexpressionContext::getRuleIndex() const {
  return oxadvancedParser::RuleCastexpression;
}

void oxadvancedParser::CastexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCastexpression(this);
}

void oxadvancedParser::CastexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCastexpression(this);
}

oxadvancedParser::CastexpressionContext* oxadvancedParser::castexpression() {
  CastexpressionContext *_localctx = _tracker.createInstance<CastexpressionContext>(_ctx, getState());
  enterRule(_localctx, 60, oxadvancedParser::RuleCastexpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(677);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(671);
      unaryexpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(672);
      match(oxadvancedParser::LeftParen);
      setState(673);
      thetypeid();
      setState(674);
      match(oxadvancedParser::RightParen);
      setState(675);
      castexpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PmexpressionContext ------------------------------------------------------------------

oxadvancedParser::PmexpressionContext::PmexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::CastexpressionContext* oxadvancedParser::PmexpressionContext::castexpression() {
  return getRuleContext<oxadvancedParser::CastexpressionContext>(0);
}


size_t oxadvancedParser::PmexpressionContext::getRuleIndex() const {
  return oxadvancedParser::RulePmexpression;
}

void oxadvancedParser::PmexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPmexpression(this);
}

void oxadvancedParser::PmexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPmexpression(this);
}

oxadvancedParser::PmexpressionContext* oxadvancedParser::pmexpression() {
  PmexpressionContext *_localctx = _tracker.createInstance<PmexpressionContext>(_ctx, getState());
  enterRule(_localctx, 62, oxadvancedParser::RulePmexpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(679);
    castexpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplicativeexpressionContext ------------------------------------------------------------------

oxadvancedParser::MultiplicativeexpressionContext::MultiplicativeexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::PmexpressionContext* oxadvancedParser::MultiplicativeexpressionContext::pmexpression() {
  return getRuleContext<oxadvancedParser::PmexpressionContext>(0);
}

oxadvancedParser::MultiplicativeexpressionContext* oxadvancedParser::MultiplicativeexpressionContext::multiplicativeexpression() {
  return getRuleContext<oxadvancedParser::MultiplicativeexpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::MultiplicativeexpressionContext::Star() {
  return getToken(oxadvancedParser::Star, 0);
}

tree::TerminalNode* oxadvancedParser::MultiplicativeexpressionContext::Div() {
  return getToken(oxadvancedParser::Div, 0);
}

tree::TerminalNode* oxadvancedParser::MultiplicativeexpressionContext::Mod() {
  return getToken(oxadvancedParser::Mod, 0);
}

tree::TerminalNode* oxadvancedParser::MultiplicativeexpressionContext::DotStar() {
  return getToken(oxadvancedParser::DotStar, 0);
}


size_t oxadvancedParser::MultiplicativeexpressionContext::getRuleIndex() const {
  return oxadvancedParser::RuleMultiplicativeexpression;
}

void oxadvancedParser::MultiplicativeexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeexpression(this);
}

void oxadvancedParser::MultiplicativeexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeexpression(this);
}


oxadvancedParser::MultiplicativeexpressionContext* oxadvancedParser::multiplicativeexpression() {
   return multiplicativeexpression(0);
}

oxadvancedParser::MultiplicativeexpressionContext* oxadvancedParser::multiplicativeexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::MultiplicativeexpressionContext *_localctx = _tracker.createInstance<MultiplicativeexpressionContext>(_ctx, parentState);
  oxadvancedParser::MultiplicativeexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 64;
  enterRecursionRule(_localctx, 64, oxadvancedParser::RuleMultiplicativeexpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(682);
    pmexpression();
    _ctx->stop = _input->LT(-1);
    setState(722);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(720);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(684);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(685);
          match(oxadvancedParser::Star);
          setState(686);
          pmexpression();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(687);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(688);
          match(oxadvancedParser::Div);
          setState(689);
          pmexpression();
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(690);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(691);
          match(oxadvancedParser::Mod);
          setState(692);
          pmexpression();
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(693);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(694);
          match(oxadvancedParser::T__3);
          setState(695);
          pmexpression();
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(696);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(697);
          match(oxadvancedParser::DotStar);
          setState(698);
          pmexpression();
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(699);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(700);
          match(oxadvancedParser::T__4);
          setState(701);
          pmexpression();
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(702);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(703);
          match(oxadvancedParser::T__5);
          setState(704);
          pmexpression();
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(705);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(706);
          match(oxadvancedParser::T__0);
          setState(707);
          pmexpression();
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(708);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(709);
          match(oxadvancedParser::T__6);
          setState(710);
          pmexpression();
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(711);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(712);
          match(oxadvancedParser::T__7);
          setState(713);
          pmexpression();
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(714);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(715);
          match(oxadvancedParser::T__8);
          setState(716);
          pmexpression();
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(717);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(718);
          match(oxadvancedParser::T__9);
          setState(719);
          pmexpression();
          break;
        }

        default:
          break;
        } 
      }
      setState(724);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AdditiveexpressionContext ------------------------------------------------------------------

oxadvancedParser::AdditiveexpressionContext::AdditiveexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::MultiplicativeexpressionContext* oxadvancedParser::AdditiveexpressionContext::multiplicativeexpression() {
  return getRuleContext<oxadvancedParser::MultiplicativeexpressionContext>(0);
}

oxadvancedParser::AdditiveexpressionContext* oxadvancedParser::AdditiveexpressionContext::additiveexpression() {
  return getRuleContext<oxadvancedParser::AdditiveexpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::AdditiveexpressionContext::Plus() {
  return getToken(oxadvancedParser::Plus, 0);
}

tree::TerminalNode* oxadvancedParser::AdditiveexpressionContext::Minus() {
  return getToken(oxadvancedParser::Minus, 0);
}

tree::TerminalNode* oxadvancedParser::AdditiveexpressionContext::Tilde() {
  return getToken(oxadvancedParser::Tilde, 0);
}

tree::TerminalNode* oxadvancedParser::AdditiveexpressionContext::Or() {
  return getToken(oxadvancedParser::Or, 0);
}


size_t oxadvancedParser::AdditiveexpressionContext::getRuleIndex() const {
  return oxadvancedParser::RuleAdditiveexpression;
}

void oxadvancedParser::AdditiveexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveexpression(this);
}

void oxadvancedParser::AdditiveexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveexpression(this);
}


oxadvancedParser::AdditiveexpressionContext* oxadvancedParser::additiveexpression() {
   return additiveexpression(0);
}

oxadvancedParser::AdditiveexpressionContext* oxadvancedParser::additiveexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::AdditiveexpressionContext *_localctx = _tracker.createInstance<AdditiveexpressionContext>(_ctx, parentState);
  oxadvancedParser::AdditiveexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 66;
  enterRecursionRule(_localctx, 66, oxadvancedParser::RuleAdditiveexpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(726);
    multiplicativeexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(742);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(740);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<AdditiveexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveexpression);
          setState(728);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(729);
          match(oxadvancedParser::Plus);
          setState(730);
          multiplicativeexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<AdditiveexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveexpression);
          setState(731);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(732);
          match(oxadvancedParser::Minus);
          setState(733);
          multiplicativeexpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<AdditiveexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveexpression);
          setState(734);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(735);
          match(oxadvancedParser::Tilde);
          setState(736);
          multiplicativeexpression(0);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<AdditiveexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveexpression);
          setState(737);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(738);
          match(oxadvancedParser::Or);
          setState(739);
          multiplicativeexpression(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(744);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ShiftexpressionContext ------------------------------------------------------------------

oxadvancedParser::ShiftexpressionContext::ShiftexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::AdditiveexpressionContext* oxadvancedParser::ShiftexpressionContext::additiveexpression() {
  return getRuleContext<oxadvancedParser::AdditiveexpressionContext>(0);
}

oxadvancedParser::ShiftexpressionContext* oxadvancedParser::ShiftexpressionContext::shiftexpression() {
  return getRuleContext<oxadvancedParser::ShiftexpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::ShiftexpressionContext::LeftShift() {
  return getToken(oxadvancedParser::LeftShift, 0);
}

oxadvancedParser::RightShiftContext* oxadvancedParser::ShiftexpressionContext::rightShift() {
  return getRuleContext<oxadvancedParser::RightShiftContext>(0);
}


size_t oxadvancedParser::ShiftexpressionContext::getRuleIndex() const {
  return oxadvancedParser::RuleShiftexpression;
}

void oxadvancedParser::ShiftexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftexpression(this);
}

void oxadvancedParser::ShiftexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftexpression(this);
}


oxadvancedParser::ShiftexpressionContext* oxadvancedParser::shiftexpression() {
   return shiftexpression(0);
}

oxadvancedParser::ShiftexpressionContext* oxadvancedParser::shiftexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::ShiftexpressionContext *_localctx = _tracker.createInstance<ShiftexpressionContext>(_ctx, parentState);
  oxadvancedParser::ShiftexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 68;
  enterRecursionRule(_localctx, 68, oxadvancedParser::RuleShiftexpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(746);
    additiveexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(757);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(755);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ShiftexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftexpression);
          setState(748);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(749);
          match(oxadvancedParser::LeftShift);
          setState(750);
          additiveexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ShiftexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftexpression);
          setState(751);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(752);
          rightShift();
          setState(753);
          additiveexpression(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(759);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RelationalexpressionContext ------------------------------------------------------------------

oxadvancedParser::RelationalexpressionContext::RelationalexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::ShiftexpressionContext* oxadvancedParser::RelationalexpressionContext::shiftexpression() {
  return getRuleContext<oxadvancedParser::ShiftexpressionContext>(0);
}

oxadvancedParser::RelationalexpressionContext* oxadvancedParser::RelationalexpressionContext::relationalexpression() {
  return getRuleContext<oxadvancedParser::RelationalexpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::RelationalexpressionContext::Less() {
  return getToken(oxadvancedParser::Less, 0);
}

tree::TerminalNode* oxadvancedParser::RelationalexpressionContext::Greater() {
  return getToken(oxadvancedParser::Greater, 0);
}

tree::TerminalNode* oxadvancedParser::RelationalexpressionContext::LessEqual() {
  return getToken(oxadvancedParser::LessEqual, 0);
}

tree::TerminalNode* oxadvancedParser::RelationalexpressionContext::GreaterEqual() {
  return getToken(oxadvancedParser::GreaterEqual, 0);
}


size_t oxadvancedParser::RelationalexpressionContext::getRuleIndex() const {
  return oxadvancedParser::RuleRelationalexpression;
}

void oxadvancedParser::RelationalexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalexpression(this);
}

void oxadvancedParser::RelationalexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalexpression(this);
}


oxadvancedParser::RelationalexpressionContext* oxadvancedParser::relationalexpression() {
   return relationalexpression(0);
}

oxadvancedParser::RelationalexpressionContext* oxadvancedParser::relationalexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::RelationalexpressionContext *_localctx = _tracker.createInstance<RelationalexpressionContext>(_ctx, parentState);
  oxadvancedParser::RelationalexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 70;
  enterRecursionRule(_localctx, 70, oxadvancedParser::RuleRelationalexpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(761);
    shiftexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(777);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(775);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(763);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(764);
          match(oxadvancedParser::Less);
          setState(765);
          shiftexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(766);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(767);
          match(oxadvancedParser::Greater);
          setState(768);
          shiftexpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(769);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(770);
          match(oxadvancedParser::LessEqual);
          setState(771);
          shiftexpression(0);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(772);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(773);
          match(oxadvancedParser::GreaterEqual);
          setState(774);
          shiftexpression(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(779);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EqualityexpressionContext ------------------------------------------------------------------

oxadvancedParser::EqualityexpressionContext::EqualityexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::RelationalexpressionContext* oxadvancedParser::EqualityexpressionContext::relationalexpression() {
  return getRuleContext<oxadvancedParser::RelationalexpressionContext>(0);
}

oxadvancedParser::EqualityexpressionContext* oxadvancedParser::EqualityexpressionContext::equalityexpression() {
  return getRuleContext<oxadvancedParser::EqualityexpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::EqualityexpressionContext::Equal() {
  return getToken(oxadvancedParser::Equal, 0);
}

tree::TerminalNode* oxadvancedParser::EqualityexpressionContext::NotEqual() {
  return getToken(oxadvancedParser::NotEqual, 0);
}


size_t oxadvancedParser::EqualityexpressionContext::getRuleIndex() const {
  return oxadvancedParser::RuleEqualityexpression;
}

void oxadvancedParser::EqualityexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityexpression(this);
}

void oxadvancedParser::EqualityexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityexpression(this);
}


oxadvancedParser::EqualityexpressionContext* oxadvancedParser::equalityexpression() {
   return equalityexpression(0);
}

oxadvancedParser::EqualityexpressionContext* oxadvancedParser::equalityexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::EqualityexpressionContext *_localctx = _tracker.createInstance<EqualityexpressionContext>(_ctx, parentState);
  oxadvancedParser::EqualityexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 72;
  enterRecursionRule(_localctx, 72, oxadvancedParser::RuleEqualityexpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(781);
    relationalexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(797);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(795);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<EqualityexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityexpression);
          setState(783);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(784);
          match(oxadvancedParser::Equal);
          setState(785);
          relationalexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<EqualityexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityexpression);
          setState(786);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(787);
          match(oxadvancedParser::NotEqual);
          setState(788);
          relationalexpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<EqualityexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityexpression);
          setState(789);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(790);
          match(oxadvancedParser::T__10);
          setState(791);
          relationalexpression(0);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<EqualityexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityexpression);
          setState(792);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(793);
          match(oxadvancedParser::T__11);
          setState(794);
          relationalexpression(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(799);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AndexpressionContext ------------------------------------------------------------------

oxadvancedParser::AndexpressionContext::AndexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::EqualityexpressionContext* oxadvancedParser::AndexpressionContext::equalityexpression() {
  return getRuleContext<oxadvancedParser::EqualityexpressionContext>(0);
}

oxadvancedParser::AndexpressionContext* oxadvancedParser::AndexpressionContext::andexpression() {
  return getRuleContext<oxadvancedParser::AndexpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::AndexpressionContext::And() {
  return getToken(oxadvancedParser::And, 0);
}


size_t oxadvancedParser::AndexpressionContext::getRuleIndex() const {
  return oxadvancedParser::RuleAndexpression;
}

void oxadvancedParser::AndexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndexpression(this);
}

void oxadvancedParser::AndexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndexpression(this);
}


oxadvancedParser::AndexpressionContext* oxadvancedParser::andexpression() {
   return andexpression(0);
}

oxadvancedParser::AndexpressionContext* oxadvancedParser::andexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::AndexpressionContext *_localctx = _tracker.createInstance<AndexpressionContext>(_ctx, parentState);
  oxadvancedParser::AndexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 74;
  enterRecursionRule(_localctx, 74, oxadvancedParser::RuleAndexpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(801);
    equalityexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(808);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AndexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAndexpression);
        setState(803);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(804);
        match(oxadvancedParser::And);
        setState(805);
        equalityexpression(0); 
      }
      setState(810);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExclusiveorexpressionContext ------------------------------------------------------------------

oxadvancedParser::ExclusiveorexpressionContext::ExclusiveorexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::AndexpressionContext* oxadvancedParser::ExclusiveorexpressionContext::andexpression() {
  return getRuleContext<oxadvancedParser::AndexpressionContext>(0);
}

oxadvancedParser::ExclusiveorexpressionContext* oxadvancedParser::ExclusiveorexpressionContext::exclusiveorexpression() {
  return getRuleContext<oxadvancedParser::ExclusiveorexpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::ExclusiveorexpressionContext::Caret() {
  return getToken(oxadvancedParser::Caret, 0);
}


size_t oxadvancedParser::ExclusiveorexpressionContext::getRuleIndex() const {
  return oxadvancedParser::RuleExclusiveorexpression;
}

void oxadvancedParser::ExclusiveorexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExclusiveorexpression(this);
}

void oxadvancedParser::ExclusiveorexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExclusiveorexpression(this);
}


oxadvancedParser::ExclusiveorexpressionContext* oxadvancedParser::exclusiveorexpression() {
   return exclusiveorexpression(0);
}

oxadvancedParser::ExclusiveorexpressionContext* oxadvancedParser::exclusiveorexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::ExclusiveorexpressionContext *_localctx = _tracker.createInstance<ExclusiveorexpressionContext>(_ctx, parentState);
  oxadvancedParser::ExclusiveorexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 76;
  enterRecursionRule(_localctx, 76, oxadvancedParser::RuleExclusiveorexpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(812);
    andexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(819);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExclusiveorexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExclusiveorexpression);
        setState(814);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(815);
        match(oxadvancedParser::Caret);
        setState(816);
        andexpression(0); 
      }
      setState(821);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LogicalandexpressionContext ------------------------------------------------------------------

oxadvancedParser::LogicalandexpressionContext::LogicalandexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::ExclusiveorexpressionContext* oxadvancedParser::LogicalandexpressionContext::exclusiveorexpression() {
  return getRuleContext<oxadvancedParser::ExclusiveorexpressionContext>(0);
}

oxadvancedParser::LogicalandexpressionContext* oxadvancedParser::LogicalandexpressionContext::logicalandexpression() {
  return getRuleContext<oxadvancedParser::LogicalandexpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::LogicalandexpressionContext::AndAnd() {
  return getToken(oxadvancedParser::AndAnd, 0);
}


size_t oxadvancedParser::LogicalandexpressionContext::getRuleIndex() const {
  return oxadvancedParser::RuleLogicalandexpression;
}

void oxadvancedParser::LogicalandexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalandexpression(this);
}

void oxadvancedParser::LogicalandexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalandexpression(this);
}


oxadvancedParser::LogicalandexpressionContext* oxadvancedParser::logicalandexpression() {
   return logicalandexpression(0);
}

oxadvancedParser::LogicalandexpressionContext* oxadvancedParser::logicalandexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::LogicalandexpressionContext *_localctx = _tracker.createInstance<LogicalandexpressionContext>(_ctx, parentState);
  oxadvancedParser::LogicalandexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 78;
  enterRecursionRule(_localctx, 78, oxadvancedParser::RuleLogicalandexpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(823);
    exclusiveorexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(830);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LogicalandexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogicalandexpression);
        setState(825);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(826);
        _la = _input->LA(1);
        if (!(_la == oxadvancedParser::T__12 || _la == oxadvancedParser::AndAnd)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(827);
        exclusiveorexpression(0); 
      }
      setState(832);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LogicalorexpressionContext ------------------------------------------------------------------

oxadvancedParser::LogicalorexpressionContext::LogicalorexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::LogicalandexpressionContext* oxadvancedParser::LogicalorexpressionContext::logicalandexpression() {
  return getRuleContext<oxadvancedParser::LogicalandexpressionContext>(0);
}

oxadvancedParser::LogicalorexpressionContext* oxadvancedParser::LogicalorexpressionContext::logicalorexpression() {
  return getRuleContext<oxadvancedParser::LogicalorexpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::LogicalorexpressionContext::OrOr() {
  return getToken(oxadvancedParser::OrOr, 0);
}


size_t oxadvancedParser::LogicalorexpressionContext::getRuleIndex() const {
  return oxadvancedParser::RuleLogicalorexpression;
}

void oxadvancedParser::LogicalorexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalorexpression(this);
}

void oxadvancedParser::LogicalorexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalorexpression(this);
}


oxadvancedParser::LogicalorexpressionContext* oxadvancedParser::logicalorexpression() {
   return logicalorexpression(0);
}

oxadvancedParser::LogicalorexpressionContext* oxadvancedParser::logicalorexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::LogicalorexpressionContext *_localctx = _tracker.createInstance<LogicalorexpressionContext>(_ctx, parentState);
  oxadvancedParser::LogicalorexpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 80;
  enterRecursionRule(_localctx, 80, oxadvancedParser::RuleLogicalorexpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(834);
    logicalandexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(841);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LogicalorexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogicalorexpression);
        setState(836);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(837);
        _la = _input->LA(1);
        if (!(_la == oxadvancedParser::T__13 || _la == oxadvancedParser::OrOr)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(838);
        logicalandexpression(0); 
      }
      setState(843);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConditionalexpressionContext ------------------------------------------------------------------

oxadvancedParser::ConditionalexpressionContext::ConditionalexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::LogicalorexpressionContext* oxadvancedParser::ConditionalexpressionContext::logicalorexpression() {
  return getRuleContext<oxadvancedParser::LogicalorexpressionContext>(0);
}

oxadvancedParser::ExpressionContext* oxadvancedParser::ConditionalexpressionContext::expression() {
  return getRuleContext<oxadvancedParser::ExpressionContext>(0);
}

oxadvancedParser::AssignmentexpressionContext* oxadvancedParser::ConditionalexpressionContext::assignmentexpression() {
  return getRuleContext<oxadvancedParser::AssignmentexpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::ConditionalexpressionContext::Question() {
  return getToken(oxadvancedParser::Question, 0);
}

tree::TerminalNode* oxadvancedParser::ConditionalexpressionContext::Colon() {
  return getToken(oxadvancedParser::Colon, 0);
}


size_t oxadvancedParser::ConditionalexpressionContext::getRuleIndex() const {
  return oxadvancedParser::RuleConditionalexpression;
}

void oxadvancedParser::ConditionalexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalexpression(this);
}

void oxadvancedParser::ConditionalexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalexpression(this);
}

oxadvancedParser::ConditionalexpressionContext* oxadvancedParser::conditionalexpression() {
  ConditionalexpressionContext *_localctx = _tracker.createInstance<ConditionalexpressionContext>(_ctx, getState());
  enterRule(_localctx, 82, oxadvancedParser::RuleConditionalexpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(844);
    logicalorexpression(0);
    setState(850);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
    case 1: {
      setState(845);
      _la = _input->LA(1);
      if (!(_la == oxadvancedParser::T__14 || _la == oxadvancedParser::Question)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(846);
      expression(0);
      setState(847);
      _la = _input->LA(1);
      if (!(_la == oxadvancedParser::T__15 || _la == oxadvancedParser::Colon)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(848);
      assignmentexpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentexpressionContext ------------------------------------------------------------------

oxadvancedParser::AssignmentexpressionContext::AssignmentexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::ConditionalexpressionContext* oxadvancedParser::AssignmentexpressionContext::conditionalexpression() {
  return getRuleContext<oxadvancedParser::ConditionalexpressionContext>(0);
}

oxadvancedParser::LogicalorexpressionContext* oxadvancedParser::AssignmentexpressionContext::logicalorexpression() {
  return getRuleContext<oxadvancedParser::LogicalorexpressionContext>(0);
}

oxadvancedParser::AssignmentoperatorContext* oxadvancedParser::AssignmentexpressionContext::assignmentoperator() {
  return getRuleContext<oxadvancedParser::AssignmentoperatorContext>(0);
}

oxadvancedParser::InitializerclauseContext* oxadvancedParser::AssignmentexpressionContext::initializerclause() {
  return getRuleContext<oxadvancedParser::InitializerclauseContext>(0);
}

tree::TerminalNode* oxadvancedParser::AssignmentexpressionContext::LeftBracket() {
  return getToken(oxadvancedParser::LeftBracket, 0);
}

oxadvancedParser::MultiplereturnvaluesContext* oxadvancedParser::AssignmentexpressionContext::multiplereturnvalues() {
  return getRuleContext<oxadvancedParser::MultiplereturnvaluesContext>(0);
}

tree::TerminalNode* oxadvancedParser::AssignmentexpressionContext::RightBracket() {
  return getToken(oxadvancedParser::RightBracket, 0);
}


size_t oxadvancedParser::AssignmentexpressionContext::getRuleIndex() const {
  return oxadvancedParser::RuleAssignmentexpression;
}

void oxadvancedParser::AssignmentexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentexpression(this);
}

void oxadvancedParser::AssignmentexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentexpression(this);
}

oxadvancedParser::AssignmentexpressionContext* oxadvancedParser::assignmentexpression() {
  AssignmentexpressionContext *_localctx = _tracker.createInstance<AssignmentexpressionContext>(_ctx, getState());
  enterRule(_localctx, 84, oxadvancedParser::RuleAssignmentexpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(863);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(852);
      conditionalexpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(853);
      logicalorexpression(0);
      setState(854);
      assignmentoperator();
      setState(855);
      initializerclause();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(857);
      match(oxadvancedParser::LeftBracket);
      setState(858);
      multiplereturnvalues();
      setState(859);
      match(oxadvancedParser::RightBracket);
      setState(860);
      assignmentoperator();
      setState(861);
      initializerclause();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplereturnvaluesContext ------------------------------------------------------------------

oxadvancedParser::MultiplereturnvaluesContext::MultiplereturnvaluesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::ExpressionContext* oxadvancedParser::MultiplereturnvaluesContext::expression() {
  return getRuleContext<oxadvancedParser::ExpressionContext>(0);
}


size_t oxadvancedParser::MultiplereturnvaluesContext::getRuleIndex() const {
  return oxadvancedParser::RuleMultiplereturnvalues;
}

void oxadvancedParser::MultiplereturnvaluesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplereturnvalues(this);
}

void oxadvancedParser::MultiplereturnvaluesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplereturnvalues(this);
}

oxadvancedParser::MultiplereturnvaluesContext* oxadvancedParser::multiplereturnvalues() {
  MultiplereturnvaluesContext *_localctx = _tracker.createInstance<MultiplereturnvaluesContext>(_ctx, getState());
  enterRule(_localctx, 86, oxadvancedParser::RuleMultiplereturnvalues);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(865);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentoperatorContext ------------------------------------------------------------------

oxadvancedParser::AssignmentoperatorContext::AssignmentoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::AssignmentoperatorContext::Assign() {
  return getToken(oxadvancedParser::Assign, 0);
}

tree::TerminalNode* oxadvancedParser::AssignmentoperatorContext::StarAssign() {
  return getToken(oxadvancedParser::StarAssign, 0);
}

tree::TerminalNode* oxadvancedParser::AssignmentoperatorContext::DivAssign() {
  return getToken(oxadvancedParser::DivAssign, 0);
}

tree::TerminalNode* oxadvancedParser::AssignmentoperatorContext::PlusAssign() {
  return getToken(oxadvancedParser::PlusAssign, 0);
}

tree::TerminalNode* oxadvancedParser::AssignmentoperatorContext::MinusAssign() {
  return getToken(oxadvancedParser::MinusAssign, 0);
}

oxadvancedParser::RightShiftAssignContext* oxadvancedParser::AssignmentoperatorContext::rightShiftAssign() {
  return getRuleContext<oxadvancedParser::RightShiftAssignContext>(0);
}

tree::TerminalNode* oxadvancedParser::AssignmentoperatorContext::AndAssign() {
  return getToken(oxadvancedParser::AndAssign, 0);
}

tree::TerminalNode* oxadvancedParser::AssignmentoperatorContext::XorAssign() {
  return getToken(oxadvancedParser::XorAssign, 0);
}

tree::TerminalNode* oxadvancedParser::AssignmentoperatorContext::OrAssign() {
  return getToken(oxadvancedParser::OrAssign, 0);
}


size_t oxadvancedParser::AssignmentoperatorContext::getRuleIndex() const {
  return oxadvancedParser::RuleAssignmentoperator;
}

void oxadvancedParser::AssignmentoperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentoperator(this);
}

void oxadvancedParser::AssignmentoperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentoperator(this);
}

oxadvancedParser::AssignmentoperatorContext* oxadvancedParser::assignmentoperator() {
  AssignmentoperatorContext *_localctx = _tracker.createInstance<AssignmentoperatorContext>(_ctx, getState());
  enterRule(_localctx, 88, oxadvancedParser::RuleAssignmentoperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(879);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case oxadvancedParser::Assign: {
        enterOuterAlt(_localctx, 1);
        setState(867);
        match(oxadvancedParser::Assign);
        break;
      }

      case oxadvancedParser::StarAssign: {
        enterOuterAlt(_localctx, 2);
        setState(868);
        match(oxadvancedParser::StarAssign);
        break;
      }

      case oxadvancedParser::DivAssign: {
        enterOuterAlt(_localctx, 3);
        setState(869);
        match(oxadvancedParser::DivAssign);
        break;
      }

      case oxadvancedParser::PlusAssign: {
        enterOuterAlt(_localctx, 4);
        setState(870);
        match(oxadvancedParser::PlusAssign);
        break;
      }

      case oxadvancedParser::MinusAssign: {
        enterOuterAlt(_localctx, 5);
        setState(871);
        match(oxadvancedParser::MinusAssign);
        break;
      }

      case oxadvancedParser::Greater: {
        enterOuterAlt(_localctx, 6);
        setState(872);
        rightShiftAssign();
        break;
      }

      case oxadvancedParser::AndAssign: {
        enterOuterAlt(_localctx, 7);
        setState(873);
        match(oxadvancedParser::AndAssign);
        break;
      }

      case oxadvancedParser::XorAssign: {
        enterOuterAlt(_localctx, 8);
        setState(874);
        match(oxadvancedParser::XorAssign);
        break;
      }

      case oxadvancedParser::OrAssign: {
        enterOuterAlt(_localctx, 9);
        setState(875);
        match(oxadvancedParser::OrAssign);
        break;
      }

      case oxadvancedParser::T__16: {
        enterOuterAlt(_localctx, 10);
        setState(876);
        match(oxadvancedParser::T__16);
        break;
      }

      case oxadvancedParser::T__17: {
        enterOuterAlt(_localctx, 11);
        setState(877);
        match(oxadvancedParser::T__17);
        break;
      }

      case oxadvancedParser::T__18: {
        enterOuterAlt(_localctx, 12);
        setState(878);
        match(oxadvancedParser::T__18);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

oxadvancedParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::AssignmentexpressionContext* oxadvancedParser::ExpressionContext::assignmentexpression() {
  return getRuleContext<oxadvancedParser::AssignmentexpressionContext>(0);
}

oxadvancedParser::ExpressionContext* oxadvancedParser::ExpressionContext::expression() {
  return getRuleContext<oxadvancedParser::ExpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::ExpressionContext::Comma() {
  return getToken(oxadvancedParser::Comma, 0);
}


size_t oxadvancedParser::ExpressionContext::getRuleIndex() const {
  return oxadvancedParser::RuleExpression;
}

void oxadvancedParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void oxadvancedParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


oxadvancedParser::ExpressionContext* oxadvancedParser::expression() {
   return expression(0);
}

oxadvancedParser::ExpressionContext* oxadvancedParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  oxadvancedParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 90;
  enterRecursionRule(_localctx, 90, oxadvancedParser::RuleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(882);
    assignmentexpression();
    _ctx->stop = _input->LT(-1);
    setState(889);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(884);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(885);
        match(oxadvancedParser::Comma);
        setState(886);
        assignmentexpression(); 
      }
      setState(891);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConstantexpressionContext ------------------------------------------------------------------

oxadvancedParser::ConstantexpressionContext::ConstantexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::ConditionalexpressionContext* oxadvancedParser::ConstantexpressionContext::conditionalexpression() {
  return getRuleContext<oxadvancedParser::ConditionalexpressionContext>(0);
}


size_t oxadvancedParser::ConstantexpressionContext::getRuleIndex() const {
  return oxadvancedParser::RuleConstantexpression;
}

void oxadvancedParser::ConstantexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantexpression(this);
}

void oxadvancedParser::ConstantexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantexpression(this);
}

oxadvancedParser::ConstantexpressionContext* oxadvancedParser::constantexpression() {
  ConstantexpressionContext *_localctx = _tracker.createInstance<ConstantexpressionContext>(_ctx, getState());
  enterRule(_localctx, 92, oxadvancedParser::RuleConstantexpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(892);
    conditionalexpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

oxadvancedParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::CompoundstatementContext* oxadvancedParser::StatementContext::compoundstatement() {
  return getRuleContext<oxadvancedParser::CompoundstatementContext>(0);
}

oxadvancedParser::LabeledstatementContext* oxadvancedParser::StatementContext::labeledstatement() {
  return getRuleContext<oxadvancedParser::LabeledstatementContext>(0);
}

oxadvancedParser::ExpressionstatementContext* oxadvancedParser::StatementContext::expressionstatement() {
  return getRuleContext<oxadvancedParser::ExpressionstatementContext>(0);
}

oxadvancedParser::SelectionstatementContext* oxadvancedParser::StatementContext::selectionstatement() {
  return getRuleContext<oxadvancedParser::SelectionstatementContext>(0);
}

oxadvancedParser::IterationstatementContext* oxadvancedParser::StatementContext::iterationstatement() {
  return getRuleContext<oxadvancedParser::IterationstatementContext>(0);
}

oxadvancedParser::JumpstatementContext* oxadvancedParser::StatementContext::jumpstatement() {
  return getRuleContext<oxadvancedParser::JumpstatementContext>(0);
}

oxadvancedParser::DeclarationstatementContext* oxadvancedParser::StatementContext::declarationstatement() {
  return getRuleContext<oxadvancedParser::DeclarationstatementContext>(0);
}


size_t oxadvancedParser::StatementContext::getRuleIndex() const {
  return oxadvancedParser::RuleStatement;
}

void oxadvancedParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void oxadvancedParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

oxadvancedParser::StatementContext* oxadvancedParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 94, oxadvancedParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(901);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(894);
      compoundstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(895);
      labeledstatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(896);
      expressionstatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(897);
      selectionstatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(898);
      iterationstatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(899);
      jumpstatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(900);
      declarationstatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabeledstatementContext ------------------------------------------------------------------

oxadvancedParser::LabeledstatementContext::LabeledstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::LabeledstatementContext::Identifier() {
  return getToken(oxadvancedParser::Identifier, 0);
}

tree::TerminalNode* oxadvancedParser::LabeledstatementContext::Colon() {
  return getToken(oxadvancedParser::Colon, 0);
}

oxadvancedParser::StatementContext* oxadvancedParser::LabeledstatementContext::statement() {
  return getRuleContext<oxadvancedParser::StatementContext>(0);
}

tree::TerminalNode* oxadvancedParser::LabeledstatementContext::Case() {
  return getToken(oxadvancedParser::Case, 0);
}

oxadvancedParser::ConstantexpressionContext* oxadvancedParser::LabeledstatementContext::constantexpression() {
  return getRuleContext<oxadvancedParser::ConstantexpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::LabeledstatementContext::Default() {
  return getToken(oxadvancedParser::Default, 0);
}


size_t oxadvancedParser::LabeledstatementContext::getRuleIndex() const {
  return oxadvancedParser::RuleLabeledstatement;
}

void oxadvancedParser::LabeledstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabeledstatement(this);
}

void oxadvancedParser::LabeledstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabeledstatement(this);
}

oxadvancedParser::LabeledstatementContext* oxadvancedParser::labeledstatement() {
  LabeledstatementContext *_localctx = _tracker.createInstance<LabeledstatementContext>(_ctx, getState());
  enterRule(_localctx, 96, oxadvancedParser::RuleLabeledstatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(914);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case oxadvancedParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(903);
        match(oxadvancedParser::Identifier);
        setState(904);
        match(oxadvancedParser::Colon);
        setState(905);
        statement();
        break;
      }

      case oxadvancedParser::Case: {
        enterOuterAlt(_localctx, 2);
        setState(906);
        match(oxadvancedParser::Case);
        setState(907);
        constantexpression();
        setState(908);
        match(oxadvancedParser::Colon);
        setState(909);
        statement();
        break;
      }

      case oxadvancedParser::Default: {
        enterOuterAlt(_localctx, 3);
        setState(911);
        match(oxadvancedParser::Default);
        setState(912);
        match(oxadvancedParser::Colon);
        setState(913);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionstatementContext ------------------------------------------------------------------

oxadvancedParser::ExpressionstatementContext::ExpressionstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::ExpressionstatementContext::Semi() {
  return getToken(oxadvancedParser::Semi, 0);
}

oxadvancedParser::ExpressionContext* oxadvancedParser::ExpressionstatementContext::expression() {
  return getRuleContext<oxadvancedParser::ExpressionContext>(0);
}


size_t oxadvancedParser::ExpressionstatementContext::getRuleIndex() const {
  return oxadvancedParser::RuleExpressionstatement;
}

void oxadvancedParser::ExpressionstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionstatement(this);
}

void oxadvancedParser::ExpressionstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionstatement(this);
}

oxadvancedParser::ExpressionstatementContext* oxadvancedParser::expressionstatement() {
  ExpressionstatementContext *_localctx = _tracker.createInstance<ExpressionstatementContext>(_ctx, getState());
  enterRule(_localctx, 98, oxadvancedParser::RuleExpressionstatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(917);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << oxadvancedParser::IN)
      | (1ULL << oxadvancedParser::Auto)
      | (1ULL << oxadvancedParser::Bool)
      | (1ULL << oxadvancedParser::Decltype)
      | (1ULL << oxadvancedParser::Delete)
      | (1ULL << oxadvancedParser::Double)
      | (1ULL << oxadvancedParser::False)
      | (1ULL << oxadvancedParser::Float)
      | (1ULL << oxadvancedParser::Int)
      | (1ULL << oxadvancedParser::Array)
      | (1ULL << oxadvancedParser::Decl)
      | (1ULL << oxadvancedParser::Long))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (oxadvancedParser::New - 66))
      | (1ULL << (oxadvancedParser::Nullptr - 66))
      | (1ULL << (oxadvancedParser::Operator - 66))
      | (1ULL << (oxadvancedParser::Short - 66))
      | (1ULL << (oxadvancedParser::Signed - 66))
      | (1ULL << (oxadvancedParser::This - 66))
      | (1ULL << (oxadvancedParser::True - 66))
      | (1ULL << (oxadvancedParser::Unsigned - 66))
      | (1ULL << (oxadvancedParser::Void - 66))
      | (1ULL << (oxadvancedParser::Wchar - 66))
      | (1ULL << (oxadvancedParser::LeftParen - 66))
      | (1ULL << (oxadvancedParser::LeftBracket - 66))
      | (1ULL << (oxadvancedParser::LeftBrace - 66))
      | (1ULL << (oxadvancedParser::Plus - 66))
      | (1ULL << (oxadvancedParser::Minus - 66))
      | (1ULL << (oxadvancedParser::Star - 66))
      | (1ULL << (oxadvancedParser::And - 66))
      | (1ULL << (oxadvancedParser::Or - 66))
      | (1ULL << (oxadvancedParser::Not - 66))
      | (1ULL << (oxadvancedParser::Less - 66)))) != 0) || ((((_la - 137) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 137)) & ((1ULL << (oxadvancedParser::PlusPlus - 137))
      | (1ULL << (oxadvancedParser::MinusMinus - 137))
      | (1ULL << (oxadvancedParser::Doublecolon - 137))
      | (1ULL << (oxadvancedParser::Dot - 137))
      | (1ULL << (oxadvancedParser::Identifier - 137))
      | (1ULL << (oxadvancedParser::Integerliteral - 137))
      | (1ULL << (oxadvancedParser::Characterliteral - 137))
      | (1ULL << (oxadvancedParser::Floatingliteral - 137))
      | (1ULL << (oxadvancedParser::Stringliteral - 137))
      | (1ULL << (oxadvancedParser::Userdefinedintegerliteral - 137))
      | (1ULL << (oxadvancedParser::Userdefinedfloatingliteral - 137))
      | (1ULL << (oxadvancedParser::Userdefinedstringliteral - 137))
      | (1ULL << (oxadvancedParser::Userdefinedcharacterliteral - 137)))) != 0)) {
      setState(916);
      expression(0);
    }
    setState(919);
    match(oxadvancedParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundstatementContext ------------------------------------------------------------------

oxadvancedParser::CompoundstatementContext::CompoundstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::CompoundstatementContext::LeftBrace() {
  return getToken(oxadvancedParser::LeftBrace, 0);
}

tree::TerminalNode* oxadvancedParser::CompoundstatementContext::RightBrace() {
  return getToken(oxadvancedParser::RightBrace, 0);
}

oxadvancedParser::StatementseqContext* oxadvancedParser::CompoundstatementContext::statementseq() {
  return getRuleContext<oxadvancedParser::StatementseqContext>(0);
}


size_t oxadvancedParser::CompoundstatementContext::getRuleIndex() const {
  return oxadvancedParser::RuleCompoundstatement;
}

void oxadvancedParser::CompoundstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundstatement(this);
}

void oxadvancedParser::CompoundstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundstatement(this);
}

oxadvancedParser::CompoundstatementContext* oxadvancedParser::compoundstatement() {
  CompoundstatementContext *_localctx = _tracker.createInstance<CompoundstatementContext>(_ctx, getState());
  enterRule(_localctx, 100, oxadvancedParser::RuleCompoundstatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(932);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case oxadvancedParser::LeftBrace: {
        enterOuterAlt(_localctx, 1);
        setState(921);
        match(oxadvancedParser::LeftBrace);
        setState(923);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << oxadvancedParser::T__19)
          | (1ULL << oxadvancedParser::IN)
          | (1ULL << oxadvancedParser::Auto)
          | (1ULL << oxadvancedParser::Bool)
          | (1ULL << oxadvancedParser::Break)
          | (1ULL << oxadvancedParser::Case)
          | (1ULL << oxadvancedParser::Const)
          | (1ULL << oxadvancedParser::Constexpr)
          | (1ULL << oxadvancedParser::Continue)
          | (1ULL << oxadvancedParser::Decltype)
          | (1ULL << oxadvancedParser::Default)
          | (1ULL << oxadvancedParser::Delete)
          | (1ULL << oxadvancedParser::Do)
          | (1ULL << oxadvancedParser::Double)
          | (1ULL << oxadvancedParser::Enum)
          | (1ULL << oxadvancedParser::Explicit)
          | (1ULL << oxadvancedParser::Extern)
          | (1ULL << oxadvancedParser::False)
          | (1ULL << oxadvancedParser::Float)
          | (1ULL << oxadvancedParser::For)
          | (1ULL << oxadvancedParser::Foreach)
          | (1ULL << oxadvancedParser::Goto)
          | (1ULL << oxadvancedParser::If)
          | (1ULL << oxadvancedParser::Inline)
          | (1ULL << oxadvancedParser::Int)
          | (1ULL << oxadvancedParser::Array)
          | (1ULL << oxadvancedParser::Decl)
          | (1ULL << oxadvancedParser::Long))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (oxadvancedParser::Mutable - 64))
          | (1ULL << (oxadvancedParser::New - 64))
          | (1ULL << (oxadvancedParser::Nullptr - 64))
          | (1ULL << (oxadvancedParser::Operator - 64))
          | (1ULL << (oxadvancedParser::Register - 64))
          | (1ULL << (oxadvancedParser::Return - 64))
          | (1ULL << (oxadvancedParser::Short - 64))
          | (1ULL << (oxadvancedParser::Signed - 64))
          | (1ULL << (oxadvancedParser::Static - 64))
          | (1ULL << (oxadvancedParser::Static_assert - 64))
          | (1ULL << (oxadvancedParser::Switch - 64))
          | (1ULL << (oxadvancedParser::Switchsingle - 64))
          | (1ULL << (oxadvancedParser::This - 64))
          | (1ULL << (oxadvancedParser::True - 64))
          | (1ULL << (oxadvancedParser::Typedef - 64))
          | (1ULL << (oxadvancedParser::Unsigned - 64))
          | (1ULL << (oxadvancedParser::Using - 64))
          | (1ULL << (oxadvancedParser::Virtual - 64))
          | (1ULL << (oxadvancedParser::Void - 64))
          | (1ULL << (oxadvancedParser::Volatile - 64))
          | (1ULL << (oxadvancedParser::Wchar - 64))
          | (1ULL << (oxadvancedParser::While - 64))
          | (1ULL << (oxadvancedParser::LeftParen - 64))
          | (1ULL << (oxadvancedParser::LeftBracket - 64))
          | (1ULL << (oxadvancedParser::LeftBrace - 64))
          | (1ULL << (oxadvancedParser::Plus - 64))
          | (1ULL << (oxadvancedParser::Minus - 64))
          | (1ULL << (oxadvancedParser::Star - 64))
          | (1ULL << (oxadvancedParser::And - 64))
          | (1ULL << (oxadvancedParser::Or - 64))
          | (1ULL << (oxadvancedParser::Not - 64))
          | (1ULL << (oxadvancedParser::Less - 64))
          | (1ULL << (oxadvancedParser::Parallel - 64)))) != 0) || ((((_la - 137) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 137)) & ((1ULL << (oxadvancedParser::PlusPlus - 137))
          | (1ULL << (oxadvancedParser::MinusMinus - 137))
          | (1ULL << (oxadvancedParser::Doublecolon - 137))
          | (1ULL << (oxadvancedParser::Semi - 137))
          | (1ULL << (oxadvancedParser::Dot - 137))
          | (1ULL << (oxadvancedParser::Identifier - 137))
          | (1ULL << (oxadvancedParser::Integerliteral - 137))
          | (1ULL << (oxadvancedParser::Characterliteral - 137))
          | (1ULL << (oxadvancedParser::Floatingliteral - 137))
          | (1ULL << (oxadvancedParser::Stringliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedintegerliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedfloatingliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedstringliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedcharacterliteral - 137)))) != 0)) {
          setState(922);
          statementseq(0);
        }
        setState(925);
        match(oxadvancedParser::RightBrace);
        break;
      }

      case oxadvancedParser::T__19: {
        enterOuterAlt(_localctx, 2);
        setState(926);
        match(oxadvancedParser::T__19);
        setState(927);
        match(oxadvancedParser::LeftBrace);
        setState(929);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << oxadvancedParser::T__19)
          | (1ULL << oxadvancedParser::IN)
          | (1ULL << oxadvancedParser::Auto)
          | (1ULL << oxadvancedParser::Bool)
          | (1ULL << oxadvancedParser::Break)
          | (1ULL << oxadvancedParser::Case)
          | (1ULL << oxadvancedParser::Const)
          | (1ULL << oxadvancedParser::Constexpr)
          | (1ULL << oxadvancedParser::Continue)
          | (1ULL << oxadvancedParser::Decltype)
          | (1ULL << oxadvancedParser::Default)
          | (1ULL << oxadvancedParser::Delete)
          | (1ULL << oxadvancedParser::Do)
          | (1ULL << oxadvancedParser::Double)
          | (1ULL << oxadvancedParser::Enum)
          | (1ULL << oxadvancedParser::Explicit)
          | (1ULL << oxadvancedParser::Extern)
          | (1ULL << oxadvancedParser::False)
          | (1ULL << oxadvancedParser::Float)
          | (1ULL << oxadvancedParser::For)
          | (1ULL << oxadvancedParser::Foreach)
          | (1ULL << oxadvancedParser::Goto)
          | (1ULL << oxadvancedParser::If)
          | (1ULL << oxadvancedParser::Inline)
          | (1ULL << oxadvancedParser::Int)
          | (1ULL << oxadvancedParser::Array)
          | (1ULL << oxadvancedParser::Decl)
          | (1ULL << oxadvancedParser::Long))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (oxadvancedParser::Mutable - 64))
          | (1ULL << (oxadvancedParser::New - 64))
          | (1ULL << (oxadvancedParser::Nullptr - 64))
          | (1ULL << (oxadvancedParser::Operator - 64))
          | (1ULL << (oxadvancedParser::Register - 64))
          | (1ULL << (oxadvancedParser::Return - 64))
          | (1ULL << (oxadvancedParser::Short - 64))
          | (1ULL << (oxadvancedParser::Signed - 64))
          | (1ULL << (oxadvancedParser::Static - 64))
          | (1ULL << (oxadvancedParser::Static_assert - 64))
          | (1ULL << (oxadvancedParser::Switch - 64))
          | (1ULL << (oxadvancedParser::Switchsingle - 64))
          | (1ULL << (oxadvancedParser::This - 64))
          | (1ULL << (oxadvancedParser::True - 64))
          | (1ULL << (oxadvancedParser::Typedef - 64))
          | (1ULL << (oxadvancedParser::Unsigned - 64))
          | (1ULL << (oxadvancedParser::Using - 64))
          | (1ULL << (oxadvancedParser::Virtual - 64))
          | (1ULL << (oxadvancedParser::Void - 64))
          | (1ULL << (oxadvancedParser::Volatile - 64))
          | (1ULL << (oxadvancedParser::Wchar - 64))
          | (1ULL << (oxadvancedParser::While - 64))
          | (1ULL << (oxadvancedParser::LeftParen - 64))
          | (1ULL << (oxadvancedParser::LeftBracket - 64))
          | (1ULL << (oxadvancedParser::LeftBrace - 64))
          | (1ULL << (oxadvancedParser::Plus - 64))
          | (1ULL << (oxadvancedParser::Minus - 64))
          | (1ULL << (oxadvancedParser::Star - 64))
          | (1ULL << (oxadvancedParser::And - 64))
          | (1ULL << (oxadvancedParser::Or - 64))
          | (1ULL << (oxadvancedParser::Not - 64))
          | (1ULL << (oxadvancedParser::Less - 64))
          | (1ULL << (oxadvancedParser::Parallel - 64)))) != 0) || ((((_la - 137) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 137)) & ((1ULL << (oxadvancedParser::PlusPlus - 137))
          | (1ULL << (oxadvancedParser::MinusMinus - 137))
          | (1ULL << (oxadvancedParser::Doublecolon - 137))
          | (1ULL << (oxadvancedParser::Semi - 137))
          | (1ULL << (oxadvancedParser::Dot - 137))
          | (1ULL << (oxadvancedParser::Identifier - 137))
          | (1ULL << (oxadvancedParser::Integerliteral - 137))
          | (1ULL << (oxadvancedParser::Characterliteral - 137))
          | (1ULL << (oxadvancedParser::Floatingliteral - 137))
          | (1ULL << (oxadvancedParser::Stringliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedintegerliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedfloatingliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedstringliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedcharacterliteral - 137)))) != 0)) {
          setState(928);
          statementseq(0);
        }
        setState(931);
        match(oxadvancedParser::RightBrace);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementseqContext ------------------------------------------------------------------

oxadvancedParser::StatementseqContext::StatementseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::StatementContext* oxadvancedParser::StatementseqContext::statement() {
  return getRuleContext<oxadvancedParser::StatementContext>(0);
}

oxadvancedParser::StatementseqContext* oxadvancedParser::StatementseqContext::statementseq() {
  return getRuleContext<oxadvancedParser::StatementseqContext>(0);
}


size_t oxadvancedParser::StatementseqContext::getRuleIndex() const {
  return oxadvancedParser::RuleStatementseq;
}

void oxadvancedParser::StatementseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementseq(this);
}

void oxadvancedParser::StatementseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementseq(this);
}


oxadvancedParser::StatementseqContext* oxadvancedParser::statementseq() {
   return statementseq(0);
}

oxadvancedParser::StatementseqContext* oxadvancedParser::statementseq(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::StatementseqContext *_localctx = _tracker.createInstance<StatementseqContext>(_ctx, parentState);
  oxadvancedParser::StatementseqContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 102;
  enterRecursionRule(_localctx, 102, oxadvancedParser::RuleStatementseq, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(935);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(941);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StatementseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStatementseq);
        setState(937);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(938);
        statement(); 
      }
      setState(943);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- SelectionstatementContext ------------------------------------------------------------------

oxadvancedParser::SelectionstatementContext::SelectionstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::SelectionstatementContext::If() {
  return getToken(oxadvancedParser::If, 0);
}

tree::TerminalNode* oxadvancedParser::SelectionstatementContext::LeftParen() {
  return getToken(oxadvancedParser::LeftParen, 0);
}

oxadvancedParser::ExpressionContext* oxadvancedParser::SelectionstatementContext::expression() {
  return getRuleContext<oxadvancedParser::ExpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::SelectionstatementContext::RightParen() {
  return getToken(oxadvancedParser::RightParen, 0);
}

std::vector<oxadvancedParser::StatementContext *> oxadvancedParser::SelectionstatementContext::statement() {
  return getRuleContexts<oxadvancedParser::StatementContext>();
}

oxadvancedParser::StatementContext* oxadvancedParser::SelectionstatementContext::statement(size_t i) {
  return getRuleContext<oxadvancedParser::StatementContext>(i);
}

tree::TerminalNode* oxadvancedParser::SelectionstatementContext::Else() {
  return getToken(oxadvancedParser::Else, 0);
}

tree::TerminalNode* oxadvancedParser::SelectionstatementContext::Switch() {
  return getToken(oxadvancedParser::Switch, 0);
}

tree::TerminalNode* oxadvancedParser::SelectionstatementContext::Switchsingle() {
  return getToken(oxadvancedParser::Switchsingle, 0);
}


size_t oxadvancedParser::SelectionstatementContext::getRuleIndex() const {
  return oxadvancedParser::RuleSelectionstatement;
}

void oxadvancedParser::SelectionstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectionstatement(this);
}

void oxadvancedParser::SelectionstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectionstatement(this);
}

oxadvancedParser::SelectionstatementContext* oxadvancedParser::selectionstatement() {
  SelectionstatementContext *_localctx = _tracker.createInstance<SelectionstatementContext>(_ctx, getState());
  enterRule(_localctx, 104, oxadvancedParser::RuleSelectionstatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(965);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case oxadvancedParser::If: {
        enterOuterAlt(_localctx, 1);
        setState(944);
        match(oxadvancedParser::If);
        setState(945);
        match(oxadvancedParser::LeftParen);
        setState(946);
        expression(0);
        setState(947);
        match(oxadvancedParser::RightParen);
        setState(948);
        statement();
        setState(951);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
        case 1: {
          setState(949);
          match(oxadvancedParser::Else);
          setState(950);
          statement();
          break;
        }

        default:
          break;
        }
        break;
      }

      case oxadvancedParser::Switch: {
        enterOuterAlt(_localctx, 2);
        setState(953);
        match(oxadvancedParser::Switch);
        setState(954);
        match(oxadvancedParser::LeftParen);
        setState(955);
        expression(0);
        setState(956);
        match(oxadvancedParser::RightParen);
        setState(957);
        statement();
        break;
      }

      case oxadvancedParser::Switchsingle: {
        enterOuterAlt(_localctx, 3);
        setState(959);
        match(oxadvancedParser::Switchsingle);
        setState(960);
        match(oxadvancedParser::LeftParen);
        setState(961);
        expression(0);
        setState(962);
        match(oxadvancedParser::RightParen);
        setState(963);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

oxadvancedParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::ExpressionContext* oxadvancedParser::ConditionContext::expression() {
  return getRuleContext<oxadvancedParser::ExpressionContext>(0);
}

oxadvancedParser::DeclspecifierseqContext* oxadvancedParser::ConditionContext::declspecifierseq() {
  return getRuleContext<oxadvancedParser::DeclspecifierseqContext>(0);
}

oxadvancedParser::DeclaratorContext* oxadvancedParser::ConditionContext::declarator() {
  return getRuleContext<oxadvancedParser::DeclaratorContext>(0);
}

tree::TerminalNode* oxadvancedParser::ConditionContext::Assign() {
  return getToken(oxadvancedParser::Assign, 0);
}

oxadvancedParser::InitializerclauseContext* oxadvancedParser::ConditionContext::initializerclause() {
  return getRuleContext<oxadvancedParser::InitializerclauseContext>(0);
}

oxadvancedParser::BracedinitlistContext* oxadvancedParser::ConditionContext::bracedinitlist() {
  return getRuleContext<oxadvancedParser::BracedinitlistContext>(0);
}


size_t oxadvancedParser::ConditionContext::getRuleIndex() const {
  return oxadvancedParser::RuleCondition;
}

void oxadvancedParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void oxadvancedParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}

oxadvancedParser::ConditionContext* oxadvancedParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 106, oxadvancedParser::RuleCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(977);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(967);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(968);
      declspecifierseq();
      setState(969);
      declarator();
      setState(970);
      match(oxadvancedParser::Assign);
      setState(971);
      initializerclause();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(973);
      declspecifierseq();
      setState(974);
      declarator();
      setState(975);
      bracedinitlist();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IterationstatementContext ------------------------------------------------------------------

oxadvancedParser::IterationstatementContext::IterationstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::IterationstatementContext::While() {
  return getToken(oxadvancedParser::While, 0);
}

tree::TerminalNode* oxadvancedParser::IterationstatementContext::LeftParen() {
  return getToken(oxadvancedParser::LeftParen, 0);
}

oxadvancedParser::ConditionContext* oxadvancedParser::IterationstatementContext::condition() {
  return getRuleContext<oxadvancedParser::ConditionContext>(0);
}

tree::TerminalNode* oxadvancedParser::IterationstatementContext::RightParen() {
  return getToken(oxadvancedParser::RightParen, 0);
}

oxadvancedParser::StatementContext* oxadvancedParser::IterationstatementContext::statement() {
  return getRuleContext<oxadvancedParser::StatementContext>(0);
}

tree::TerminalNode* oxadvancedParser::IterationstatementContext::Do() {
  return getToken(oxadvancedParser::Do, 0);
}

oxadvancedParser::ExpressionContext* oxadvancedParser::IterationstatementContext::expression() {
  return getRuleContext<oxadvancedParser::ExpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::IterationstatementContext::Semi() {
  return getToken(oxadvancedParser::Semi, 0);
}

tree::TerminalNode* oxadvancedParser::IterationstatementContext::For() {
  return getToken(oxadvancedParser::For, 0);
}

oxadvancedParser::ForinitstatementContext* oxadvancedParser::IterationstatementContext::forinitstatement() {
  return getRuleContext<oxadvancedParser::ForinitstatementContext>(0);
}

tree::TerminalNode* oxadvancedParser::IterationstatementContext::Foreach() {
  return getToken(oxadvancedParser::Foreach, 0);
}

oxadvancedParser::DeclaratorContext* oxadvancedParser::IterationstatementContext::declarator() {
  return getRuleContext<oxadvancedParser::DeclaratorContext>(0);
}

tree::TerminalNode* oxadvancedParser::IterationstatementContext::IN() {
  return getToken(oxadvancedParser::IN, 0);
}

oxadvancedParser::SimpletypespecifierContext* oxadvancedParser::IterationstatementContext::simpletypespecifier() {
  return getRuleContext<oxadvancedParser::SimpletypespecifierContext>(0);
}

tree::TerminalNode* oxadvancedParser::IterationstatementContext::Parallel() {
  return getToken(oxadvancedParser::Parallel, 0);
}


size_t oxadvancedParser::IterationstatementContext::getRuleIndex() const {
  return oxadvancedParser::RuleIterationstatement;
}

void oxadvancedParser::IterationstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIterationstatement(this);
}

void oxadvancedParser::IterationstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIterationstatement(this);
}

oxadvancedParser::IterationstatementContext* oxadvancedParser::iterationstatement() {
  IterationstatementContext *_localctx = _tracker.createInstance<IterationstatementContext>(_ctx, getState());
  enterRule(_localctx, 108, oxadvancedParser::RuleIterationstatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1031);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case oxadvancedParser::While: {
        enterOuterAlt(_localctx, 1);
        setState(979);
        match(oxadvancedParser::While);
        setState(980);
        match(oxadvancedParser::LeftParen);
        setState(981);
        condition();
        setState(982);
        match(oxadvancedParser::RightParen);
        setState(983);
        statement();
        break;
      }

      case oxadvancedParser::Do: {
        enterOuterAlt(_localctx, 2);
        setState(985);
        match(oxadvancedParser::Do);
        setState(986);
        statement();
        setState(987);
        match(oxadvancedParser::While);
        setState(988);
        match(oxadvancedParser::LeftParen);
        setState(989);
        expression(0);
        setState(990);
        match(oxadvancedParser::RightParen);
        setState(991);
        match(oxadvancedParser::Semi);
        break;
      }

      case oxadvancedParser::For: {
        enterOuterAlt(_localctx, 3);
        setState(993);
        match(oxadvancedParser::For);
        setState(994);
        match(oxadvancedParser::LeftParen);
        setState(995);
        forinitstatement();
        setState(997);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << oxadvancedParser::T__19)
          | (1ULL << oxadvancedParser::IN)
          | (1ULL << oxadvancedParser::Auto)
          | (1ULL << oxadvancedParser::Bool)
          | (1ULL << oxadvancedParser::Const)
          | (1ULL << oxadvancedParser::Constexpr)
          | (1ULL << oxadvancedParser::Decltype)
          | (1ULL << oxadvancedParser::Delete)
          | (1ULL << oxadvancedParser::Double)
          | (1ULL << oxadvancedParser::Enum)
          | (1ULL << oxadvancedParser::Explicit)
          | (1ULL << oxadvancedParser::Extern)
          | (1ULL << oxadvancedParser::False)
          | (1ULL << oxadvancedParser::Float)
          | (1ULL << oxadvancedParser::Inline)
          | (1ULL << oxadvancedParser::Int)
          | (1ULL << oxadvancedParser::Array)
          | (1ULL << oxadvancedParser::Decl)
          | (1ULL << oxadvancedParser::Long))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (oxadvancedParser::Mutable - 64))
          | (1ULL << (oxadvancedParser::New - 64))
          | (1ULL << (oxadvancedParser::Nullptr - 64))
          | (1ULL << (oxadvancedParser::Operator - 64))
          | (1ULL << (oxadvancedParser::Register - 64))
          | (1ULL << (oxadvancedParser::Short - 64))
          | (1ULL << (oxadvancedParser::Signed - 64))
          | (1ULL << (oxadvancedParser::Static - 64))
          | (1ULL << (oxadvancedParser::This - 64))
          | (1ULL << (oxadvancedParser::True - 64))
          | (1ULL << (oxadvancedParser::Typedef - 64))
          | (1ULL << (oxadvancedParser::Unsigned - 64))
          | (1ULL << (oxadvancedParser::Virtual - 64))
          | (1ULL << (oxadvancedParser::Void - 64))
          | (1ULL << (oxadvancedParser::Volatile - 64))
          | (1ULL << (oxadvancedParser::Wchar - 64))
          | (1ULL << (oxadvancedParser::LeftParen - 64))
          | (1ULL << (oxadvancedParser::LeftBracket - 64))
          | (1ULL << (oxadvancedParser::LeftBrace - 64))
          | (1ULL << (oxadvancedParser::Plus - 64))
          | (1ULL << (oxadvancedParser::Minus - 64))
          | (1ULL << (oxadvancedParser::Star - 64))
          | (1ULL << (oxadvancedParser::And - 64))
          | (1ULL << (oxadvancedParser::Or - 64))
          | (1ULL << (oxadvancedParser::Not - 64))
          | (1ULL << (oxadvancedParser::Less - 64)))) != 0) || ((((_la - 137) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 137)) & ((1ULL << (oxadvancedParser::PlusPlus - 137))
          | (1ULL << (oxadvancedParser::MinusMinus - 137))
          | (1ULL << (oxadvancedParser::Doublecolon - 137))
          | (1ULL << (oxadvancedParser::Dot - 137))
          | (1ULL << (oxadvancedParser::Identifier - 137))
          | (1ULL << (oxadvancedParser::Integerliteral - 137))
          | (1ULL << (oxadvancedParser::Characterliteral - 137))
          | (1ULL << (oxadvancedParser::Floatingliteral - 137))
          | (1ULL << (oxadvancedParser::Stringliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedintegerliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedfloatingliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedstringliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedcharacterliteral - 137)))) != 0)) {
          setState(996);
          condition();
        }
        setState(999);
        match(oxadvancedParser::Semi);
        setState(1001);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << oxadvancedParser::IN)
          | (1ULL << oxadvancedParser::Auto)
          | (1ULL << oxadvancedParser::Bool)
          | (1ULL << oxadvancedParser::Decltype)
          | (1ULL << oxadvancedParser::Delete)
          | (1ULL << oxadvancedParser::Double)
          | (1ULL << oxadvancedParser::False)
          | (1ULL << oxadvancedParser::Float)
          | (1ULL << oxadvancedParser::Int)
          | (1ULL << oxadvancedParser::Array)
          | (1ULL << oxadvancedParser::Decl)
          | (1ULL << oxadvancedParser::Long))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 66)) & ((1ULL << (oxadvancedParser::New - 66))
          | (1ULL << (oxadvancedParser::Nullptr - 66))
          | (1ULL << (oxadvancedParser::Operator - 66))
          | (1ULL << (oxadvancedParser::Short - 66))
          | (1ULL << (oxadvancedParser::Signed - 66))
          | (1ULL << (oxadvancedParser::This - 66))
          | (1ULL << (oxadvancedParser::True - 66))
          | (1ULL << (oxadvancedParser::Unsigned - 66))
          | (1ULL << (oxadvancedParser::Void - 66))
          | (1ULL << (oxadvancedParser::Wchar - 66))
          | (1ULL << (oxadvancedParser::LeftParen - 66))
          | (1ULL << (oxadvancedParser::LeftBracket - 66))
          | (1ULL << (oxadvancedParser::LeftBrace - 66))
          | (1ULL << (oxadvancedParser::Plus - 66))
          | (1ULL << (oxadvancedParser::Minus - 66))
          | (1ULL << (oxadvancedParser::Star - 66))
          | (1ULL << (oxadvancedParser::And - 66))
          | (1ULL << (oxadvancedParser::Or - 66))
          | (1ULL << (oxadvancedParser::Not - 66))
          | (1ULL << (oxadvancedParser::Less - 66)))) != 0) || ((((_la - 137) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 137)) & ((1ULL << (oxadvancedParser::PlusPlus - 137))
          | (1ULL << (oxadvancedParser::MinusMinus - 137))
          | (1ULL << (oxadvancedParser::Doublecolon - 137))
          | (1ULL << (oxadvancedParser::Dot - 137))
          | (1ULL << (oxadvancedParser::Identifier - 137))
          | (1ULL << (oxadvancedParser::Integerliteral - 137))
          | (1ULL << (oxadvancedParser::Characterliteral - 137))
          | (1ULL << (oxadvancedParser::Floatingliteral - 137))
          | (1ULL << (oxadvancedParser::Stringliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedintegerliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedfloatingliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedstringliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedcharacterliteral - 137)))) != 0)) {
          setState(1000);
          expression(0);
        }
        setState(1003);
        match(oxadvancedParser::RightParen);
        setState(1004);
        statement();
        break;
      }

      case oxadvancedParser::Foreach: {
        enterOuterAlt(_localctx, 4);
        setState(1006);
        match(oxadvancedParser::Foreach);
        setState(1007);
        match(oxadvancedParser::LeftParen);
        setState(1009);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << oxadvancedParser::Auto)
          | (1ULL << oxadvancedParser::Bool)
          | (1ULL << oxadvancedParser::Decltype)
          | (1ULL << oxadvancedParser::Double)
          | (1ULL << oxadvancedParser::Float)
          | (1ULL << oxadvancedParser::Int)
          | (1ULL << oxadvancedParser::Decl)
          | (1ULL << oxadvancedParser::Long))) != 0) || ((((_la - 77) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 77)) & ((1ULL << (oxadvancedParser::Short - 77))
          | (1ULL << (oxadvancedParser::Signed - 77))
          | (1ULL << (oxadvancedParser::Unsigned - 77))
          | (1ULL << (oxadvancedParser::Void - 77))
          | (1ULL << (oxadvancedParser::Wchar - 77)))) != 0)) {
          setState(1008);
          simpletypespecifier();
        }
        setState(1011);
        declarator();
        setState(1012);
        match(oxadvancedParser::IN);
        setState(1013);
        expression(0);
        setState(1014);
        match(oxadvancedParser::RightParen);
        setState(1015);
        statement();
        break;
      }

      case oxadvancedParser::Parallel: {
        enterOuterAlt(_localctx, 5);
        setState(1017);
        match(oxadvancedParser::Parallel);
        setState(1018);
        match(oxadvancedParser::For);
        setState(1019);
        match(oxadvancedParser::LeftParen);
        setState(1020);
        forinitstatement();
        setState(1022);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << oxadvancedParser::T__19)
          | (1ULL << oxadvancedParser::IN)
          | (1ULL << oxadvancedParser::Auto)
          | (1ULL << oxadvancedParser::Bool)
          | (1ULL << oxadvancedParser::Const)
          | (1ULL << oxadvancedParser::Constexpr)
          | (1ULL << oxadvancedParser::Decltype)
          | (1ULL << oxadvancedParser::Delete)
          | (1ULL << oxadvancedParser::Double)
          | (1ULL << oxadvancedParser::Enum)
          | (1ULL << oxadvancedParser::Explicit)
          | (1ULL << oxadvancedParser::Extern)
          | (1ULL << oxadvancedParser::False)
          | (1ULL << oxadvancedParser::Float)
          | (1ULL << oxadvancedParser::Inline)
          | (1ULL << oxadvancedParser::Int)
          | (1ULL << oxadvancedParser::Array)
          | (1ULL << oxadvancedParser::Decl)
          | (1ULL << oxadvancedParser::Long))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (oxadvancedParser::Mutable - 64))
          | (1ULL << (oxadvancedParser::New - 64))
          | (1ULL << (oxadvancedParser::Nullptr - 64))
          | (1ULL << (oxadvancedParser::Operator - 64))
          | (1ULL << (oxadvancedParser::Register - 64))
          | (1ULL << (oxadvancedParser::Short - 64))
          | (1ULL << (oxadvancedParser::Signed - 64))
          | (1ULL << (oxadvancedParser::Static - 64))
          | (1ULL << (oxadvancedParser::This - 64))
          | (1ULL << (oxadvancedParser::True - 64))
          | (1ULL << (oxadvancedParser::Typedef - 64))
          | (1ULL << (oxadvancedParser::Unsigned - 64))
          | (1ULL << (oxadvancedParser::Virtual - 64))
          | (1ULL << (oxadvancedParser::Void - 64))
          | (1ULL << (oxadvancedParser::Volatile - 64))
          | (1ULL << (oxadvancedParser::Wchar - 64))
          | (1ULL << (oxadvancedParser::LeftParen - 64))
          | (1ULL << (oxadvancedParser::LeftBracket - 64))
          | (1ULL << (oxadvancedParser::LeftBrace - 64))
          | (1ULL << (oxadvancedParser::Plus - 64))
          | (1ULL << (oxadvancedParser::Minus - 64))
          | (1ULL << (oxadvancedParser::Star - 64))
          | (1ULL << (oxadvancedParser::And - 64))
          | (1ULL << (oxadvancedParser::Or - 64))
          | (1ULL << (oxadvancedParser::Not - 64))
          | (1ULL << (oxadvancedParser::Less - 64)))) != 0) || ((((_la - 137) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 137)) & ((1ULL << (oxadvancedParser::PlusPlus - 137))
          | (1ULL << (oxadvancedParser::MinusMinus - 137))
          | (1ULL << (oxadvancedParser::Doublecolon - 137))
          | (1ULL << (oxadvancedParser::Dot - 137))
          | (1ULL << (oxadvancedParser::Identifier - 137))
          | (1ULL << (oxadvancedParser::Integerliteral - 137))
          | (1ULL << (oxadvancedParser::Characterliteral - 137))
          | (1ULL << (oxadvancedParser::Floatingliteral - 137))
          | (1ULL << (oxadvancedParser::Stringliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedintegerliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedfloatingliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedstringliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedcharacterliteral - 137)))) != 0)) {
          setState(1021);
          condition();
        }
        setState(1024);
        match(oxadvancedParser::Semi);
        setState(1026);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << oxadvancedParser::IN)
          | (1ULL << oxadvancedParser::Auto)
          | (1ULL << oxadvancedParser::Bool)
          | (1ULL << oxadvancedParser::Decltype)
          | (1ULL << oxadvancedParser::Delete)
          | (1ULL << oxadvancedParser::Double)
          | (1ULL << oxadvancedParser::False)
          | (1ULL << oxadvancedParser::Float)
          | (1ULL << oxadvancedParser::Int)
          | (1ULL << oxadvancedParser::Array)
          | (1ULL << oxadvancedParser::Decl)
          | (1ULL << oxadvancedParser::Long))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 66)) & ((1ULL << (oxadvancedParser::New - 66))
          | (1ULL << (oxadvancedParser::Nullptr - 66))
          | (1ULL << (oxadvancedParser::Operator - 66))
          | (1ULL << (oxadvancedParser::Short - 66))
          | (1ULL << (oxadvancedParser::Signed - 66))
          | (1ULL << (oxadvancedParser::This - 66))
          | (1ULL << (oxadvancedParser::True - 66))
          | (1ULL << (oxadvancedParser::Unsigned - 66))
          | (1ULL << (oxadvancedParser::Void - 66))
          | (1ULL << (oxadvancedParser::Wchar - 66))
          | (1ULL << (oxadvancedParser::LeftParen - 66))
          | (1ULL << (oxadvancedParser::LeftBracket - 66))
          | (1ULL << (oxadvancedParser::LeftBrace - 66))
          | (1ULL << (oxadvancedParser::Plus - 66))
          | (1ULL << (oxadvancedParser::Minus - 66))
          | (1ULL << (oxadvancedParser::Star - 66))
          | (1ULL << (oxadvancedParser::And - 66))
          | (1ULL << (oxadvancedParser::Or - 66))
          | (1ULL << (oxadvancedParser::Not - 66))
          | (1ULL << (oxadvancedParser::Less - 66)))) != 0) || ((((_la - 137) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 137)) & ((1ULL << (oxadvancedParser::PlusPlus - 137))
          | (1ULL << (oxadvancedParser::MinusMinus - 137))
          | (1ULL << (oxadvancedParser::Doublecolon - 137))
          | (1ULL << (oxadvancedParser::Dot - 137))
          | (1ULL << (oxadvancedParser::Identifier - 137))
          | (1ULL << (oxadvancedParser::Integerliteral - 137))
          | (1ULL << (oxadvancedParser::Characterliteral - 137))
          | (1ULL << (oxadvancedParser::Floatingliteral - 137))
          | (1ULL << (oxadvancedParser::Stringliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedintegerliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedfloatingliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedstringliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedcharacterliteral - 137)))) != 0)) {
          setState(1025);
          expression(0);
        }
        setState(1028);
        match(oxadvancedParser::RightParen);
        setState(1029);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForinitstatementContext ------------------------------------------------------------------

oxadvancedParser::ForinitstatementContext::ForinitstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::ExpressionstatementContext* oxadvancedParser::ForinitstatementContext::expressionstatement() {
  return getRuleContext<oxadvancedParser::ExpressionstatementContext>(0);
}

oxadvancedParser::SimpledeclarationContext* oxadvancedParser::ForinitstatementContext::simpledeclaration() {
  return getRuleContext<oxadvancedParser::SimpledeclarationContext>(0);
}


size_t oxadvancedParser::ForinitstatementContext::getRuleIndex() const {
  return oxadvancedParser::RuleForinitstatement;
}

void oxadvancedParser::ForinitstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForinitstatement(this);
}

void oxadvancedParser::ForinitstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForinitstatement(this);
}

oxadvancedParser::ForinitstatementContext* oxadvancedParser::forinitstatement() {
  ForinitstatementContext *_localctx = _tracker.createInstance<ForinitstatementContext>(_ctx, getState());
  enterRule(_localctx, 110, oxadvancedParser::RuleForinitstatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1035);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1033);
      expressionstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1034);
      simpledeclaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpstatementContext ------------------------------------------------------------------

oxadvancedParser::JumpstatementContext::JumpstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::JumpstatementContext::Break() {
  return getToken(oxadvancedParser::Break, 0);
}

tree::TerminalNode* oxadvancedParser::JumpstatementContext::Semi() {
  return getToken(oxadvancedParser::Semi, 0);
}

tree::TerminalNode* oxadvancedParser::JumpstatementContext::Continue() {
  return getToken(oxadvancedParser::Continue, 0);
}

tree::TerminalNode* oxadvancedParser::JumpstatementContext::Return() {
  return getToken(oxadvancedParser::Return, 0);
}

oxadvancedParser::ExpressionContext* oxadvancedParser::JumpstatementContext::expression() {
  return getRuleContext<oxadvancedParser::ExpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::JumpstatementContext::Goto() {
  return getToken(oxadvancedParser::Goto, 0);
}

tree::TerminalNode* oxadvancedParser::JumpstatementContext::Identifier() {
  return getToken(oxadvancedParser::Identifier, 0);
}


size_t oxadvancedParser::JumpstatementContext::getRuleIndex() const {
  return oxadvancedParser::RuleJumpstatement;
}

void oxadvancedParser::JumpstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpstatement(this);
}

void oxadvancedParser::JumpstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpstatement(this);
}

oxadvancedParser::JumpstatementContext* oxadvancedParser::jumpstatement() {
  JumpstatementContext *_localctx = _tracker.createInstance<JumpstatementContext>(_ctx, getState());
  enterRule(_localctx, 112, oxadvancedParser::RuleJumpstatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1049);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case oxadvancedParser::Break: {
        enterOuterAlt(_localctx, 1);
        setState(1037);
        match(oxadvancedParser::Break);
        setState(1038);
        match(oxadvancedParser::Semi);
        break;
      }

      case oxadvancedParser::Continue: {
        enterOuterAlt(_localctx, 2);
        setState(1039);
        match(oxadvancedParser::Continue);
        setState(1040);
        match(oxadvancedParser::Semi);
        break;
      }

      case oxadvancedParser::Return: {
        enterOuterAlt(_localctx, 3);
        setState(1041);
        match(oxadvancedParser::Return);
        setState(1043);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << oxadvancedParser::IN)
          | (1ULL << oxadvancedParser::Auto)
          | (1ULL << oxadvancedParser::Bool)
          | (1ULL << oxadvancedParser::Decltype)
          | (1ULL << oxadvancedParser::Delete)
          | (1ULL << oxadvancedParser::Double)
          | (1ULL << oxadvancedParser::False)
          | (1ULL << oxadvancedParser::Float)
          | (1ULL << oxadvancedParser::Int)
          | (1ULL << oxadvancedParser::Array)
          | (1ULL << oxadvancedParser::Decl)
          | (1ULL << oxadvancedParser::Long))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 66)) & ((1ULL << (oxadvancedParser::New - 66))
          | (1ULL << (oxadvancedParser::Nullptr - 66))
          | (1ULL << (oxadvancedParser::Operator - 66))
          | (1ULL << (oxadvancedParser::Short - 66))
          | (1ULL << (oxadvancedParser::Signed - 66))
          | (1ULL << (oxadvancedParser::This - 66))
          | (1ULL << (oxadvancedParser::True - 66))
          | (1ULL << (oxadvancedParser::Unsigned - 66))
          | (1ULL << (oxadvancedParser::Void - 66))
          | (1ULL << (oxadvancedParser::Wchar - 66))
          | (1ULL << (oxadvancedParser::LeftParen - 66))
          | (1ULL << (oxadvancedParser::LeftBracket - 66))
          | (1ULL << (oxadvancedParser::LeftBrace - 66))
          | (1ULL << (oxadvancedParser::Plus - 66))
          | (1ULL << (oxadvancedParser::Minus - 66))
          | (1ULL << (oxadvancedParser::Star - 66))
          | (1ULL << (oxadvancedParser::And - 66))
          | (1ULL << (oxadvancedParser::Or - 66))
          | (1ULL << (oxadvancedParser::Not - 66))
          | (1ULL << (oxadvancedParser::Less - 66)))) != 0) || ((((_la - 137) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 137)) & ((1ULL << (oxadvancedParser::PlusPlus - 137))
          | (1ULL << (oxadvancedParser::MinusMinus - 137))
          | (1ULL << (oxadvancedParser::Doublecolon - 137))
          | (1ULL << (oxadvancedParser::Dot - 137))
          | (1ULL << (oxadvancedParser::Identifier - 137))
          | (1ULL << (oxadvancedParser::Integerliteral - 137))
          | (1ULL << (oxadvancedParser::Characterliteral - 137))
          | (1ULL << (oxadvancedParser::Floatingliteral - 137))
          | (1ULL << (oxadvancedParser::Stringliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedintegerliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedfloatingliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedstringliteral - 137))
          | (1ULL << (oxadvancedParser::Userdefinedcharacterliteral - 137)))) != 0)) {
          setState(1042);
          expression(0);
        }
        setState(1045);
        match(oxadvancedParser::Semi);
        break;
      }

      case oxadvancedParser::Goto: {
        enterOuterAlt(_localctx, 4);
        setState(1046);
        match(oxadvancedParser::Goto);
        setState(1047);
        match(oxadvancedParser::Identifier);
        setState(1048);
        match(oxadvancedParser::Semi);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationstatementContext ------------------------------------------------------------------

oxadvancedParser::DeclarationstatementContext::DeclarationstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::BlockdeclarationContext* oxadvancedParser::DeclarationstatementContext::blockdeclaration() {
  return getRuleContext<oxadvancedParser::BlockdeclarationContext>(0);
}


size_t oxadvancedParser::DeclarationstatementContext::getRuleIndex() const {
  return oxadvancedParser::RuleDeclarationstatement;
}

void oxadvancedParser::DeclarationstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationstatement(this);
}

void oxadvancedParser::DeclarationstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationstatement(this);
}

oxadvancedParser::DeclarationstatementContext* oxadvancedParser::declarationstatement() {
  DeclarationstatementContext *_localctx = _tracker.createInstance<DeclarationstatementContext>(_ctx, getState());
  enterRule(_localctx, 114, oxadvancedParser::RuleDeclarationstatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1051);
    blockdeclaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationseqContext ------------------------------------------------------------------

oxadvancedParser::DeclarationseqContext::DeclarationseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::DeclarationContext* oxadvancedParser::DeclarationseqContext::declaration() {
  return getRuleContext<oxadvancedParser::DeclarationContext>(0);
}

oxadvancedParser::DeclarationseqContext* oxadvancedParser::DeclarationseqContext::declarationseq() {
  return getRuleContext<oxadvancedParser::DeclarationseqContext>(0);
}


size_t oxadvancedParser::DeclarationseqContext::getRuleIndex() const {
  return oxadvancedParser::RuleDeclarationseq;
}

void oxadvancedParser::DeclarationseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationseq(this);
}

void oxadvancedParser::DeclarationseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationseq(this);
}


oxadvancedParser::DeclarationseqContext* oxadvancedParser::declarationseq() {
   return declarationseq(0);
}

oxadvancedParser::DeclarationseqContext* oxadvancedParser::declarationseq(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::DeclarationseqContext *_localctx = _tracker.createInstance<DeclarationseqContext>(_ctx, parentState);
  oxadvancedParser::DeclarationseqContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 116;
  enterRecursionRule(_localctx, 116, oxadvancedParser::RuleDeclarationseq, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1054);
    declaration();
    _ctx->stop = _input->LT(-1);
    setState(1060);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 90, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<DeclarationseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleDeclarationseq);
        setState(1056);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1057);
        declaration(); 
      }
      setState(1062);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 90, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

oxadvancedParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::BlockdeclarationContext* oxadvancedParser::DeclarationContext::blockdeclaration() {
  return getRuleContext<oxadvancedParser::BlockdeclarationContext>(0);
}

oxadvancedParser::LinkagespecificationContext* oxadvancedParser::DeclarationContext::linkagespecification() {
  return getRuleContext<oxadvancedParser::LinkagespecificationContext>(0);
}

oxadvancedParser::NamespacedefinitionContext* oxadvancedParser::DeclarationContext::namespacedefinition() {
  return getRuleContext<oxadvancedParser::NamespacedefinitionContext>(0);
}

oxadvancedParser::EmptydeclarationContext* oxadvancedParser::DeclarationContext::emptydeclaration() {
  return getRuleContext<oxadvancedParser::EmptydeclarationContext>(0);
}

oxadvancedParser::ExternalContext* oxadvancedParser::DeclarationContext::external() {
  return getRuleContext<oxadvancedParser::ExternalContext>(0);
}


size_t oxadvancedParser::DeclarationContext::getRuleIndex() const {
  return oxadvancedParser::RuleDeclaration;
}

void oxadvancedParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void oxadvancedParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}

oxadvancedParser::DeclarationContext* oxadvancedParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 118, oxadvancedParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1068);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1063);
      blockdeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1064);
      linkagespecification();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1065);
      namespacedefinition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1066);
      emptydeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1067);
      external();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JavadocContext ------------------------------------------------------------------

oxadvancedParser::JavadocContext::JavadocContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::JavadocContext::JavaDoc() {
  return getToken(oxadvancedParser::JavaDoc, 0);
}


size_t oxadvancedParser::JavadocContext::getRuleIndex() const {
  return oxadvancedParser::RuleJavadoc;
}

void oxadvancedParser::JavadocContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJavadoc(this);
}

void oxadvancedParser::JavadocContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJavadoc(this);
}

oxadvancedParser::JavadocContext* oxadvancedParser::javadoc() {
  JavadocContext *_localctx = _tracker.createInstance<JavadocContext>(_ctx, getState());
  enterRule(_localctx, 120, oxadvancedParser::RuleJavadoc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1070);
    match(oxadvancedParser::JavaDoc);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExternalContext ------------------------------------------------------------------

oxadvancedParser::ExternalContext::ExternalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::EnumspecifierContext* oxadvancedParser::ExternalContext::enumspecifier() {
  return getRuleContext<oxadvancedParser::EnumspecifierContext>(0);
}

oxadvancedParser::NoptrdeclaratorContext* oxadvancedParser::ExternalContext::noptrdeclarator() {
  return getRuleContext<oxadvancedParser::NoptrdeclaratorContext>(0);
}

oxadvancedParser::External_functionContext* oxadvancedParser::ExternalContext::external_function() {
  return getRuleContext<oxadvancedParser::External_functionContext>(0);
}

oxadvancedParser::ClassspecifierContext* oxadvancedParser::ExternalContext::classspecifier() {
  return getRuleContext<oxadvancedParser::ClassspecifierContext>(0);
}


size_t oxadvancedParser::ExternalContext::getRuleIndex() const {
  return oxadvancedParser::RuleExternal;
}

void oxadvancedParser::ExternalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExternal(this);
}

void oxadvancedParser::ExternalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExternal(this);
}

oxadvancedParser::ExternalContext* oxadvancedParser::external() {
  ExternalContext *_localctx = _tracker.createInstance<ExternalContext>(_ctx, getState());
  enterRule(_localctx, 122, oxadvancedParser::RuleExternal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1076);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1072);
      enumspecifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1073);
      noptrdeclarator(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1074);
      external_function();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1075);
      classspecifier();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionnameContext ------------------------------------------------------------------

oxadvancedParser::FunctionnameContext::FunctionnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::FunctionnameContext::Identifier() {
  return getToken(oxadvancedParser::Identifier, 0);
}


size_t oxadvancedParser::FunctionnameContext::getRuleIndex() const {
  return oxadvancedParser::RuleFunctionname;
}

void oxadvancedParser::FunctionnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionname(this);
}

void oxadvancedParser::FunctionnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionname(this);
}

oxadvancedParser::FunctionnameContext* oxadvancedParser::functionname() {
  FunctionnameContext *_localctx = _tracker.createInstance<FunctionnameContext>(_ctx, getState());
  enterRule(_localctx, 124, oxadvancedParser::RuleFunctionname);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1078);
    match(oxadvancedParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- External_functionContext ------------------------------------------------------------------

oxadvancedParser::External_functionContext::External_functionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::FunctionnameContext* oxadvancedParser::External_functionContext::functionname() {
  return getRuleContext<oxadvancedParser::FunctionnameContext>(0);
}

oxadvancedParser::ParametersandqualifiersContext* oxadvancedParser::External_functionContext::parametersandqualifiers() {
  return getRuleContext<oxadvancedParser::ParametersandqualifiersContext>(0);
}

oxadvancedParser::FunctionspecifierContext* oxadvancedParser::External_functionContext::functionspecifier() {
  return getRuleContext<oxadvancedParser::FunctionspecifierContext>(0);
}

oxadvancedParser::ClassnameContext* oxadvancedParser::External_functionContext::classname() {
  return getRuleContext<oxadvancedParser::ClassnameContext>(0);
}

tree::TerminalNode* oxadvancedParser::External_functionContext::Doublecolon() {
  return getToken(oxadvancedParser::Doublecolon, 0);
}

oxadvancedParser::FunctionbodyContext* oxadvancedParser::External_functionContext::functionbody() {
  return getRuleContext<oxadvancedParser::FunctionbodyContext>(0);
}


size_t oxadvancedParser::External_functionContext::getRuleIndex() const {
  return oxadvancedParser::RuleExternal_function;
}

void oxadvancedParser::External_functionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExternal_function(this);
}

void oxadvancedParser::External_functionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExternal_function(this);
}

oxadvancedParser::External_functionContext* oxadvancedParser::external_function() {
  External_functionContext *_localctx = _tracker.createInstance<External_functionContext>(_ctx, getState());
  enterRule(_localctx, 126, oxadvancedParser::RuleExternal_function);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1104);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1081);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 49) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 49)) & ((1ULL << (oxadvancedParser::Explicit - 49))
        | (1ULL << (oxadvancedParser::Extern - 49))
        | (1ULL << (oxadvancedParser::Inline - 49))
        | (1ULL << (oxadvancedParser::Static - 49))
        | (1ULL << (oxadvancedParser::Virtual - 49)))) != 0)) {
        setState(1080);
        functionspecifier();
      }
      setState(1086);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 94, _ctx)) {
      case 1: {
        setState(1083);
        classname();
        setState(1084);
        match(oxadvancedParser::Doublecolon);
        break;
      }

      default:
        break;
      }
      setState(1088);
      functionname();
      setState(1089);
      parametersandqualifiers();
      setState(1091);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx)) {
      case 1: {
        setState(1090);
        functionbody();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1094);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 49) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 49)) & ((1ULL << (oxadvancedParser::Explicit - 49))
        | (1ULL << (oxadvancedParser::Extern - 49))
        | (1ULL << (oxadvancedParser::Inline - 49))
        | (1ULL << (oxadvancedParser::Static - 49))
        | (1ULL << (oxadvancedParser::Virtual - 49)))) != 0)) {
        setState(1093);
        functionspecifier();
      }

      setState(1096);
      classname();
      setState(1097);
      match(oxadvancedParser::T__20);
      setState(1099);
      functionname();
      setState(1100);
      parametersandqualifiers();
      setState(1102);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx)) {
      case 1: {
        setState(1101);
        functionbody();
        break;
      }

      default:
        break;
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BodyclasseContext ------------------------------------------------------------------

oxadvancedParser::BodyclasseContext::BodyclasseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::DeclarationContext* oxadvancedParser::BodyclasseContext::declaration() {
  return getRuleContext<oxadvancedParser::DeclarationContext>(0);
}

oxadvancedParser::EnumspecifierContext* oxadvancedParser::BodyclasseContext::enumspecifier() {
  return getRuleContext<oxadvancedParser::EnumspecifierContext>(0);
}

tree::TerminalNode* oxadvancedParser::BodyclasseContext::Public() {
  return getToken(oxadvancedParser::Public, 0);
}

tree::TerminalNode* oxadvancedParser::BodyclasseContext::Colon() {
  return getToken(oxadvancedParser::Colon, 0);
}


size_t oxadvancedParser::BodyclasseContext::getRuleIndex() const {
  return oxadvancedParser::RuleBodyclasse;
}

void oxadvancedParser::BodyclasseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBodyclasse(this);
}

void oxadvancedParser::BodyclasseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBodyclasse(this);
}

oxadvancedParser::BodyclasseContext* oxadvancedParser::bodyclasse() {
  BodyclasseContext *_localctx = _tracker.createInstance<BodyclasseContext>(_ctx, getState());
  enterRule(_localctx, 128, oxadvancedParser::RuleBodyclasse);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1110);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1106);
      declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1107);
      enumspecifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1108);
      match(oxadvancedParser::Public);
      setState(1109);
      match(oxadvancedParser::Colon);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockdeclarationContext ------------------------------------------------------------------

oxadvancedParser::BlockdeclarationContext::BlockdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::SimpledeclarationContext* oxadvancedParser::BlockdeclarationContext::simpledeclaration() {
  return getRuleContext<oxadvancedParser::SimpledeclarationContext>(0);
}

oxadvancedParser::Static_assertdeclarationContext* oxadvancedParser::BlockdeclarationContext::static_assertdeclaration() {
  return getRuleContext<oxadvancedParser::Static_assertdeclarationContext>(0);
}

oxadvancedParser::AliasdeclarationContext* oxadvancedParser::BlockdeclarationContext::aliasdeclaration() {
  return getRuleContext<oxadvancedParser::AliasdeclarationContext>(0);
}

oxadvancedParser::OpaqueenumdeclarationContext* oxadvancedParser::BlockdeclarationContext::opaqueenumdeclaration() {
  return getRuleContext<oxadvancedParser::OpaqueenumdeclarationContext>(0);
}


size_t oxadvancedParser::BlockdeclarationContext::getRuleIndex() const {
  return oxadvancedParser::RuleBlockdeclaration;
}

void oxadvancedParser::BlockdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockdeclaration(this);
}

void oxadvancedParser::BlockdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockdeclaration(this);
}

oxadvancedParser::BlockdeclarationContext* oxadvancedParser::blockdeclaration() {
  BlockdeclarationContext *_localctx = _tracker.createInstance<BlockdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 130, oxadvancedParser::RuleBlockdeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1116);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1112);
      simpledeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1113);
      static_assertdeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1114);
      aliasdeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1115);
      opaqueenumdeclaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AliasdeclarationContext ------------------------------------------------------------------

oxadvancedParser::AliasdeclarationContext::AliasdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::AliasdeclarationContext::Using() {
  return getToken(oxadvancedParser::Using, 0);
}

tree::TerminalNode* oxadvancedParser::AliasdeclarationContext::Identifier() {
  return getToken(oxadvancedParser::Identifier, 0);
}

tree::TerminalNode* oxadvancedParser::AliasdeclarationContext::Assign() {
  return getToken(oxadvancedParser::Assign, 0);
}

oxadvancedParser::ThetypeidContext* oxadvancedParser::AliasdeclarationContext::thetypeid() {
  return getRuleContext<oxadvancedParser::ThetypeidContext>(0);
}

tree::TerminalNode* oxadvancedParser::AliasdeclarationContext::Semi() {
  return getToken(oxadvancedParser::Semi, 0);
}


size_t oxadvancedParser::AliasdeclarationContext::getRuleIndex() const {
  return oxadvancedParser::RuleAliasdeclaration;
}

void oxadvancedParser::AliasdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAliasdeclaration(this);
}

void oxadvancedParser::AliasdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAliasdeclaration(this);
}

oxadvancedParser::AliasdeclarationContext* oxadvancedParser::aliasdeclaration() {
  AliasdeclarationContext *_localctx = _tracker.createInstance<AliasdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 132, oxadvancedParser::RuleAliasdeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1118);
    match(oxadvancedParser::Using);
    setState(1119);
    match(oxadvancedParser::Identifier);
    setState(1120);
    match(oxadvancedParser::Assign);
    setState(1121);
    thetypeid();
    setState(1122);
    match(oxadvancedParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpledeclarationContext ------------------------------------------------------------------

oxadvancedParser::SimpledeclarationContext::SimpledeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::DeclspecifierseqContext* oxadvancedParser::SimpledeclarationContext::declspecifierseq() {
  return getRuleContext<oxadvancedParser::DeclspecifierseqContext>(0);
}

oxadvancedParser::InitdeclaratorlistContext* oxadvancedParser::SimpledeclarationContext::initdeclaratorlist() {
  return getRuleContext<oxadvancedParser::InitdeclaratorlistContext>(0);
}

tree::TerminalNode* oxadvancedParser::SimpledeclarationContext::Semi() {
  return getToken(oxadvancedParser::Semi, 0);
}


size_t oxadvancedParser::SimpledeclarationContext::getRuleIndex() const {
  return oxadvancedParser::RuleSimpledeclaration;
}

void oxadvancedParser::SimpledeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpledeclaration(this);
}

void oxadvancedParser::SimpledeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpledeclaration(this);
}

oxadvancedParser::SimpledeclarationContext* oxadvancedParser::simpledeclaration() {
  SimpledeclarationContext *_localctx = _tracker.createInstance<SimpledeclarationContext>(_ctx, getState());
  enterRule(_localctx, 134, oxadvancedParser::RuleSimpledeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1124);
    declspecifierseq();
    setState(1125);
    initdeclaratorlist(0);
    setState(1126);
    match(oxadvancedParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Static_assertdeclarationContext ------------------------------------------------------------------

oxadvancedParser::Static_assertdeclarationContext::Static_assertdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::Static_assertdeclarationContext::Static_assert() {
  return getToken(oxadvancedParser::Static_assert, 0);
}

tree::TerminalNode* oxadvancedParser::Static_assertdeclarationContext::LeftParen() {
  return getToken(oxadvancedParser::LeftParen, 0);
}

oxadvancedParser::ConstantexpressionContext* oxadvancedParser::Static_assertdeclarationContext::constantexpression() {
  return getRuleContext<oxadvancedParser::ConstantexpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::Static_assertdeclarationContext::Comma() {
  return getToken(oxadvancedParser::Comma, 0);
}

tree::TerminalNode* oxadvancedParser::Static_assertdeclarationContext::Stringliteral() {
  return getToken(oxadvancedParser::Stringliteral, 0);
}

tree::TerminalNode* oxadvancedParser::Static_assertdeclarationContext::RightParen() {
  return getToken(oxadvancedParser::RightParen, 0);
}

tree::TerminalNode* oxadvancedParser::Static_assertdeclarationContext::Semi() {
  return getToken(oxadvancedParser::Semi, 0);
}


size_t oxadvancedParser::Static_assertdeclarationContext::getRuleIndex() const {
  return oxadvancedParser::RuleStatic_assertdeclaration;
}

void oxadvancedParser::Static_assertdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatic_assertdeclaration(this);
}

void oxadvancedParser::Static_assertdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatic_assertdeclaration(this);
}

oxadvancedParser::Static_assertdeclarationContext* oxadvancedParser::static_assertdeclaration() {
  Static_assertdeclarationContext *_localctx = _tracker.createInstance<Static_assertdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 136, oxadvancedParser::RuleStatic_assertdeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1128);
    match(oxadvancedParser::Static_assert);
    setState(1129);
    match(oxadvancedParser::LeftParen);
    setState(1130);
    constantexpression();
    setState(1131);
    match(oxadvancedParser::Comma);
    setState(1132);
    match(oxadvancedParser::Stringliteral);
    setState(1133);
    match(oxadvancedParser::RightParen);
    setState(1134);
    match(oxadvancedParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptydeclarationContext ------------------------------------------------------------------

oxadvancedParser::EmptydeclarationContext::EmptydeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::EmptydeclarationContext::Semi() {
  return getToken(oxadvancedParser::Semi, 0);
}


size_t oxadvancedParser::EmptydeclarationContext::getRuleIndex() const {
  return oxadvancedParser::RuleEmptydeclaration;
}

void oxadvancedParser::EmptydeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptydeclaration(this);
}

void oxadvancedParser::EmptydeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptydeclaration(this);
}

oxadvancedParser::EmptydeclarationContext* oxadvancedParser::emptydeclaration() {
  EmptydeclarationContext *_localctx = _tracker.createInstance<EmptydeclarationContext>(_ctx, getState());
  enterRule(_localctx, 138, oxadvancedParser::RuleEmptydeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1136);
    match(oxadvancedParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclspecifierContext ------------------------------------------------------------------

oxadvancedParser::DeclspecifierContext::DeclspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::StorageclassspecifierContext* oxadvancedParser::DeclspecifierContext::storageclassspecifier() {
  return getRuleContext<oxadvancedParser::StorageclassspecifierContext>(0);
}

oxadvancedParser::TypespecifierContext* oxadvancedParser::DeclspecifierContext::typespecifier() {
  return getRuleContext<oxadvancedParser::TypespecifierContext>(0);
}

oxadvancedParser::FunctionspecifierContext* oxadvancedParser::DeclspecifierContext::functionspecifier() {
  return getRuleContext<oxadvancedParser::FunctionspecifierContext>(0);
}

tree::TerminalNode* oxadvancedParser::DeclspecifierContext::Typedef() {
  return getToken(oxadvancedParser::Typedef, 0);
}

tree::TerminalNode* oxadvancedParser::DeclspecifierContext::Constexpr() {
  return getToken(oxadvancedParser::Constexpr, 0);
}


size_t oxadvancedParser::DeclspecifierContext::getRuleIndex() const {
  return oxadvancedParser::RuleDeclspecifier;
}

void oxadvancedParser::DeclspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclspecifier(this);
}

void oxadvancedParser::DeclspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclspecifier(this);
}

oxadvancedParser::DeclspecifierContext* oxadvancedParser::declspecifier() {
  DeclspecifierContext *_localctx = _tracker.createInstance<DeclspecifierContext>(_ctx, getState());
  enterRule(_localctx, 140, oxadvancedParser::RuleDeclspecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1143);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1138);
      storageclassspecifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1139);
      typespecifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1140);
      functionspecifier();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1141);
      match(oxadvancedParser::Typedef);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1142);
      match(oxadvancedParser::Constexpr);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclspecifierseqContext ------------------------------------------------------------------

oxadvancedParser::DeclspecifierseqContext::DeclspecifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::DeclspecifierContext* oxadvancedParser::DeclspecifierseqContext::declspecifier() {
  return getRuleContext<oxadvancedParser::DeclspecifierContext>(0);
}

oxadvancedParser::DeclspecifierseqContext* oxadvancedParser::DeclspecifierseqContext::declspecifierseq() {
  return getRuleContext<oxadvancedParser::DeclspecifierseqContext>(0);
}


size_t oxadvancedParser::DeclspecifierseqContext::getRuleIndex() const {
  return oxadvancedParser::RuleDeclspecifierseq;
}

void oxadvancedParser::DeclspecifierseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclspecifierseq(this);
}

void oxadvancedParser::DeclspecifierseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclspecifierseq(this);
}

oxadvancedParser::DeclspecifierseqContext* oxadvancedParser::declspecifierseq() {
  DeclspecifierseqContext *_localctx = _tracker.createInstance<DeclspecifierseqContext>(_ctx, getState());
  enterRule(_localctx, 142, oxadvancedParser::RuleDeclspecifierseq);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1145);
    declspecifier();
    setState(1147);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << oxadvancedParser::T__19)
      | (1ULL << oxadvancedParser::Auto)
      | (1ULL << oxadvancedParser::Bool)
      | (1ULL << oxadvancedParser::Const)
      | (1ULL << oxadvancedParser::Constexpr)
      | (1ULL << oxadvancedParser::Decltype)
      | (1ULL << oxadvancedParser::Double)
      | (1ULL << oxadvancedParser::Enum)
      | (1ULL << oxadvancedParser::Explicit)
      | (1ULL << oxadvancedParser::Extern)
      | (1ULL << oxadvancedParser::Float)
      | (1ULL << oxadvancedParser::Inline)
      | (1ULL << oxadvancedParser::Int)
      | (1ULL << oxadvancedParser::Decl)
      | (1ULL << oxadvancedParser::Long))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (oxadvancedParser::Mutable - 64))
      | (1ULL << (oxadvancedParser::Register - 64))
      | (1ULL << (oxadvancedParser::Short - 64))
      | (1ULL << (oxadvancedParser::Signed - 64))
      | (1ULL << (oxadvancedParser::Static - 64))
      | (1ULL << (oxadvancedParser::Typedef - 64))
      | (1ULL << (oxadvancedParser::Unsigned - 64))
      | (1ULL << (oxadvancedParser::Virtual - 64))
      | (1ULL << (oxadvancedParser::Void - 64))
      | (1ULL << (oxadvancedParser::Volatile - 64))
      | (1ULL << (oxadvancedParser::Wchar - 64)))) != 0)) {
      setState(1146);
      declspecifierseq();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StorageclassspecifierContext ------------------------------------------------------------------

oxadvancedParser::StorageclassspecifierContext::StorageclassspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::StorageclassspecifierContext::Register() {
  return getToken(oxadvancedParser::Register, 0);
}

tree::TerminalNode* oxadvancedParser::StorageclassspecifierContext::Static() {
  return getToken(oxadvancedParser::Static, 0);
}

tree::TerminalNode* oxadvancedParser::StorageclassspecifierContext::Extern() {
  return getToken(oxadvancedParser::Extern, 0);
}

tree::TerminalNode* oxadvancedParser::StorageclassspecifierContext::Mutable() {
  return getToken(oxadvancedParser::Mutable, 0);
}


size_t oxadvancedParser::StorageclassspecifierContext::getRuleIndex() const {
  return oxadvancedParser::RuleStorageclassspecifier;
}

void oxadvancedParser::StorageclassspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStorageclassspecifier(this);
}

void oxadvancedParser::StorageclassspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStorageclassspecifier(this);
}

oxadvancedParser::StorageclassspecifierContext* oxadvancedParser::storageclassspecifier() {
  StorageclassspecifierContext *_localctx = _tracker.createInstance<StorageclassspecifierContext>(_ctx, getState());
  enterRule(_localctx, 144, oxadvancedParser::RuleStorageclassspecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1149);
    _la = _input->LA(1);
    if (!(((((_la - 20) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 20)) & ((1ULL << (oxadvancedParser::T__19 - 20))
      | (1ULL << (oxadvancedParser::Extern - 20))
      | (1ULL << (oxadvancedParser::Mutable - 20))
      | (1ULL << (oxadvancedParser::Register - 20))
      | (1ULL << (oxadvancedParser::Static - 20)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionspecifierContext ------------------------------------------------------------------

oxadvancedParser::FunctionspecifierContext::FunctionspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::FunctionspecifierContext::Inline() {
  return getToken(oxadvancedParser::Inline, 0);
}

tree::TerminalNode* oxadvancedParser::FunctionspecifierContext::Virtual() {
  return getToken(oxadvancedParser::Virtual, 0);
}

tree::TerminalNode* oxadvancedParser::FunctionspecifierContext::Explicit() {
  return getToken(oxadvancedParser::Explicit, 0);
}

tree::TerminalNode* oxadvancedParser::FunctionspecifierContext::Static() {
  return getToken(oxadvancedParser::Static, 0);
}

tree::TerminalNode* oxadvancedParser::FunctionspecifierContext::Extern() {
  return getToken(oxadvancedParser::Extern, 0);
}


size_t oxadvancedParser::FunctionspecifierContext::getRuleIndex() const {
  return oxadvancedParser::RuleFunctionspecifier;
}

void oxadvancedParser::FunctionspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionspecifier(this);
}

void oxadvancedParser::FunctionspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionspecifier(this);
}

oxadvancedParser::FunctionspecifierContext* oxadvancedParser::functionspecifier() {
  FunctionspecifierContext *_localctx = _tracker.createInstance<FunctionspecifierContext>(_ctx, getState());
  enterRule(_localctx, 146, oxadvancedParser::RuleFunctionspecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1151);
    _la = _input->LA(1);
    if (!(((((_la - 49) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 49)) & ((1ULL << (oxadvancedParser::Explicit - 49))
      | (1ULL << (oxadvancedParser::Extern - 49))
      | (1ULL << (oxadvancedParser::Inline - 49))
      | (1ULL << (oxadvancedParser::Static - 49))
      | (1ULL << (oxadvancedParser::Virtual - 49)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypespecifierContext ------------------------------------------------------------------

oxadvancedParser::TypespecifierContext::TypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::TrailingtypespecifierContext* oxadvancedParser::TypespecifierContext::trailingtypespecifier() {
  return getRuleContext<oxadvancedParser::TrailingtypespecifierContext>(0);
}

oxadvancedParser::CvqualifierContext* oxadvancedParser::TypespecifierContext::cvqualifier() {
  return getRuleContext<oxadvancedParser::CvqualifierContext>(0);
}


size_t oxadvancedParser::TypespecifierContext::getRuleIndex() const {
  return oxadvancedParser::RuleTypespecifier;
}

void oxadvancedParser::TypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypespecifier(this);
}

void oxadvancedParser::TypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypespecifier(this);
}

oxadvancedParser::TypespecifierContext* oxadvancedParser::typespecifier() {
  TypespecifierContext *_localctx = _tracker.createInstance<TypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 148, oxadvancedParser::RuleTypespecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1155);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case oxadvancedParser::Auto:
      case oxadvancedParser::Bool:
      case oxadvancedParser::Decltype:
      case oxadvancedParser::Double:
      case oxadvancedParser::Enum:
      case oxadvancedParser::Float:
      case oxadvancedParser::Int:
      case oxadvancedParser::Decl:
      case oxadvancedParser::Long:
      case oxadvancedParser::Short:
      case oxadvancedParser::Signed:
      case oxadvancedParser::Unsigned:
      case oxadvancedParser::Void:
      case oxadvancedParser::Wchar: {
        enterOuterAlt(_localctx, 1);
        setState(1153);
        trailingtypespecifier();
        break;
      }

      case oxadvancedParser::Const:
      case oxadvancedParser::Volatile: {
        enterOuterAlt(_localctx, 2);
        setState(1154);
        cvqualifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailingtypespecifierContext ------------------------------------------------------------------

oxadvancedParser::TrailingtypespecifierContext::TrailingtypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::SimpletypespecifierContext* oxadvancedParser::TrailingtypespecifierContext::simpletypespecifier() {
  return getRuleContext<oxadvancedParser::SimpletypespecifierContext>(0);
}

oxadvancedParser::ElaboratedtypespecifierContext* oxadvancedParser::TrailingtypespecifierContext::elaboratedtypespecifier() {
  return getRuleContext<oxadvancedParser::ElaboratedtypespecifierContext>(0);
}


size_t oxadvancedParser::TrailingtypespecifierContext::getRuleIndex() const {
  return oxadvancedParser::RuleTrailingtypespecifier;
}

void oxadvancedParser::TrailingtypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrailingtypespecifier(this);
}

void oxadvancedParser::TrailingtypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrailingtypespecifier(this);
}

oxadvancedParser::TrailingtypespecifierContext* oxadvancedParser::trailingtypespecifier() {
  TrailingtypespecifierContext *_localctx = _tracker.createInstance<TrailingtypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 150, oxadvancedParser::RuleTrailingtypespecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1159);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case oxadvancedParser::Auto:
      case oxadvancedParser::Bool:
      case oxadvancedParser::Decltype:
      case oxadvancedParser::Double:
      case oxadvancedParser::Float:
      case oxadvancedParser::Int:
      case oxadvancedParser::Decl:
      case oxadvancedParser::Long:
      case oxadvancedParser::Short:
      case oxadvancedParser::Signed:
      case oxadvancedParser::Unsigned:
      case oxadvancedParser::Void:
      case oxadvancedParser::Wchar: {
        enterOuterAlt(_localctx, 1);
        setState(1157);
        simpletypespecifier();
        break;
      }

      case oxadvancedParser::Enum: {
        enterOuterAlt(_localctx, 2);
        setState(1158);
        elaboratedtypespecifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypespecifierseqContext ------------------------------------------------------------------

oxadvancedParser::TypespecifierseqContext::TypespecifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::TypespecifierContext* oxadvancedParser::TypespecifierseqContext::typespecifier() {
  return getRuleContext<oxadvancedParser::TypespecifierContext>(0);
}

oxadvancedParser::TypespecifierseqContext* oxadvancedParser::TypespecifierseqContext::typespecifierseq() {
  return getRuleContext<oxadvancedParser::TypespecifierseqContext>(0);
}


size_t oxadvancedParser::TypespecifierseqContext::getRuleIndex() const {
  return oxadvancedParser::RuleTypespecifierseq;
}

void oxadvancedParser::TypespecifierseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypespecifierseq(this);
}

void oxadvancedParser::TypespecifierseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypespecifierseq(this);
}

oxadvancedParser::TypespecifierseqContext* oxadvancedParser::typespecifierseq() {
  TypespecifierseqContext *_localctx = _tracker.createInstance<TypespecifierseqContext>(_ctx, getState());
  enterRule(_localctx, 152, oxadvancedParser::RuleTypespecifierseq);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1165);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 105, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1161);
      typespecifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1162);
      typespecifier();
      setState(1163);
      typespecifierseq();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailingtypespecifierseqContext ------------------------------------------------------------------

oxadvancedParser::TrailingtypespecifierseqContext::TrailingtypespecifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::TrailingtypespecifierContext* oxadvancedParser::TrailingtypespecifierseqContext::trailingtypespecifier() {
  return getRuleContext<oxadvancedParser::TrailingtypespecifierContext>(0);
}

oxadvancedParser::TrailingtypespecifierseqContext* oxadvancedParser::TrailingtypespecifierseqContext::trailingtypespecifierseq() {
  return getRuleContext<oxadvancedParser::TrailingtypespecifierseqContext>(0);
}


size_t oxadvancedParser::TrailingtypespecifierseqContext::getRuleIndex() const {
  return oxadvancedParser::RuleTrailingtypespecifierseq;
}

void oxadvancedParser::TrailingtypespecifierseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrailingtypespecifierseq(this);
}

void oxadvancedParser::TrailingtypespecifierseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrailingtypespecifierseq(this);
}

oxadvancedParser::TrailingtypespecifierseqContext* oxadvancedParser::trailingtypespecifierseq() {
  TrailingtypespecifierseqContext *_localctx = _tracker.createInstance<TrailingtypespecifierseqContext>(_ctx, getState());
  enterRule(_localctx, 154, oxadvancedParser::RuleTrailingtypespecifierseq);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1171);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 106, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1167);
      trailingtypespecifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1168);
      trailingtypespecifier();
      setState(1169);
      trailingtypespecifierseq();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpletypespecifierContext ------------------------------------------------------------------

oxadvancedParser::SimpletypespecifierContext::SimpletypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::SimpletypespecifierContext::Decl() {
  return getToken(oxadvancedParser::Decl, 0);
}

tree::TerminalNode* oxadvancedParser::SimpletypespecifierContext::Wchar() {
  return getToken(oxadvancedParser::Wchar, 0);
}

tree::TerminalNode* oxadvancedParser::SimpletypespecifierContext::Bool() {
  return getToken(oxadvancedParser::Bool, 0);
}

tree::TerminalNode* oxadvancedParser::SimpletypespecifierContext::Short() {
  return getToken(oxadvancedParser::Short, 0);
}

tree::TerminalNode* oxadvancedParser::SimpletypespecifierContext::Int() {
  return getToken(oxadvancedParser::Int, 0);
}

tree::TerminalNode* oxadvancedParser::SimpletypespecifierContext::Long() {
  return getToken(oxadvancedParser::Long, 0);
}

tree::TerminalNode* oxadvancedParser::SimpletypespecifierContext::Signed() {
  return getToken(oxadvancedParser::Signed, 0);
}

tree::TerminalNode* oxadvancedParser::SimpletypespecifierContext::Unsigned() {
  return getToken(oxadvancedParser::Unsigned, 0);
}

tree::TerminalNode* oxadvancedParser::SimpletypespecifierContext::Float() {
  return getToken(oxadvancedParser::Float, 0);
}

tree::TerminalNode* oxadvancedParser::SimpletypespecifierContext::Double() {
  return getToken(oxadvancedParser::Double, 0);
}

tree::TerminalNode* oxadvancedParser::SimpletypespecifierContext::Void() {
  return getToken(oxadvancedParser::Void, 0);
}

tree::TerminalNode* oxadvancedParser::SimpletypespecifierContext::Auto() {
  return getToken(oxadvancedParser::Auto, 0);
}

oxadvancedParser::DecltypespecifierContext* oxadvancedParser::SimpletypespecifierContext::decltypespecifier() {
  return getRuleContext<oxadvancedParser::DecltypespecifierContext>(0);
}


size_t oxadvancedParser::SimpletypespecifierContext::getRuleIndex() const {
  return oxadvancedParser::RuleSimpletypespecifier;
}

void oxadvancedParser::SimpletypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpletypespecifier(this);
}

void oxadvancedParser::SimpletypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpletypespecifier(this);
}

oxadvancedParser::SimpletypespecifierContext* oxadvancedParser::simpletypespecifier() {
  SimpletypespecifierContext *_localctx = _tracker.createInstance<SimpletypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 156, oxadvancedParser::RuleSimpletypespecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1186);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case oxadvancedParser::Decl: {
        enterOuterAlt(_localctx, 1);
        setState(1173);
        match(oxadvancedParser::Decl);
        break;
      }

      case oxadvancedParser::Wchar: {
        enterOuterAlt(_localctx, 2);
        setState(1174);
        match(oxadvancedParser::Wchar);
        break;
      }

      case oxadvancedParser::Bool: {
        enterOuterAlt(_localctx, 3);
        setState(1175);
        match(oxadvancedParser::Bool);
        break;
      }

      case oxadvancedParser::Short: {
        enterOuterAlt(_localctx, 4);
        setState(1176);
        match(oxadvancedParser::Short);
        break;
      }

      case oxadvancedParser::Int: {
        enterOuterAlt(_localctx, 5);
        setState(1177);
        match(oxadvancedParser::Int);
        break;
      }

      case oxadvancedParser::Long: {
        enterOuterAlt(_localctx, 6);
        setState(1178);
        match(oxadvancedParser::Long);
        break;
      }

      case oxadvancedParser::Signed: {
        enterOuterAlt(_localctx, 7);
        setState(1179);
        match(oxadvancedParser::Signed);
        break;
      }

      case oxadvancedParser::Unsigned: {
        enterOuterAlt(_localctx, 8);
        setState(1180);
        match(oxadvancedParser::Unsigned);
        break;
      }

      case oxadvancedParser::Float: {
        enterOuterAlt(_localctx, 9);
        setState(1181);
        match(oxadvancedParser::Float);
        break;
      }

      case oxadvancedParser::Double: {
        enterOuterAlt(_localctx, 10);
        setState(1182);
        match(oxadvancedParser::Double);
        break;
      }

      case oxadvancedParser::Void: {
        enterOuterAlt(_localctx, 11);
        setState(1183);
        match(oxadvancedParser::Void);
        break;
      }

      case oxadvancedParser::Auto: {
        enterOuterAlt(_localctx, 12);
        setState(1184);
        match(oxadvancedParser::Auto);
        break;
      }

      case oxadvancedParser::Decltype: {
        enterOuterAlt(_localctx, 13);
        setState(1185);
        decltypespecifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThetypenameContext ------------------------------------------------------------------

oxadvancedParser::ThetypenameContext::ThetypenameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::ClassnameContext* oxadvancedParser::ThetypenameContext::classname() {
  return getRuleContext<oxadvancedParser::ClassnameContext>(0);
}


size_t oxadvancedParser::ThetypenameContext::getRuleIndex() const {
  return oxadvancedParser::RuleThetypename;
}

void oxadvancedParser::ThetypenameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThetypename(this);
}

void oxadvancedParser::ThetypenameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThetypename(this);
}

oxadvancedParser::ThetypenameContext* oxadvancedParser::thetypename() {
  ThetypenameContext *_localctx = _tracker.createInstance<ThetypenameContext>(_ctx, getState());
  enterRule(_localctx, 158, oxadvancedParser::RuleThetypename);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1188);
    classname();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecltypespecifierContext ------------------------------------------------------------------

oxadvancedParser::DecltypespecifierContext::DecltypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::DecltypespecifierContext::Decltype() {
  return getToken(oxadvancedParser::Decltype, 0);
}

tree::TerminalNode* oxadvancedParser::DecltypespecifierContext::LeftParen() {
  return getToken(oxadvancedParser::LeftParen, 0);
}

oxadvancedParser::ExpressionContext* oxadvancedParser::DecltypespecifierContext::expression() {
  return getRuleContext<oxadvancedParser::ExpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::DecltypespecifierContext::RightParen() {
  return getToken(oxadvancedParser::RightParen, 0);
}

tree::TerminalNode* oxadvancedParser::DecltypespecifierContext::Auto() {
  return getToken(oxadvancedParser::Auto, 0);
}


size_t oxadvancedParser::DecltypespecifierContext::getRuleIndex() const {
  return oxadvancedParser::RuleDecltypespecifier;
}

void oxadvancedParser::DecltypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecltypespecifier(this);
}

void oxadvancedParser::DecltypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecltypespecifier(this);
}

oxadvancedParser::DecltypespecifierContext* oxadvancedParser::decltypespecifier() {
  DecltypespecifierContext *_localctx = _tracker.createInstance<DecltypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 160, oxadvancedParser::RuleDecltypespecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1199);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1190);
      match(oxadvancedParser::Decltype);
      setState(1191);
      match(oxadvancedParser::LeftParen);
      setState(1192);
      expression(0);
      setState(1193);
      match(oxadvancedParser::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1195);
      match(oxadvancedParser::Decltype);
      setState(1196);
      match(oxadvancedParser::LeftParen);
      setState(1197);
      match(oxadvancedParser::Auto);
      setState(1198);
      match(oxadvancedParser::RightParen);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElaboratedtypespecifierContext ------------------------------------------------------------------

oxadvancedParser::ElaboratedtypespecifierContext::ElaboratedtypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::ElaboratedtypespecifierContext::Enum() {
  return getToken(oxadvancedParser::Enum, 0);
}

tree::TerminalNode* oxadvancedParser::ElaboratedtypespecifierContext::Identifier() {
  return getToken(oxadvancedParser::Identifier, 0);
}

oxadvancedParser::NestednamespecifierContext* oxadvancedParser::ElaboratedtypespecifierContext::nestednamespecifier() {
  return getRuleContext<oxadvancedParser::NestednamespecifierContext>(0);
}


size_t oxadvancedParser::ElaboratedtypespecifierContext::getRuleIndex() const {
  return oxadvancedParser::RuleElaboratedtypespecifier;
}

void oxadvancedParser::ElaboratedtypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElaboratedtypespecifier(this);
}

void oxadvancedParser::ElaboratedtypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElaboratedtypespecifier(this);
}

oxadvancedParser::ElaboratedtypespecifierContext* oxadvancedParser::elaboratedtypespecifier() {
  ElaboratedtypespecifierContext *_localctx = _tracker.createInstance<ElaboratedtypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 162, oxadvancedParser::RuleElaboratedtypespecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1201);
    match(oxadvancedParser::Enum);
    setState(1203);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 109, _ctx)) {
    case 1: {
      setState(1202);
      nestednamespecifier(0);
      break;
    }

    default:
      break;
    }
    setState(1205);
    match(oxadvancedParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumspecifierContext ------------------------------------------------------------------

oxadvancedParser::EnumspecifierContext::EnumspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::EnumheadContext* oxadvancedParser::EnumspecifierContext::enumhead() {
  return getRuleContext<oxadvancedParser::EnumheadContext>(0);
}

tree::TerminalNode* oxadvancedParser::EnumspecifierContext::LeftBrace() {
  return getToken(oxadvancedParser::LeftBrace, 0);
}

tree::TerminalNode* oxadvancedParser::EnumspecifierContext::RightBrace() {
  return getToken(oxadvancedParser::RightBrace, 0);
}

oxadvancedParser::EnumeratorlistContext* oxadvancedParser::EnumspecifierContext::enumeratorlist() {
  return getRuleContext<oxadvancedParser::EnumeratorlistContext>(0);
}

tree::TerminalNode* oxadvancedParser::EnumspecifierContext::Comma() {
  return getToken(oxadvancedParser::Comma, 0);
}


size_t oxadvancedParser::EnumspecifierContext::getRuleIndex() const {
  return oxadvancedParser::RuleEnumspecifier;
}

void oxadvancedParser::EnumspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumspecifier(this);
}

void oxadvancedParser::EnumspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumspecifier(this);
}

oxadvancedParser::EnumspecifierContext* oxadvancedParser::enumspecifier() {
  EnumspecifierContext *_localctx = _tracker.createInstance<EnumspecifierContext>(_ctx, getState());
  enterRule(_localctx, 164, oxadvancedParser::RuleEnumspecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1220);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 111, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1207);
      enumhead();
      setState(1208);
      match(oxadvancedParser::LeftBrace);
      setState(1210);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::Enum

      || _la == oxadvancedParser::False || _la == oxadvancedParser::True

      || _la == oxadvancedParser::Identifier) {
        setState(1209);
        enumeratorlist(0);
      }
      setState(1212);
      match(oxadvancedParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1214);
      enumhead();
      setState(1215);
      match(oxadvancedParser::LeftBrace);
      setState(1216);
      enumeratorlist(0);
      setState(1217);
      match(oxadvancedParser::Comma);
      setState(1218);
      match(oxadvancedParser::RightBrace);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumheadContext ------------------------------------------------------------------

oxadvancedParser::EnumheadContext::EnumheadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::EnumkeyContext* oxadvancedParser::EnumheadContext::enumkey() {
  return getRuleContext<oxadvancedParser::EnumkeyContext>(0);
}

tree::TerminalNode* oxadvancedParser::EnumheadContext::Identifier() {
  return getToken(oxadvancedParser::Identifier, 0);
}

oxadvancedParser::EnumbaseContext* oxadvancedParser::EnumheadContext::enumbase() {
  return getRuleContext<oxadvancedParser::EnumbaseContext>(0);
}

oxadvancedParser::NestednamespecifierContext* oxadvancedParser::EnumheadContext::nestednamespecifier() {
  return getRuleContext<oxadvancedParser::NestednamespecifierContext>(0);
}


size_t oxadvancedParser::EnumheadContext::getRuleIndex() const {
  return oxadvancedParser::RuleEnumhead;
}

void oxadvancedParser::EnumheadContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumhead(this);
}

void oxadvancedParser::EnumheadContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumhead(this);
}

oxadvancedParser::EnumheadContext* oxadvancedParser::enumhead() {
  EnumheadContext *_localctx = _tracker.createInstance<EnumheadContext>(_ctx, getState());
  enterRule(_localctx, 166, oxadvancedParser::RuleEnumhead);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1235);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 115, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1222);
      enumkey();
      setState(1224);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::Identifier) {
        setState(1223);
        match(oxadvancedParser::Identifier);
      }
      setState(1227);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::Colon) {
        setState(1226);
        enumbase();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1229);
      enumkey();
      setState(1230);
      nestednamespecifier(0);
      setState(1231);
      match(oxadvancedParser::Identifier);
      setState(1233);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::Colon) {
        setState(1232);
        enumbase();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpaqueenumdeclarationContext ------------------------------------------------------------------

oxadvancedParser::OpaqueenumdeclarationContext::OpaqueenumdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::EnumkeyContext* oxadvancedParser::OpaqueenumdeclarationContext::enumkey() {
  return getRuleContext<oxadvancedParser::EnumkeyContext>(0);
}

tree::TerminalNode* oxadvancedParser::OpaqueenumdeclarationContext::Identifier() {
  return getToken(oxadvancedParser::Identifier, 0);
}

tree::TerminalNode* oxadvancedParser::OpaqueenumdeclarationContext::Semi() {
  return getToken(oxadvancedParser::Semi, 0);
}

oxadvancedParser::EnumbaseContext* oxadvancedParser::OpaqueenumdeclarationContext::enumbase() {
  return getRuleContext<oxadvancedParser::EnumbaseContext>(0);
}


size_t oxadvancedParser::OpaqueenumdeclarationContext::getRuleIndex() const {
  return oxadvancedParser::RuleOpaqueenumdeclaration;
}

void oxadvancedParser::OpaqueenumdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpaqueenumdeclaration(this);
}

void oxadvancedParser::OpaqueenumdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpaqueenumdeclaration(this);
}

oxadvancedParser::OpaqueenumdeclarationContext* oxadvancedParser::opaqueenumdeclaration() {
  OpaqueenumdeclarationContext *_localctx = _tracker.createInstance<OpaqueenumdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 168, oxadvancedParser::RuleOpaqueenumdeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1237);
    enumkey();
    setState(1238);
    match(oxadvancedParser::Identifier);
    setState(1240);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == oxadvancedParser::Colon) {
      setState(1239);
      enumbase();
    }
    setState(1242);
    match(oxadvancedParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumkeyContext ------------------------------------------------------------------

oxadvancedParser::EnumkeyContext::EnumkeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::EnumkeyContext::Enum() {
  return getToken(oxadvancedParser::Enum, 0);
}

tree::TerminalNode* oxadvancedParser::EnumkeyContext::Class() {
  return getToken(oxadvancedParser::Class, 0);
}

tree::TerminalNode* oxadvancedParser::EnumkeyContext::Struct() {
  return getToken(oxadvancedParser::Struct, 0);
}


size_t oxadvancedParser::EnumkeyContext::getRuleIndex() const {
  return oxadvancedParser::RuleEnumkey;
}

void oxadvancedParser::EnumkeyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumkey(this);
}

void oxadvancedParser::EnumkeyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumkey(this);
}

oxadvancedParser::EnumkeyContext* oxadvancedParser::enumkey() {
  EnumkeyContext *_localctx = _tracker.createInstance<EnumkeyContext>(_ctx, getState());
  enterRule(_localctx, 170, oxadvancedParser::RuleEnumkey);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1249);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1244);
      match(oxadvancedParser::Enum);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1245);
      match(oxadvancedParser::Enum);
      setState(1246);
      match(oxadvancedParser::Class);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1247);
      match(oxadvancedParser::Enum);
      setState(1248);
      match(oxadvancedParser::Struct);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumbaseContext ------------------------------------------------------------------

oxadvancedParser::EnumbaseContext::EnumbaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::EnumbaseContext::Colon() {
  return getToken(oxadvancedParser::Colon, 0);
}

oxadvancedParser::TypespecifierseqContext* oxadvancedParser::EnumbaseContext::typespecifierseq() {
  return getRuleContext<oxadvancedParser::TypespecifierseqContext>(0);
}


size_t oxadvancedParser::EnumbaseContext::getRuleIndex() const {
  return oxadvancedParser::RuleEnumbase;
}

void oxadvancedParser::EnumbaseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumbase(this);
}

void oxadvancedParser::EnumbaseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumbase(this);
}

oxadvancedParser::EnumbaseContext* oxadvancedParser::enumbase() {
  EnumbaseContext *_localctx = _tracker.createInstance<EnumbaseContext>(_ctx, getState());
  enterRule(_localctx, 172, oxadvancedParser::RuleEnumbase);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1251);
    match(oxadvancedParser::Colon);
    setState(1252);
    typespecifierseq();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorlistContext ------------------------------------------------------------------

oxadvancedParser::EnumeratorlistContext::EnumeratorlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::EnumeratordefinitionContext* oxadvancedParser::EnumeratorlistContext::enumeratordefinition() {
  return getRuleContext<oxadvancedParser::EnumeratordefinitionContext>(0);
}

oxadvancedParser::EnumeratorlistContext* oxadvancedParser::EnumeratorlistContext::enumeratorlist() {
  return getRuleContext<oxadvancedParser::EnumeratorlistContext>(0);
}

tree::TerminalNode* oxadvancedParser::EnumeratorlistContext::Comma() {
  return getToken(oxadvancedParser::Comma, 0);
}


size_t oxadvancedParser::EnumeratorlistContext::getRuleIndex() const {
  return oxadvancedParser::RuleEnumeratorlist;
}

void oxadvancedParser::EnumeratorlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumeratorlist(this);
}

void oxadvancedParser::EnumeratorlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumeratorlist(this);
}


oxadvancedParser::EnumeratorlistContext* oxadvancedParser::enumeratorlist() {
   return enumeratorlist(0);
}

oxadvancedParser::EnumeratorlistContext* oxadvancedParser::enumeratorlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::EnumeratorlistContext *_localctx = _tracker.createInstance<EnumeratorlistContext>(_ctx, parentState);
  oxadvancedParser::EnumeratorlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 174;
  enterRecursionRule(_localctx, 174, oxadvancedParser::RuleEnumeratorlist, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1255);
    enumeratordefinition();
    _ctx->stop = _input->LT(-1);
    setState(1262);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<EnumeratorlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleEnumeratorlist);
        setState(1257);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1258);
        match(oxadvancedParser::Comma);
        setState(1259);
        enumeratordefinition(); 
      }
      setState(1264);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EnumeratordefinitionContext ------------------------------------------------------------------

oxadvancedParser::EnumeratordefinitionContext::EnumeratordefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::EnumeratorContext* oxadvancedParser::EnumeratordefinitionContext::enumerator() {
  return getRuleContext<oxadvancedParser::EnumeratorContext>(0);
}

tree::TerminalNode* oxadvancedParser::EnumeratordefinitionContext::Assign() {
  return getToken(oxadvancedParser::Assign, 0);
}

oxadvancedParser::ConstantexpressionContext* oxadvancedParser::EnumeratordefinitionContext::constantexpression() {
  return getRuleContext<oxadvancedParser::ConstantexpressionContext>(0);
}


size_t oxadvancedParser::EnumeratordefinitionContext::getRuleIndex() const {
  return oxadvancedParser::RuleEnumeratordefinition;
}

void oxadvancedParser::EnumeratordefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumeratordefinition(this);
}

void oxadvancedParser::EnumeratordefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumeratordefinition(this);
}

oxadvancedParser::EnumeratordefinitionContext* oxadvancedParser::enumeratordefinition() {
  EnumeratordefinitionContext *_localctx = _tracker.createInstance<EnumeratordefinitionContext>(_ctx, getState());
  enterRule(_localctx, 176, oxadvancedParser::RuleEnumeratordefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1270);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 119, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1265);
      enumerator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1266);
      enumerator();
      setState(1267);
      match(oxadvancedParser::Assign);
      setState(1268);
      constantexpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorContext ------------------------------------------------------------------

oxadvancedParser::EnumeratorContext::EnumeratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::EnumeratorContext::Identifier() {
  return getToken(oxadvancedParser::Identifier, 0);
}

tree::TerminalNode* oxadvancedParser::EnumeratorContext::Enum() {
  return getToken(oxadvancedParser::Enum, 0);
}

tree::TerminalNode* oxadvancedParser::EnumeratorContext::True() {
  return getToken(oxadvancedParser::True, 0);
}

tree::TerminalNode* oxadvancedParser::EnumeratorContext::False() {
  return getToken(oxadvancedParser::False, 0);
}


size_t oxadvancedParser::EnumeratorContext::getRuleIndex() const {
  return oxadvancedParser::RuleEnumerator;
}

void oxadvancedParser::EnumeratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumerator(this);
}

void oxadvancedParser::EnumeratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumerator(this);
}

oxadvancedParser::EnumeratorContext* oxadvancedParser::enumerator() {
  EnumeratorContext *_localctx = _tracker.createInstance<EnumeratorContext>(_ctx, getState());
  enterRule(_localctx, 178, oxadvancedParser::RuleEnumerator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1272);
    _la = _input->LA(1);
    if (!(_la == oxadvancedParser::Enum

    || _la == oxadvancedParser::False || _la == oxadvancedParser::True

    || _la == oxadvancedParser::Identifier)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacenameContext ------------------------------------------------------------------

oxadvancedParser::NamespacenameContext::NamespacenameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::OriginalnamespacenameContext* oxadvancedParser::NamespacenameContext::originalnamespacename() {
  return getRuleContext<oxadvancedParser::OriginalnamespacenameContext>(0);
}

oxadvancedParser::NamespacealiasContext* oxadvancedParser::NamespacenameContext::namespacealias() {
  return getRuleContext<oxadvancedParser::NamespacealiasContext>(0);
}


size_t oxadvancedParser::NamespacenameContext::getRuleIndex() const {
  return oxadvancedParser::RuleNamespacename;
}

void oxadvancedParser::NamespacenameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespacename(this);
}

void oxadvancedParser::NamespacenameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespacename(this);
}

oxadvancedParser::NamespacenameContext* oxadvancedParser::namespacename() {
  NamespacenameContext *_localctx = _tracker.createInstance<NamespacenameContext>(_ctx, getState());
  enterRule(_localctx, 180, oxadvancedParser::RuleNamespacename);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1276);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 120, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1274);
      originalnamespacename();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1275);
      namespacealias();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OriginalnamespacenameContext ------------------------------------------------------------------

oxadvancedParser::OriginalnamespacenameContext::OriginalnamespacenameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::OriginalnamespacenameContext::Identifier() {
  return getToken(oxadvancedParser::Identifier, 0);
}


size_t oxadvancedParser::OriginalnamespacenameContext::getRuleIndex() const {
  return oxadvancedParser::RuleOriginalnamespacename;
}

void oxadvancedParser::OriginalnamespacenameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOriginalnamespacename(this);
}

void oxadvancedParser::OriginalnamespacenameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOriginalnamespacename(this);
}

oxadvancedParser::OriginalnamespacenameContext* oxadvancedParser::originalnamespacename() {
  OriginalnamespacenameContext *_localctx = _tracker.createInstance<OriginalnamespacenameContext>(_ctx, getState());
  enterRule(_localctx, 182, oxadvancedParser::RuleOriginalnamespacename);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1278);
    match(oxadvancedParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacedefinitionContext ------------------------------------------------------------------

oxadvancedParser::NamespacedefinitionContext::NamespacedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::NamednamespacedefinitionContext* oxadvancedParser::NamespacedefinitionContext::namednamespacedefinition() {
  return getRuleContext<oxadvancedParser::NamednamespacedefinitionContext>(0);
}

oxadvancedParser::UnnamednamespacedefinitionContext* oxadvancedParser::NamespacedefinitionContext::unnamednamespacedefinition() {
  return getRuleContext<oxadvancedParser::UnnamednamespacedefinitionContext>(0);
}


size_t oxadvancedParser::NamespacedefinitionContext::getRuleIndex() const {
  return oxadvancedParser::RuleNamespacedefinition;
}

void oxadvancedParser::NamespacedefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespacedefinition(this);
}

void oxadvancedParser::NamespacedefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespacedefinition(this);
}

oxadvancedParser::NamespacedefinitionContext* oxadvancedParser::namespacedefinition() {
  NamespacedefinitionContext *_localctx = _tracker.createInstance<NamespacedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 184, oxadvancedParser::RuleNamespacedefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1282);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 121, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1280);
      namednamespacedefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1281);
      unnamednamespacedefinition();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamednamespacedefinitionContext ------------------------------------------------------------------

oxadvancedParser::NamednamespacedefinitionContext::NamednamespacedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::ExtensionnamespacedefinitionContext* oxadvancedParser::NamednamespacedefinitionContext::extensionnamespacedefinition() {
  return getRuleContext<oxadvancedParser::ExtensionnamespacedefinitionContext>(0);
}


size_t oxadvancedParser::NamednamespacedefinitionContext::getRuleIndex() const {
  return oxadvancedParser::RuleNamednamespacedefinition;
}

void oxadvancedParser::NamednamespacedefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamednamespacedefinition(this);
}

void oxadvancedParser::NamednamespacedefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamednamespacedefinition(this);
}

oxadvancedParser::NamednamespacedefinitionContext* oxadvancedParser::namednamespacedefinition() {
  NamednamespacedefinitionContext *_localctx = _tracker.createInstance<NamednamespacedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 186, oxadvancedParser::RuleNamednamespacedefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1284);
    extensionnamespacedefinition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OriginalnamespacedefinitionContext ------------------------------------------------------------------

oxadvancedParser::OriginalnamespacedefinitionContext::OriginalnamespacedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::OriginalnamespacedefinitionContext::Namespace() {
  return getToken(oxadvancedParser::Namespace, 0);
}

tree::TerminalNode* oxadvancedParser::OriginalnamespacedefinitionContext::Identifier() {
  return getToken(oxadvancedParser::Identifier, 0);
}

tree::TerminalNode* oxadvancedParser::OriginalnamespacedefinitionContext::LeftBrace() {
  return getToken(oxadvancedParser::LeftBrace, 0);
}

oxadvancedParser::NamespacebodyContext* oxadvancedParser::OriginalnamespacedefinitionContext::namespacebody() {
  return getRuleContext<oxadvancedParser::NamespacebodyContext>(0);
}

tree::TerminalNode* oxadvancedParser::OriginalnamespacedefinitionContext::RightBrace() {
  return getToken(oxadvancedParser::RightBrace, 0);
}


size_t oxadvancedParser::OriginalnamespacedefinitionContext::getRuleIndex() const {
  return oxadvancedParser::RuleOriginalnamespacedefinition;
}

void oxadvancedParser::OriginalnamespacedefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOriginalnamespacedefinition(this);
}

void oxadvancedParser::OriginalnamespacedefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOriginalnamespacedefinition(this);
}

oxadvancedParser::OriginalnamespacedefinitionContext* oxadvancedParser::originalnamespacedefinition() {
  OriginalnamespacedefinitionContext *_localctx = _tracker.createInstance<OriginalnamespacedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 188, oxadvancedParser::RuleOriginalnamespacedefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1286);
    match(oxadvancedParser::Namespace);
    setState(1287);
    match(oxadvancedParser::Identifier);
    setState(1288);
    match(oxadvancedParser::LeftBrace);
    setState(1289);
    namespacebody();
    setState(1290);
    match(oxadvancedParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExtensionnamespacedefinitionContext ------------------------------------------------------------------

oxadvancedParser::ExtensionnamespacedefinitionContext::ExtensionnamespacedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::ExtensionnamespacedefinitionContext::Namespace() {
  return getToken(oxadvancedParser::Namespace, 0);
}

oxadvancedParser::OriginalnamespacenameContext* oxadvancedParser::ExtensionnamespacedefinitionContext::originalnamespacename() {
  return getRuleContext<oxadvancedParser::OriginalnamespacenameContext>(0);
}

tree::TerminalNode* oxadvancedParser::ExtensionnamespacedefinitionContext::LeftBrace() {
  return getToken(oxadvancedParser::LeftBrace, 0);
}

oxadvancedParser::NamespacebodyContext* oxadvancedParser::ExtensionnamespacedefinitionContext::namespacebody() {
  return getRuleContext<oxadvancedParser::NamespacebodyContext>(0);
}

tree::TerminalNode* oxadvancedParser::ExtensionnamespacedefinitionContext::RightBrace() {
  return getToken(oxadvancedParser::RightBrace, 0);
}


size_t oxadvancedParser::ExtensionnamespacedefinitionContext::getRuleIndex() const {
  return oxadvancedParser::RuleExtensionnamespacedefinition;
}

void oxadvancedParser::ExtensionnamespacedefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExtensionnamespacedefinition(this);
}

void oxadvancedParser::ExtensionnamespacedefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExtensionnamespacedefinition(this);
}

oxadvancedParser::ExtensionnamespacedefinitionContext* oxadvancedParser::extensionnamespacedefinition() {
  ExtensionnamespacedefinitionContext *_localctx = _tracker.createInstance<ExtensionnamespacedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 190, oxadvancedParser::RuleExtensionnamespacedefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1292);
    match(oxadvancedParser::Namespace);
    setState(1293);
    originalnamespacename();
    setState(1294);
    match(oxadvancedParser::LeftBrace);
    setState(1295);
    namespacebody();
    setState(1296);
    match(oxadvancedParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnnamednamespacedefinitionContext ------------------------------------------------------------------

oxadvancedParser::UnnamednamespacedefinitionContext::UnnamednamespacedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::UnnamednamespacedefinitionContext::Namespace() {
  return getToken(oxadvancedParser::Namespace, 0);
}

tree::TerminalNode* oxadvancedParser::UnnamednamespacedefinitionContext::LeftBrace() {
  return getToken(oxadvancedParser::LeftBrace, 0);
}

oxadvancedParser::NamespacebodyContext* oxadvancedParser::UnnamednamespacedefinitionContext::namespacebody() {
  return getRuleContext<oxadvancedParser::NamespacebodyContext>(0);
}

tree::TerminalNode* oxadvancedParser::UnnamednamespacedefinitionContext::RightBrace() {
  return getToken(oxadvancedParser::RightBrace, 0);
}


size_t oxadvancedParser::UnnamednamespacedefinitionContext::getRuleIndex() const {
  return oxadvancedParser::RuleUnnamednamespacedefinition;
}

void oxadvancedParser::UnnamednamespacedefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnnamednamespacedefinition(this);
}

void oxadvancedParser::UnnamednamespacedefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnnamednamespacedefinition(this);
}

oxadvancedParser::UnnamednamespacedefinitionContext* oxadvancedParser::unnamednamespacedefinition() {
  UnnamednamespacedefinitionContext *_localctx = _tracker.createInstance<UnnamednamespacedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 192, oxadvancedParser::RuleUnnamednamespacedefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1298);
    match(oxadvancedParser::Namespace);
    setState(1299);
    match(oxadvancedParser::LeftBrace);
    setState(1300);
    namespacebody();
    setState(1301);
    match(oxadvancedParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacebodyContext ------------------------------------------------------------------

oxadvancedParser::NamespacebodyContext::NamespacebodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::DeclarationseqContext* oxadvancedParser::NamespacebodyContext::declarationseq() {
  return getRuleContext<oxadvancedParser::DeclarationseqContext>(0);
}


size_t oxadvancedParser::NamespacebodyContext::getRuleIndex() const {
  return oxadvancedParser::RuleNamespacebody;
}

void oxadvancedParser::NamespacebodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespacebody(this);
}

void oxadvancedParser::NamespacebodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespacebody(this);
}

oxadvancedParser::NamespacebodyContext* oxadvancedParser::namespacebody() {
  NamespacebodyContext *_localctx = _tracker.createInstance<NamespacebodyContext>(_ctx, getState());
  enterRule(_localctx, 194, oxadvancedParser::RuleNamespacebody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1304);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 20) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 20)) & ((1ULL << (oxadvancedParser::T__19 - 20))
      | (1ULL << (oxadvancedParser::IN - 20))
      | (1ULL << (oxadvancedParser::Auto - 20))
      | (1ULL << (oxadvancedParser::Bool - 20))
      | (1ULL << (oxadvancedParser::Class - 20))
      | (1ULL << (oxadvancedParser::Const - 20))
      | (1ULL << (oxadvancedParser::Constexpr - 20))
      | (1ULL << (oxadvancedParser::Decltype - 20))
      | (1ULL << (oxadvancedParser::Double - 20))
      | (1ULL << (oxadvancedParser::Enum - 20))
      | (1ULL << (oxadvancedParser::Explicit - 20))
      | (1ULL << (oxadvancedParser::Extern - 20))
      | (1ULL << (oxadvancedParser::Float - 20))
      | (1ULL << (oxadvancedParser::Inline - 20))
      | (1ULL << (oxadvancedParser::Int - 20))
      | (1ULL << (oxadvancedParser::Array - 20))
      | (1ULL << (oxadvancedParser::Decl - 20))
      | (1ULL << (oxadvancedParser::Long - 20))
      | (1ULL << (oxadvancedParser::Mutable - 20))
      | (1ULL << (oxadvancedParser::Namespace - 20))
      | (1ULL << (oxadvancedParser::Operator - 20))
      | (1ULL << (oxadvancedParser::Register - 20))
      | (1ULL << (oxadvancedParser::Short - 20))
      | (1ULL << (oxadvancedParser::Signed - 20))
      | (1ULL << (oxadvancedParser::Static - 20))
      | (1ULL << (oxadvancedParser::Static_assert - 20))
      | (1ULL << (oxadvancedParser::Struct - 20)))) != 0) || ((((_la - 86) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 86)) & ((1ULL << (oxadvancedParser::This - 86))
      | (1ULL << (oxadvancedParser::Typedef - 86))
      | (1ULL << (oxadvancedParser::Unsigned - 86))
      | (1ULL << (oxadvancedParser::Using - 86))
      | (1ULL << (oxadvancedParser::Virtual - 86))
      | (1ULL << (oxadvancedParser::Void - 86))
      | (1ULL << (oxadvancedParser::Volatile - 86))
      | (1ULL << (oxadvancedParser::Wchar - 86))
      | (1ULL << (oxadvancedParser::LeftParen - 86))
      | (1ULL << (oxadvancedParser::Doublecolon - 86))
      | (1ULL << (oxadvancedParser::Semi - 86))
      | (1ULL << (oxadvancedParser::Ellipsis - 86))
      | (1ULL << (oxadvancedParser::Identifier - 86)))) != 0)) {
      setState(1303);
      declarationseq(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacealiasContext ------------------------------------------------------------------

oxadvancedParser::NamespacealiasContext::NamespacealiasContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::NamespacealiasContext::Identifier() {
  return getToken(oxadvancedParser::Identifier, 0);
}


size_t oxadvancedParser::NamespacealiasContext::getRuleIndex() const {
  return oxadvancedParser::RuleNamespacealias;
}

void oxadvancedParser::NamespacealiasContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespacealias(this);
}

void oxadvancedParser::NamespacealiasContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespacealias(this);
}

oxadvancedParser::NamespacealiasContext* oxadvancedParser::namespacealias() {
  NamespacealiasContext *_localctx = _tracker.createInstance<NamespacealiasContext>(_ctx, getState());
  enterRule(_localctx, 196, oxadvancedParser::RuleNamespacealias);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1306);
    match(oxadvancedParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LinkagespecificationContext ------------------------------------------------------------------

oxadvancedParser::LinkagespecificationContext::LinkagespecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::LinkagespecificationContext::Extern() {
  return getToken(oxadvancedParser::Extern, 0);
}

tree::TerminalNode* oxadvancedParser::LinkagespecificationContext::Stringliteral() {
  return getToken(oxadvancedParser::Stringliteral, 0);
}

tree::TerminalNode* oxadvancedParser::LinkagespecificationContext::LeftBrace() {
  return getToken(oxadvancedParser::LeftBrace, 0);
}

tree::TerminalNode* oxadvancedParser::LinkagespecificationContext::RightBrace() {
  return getToken(oxadvancedParser::RightBrace, 0);
}

oxadvancedParser::DeclarationseqContext* oxadvancedParser::LinkagespecificationContext::declarationseq() {
  return getRuleContext<oxadvancedParser::DeclarationseqContext>(0);
}

oxadvancedParser::DeclarationContext* oxadvancedParser::LinkagespecificationContext::declaration() {
  return getRuleContext<oxadvancedParser::DeclarationContext>(0);
}

oxadvancedParser::StorageclassspecifierContext* oxadvancedParser::LinkagespecificationContext::storageclassspecifier() {
  return getRuleContext<oxadvancedParser::StorageclassspecifierContext>(0);
}


size_t oxadvancedParser::LinkagespecificationContext::getRuleIndex() const {
  return oxadvancedParser::RuleLinkagespecification;
}

void oxadvancedParser::LinkagespecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLinkagespecification(this);
}

void oxadvancedParser::LinkagespecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLinkagespecification(this);
}

oxadvancedParser::LinkagespecificationContext* oxadvancedParser::linkagespecification() {
  LinkagespecificationContext *_localctx = _tracker.createInstance<LinkagespecificationContext>(_ctx, getState());
  enterRule(_localctx, 198, oxadvancedParser::RuleLinkagespecification);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1323);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 124, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1308);
      match(oxadvancedParser::Extern);
      setState(1309);
      match(oxadvancedParser::Stringliteral);
      setState(1310);
      match(oxadvancedParser::LeftBrace);
      setState(1312);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 20) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 20)) & ((1ULL << (oxadvancedParser::T__19 - 20))
        | (1ULL << (oxadvancedParser::IN - 20))
        | (1ULL << (oxadvancedParser::Auto - 20))
        | (1ULL << (oxadvancedParser::Bool - 20))
        | (1ULL << (oxadvancedParser::Class - 20))
        | (1ULL << (oxadvancedParser::Const - 20))
        | (1ULL << (oxadvancedParser::Constexpr - 20))
        | (1ULL << (oxadvancedParser::Decltype - 20))
        | (1ULL << (oxadvancedParser::Double - 20))
        | (1ULL << (oxadvancedParser::Enum - 20))
        | (1ULL << (oxadvancedParser::Explicit - 20))
        | (1ULL << (oxadvancedParser::Extern - 20))
        | (1ULL << (oxadvancedParser::Float - 20))
        | (1ULL << (oxadvancedParser::Inline - 20))
        | (1ULL << (oxadvancedParser::Int - 20))
        | (1ULL << (oxadvancedParser::Array - 20))
        | (1ULL << (oxadvancedParser::Decl - 20))
        | (1ULL << (oxadvancedParser::Long - 20))
        | (1ULL << (oxadvancedParser::Mutable - 20))
        | (1ULL << (oxadvancedParser::Namespace - 20))
        | (1ULL << (oxadvancedParser::Operator - 20))
        | (1ULL << (oxadvancedParser::Register - 20))
        | (1ULL << (oxadvancedParser::Short - 20))
        | (1ULL << (oxadvancedParser::Signed - 20))
        | (1ULL << (oxadvancedParser::Static - 20))
        | (1ULL << (oxadvancedParser::Static_assert - 20))
        | (1ULL << (oxadvancedParser::Struct - 20)))) != 0) || ((((_la - 86) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 86)) & ((1ULL << (oxadvancedParser::This - 86))
        | (1ULL << (oxadvancedParser::Typedef - 86))
        | (1ULL << (oxadvancedParser::Unsigned - 86))
        | (1ULL << (oxadvancedParser::Using - 86))
        | (1ULL << (oxadvancedParser::Virtual - 86))
        | (1ULL << (oxadvancedParser::Void - 86))
        | (1ULL << (oxadvancedParser::Volatile - 86))
        | (1ULL << (oxadvancedParser::Wchar - 86))
        | (1ULL << (oxadvancedParser::LeftParen - 86))
        | (1ULL << (oxadvancedParser::Doublecolon - 86))
        | (1ULL << (oxadvancedParser::Semi - 86))
        | (1ULL << (oxadvancedParser::Ellipsis - 86))
        | (1ULL << (oxadvancedParser::Identifier - 86)))) != 0)) {
        setState(1311);
        declarationseq(0);
      }
      setState(1314);
      match(oxadvancedParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1315);
      match(oxadvancedParser::Extern);
      setState(1316);
      match(oxadvancedParser::Stringliteral);
      setState(1317);
      declaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1318);
      match(oxadvancedParser::Extern);
      setState(1319);
      storageclassspecifier();
      setState(1320);
      match(oxadvancedParser::Stringliteral);
      setState(1321);
      declaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BalancedtokenseqContext ------------------------------------------------------------------

oxadvancedParser::BalancedtokenseqContext::BalancedtokenseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::BalancedtokenContext* oxadvancedParser::BalancedtokenseqContext::balancedtoken() {
  return getRuleContext<oxadvancedParser::BalancedtokenContext>(0);
}

oxadvancedParser::BalancedtokenseqContext* oxadvancedParser::BalancedtokenseqContext::balancedtokenseq() {
  return getRuleContext<oxadvancedParser::BalancedtokenseqContext>(0);
}


size_t oxadvancedParser::BalancedtokenseqContext::getRuleIndex() const {
  return oxadvancedParser::RuleBalancedtokenseq;
}

void oxadvancedParser::BalancedtokenseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBalancedtokenseq(this);
}

void oxadvancedParser::BalancedtokenseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBalancedtokenseq(this);
}


oxadvancedParser::BalancedtokenseqContext* oxadvancedParser::balancedtokenseq() {
   return balancedtokenseq(0);
}

oxadvancedParser::BalancedtokenseqContext* oxadvancedParser::balancedtokenseq(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::BalancedtokenseqContext *_localctx = _tracker.createInstance<BalancedtokenseqContext>(_ctx, parentState);
  oxadvancedParser::BalancedtokenseqContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 200;
  enterRecursionRule(_localctx, 200, oxadvancedParser::RuleBalancedtokenseq, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1327);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 125, _ctx)) {
    case 1: {
      setState(1326);
      balancedtoken();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(1333);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 126, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BalancedtokenseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBalancedtokenseq);
        setState(1329);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1330);
        balancedtoken(); 
      }
      setState(1335);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 126, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BalancedtokenContext ------------------------------------------------------------------

oxadvancedParser::BalancedtokenContext::BalancedtokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::BalancedtokenContext::LeftParen() {
  return getToken(oxadvancedParser::LeftParen, 0);
}

oxadvancedParser::BalancedtokenseqContext* oxadvancedParser::BalancedtokenContext::balancedtokenseq() {
  return getRuleContext<oxadvancedParser::BalancedtokenseqContext>(0);
}

tree::TerminalNode* oxadvancedParser::BalancedtokenContext::RightParen() {
  return getToken(oxadvancedParser::RightParen, 0);
}

tree::TerminalNode* oxadvancedParser::BalancedtokenContext::LeftBracket() {
  return getToken(oxadvancedParser::LeftBracket, 0);
}

tree::TerminalNode* oxadvancedParser::BalancedtokenContext::RightBracket() {
  return getToken(oxadvancedParser::RightBracket, 0);
}

tree::TerminalNode* oxadvancedParser::BalancedtokenContext::LeftBrace() {
  return getToken(oxadvancedParser::LeftBrace, 0);
}

tree::TerminalNode* oxadvancedParser::BalancedtokenContext::RightBrace() {
  return getToken(oxadvancedParser::RightBrace, 0);
}


size_t oxadvancedParser::BalancedtokenContext::getRuleIndex() const {
  return oxadvancedParser::RuleBalancedtoken;
}

void oxadvancedParser::BalancedtokenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBalancedtoken(this);
}

void oxadvancedParser::BalancedtokenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBalancedtoken(this);
}

oxadvancedParser::BalancedtokenContext* oxadvancedParser::balancedtoken() {
  BalancedtokenContext *_localctx = _tracker.createInstance<BalancedtokenContext>(_ctx, getState());
  enterRule(_localctx, 202, oxadvancedParser::RuleBalancedtoken);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1348);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case oxadvancedParser::LeftParen: {
        enterOuterAlt(_localctx, 1);
        setState(1336);
        match(oxadvancedParser::LeftParen);
        setState(1337);
        balancedtokenseq(0);
        setState(1338);
        match(oxadvancedParser::RightParen);
        break;
      }

      case oxadvancedParser::LeftBracket: {
        enterOuterAlt(_localctx, 2);
        setState(1340);
        match(oxadvancedParser::LeftBracket);
        setState(1341);
        balancedtokenseq(0);
        setState(1342);
        match(oxadvancedParser::RightBracket);
        break;
      }

      case oxadvancedParser::LeftBrace: {
        enterOuterAlt(_localctx, 3);
        setState(1344);
        match(oxadvancedParser::LeftBrace);
        setState(1345);
        balancedtokenseq(0);
        setState(1346);
        match(oxadvancedParser::RightBrace);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitdeclaratorlistContext ------------------------------------------------------------------

oxadvancedParser::InitdeclaratorlistContext::InitdeclaratorlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::InitdeclaratorContext* oxadvancedParser::InitdeclaratorlistContext::initdeclarator() {
  return getRuleContext<oxadvancedParser::InitdeclaratorContext>(0);
}

oxadvancedParser::InitdeclaratorlistContext* oxadvancedParser::InitdeclaratorlistContext::initdeclaratorlist() {
  return getRuleContext<oxadvancedParser::InitdeclaratorlistContext>(0);
}

tree::TerminalNode* oxadvancedParser::InitdeclaratorlistContext::Comma() {
  return getToken(oxadvancedParser::Comma, 0);
}


size_t oxadvancedParser::InitdeclaratorlistContext::getRuleIndex() const {
  return oxadvancedParser::RuleInitdeclaratorlist;
}

void oxadvancedParser::InitdeclaratorlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitdeclaratorlist(this);
}

void oxadvancedParser::InitdeclaratorlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitdeclaratorlist(this);
}


oxadvancedParser::InitdeclaratorlistContext* oxadvancedParser::initdeclaratorlist() {
   return initdeclaratorlist(0);
}

oxadvancedParser::InitdeclaratorlistContext* oxadvancedParser::initdeclaratorlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::InitdeclaratorlistContext *_localctx = _tracker.createInstance<InitdeclaratorlistContext>(_ctx, parentState);
  oxadvancedParser::InitdeclaratorlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 204;
  enterRecursionRule(_localctx, 204, oxadvancedParser::RuleInitdeclaratorlist, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1351);
    initdeclarator();
    _ctx->stop = _input->LT(-1);
    setState(1358);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 128, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InitdeclaratorlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInitdeclaratorlist);
        setState(1353);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1354);
        match(oxadvancedParser::Comma);
        setState(1355);
        initdeclarator(); 
      }
      setState(1360);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 128, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- InitdeclaratorContext ------------------------------------------------------------------

oxadvancedParser::InitdeclaratorContext::InitdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::DeclaratorContext* oxadvancedParser::InitdeclaratorContext::declarator() {
  return getRuleContext<oxadvancedParser::DeclaratorContext>(0);
}

oxadvancedParser::InitializerContext* oxadvancedParser::InitdeclaratorContext::initializer() {
  return getRuleContext<oxadvancedParser::InitializerContext>(0);
}


size_t oxadvancedParser::InitdeclaratorContext::getRuleIndex() const {
  return oxadvancedParser::RuleInitdeclarator;
}

void oxadvancedParser::InitdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitdeclarator(this);
}

void oxadvancedParser::InitdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitdeclarator(this);
}

oxadvancedParser::InitdeclaratorContext* oxadvancedParser::initdeclarator() {
  InitdeclaratorContext *_localctx = _tracker.createInstance<InitdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 206, oxadvancedParser::RuleInitdeclarator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1361);
    declarator();
    setState(1363);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 129, _ctx)) {
    case 1: {
      setState(1362);
      initializer();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaratorContext ------------------------------------------------------------------

oxadvancedParser::DeclaratorContext::DeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::PtrdeclaratorContext* oxadvancedParser::DeclaratorContext::ptrdeclarator() {
  return getRuleContext<oxadvancedParser::PtrdeclaratorContext>(0);
}

oxadvancedParser::NoptrdeclaratorContext* oxadvancedParser::DeclaratorContext::noptrdeclarator() {
  return getRuleContext<oxadvancedParser::NoptrdeclaratorContext>(0);
}

oxadvancedParser::ParametersWQContext* oxadvancedParser::DeclaratorContext::parametersWQ() {
  return getRuleContext<oxadvancedParser::ParametersWQContext>(0);
}

oxadvancedParser::TrailingreturntypeContext* oxadvancedParser::DeclaratorContext::trailingreturntype() {
  return getRuleContext<oxadvancedParser::TrailingreturntypeContext>(0);
}


size_t oxadvancedParser::DeclaratorContext::getRuleIndex() const {
  return oxadvancedParser::RuleDeclarator;
}

void oxadvancedParser::DeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarator(this);
}

void oxadvancedParser::DeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarator(this);
}

oxadvancedParser::DeclaratorContext* oxadvancedParser::declarator() {
  DeclaratorContext *_localctx = _tracker.createInstance<DeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 208, oxadvancedParser::RuleDeclarator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1370);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 130, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1365);
      ptrdeclarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1366);
      noptrdeclarator(0);
      setState(1367);
      parametersWQ();
      setState(1368);
      trailingreturntype();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PtrdeclaratorContext ------------------------------------------------------------------

oxadvancedParser::PtrdeclaratorContext::PtrdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::NoptrdeclaratorContext* oxadvancedParser::PtrdeclaratorContext::noptrdeclarator() {
  return getRuleContext<oxadvancedParser::NoptrdeclaratorContext>(0);
}


size_t oxadvancedParser::PtrdeclaratorContext::getRuleIndex() const {
  return oxadvancedParser::RulePtrdeclarator;
}

void oxadvancedParser::PtrdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPtrdeclarator(this);
}

void oxadvancedParser::PtrdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPtrdeclarator(this);
}

oxadvancedParser::PtrdeclaratorContext* oxadvancedParser::ptrdeclarator() {
  PtrdeclaratorContext *_localctx = _tracker.createInstance<PtrdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 210, oxadvancedParser::RulePtrdeclarator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1372);
    noptrdeclarator(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoptrdeclaratorContext ------------------------------------------------------------------

oxadvancedParser::NoptrdeclaratorContext::NoptrdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::DeclaratoridContext* oxadvancedParser::NoptrdeclaratorContext::declaratorid() {
  return getRuleContext<oxadvancedParser::DeclaratoridContext>(0);
}

tree::TerminalNode* oxadvancedParser::NoptrdeclaratorContext::LeftParen() {
  return getToken(oxadvancedParser::LeftParen, 0);
}

oxadvancedParser::PtrdeclaratorContext* oxadvancedParser::NoptrdeclaratorContext::ptrdeclarator() {
  return getRuleContext<oxadvancedParser::PtrdeclaratorContext>(0);
}

tree::TerminalNode* oxadvancedParser::NoptrdeclaratorContext::RightParen() {
  return getToken(oxadvancedParser::RightParen, 0);
}

oxadvancedParser::NoptrdeclaratorContext* oxadvancedParser::NoptrdeclaratorContext::noptrdeclarator() {
  return getRuleContext<oxadvancedParser::NoptrdeclaratorContext>(0);
}

oxadvancedParser::ParametersWQContext* oxadvancedParser::NoptrdeclaratorContext::parametersWQ() {
  return getRuleContext<oxadvancedParser::ParametersWQContext>(0);
}

tree::TerminalNode* oxadvancedParser::NoptrdeclaratorContext::LeftBracket() {
  return getToken(oxadvancedParser::LeftBracket, 0);
}

tree::TerminalNode* oxadvancedParser::NoptrdeclaratorContext::RightBracket() {
  return getToken(oxadvancedParser::RightBracket, 0);
}

oxadvancedParser::ConstantexpressionContext* oxadvancedParser::NoptrdeclaratorContext::constantexpression() {
  return getRuleContext<oxadvancedParser::ConstantexpressionContext>(0);
}


size_t oxadvancedParser::NoptrdeclaratorContext::getRuleIndex() const {
  return oxadvancedParser::RuleNoptrdeclarator;
}

void oxadvancedParser::NoptrdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoptrdeclarator(this);
}

void oxadvancedParser::NoptrdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoptrdeclarator(this);
}


oxadvancedParser::NoptrdeclaratorContext* oxadvancedParser::noptrdeclarator() {
   return noptrdeclarator(0);
}

oxadvancedParser::NoptrdeclaratorContext* oxadvancedParser::noptrdeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::NoptrdeclaratorContext *_localctx = _tracker.createInstance<NoptrdeclaratorContext>(_ctx, parentState);
  oxadvancedParser::NoptrdeclaratorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 212;
  enterRecursionRule(_localctx, 212, oxadvancedParser::RuleNoptrdeclarator, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1380);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case oxadvancedParser::IN:
      case oxadvancedParser::Array:
      case oxadvancedParser::Operator:
      case oxadvancedParser::This:
      case oxadvancedParser::Doublecolon:
      case oxadvancedParser::Ellipsis:
      case oxadvancedParser::Identifier: {
        setState(1375);
        declaratorid();
        break;
      }

      case oxadvancedParser::LeftParen: {
        setState(1376);
        match(oxadvancedParser::LeftParen);
        setState(1377);
        ptrdeclarator();
        setState(1378);
        match(oxadvancedParser::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(1392);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 134, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1390);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 133, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NoptrdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrdeclarator);
          setState(1382);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1383);
          parametersWQ();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NoptrdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrdeclarator);
          setState(1384);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1385);
          match(oxadvancedParser::LeftBracket);
          setState(1387);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << oxadvancedParser::IN)
            | (1ULL << oxadvancedParser::Auto)
            | (1ULL << oxadvancedParser::Bool)
            | (1ULL << oxadvancedParser::Decltype)
            | (1ULL << oxadvancedParser::Delete)
            | (1ULL << oxadvancedParser::Double)
            | (1ULL << oxadvancedParser::False)
            | (1ULL << oxadvancedParser::Float)
            | (1ULL << oxadvancedParser::Int)
            | (1ULL << oxadvancedParser::Array)
            | (1ULL << oxadvancedParser::Decl)
            | (1ULL << oxadvancedParser::Long))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 66)) & ((1ULL << (oxadvancedParser::New - 66))
            | (1ULL << (oxadvancedParser::Nullptr - 66))
            | (1ULL << (oxadvancedParser::Operator - 66))
            | (1ULL << (oxadvancedParser::Short - 66))
            | (1ULL << (oxadvancedParser::Signed - 66))
            | (1ULL << (oxadvancedParser::This - 66))
            | (1ULL << (oxadvancedParser::True - 66))
            | (1ULL << (oxadvancedParser::Unsigned - 66))
            | (1ULL << (oxadvancedParser::Void - 66))
            | (1ULL << (oxadvancedParser::Wchar - 66))
            | (1ULL << (oxadvancedParser::LeftParen - 66))
            | (1ULL << (oxadvancedParser::LeftBracket - 66))
            | (1ULL << (oxadvancedParser::LeftBrace - 66))
            | (1ULL << (oxadvancedParser::Plus - 66))
            | (1ULL << (oxadvancedParser::Minus - 66))
            | (1ULL << (oxadvancedParser::Star - 66))
            | (1ULL << (oxadvancedParser::And - 66))
            | (1ULL << (oxadvancedParser::Or - 66))
            | (1ULL << (oxadvancedParser::Not - 66))
            | (1ULL << (oxadvancedParser::Less - 66)))) != 0) || ((((_la - 137) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 137)) & ((1ULL << (oxadvancedParser::PlusPlus - 137))
            | (1ULL << (oxadvancedParser::MinusMinus - 137))
            | (1ULL << (oxadvancedParser::Doublecolon - 137))
            | (1ULL << (oxadvancedParser::Dot - 137))
            | (1ULL << (oxadvancedParser::Identifier - 137))
            | (1ULL << (oxadvancedParser::Integerliteral - 137))
            | (1ULL << (oxadvancedParser::Characterliteral - 137))
            | (1ULL << (oxadvancedParser::Floatingliteral - 137))
            | (1ULL << (oxadvancedParser::Stringliteral - 137))
            | (1ULL << (oxadvancedParser::Userdefinedintegerliteral - 137))
            | (1ULL << (oxadvancedParser::Userdefinedfloatingliteral - 137))
            | (1ULL << (oxadvancedParser::Userdefinedstringliteral - 137))
            | (1ULL << (oxadvancedParser::Userdefinedcharacterliteral - 137)))) != 0)) {
            setState(1386);
            constantexpression();
          }
          setState(1389);
          match(oxadvancedParser::RightBracket);
          break;
        }

        default:
          break;
        } 
      }
      setState(1394);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 134, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParametersandqualifiersContext ------------------------------------------------------------------

oxadvancedParser::ParametersandqualifiersContext::ParametersandqualifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::ParametersandqualifiersContext::LeftParen() {
  return getToken(oxadvancedParser::LeftParen, 0);
}

oxadvancedParser::ParameterdeclarationlistContext* oxadvancedParser::ParametersandqualifiersContext::parameterdeclarationlist() {
  return getRuleContext<oxadvancedParser::ParameterdeclarationlistContext>(0);
}

tree::TerminalNode* oxadvancedParser::ParametersandqualifiersContext::RightParen() {
  return getToken(oxadvancedParser::RightParen, 0);
}

oxadvancedParser::CvqualifierseqContext* oxadvancedParser::ParametersandqualifiersContext::cvqualifierseq() {
  return getRuleContext<oxadvancedParser::CvqualifierseqContext>(0);
}


size_t oxadvancedParser::ParametersandqualifiersContext::getRuleIndex() const {
  return oxadvancedParser::RuleParametersandqualifiers;
}

void oxadvancedParser::ParametersandqualifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParametersandqualifiers(this);
}

void oxadvancedParser::ParametersandqualifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParametersandqualifiers(this);
}

oxadvancedParser::ParametersandqualifiersContext* oxadvancedParser::parametersandqualifiers() {
  ParametersandqualifiersContext *_localctx = _tracker.createInstance<ParametersandqualifiersContext>(_ctx, getState());
  enterRule(_localctx, 214, oxadvancedParser::RuleParametersandqualifiers);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1395);
    match(oxadvancedParser::LeftParen);
    setState(1396);
    parameterdeclarationlist(0);
    setState(1397);
    match(oxadvancedParser::RightParen);
    setState(1399);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 135, _ctx)) {
    case 1: {
      setState(1398);
      cvqualifierseq();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametersWQContext ------------------------------------------------------------------

oxadvancedParser::ParametersWQContext::ParametersWQContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::ParametersWQContext::LeftParen() {
  return getToken(oxadvancedParser::LeftParen, 0);
}

oxadvancedParser::ParameterWQdeclarationclauseContext* oxadvancedParser::ParametersWQContext::parameterWQdeclarationclause() {
  return getRuleContext<oxadvancedParser::ParameterWQdeclarationclauseContext>(0);
}

tree::TerminalNode* oxadvancedParser::ParametersWQContext::RightParen() {
  return getToken(oxadvancedParser::RightParen, 0);
}


size_t oxadvancedParser::ParametersWQContext::getRuleIndex() const {
  return oxadvancedParser::RuleParametersWQ;
}

void oxadvancedParser::ParametersWQContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParametersWQ(this);
}

void oxadvancedParser::ParametersWQContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParametersWQ(this);
}

oxadvancedParser::ParametersWQContext* oxadvancedParser::parametersWQ() {
  ParametersWQContext *_localctx = _tracker.createInstance<ParametersWQContext>(_ctx, getState());
  enterRule(_localctx, 216, oxadvancedParser::RuleParametersWQ);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1401);
    match(oxadvancedParser::LeftParen);
    setState(1402);
    parameterWQdeclarationclause();
    setState(1403);
    match(oxadvancedParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailingreturntypeContext ------------------------------------------------------------------

oxadvancedParser::TrailingreturntypeContext::TrailingreturntypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::TrailingreturntypeContext::Arrow() {
  return getToken(oxadvancedParser::Arrow, 0);
}

oxadvancedParser::TrailingtypespecifierseqContext* oxadvancedParser::TrailingreturntypeContext::trailingtypespecifierseq() {
  return getRuleContext<oxadvancedParser::TrailingtypespecifierseqContext>(0);
}

oxadvancedParser::AbstractdeclaratorContext* oxadvancedParser::TrailingreturntypeContext::abstractdeclarator() {
  return getRuleContext<oxadvancedParser::AbstractdeclaratorContext>(0);
}


size_t oxadvancedParser::TrailingreturntypeContext::getRuleIndex() const {
  return oxadvancedParser::RuleTrailingreturntype;
}

void oxadvancedParser::TrailingreturntypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrailingreturntype(this);
}

void oxadvancedParser::TrailingreturntypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrailingreturntype(this);
}

oxadvancedParser::TrailingreturntypeContext* oxadvancedParser::trailingreturntype() {
  TrailingreturntypeContext *_localctx = _tracker.createInstance<TrailingreturntypeContext>(_ctx, getState());
  enterRule(_localctx, 218, oxadvancedParser::RuleTrailingreturntype);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1405);
    match(oxadvancedParser::Arrow);
    setState(1406);
    trailingtypespecifierseq();
    setState(1408);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 136, _ctx)) {
    case 1: {
      setState(1407);
      abstractdeclarator();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CvqualifierseqContext ------------------------------------------------------------------

oxadvancedParser::CvqualifierseqContext::CvqualifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::CvqualifierContext* oxadvancedParser::CvqualifierseqContext::cvqualifier() {
  return getRuleContext<oxadvancedParser::CvqualifierContext>(0);
}

oxadvancedParser::CvqualifierseqContext* oxadvancedParser::CvqualifierseqContext::cvqualifierseq() {
  return getRuleContext<oxadvancedParser::CvqualifierseqContext>(0);
}


size_t oxadvancedParser::CvqualifierseqContext::getRuleIndex() const {
  return oxadvancedParser::RuleCvqualifierseq;
}

void oxadvancedParser::CvqualifierseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCvqualifierseq(this);
}

void oxadvancedParser::CvqualifierseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCvqualifierseq(this);
}

oxadvancedParser::CvqualifierseqContext* oxadvancedParser::cvqualifierseq() {
  CvqualifierseqContext *_localctx = _tracker.createInstance<CvqualifierseqContext>(_ctx, getState());
  enterRule(_localctx, 220, oxadvancedParser::RuleCvqualifierseq);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1410);
    cvqualifier();
    setState(1412);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 137, _ctx)) {
    case 1: {
      setState(1411);
      cvqualifierseq();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CvqualifierContext ------------------------------------------------------------------

oxadvancedParser::CvqualifierContext::CvqualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::CvqualifierContext::Const() {
  return getToken(oxadvancedParser::Const, 0);
}

tree::TerminalNode* oxadvancedParser::CvqualifierContext::Volatile() {
  return getToken(oxadvancedParser::Volatile, 0);
}


size_t oxadvancedParser::CvqualifierContext::getRuleIndex() const {
  return oxadvancedParser::RuleCvqualifier;
}

void oxadvancedParser::CvqualifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCvqualifier(this);
}

void oxadvancedParser::CvqualifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCvqualifier(this);
}

oxadvancedParser::CvqualifierContext* oxadvancedParser::cvqualifier() {
  CvqualifierContext *_localctx = _tracker.createInstance<CvqualifierContext>(_ctx, getState());
  enterRule(_localctx, 222, oxadvancedParser::RuleCvqualifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1414);
    _la = _input->LA(1);
    if (!(_la == oxadvancedParser::Const

    || _la == oxadvancedParser::Volatile)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaratoridContext ------------------------------------------------------------------

oxadvancedParser::DeclaratoridContext::DeclaratoridContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::IdexpressionContext* oxadvancedParser::DeclaratoridContext::idexpression() {
  return getRuleContext<oxadvancedParser::IdexpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::DeclaratoridContext::Ellipsis() {
  return getToken(oxadvancedParser::Ellipsis, 0);
}


size_t oxadvancedParser::DeclaratoridContext::getRuleIndex() const {
  return oxadvancedParser::RuleDeclaratorid;
}

void oxadvancedParser::DeclaratoridContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaratorid(this);
}

void oxadvancedParser::DeclaratoridContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaratorid(this);
}

oxadvancedParser::DeclaratoridContext* oxadvancedParser::declaratorid() {
  DeclaratoridContext *_localctx = _tracker.createInstance<DeclaratoridContext>(_ctx, getState());
  enterRule(_localctx, 224, oxadvancedParser::RuleDeclaratorid);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1417);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == oxadvancedParser::Ellipsis) {
      setState(1416);
      match(oxadvancedParser::Ellipsis);
    }
    setState(1419);
    idexpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThetypeidContext ------------------------------------------------------------------

oxadvancedParser::ThetypeidContext::ThetypeidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::TypespecifierseqContext* oxadvancedParser::ThetypeidContext::typespecifierseq() {
  return getRuleContext<oxadvancedParser::TypespecifierseqContext>(0);
}

oxadvancedParser::AbstractdeclaratorContext* oxadvancedParser::ThetypeidContext::abstractdeclarator() {
  return getRuleContext<oxadvancedParser::AbstractdeclaratorContext>(0);
}


size_t oxadvancedParser::ThetypeidContext::getRuleIndex() const {
  return oxadvancedParser::RuleThetypeid;
}

void oxadvancedParser::ThetypeidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThetypeid(this);
}

void oxadvancedParser::ThetypeidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThetypeid(this);
}

oxadvancedParser::ThetypeidContext* oxadvancedParser::thetypeid() {
  ThetypeidContext *_localctx = _tracker.createInstance<ThetypeidContext>(_ctx, getState());
  enterRule(_localctx, 226, oxadvancedParser::RuleThetypeid);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1421);
    typespecifierseq();
    setState(1423);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 101) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 101)) & ((1ULL << (oxadvancedParser::LeftParen - 101))
      | (1ULL << (oxadvancedParser::LeftBracket - 101))
      | (1ULL << (oxadvancedParser::Ellipsis - 101)))) != 0)) {
      setState(1422);
      abstractdeclarator();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AbstractdeclaratorContext ------------------------------------------------------------------

oxadvancedParser::AbstractdeclaratorContext::AbstractdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::PtrabstractdeclaratorContext* oxadvancedParser::AbstractdeclaratorContext::ptrabstractdeclarator() {
  return getRuleContext<oxadvancedParser::PtrabstractdeclaratorContext>(0);
}

oxadvancedParser::ParametersandqualifiersContext* oxadvancedParser::AbstractdeclaratorContext::parametersandqualifiers() {
  return getRuleContext<oxadvancedParser::ParametersandqualifiersContext>(0);
}

oxadvancedParser::TrailingreturntypeContext* oxadvancedParser::AbstractdeclaratorContext::trailingreturntype() {
  return getRuleContext<oxadvancedParser::TrailingreturntypeContext>(0);
}

oxadvancedParser::NoptrabstractdeclaratorContext* oxadvancedParser::AbstractdeclaratorContext::noptrabstractdeclarator() {
  return getRuleContext<oxadvancedParser::NoptrabstractdeclaratorContext>(0);
}

oxadvancedParser::AbstractpackdeclaratorContext* oxadvancedParser::AbstractdeclaratorContext::abstractpackdeclarator() {
  return getRuleContext<oxadvancedParser::AbstractpackdeclaratorContext>(0);
}


size_t oxadvancedParser::AbstractdeclaratorContext::getRuleIndex() const {
  return oxadvancedParser::RuleAbstractdeclarator;
}

void oxadvancedParser::AbstractdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbstractdeclarator(this);
}

void oxadvancedParser::AbstractdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbstractdeclarator(this);
}

oxadvancedParser::AbstractdeclaratorContext* oxadvancedParser::abstractdeclarator() {
  AbstractdeclaratorContext *_localctx = _tracker.createInstance<AbstractdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 228, oxadvancedParser::RuleAbstractdeclarator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1433);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1425);
      ptrabstractdeclarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1427);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 140, _ctx)) {
      case 1: {
        setState(1426);
        noptrabstractdeclarator(0);
        break;
      }

      default:
        break;
      }
      setState(1429);
      parametersandqualifiers();
      setState(1430);
      trailingreturntype();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1432);
      abstractpackdeclarator();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PtrabstractdeclaratorContext ------------------------------------------------------------------

oxadvancedParser::PtrabstractdeclaratorContext::PtrabstractdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::NoptrabstractdeclaratorContext* oxadvancedParser::PtrabstractdeclaratorContext::noptrabstractdeclarator() {
  return getRuleContext<oxadvancedParser::NoptrabstractdeclaratorContext>(0);
}


size_t oxadvancedParser::PtrabstractdeclaratorContext::getRuleIndex() const {
  return oxadvancedParser::RulePtrabstractdeclarator;
}

void oxadvancedParser::PtrabstractdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPtrabstractdeclarator(this);
}

void oxadvancedParser::PtrabstractdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPtrabstractdeclarator(this);
}

oxadvancedParser::PtrabstractdeclaratorContext* oxadvancedParser::ptrabstractdeclarator() {
  PtrabstractdeclaratorContext *_localctx = _tracker.createInstance<PtrabstractdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 230, oxadvancedParser::RulePtrabstractdeclarator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1435);
    noptrabstractdeclarator(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoptrabstractdeclaratorContext ------------------------------------------------------------------

oxadvancedParser::NoptrabstractdeclaratorContext::NoptrabstractdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::ParametersandqualifiersContext* oxadvancedParser::NoptrabstractdeclaratorContext::parametersandqualifiers() {
  return getRuleContext<oxadvancedParser::ParametersandqualifiersContext>(0);
}

tree::TerminalNode* oxadvancedParser::NoptrabstractdeclaratorContext::LeftBracket() {
  return getToken(oxadvancedParser::LeftBracket, 0);
}

tree::TerminalNode* oxadvancedParser::NoptrabstractdeclaratorContext::RightBracket() {
  return getToken(oxadvancedParser::RightBracket, 0);
}

oxadvancedParser::ConstantexpressionContext* oxadvancedParser::NoptrabstractdeclaratorContext::constantexpression() {
  return getRuleContext<oxadvancedParser::ConstantexpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::NoptrabstractdeclaratorContext::LeftParen() {
  return getToken(oxadvancedParser::LeftParen, 0);
}

oxadvancedParser::PtrabstractdeclaratorContext* oxadvancedParser::NoptrabstractdeclaratorContext::ptrabstractdeclarator() {
  return getRuleContext<oxadvancedParser::PtrabstractdeclaratorContext>(0);
}

tree::TerminalNode* oxadvancedParser::NoptrabstractdeclaratorContext::RightParen() {
  return getToken(oxadvancedParser::RightParen, 0);
}

oxadvancedParser::NoptrabstractdeclaratorContext* oxadvancedParser::NoptrabstractdeclaratorContext::noptrabstractdeclarator() {
  return getRuleContext<oxadvancedParser::NoptrabstractdeclaratorContext>(0);
}


size_t oxadvancedParser::NoptrabstractdeclaratorContext::getRuleIndex() const {
  return oxadvancedParser::RuleNoptrabstractdeclarator;
}

void oxadvancedParser::NoptrabstractdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoptrabstractdeclarator(this);
}

void oxadvancedParser::NoptrabstractdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoptrabstractdeclarator(this);
}


oxadvancedParser::NoptrabstractdeclaratorContext* oxadvancedParser::noptrabstractdeclarator() {
   return noptrabstractdeclarator(0);
}

oxadvancedParser::NoptrabstractdeclaratorContext* oxadvancedParser::noptrabstractdeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::NoptrabstractdeclaratorContext *_localctx = _tracker.createInstance<NoptrabstractdeclaratorContext>(_ctx, parentState);
  oxadvancedParser::NoptrabstractdeclaratorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 232;
  enterRecursionRule(_localctx, 232, oxadvancedParser::RuleNoptrabstractdeclarator, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1448);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 143, _ctx)) {
    case 1: {
      setState(1438);
      parametersandqualifiers();
      break;
    }

    case 2: {
      setState(1439);
      match(oxadvancedParser::LeftBracket);
      setState(1441);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << oxadvancedParser::IN)
        | (1ULL << oxadvancedParser::Auto)
        | (1ULL << oxadvancedParser::Bool)
        | (1ULL << oxadvancedParser::Decltype)
        | (1ULL << oxadvancedParser::Delete)
        | (1ULL << oxadvancedParser::Double)
        | (1ULL << oxadvancedParser::False)
        | (1ULL << oxadvancedParser::Float)
        | (1ULL << oxadvancedParser::Int)
        | (1ULL << oxadvancedParser::Array)
        | (1ULL << oxadvancedParser::Decl)
        | (1ULL << oxadvancedParser::Long))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (oxadvancedParser::New - 66))
        | (1ULL << (oxadvancedParser::Nullptr - 66))
        | (1ULL << (oxadvancedParser::Operator - 66))
        | (1ULL << (oxadvancedParser::Short - 66))
        | (1ULL << (oxadvancedParser::Signed - 66))
        | (1ULL << (oxadvancedParser::This - 66))
        | (1ULL << (oxadvancedParser::True - 66))
        | (1ULL << (oxadvancedParser::Unsigned - 66))
        | (1ULL << (oxadvancedParser::Void - 66))
        | (1ULL << (oxadvancedParser::Wchar - 66))
        | (1ULL << (oxadvancedParser::LeftParen - 66))
        | (1ULL << (oxadvancedParser::LeftBracket - 66))
        | (1ULL << (oxadvancedParser::LeftBrace - 66))
        | (1ULL << (oxadvancedParser::Plus - 66))
        | (1ULL << (oxadvancedParser::Minus - 66))
        | (1ULL << (oxadvancedParser::Star - 66))
        | (1ULL << (oxadvancedParser::And - 66))
        | (1ULL << (oxadvancedParser::Or - 66))
        | (1ULL << (oxadvancedParser::Not - 66))
        | (1ULL << (oxadvancedParser::Less - 66)))) != 0) || ((((_la - 137) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 137)) & ((1ULL << (oxadvancedParser::PlusPlus - 137))
        | (1ULL << (oxadvancedParser::MinusMinus - 137))
        | (1ULL << (oxadvancedParser::Doublecolon - 137))
        | (1ULL << (oxadvancedParser::Dot - 137))
        | (1ULL << (oxadvancedParser::Identifier - 137))
        | (1ULL << (oxadvancedParser::Integerliteral - 137))
        | (1ULL << (oxadvancedParser::Characterliteral - 137))
        | (1ULL << (oxadvancedParser::Floatingliteral - 137))
        | (1ULL << (oxadvancedParser::Stringliteral - 137))
        | (1ULL << (oxadvancedParser::Userdefinedintegerliteral - 137))
        | (1ULL << (oxadvancedParser::Userdefinedfloatingliteral - 137))
        | (1ULL << (oxadvancedParser::Userdefinedstringliteral - 137))
        | (1ULL << (oxadvancedParser::Userdefinedcharacterliteral - 137)))) != 0)) {
        setState(1440);
        constantexpression();
      }
      setState(1443);
      match(oxadvancedParser::RightBracket);
      break;
    }

    case 3: {
      setState(1444);
      match(oxadvancedParser::LeftParen);
      setState(1445);
      ptrabstractdeclarator();
      setState(1446);
      match(oxadvancedParser::RightParen);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(1460);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 146, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1458);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 145, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NoptrabstractdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrabstractdeclarator);
          setState(1450);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(1451);
          parametersandqualifiers();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NoptrabstractdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrabstractdeclarator);
          setState(1452);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1453);
          match(oxadvancedParser::LeftBracket);
          setState(1455);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << oxadvancedParser::IN)
            | (1ULL << oxadvancedParser::Auto)
            | (1ULL << oxadvancedParser::Bool)
            | (1ULL << oxadvancedParser::Decltype)
            | (1ULL << oxadvancedParser::Delete)
            | (1ULL << oxadvancedParser::Double)
            | (1ULL << oxadvancedParser::False)
            | (1ULL << oxadvancedParser::Float)
            | (1ULL << oxadvancedParser::Int)
            | (1ULL << oxadvancedParser::Array)
            | (1ULL << oxadvancedParser::Decl)
            | (1ULL << oxadvancedParser::Long))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 66)) & ((1ULL << (oxadvancedParser::New - 66))
            | (1ULL << (oxadvancedParser::Nullptr - 66))
            | (1ULL << (oxadvancedParser::Operator - 66))
            | (1ULL << (oxadvancedParser::Short - 66))
            | (1ULL << (oxadvancedParser::Signed - 66))
            | (1ULL << (oxadvancedParser::This - 66))
            | (1ULL << (oxadvancedParser::True - 66))
            | (1ULL << (oxadvancedParser::Unsigned - 66))
            | (1ULL << (oxadvancedParser::Void - 66))
            | (1ULL << (oxadvancedParser::Wchar - 66))
            | (1ULL << (oxadvancedParser::LeftParen - 66))
            | (1ULL << (oxadvancedParser::LeftBracket - 66))
            | (1ULL << (oxadvancedParser::LeftBrace - 66))
            | (1ULL << (oxadvancedParser::Plus - 66))
            | (1ULL << (oxadvancedParser::Minus - 66))
            | (1ULL << (oxadvancedParser::Star - 66))
            | (1ULL << (oxadvancedParser::And - 66))
            | (1ULL << (oxadvancedParser::Or - 66))
            | (1ULL << (oxadvancedParser::Not - 66))
            | (1ULL << (oxadvancedParser::Less - 66)))) != 0) || ((((_la - 137) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 137)) & ((1ULL << (oxadvancedParser::PlusPlus - 137))
            | (1ULL << (oxadvancedParser::MinusMinus - 137))
            | (1ULL << (oxadvancedParser::Doublecolon - 137))
            | (1ULL << (oxadvancedParser::Dot - 137))
            | (1ULL << (oxadvancedParser::Identifier - 137))
            | (1ULL << (oxadvancedParser::Integerliteral - 137))
            | (1ULL << (oxadvancedParser::Characterliteral - 137))
            | (1ULL << (oxadvancedParser::Floatingliteral - 137))
            | (1ULL << (oxadvancedParser::Stringliteral - 137))
            | (1ULL << (oxadvancedParser::Userdefinedintegerliteral - 137))
            | (1ULL << (oxadvancedParser::Userdefinedfloatingliteral - 137))
            | (1ULL << (oxadvancedParser::Userdefinedstringliteral - 137))
            | (1ULL << (oxadvancedParser::Userdefinedcharacterliteral - 137)))) != 0)) {
            setState(1454);
            constantexpression();
          }
          setState(1457);
          match(oxadvancedParser::RightBracket);
          break;
        }

        default:
          break;
        } 
      }
      setState(1462);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 146, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AbstractpackdeclaratorContext ------------------------------------------------------------------

oxadvancedParser::AbstractpackdeclaratorContext::AbstractpackdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::NoptrabstractpackdeclaratorContext* oxadvancedParser::AbstractpackdeclaratorContext::noptrabstractpackdeclarator() {
  return getRuleContext<oxadvancedParser::NoptrabstractpackdeclaratorContext>(0);
}


size_t oxadvancedParser::AbstractpackdeclaratorContext::getRuleIndex() const {
  return oxadvancedParser::RuleAbstractpackdeclarator;
}

void oxadvancedParser::AbstractpackdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbstractpackdeclarator(this);
}

void oxadvancedParser::AbstractpackdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbstractpackdeclarator(this);
}

oxadvancedParser::AbstractpackdeclaratorContext* oxadvancedParser::abstractpackdeclarator() {
  AbstractpackdeclaratorContext *_localctx = _tracker.createInstance<AbstractpackdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 234, oxadvancedParser::RuleAbstractpackdeclarator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1463);
    noptrabstractpackdeclarator(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoptrabstractpackdeclaratorContext ------------------------------------------------------------------

oxadvancedParser::NoptrabstractpackdeclaratorContext::NoptrabstractpackdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::NoptrabstractpackdeclaratorContext::Ellipsis() {
  return getToken(oxadvancedParser::Ellipsis, 0);
}

oxadvancedParser::NoptrabstractpackdeclaratorContext* oxadvancedParser::NoptrabstractpackdeclaratorContext::noptrabstractpackdeclarator() {
  return getRuleContext<oxadvancedParser::NoptrabstractpackdeclaratorContext>(0);
}

oxadvancedParser::ParametersandqualifiersContext* oxadvancedParser::NoptrabstractpackdeclaratorContext::parametersandqualifiers() {
  return getRuleContext<oxadvancedParser::ParametersandqualifiersContext>(0);
}

tree::TerminalNode* oxadvancedParser::NoptrabstractpackdeclaratorContext::LeftBracket() {
  return getToken(oxadvancedParser::LeftBracket, 0);
}

tree::TerminalNode* oxadvancedParser::NoptrabstractpackdeclaratorContext::RightBracket() {
  return getToken(oxadvancedParser::RightBracket, 0);
}

oxadvancedParser::ConstantexpressionContext* oxadvancedParser::NoptrabstractpackdeclaratorContext::constantexpression() {
  return getRuleContext<oxadvancedParser::ConstantexpressionContext>(0);
}


size_t oxadvancedParser::NoptrabstractpackdeclaratorContext::getRuleIndex() const {
  return oxadvancedParser::RuleNoptrabstractpackdeclarator;
}

void oxadvancedParser::NoptrabstractpackdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoptrabstractpackdeclarator(this);
}

void oxadvancedParser::NoptrabstractpackdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoptrabstractpackdeclarator(this);
}


oxadvancedParser::NoptrabstractpackdeclaratorContext* oxadvancedParser::noptrabstractpackdeclarator() {
   return noptrabstractpackdeclarator(0);
}

oxadvancedParser::NoptrabstractpackdeclaratorContext* oxadvancedParser::noptrabstractpackdeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::NoptrabstractpackdeclaratorContext *_localctx = _tracker.createInstance<NoptrabstractpackdeclaratorContext>(_ctx, parentState);
  oxadvancedParser::NoptrabstractpackdeclaratorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 236;
  enterRecursionRule(_localctx, 236, oxadvancedParser::RuleNoptrabstractpackdeclarator, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1466);
    match(oxadvancedParser::Ellipsis);
    _ctx->stop = _input->LT(-1);
    setState(1478);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 149, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1476);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 148, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NoptrabstractpackdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrabstractpackdeclarator);
          setState(1468);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1469);
          parametersandqualifiers();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NoptrabstractpackdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrabstractpackdeclarator);
          setState(1470);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1471);
          match(oxadvancedParser::LeftBracket);
          setState(1473);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << oxadvancedParser::IN)
            | (1ULL << oxadvancedParser::Auto)
            | (1ULL << oxadvancedParser::Bool)
            | (1ULL << oxadvancedParser::Decltype)
            | (1ULL << oxadvancedParser::Delete)
            | (1ULL << oxadvancedParser::Double)
            | (1ULL << oxadvancedParser::False)
            | (1ULL << oxadvancedParser::Float)
            | (1ULL << oxadvancedParser::Int)
            | (1ULL << oxadvancedParser::Array)
            | (1ULL << oxadvancedParser::Decl)
            | (1ULL << oxadvancedParser::Long))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 66)) & ((1ULL << (oxadvancedParser::New - 66))
            | (1ULL << (oxadvancedParser::Nullptr - 66))
            | (1ULL << (oxadvancedParser::Operator - 66))
            | (1ULL << (oxadvancedParser::Short - 66))
            | (1ULL << (oxadvancedParser::Signed - 66))
            | (1ULL << (oxadvancedParser::This - 66))
            | (1ULL << (oxadvancedParser::True - 66))
            | (1ULL << (oxadvancedParser::Unsigned - 66))
            | (1ULL << (oxadvancedParser::Void - 66))
            | (1ULL << (oxadvancedParser::Wchar - 66))
            | (1ULL << (oxadvancedParser::LeftParen - 66))
            | (1ULL << (oxadvancedParser::LeftBracket - 66))
            | (1ULL << (oxadvancedParser::LeftBrace - 66))
            | (1ULL << (oxadvancedParser::Plus - 66))
            | (1ULL << (oxadvancedParser::Minus - 66))
            | (1ULL << (oxadvancedParser::Star - 66))
            | (1ULL << (oxadvancedParser::And - 66))
            | (1ULL << (oxadvancedParser::Or - 66))
            | (1ULL << (oxadvancedParser::Not - 66))
            | (1ULL << (oxadvancedParser::Less - 66)))) != 0) || ((((_la - 137) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 137)) & ((1ULL << (oxadvancedParser::PlusPlus - 137))
            | (1ULL << (oxadvancedParser::MinusMinus - 137))
            | (1ULL << (oxadvancedParser::Doublecolon - 137))
            | (1ULL << (oxadvancedParser::Dot - 137))
            | (1ULL << (oxadvancedParser::Identifier - 137))
            | (1ULL << (oxadvancedParser::Integerliteral - 137))
            | (1ULL << (oxadvancedParser::Characterliteral - 137))
            | (1ULL << (oxadvancedParser::Floatingliteral - 137))
            | (1ULL << (oxadvancedParser::Stringliteral - 137))
            | (1ULL << (oxadvancedParser::Userdefinedintegerliteral - 137))
            | (1ULL << (oxadvancedParser::Userdefinedfloatingliteral - 137))
            | (1ULL << (oxadvancedParser::Userdefinedstringliteral - 137))
            | (1ULL << (oxadvancedParser::Userdefinedcharacterliteral - 137)))) != 0)) {
            setState(1472);
            constantexpression();
          }
          setState(1475);
          match(oxadvancedParser::RightBracket);
          break;
        }

        default:
          break;
        } 
      }
      setState(1480);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 149, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParameterWQdeclarationclauseContext ------------------------------------------------------------------

oxadvancedParser::ParameterWQdeclarationclauseContext::ParameterWQdeclarationclauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::ParameterWQdeclarationlistContext* oxadvancedParser::ParameterWQdeclarationclauseContext::parameterWQdeclarationlist() {
  return getRuleContext<oxadvancedParser::ParameterWQdeclarationlistContext>(0);
}

tree::TerminalNode* oxadvancedParser::ParameterWQdeclarationclauseContext::Ellipsis() {
  return getToken(oxadvancedParser::Ellipsis, 0);
}

tree::TerminalNode* oxadvancedParser::ParameterWQdeclarationclauseContext::Comma() {
  return getToken(oxadvancedParser::Comma, 0);
}


size_t oxadvancedParser::ParameterWQdeclarationclauseContext::getRuleIndex() const {
  return oxadvancedParser::RuleParameterWQdeclarationclause;
}

void oxadvancedParser::ParameterWQdeclarationclauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterWQdeclarationclause(this);
}

void oxadvancedParser::ParameterWQdeclarationclauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterWQdeclarationclause(this);
}

oxadvancedParser::ParameterWQdeclarationclauseContext* oxadvancedParser::parameterWQdeclarationclause() {
  ParameterWQdeclarationclauseContext *_localctx = _tracker.createInstance<ParameterWQdeclarationclauseContext>(_ctx, getState());
  enterRule(_localctx, 238, oxadvancedParser::RuleParameterWQdeclarationclause);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1489);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 151, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1481);
      parameterWQdeclarationlist(0);
      setState(1483);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::Ellipsis) {
        setState(1482);
        match(oxadvancedParser::Ellipsis);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1485);
      parameterWQdeclarationlist(0);
      setState(1486);
      match(oxadvancedParser::Comma);
      setState(1487);
      match(oxadvancedParser::Ellipsis);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterWQdeclarationlistContext ------------------------------------------------------------------

oxadvancedParser::ParameterWQdeclarationlistContext::ParameterWQdeclarationlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::ParameterWQdeclarationContext* oxadvancedParser::ParameterWQdeclarationlistContext::parameterWQdeclaration() {
  return getRuleContext<oxadvancedParser::ParameterWQdeclarationContext>(0);
}

oxadvancedParser::ParameterWQdeclarationlistContext* oxadvancedParser::ParameterWQdeclarationlistContext::parameterWQdeclarationlist() {
  return getRuleContext<oxadvancedParser::ParameterWQdeclarationlistContext>(0);
}

tree::TerminalNode* oxadvancedParser::ParameterWQdeclarationlistContext::Comma() {
  return getToken(oxadvancedParser::Comma, 0);
}


size_t oxadvancedParser::ParameterWQdeclarationlistContext::getRuleIndex() const {
  return oxadvancedParser::RuleParameterWQdeclarationlist;
}

void oxadvancedParser::ParameterWQdeclarationlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterWQdeclarationlist(this);
}

void oxadvancedParser::ParameterWQdeclarationlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterWQdeclarationlist(this);
}


oxadvancedParser::ParameterWQdeclarationlistContext* oxadvancedParser::parameterWQdeclarationlist() {
   return parameterWQdeclarationlist(0);
}

oxadvancedParser::ParameterWQdeclarationlistContext* oxadvancedParser::parameterWQdeclarationlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::ParameterWQdeclarationlistContext *_localctx = _tracker.createInstance<ParameterWQdeclarationlistContext>(_ctx, parentState);
  oxadvancedParser::ParameterWQdeclarationlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 240;
  enterRecursionRule(_localctx, 240, oxadvancedParser::RuleParameterWQdeclarationlist, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1492);
    parameterWQdeclaration();
    _ctx->stop = _input->LT(-1);
    setState(1499);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 152, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ParameterWQdeclarationlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleParameterWQdeclarationlist);
        setState(1494);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1495);
        match(oxadvancedParser::Comma);
        setState(1496);
        parameterWQdeclaration(); 
      }
      setState(1501);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 152, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParameterWQdeclarationContext ------------------------------------------------------------------

oxadvancedParser::ParameterWQdeclarationContext::ParameterWQdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::ParameterWQdeclarationContext::Identifier() {
  return getToken(oxadvancedParser::Identifier, 0);
}

tree::TerminalNode* oxadvancedParser::ParameterWQdeclarationContext::Assign() {
  return getToken(oxadvancedParser::Assign, 0);
}

std::vector<oxadvancedParser::InitializerclauseContext *> oxadvancedParser::ParameterWQdeclarationContext::initializerclause() {
  return getRuleContexts<oxadvancedParser::InitializerclauseContext>();
}

oxadvancedParser::InitializerclauseContext* oxadvancedParser::ParameterWQdeclarationContext::initializerclause(size_t i) {
  return getRuleContext<oxadvancedParser::InitializerclauseContext>(i);
}


size_t oxadvancedParser::ParameterWQdeclarationContext::getRuleIndex() const {
  return oxadvancedParser::RuleParameterWQdeclaration;
}

void oxadvancedParser::ParameterWQdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterWQdeclaration(this);
}

void oxadvancedParser::ParameterWQdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterWQdeclaration(this);
}

oxadvancedParser::ParameterWQdeclarationContext* oxadvancedParser::parameterWQdeclaration() {
  ParameterWQdeclarationContext *_localctx = _tracker.createInstance<ParameterWQdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 242, oxadvancedParser::RuleParameterWQdeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1508);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1502);
      match(oxadvancedParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1503);
      match(oxadvancedParser::Identifier);
      setState(1504);
      match(oxadvancedParser::Assign);
      setState(1505);
      initializerclause();
      setState(1506);
      initializerclause();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionalargumentContext ------------------------------------------------------------------

oxadvancedParser::OptionalargumentContext::OptionalargumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::OptionalargumentContext::Ellipsis() {
  return getToken(oxadvancedParser::Ellipsis, 0);
}


size_t oxadvancedParser::OptionalargumentContext::getRuleIndex() const {
  return oxadvancedParser::RuleOptionalargument;
}

void oxadvancedParser::OptionalargumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptionalargument(this);
}

void oxadvancedParser::OptionalargumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptionalargument(this);
}

oxadvancedParser::OptionalargumentContext* oxadvancedParser::optionalargument() {
  OptionalargumentContext *_localctx = _tracker.createInstance<OptionalargumentContext>(_ctx, getState());
  enterRule(_localctx, 244, oxadvancedParser::RuleOptionalargument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1510);
    match(oxadvancedParser::Ellipsis);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterdeclarationlistContext ------------------------------------------------------------------

oxadvancedParser::ParameterdeclarationlistContext::ParameterdeclarationlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::FunctionargumentsContext* oxadvancedParser::ParameterdeclarationlistContext::functionarguments() {
  return getRuleContext<oxadvancedParser::FunctionargumentsContext>(0);
}

oxadvancedParser::ParameterdeclarationlistContext* oxadvancedParser::ParameterdeclarationlistContext::parameterdeclarationlist() {
  return getRuleContext<oxadvancedParser::ParameterdeclarationlistContext>(0);
}

tree::TerminalNode* oxadvancedParser::ParameterdeclarationlistContext::Comma() {
  return getToken(oxadvancedParser::Comma, 0);
}


size_t oxadvancedParser::ParameterdeclarationlistContext::getRuleIndex() const {
  return oxadvancedParser::RuleParameterdeclarationlist;
}

void oxadvancedParser::ParameterdeclarationlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterdeclarationlist(this);
}

void oxadvancedParser::ParameterdeclarationlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterdeclarationlist(this);
}


oxadvancedParser::ParameterdeclarationlistContext* oxadvancedParser::parameterdeclarationlist() {
   return parameterdeclarationlist(0);
}

oxadvancedParser::ParameterdeclarationlistContext* oxadvancedParser::parameterdeclarationlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::ParameterdeclarationlistContext *_localctx = _tracker.createInstance<ParameterdeclarationlistContext>(_ctx, parentState);
  oxadvancedParser::ParameterdeclarationlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 246;
  enterRecursionRule(_localctx, 246, oxadvancedParser::RuleParameterdeclarationlist, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1514);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 154, _ctx)) {
    case 1: {
      setState(1513);
      functionarguments();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(1521);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 155, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ParameterdeclarationlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleParameterdeclarationlist);
        setState(1516);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1517);
        match(oxadvancedParser::Comma);
        setState(1518);
        functionarguments(); 
      }
      setState(1523);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 155, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FunctionargumentsContext ------------------------------------------------------------------

oxadvancedParser::FunctionargumentsContext::FunctionargumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::DeclaratorContext* oxadvancedParser::FunctionargumentsContext::declarator() {
  return getRuleContext<oxadvancedParser::DeclaratorContext>(0);
}

oxadvancedParser::DeclspecifierseqContext* oxadvancedParser::FunctionargumentsContext::declspecifierseq() {
  return getRuleContext<oxadvancedParser::DeclspecifierseqContext>(0);
}

tree::TerminalNode* oxadvancedParser::FunctionargumentsContext::Assign() {
  return getToken(oxadvancedParser::Assign, 0);
}

oxadvancedParser::InitializerclauseContext* oxadvancedParser::FunctionargumentsContext::initializerclause() {
  return getRuleContext<oxadvancedParser::InitializerclauseContext>(0);
}

oxadvancedParser::OptionalargumentContext* oxadvancedParser::FunctionargumentsContext::optionalargument() {
  return getRuleContext<oxadvancedParser::OptionalargumentContext>(0);
}


size_t oxadvancedParser::FunctionargumentsContext::getRuleIndex() const {
  return oxadvancedParser::RuleFunctionarguments;
}

void oxadvancedParser::FunctionargumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionarguments(this);
}

void oxadvancedParser::FunctionargumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionarguments(this);
}

oxadvancedParser::FunctionargumentsContext* oxadvancedParser::functionarguments() {
  FunctionargumentsContext *_localctx = _tracker.createInstance<FunctionargumentsContext>(_ctx, getState());
  enterRule(_localctx, 248, oxadvancedParser::RuleFunctionarguments);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1536);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 158, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1525);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << oxadvancedParser::T__19)
        | (1ULL << oxadvancedParser::Auto)
        | (1ULL << oxadvancedParser::Bool)
        | (1ULL << oxadvancedParser::Const)
        | (1ULL << oxadvancedParser::Constexpr)
        | (1ULL << oxadvancedParser::Decltype)
        | (1ULL << oxadvancedParser::Double)
        | (1ULL << oxadvancedParser::Enum)
        | (1ULL << oxadvancedParser::Explicit)
        | (1ULL << oxadvancedParser::Extern)
        | (1ULL << oxadvancedParser::Float)
        | (1ULL << oxadvancedParser::Inline)
        | (1ULL << oxadvancedParser::Int)
        | (1ULL << oxadvancedParser::Decl)
        | (1ULL << oxadvancedParser::Long))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (oxadvancedParser::Mutable - 64))
        | (1ULL << (oxadvancedParser::Register - 64))
        | (1ULL << (oxadvancedParser::Short - 64))
        | (1ULL << (oxadvancedParser::Signed - 64))
        | (1ULL << (oxadvancedParser::Static - 64))
        | (1ULL << (oxadvancedParser::Typedef - 64))
        | (1ULL << (oxadvancedParser::Unsigned - 64))
        | (1ULL << (oxadvancedParser::Virtual - 64))
        | (1ULL << (oxadvancedParser::Void - 64))
        | (1ULL << (oxadvancedParser::Volatile - 64))
        | (1ULL << (oxadvancedParser::Wchar - 64)))) != 0)) {
        setState(1524);
        declspecifierseq();
      }
      setState(1527);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1529);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << oxadvancedParser::T__19)
        | (1ULL << oxadvancedParser::Auto)
        | (1ULL << oxadvancedParser::Bool)
        | (1ULL << oxadvancedParser::Const)
        | (1ULL << oxadvancedParser::Constexpr)
        | (1ULL << oxadvancedParser::Decltype)
        | (1ULL << oxadvancedParser::Double)
        | (1ULL << oxadvancedParser::Enum)
        | (1ULL << oxadvancedParser::Explicit)
        | (1ULL << oxadvancedParser::Extern)
        | (1ULL << oxadvancedParser::Float)
        | (1ULL << oxadvancedParser::Inline)
        | (1ULL << oxadvancedParser::Int)
        | (1ULL << oxadvancedParser::Decl)
        | (1ULL << oxadvancedParser::Long))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (oxadvancedParser::Mutable - 64))
        | (1ULL << (oxadvancedParser::Register - 64))
        | (1ULL << (oxadvancedParser::Short - 64))
        | (1ULL << (oxadvancedParser::Signed - 64))
        | (1ULL << (oxadvancedParser::Static - 64))
        | (1ULL << (oxadvancedParser::Typedef - 64))
        | (1ULL << (oxadvancedParser::Unsigned - 64))
        | (1ULL << (oxadvancedParser::Virtual - 64))
        | (1ULL << (oxadvancedParser::Void - 64))
        | (1ULL << (oxadvancedParser::Volatile - 64))
        | (1ULL << (oxadvancedParser::Wchar - 64)))) != 0)) {
        setState(1528);
        declspecifierseq();
      }
      setState(1531);
      declarator();
      setState(1532);
      match(oxadvancedParser::Assign);
      setState(1533);
      initializerclause();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1535);
      optionalargument();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterdeclarationContext ------------------------------------------------------------------

oxadvancedParser::ParameterdeclarationContext::ParameterdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::DeclaratorContext* oxadvancedParser::ParameterdeclarationContext::declarator() {
  return getRuleContext<oxadvancedParser::DeclaratorContext>(0);
}

oxadvancedParser::DeclspecifierseqContext* oxadvancedParser::ParameterdeclarationContext::declspecifierseq() {
  return getRuleContext<oxadvancedParser::DeclspecifierseqContext>(0);
}

tree::TerminalNode* oxadvancedParser::ParameterdeclarationContext::Assign() {
  return getToken(oxadvancedParser::Assign, 0);
}

oxadvancedParser::InitializerclauseContext* oxadvancedParser::ParameterdeclarationContext::initializerclause() {
  return getRuleContext<oxadvancedParser::InitializerclauseContext>(0);
}

oxadvancedParser::AbstractdeclaratorContext* oxadvancedParser::ParameterdeclarationContext::abstractdeclarator() {
  return getRuleContext<oxadvancedParser::AbstractdeclaratorContext>(0);
}


size_t oxadvancedParser::ParameterdeclarationContext::getRuleIndex() const {
  return oxadvancedParser::RuleParameterdeclaration;
}

void oxadvancedParser::ParameterdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterdeclaration(this);
}

void oxadvancedParser::ParameterdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterdeclaration(this);
}

oxadvancedParser::ParameterdeclarationContext* oxadvancedParser::parameterdeclaration() {
  ParameterdeclarationContext *_localctx = _tracker.createInstance<ParameterdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 250, oxadvancedParser::RuleParameterdeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1557);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 163, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1539);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << oxadvancedParser::T__19)
        | (1ULL << oxadvancedParser::Auto)
        | (1ULL << oxadvancedParser::Bool)
        | (1ULL << oxadvancedParser::Const)
        | (1ULL << oxadvancedParser::Constexpr)
        | (1ULL << oxadvancedParser::Decltype)
        | (1ULL << oxadvancedParser::Double)
        | (1ULL << oxadvancedParser::Enum)
        | (1ULL << oxadvancedParser::Explicit)
        | (1ULL << oxadvancedParser::Extern)
        | (1ULL << oxadvancedParser::Float)
        | (1ULL << oxadvancedParser::Inline)
        | (1ULL << oxadvancedParser::Int)
        | (1ULL << oxadvancedParser::Decl)
        | (1ULL << oxadvancedParser::Long))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (oxadvancedParser::Mutable - 64))
        | (1ULL << (oxadvancedParser::Register - 64))
        | (1ULL << (oxadvancedParser::Short - 64))
        | (1ULL << (oxadvancedParser::Signed - 64))
        | (1ULL << (oxadvancedParser::Static - 64))
        | (1ULL << (oxadvancedParser::Typedef - 64))
        | (1ULL << (oxadvancedParser::Unsigned - 64))
        | (1ULL << (oxadvancedParser::Virtual - 64))
        | (1ULL << (oxadvancedParser::Void - 64))
        | (1ULL << (oxadvancedParser::Volatile - 64))
        | (1ULL << (oxadvancedParser::Wchar - 64)))) != 0)) {
        setState(1538);
        declspecifierseq();
      }
      setState(1541);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1543);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << oxadvancedParser::T__19)
        | (1ULL << oxadvancedParser::Auto)
        | (1ULL << oxadvancedParser::Bool)
        | (1ULL << oxadvancedParser::Const)
        | (1ULL << oxadvancedParser::Constexpr)
        | (1ULL << oxadvancedParser::Decltype)
        | (1ULL << oxadvancedParser::Double)
        | (1ULL << oxadvancedParser::Enum)
        | (1ULL << oxadvancedParser::Explicit)
        | (1ULL << oxadvancedParser::Extern)
        | (1ULL << oxadvancedParser::Float)
        | (1ULL << oxadvancedParser::Inline)
        | (1ULL << oxadvancedParser::Int)
        | (1ULL << oxadvancedParser::Decl)
        | (1ULL << oxadvancedParser::Long))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (oxadvancedParser::Mutable - 64))
        | (1ULL << (oxadvancedParser::Register - 64))
        | (1ULL << (oxadvancedParser::Short - 64))
        | (1ULL << (oxadvancedParser::Signed - 64))
        | (1ULL << (oxadvancedParser::Static - 64))
        | (1ULL << (oxadvancedParser::Typedef - 64))
        | (1ULL << (oxadvancedParser::Unsigned - 64))
        | (1ULL << (oxadvancedParser::Virtual - 64))
        | (1ULL << (oxadvancedParser::Void - 64))
        | (1ULL << (oxadvancedParser::Volatile - 64))
        | (1ULL << (oxadvancedParser::Wchar - 64)))) != 0)) {
        setState(1542);
        declspecifierseq();
      }
      setState(1545);
      declarator();
      setState(1546);
      match(oxadvancedParser::Assign);
      setState(1547);
      initializerclause();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1550);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << oxadvancedParser::T__19)
        | (1ULL << oxadvancedParser::Auto)
        | (1ULL << oxadvancedParser::Bool)
        | (1ULL << oxadvancedParser::Const)
        | (1ULL << oxadvancedParser::Constexpr)
        | (1ULL << oxadvancedParser::Decltype)
        | (1ULL << oxadvancedParser::Double)
        | (1ULL << oxadvancedParser::Enum)
        | (1ULL << oxadvancedParser::Explicit)
        | (1ULL << oxadvancedParser::Extern)
        | (1ULL << oxadvancedParser::Float)
        | (1ULL << oxadvancedParser::Inline)
        | (1ULL << oxadvancedParser::Int)
        | (1ULL << oxadvancedParser::Decl)
        | (1ULL << oxadvancedParser::Long))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (oxadvancedParser::Mutable - 64))
        | (1ULL << (oxadvancedParser::Register - 64))
        | (1ULL << (oxadvancedParser::Short - 64))
        | (1ULL << (oxadvancedParser::Signed - 64))
        | (1ULL << (oxadvancedParser::Static - 64))
        | (1ULL << (oxadvancedParser::Typedef - 64))
        | (1ULL << (oxadvancedParser::Unsigned - 64))
        | (1ULL << (oxadvancedParser::Virtual - 64))
        | (1ULL << (oxadvancedParser::Void - 64))
        | (1ULL << (oxadvancedParser::Volatile - 64))
        | (1ULL << (oxadvancedParser::Wchar - 64)))) != 0)) {
        setState(1549);
        declspecifierseq();
      }
      setState(1553);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 101) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 101)) & ((1ULL << (oxadvancedParser::LeftParen - 101))
        | (1ULL << (oxadvancedParser::LeftBracket - 101))
        | (1ULL << (oxadvancedParser::Ellipsis - 101)))) != 0)) {
        setState(1552);
        abstractdeclarator();
      }
      setState(1555);
      match(oxadvancedParser::Assign);
      setState(1556);
      initializerclause();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctiondefinitionContext ------------------------------------------------------------------

oxadvancedParser::FunctiondefinitionContext::FunctiondefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::DeclaratorContext* oxadvancedParser::FunctiondefinitionContext::declarator() {
  return getRuleContext<oxadvancedParser::DeclaratorContext>(0);
}

oxadvancedParser::FunctionbodyContext* oxadvancedParser::FunctiondefinitionContext::functionbody() {
  return getRuleContext<oxadvancedParser::FunctionbodyContext>(0);
}

oxadvancedParser::DeclspecifierseqContext* oxadvancedParser::FunctiondefinitionContext::declspecifierseq() {
  return getRuleContext<oxadvancedParser::DeclspecifierseqContext>(0);
}

oxadvancedParser::VirtspecifierseqContext* oxadvancedParser::FunctiondefinitionContext::virtspecifierseq() {
  return getRuleContext<oxadvancedParser::VirtspecifierseqContext>(0);
}


size_t oxadvancedParser::FunctiondefinitionContext::getRuleIndex() const {
  return oxadvancedParser::RuleFunctiondefinition;
}

void oxadvancedParser::FunctiondefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctiondefinition(this);
}

void oxadvancedParser::FunctiondefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctiondefinition(this);
}

oxadvancedParser::FunctiondefinitionContext* oxadvancedParser::functiondefinition() {
  FunctiondefinitionContext *_localctx = _tracker.createInstance<FunctiondefinitionContext>(_ctx, getState());
  enterRule(_localctx, 252, oxadvancedParser::RuleFunctiondefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1560);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << oxadvancedParser::T__19)
      | (1ULL << oxadvancedParser::Auto)
      | (1ULL << oxadvancedParser::Bool)
      | (1ULL << oxadvancedParser::Const)
      | (1ULL << oxadvancedParser::Constexpr)
      | (1ULL << oxadvancedParser::Decltype)
      | (1ULL << oxadvancedParser::Double)
      | (1ULL << oxadvancedParser::Enum)
      | (1ULL << oxadvancedParser::Explicit)
      | (1ULL << oxadvancedParser::Extern)
      | (1ULL << oxadvancedParser::Float)
      | (1ULL << oxadvancedParser::Inline)
      | (1ULL << oxadvancedParser::Int)
      | (1ULL << oxadvancedParser::Decl)
      | (1ULL << oxadvancedParser::Long))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (oxadvancedParser::Mutable - 64))
      | (1ULL << (oxadvancedParser::Register - 64))
      | (1ULL << (oxadvancedParser::Short - 64))
      | (1ULL << (oxadvancedParser::Signed - 64))
      | (1ULL << (oxadvancedParser::Static - 64))
      | (1ULL << (oxadvancedParser::Typedef - 64))
      | (1ULL << (oxadvancedParser::Unsigned - 64))
      | (1ULL << (oxadvancedParser::Virtual - 64))
      | (1ULL << (oxadvancedParser::Void - 64))
      | (1ULL << (oxadvancedParser::Volatile - 64))
      | (1ULL << (oxadvancedParser::Wchar - 64)))) != 0)) {
      setState(1559);
      declspecifierseq();
    }
    setState(1562);
    declarator();
    setState(1564);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == oxadvancedParser::Final

    || _la == oxadvancedParser::Override) {
      setState(1563);
      virtspecifierseq(0);
    }
    setState(1566);
    functionbody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionbodyContext ------------------------------------------------------------------

oxadvancedParser::FunctionbodyContext::FunctionbodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::CompoundstatementContext* oxadvancedParser::FunctionbodyContext::compoundstatement() {
  return getRuleContext<oxadvancedParser::CompoundstatementContext>(0);
}

oxadvancedParser::CtorinitializerContext* oxadvancedParser::FunctionbodyContext::ctorinitializer() {
  return getRuleContext<oxadvancedParser::CtorinitializerContext>(0);
}

tree::TerminalNode* oxadvancedParser::FunctionbodyContext::Assign() {
  return getToken(oxadvancedParser::Assign, 0);
}

tree::TerminalNode* oxadvancedParser::FunctionbodyContext::Default() {
  return getToken(oxadvancedParser::Default, 0);
}

tree::TerminalNode* oxadvancedParser::FunctionbodyContext::Semi() {
  return getToken(oxadvancedParser::Semi, 0);
}

tree::TerminalNode* oxadvancedParser::FunctionbodyContext::Delete() {
  return getToken(oxadvancedParser::Delete, 0);
}


size_t oxadvancedParser::FunctionbodyContext::getRuleIndex() const {
  return oxadvancedParser::RuleFunctionbody;
}

void oxadvancedParser::FunctionbodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionbody(this);
}

void oxadvancedParser::FunctionbodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionbody(this);
}

oxadvancedParser::FunctionbodyContext* oxadvancedParser::functionbody() {
  FunctionbodyContext *_localctx = _tracker.createInstance<FunctionbodyContext>(_ctx, getState());
  enterRule(_localctx, 254, oxadvancedParser::RuleFunctionbody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1578);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 167, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1569);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::Colon) {
        setState(1568);
        ctorinitializer();
      }
      setState(1571);
      compoundstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1572);
      match(oxadvancedParser::Assign);
      setState(1573);
      match(oxadvancedParser::Default);
      setState(1574);
      match(oxadvancedParser::Semi);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1575);
      match(oxadvancedParser::Assign);
      setState(1576);
      match(oxadvancedParser::Delete);
      setState(1577);
      match(oxadvancedParser::Semi);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerContext ------------------------------------------------------------------

oxadvancedParser::InitializerContext::InitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::BraceorequalinitializerContext* oxadvancedParser::InitializerContext::braceorequalinitializer() {
  return getRuleContext<oxadvancedParser::BraceorequalinitializerContext>(0);
}

tree::TerminalNode* oxadvancedParser::InitializerContext::LeftParen() {
  return getToken(oxadvancedParser::LeftParen, 0);
}

oxadvancedParser::ExpressionlistContext* oxadvancedParser::InitializerContext::expressionlist() {
  return getRuleContext<oxadvancedParser::ExpressionlistContext>(0);
}

tree::TerminalNode* oxadvancedParser::InitializerContext::RightParen() {
  return getToken(oxadvancedParser::RightParen, 0);
}


size_t oxadvancedParser::InitializerContext::getRuleIndex() const {
  return oxadvancedParser::RuleInitializer;
}

void oxadvancedParser::InitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer(this);
}

void oxadvancedParser::InitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer(this);
}

oxadvancedParser::InitializerContext* oxadvancedParser::initializer() {
  InitializerContext *_localctx = _tracker.createInstance<InitializerContext>(_ctx, getState());
  enterRule(_localctx, 256, oxadvancedParser::RuleInitializer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1585);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case oxadvancedParser::LeftBrace:
      case oxadvancedParser::Assign:
      case oxadvancedParser::Less: {
        enterOuterAlt(_localctx, 1);
        setState(1580);
        braceorequalinitializer();
        break;
      }

      case oxadvancedParser::LeftParen: {
        enterOuterAlt(_localctx, 2);
        setState(1581);
        match(oxadvancedParser::LeftParen);
        setState(1582);
        expressionlist();
        setState(1583);
        match(oxadvancedParser::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BraceorequalinitializerContext ------------------------------------------------------------------

oxadvancedParser::BraceorequalinitializerContext::BraceorequalinitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::BraceorequalinitializerContext::Assign() {
  return getToken(oxadvancedParser::Assign, 0);
}

oxadvancedParser::InitializerclauseContext* oxadvancedParser::BraceorequalinitializerContext::initializerclause() {
  return getRuleContext<oxadvancedParser::InitializerclauseContext>(0);
}

oxadvancedParser::BracedinitlistContext* oxadvancedParser::BraceorequalinitializerContext::bracedinitlist() {
  return getRuleContext<oxadvancedParser::BracedinitlistContext>(0);
}

oxadvancedParser::OxmatrixContext* oxadvancedParser::BraceorequalinitializerContext::oxmatrix() {
  return getRuleContext<oxadvancedParser::OxmatrixContext>(0);
}


size_t oxadvancedParser::BraceorequalinitializerContext::getRuleIndex() const {
  return oxadvancedParser::RuleBraceorequalinitializer;
}

void oxadvancedParser::BraceorequalinitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBraceorequalinitializer(this);
}

void oxadvancedParser::BraceorequalinitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBraceorequalinitializer(this);
}

oxadvancedParser::BraceorequalinitializerContext* oxadvancedParser::braceorequalinitializer() {
  BraceorequalinitializerContext *_localctx = _tracker.createInstance<BraceorequalinitializerContext>(_ctx, getState());
  enterRule(_localctx, 258, oxadvancedParser::RuleBraceorequalinitializer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1591);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case oxadvancedParser::Assign: {
        enterOuterAlt(_localctx, 1);
        setState(1587);
        match(oxadvancedParser::Assign);
        setState(1588);
        initializerclause();
        break;
      }

      case oxadvancedParser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(1589);
        bracedinitlist();
        break;
      }

      case oxadvancedParser::Less: {
        enterOuterAlt(_localctx, 3);
        setState(1590);
        oxmatrix();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerclauseContext ------------------------------------------------------------------

oxadvancedParser::InitializerclauseContext::InitializerclauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::AssignmentexpressionContext* oxadvancedParser::InitializerclauseContext::assignmentexpression() {
  return getRuleContext<oxadvancedParser::AssignmentexpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::InitializerclauseContext::Dot() {
  return getToken(oxadvancedParser::Dot, 0);
}


size_t oxadvancedParser::InitializerclauseContext::getRuleIndex() const {
  return oxadvancedParser::RuleInitializerclause;
}

void oxadvancedParser::InitializerclauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerclause(this);
}

void oxadvancedParser::InitializerclauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerclause(this);
}

oxadvancedParser::InitializerclauseContext* oxadvancedParser::initializerclause() {
  InitializerclauseContext *_localctx = _tracker.createInstance<InitializerclauseContext>(_ctx, getState());
  enterRule(_localctx, 260, oxadvancedParser::RuleInitializerclause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1595);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 170, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1593);
      assignmentexpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1594);
      match(oxadvancedParser::Dot);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerlistContext ------------------------------------------------------------------

oxadvancedParser::InitializerlistContext::InitializerlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::InitializerclauseContext* oxadvancedParser::InitializerlistContext::initializerclause() {
  return getRuleContext<oxadvancedParser::InitializerclauseContext>(0);
}

tree::TerminalNode* oxadvancedParser::InitializerlistContext::Ellipsis() {
  return getToken(oxadvancedParser::Ellipsis, 0);
}

oxadvancedParser::InitializerlistContext* oxadvancedParser::InitializerlistContext::initializerlist() {
  return getRuleContext<oxadvancedParser::InitializerlistContext>(0);
}

tree::TerminalNode* oxadvancedParser::InitializerlistContext::Comma() {
  return getToken(oxadvancedParser::Comma, 0);
}


size_t oxadvancedParser::InitializerlistContext::getRuleIndex() const {
  return oxadvancedParser::RuleInitializerlist;
}

void oxadvancedParser::InitializerlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerlist(this);
}

void oxadvancedParser::InitializerlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerlist(this);
}


oxadvancedParser::InitializerlistContext* oxadvancedParser::initializerlist() {
   return initializerlist(0);
}

oxadvancedParser::InitializerlistContext* oxadvancedParser::initializerlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::InitializerlistContext *_localctx = _tracker.createInstance<InitializerlistContext>(_ctx, parentState);
  oxadvancedParser::InitializerlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 262;
  enterRecursionRule(_localctx, 262, oxadvancedParser::RuleInitializerlist, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1598);
    initializerclause();
    setState(1600);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 171, _ctx)) {
    case 1: {
      setState(1599);
      match(oxadvancedParser::Ellipsis);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(1610);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 173, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InitializerlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInitializerlist);
        setState(1602);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1603);
        match(oxadvancedParser::Comma);
        setState(1604);
        initializerclause();
        setState(1606);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 172, _ctx)) {
        case 1: {
          setState(1605);
          match(oxadvancedParser::Ellipsis);
          break;
        }

        default:
          break;
        } 
      }
      setState(1612);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 173, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- InitializerlistoxmatrixContext ------------------------------------------------------------------

oxadvancedParser::InitializerlistoxmatrixContext::InitializerlistoxmatrixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::InitializerclauseContext* oxadvancedParser::InitializerlistoxmatrixContext::initializerclause() {
  return getRuleContext<oxadvancedParser::InitializerclauseContext>(0);
}

oxadvancedParser::InitializerlistoxmatrixContext* oxadvancedParser::InitializerlistoxmatrixContext::initializerlistoxmatrix() {
  return getRuleContext<oxadvancedParser::InitializerlistoxmatrixContext>(0);
}

tree::TerminalNode* oxadvancedParser::InitializerlistoxmatrixContext::Comma() {
  return getToken(oxadvancedParser::Comma, 0);
}

tree::TerminalNode* oxadvancedParser::InitializerlistoxmatrixContext::Semi() {
  return getToken(oxadvancedParser::Semi, 0);
}


size_t oxadvancedParser::InitializerlistoxmatrixContext::getRuleIndex() const {
  return oxadvancedParser::RuleInitializerlistoxmatrix;
}

void oxadvancedParser::InitializerlistoxmatrixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerlistoxmatrix(this);
}

void oxadvancedParser::InitializerlistoxmatrixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerlistoxmatrix(this);
}


oxadvancedParser::InitializerlistoxmatrixContext* oxadvancedParser::initializerlistoxmatrix() {
   return initializerlistoxmatrix(0);
}

oxadvancedParser::InitializerlistoxmatrixContext* oxadvancedParser::initializerlistoxmatrix(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::InitializerlistoxmatrixContext *_localctx = _tracker.createInstance<InitializerlistoxmatrixContext>(_ctx, parentState);
  oxadvancedParser::InitializerlistoxmatrixContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 264;
  enterRecursionRule(_localctx, 264, oxadvancedParser::RuleInitializerlistoxmatrix, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1614);
    initializerclause();
    _ctx->stop = _input->LT(-1);
    setState(1624);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 175, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1622);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 174, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<InitializerlistoxmatrixContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleInitializerlistoxmatrix);
          setState(1616);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");

          setState(1617);
          match(oxadvancedParser::Comma);
          setState(1618);
          initializerclause();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<InitializerlistoxmatrixContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleInitializerlistoxmatrix);
          setState(1619);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");

          setState(1620);
          match(oxadvancedParser::Semi);
          setState(1621);
          initializerclause();
          break;
        }

        default:
          break;
        } 
      }
      setState(1626);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 175, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- OxmatrixContext ------------------------------------------------------------------

oxadvancedParser::OxmatrixContext::OxmatrixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::OxmatrixContext::Less() {
  return getToken(oxadvancedParser::Less, 0);
}

oxadvancedParser::InitializerlistoxmatrixContext* oxadvancedParser::OxmatrixContext::initializerlistoxmatrix() {
  return getRuleContext<oxadvancedParser::InitializerlistoxmatrixContext>(0);
}

tree::TerminalNode* oxadvancedParser::OxmatrixContext::Greater() {
  return getToken(oxadvancedParser::Greater, 0);
}

oxadvancedParser::MatrixIndexSeqContext* oxadvancedParser::OxmatrixContext::matrixIndexSeq() {
  return getRuleContext<oxadvancedParser::MatrixIndexSeqContext>(0);
}

tree::TerminalNode* oxadvancedParser::OxmatrixContext::Comma() {
  return getToken(oxadvancedParser::Comma, 0);
}

tree::TerminalNode* oxadvancedParser::OxmatrixContext::Semi() {
  return getToken(oxadvancedParser::Semi, 0);
}


size_t oxadvancedParser::OxmatrixContext::getRuleIndex() const {
  return oxadvancedParser::RuleOxmatrix;
}

void oxadvancedParser::OxmatrixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOxmatrix(this);
}

void oxadvancedParser::OxmatrixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOxmatrix(this);
}

oxadvancedParser::OxmatrixContext* oxadvancedParser::oxmatrix() {
  OxmatrixContext *_localctx = _tracker.createInstance<OxmatrixContext>(_ctx, getState());
  enterRule(_localctx, 266, oxadvancedParser::RuleOxmatrix);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1627);
    match(oxadvancedParser::Less);
    setState(1628);
    initializerlistoxmatrix(0);
    setState(1630);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == oxadvancedParser::Comma

    || _la == oxadvancedParser::Semi) {
      setState(1629);
      _la = _input->LA(1);
      if (!(_la == oxadvancedParser::Comma

      || _la == oxadvancedParser::Semi)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(1632);
    match(oxadvancedParser::Greater);
    setState(1634);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 177, _ctx)) {
    case 1: {
      setState(1633);
      matrixIndexSeq();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BracedinitlistContext ------------------------------------------------------------------

oxadvancedParser::BracedinitlistContext::BracedinitlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::BracedinitlistContext::LeftBrace() {
  return getToken(oxadvancedParser::LeftBrace, 0);
}

oxadvancedParser::InitializerlistContext* oxadvancedParser::BracedinitlistContext::initializerlist() {
  return getRuleContext<oxadvancedParser::InitializerlistContext>(0);
}

tree::TerminalNode* oxadvancedParser::BracedinitlistContext::RightBrace() {
  return getToken(oxadvancedParser::RightBrace, 0);
}

tree::TerminalNode* oxadvancedParser::BracedinitlistContext::Comma() {
  return getToken(oxadvancedParser::Comma, 0);
}


size_t oxadvancedParser::BracedinitlistContext::getRuleIndex() const {
  return oxadvancedParser::RuleBracedinitlist;
}

void oxadvancedParser::BracedinitlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBracedinitlist(this);
}

void oxadvancedParser::BracedinitlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBracedinitlist(this);
}

oxadvancedParser::BracedinitlistContext* oxadvancedParser::bracedinitlist() {
  BracedinitlistContext *_localctx = _tracker.createInstance<BracedinitlistContext>(_ctx, getState());
  enterRule(_localctx, 268, oxadvancedParser::RuleBracedinitlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1645);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 179, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1636);
      match(oxadvancedParser::LeftBrace);
      setState(1637);
      initializerlist(0);
      setState(1639);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::Comma) {
        setState(1638);
        match(oxadvancedParser::Comma);
      }
      setState(1641);
      match(oxadvancedParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1643);
      match(oxadvancedParser::LeftBrace);
      setState(1644);
      match(oxadvancedParser::RightBrace);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassnameContext ------------------------------------------------------------------

oxadvancedParser::ClassnameContext::ClassnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::ClassnameContext::Identifier() {
  return getToken(oxadvancedParser::Identifier, 0);
}


size_t oxadvancedParser::ClassnameContext::getRuleIndex() const {
  return oxadvancedParser::RuleClassname;
}

void oxadvancedParser::ClassnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassname(this);
}

void oxadvancedParser::ClassnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassname(this);
}

oxadvancedParser::ClassnameContext* oxadvancedParser::classname() {
  ClassnameContext *_localctx = _tracker.createInstance<ClassnameContext>(_ctx, getState());
  enterRule(_localctx, 270, oxadvancedParser::RuleClassname);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1647);
    match(oxadvancedParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassspecifierContext ------------------------------------------------------------------

oxadvancedParser::ClassspecifierContext::ClassspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::ClassheadContext* oxadvancedParser::ClassspecifierContext::classhead() {
  return getRuleContext<oxadvancedParser::ClassheadContext>(0);
}

tree::TerminalNode* oxadvancedParser::ClassspecifierContext::LeftBrace() {
  return getToken(oxadvancedParser::LeftBrace, 0);
}

tree::TerminalNode* oxadvancedParser::ClassspecifierContext::RightBrace() {
  return getToken(oxadvancedParser::RightBrace, 0);
}

oxadvancedParser::MemberspecificationContext* oxadvancedParser::ClassspecifierContext::memberspecification() {
  return getRuleContext<oxadvancedParser::MemberspecificationContext>(0);
}


size_t oxadvancedParser::ClassspecifierContext::getRuleIndex() const {
  return oxadvancedParser::RuleClassspecifier;
}

void oxadvancedParser::ClassspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassspecifier(this);
}

void oxadvancedParser::ClassspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassspecifier(this);
}

oxadvancedParser::ClassspecifierContext* oxadvancedParser::classspecifier() {
  ClassspecifierContext *_localctx = _tracker.createInstance<ClassspecifierContext>(_ctx, getState());
  enterRule(_localctx, 272, oxadvancedParser::RuleClassspecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1649);
    classhead();
    setState(1650);
    match(oxadvancedParser::LeftBrace);
    setState(1652);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 20) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 20)) & ((1ULL << (oxadvancedParser::T__19 - 20))
      | (1ULL << (oxadvancedParser::IN - 20))
      | (1ULL << (oxadvancedParser::Auto - 20))
      | (1ULL << (oxadvancedParser::Bool - 20))
      | (1ULL << (oxadvancedParser::Const - 20))
      | (1ULL << (oxadvancedParser::Constexpr - 20))
      | (1ULL << (oxadvancedParser::Decltype - 20))
      | (1ULL << (oxadvancedParser::Double - 20))
      | (1ULL << (oxadvancedParser::Enum - 20))
      | (1ULL << (oxadvancedParser::Explicit - 20))
      | (1ULL << (oxadvancedParser::Extern - 20))
      | (1ULL << (oxadvancedParser::Float - 20))
      | (1ULL << (oxadvancedParser::Inline - 20))
      | (1ULL << (oxadvancedParser::Int - 20))
      | (1ULL << (oxadvancedParser::Array - 20))
      | (1ULL << (oxadvancedParser::Decl - 20))
      | (1ULL << (oxadvancedParser::Long - 20))
      | (1ULL << (oxadvancedParser::Mutable - 20))
      | (1ULL << (oxadvancedParser::Operator - 20))
      | (1ULL << (oxadvancedParser::Private - 20))
      | (1ULL << (oxadvancedParser::Protected - 20))
      | (1ULL << (oxadvancedParser::Public - 20))
      | (1ULL << (oxadvancedParser::Register - 20))
      | (1ULL << (oxadvancedParser::Short - 20))
      | (1ULL << (oxadvancedParser::Signed - 20))
      | (1ULL << (oxadvancedParser::Static - 20))
      | (1ULL << (oxadvancedParser::Static_assert - 20)))) != 0) || ((((_la - 86) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 86)) & ((1ULL << (oxadvancedParser::This - 86))
      | (1ULL << (oxadvancedParser::Typedef - 86))
      | (1ULL << (oxadvancedParser::Unsigned - 86))
      | (1ULL << (oxadvancedParser::Virtual - 86))
      | (1ULL << (oxadvancedParser::Void - 86))
      | (1ULL << (oxadvancedParser::Volatile - 86))
      | (1ULL << (oxadvancedParser::Wchar - 86))
      | (1ULL << (oxadvancedParser::LeftParen - 86))
      | (1ULL << (oxadvancedParser::Tilde - 86))
      | (1ULL << (oxadvancedParser::Colon - 86))
      | (1ULL << (oxadvancedParser::Doublecolon - 86))
      | (1ULL << (oxadvancedParser::Semi - 86))
      | (1ULL << (oxadvancedParser::Ellipsis - 86))
      | (1ULL << (oxadvancedParser::Identifier - 86)))) != 0)) {
      setState(1651);
      memberspecification();
    }
    setState(1654);
    match(oxadvancedParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassheadContext ------------------------------------------------------------------

oxadvancedParser::ClassheadContext::ClassheadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::ClasskeyContext* oxadvancedParser::ClassheadContext::classkey() {
  return getRuleContext<oxadvancedParser::ClasskeyContext>(0);
}

oxadvancedParser::ClassheadnameContext* oxadvancedParser::ClassheadContext::classheadname() {
  return getRuleContext<oxadvancedParser::ClassheadnameContext>(0);
}

oxadvancedParser::ClassvirtspecifierContext* oxadvancedParser::ClassheadContext::classvirtspecifier() {
  return getRuleContext<oxadvancedParser::ClassvirtspecifierContext>(0);
}

oxadvancedParser::BaseclauseContext* oxadvancedParser::ClassheadContext::baseclause() {
  return getRuleContext<oxadvancedParser::BaseclauseContext>(0);
}


size_t oxadvancedParser::ClassheadContext::getRuleIndex() const {
  return oxadvancedParser::RuleClasshead;
}

void oxadvancedParser::ClassheadContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClasshead(this);
}

void oxadvancedParser::ClassheadContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClasshead(this);
}

oxadvancedParser::ClassheadContext* oxadvancedParser::classhead() {
  ClassheadContext *_localctx = _tracker.createInstance<ClassheadContext>(_ctx, getState());
  enterRule(_localctx, 274, oxadvancedParser::RuleClasshead);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1668);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 184, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1656);
      classkey();
      setState(1657);
      classheadname();
      setState(1659);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::Final) {
        setState(1658);
        classvirtspecifier();
      }
      setState(1662);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::Colon) {
        setState(1661);
        baseclause();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1664);
      classkey();
      setState(1666);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::Colon) {
        setState(1665);
        baseclause();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassheadnameContext ------------------------------------------------------------------

oxadvancedParser::ClassheadnameContext::ClassheadnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::ClassnameContext* oxadvancedParser::ClassheadnameContext::classname() {
  return getRuleContext<oxadvancedParser::ClassnameContext>(0);
}

oxadvancedParser::NestednamespecifierContext* oxadvancedParser::ClassheadnameContext::nestednamespecifier() {
  return getRuleContext<oxadvancedParser::NestednamespecifierContext>(0);
}


size_t oxadvancedParser::ClassheadnameContext::getRuleIndex() const {
  return oxadvancedParser::RuleClassheadname;
}

void oxadvancedParser::ClassheadnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassheadname(this);
}

void oxadvancedParser::ClassheadnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassheadname(this);
}

oxadvancedParser::ClassheadnameContext* oxadvancedParser::classheadname() {
  ClassheadnameContext *_localctx = _tracker.createInstance<ClassheadnameContext>(_ctx, getState());
  enterRule(_localctx, 276, oxadvancedParser::RuleClassheadname);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1671);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 185, _ctx)) {
    case 1: {
      setState(1670);
      nestednamespecifier(0);
      break;
    }

    default:
      break;
    }
    setState(1673);
    classname();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassvirtspecifierContext ------------------------------------------------------------------

oxadvancedParser::ClassvirtspecifierContext::ClassvirtspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::ClassvirtspecifierContext::Final() {
  return getToken(oxadvancedParser::Final, 0);
}


size_t oxadvancedParser::ClassvirtspecifierContext::getRuleIndex() const {
  return oxadvancedParser::RuleClassvirtspecifier;
}

void oxadvancedParser::ClassvirtspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassvirtspecifier(this);
}

void oxadvancedParser::ClassvirtspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassvirtspecifier(this);
}

oxadvancedParser::ClassvirtspecifierContext* oxadvancedParser::classvirtspecifier() {
  ClassvirtspecifierContext *_localctx = _tracker.createInstance<ClassvirtspecifierContext>(_ctx, getState());
  enterRule(_localctx, 278, oxadvancedParser::RuleClassvirtspecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1675);
    match(oxadvancedParser::Final);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClasskeyContext ------------------------------------------------------------------

oxadvancedParser::ClasskeyContext::ClasskeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::ClasskeyContext::Class() {
  return getToken(oxadvancedParser::Class, 0);
}

tree::TerminalNode* oxadvancedParser::ClasskeyContext::Struct() {
  return getToken(oxadvancedParser::Struct, 0);
}


size_t oxadvancedParser::ClasskeyContext::getRuleIndex() const {
  return oxadvancedParser::RuleClasskey;
}

void oxadvancedParser::ClasskeyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClasskey(this);
}

void oxadvancedParser::ClasskeyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClasskey(this);
}

oxadvancedParser::ClasskeyContext* oxadvancedParser::classkey() {
  ClasskeyContext *_localctx = _tracker.createInstance<ClasskeyContext>(_ctx, getState());
  enterRule(_localctx, 280, oxadvancedParser::RuleClasskey);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1677);
    _la = _input->LA(1);
    if (!(_la == oxadvancedParser::Class

    || _la == oxadvancedParser::Struct)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberspecificationContext ------------------------------------------------------------------

oxadvancedParser::MemberspecificationContext::MemberspecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::MemberdeclarationContext* oxadvancedParser::MemberspecificationContext::memberdeclaration() {
  return getRuleContext<oxadvancedParser::MemberdeclarationContext>(0);
}

oxadvancedParser::MemberspecificationContext* oxadvancedParser::MemberspecificationContext::memberspecification() {
  return getRuleContext<oxadvancedParser::MemberspecificationContext>(0);
}

oxadvancedParser::AccessmemberspecificationContext* oxadvancedParser::MemberspecificationContext::accessmemberspecification() {
  return getRuleContext<oxadvancedParser::AccessmemberspecificationContext>(0);
}


size_t oxadvancedParser::MemberspecificationContext::getRuleIndex() const {
  return oxadvancedParser::RuleMemberspecification;
}

void oxadvancedParser::MemberspecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberspecification(this);
}

void oxadvancedParser::MemberspecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberspecification(this);
}

oxadvancedParser::MemberspecificationContext* oxadvancedParser::memberspecification() {
  MemberspecificationContext *_localctx = _tracker.createInstance<MemberspecificationContext>(_ctx, getState());
  enterRule(_localctx, 282, oxadvancedParser::RuleMemberspecification);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1684);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case oxadvancedParser::T__19:
      case oxadvancedParser::IN:
      case oxadvancedParser::Auto:
      case oxadvancedParser::Bool:
      case oxadvancedParser::Const:
      case oxadvancedParser::Constexpr:
      case oxadvancedParser::Decltype:
      case oxadvancedParser::Double:
      case oxadvancedParser::Enum:
      case oxadvancedParser::Explicit:
      case oxadvancedParser::Extern:
      case oxadvancedParser::Float:
      case oxadvancedParser::Inline:
      case oxadvancedParser::Int:
      case oxadvancedParser::Array:
      case oxadvancedParser::Decl:
      case oxadvancedParser::Long:
      case oxadvancedParser::Mutable:
      case oxadvancedParser::Operator:
      case oxadvancedParser::Register:
      case oxadvancedParser::Short:
      case oxadvancedParser::Signed:
      case oxadvancedParser::Static:
      case oxadvancedParser::Static_assert:
      case oxadvancedParser::This:
      case oxadvancedParser::Typedef:
      case oxadvancedParser::Unsigned:
      case oxadvancedParser::Virtual:
      case oxadvancedParser::Void:
      case oxadvancedParser::Volatile:
      case oxadvancedParser::Wchar:
      case oxadvancedParser::LeftParen:
      case oxadvancedParser::Tilde:
      case oxadvancedParser::Colon:
      case oxadvancedParser::Doublecolon:
      case oxadvancedParser::Semi:
      case oxadvancedParser::Ellipsis:
      case oxadvancedParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1679);
        memberdeclaration();
        setState(1681);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 20) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 20)) & ((1ULL << (oxadvancedParser::T__19 - 20))
          | (1ULL << (oxadvancedParser::IN - 20))
          | (1ULL << (oxadvancedParser::Auto - 20))
          | (1ULL << (oxadvancedParser::Bool - 20))
          | (1ULL << (oxadvancedParser::Const - 20))
          | (1ULL << (oxadvancedParser::Constexpr - 20))
          | (1ULL << (oxadvancedParser::Decltype - 20))
          | (1ULL << (oxadvancedParser::Double - 20))
          | (1ULL << (oxadvancedParser::Enum - 20))
          | (1ULL << (oxadvancedParser::Explicit - 20))
          | (1ULL << (oxadvancedParser::Extern - 20))
          | (1ULL << (oxadvancedParser::Float - 20))
          | (1ULL << (oxadvancedParser::Inline - 20))
          | (1ULL << (oxadvancedParser::Int - 20))
          | (1ULL << (oxadvancedParser::Array - 20))
          | (1ULL << (oxadvancedParser::Decl - 20))
          | (1ULL << (oxadvancedParser::Long - 20))
          | (1ULL << (oxadvancedParser::Mutable - 20))
          | (1ULL << (oxadvancedParser::Operator - 20))
          | (1ULL << (oxadvancedParser::Private - 20))
          | (1ULL << (oxadvancedParser::Protected - 20))
          | (1ULL << (oxadvancedParser::Public - 20))
          | (1ULL << (oxadvancedParser::Register - 20))
          | (1ULL << (oxadvancedParser::Short - 20))
          | (1ULL << (oxadvancedParser::Signed - 20))
          | (1ULL << (oxadvancedParser::Static - 20))
          | (1ULL << (oxadvancedParser::Static_assert - 20)))) != 0) || ((((_la - 86) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 86)) & ((1ULL << (oxadvancedParser::This - 86))
          | (1ULL << (oxadvancedParser::Typedef - 86))
          | (1ULL << (oxadvancedParser::Unsigned - 86))
          | (1ULL << (oxadvancedParser::Virtual - 86))
          | (1ULL << (oxadvancedParser::Void - 86))
          | (1ULL << (oxadvancedParser::Volatile - 86))
          | (1ULL << (oxadvancedParser::Wchar - 86))
          | (1ULL << (oxadvancedParser::LeftParen - 86))
          | (1ULL << (oxadvancedParser::Tilde - 86))
          | (1ULL << (oxadvancedParser::Colon - 86))
          | (1ULL << (oxadvancedParser::Doublecolon - 86))
          | (1ULL << (oxadvancedParser::Semi - 86))
          | (1ULL << (oxadvancedParser::Ellipsis - 86))
          | (1ULL << (oxadvancedParser::Identifier - 86)))) != 0)) {
          setState(1680);
          memberspecification();
        }
        break;
      }

      case oxadvancedParser::Private:
      case oxadvancedParser::Protected:
      case oxadvancedParser::Public: {
        enterOuterAlt(_localctx, 2);
        setState(1683);
        accessmemberspecification();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessmemberspecificationContext ------------------------------------------------------------------

oxadvancedParser::AccessmemberspecificationContext::AccessmemberspecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::AccessspecifierContext* oxadvancedParser::AccessmemberspecificationContext::accessspecifier() {
  return getRuleContext<oxadvancedParser::AccessspecifierContext>(0);
}

tree::TerminalNode* oxadvancedParser::AccessmemberspecificationContext::Colon() {
  return getToken(oxadvancedParser::Colon, 0);
}

oxadvancedParser::MemberspecificationContext* oxadvancedParser::AccessmemberspecificationContext::memberspecification() {
  return getRuleContext<oxadvancedParser::MemberspecificationContext>(0);
}


size_t oxadvancedParser::AccessmemberspecificationContext::getRuleIndex() const {
  return oxadvancedParser::RuleAccessmemberspecification;
}

void oxadvancedParser::AccessmemberspecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessmemberspecification(this);
}

void oxadvancedParser::AccessmemberspecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessmemberspecification(this);
}

oxadvancedParser::AccessmemberspecificationContext* oxadvancedParser::accessmemberspecification() {
  AccessmemberspecificationContext *_localctx = _tracker.createInstance<AccessmemberspecificationContext>(_ctx, getState());
  enterRule(_localctx, 284, oxadvancedParser::RuleAccessmemberspecification);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1686);
    accessspecifier();
    setState(1687);
    match(oxadvancedParser::Colon);
    setState(1689);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 20) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 20)) & ((1ULL << (oxadvancedParser::T__19 - 20))
      | (1ULL << (oxadvancedParser::IN - 20))
      | (1ULL << (oxadvancedParser::Auto - 20))
      | (1ULL << (oxadvancedParser::Bool - 20))
      | (1ULL << (oxadvancedParser::Const - 20))
      | (1ULL << (oxadvancedParser::Constexpr - 20))
      | (1ULL << (oxadvancedParser::Decltype - 20))
      | (1ULL << (oxadvancedParser::Double - 20))
      | (1ULL << (oxadvancedParser::Enum - 20))
      | (1ULL << (oxadvancedParser::Explicit - 20))
      | (1ULL << (oxadvancedParser::Extern - 20))
      | (1ULL << (oxadvancedParser::Float - 20))
      | (1ULL << (oxadvancedParser::Inline - 20))
      | (1ULL << (oxadvancedParser::Int - 20))
      | (1ULL << (oxadvancedParser::Array - 20))
      | (1ULL << (oxadvancedParser::Decl - 20))
      | (1ULL << (oxadvancedParser::Long - 20))
      | (1ULL << (oxadvancedParser::Mutable - 20))
      | (1ULL << (oxadvancedParser::Operator - 20))
      | (1ULL << (oxadvancedParser::Private - 20))
      | (1ULL << (oxadvancedParser::Protected - 20))
      | (1ULL << (oxadvancedParser::Public - 20))
      | (1ULL << (oxadvancedParser::Register - 20))
      | (1ULL << (oxadvancedParser::Short - 20))
      | (1ULL << (oxadvancedParser::Signed - 20))
      | (1ULL << (oxadvancedParser::Static - 20))
      | (1ULL << (oxadvancedParser::Static_assert - 20)))) != 0) || ((((_la - 86) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 86)) & ((1ULL << (oxadvancedParser::This - 86))
      | (1ULL << (oxadvancedParser::Typedef - 86))
      | (1ULL << (oxadvancedParser::Unsigned - 86))
      | (1ULL << (oxadvancedParser::Virtual - 86))
      | (1ULL << (oxadvancedParser::Void - 86))
      | (1ULL << (oxadvancedParser::Volatile - 86))
      | (1ULL << (oxadvancedParser::Wchar - 86))
      | (1ULL << (oxadvancedParser::LeftParen - 86))
      | (1ULL << (oxadvancedParser::Tilde - 86))
      | (1ULL << (oxadvancedParser::Colon - 86))
      | (1ULL << (oxadvancedParser::Doublecolon - 86))
      | (1ULL << (oxadvancedParser::Semi - 86))
      | (1ULL << (oxadvancedParser::Ellipsis - 86))
      | (1ULL << (oxadvancedParser::Identifier - 86)))) != 0)) {
      setState(1688);
      memberspecification();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberdeclarationContext ------------------------------------------------------------------

oxadvancedParser::MemberdeclarationContext::MemberdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::MemberdeclarationContext::Semi() {
  return getToken(oxadvancedParser::Semi, 0);
}

oxadvancedParser::MemberdeclaratorlistContext* oxadvancedParser::MemberdeclarationContext::memberdeclaratorlist() {
  return getRuleContext<oxadvancedParser::MemberdeclaratorlistContext>(0);
}

oxadvancedParser::FunctiondefinitionContext* oxadvancedParser::MemberdeclarationContext::functiondefinition() {
  return getRuleContext<oxadvancedParser::FunctiondefinitionContext>(0);
}

oxadvancedParser::Static_assertdeclarationContext* oxadvancedParser::MemberdeclarationContext::static_assertdeclaration() {
  return getRuleContext<oxadvancedParser::Static_assertdeclarationContext>(0);
}

oxadvancedParser::External_functionContext* oxadvancedParser::MemberdeclarationContext::external_function() {
  return getRuleContext<oxadvancedParser::External_functionContext>(0);
}

tree::TerminalNode* oxadvancedParser::MemberdeclarationContext::Tilde() {
  return getToken(oxadvancedParser::Tilde, 0);
}

oxadvancedParser::EnumspecifierContext* oxadvancedParser::MemberdeclarationContext::enumspecifier() {
  return getRuleContext<oxadvancedParser::EnumspecifierContext>(0);
}

oxadvancedParser::EmptydeclarationContext* oxadvancedParser::MemberdeclarationContext::emptydeclaration() {
  return getRuleContext<oxadvancedParser::EmptydeclarationContext>(0);
}


size_t oxadvancedParser::MemberdeclarationContext::getRuleIndex() const {
  return oxadvancedParser::RuleMemberdeclaration;
}

void oxadvancedParser::MemberdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberdeclaration(this);
}

void oxadvancedParser::MemberdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberdeclaration(this);
}

oxadvancedParser::MemberdeclarationContext* oxadvancedParser::memberdeclaration() {
  MemberdeclarationContext *_localctx = _tracker.createInstance<MemberdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 286, oxadvancedParser::RuleMemberdeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1710);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 192, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1692);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 20) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 20)) & ((1ULL << (oxadvancedParser::T__19 - 20))
        | (1ULL << (oxadvancedParser::Extern - 20))
        | (1ULL << (oxadvancedParser::Decl - 20))
        | (1ULL << (oxadvancedParser::Mutable - 20))
        | (1ULL << (oxadvancedParser::Register - 20))
        | (1ULL << (oxadvancedParser::Static - 20)))) != 0) || _la == oxadvancedParser::Colon

      || _la == oxadvancedParser::Identifier) {
        setState(1691);
        memberdeclaratorlist(0);
      }
      setState(1694);
      match(oxadvancedParser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1695);
      functiondefinition();
      setState(1696);
      match(oxadvancedParser::Semi);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1698);
      static_assertdeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1700);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::Tilde) {
        setState(1699);
        match(oxadvancedParser::Tilde);
      }
      setState(1702);
      external_function();
      setState(1703);
      match(oxadvancedParser::Semi);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1705);
      enumspecifier();
      setState(1707);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 191, _ctx)) {
      case 1: {
        setState(1706);
        match(oxadvancedParser::Semi);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1709);
      emptydeclaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberdeclaratorlistContext ------------------------------------------------------------------

oxadvancedParser::MemberdeclaratorlistContext::MemberdeclaratorlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::MemberdeclaratorContext* oxadvancedParser::MemberdeclaratorlistContext::memberdeclarator() {
  return getRuleContext<oxadvancedParser::MemberdeclaratorContext>(0);
}

oxadvancedParser::MemberdeclaratorlistContext* oxadvancedParser::MemberdeclaratorlistContext::memberdeclaratorlist() {
  return getRuleContext<oxadvancedParser::MemberdeclaratorlistContext>(0);
}

tree::TerminalNode* oxadvancedParser::MemberdeclaratorlistContext::Comma() {
  return getToken(oxadvancedParser::Comma, 0);
}


size_t oxadvancedParser::MemberdeclaratorlistContext::getRuleIndex() const {
  return oxadvancedParser::RuleMemberdeclaratorlist;
}

void oxadvancedParser::MemberdeclaratorlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberdeclaratorlist(this);
}

void oxadvancedParser::MemberdeclaratorlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberdeclaratorlist(this);
}


oxadvancedParser::MemberdeclaratorlistContext* oxadvancedParser::memberdeclaratorlist() {
   return memberdeclaratorlist(0);
}

oxadvancedParser::MemberdeclaratorlistContext* oxadvancedParser::memberdeclaratorlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::MemberdeclaratorlistContext *_localctx = _tracker.createInstance<MemberdeclaratorlistContext>(_ctx, parentState);
  oxadvancedParser::MemberdeclaratorlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 288;
  enterRecursionRule(_localctx, 288, oxadvancedParser::RuleMemberdeclaratorlist, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1713);
    memberdeclarator();
    _ctx->stop = _input->LT(-1);
    setState(1720);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 193, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<MemberdeclaratorlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleMemberdeclaratorlist);
        setState(1715);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1716);
        match(oxadvancedParser::Comma);
        setState(1717);
        memberdeclarator(); 
      }
      setState(1722);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 193, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MemberdeclaratorContext ------------------------------------------------------------------

oxadvancedParser::MemberdeclaratorContext::MemberdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::MemberdeclaratorContext::Identifier() {
  return getToken(oxadvancedParser::Identifier, 0);
}

oxadvancedParser::StorageclassspecifierContext* oxadvancedParser::MemberdeclaratorContext::storageclassspecifier() {
  return getRuleContext<oxadvancedParser::StorageclassspecifierContext>(0);
}

tree::TerminalNode* oxadvancedParser::MemberdeclaratorContext::Decl() {
  return getToken(oxadvancedParser::Decl, 0);
}

tree::TerminalNode* oxadvancedParser::MemberdeclaratorContext::Assign() {
  return getToken(oxadvancedParser::Assign, 0);
}

oxadvancedParser::ConstantexpressionContext* oxadvancedParser::MemberdeclaratorContext::constantexpression() {
  return getRuleContext<oxadvancedParser::ConstantexpressionContext>(0);
}

tree::TerminalNode* oxadvancedParser::MemberdeclaratorContext::Colon() {
  return getToken(oxadvancedParser::Colon, 0);
}


size_t oxadvancedParser::MemberdeclaratorContext::getRuleIndex() const {
  return oxadvancedParser::RuleMemberdeclarator;
}

void oxadvancedParser::MemberdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberdeclarator(this);
}

void oxadvancedParser::MemberdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberdeclarator(this);
}

oxadvancedParser::MemberdeclaratorContext* oxadvancedParser::memberdeclarator() {
  MemberdeclaratorContext *_localctx = _tracker.createInstance<MemberdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 290, oxadvancedParser::RuleMemberdeclarator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1739);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 198, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1724);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 20) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 20)) & ((1ULL << (oxadvancedParser::T__19 - 20))
        | (1ULL << (oxadvancedParser::Extern - 20))
        | (1ULL << (oxadvancedParser::Mutable - 20))
        | (1ULL << (oxadvancedParser::Register - 20))
        | (1ULL << (oxadvancedParser::Static - 20)))) != 0)) {
        setState(1723);
        storageclassspecifier();
      }
      setState(1727);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::Decl) {
        setState(1726);
        match(oxadvancedParser::Decl);
      }
      setState(1729);
      match(oxadvancedParser::Identifier);
      setState(1732);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 196, _ctx)) {
      case 1: {
        setState(1730);
        match(oxadvancedParser::Assign);
        setState(1731);
        constantexpression();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1735);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::Identifier) {
        setState(1734);
        match(oxadvancedParser::Identifier);
      }
      setState(1737);
      match(oxadvancedParser::Colon);
      setState(1738);
      constantexpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VirtspecifierseqContext ------------------------------------------------------------------

oxadvancedParser::VirtspecifierseqContext::VirtspecifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::VirtspecifierContext* oxadvancedParser::VirtspecifierseqContext::virtspecifier() {
  return getRuleContext<oxadvancedParser::VirtspecifierContext>(0);
}

oxadvancedParser::VirtspecifierseqContext* oxadvancedParser::VirtspecifierseqContext::virtspecifierseq() {
  return getRuleContext<oxadvancedParser::VirtspecifierseqContext>(0);
}


size_t oxadvancedParser::VirtspecifierseqContext::getRuleIndex() const {
  return oxadvancedParser::RuleVirtspecifierseq;
}

void oxadvancedParser::VirtspecifierseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVirtspecifierseq(this);
}

void oxadvancedParser::VirtspecifierseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVirtspecifierseq(this);
}


oxadvancedParser::VirtspecifierseqContext* oxadvancedParser::virtspecifierseq() {
   return virtspecifierseq(0);
}

oxadvancedParser::VirtspecifierseqContext* oxadvancedParser::virtspecifierseq(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::VirtspecifierseqContext *_localctx = _tracker.createInstance<VirtspecifierseqContext>(_ctx, parentState);
  oxadvancedParser::VirtspecifierseqContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 292;
  enterRecursionRule(_localctx, 292, oxadvancedParser::RuleVirtspecifierseq, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1742);
    virtspecifier();
    _ctx->stop = _input->LT(-1);
    setState(1748);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 199, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<VirtspecifierseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleVirtspecifierseq);
        setState(1744);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1745);
        virtspecifier(); 
      }
      setState(1750);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 199, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- VirtspecifierContext ------------------------------------------------------------------

oxadvancedParser::VirtspecifierContext::VirtspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::VirtspecifierContext::Override() {
  return getToken(oxadvancedParser::Override, 0);
}

tree::TerminalNode* oxadvancedParser::VirtspecifierContext::Final() {
  return getToken(oxadvancedParser::Final, 0);
}


size_t oxadvancedParser::VirtspecifierContext::getRuleIndex() const {
  return oxadvancedParser::RuleVirtspecifier;
}

void oxadvancedParser::VirtspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVirtspecifier(this);
}

void oxadvancedParser::VirtspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVirtspecifier(this);
}

oxadvancedParser::VirtspecifierContext* oxadvancedParser::virtspecifier() {
  VirtspecifierContext *_localctx = _tracker.createInstance<VirtspecifierContext>(_ctx, getState());
  enterRule(_localctx, 294, oxadvancedParser::RuleVirtspecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1751);
    _la = _input->LA(1);
    if (!(_la == oxadvancedParser::Final

    || _la == oxadvancedParser::Override)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PurespecifierContext ------------------------------------------------------------------

oxadvancedParser::PurespecifierContext::PurespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::PurespecifierContext::Assign() {
  return getToken(oxadvancedParser::Assign, 0);
}

tree::TerminalNode* oxadvancedParser::PurespecifierContext::Octalliteral() {
  return getToken(oxadvancedParser::Octalliteral, 0);
}


size_t oxadvancedParser::PurespecifierContext::getRuleIndex() const {
  return oxadvancedParser::RulePurespecifier;
}

void oxadvancedParser::PurespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPurespecifier(this);
}

void oxadvancedParser::PurespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPurespecifier(this);
}

oxadvancedParser::PurespecifierContext* oxadvancedParser::purespecifier() {
  PurespecifierContext *_localctx = _tracker.createInstance<PurespecifierContext>(_ctx, getState());
  enterRule(_localctx, 296, oxadvancedParser::RulePurespecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1753);
    match(oxadvancedParser::Assign);
    setState(1754);
    dynamic_cast<PurespecifierContext *>(_localctx)->val = match(oxadvancedParser::Octalliteral);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseclauseContext ------------------------------------------------------------------

oxadvancedParser::BaseclauseContext::BaseclauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::BaseclauseContext::Colon() {
  return getToken(oxadvancedParser::Colon, 0);
}

oxadvancedParser::BasespecifierlistContext* oxadvancedParser::BaseclauseContext::basespecifierlist() {
  return getRuleContext<oxadvancedParser::BasespecifierlistContext>(0);
}


size_t oxadvancedParser::BaseclauseContext::getRuleIndex() const {
  return oxadvancedParser::RuleBaseclause;
}

void oxadvancedParser::BaseclauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBaseclause(this);
}

void oxadvancedParser::BaseclauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBaseclause(this);
}

oxadvancedParser::BaseclauseContext* oxadvancedParser::baseclause() {
  BaseclauseContext *_localctx = _tracker.createInstance<BaseclauseContext>(_ctx, getState());
  enterRule(_localctx, 298, oxadvancedParser::RuleBaseclause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1756);
    match(oxadvancedParser::Colon);
    setState(1757);
    basespecifierlist(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasespecifierlistContext ------------------------------------------------------------------

oxadvancedParser::BasespecifierlistContext::BasespecifierlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::BasespecifierContext* oxadvancedParser::BasespecifierlistContext::basespecifier() {
  return getRuleContext<oxadvancedParser::BasespecifierContext>(0);
}

tree::TerminalNode* oxadvancedParser::BasespecifierlistContext::Ellipsis() {
  return getToken(oxadvancedParser::Ellipsis, 0);
}

oxadvancedParser::BasespecifierlistContext* oxadvancedParser::BasespecifierlistContext::basespecifierlist() {
  return getRuleContext<oxadvancedParser::BasespecifierlistContext>(0);
}

tree::TerminalNode* oxadvancedParser::BasespecifierlistContext::Comma() {
  return getToken(oxadvancedParser::Comma, 0);
}


size_t oxadvancedParser::BasespecifierlistContext::getRuleIndex() const {
  return oxadvancedParser::RuleBasespecifierlist;
}

void oxadvancedParser::BasespecifierlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasespecifierlist(this);
}

void oxadvancedParser::BasespecifierlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasespecifierlist(this);
}


oxadvancedParser::BasespecifierlistContext* oxadvancedParser::basespecifierlist() {
   return basespecifierlist(0);
}

oxadvancedParser::BasespecifierlistContext* oxadvancedParser::basespecifierlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  oxadvancedParser::BasespecifierlistContext *_localctx = _tracker.createInstance<BasespecifierlistContext>(_ctx, parentState);
  oxadvancedParser::BasespecifierlistContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 300;
  enterRecursionRule(_localctx, 300, oxadvancedParser::RuleBasespecifierlist, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1760);
    basespecifier();
    setState(1762);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 200, _ctx)) {
    case 1: {
      setState(1761);
      match(oxadvancedParser::Ellipsis);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(1772);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 202, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BasespecifierlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBasespecifierlist);
        setState(1764);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1765);
        match(oxadvancedParser::Comma);
        setState(1766);
        basespecifier();
        setState(1768);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 201, _ctx)) {
        case 1: {
          setState(1767);
          match(oxadvancedParser::Ellipsis);
          break;
        }

        default:
          break;
        } 
      }
      setState(1774);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 202, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BasespecifierContext ------------------------------------------------------------------

oxadvancedParser::BasespecifierContext::BasespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::BasetypespecifierContext* oxadvancedParser::BasespecifierContext::basetypespecifier() {
  return getRuleContext<oxadvancedParser::BasetypespecifierContext>(0);
}

tree::TerminalNode* oxadvancedParser::BasespecifierContext::Virtual() {
  return getToken(oxadvancedParser::Virtual, 0);
}

oxadvancedParser::AccessspecifierContext* oxadvancedParser::BasespecifierContext::accessspecifier() {
  return getRuleContext<oxadvancedParser::AccessspecifierContext>(0);
}


size_t oxadvancedParser::BasespecifierContext::getRuleIndex() const {
  return oxadvancedParser::RuleBasespecifier;
}

void oxadvancedParser::BasespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasespecifier(this);
}

void oxadvancedParser::BasespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasespecifier(this);
}

oxadvancedParser::BasespecifierContext* oxadvancedParser::basespecifier() {
  BasespecifierContext *_localctx = _tracker.createInstance<BasespecifierContext>(_ctx, getState());
  enterRule(_localctx, 302, oxadvancedParser::RuleBasespecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1787);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case oxadvancedParser::Decltype:
      case oxadvancedParser::This:
      case oxadvancedParser::Doublecolon:
      case oxadvancedParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1775);
        basetypespecifier();
        break;
      }

      case oxadvancedParser::Virtual: {
        enterOuterAlt(_localctx, 2);
        setState(1776);
        match(oxadvancedParser::Virtual);
        setState(1778);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 71) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 71)) & ((1ULL << (oxadvancedParser::Private - 71))
          | (1ULL << (oxadvancedParser::Protected - 71))
          | (1ULL << (oxadvancedParser::Public - 71)))) != 0)) {
          setState(1777);
          accessspecifier();
        }
        setState(1780);
        basetypespecifier();
        break;
      }

      case oxadvancedParser::Private:
      case oxadvancedParser::Protected:
      case oxadvancedParser::Public: {
        enterOuterAlt(_localctx, 3);
        setState(1781);
        accessspecifier();
        setState(1783);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == oxadvancedParser::Virtual) {
          setState(1782);
          match(oxadvancedParser::Virtual);
        }
        setState(1785);
        basetypespecifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassordecltypeContext ------------------------------------------------------------------

oxadvancedParser::ClassordecltypeContext::ClassordecltypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::ClassnameContext* oxadvancedParser::ClassordecltypeContext::classname() {
  return getRuleContext<oxadvancedParser::ClassnameContext>(0);
}

oxadvancedParser::NestednamespecifierContext* oxadvancedParser::ClassordecltypeContext::nestednamespecifier() {
  return getRuleContext<oxadvancedParser::NestednamespecifierContext>(0);
}

oxadvancedParser::DecltypespecifierContext* oxadvancedParser::ClassordecltypeContext::decltypespecifier() {
  return getRuleContext<oxadvancedParser::DecltypespecifierContext>(0);
}


size_t oxadvancedParser::ClassordecltypeContext::getRuleIndex() const {
  return oxadvancedParser::RuleClassordecltype;
}

void oxadvancedParser::ClassordecltypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassordecltype(this);
}

void oxadvancedParser::ClassordecltypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassordecltype(this);
}

oxadvancedParser::ClassordecltypeContext* oxadvancedParser::classordecltype() {
  ClassordecltypeContext *_localctx = _tracker.createInstance<ClassordecltypeContext>(_ctx, getState());
  enterRule(_localctx, 304, oxadvancedParser::RuleClassordecltype);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1794);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case oxadvancedParser::This:
      case oxadvancedParser::Doublecolon:
      case oxadvancedParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1790);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 206, _ctx)) {
        case 1: {
          setState(1789);
          nestednamespecifier(0);
          break;
        }

        default:
          break;
        }
        setState(1792);
        classname();
        break;
      }

      case oxadvancedParser::Decltype: {
        enterOuterAlt(_localctx, 2);
        setState(1793);
        decltypespecifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasetypespecifierContext ------------------------------------------------------------------

oxadvancedParser::BasetypespecifierContext::BasetypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::ClassordecltypeContext* oxadvancedParser::BasetypespecifierContext::classordecltype() {
  return getRuleContext<oxadvancedParser::ClassordecltypeContext>(0);
}


size_t oxadvancedParser::BasetypespecifierContext::getRuleIndex() const {
  return oxadvancedParser::RuleBasetypespecifier;
}

void oxadvancedParser::BasetypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasetypespecifier(this);
}

void oxadvancedParser::BasetypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasetypespecifier(this);
}

oxadvancedParser::BasetypespecifierContext* oxadvancedParser::basetypespecifier() {
  BasetypespecifierContext *_localctx = _tracker.createInstance<BasetypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 306, oxadvancedParser::RuleBasetypespecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1796);
    classordecltype();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessspecifierContext ------------------------------------------------------------------

oxadvancedParser::AccessspecifierContext::AccessspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::AccessspecifierContext::Private() {
  return getToken(oxadvancedParser::Private, 0);
}

tree::TerminalNode* oxadvancedParser::AccessspecifierContext::Protected() {
  return getToken(oxadvancedParser::Protected, 0);
}

tree::TerminalNode* oxadvancedParser::AccessspecifierContext::Public() {
  return getToken(oxadvancedParser::Public, 0);
}


size_t oxadvancedParser::AccessspecifierContext::getRuleIndex() const {
  return oxadvancedParser::RuleAccessspecifier;
}

void oxadvancedParser::AccessspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessspecifier(this);
}

void oxadvancedParser::AccessspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessspecifier(this);
}

oxadvancedParser::AccessspecifierContext* oxadvancedParser::accessspecifier() {
  AccessspecifierContext *_localctx = _tracker.createInstance<AccessspecifierContext>(_ctx, getState());
  enterRule(_localctx, 308, oxadvancedParser::RuleAccessspecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1798);
    _la = _input->LA(1);
    if (!(((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (oxadvancedParser::Private - 71))
      | (1ULL << (oxadvancedParser::Protected - 71))
      | (1ULL << (oxadvancedParser::Public - 71)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConversionfunctionidContext ------------------------------------------------------------------

oxadvancedParser::ConversionfunctionidContext::ConversionfunctionidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::ConversionfunctionidContext::Operator() {
  return getToken(oxadvancedParser::Operator, 0);
}

oxadvancedParser::ConversiontypeidContext* oxadvancedParser::ConversionfunctionidContext::conversiontypeid() {
  return getRuleContext<oxadvancedParser::ConversiontypeidContext>(0);
}


size_t oxadvancedParser::ConversionfunctionidContext::getRuleIndex() const {
  return oxadvancedParser::RuleConversionfunctionid;
}

void oxadvancedParser::ConversionfunctionidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConversionfunctionid(this);
}

void oxadvancedParser::ConversionfunctionidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConversionfunctionid(this);
}

oxadvancedParser::ConversionfunctionidContext* oxadvancedParser::conversionfunctionid() {
  ConversionfunctionidContext *_localctx = _tracker.createInstance<ConversionfunctionidContext>(_ctx, getState());
  enterRule(_localctx, 310, oxadvancedParser::RuleConversionfunctionid);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1800);
    match(oxadvancedParser::Operator);
    setState(1801);
    conversiontypeid();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConversiontypeidContext ------------------------------------------------------------------

oxadvancedParser::ConversiontypeidContext::ConversiontypeidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::TypespecifierseqContext* oxadvancedParser::ConversiontypeidContext::typespecifierseq() {
  return getRuleContext<oxadvancedParser::TypespecifierseqContext>(0);
}


size_t oxadvancedParser::ConversiontypeidContext::getRuleIndex() const {
  return oxadvancedParser::RuleConversiontypeid;
}

void oxadvancedParser::ConversiontypeidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConversiontypeid(this);
}

void oxadvancedParser::ConversiontypeidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConversiontypeid(this);
}

oxadvancedParser::ConversiontypeidContext* oxadvancedParser::conversiontypeid() {
  ConversiontypeidContext *_localctx = _tracker.createInstance<ConversiontypeidContext>(_ctx, getState());
  enterRule(_localctx, 312, oxadvancedParser::RuleConversiontypeid);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1803);
    typespecifierseq();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CtorinitializerContext ------------------------------------------------------------------

oxadvancedParser::CtorinitializerContext::CtorinitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::CtorinitializerContext::Colon() {
  return getToken(oxadvancedParser::Colon, 0);
}

oxadvancedParser::MeminitializerlistContext* oxadvancedParser::CtorinitializerContext::meminitializerlist() {
  return getRuleContext<oxadvancedParser::MeminitializerlistContext>(0);
}


size_t oxadvancedParser::CtorinitializerContext::getRuleIndex() const {
  return oxadvancedParser::RuleCtorinitializer;
}

void oxadvancedParser::CtorinitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCtorinitializer(this);
}

void oxadvancedParser::CtorinitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCtorinitializer(this);
}

oxadvancedParser::CtorinitializerContext* oxadvancedParser::ctorinitializer() {
  CtorinitializerContext *_localctx = _tracker.createInstance<CtorinitializerContext>(_ctx, getState());
  enterRule(_localctx, 314, oxadvancedParser::RuleCtorinitializer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1805);
    match(oxadvancedParser::Colon);
    setState(1806);
    meminitializerlist();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MeminitializerlistContext ------------------------------------------------------------------

oxadvancedParser::MeminitializerlistContext::MeminitializerlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::MeminitializerContext* oxadvancedParser::MeminitializerlistContext::meminitializer() {
  return getRuleContext<oxadvancedParser::MeminitializerContext>(0);
}

tree::TerminalNode* oxadvancedParser::MeminitializerlistContext::Ellipsis() {
  return getToken(oxadvancedParser::Ellipsis, 0);
}

tree::TerminalNode* oxadvancedParser::MeminitializerlistContext::Comma() {
  return getToken(oxadvancedParser::Comma, 0);
}

oxadvancedParser::MeminitializerlistContext* oxadvancedParser::MeminitializerlistContext::meminitializerlist() {
  return getRuleContext<oxadvancedParser::MeminitializerlistContext>(0);
}


size_t oxadvancedParser::MeminitializerlistContext::getRuleIndex() const {
  return oxadvancedParser::RuleMeminitializerlist;
}

void oxadvancedParser::MeminitializerlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMeminitializerlist(this);
}

void oxadvancedParser::MeminitializerlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMeminitializerlist(this);
}

oxadvancedParser::MeminitializerlistContext* oxadvancedParser::meminitializerlist() {
  MeminitializerlistContext *_localctx = _tracker.createInstance<MeminitializerlistContext>(_ctx, getState());
  enterRule(_localctx, 316, oxadvancedParser::RuleMeminitializerlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1819);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 210, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1808);
      meminitializer();
      setState(1810);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::Ellipsis) {
        setState(1809);
        match(oxadvancedParser::Ellipsis);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1812);
      meminitializer();
      setState(1814);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == oxadvancedParser::Ellipsis) {
        setState(1813);
        match(oxadvancedParser::Ellipsis);
      }
      setState(1816);
      match(oxadvancedParser::Comma);
      setState(1817);
      meminitializerlist();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MeminitializerContext ------------------------------------------------------------------

oxadvancedParser::MeminitializerContext::MeminitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::MeminitializeridContext* oxadvancedParser::MeminitializerContext::meminitializerid() {
  return getRuleContext<oxadvancedParser::MeminitializeridContext>(0);
}

tree::TerminalNode* oxadvancedParser::MeminitializerContext::LeftParen() {
  return getToken(oxadvancedParser::LeftParen, 0);
}

tree::TerminalNode* oxadvancedParser::MeminitializerContext::RightParen() {
  return getToken(oxadvancedParser::RightParen, 0);
}

oxadvancedParser::ExpressionlistContext* oxadvancedParser::MeminitializerContext::expressionlist() {
  return getRuleContext<oxadvancedParser::ExpressionlistContext>(0);
}

oxadvancedParser::BracedinitlistContext* oxadvancedParser::MeminitializerContext::bracedinitlist() {
  return getRuleContext<oxadvancedParser::BracedinitlistContext>(0);
}


size_t oxadvancedParser::MeminitializerContext::getRuleIndex() const {
  return oxadvancedParser::RuleMeminitializer;
}

void oxadvancedParser::MeminitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMeminitializer(this);
}

void oxadvancedParser::MeminitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMeminitializer(this);
}

oxadvancedParser::MeminitializerContext* oxadvancedParser::meminitializer() {
  MeminitializerContext *_localctx = _tracker.createInstance<MeminitializerContext>(_ctx, getState());
  enterRule(_localctx, 318, oxadvancedParser::RuleMeminitializer);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1831);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 212, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1821);
      meminitializerid();
      setState(1822);
      match(oxadvancedParser::LeftParen);
      setState(1824);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << oxadvancedParser::IN)
        | (1ULL << oxadvancedParser::Auto)
        | (1ULL << oxadvancedParser::Bool)
        | (1ULL << oxadvancedParser::Decltype)
        | (1ULL << oxadvancedParser::Delete)
        | (1ULL << oxadvancedParser::Double)
        | (1ULL << oxadvancedParser::False)
        | (1ULL << oxadvancedParser::Float)
        | (1ULL << oxadvancedParser::Int)
        | (1ULL << oxadvancedParser::Array)
        | (1ULL << oxadvancedParser::Decl)
        | (1ULL << oxadvancedParser::Long))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (oxadvancedParser::New - 66))
        | (1ULL << (oxadvancedParser::Nullptr - 66))
        | (1ULL << (oxadvancedParser::Operator - 66))
        | (1ULL << (oxadvancedParser::Short - 66))
        | (1ULL << (oxadvancedParser::Signed - 66))
        | (1ULL << (oxadvancedParser::This - 66))
        | (1ULL << (oxadvancedParser::True - 66))
        | (1ULL << (oxadvancedParser::Unsigned - 66))
        | (1ULL << (oxadvancedParser::Void - 66))
        | (1ULL << (oxadvancedParser::Wchar - 66))
        | (1ULL << (oxadvancedParser::LeftParen - 66))
        | (1ULL << (oxadvancedParser::LeftBracket - 66))
        | (1ULL << (oxadvancedParser::LeftBrace - 66))
        | (1ULL << (oxadvancedParser::Plus - 66))
        | (1ULL << (oxadvancedParser::Minus - 66))
        | (1ULL << (oxadvancedParser::Star - 66))
        | (1ULL << (oxadvancedParser::And - 66))
        | (1ULL << (oxadvancedParser::Or - 66))
        | (1ULL << (oxadvancedParser::Not - 66))
        | (1ULL << (oxadvancedParser::Less - 66)))) != 0) || ((((_la - 137) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 137)) & ((1ULL << (oxadvancedParser::PlusPlus - 137))
        | (1ULL << (oxadvancedParser::MinusMinus - 137))
        | (1ULL << (oxadvancedParser::Doublecolon - 137))
        | (1ULL << (oxadvancedParser::Dot - 137))
        | (1ULL << (oxadvancedParser::Identifier - 137))
        | (1ULL << (oxadvancedParser::Integerliteral - 137))
        | (1ULL << (oxadvancedParser::Characterliteral - 137))
        | (1ULL << (oxadvancedParser::Floatingliteral - 137))
        | (1ULL << (oxadvancedParser::Stringliteral - 137))
        | (1ULL << (oxadvancedParser::Userdefinedintegerliteral - 137))
        | (1ULL << (oxadvancedParser::Userdefinedfloatingliteral - 137))
        | (1ULL << (oxadvancedParser::Userdefinedstringliteral - 137))
        | (1ULL << (oxadvancedParser::Userdefinedcharacterliteral - 137)))) != 0)) {
        setState(1823);
        expressionlist();
      }
      setState(1826);
      match(oxadvancedParser::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1828);
      meminitializerid();
      setState(1829);
      bracedinitlist();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MeminitializeridContext ------------------------------------------------------------------

oxadvancedParser::MeminitializeridContext::MeminitializeridContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

oxadvancedParser::ClassordecltypeContext* oxadvancedParser::MeminitializeridContext::classordecltype() {
  return getRuleContext<oxadvancedParser::ClassordecltypeContext>(0);
}

tree::TerminalNode* oxadvancedParser::MeminitializeridContext::Identifier() {
  return getToken(oxadvancedParser::Identifier, 0);
}


size_t oxadvancedParser::MeminitializeridContext::getRuleIndex() const {
  return oxadvancedParser::RuleMeminitializerid;
}

void oxadvancedParser::MeminitializeridContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMeminitializerid(this);
}

void oxadvancedParser::MeminitializeridContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMeminitializerid(this);
}

oxadvancedParser::MeminitializeridContext* oxadvancedParser::meminitializerid() {
  MeminitializeridContext *_localctx = _tracker.createInstance<MeminitializeridContext>(_ctx, getState());
  enterRule(_localctx, 320, oxadvancedParser::RuleMeminitializerid);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1835);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 213, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1833);
      classordecltype();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1834);
      match(oxadvancedParser::Identifier);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorfunctionidContext ------------------------------------------------------------------

oxadvancedParser::OperatorfunctionidContext::OperatorfunctionidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::OperatorfunctionidContext::Operator() {
  return getToken(oxadvancedParser::Operator, 0);
}

oxadvancedParser::TheoperatorContext* oxadvancedParser::OperatorfunctionidContext::theoperator() {
  return getRuleContext<oxadvancedParser::TheoperatorContext>(0);
}


size_t oxadvancedParser::OperatorfunctionidContext::getRuleIndex() const {
  return oxadvancedParser::RuleOperatorfunctionid;
}

void oxadvancedParser::OperatorfunctionidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorfunctionid(this);
}

void oxadvancedParser::OperatorfunctionidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorfunctionid(this);
}

oxadvancedParser::OperatorfunctionidContext* oxadvancedParser::operatorfunctionid() {
  OperatorfunctionidContext *_localctx = _tracker.createInstance<OperatorfunctionidContext>(_ctx, getState());
  enterRule(_localctx, 322, oxadvancedParser::RuleOperatorfunctionid);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1837);
    match(oxadvancedParser::Operator);
    setState(1838);
    theoperator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteraloperatoridContext ------------------------------------------------------------------

oxadvancedParser::LiteraloperatoridContext::LiteraloperatoridContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::LiteraloperatoridContext::Operator() {
  return getToken(oxadvancedParser::Operator, 0);
}

tree::TerminalNode* oxadvancedParser::LiteraloperatoridContext::Stringliteral() {
  return getToken(oxadvancedParser::Stringliteral, 0);
}

tree::TerminalNode* oxadvancedParser::LiteraloperatoridContext::Identifier() {
  return getToken(oxadvancedParser::Identifier, 0);
}

tree::TerminalNode* oxadvancedParser::LiteraloperatoridContext::Userdefinedstringliteral() {
  return getToken(oxadvancedParser::Userdefinedstringliteral, 0);
}


size_t oxadvancedParser::LiteraloperatoridContext::getRuleIndex() const {
  return oxadvancedParser::RuleLiteraloperatorid;
}

void oxadvancedParser::LiteraloperatoridContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteraloperatorid(this);
}

void oxadvancedParser::LiteraloperatoridContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteraloperatorid(this);
}

oxadvancedParser::LiteraloperatoridContext* oxadvancedParser::literaloperatorid() {
  LiteraloperatoridContext *_localctx = _tracker.createInstance<LiteraloperatoridContext>(_ctx, getState());
  enterRule(_localctx, 324, oxadvancedParser::RuleLiteraloperatorid);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1845);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 214, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1840);
      match(oxadvancedParser::Operator);
      setState(1841);
      match(oxadvancedParser::Stringliteral);
      setState(1842);
      match(oxadvancedParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1843);
      match(oxadvancedParser::Operator);
      setState(1844);
      match(oxadvancedParser::Userdefinedstringliteral);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RightShiftContext ------------------------------------------------------------------

oxadvancedParser::RightShiftContext::RightShiftContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> oxadvancedParser::RightShiftContext::Greater() {
  return getTokens(oxadvancedParser::Greater);
}

tree::TerminalNode* oxadvancedParser::RightShiftContext::Greater(size_t i) {
  return getToken(oxadvancedParser::Greater, i);
}


size_t oxadvancedParser::RightShiftContext::getRuleIndex() const {
  return oxadvancedParser::RuleRightShift;
}

void oxadvancedParser::RightShiftContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRightShift(this);
}

void oxadvancedParser::RightShiftContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRightShift(this);
}

oxadvancedParser::RightShiftContext* oxadvancedParser::rightShift() {
  RightShiftContext *_localctx = _tracker.createInstance<RightShiftContext>(_ctx, getState());
  enterRule(_localctx, 326, oxadvancedParser::RuleRightShift);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1847);
    match(oxadvancedParser::Greater);
    setState(1848);
    match(oxadvancedParser::Greater);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RightShiftAssignContext ------------------------------------------------------------------

oxadvancedParser::RightShiftAssignContext::RightShiftAssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> oxadvancedParser::RightShiftAssignContext::Greater() {
  return getTokens(oxadvancedParser::Greater);
}

tree::TerminalNode* oxadvancedParser::RightShiftAssignContext::Greater(size_t i) {
  return getToken(oxadvancedParser::Greater, i);
}

tree::TerminalNode* oxadvancedParser::RightShiftAssignContext::Assign() {
  return getToken(oxadvancedParser::Assign, 0);
}


size_t oxadvancedParser::RightShiftAssignContext::getRuleIndex() const {
  return oxadvancedParser::RuleRightShiftAssign;
}

void oxadvancedParser::RightShiftAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRightShiftAssign(this);
}

void oxadvancedParser::RightShiftAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRightShiftAssign(this);
}

oxadvancedParser::RightShiftAssignContext* oxadvancedParser::rightShiftAssign() {
  RightShiftAssignContext *_localctx = _tracker.createInstance<RightShiftAssignContext>(_ctx, getState());
  enterRule(_localctx, 328, oxadvancedParser::RuleRightShiftAssign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1850);
    match(oxadvancedParser::Greater);
    setState(1851);
    match(oxadvancedParser::Greater);
    setState(1852);
    match(oxadvancedParser::Assign);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TheoperatorContext ------------------------------------------------------------------

oxadvancedParser::TheoperatorContext::TheoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::New() {
  return getToken(oxadvancedParser::New, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::Delete() {
  return getToken(oxadvancedParser::Delete, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::LeftBracket() {
  return getToken(oxadvancedParser::LeftBracket, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::RightBracket() {
  return getToken(oxadvancedParser::RightBracket, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::Plus() {
  return getToken(oxadvancedParser::Plus, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::Minus() {
  return getToken(oxadvancedParser::Minus, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::Star() {
  return getToken(oxadvancedParser::Star, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::Div() {
  return getToken(oxadvancedParser::Div, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::Mod() {
  return getToken(oxadvancedParser::Mod, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::Caret() {
  return getToken(oxadvancedParser::Caret, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::And() {
  return getToken(oxadvancedParser::And, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::Or() {
  return getToken(oxadvancedParser::Or, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::Tilde() {
  return getToken(oxadvancedParser::Tilde, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::Not() {
  return getToken(oxadvancedParser::Not, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::Assign() {
  return getToken(oxadvancedParser::Assign, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::Less() {
  return getToken(oxadvancedParser::Less, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::Greater() {
  return getToken(oxadvancedParser::Greater, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::PlusAssign() {
  return getToken(oxadvancedParser::PlusAssign, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::MinusAssign() {
  return getToken(oxadvancedParser::MinusAssign, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::StarAssign() {
  return getToken(oxadvancedParser::StarAssign, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::DivAssign() {
  return getToken(oxadvancedParser::DivAssign, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::ModAssign() {
  return getToken(oxadvancedParser::ModAssign, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::XorAssign() {
  return getToken(oxadvancedParser::XorAssign, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::AndAssign() {
  return getToken(oxadvancedParser::AndAssign, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::OrAssign() {
  return getToken(oxadvancedParser::OrAssign, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::LeftShift() {
  return getToken(oxadvancedParser::LeftShift, 0);
}

oxadvancedParser::RightShiftContext* oxadvancedParser::TheoperatorContext::rightShift() {
  return getRuleContext<oxadvancedParser::RightShiftContext>(0);
}

oxadvancedParser::RightShiftAssignContext* oxadvancedParser::TheoperatorContext::rightShiftAssign() {
  return getRuleContext<oxadvancedParser::RightShiftAssignContext>(0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::LeftShiftAssign() {
  return getToken(oxadvancedParser::LeftShiftAssign, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::Equal() {
  return getToken(oxadvancedParser::Equal, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::NotEqual() {
  return getToken(oxadvancedParser::NotEqual, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::LessEqual() {
  return getToken(oxadvancedParser::LessEqual, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::GreaterEqual() {
  return getToken(oxadvancedParser::GreaterEqual, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::AndAnd() {
  return getToken(oxadvancedParser::AndAnd, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::OrOr() {
  return getToken(oxadvancedParser::OrOr, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::PlusPlus() {
  return getToken(oxadvancedParser::PlusPlus, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::MinusMinus() {
  return getToken(oxadvancedParser::MinusMinus, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::Comma() {
  return getToken(oxadvancedParser::Comma, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::ArrowStar() {
  return getToken(oxadvancedParser::ArrowStar, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::Arrow() {
  return getToken(oxadvancedParser::Arrow, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::LeftParen() {
  return getToken(oxadvancedParser::LeftParen, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::RightParen() {
  return getToken(oxadvancedParser::RightParen, 0);
}

tree::TerminalNode* oxadvancedParser::TheoperatorContext::Dot() {
  return getToken(oxadvancedParser::Dot, 0);
}


size_t oxadvancedParser::TheoperatorContext::getRuleIndex() const {
  return oxadvancedParser::RuleTheoperator;
}

void oxadvancedParser::TheoperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTheoperator(this);
}

void oxadvancedParser::TheoperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTheoperator(this);
}

oxadvancedParser::TheoperatorContext* oxadvancedParser::theoperator() {
  TheoperatorContext *_localctx = _tracker.createInstance<TheoperatorContext>(_ctx, getState());
  enterRule(_localctx, 330, oxadvancedParser::RuleTheoperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1903);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 215, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1854);
      match(oxadvancedParser::New);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1855);
      match(oxadvancedParser::Delete);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1856);
      match(oxadvancedParser::New);
      setState(1857);
      match(oxadvancedParser::LeftBracket);
      setState(1858);
      match(oxadvancedParser::RightBracket);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1859);
      match(oxadvancedParser::Delete);
      setState(1860);
      match(oxadvancedParser::LeftBracket);
      setState(1861);
      match(oxadvancedParser::RightBracket);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1862);
      match(oxadvancedParser::Plus);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1863);
      match(oxadvancedParser::Minus);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1864);
      match(oxadvancedParser::Star);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1865);
      match(oxadvancedParser::Div);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1866);
      match(oxadvancedParser::Mod);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1867);
      match(oxadvancedParser::Caret);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1868);
      match(oxadvancedParser::And);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1869);
      match(oxadvancedParser::Or);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(1870);
      match(oxadvancedParser::Tilde);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(1871);
      match(oxadvancedParser::Not);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(1872);
      match(oxadvancedParser::Assign);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(1873);
      match(oxadvancedParser::Less);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(1874);
      match(oxadvancedParser::Greater);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(1875);
      match(oxadvancedParser::PlusAssign);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(1876);
      match(oxadvancedParser::MinusAssign);
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(1877);
      match(oxadvancedParser::StarAssign);
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(1878);
      match(oxadvancedParser::DivAssign);
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(1879);
      match(oxadvancedParser::ModAssign);
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(1880);
      match(oxadvancedParser::XorAssign);
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(1881);
      match(oxadvancedParser::AndAssign);
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(1882);
      match(oxadvancedParser::OrAssign);
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(1883);
      match(oxadvancedParser::LeftShift);
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(1884);
      rightShift();
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(1885);
      rightShiftAssign();
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(1886);
      match(oxadvancedParser::LeftShiftAssign);
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(1887);
      match(oxadvancedParser::Equal);
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(1888);
      match(oxadvancedParser::NotEqual);
      break;
    }

    case 32: {
      enterOuterAlt(_localctx, 32);
      setState(1889);
      match(oxadvancedParser::LessEqual);
      break;
    }

    case 33: {
      enterOuterAlt(_localctx, 33);
      setState(1890);
      match(oxadvancedParser::GreaterEqual);
      break;
    }

    case 34: {
      enterOuterAlt(_localctx, 34);
      setState(1891);
      match(oxadvancedParser::AndAnd);
      break;
    }

    case 35: {
      enterOuterAlt(_localctx, 35);
      setState(1892);
      match(oxadvancedParser::OrOr);
      break;
    }

    case 36: {
      enterOuterAlt(_localctx, 36);
      setState(1893);
      match(oxadvancedParser::PlusPlus);
      break;
    }

    case 37: {
      enterOuterAlt(_localctx, 37);
      setState(1894);
      match(oxadvancedParser::MinusMinus);
      break;
    }

    case 38: {
      enterOuterAlt(_localctx, 38);
      setState(1895);
      match(oxadvancedParser::Comma);
      break;
    }

    case 39: {
      enterOuterAlt(_localctx, 39);
      setState(1896);
      match(oxadvancedParser::ArrowStar);
      break;
    }

    case 40: {
      enterOuterAlt(_localctx, 40);
      setState(1897);
      match(oxadvancedParser::Arrow);
      break;
    }

    case 41: {
      enterOuterAlt(_localctx, 41);
      setState(1898);
      match(oxadvancedParser::LeftParen);
      setState(1899);
      match(oxadvancedParser::RightParen);
      break;
    }

    case 42: {
      enterOuterAlt(_localctx, 42);
      setState(1900);
      match(oxadvancedParser::LeftBracket);
      setState(1901);
      match(oxadvancedParser::RightBracket);
      break;
    }

    case 43: {
      enterOuterAlt(_localctx, 43);
      setState(1902);
      match(oxadvancedParser::Dot);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

oxadvancedParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::LiteralContext::Integerliteral() {
  return getToken(oxadvancedParser::Integerliteral, 0);
}

tree::TerminalNode* oxadvancedParser::LiteralContext::Characterliteral() {
  return getToken(oxadvancedParser::Characterliteral, 0);
}

tree::TerminalNode* oxadvancedParser::LiteralContext::Floatingliteral() {
  return getToken(oxadvancedParser::Floatingliteral, 0);
}

tree::TerminalNode* oxadvancedParser::LiteralContext::Stringliteral() {
  return getToken(oxadvancedParser::Stringliteral, 0);
}

oxadvancedParser::BooleanliteralContext* oxadvancedParser::LiteralContext::booleanliteral() {
  return getRuleContext<oxadvancedParser::BooleanliteralContext>(0);
}

oxadvancedParser::PointerliteralContext* oxadvancedParser::LiteralContext::pointerliteral() {
  return getRuleContext<oxadvancedParser::PointerliteralContext>(0);
}

oxadvancedParser::UserdefinedliteralContext* oxadvancedParser::LiteralContext::userdefinedliteral() {
  return getRuleContext<oxadvancedParser::UserdefinedliteralContext>(0);
}


size_t oxadvancedParser::LiteralContext::getRuleIndex() const {
  return oxadvancedParser::RuleLiteral;
}

void oxadvancedParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void oxadvancedParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}

oxadvancedParser::LiteralContext* oxadvancedParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 332, oxadvancedParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1912);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case oxadvancedParser::Integerliteral: {
        enterOuterAlt(_localctx, 1);
        setState(1905);
        match(oxadvancedParser::Integerliteral);
        break;
      }

      case oxadvancedParser::Characterliteral: {
        enterOuterAlt(_localctx, 2);
        setState(1906);
        match(oxadvancedParser::Characterliteral);
        break;
      }

      case oxadvancedParser::Floatingliteral: {
        enterOuterAlt(_localctx, 3);
        setState(1907);
        match(oxadvancedParser::Floatingliteral);
        break;
      }

      case oxadvancedParser::Stringliteral: {
        enterOuterAlt(_localctx, 4);
        setState(1908);
        match(oxadvancedParser::Stringliteral);
        break;
      }

      case oxadvancedParser::False:
      case oxadvancedParser::True: {
        enterOuterAlt(_localctx, 5);
        setState(1909);
        booleanliteral();
        break;
      }

      case oxadvancedParser::Nullptr: {
        enterOuterAlt(_localctx, 6);
        setState(1910);
        pointerliteral();
        break;
      }

      case oxadvancedParser::Userdefinedintegerliteral:
      case oxadvancedParser::Userdefinedfloatingliteral:
      case oxadvancedParser::Userdefinedstringliteral:
      case oxadvancedParser::Userdefinedcharacterliteral: {
        enterOuterAlt(_localctx, 7);
        setState(1911);
        userdefinedliteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanliteralContext ------------------------------------------------------------------

oxadvancedParser::BooleanliteralContext::BooleanliteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::BooleanliteralContext::False() {
  return getToken(oxadvancedParser::False, 0);
}

tree::TerminalNode* oxadvancedParser::BooleanliteralContext::True() {
  return getToken(oxadvancedParser::True, 0);
}


size_t oxadvancedParser::BooleanliteralContext::getRuleIndex() const {
  return oxadvancedParser::RuleBooleanliteral;
}

void oxadvancedParser::BooleanliteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBooleanliteral(this);
}

void oxadvancedParser::BooleanliteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBooleanliteral(this);
}

oxadvancedParser::BooleanliteralContext* oxadvancedParser::booleanliteral() {
  BooleanliteralContext *_localctx = _tracker.createInstance<BooleanliteralContext>(_ctx, getState());
  enterRule(_localctx, 334, oxadvancedParser::RuleBooleanliteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1914);
    _la = _input->LA(1);
    if (!(_la == oxadvancedParser::False

    || _la == oxadvancedParser::True)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerliteralContext ------------------------------------------------------------------

oxadvancedParser::PointerliteralContext::PointerliteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::PointerliteralContext::Nullptr() {
  return getToken(oxadvancedParser::Nullptr, 0);
}


size_t oxadvancedParser::PointerliteralContext::getRuleIndex() const {
  return oxadvancedParser::RulePointerliteral;
}

void oxadvancedParser::PointerliteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerliteral(this);
}

void oxadvancedParser::PointerliteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerliteral(this);
}

oxadvancedParser::PointerliteralContext* oxadvancedParser::pointerliteral() {
  PointerliteralContext *_localctx = _tracker.createInstance<PointerliteralContext>(_ctx, getState());
  enterRule(_localctx, 336, oxadvancedParser::RulePointerliteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1916);
    match(oxadvancedParser::Nullptr);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UserdefinedliteralContext ------------------------------------------------------------------

oxadvancedParser::UserdefinedliteralContext::UserdefinedliteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* oxadvancedParser::UserdefinedliteralContext::Userdefinedintegerliteral() {
  return getToken(oxadvancedParser::Userdefinedintegerliteral, 0);
}

tree::TerminalNode* oxadvancedParser::UserdefinedliteralContext::Userdefinedfloatingliteral() {
  return getToken(oxadvancedParser::Userdefinedfloatingliteral, 0);
}

tree::TerminalNode* oxadvancedParser::UserdefinedliteralContext::Userdefinedstringliteral() {
  return getToken(oxadvancedParser::Userdefinedstringliteral, 0);
}

tree::TerminalNode* oxadvancedParser::UserdefinedliteralContext::Userdefinedcharacterliteral() {
  return getToken(oxadvancedParser::Userdefinedcharacterliteral, 0);
}


size_t oxadvancedParser::UserdefinedliteralContext::getRuleIndex() const {
  return oxadvancedParser::RuleUserdefinedliteral;
}

void oxadvancedParser::UserdefinedliteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUserdefinedliteral(this);
}

void oxadvancedParser::UserdefinedliteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<oxadvancedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUserdefinedliteral(this);
}

oxadvancedParser::UserdefinedliteralContext* oxadvancedParser::userdefinedliteral() {
  UserdefinedliteralContext *_localctx = _tracker.createInstance<UserdefinedliteralContext>(_ctx, getState());
  enterRule(_localctx, 338, oxadvancedParser::RuleUserdefinedliteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1918);
    _la = _input->LA(1);
    if (!(((((_la - 159) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 159)) & ((1ULL << (oxadvancedParser::Userdefinedintegerliteral - 159))
      | (1ULL << (oxadvancedParser::Userdefinedfloatingliteral - 159))
      | (1ULL << (oxadvancedParser::Userdefinedstringliteral - 159))
      | (1ULL << (oxadvancedParser::Userdefinedcharacterliteral - 159)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool oxadvancedParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 6: return nestednamespecifierSempred(dynamic_cast<NestednamespecifierContext *>(context), predicateIndex);
    case 11: return capturelistSempred(dynamic_cast<CapturelistContext *>(context), predicateIndex);
    case 16: return postfixexpressionSempred(dynamic_cast<PostfixexpressionContext *>(context), predicateIndex);
    case 27: return noptrnewdeclaratorSempred(dynamic_cast<NoptrnewdeclaratorContext *>(context), predicateIndex);
    case 32: return multiplicativeexpressionSempred(dynamic_cast<MultiplicativeexpressionContext *>(context), predicateIndex);
    case 33: return additiveexpressionSempred(dynamic_cast<AdditiveexpressionContext *>(context), predicateIndex);
    case 34: return shiftexpressionSempred(dynamic_cast<ShiftexpressionContext *>(context), predicateIndex);
    case 35: return relationalexpressionSempred(dynamic_cast<RelationalexpressionContext *>(context), predicateIndex);
    case 36: return equalityexpressionSempred(dynamic_cast<EqualityexpressionContext *>(context), predicateIndex);
    case 37: return andexpressionSempred(dynamic_cast<AndexpressionContext *>(context), predicateIndex);
    case 38: return exclusiveorexpressionSempred(dynamic_cast<ExclusiveorexpressionContext *>(context), predicateIndex);
    case 39: return logicalandexpressionSempred(dynamic_cast<LogicalandexpressionContext *>(context), predicateIndex);
    case 40: return logicalorexpressionSempred(dynamic_cast<LogicalorexpressionContext *>(context), predicateIndex);
    case 45: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 51: return statementseqSempred(dynamic_cast<StatementseqContext *>(context), predicateIndex);
    case 58: return declarationseqSempred(dynamic_cast<DeclarationseqContext *>(context), predicateIndex);
    case 87: return enumeratorlistSempred(dynamic_cast<EnumeratorlistContext *>(context), predicateIndex);
    case 100: return balancedtokenseqSempred(dynamic_cast<BalancedtokenseqContext *>(context), predicateIndex);
    case 102: return initdeclaratorlistSempred(dynamic_cast<InitdeclaratorlistContext *>(context), predicateIndex);
    case 106: return noptrdeclaratorSempred(dynamic_cast<NoptrdeclaratorContext *>(context), predicateIndex);
    case 116: return noptrabstractdeclaratorSempred(dynamic_cast<NoptrabstractdeclaratorContext *>(context), predicateIndex);
    case 118: return noptrabstractpackdeclaratorSempred(dynamic_cast<NoptrabstractpackdeclaratorContext *>(context), predicateIndex);
    case 120: return parameterWQdeclarationlistSempred(dynamic_cast<ParameterWQdeclarationlistContext *>(context), predicateIndex);
    case 123: return parameterdeclarationlistSempred(dynamic_cast<ParameterdeclarationlistContext *>(context), predicateIndex);
    case 131: return initializerlistSempred(dynamic_cast<InitializerlistContext *>(context), predicateIndex);
    case 132: return initializerlistoxmatrixSempred(dynamic_cast<InitializerlistoxmatrixContext *>(context), predicateIndex);
    case 144: return memberdeclaratorlistSempred(dynamic_cast<MemberdeclaratorlistContext *>(context), predicateIndex);
    case 146: return virtspecifierseqSempred(dynamic_cast<VirtspecifierseqContext *>(context), predicateIndex);
    case 150: return basespecifierlistSempred(dynamic_cast<BasespecifierlistContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::nestednamespecifierSempred(NestednamespecifierContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::capturelistSempred(CapturelistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::postfixexpressionSempred(PostfixexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 4);
    case 3: return precpred(_ctx, 3);
    case 4: return precpred(_ctx, 2);
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::noptrnewdeclaratorSempred(NoptrnewdeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::multiplicativeexpressionSempred(MultiplicativeexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 12);
    case 8: return precpred(_ctx, 11);
    case 9: return precpred(_ctx, 10);
    case 10: return precpred(_ctx, 9);
    case 11: return precpred(_ctx, 8);
    case 12: return precpred(_ctx, 7);
    case 13: return precpred(_ctx, 6);
    case 14: return precpred(_ctx, 5);
    case 15: return precpred(_ctx, 4);
    case 16: return precpred(_ctx, 3);
    case 17: return precpred(_ctx, 2);
    case 18: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::additiveexpressionSempred(AdditiveexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 19: return precpred(_ctx, 4);
    case 20: return precpred(_ctx, 3);
    case 21: return precpred(_ctx, 2);
    case 22: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::shiftexpressionSempred(ShiftexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 23: return precpred(_ctx, 2);
    case 24: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::relationalexpressionSempred(RelationalexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 25: return precpred(_ctx, 4);
    case 26: return precpred(_ctx, 3);
    case 27: return precpred(_ctx, 2);
    case 28: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::equalityexpressionSempred(EqualityexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 29: return precpred(_ctx, 4);
    case 30: return precpred(_ctx, 3);
    case 31: return precpred(_ctx, 2);
    case 32: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::andexpressionSempred(AndexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 33: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::exclusiveorexpressionSempred(ExclusiveorexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 34: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::logicalandexpressionSempred(LogicalandexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 35: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::logicalorexpressionSempred(LogicalorexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 36: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 37: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::statementseqSempred(StatementseqContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 38: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::declarationseqSempred(DeclarationseqContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 39: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::enumeratorlistSempred(EnumeratorlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 40: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::balancedtokenseqSempred(BalancedtokenseqContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 41: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::initdeclaratorlistSempred(InitdeclaratorlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 42: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::noptrdeclaratorSempred(NoptrdeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 43: return precpred(_ctx, 3);
    case 44: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::noptrabstractdeclaratorSempred(NoptrabstractdeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 45: return precpred(_ctx, 5);
    case 46: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::noptrabstractpackdeclaratorSempred(NoptrabstractpackdeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 47: return precpred(_ctx, 3);
    case 48: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::parameterWQdeclarationlistSempred(ParameterWQdeclarationlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 49: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::parameterdeclarationlistSempred(ParameterdeclarationlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 50: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::initializerlistSempred(InitializerlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 51: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::initializerlistoxmatrixSempred(InitializerlistoxmatrixContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 52: return precpred(_ctx, 2);
    case 53: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::memberdeclaratorlistSempred(MemberdeclaratorlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 54: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::virtspecifierseqSempred(VirtspecifierseqContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 55: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool oxadvancedParser::basespecifierlistSempred(BasespecifierlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 56: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> oxadvancedParser::_decisionToDFA;
atn::PredictionContextCache oxadvancedParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN oxadvancedParser::_atn;
std::vector<uint16_t> oxadvancedParser::_serializedATN;

std::vector<std::string> oxadvancedParser::_ruleNames = {
  "compilationUnit", "translationunit", "primaryexpression", "idexpression", 
  "unqualifiedid", "qualifiedid", "nestednamespecifier", "lambdaexpression", 
  "lambdaintroducer", "lambdacapture", "capturedefault", "capturelist", 
  "capture", "simplecapture", "initcapture", "lambdadeclarator", "postfixexpression", 
  "matrixIndex", "matrixIndexSeq", "transpose", "expressionlist", "unaryexpression", 
  "unaryoperator", "newexpression", "newplacement", "newtypeid", "newdeclarator", 
  "noptrnewdeclarator", "newinitializer", "deleteexpression", "castexpression", 
  "pmexpression", "multiplicativeexpression", "additiveexpression", "shiftexpression", 
  "relationalexpression", "equalityexpression", "andexpression", "exclusiveorexpression", 
  "logicalandexpression", "logicalorexpression", "conditionalexpression", 
  "assignmentexpression", "multiplereturnvalues", "assignmentoperator", 
  "expression", "constantexpression", "statement", "labeledstatement", "expressionstatement", 
  "compoundstatement", "statementseq", "selectionstatement", "condition", 
  "iterationstatement", "forinitstatement", "jumpstatement", "declarationstatement", 
  "declarationseq", "declaration", "javadoc", "external", "functionname", 
  "external_function", "bodyclasse", "blockdeclaration", "aliasdeclaration", 
  "simpledeclaration", "static_assertdeclaration", "emptydeclaration", "declspecifier", 
  "declspecifierseq", "storageclassspecifier", "functionspecifier", "typespecifier", 
  "trailingtypespecifier", "typespecifierseq", "trailingtypespecifierseq", 
  "simpletypespecifier", "thetypename", "decltypespecifier", "elaboratedtypespecifier", 
  "enumspecifier", "enumhead", "opaqueenumdeclaration", "enumkey", "enumbase", 
  "enumeratorlist", "enumeratordefinition", "enumerator", "namespacename", 
  "originalnamespacename", "namespacedefinition", "namednamespacedefinition", 
  "originalnamespacedefinition", "extensionnamespacedefinition", "unnamednamespacedefinition", 
  "namespacebody", "namespacealias", "linkagespecification", "balancedtokenseq", 
  "balancedtoken", "initdeclaratorlist", "initdeclarator", "declarator", 
  "ptrdeclarator", "noptrdeclarator", "parametersandqualifiers", "parametersWQ", 
  "trailingreturntype", "cvqualifierseq", "cvqualifier", "declaratorid", 
  "thetypeid", "abstractdeclarator", "ptrabstractdeclarator", "noptrabstractdeclarator", 
  "abstractpackdeclarator", "noptrabstractpackdeclarator", "parameterWQdeclarationclause", 
  "parameterWQdeclarationlist", "parameterWQdeclaration", "optionalargument", 
  "parameterdeclarationlist", "functionarguments", "parameterdeclaration", 
  "functiondefinition", "functionbody", "initializer", "braceorequalinitializer", 
  "initializerclause", "initializerlist", "initializerlistoxmatrix", "oxmatrix", 
  "bracedinitlist", "classname", "classspecifier", "classhead", "classheadname", 
  "classvirtspecifier", "classkey", "memberspecification", "accessmemberspecification", 
  "memberdeclaration", "memberdeclaratorlist", "memberdeclarator", "virtspecifierseq", 
  "virtspecifier", "purespecifier", "baseclause", "basespecifierlist", "basespecifier", 
  "classordecltype", "basetypespecifier", "accessspecifier", "conversionfunctionid", 
  "conversiontypeid", "ctorinitializer", "meminitializerlist", "meminitializer", 
  "meminitializerid", "operatorfunctionid", "literaloperatorid", "rightShift", 
  "rightShiftAssign", "theoperator", "literal", "booleanliteral", "pointerliteral", 
  "userdefinedliteral"
};

std::vector<std::string> oxadvancedParser::_literalNames = {
  "", "'''", "'NaN'", "'Inf'", "'**'", "'./'", "'.^'", "'.<'", "'.>'", "'.<='", 
  "'.>='", "'.=='", "'.!='", "'.&&'", "'.||'", "'.\u003F'", "'.:'", "'~='", 
  "'.*='", "'./='", "'serial'", "'::~'", "'in'", "", "", "'alignas'", "'alignof'", 
  "'asm'", "'auto'", "'bool'", "'break'", "'case'", "'catch'", "'char'", 
  "'char16_t'", "'char32_t'", "'class'", "'const'", "'constexpr'", "'const_cast'", 
  "'continue'", "'decltype'", "'default'", "'delete'", "'do'", "'double'", 
  "'dynamic_cast'", "'else'", "'enum'", "'explicit'", "'extern'", "'FALSE'", 
  "'final'", "'float'", "'for'", "'foreach'", "'friend'", "'goto'", "'if'", 
  "'inline'", "'int'", "'array'", "'decl'", "'long'", "'mutable'", "'namespace'", 
  "'new'", "'noexcept'", "'nullptr'", "'operator'", "'override'", "'private'", 
  "'protected'", "'public'", "'register'", "'reinterpret_cast'", "'return'", 
  "'short'", "'signed'", "'static'", "'static_assert'", "'static_cast'", 
  "'struct'", "'switch'", "'switch_single'", "'template'", "'this'", "'thread_local'", 
  "'throw'", "'TRUE'", "'try'", "'typedef'", "'typeid'", "'typename'", "'unsigned'", 
  "'using'", "'virtual'", "'void'", "'volatile'", "'wchar_t'", "'while'", 
  "'('", "')'", "'['", "']'", "'{'", "'}'", "'+'", "'-'", "'*'", "'/'", 
  "'%'", "'^'", "'&'", "'|'", "'~'", "'!'", "'='", "'<'", "'>'", "'+='", 
  "'-='", "'*='", "'/='", "'%='", "'^='", "'&='", "'parallel'", "'|='", 
  "'<<'", "'<<='", "'=='", "'!='", "'<='", "'>='", "'&&'", "'||'", "'++'", 
  "'--'", "','", "'->*'", "'->'", "'\u003F'", "':'", "'::'", "';'", "'.'", 
  "'.*'", "'...'"
};

std::vector<std::string> oxadvancedParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "IN", "MultiLineMacro", "Directive", "Alignas", "Alignof", 
  "Asm", "Auto", "Bool", "Break", "Case", "Catch", "Char", "Char16", "Char32", 
  "Class", "Const", "Constexpr", "Const_cast", "Continue", "Decltype", "Default", 
  "Delete", "Do", "Double", "Dynamic_cast", "Else", "Enum", "Explicit", 
  "Extern", "False", "Final", "Float", "For", "Foreach", "Friend", "Goto", 
  "If", "Inline", "Int", "Array", "Decl", "Long", "Mutable", "Namespace", 
  "New", "Noexcept", "Nullptr", "Operator", "Override", "Private", "Protected", 
  "Public", "Register", "Reinterpret_cast", "Return", "Short", "Signed", 
  "Static", "Static_assert", "Static_cast", "Struct", "Switch", "Switchsingle", 
  "Template", "This", "Thread_local", "Throw", "True", "Try", "Typedef", 
  "Typeid", "Typename", "Unsigned", "Using", "Virtual", "Void", "Volatile", 
  "Wchar", "While", "LeftParen", "RightParen", "LeftBracket", "RightBracket", 
  "LeftBrace", "RightBrace", "Plus", "Minus", "Star", "Div", "Mod", "Caret", 
  "And", "Or", "Tilde", "Not", "Assign", "Less", "Greater", "PlusAssign", 
  "MinusAssign", "StarAssign", "DivAssign", "ModAssign", "XorAssign", "AndAssign", 
  "Parallel", "OrAssign", "LeftShift", "LeftShiftAssign", "Equal", "NotEqual", 
  "LessEqual", "GreaterEqual", "AndAnd", "OrOr", "PlusPlus", "MinusMinus", 
  "Comma", "ArrowStar", "Arrow", "Question", "Colon", "Doublecolon", "Semi", 
  "Dot", "DotStar", "Ellipsis", "Identifier", "Integerliteral", "Decimalliteral", 
  "Octalliteral", "Hexadecimalliteral", "Binaryliteral", "Integersuffix", 
  "Characterliteral", "Floatingliteral", "Stringliteral", "Userdefinedintegerliteral", 
  "Userdefinedfloatingliteral", "Userdefinedstringliteral", "Userdefinedcharacterliteral", 
  "Whitespace", "Newline", "JavaDoc", "BlockComment", "LineComment"
};

dfa::Vocabulary oxadvancedParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> oxadvancedParser::_tokenNames;

oxadvancedParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0xa9, 0x783, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 
       0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 
       0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 
       0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 0x9, 0x46, 0x4, 0x47, 
       0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 0x9, 0x49, 0x4, 0x4a, 
       0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 0x4c, 0x4, 0x4d, 
       0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 0x4, 0x50, 
       0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 0x53, 
       0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
       0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 
       0x9, 0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 
       0x9, 0x5c, 0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 
       0x9, 0x5f, 0x4, 0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 
       0x9, 0x62, 0x4, 0x63, 0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 
       0x9, 0x65, 0x4, 0x66, 0x9, 0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 
       0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 
       0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 0x6d, 0x9, 0x6d, 0x4, 0x6e, 
       0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 0x9, 0x70, 0x4, 0x71, 
       0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 0x73, 0x4, 0x74, 
       0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 0x4, 0x77, 
       0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 0x7a, 
       0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
       0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 
       0x9, 0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 
       0x9, 0x83, 0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 
       0x9, 0x86, 0x4, 0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 
       0x9, 0x89, 0x4, 0x8a, 0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 
       0x9, 0x8c, 0x4, 0x8d, 0x9, 0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 
       0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 0x4, 0x91, 0x9, 0x91, 0x4, 0x92, 
       0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 0x94, 0x9, 0x94, 0x4, 0x95, 
       0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x4, 0x97, 0x9, 0x97, 0x4, 0x98, 
       0x9, 0x98, 0x4, 0x99, 0x9, 0x99, 0x4, 0x9a, 0x9, 0x9a, 0x4, 0x9b, 
       0x9, 0x9b, 0x4, 0x9c, 0x9, 0x9c, 0x4, 0x9d, 0x9, 0x9d, 0x4, 0x9e, 
       0x9, 0x9e, 0x4, 0x9f, 0x9, 0x9f, 0x4, 0xa0, 0x9, 0xa0, 0x4, 0xa1, 
       0x9, 0xa1, 0x4, 0xa2, 0x9, 0xa2, 0x4, 0xa3, 0x9, 0xa3, 0x4, 0xa4, 
       0x9, 0xa4, 0x4, 0xa5, 0x9, 0xa5, 0x4, 0xa6, 0x9, 0xa6, 0x4, 0xa7, 
       0x9, 0xa7, 0x4, 0xa8, 0x9, 0xa8, 0x4, 0xa9, 0x9, 0xa9, 0x4, 0xaa, 
       0x9, 0xaa, 0x4, 0xab, 0x9, 0xab, 0x3, 0x2, 0x5, 0x2, 0x158, 0xa, 
       0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x5, 0x3, 0x15d, 0xa, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x164, 0xa, 
       0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x169, 0xa, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 
       0x171, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x4, 0x5, 0x4, 0x179, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x5, 0x4, 0x186, 0xa, 0x4, 0x3, 0x4, 0x5, 0x4, 0x189, 
       0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x18d, 0xa, 0x4, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x192, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x19a, 0xa, 0x6, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x1a1, 
       0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 
       0x8, 0x1a8, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x1ad, 
       0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x1b0, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 
       0x5, 0x9, 0x1b4, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 
       0x5, 0xa, 0x1ba, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 
       0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x1c4, 0xa, 0xb, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x1cb, 
       0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x1d1, 
       0xa, 0xd, 0x7, 0xd, 0x1d3, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x1d6, 0xb, 
       0xd, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1da, 0xa, 0xe, 0x3, 0xf, 0x3, 
       0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x1e0, 0xa, 0xf, 0x3, 0x10, 0x3, 
       0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x1e7, 0xa, 0x10, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x1ed, 0xa, 
       0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
       0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x1f9, 
       0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x1fd, 0xa, 0x12, 0x3, 
       0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x202, 0xa, 0x12, 0x3, 0x12, 
       0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
       0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x20e, 0xa, 0x12, 0x7, 
       0x12, 0x210, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x213, 0xb, 0x12, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x218, 0xa, 0x13, 0x3, 0x13, 
       0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x21f, 0xa, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x5, 0x13, 0x228, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x22e, 0xa, 0x14, 0x3, 0x15, 0x3, 
       0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x240, 0xa, 0x17, 0x3, 0x18, 
       0x3, 0x18, 0x3, 0x19, 0x5, 0x19, 0x245, 0xa, 0x19, 0x3, 0x19, 0x3, 
       0x19, 0x5, 0x19, 0x249, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 
       0x24d, 0xa, 0x19, 0x3, 0x19, 0x5, 0x19, 0x250, 0xa, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x5, 0x19, 0x254, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
       0x19, 0x3, 0x19, 0x5, 0x19, 0x25a, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x5, 0x19, 0x25f, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
       0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x267, 0xa, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x5, 0x19, 0x26f, 0xa, 0x19, 0x5, 0x19, 0x271, 0xa, 0x19, 0x3, 0x1a, 
       0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 
       0x279, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
       0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
       0x1d, 0x3, 0x1d, 0x7, 0x1d, 0x287, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 
       0x28a, 0xb, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x28e, 0xa, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x292, 0xa, 0x1e, 0x3, 0x1f, 0x5, 
       0x1f, 0x295, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 
       0x29a, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 
       0x1f, 0x2a0, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
       0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x2a8, 0xa, 0x20, 0x3, 0x21, 0x3, 
       0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0x2d3, 0xa, 0x22, 
       0xc, 0x22, 0xe, 0x22, 0x2d6, 0xb, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 
       0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 
       0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 
       0x23, 0x7, 0x23, 0x2e7, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x2ea, 0xb, 
       0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 
       0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x7, 0x24, 0x2f6, 
       0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 0x2f9, 0xb, 0x24, 0x3, 0x25, 0x3, 
       0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 
       0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 
       0x25, 0x3, 0x25, 0x7, 0x25, 0x30a, 0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 
       0x30d, 0xb, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
       0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
       0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x7, 0x26, 0x31e, 
       0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x321, 0xb, 0x26, 0x3, 0x27, 0x3, 
       0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x329, 
       0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 0x32c, 0xb, 0x27, 0x3, 0x28, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x7, 0x28, 0x334, 
       0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x337, 0xb, 0x28, 0x3, 0x29, 0x3, 
       0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x7, 0x29, 0x33f, 
       0xa, 0x29, 0xc, 0x29, 0xe, 0x29, 0x342, 0xb, 0x29, 0x3, 0x2a, 0x3, 
       0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x7, 0x2a, 0x34a, 
       0xa, 0x2a, 0xc, 0x2a, 0xe, 0x2a, 0x34d, 0xb, 0x2a, 0x3, 0x2b, 0x3, 
       0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x355, 
       0xa, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
       0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
       0x5, 0x2c, 0x362, 0xa, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x372, 
       0xa, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
       0x3, 0x2f, 0x7, 0x2f, 0x37a, 0xa, 0x2f, 0xc, 0x2f, 0xe, 0x2f, 0x37d, 
       0xb, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
       0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x388, 0xa, 
       0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
       0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 
       0x32, 0x395, 0xa, 0x32, 0x3, 0x33, 0x5, 0x33, 0x398, 0xa, 0x33, 0x3, 
       0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x39e, 0xa, 0x34, 
       0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x3a4, 0xa, 
       0x34, 0x3, 0x34, 0x5, 0x34, 0x3a7, 0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 
       0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x7, 0x35, 0x3ae, 0xa, 0x35, 0xc, 
       0x35, 0xe, 0x35, 0x3b1, 0xb, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 
       0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x3ba, 0xa, 
       0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 
       0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 
       0x36, 0x5, 0x36, 0x3c8, 0xa, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
       0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
       0x3, 0x37, 0x5, 0x37, 0x3d4, 0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 
       0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 
       0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 
       0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x3e8, 0xa, 0x38, 
       0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x3ec, 0xa, 0x38, 0x3, 0x38, 0x3, 
       0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x3f4, 
       0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
       0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
       0x5, 0x38, 0x401, 0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x405, 
       0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x40a, 0xa, 
       0x38, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x40e, 0xa, 0x39, 0x3, 0x3a, 
       0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 
       0x416, 0xa, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 
       0x3a, 0x41c, 0xa, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 
       0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x7, 0x3c, 0x425, 0xa, 0x3c, 0xc, 
       0x3c, 0xe, 0x3c, 0x428, 0xb, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 
       0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x42f, 0xa, 0x3d, 0x3, 0x3e, 0x3, 
       0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x437, 
       0xa, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x41, 0x5, 0x41, 0x43c, 0xa, 
       0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x441, 0xa, 0x41, 
       0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x446, 0xa, 0x41, 0x3, 
       0x41, 0x5, 0x41, 0x449, 0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
       0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x451, 0xa, 0x41, 0x5, 
       0x41, 0x453, 0xa, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
       0x5, 0x42, 0x459, 0xa, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 
       0x43, 0x5, 0x43, 0x45f, 0xa, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 
       0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 
       0x3, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
       0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x48, 
       0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x5, 0x48, 0x47a, 0xa, 
       0x48, 0x3, 0x49, 0x3, 0x49, 0x5, 0x49, 0x47e, 0xa, 0x49, 0x3, 0x4a, 
       0x3, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 
       0x486, 0xa, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x5, 0x4d, 0x48a, 0xa, 0x4d, 
       0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x490, 0xa, 
       0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x496, 
       0xa, 0x4f, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 
       0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 
       0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x4a5, 0xa, 0x50, 0x3, 0x51, 0x3, 
       0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 
       0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x4b2, 0xa, 0x52, 
       0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x4b6, 0xa, 0x53, 0x3, 0x53, 0x3, 
       0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x4bd, 0xa, 0x54, 
       0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 
       0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x4c7, 0xa, 0x54, 0x3, 0x55, 0x3, 
       0x55, 0x5, 0x55, 0x4cb, 0xa, 0x55, 0x3, 0x55, 0x5, 0x55, 0x4ce, 0xa, 
       0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x5, 0x55, 0x4d4, 
       0xa, 0x55, 0x5, 0x55, 0x4d6, 0xa, 0x55, 0x3, 0x56, 0x3, 0x56, 0x3, 
       0x56, 0x5, 0x56, 0x4db, 0xa, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x57, 
       0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 0x4e4, 0xa, 
       0x57, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x59, 0x3, 0x59, 0x3, 
       0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x7, 0x59, 0x4ef, 0xa, 0x59, 
       0xc, 0x59, 0xe, 0x59, 0x4f2, 0xb, 0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 
       0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x4f9, 0xa, 0x5a, 0x3, 0x5b, 
       0x3, 0x5b, 0x3, 0x5c, 0x3, 0x5c, 0x5, 0x5c, 0x4ff, 0xa, 0x5c, 0x3, 
       0x5d, 0x3, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x505, 0xa, 0x5e, 
       0x3, 0x5f, 0x3, 0x5f, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 
       0x3, 0x60, 0x3, 0x60, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 
       0x3, 0x61, 0x3, 0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 
       0x3, 0x62, 0x3, 0x63, 0x5, 0x63, 0x51b, 0xa, 0x63, 0x3, 0x64, 0x3, 
       0x64, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 0x523, 
       0xa, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 
       0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 0x52e, 0xa, 
       0x65, 0x3, 0x66, 0x3, 0x66, 0x5, 0x66, 0x532, 0xa, 0x66, 0x3, 0x66, 
       0x3, 0x66, 0x7, 0x66, 0x536, 0xa, 0x66, 0xc, 0x66, 0xe, 0x66, 0x539, 
       0xb, 0x66, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 
       0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 
       0x3, 0x67, 0x5, 0x67, 0x547, 0xa, 0x67, 0x3, 0x68, 0x3, 0x68, 0x3, 
       0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x7, 0x68, 0x54f, 0xa, 0x68, 
       0xc, 0x68, 0xe, 0x68, 0x552, 0xb, 0x68, 0x3, 0x69, 0x3, 0x69, 0x5, 
       0x69, 0x556, 0xa, 0x69, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
       0x3, 0x6a, 0x5, 0x6a, 0x55d, 0xa, 0x6a, 0x3, 0x6b, 0x3, 0x6b, 0x3, 
       0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x5, 
       0x6c, 0x567, 0xa, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 
       0x3, 0x6c, 0x5, 0x6c, 0x56e, 0xa, 0x6c, 0x3, 0x6c, 0x7, 0x6c, 0x571, 
       0xa, 0x6c, 0xc, 0x6c, 0xe, 0x6c, 0x574, 0xb, 0x6c, 0x3, 0x6d, 0x3, 
       0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x5, 0x6d, 0x57a, 0xa, 0x6d, 0x3, 0x6e, 
       0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 
       0x5, 0x6f, 0x583, 0xa, 0x6f, 0x3, 0x70, 0x3, 0x70, 0x5, 0x70, 0x587, 
       0xa, 0x70, 0x3, 0x71, 0x3, 0x71, 0x3, 0x72, 0x5, 0x72, 0x58c, 0xa, 
       0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x73, 0x3, 0x73, 0x5, 0x73, 0x592, 
       0xa, 0x73, 0x3, 0x74, 0x3, 0x74, 0x5, 0x74, 0x596, 0xa, 0x74, 0x3, 
       0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x5, 0x74, 0x59c, 0xa, 0x74, 
       0x3, 0x75, 0x3, 0x75, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 
       0x5, 0x76, 0x5a4, 0xa, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 
       0x76, 0x3, 0x76, 0x5, 0x76, 0x5ab, 0xa, 0x76, 0x3, 0x76, 0x3, 0x76, 
       0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x5, 0x76, 0x5b2, 0xa, 0x76, 0x3, 
       0x76, 0x7, 0x76, 0x5b5, 0xa, 0x76, 0xc, 0x76, 0xe, 0x76, 0x5b8, 0xb, 
       0x76, 0x3, 0x77, 0x3, 0x77, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 
       0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x5, 0x78, 0x5c4, 
       0xa, 0x78, 0x3, 0x78, 0x7, 0x78, 0x5c7, 0xa, 0x78, 0xc, 0x78, 0xe, 
       0x78, 0x5ca, 0xb, 0x78, 0x3, 0x79, 0x3, 0x79, 0x5, 0x79, 0x5ce, 0xa, 
       0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x5, 0x79, 0x5d4, 
       0xa, 0x79, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 
       0x3, 0x7a, 0x7, 0x7a, 0x5dc, 0xa, 0x7a, 0xc, 0x7a, 0xe, 0x7a, 0x5df, 
       0xb, 0x7a, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 
       0x3, 0x7b, 0x5, 0x7b, 0x5e7, 0xa, 0x7b, 0x3, 0x7c, 0x3, 0x7c, 0x3, 
       0x7d, 0x3, 0x7d, 0x5, 0x7d, 0x5ed, 0xa, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
       0x3, 0x7d, 0x7, 0x7d, 0x5f2, 0xa, 0x7d, 0xc, 0x7d, 0xe, 0x7d, 0x5f5, 
       0xb, 0x7d, 0x3, 0x7e, 0x5, 0x7e, 0x5f8, 0xa, 0x7e, 0x3, 0x7e, 0x3, 
       0x7e, 0x5, 0x7e, 0x5fc, 0xa, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 
       0x3, 0x7e, 0x3, 0x7e, 0x5, 0x7e, 0x603, 0xa, 0x7e, 0x3, 0x7f, 0x5, 
       0x7f, 0x606, 0xa, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x5, 0x7f, 0x60a, 0xa, 
       0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x5, 
       0x7f, 0x611, 0xa, 0x7f, 0x3, 0x7f, 0x5, 0x7f, 0x614, 0xa, 0x7f, 0x3, 
       0x7f, 0x3, 0x7f, 0x5, 0x7f, 0x618, 0xa, 0x7f, 0x3, 0x80, 0x5, 0x80, 
       0x61b, 0xa, 0x80, 0x3, 0x80, 0x3, 0x80, 0x5, 0x80, 0x61f, 0xa, 0x80, 
       0x3, 0x80, 0x3, 0x80, 0x3, 0x81, 0x5, 0x81, 0x624, 0xa, 0x81, 0x3, 
       0x81, 0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x3, 
       0x81, 0x5, 0x81, 0x62d, 0xa, 0x81, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 
       0x3, 0x82, 0x3, 0x82, 0x5, 0x82, 0x634, 0xa, 0x82, 0x3, 0x83, 0x3, 
       0x83, 0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 0x63a, 0xa, 0x83, 0x3, 0x84, 
       0x3, 0x84, 0x5, 0x84, 0x63e, 0xa, 0x84, 0x3, 0x85, 0x3, 0x85, 0x3, 
       0x85, 0x5, 0x85, 0x643, 0xa, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 
       0x3, 0x85, 0x5, 0x85, 0x649, 0xa, 0x85, 0x7, 0x85, 0x64b, 0xa, 0x85, 
       0xc, 0x85, 0xe, 0x85, 0x64e, 0xb, 0x85, 0x3, 0x86, 0x3, 0x86, 0x3, 
       0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 
       0x86, 0x7, 0x86, 0x659, 0xa, 0x86, 0xc, 0x86, 0xe, 0x86, 0x65c, 0xb, 
       0x86, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x5, 0x87, 0x661, 0xa, 0x87, 
       0x3, 0x87, 0x3, 0x87, 0x5, 0x87, 0x665, 0xa, 0x87, 0x3, 0x88, 0x3, 
       0x88, 0x3, 0x88, 0x5, 0x88, 0x66a, 0xa, 0x88, 0x3, 0x88, 0x3, 0x88, 
       0x3, 0x88, 0x3, 0x88, 0x5, 0x88, 0x670, 0xa, 0x88, 0x3, 0x89, 0x3, 
       0x89, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x5, 0x8a, 0x677, 0xa, 0x8a, 
       0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 
       0x67e, 0xa, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 0x681, 0xa, 0x8b, 0x3, 0x8b, 
       0x3, 0x8b, 0x5, 0x8b, 0x685, 0xa, 0x8b, 0x5, 0x8b, 0x687, 0xa, 0x8b, 
       0x3, 0x8c, 0x5, 0x8c, 0x68a, 0xa, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 
       0x8d, 0x3, 0x8d, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8f, 0x3, 0x8f, 0x5, 
       0x8f, 0x694, 0xa, 0x8f, 0x3, 0x8f, 0x5, 0x8f, 0x697, 0xa, 0x8f, 0x3, 
       0x90, 0x3, 0x90, 0x3, 0x90, 0x5, 0x90, 0x69c, 0xa, 0x90, 0x3, 0x91, 
       0x5, 0x91, 0x69f, 0xa, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 
       0x91, 0x3, 0x91, 0x3, 0x91, 0x5, 0x91, 0x6a7, 0xa, 0x91, 0x3, 0x91, 
       0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x5, 0x91, 0x6ae, 0xa, 
       0x91, 0x3, 0x91, 0x5, 0x91, 0x6b1, 0xa, 0x91, 0x3, 0x92, 0x3, 0x92, 
       0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x7, 0x92, 0x6b9, 0xa, 
       0x92, 0xc, 0x92, 0xe, 0x92, 0x6bc, 0xb, 0x92, 0x3, 0x93, 0x5, 0x93, 
       0x6bf, 0xa, 0x93, 0x3, 0x93, 0x5, 0x93, 0x6c2, 0xa, 0x93, 0x3, 0x93, 
       0x3, 0x93, 0x3, 0x93, 0x5, 0x93, 0x6c7, 0xa, 0x93, 0x3, 0x93, 0x5, 
       0x93, 0x6ca, 0xa, 0x93, 0x3, 0x93, 0x3, 0x93, 0x5, 0x93, 0x6ce, 0xa, 
       0x93, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x7, 
       0x94, 0x6d5, 0xa, 0x94, 0xc, 0x94, 0xe, 0x94, 0x6d8, 0xb, 0x94, 0x3, 
       0x95, 0x3, 0x95, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x97, 0x3, 
       0x97, 0x3, 0x97, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x5, 0x98, 0x6e5, 
       0xa, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x5, 0x98, 
       0x6eb, 0xa, 0x98, 0x7, 0x98, 0x6ed, 0xa, 0x98, 0xc, 0x98, 0xe, 0x98, 
       0x6f0, 0xb, 0x98, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x5, 0x99, 0x6f5, 
       0xa, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x5, 0x99, 0x6fa, 0xa, 
       0x99, 0x3, 0x99, 0x3, 0x99, 0x5, 0x99, 0x6fe, 0xa, 0x99, 0x3, 0x9a, 
       0x5, 0x9a, 0x701, 0xa, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x5, 0x9a, 0x705, 
       0xa, 0x9a, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9d, 
       0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9e, 0x3, 0x9e, 0x3, 0x9f, 0x3, 0x9f, 
       0x3, 0x9f, 0x3, 0xa0, 0x3, 0xa0, 0x5, 0xa0, 0x715, 0xa, 0xa0, 0x3, 
       0xa0, 0x3, 0xa0, 0x5, 0xa0, 0x719, 0xa, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 
       0x3, 0xa0, 0x5, 0xa0, 0x71e, 0xa, 0xa0, 0x3, 0xa1, 0x3, 0xa1, 0x3, 
       0xa1, 0x5, 0xa1, 0x723, 0xa, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 
       0x3, 0xa1, 0x3, 0xa1, 0x5, 0xa1, 0x72a, 0xa, 0xa1, 0x3, 0xa2, 0x3, 
       0xa2, 0x5, 0xa2, 0x72e, 0xa, 0xa2, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 
       0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x5, 0xa4, 
       0x738, 0xa, 0xa4, 0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa6, 0x3, 
       0xa6, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 
       0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 
       0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 
       0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 
       0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 
       0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 
       0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 
       0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 
       0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x5, 0xa7, 0x772, 0xa, 0xa7, 
       0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 
       0x3, 0xa8, 0x5, 0xa8, 0x77b, 0xa, 0xa8, 0x3, 0xa9, 0x3, 0xa9, 0x3, 
       0xaa, 0x3, 0xaa, 0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x2, 0x1f, 0xe, 
       0x18, 0x22, 0x38, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 
       0x52, 0x5c, 0x68, 0x76, 0xb0, 0xca, 0xce, 0xd6, 0xea, 0xee, 0xf2, 
       0xf8, 0x108, 0x10a, 0x122, 0x126, 0x12e, 0xac, 0x2, 0x4, 0x6, 0x8, 
       0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
       0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
       0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 
       0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 
       0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 
       0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 
       0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 
       0xa6, 0xa8, 0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 
       0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 
       0xd2, 0xd4, 0xd6, 0xd8, 0xda, 0xdc, 0xde, 0xe0, 0xe2, 0xe4, 0xe6, 
       0xe8, 0xea, 0xec, 0xee, 0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 0xfa, 0xfc, 
       0xfe, 0x100, 0x102, 0x104, 0x106, 0x108, 0x10a, 0x10c, 0x10e, 0x110, 
       0x112, 0x114, 0x116, 0x118, 0x11a, 0x11c, 0x11e, 0x120, 0x122, 0x124, 
       0x126, 0x128, 0x12a, 0x12c, 0x12e, 0x130, 0x132, 0x134, 0x136, 0x138, 
       0x13a, 0x13c, 0x13e, 0x140, 0x142, 0x144, 0x146, 0x148, 0x14a, 0x14c, 
       0x14e, 0x150, 0x152, 0x154, 0x2, 0x13, 0x4, 0x2, 0x73, 0x73, 0x77, 
       0x77, 0x3, 0x2, 0x4, 0x5, 0x5, 0x2, 0x6d, 0x6f, 0x73, 0x74, 0x76, 
       0x76, 0x4, 0x2, 0xf, 0xf, 0x89, 0x89, 0x4, 0x2, 0x10, 0x10, 0x8a, 
       0x8a, 0x4, 0x2, 0x11, 0x11, 0x90, 0x90, 0x4, 0x2, 0x12, 0x12, 0x91, 
       0x91, 0x7, 0x2, 0x16, 0x16, 0x34, 0x34, 0x42, 0x42, 0x4c, 0x4c, 0x51, 
       0x51, 0x6, 0x2, 0x33, 0x34, 0x3d, 0x3d, 0x51, 0x51, 0x62, 0x62, 0x6, 
       0x2, 0x32, 0x32, 0x35, 0x35, 0x5b, 0x5b, 0x97, 0x97, 0x4, 0x2, 0x27, 
       0x27, 0x64, 0x64, 0x4, 0x2, 0x8d, 0x8d, 0x93, 0x93, 0x4, 0x2, 0x26, 
       0x26, 0x54, 0x54, 0x4, 0x2, 0x36, 0x36, 0x48, 0x48, 0x3, 0x2, 0x49, 
       0x4b, 0x4, 0x2, 0x35, 0x35, 0x5b, 0x5b, 0x3, 0x2, 0xa1, 0xa4, 0x2, 
       0x84a, 0x2, 0x157, 0x3, 0x2, 0x2, 0x2, 0x4, 0x15c, 0x3, 0x2, 0x2, 
       0x2, 0x6, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x8, 0x191, 0x3, 0x2, 0x2, 0x2, 
       0xa, 0x199, 0x3, 0x2, 0x2, 0x2, 0xc, 0x19b, 0x3, 0x2, 0x2, 0x2, 0xe, 
       0x1a7, 0x3, 0x2, 0x2, 0x2, 0x10, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x12, 
       0x1b7, 0x3, 0x2, 0x2, 0x2, 0x14, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x16, 
       0x1c5, 0x3, 0x2, 0x2, 0x2, 0x18, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1a, 
       0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1e, 
       0x1e6, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x22, 
       0x201, 0x3, 0x2, 0x2, 0x2, 0x24, 0x227, 0x3, 0x2, 0x2, 0x2, 0x26, 
       0x22d, 0x3, 0x2, 0x2, 0x2, 0x28, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x2a, 
       0x231, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x2e, 
       0x241, 0x3, 0x2, 0x2, 0x2, 0x30, 0x270, 0x3, 0x2, 0x2, 0x2, 0x32, 
       0x272, 0x3, 0x2, 0x2, 0x2, 0x34, 0x276, 0x3, 0x2, 0x2, 0x2, 0x36, 
       0x27a, 0x3, 0x2, 0x2, 0x2, 0x38, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x3a, 
       0x291, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x29f, 0x3, 0x2, 0x2, 0x2, 0x3e, 
       0x2a7, 0x3, 0x2, 0x2, 0x2, 0x40, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x42, 
       0x2ab, 0x3, 0x2, 0x2, 0x2, 0x44, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x46, 
       0x2eb, 0x3, 0x2, 0x2, 0x2, 0x48, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x4a, 
       0x30e, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x322, 0x3, 0x2, 0x2, 0x2, 0x4e, 
       0x32d, 0x3, 0x2, 0x2, 0x2, 0x50, 0x338, 0x3, 0x2, 0x2, 0x2, 0x52, 
       0x343, 0x3, 0x2, 0x2, 0x2, 0x54, 0x34e, 0x3, 0x2, 0x2, 0x2, 0x56, 
       0x361, 0x3, 0x2, 0x2, 0x2, 0x58, 0x363, 0x3, 0x2, 0x2, 0x2, 0x5a, 
       0x371, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x373, 0x3, 0x2, 0x2, 0x2, 0x5e, 
       0x37e, 0x3, 0x2, 0x2, 0x2, 0x60, 0x387, 0x3, 0x2, 0x2, 0x2, 0x62, 
       0x394, 0x3, 0x2, 0x2, 0x2, 0x64, 0x397, 0x3, 0x2, 0x2, 0x2, 0x66, 
       0x3a6, 0x3, 0x2, 0x2, 0x2, 0x68, 0x3a8, 0x3, 0x2, 0x2, 0x2, 0x6a, 
       0x3c7, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x3d3, 0x3, 0x2, 0x2, 0x2, 0x6e, 
       0x409, 0x3, 0x2, 0x2, 0x2, 0x70, 0x40d, 0x3, 0x2, 0x2, 0x2, 0x72, 
       0x41b, 0x3, 0x2, 0x2, 0x2, 0x74, 0x41d, 0x3, 0x2, 0x2, 0x2, 0x76, 
       0x41f, 0x3, 0x2, 0x2, 0x2, 0x78, 0x42e, 0x3, 0x2, 0x2, 0x2, 0x7a, 
       0x430, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x436, 0x3, 0x2, 0x2, 0x2, 0x7e, 
       0x438, 0x3, 0x2, 0x2, 0x2, 0x80, 0x452, 0x3, 0x2, 0x2, 0x2, 0x82, 
       0x458, 0x3, 0x2, 0x2, 0x2, 0x84, 0x45e, 0x3, 0x2, 0x2, 0x2, 0x86, 
       0x460, 0x3, 0x2, 0x2, 0x2, 0x88, 0x466, 0x3, 0x2, 0x2, 0x2, 0x8a, 
       0x46a, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x472, 0x3, 0x2, 0x2, 0x2, 0x8e, 
       0x479, 0x3, 0x2, 0x2, 0x2, 0x90, 0x47b, 0x3, 0x2, 0x2, 0x2, 0x92, 
       0x47f, 0x3, 0x2, 0x2, 0x2, 0x94, 0x481, 0x3, 0x2, 0x2, 0x2, 0x96, 
       0x485, 0x3, 0x2, 0x2, 0x2, 0x98, 0x489, 0x3, 0x2, 0x2, 0x2, 0x9a, 
       0x48f, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x495, 0x3, 0x2, 0x2, 0x2, 0x9e, 
       0x4a4, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x4a6, 0x3, 0x2, 0x2, 0x2, 0xa2, 
       0x4b1, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x4b3, 0x3, 0x2, 0x2, 0x2, 0xa6, 
       0x4c6, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x4d5, 0x3, 0x2, 0x2, 0x2, 0xaa, 
       0x4d7, 0x3, 0x2, 0x2, 0x2, 0xac, 0x4e3, 0x3, 0x2, 0x2, 0x2, 0xae, 
       0x4e5, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x4e8, 0x3, 0x2, 0x2, 0x2, 0xb2, 
       0x4f8, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x4fa, 0x3, 0x2, 0x2, 0x2, 0xb6, 
       0x4fe, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x500, 0x3, 0x2, 0x2, 0x2, 0xba, 
       0x504, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x506, 0x3, 0x2, 0x2, 0x2, 0xbe, 
       0x508, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x50e, 0x3, 0x2, 0x2, 0x2, 0xc2, 
       0x514, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x51a, 0x3, 0x2, 0x2, 0x2, 0xc6, 
       0x51c, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x52d, 0x3, 0x2, 0x2, 0x2, 0xca, 
       0x52f, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x546, 0x3, 0x2, 0x2, 0x2, 0xce, 
       0x548, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x553, 0x3, 0x2, 0x2, 0x2, 0xd2, 
       0x55c, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x55e, 0x3, 0x2, 0x2, 0x2, 0xd6, 
       0x566, 0x3, 0x2, 0x2, 0x2, 0xd8, 0x575, 0x3, 0x2, 0x2, 0x2, 0xda, 
       0x57b, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x57f, 0x3, 0x2, 0x2, 0x2, 0xde, 
       0x584, 0x3, 0x2, 0x2, 0x2, 0xe0, 0x588, 0x3, 0x2, 0x2, 0x2, 0xe2, 
       0x58b, 0x3, 0x2, 0x2, 0x2, 0xe4, 0x58f, 0x3, 0x2, 0x2, 0x2, 0xe6, 
       0x59b, 0x3, 0x2, 0x2, 0x2, 0xe8, 0x59d, 0x3, 0x2, 0x2, 0x2, 0xea, 
       0x5aa, 0x3, 0x2, 0x2, 0x2, 0xec, 0x5b9, 0x3, 0x2, 0x2, 0x2, 0xee, 
       0x5bb, 0x3, 0x2, 0x2, 0x2, 0xf0, 0x5d3, 0x3, 0x2, 0x2, 0x2, 0xf2, 
       0x5d5, 0x3, 0x2, 0x2, 0x2, 0xf4, 0x5e6, 0x3, 0x2, 0x2, 0x2, 0xf6, 
       0x5e8, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x5ea, 0x3, 0x2, 0x2, 0x2, 0xfa, 
       0x602, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x617, 0x3, 0x2, 0x2, 0x2, 0xfe, 
       0x61a, 0x3, 0x2, 0x2, 0x2, 0x100, 0x62c, 0x3, 0x2, 0x2, 0x2, 0x102, 
       0x633, 0x3, 0x2, 0x2, 0x2, 0x104, 0x639, 0x3, 0x2, 0x2, 0x2, 0x106, 
       0x63d, 0x3, 0x2, 0x2, 0x2, 0x108, 0x63f, 0x3, 0x2, 0x2, 0x2, 0x10a, 
       0x64f, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x65d, 0x3, 0x2, 0x2, 0x2, 0x10e, 
       0x66f, 0x3, 0x2, 0x2, 0x2, 0x110, 0x671, 0x3, 0x2, 0x2, 0x2, 0x112, 
       0x673, 0x3, 0x2, 0x2, 0x2, 0x114, 0x686, 0x3, 0x2, 0x2, 0x2, 0x116, 
       0x689, 0x3, 0x2, 0x2, 0x2, 0x118, 0x68d, 0x3, 0x2, 0x2, 0x2, 0x11a, 
       0x68f, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x696, 0x3, 0x2, 0x2, 0x2, 0x11e, 
       0x698, 0x3, 0x2, 0x2, 0x2, 0x120, 0x6b0, 0x3, 0x2, 0x2, 0x2, 0x122, 
       0x6b2, 0x3, 0x2, 0x2, 0x2, 0x124, 0x6cd, 0x3, 0x2, 0x2, 0x2, 0x126, 
       0x6cf, 0x3, 0x2, 0x2, 0x2, 0x128, 0x6d9, 0x3, 0x2, 0x2, 0x2, 0x12a, 
       0x6db, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x6de, 0x3, 0x2, 0x2, 0x2, 0x12e, 
       0x6e1, 0x3, 0x2, 0x2, 0x2, 0x130, 0x6fd, 0x3, 0x2, 0x2, 0x2, 0x132, 
       0x704, 0x3, 0x2, 0x2, 0x2, 0x134, 0x706, 0x3, 0x2, 0x2, 0x2, 0x136, 
       0x708, 0x3, 0x2, 0x2, 0x2, 0x138, 0x70a, 0x3, 0x2, 0x2, 0x2, 0x13a, 
       0x70d, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x70f, 0x3, 0x2, 0x2, 0x2, 0x13e, 
       0x71d, 0x3, 0x2, 0x2, 0x2, 0x140, 0x729, 0x3, 0x2, 0x2, 0x2, 0x142, 
       0x72d, 0x3, 0x2, 0x2, 0x2, 0x144, 0x72f, 0x3, 0x2, 0x2, 0x2, 0x146, 
       0x737, 0x3, 0x2, 0x2, 0x2, 0x148, 0x739, 0x3, 0x2, 0x2, 0x2, 0x14a, 
       0x73c, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x771, 0x3, 0x2, 0x2, 0x2, 0x14e, 
       0x77a, 0x3, 0x2, 0x2, 0x2, 0x150, 0x77c, 0x3, 0x2, 0x2, 0x2, 0x152, 
       0x77e, 0x3, 0x2, 0x2, 0x2, 0x154, 0x780, 0x3, 0x2, 0x2, 0x2, 0x156, 
       0x158, 0x5, 0x4, 0x3, 0x2, 0x157, 0x156, 0x3, 0x2, 0x2, 0x2, 0x157, 
       0x158, 0x3, 0x2, 0x2, 0x2, 0x158, 0x159, 0x3, 0x2, 0x2, 0x2, 0x159, 
       0x15a, 0x7, 0x2, 0x2, 0x3, 0x15a, 0x3, 0x3, 0x2, 0x2, 0x2, 0x15b, 
       0x15d, 0x5, 0x76, 0x3c, 0x2, 0x15c, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15c, 
       0x15d, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x15e, 
       0x15f, 0x7, 0x2, 0x2, 0x3, 0x15f, 0x5, 0x3, 0x2, 0x2, 0x2, 0x160, 
       0x18d, 0x5, 0x14e, 0xa8, 0x2, 0x161, 0x163, 0x7, 0x67, 0x2, 0x2, 
       0x162, 0x164, 0x7, 0x96, 0x2, 0x2, 0x163, 0x162, 0x3, 0x2, 0x2, 0x2, 
       0x163, 0x164, 0x3, 0x2, 0x2, 0x2, 0x164, 0x165, 0x3, 0x2, 0x2, 0x2, 
       0x165, 0x166, 0x5, 0x5c, 0x2f, 0x2, 0x166, 0x168, 0x7, 0x68, 0x2, 
       0x2, 0x167, 0x169, 0x5, 0x26, 0x14, 0x2, 0x168, 0x167, 0x3, 0x2, 
       0x2, 0x2, 0x168, 0x169, 0x3, 0x2, 0x2, 0x2, 0x169, 0x18d, 0x3, 0x2, 
       0x2, 0x2, 0x16a, 0x16b, 0x7, 0x6b, 0x2, 0x2, 0x16b, 0x16c, 0x5, 0x5c, 
       0x2f, 0x2, 0x16c, 0x16d, 0x7, 0x6c, 0x2, 0x2, 0x16d, 0x18d, 0x3, 
       0x2, 0x2, 0x2, 0x16e, 0x170, 0x5, 0x8, 0x5, 0x2, 0x16f, 0x171, 0x5, 
       0x6, 0x4, 0x2, 0x170, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x3, 
       0x2, 0x2, 0x2, 0x171, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 0x5, 
       0x8, 0x5, 0x2, 0x173, 0x178, 0x5, 0x26, 0x14, 0x2, 0x174, 0x175, 
       0x7, 0x67, 0x2, 0x2, 0x175, 0x176, 0x5, 0x6, 0x4, 0x2, 0x176, 0x177, 
       0x7, 0x68, 0x2, 0x2, 0x177, 0x179, 0x3, 0x2, 0x2, 0x2, 0x178, 0x174, 
       0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 0x3, 0x2, 0x2, 0x2, 0x179, 0x18d, 
       0x3, 0x2, 0x2, 0x2, 0x17a, 0x18d, 0x5, 0x10, 0x9, 0x2, 0x17b, 0x17c, 
       0x7, 0xa0, 0x2, 0x2, 0x17c, 0x18d, 0x7, 0xa0, 0x2, 0x2, 0x17d, 0x17e, 
       0x7, 0x6b, 0x2, 0x2, 0x17e, 0x18d, 0x7, 0x6c, 0x2, 0x2, 0x17f, 0x180, 
       0x7, 0x78, 0x2, 0x2, 0x180, 0x18d, 0x7, 0x79, 0x2, 0x2, 0x181, 0x18d, 
       0x5, 0x10c, 0x87, 0x2, 0x182, 0x183, 0x7, 0x92, 0x2, 0x2, 0x183, 
       0x185, 0x5, 0x8, 0x5, 0x2, 0x184, 0x186, 0x5, 0x28, 0x15, 0x2, 0x185, 
       0x184, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x3, 0x2, 0x2, 0x2, 0x186, 
       0x18d, 0x3, 0x2, 0x2, 0x2, 0x187, 0x189, 0x5, 0x26, 0x14, 0x2, 0x188, 
       0x187, 0x3, 0x2, 0x2, 0x2, 0x188, 0x189, 0x3, 0x2, 0x2, 0x2, 0x189, 
       0x18a, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18b, 0x7, 0x94, 0x2, 0x2, 0x18b, 
       0x18d, 0x5, 0x6, 0x4, 0x2, 0x18c, 0x160, 0x3, 0x2, 0x2, 0x2, 0x18c, 
       0x161, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x18c, 
       0x16e, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x172, 0x3, 0x2, 0x2, 0x2, 0x18c, 
       0x17a, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x18c, 
       0x17d, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x18c, 
       0x181, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x182, 0x3, 0x2, 0x2, 0x2, 0x18c, 
       0x188, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x7, 0x3, 0x2, 0x2, 0x2, 0x18e, 
       0x192, 0x5, 0xa, 0x6, 0x2, 0x18f, 0x192, 0x5, 0xc, 0x7, 0x2, 0x190, 
       0x192, 0x7, 0x3f, 0x2, 0x2, 0x191, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x191, 
       0x18f, 0x3, 0x2, 0x2, 0x2, 0x191, 0x190, 0x3, 0x2, 0x2, 0x2, 0x192, 
       0x9, 0x3, 0x2, 0x2, 0x2, 0x193, 0x19a, 0x7, 0x97, 0x2, 0x2, 0x194, 
       0x19a, 0x7, 0x58, 0x2, 0x2, 0x195, 0x19a, 0x7, 0x18, 0x2, 0x2, 0x196, 
       0x19a, 0x5, 0x144, 0xa3, 0x2, 0x197, 0x19a, 0x5, 0x138, 0x9d, 0x2, 
       0x198, 0x19a, 0x5, 0x146, 0xa4, 0x2, 0x199, 0x193, 0x3, 0x2, 0x2, 
       0x2, 0x199, 0x194, 0x3, 0x2, 0x2, 0x2, 0x199, 0x195, 0x3, 0x2, 0x2, 
       0x2, 0x199, 0x196, 0x3, 0x2, 0x2, 0x2, 0x199, 0x197, 0x3, 0x2, 0x2, 
       0x2, 0x199, 0x198, 0x3, 0x2, 0x2, 0x2, 0x19a, 0xb, 0x3, 0x2, 0x2, 
       0x2, 0x19b, 0x19c, 0x5, 0xe, 0x8, 0x2, 0x19c, 0x19d, 0x5, 0xa, 0x6, 
       0x2, 0x19d, 0xd, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x1a0, 0x8, 0x8, 0x1, 
       0x2, 0x19f, 0x1a1, 0x5, 0xa0, 0x51, 0x2, 0x1a0, 0x19f, 0x3, 0x2, 
       0x2, 0x2, 0x1a0, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a2, 0x3, 0x2, 
       0x2, 0x2, 0x1a2, 0x1a8, 0x7, 0x92, 0x2, 0x2, 0x1a3, 0x1a4, 0x7, 0x58, 
       0x2, 0x2, 0x1a4, 0x1a8, 0x7, 0x94, 0x2, 0x2, 0x1a5, 0x1a6, 0x7, 0x58, 
       0x2, 0x2, 0x1a6, 0x1a8, 0x7, 0x8f, 0x2, 0x2, 0x1a7, 0x19e, 0x3, 0x2, 
       0x2, 0x2, 0x1a7, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a5, 0x3, 0x2, 
       0x2, 0x2, 0x1a8, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1aa, 0xc, 0x5, 
       0x2, 0x2, 0x1aa, 0x1ab, 0x7, 0x97, 0x2, 0x2, 0x1ab, 0x1ad, 0x7, 0x92, 
       0x2, 0x2, 0x1ac, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1b0, 0x3, 0x2, 
       0x2, 0x2, 0x1ae, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1af, 0x3, 0x2, 
       0x2, 0x2, 0x1af, 0xf, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1ae, 0x3, 0x2, 
       0x2, 0x2, 0x1b1, 0x1b3, 0x5, 0x12, 0xa, 0x2, 0x1b2, 0x1b4, 0x5, 0x20, 
       0x11, 0x2, 0x1b3, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b4, 0x3, 0x2, 
       0x2, 0x2, 0x1b4, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b6, 0x5, 0x66, 
       0x34, 0x2, 0x1b6, 0x11, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b9, 0x7, 0x69, 
       0x2, 0x2, 0x1b8, 0x1ba, 0x5, 0x14, 0xb, 0x2, 0x1b9, 0x1b8, 0x3, 0x2, 
       0x2, 0x2, 0x1b9, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bb, 0x3, 0x2, 
       0x2, 0x2, 0x1bb, 0x1bc, 0x7, 0x6a, 0x2, 0x2, 0x1bc, 0x13, 0x3, 0x2, 
       0x2, 0x2, 0x1bd, 0x1c4, 0x5, 0x16, 0xc, 0x2, 0x1be, 0x1c4, 0x5, 0x18, 
       0xd, 0x2, 0x1bf, 0x1c0, 0x5, 0x16, 0xc, 0x2, 0x1c0, 0x1c1, 0x7, 0x8d, 
       0x2, 0x2, 0x1c1, 0x1c2, 0x5, 0x18, 0xd, 0x2, 0x1c2, 0x1c4, 0x3, 0x2, 
       0x2, 0x2, 0x1c3, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1be, 0x3, 0x2, 
       0x2, 0x2, 0x1c3, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x15, 0x3, 0x2, 
       0x2, 0x2, 0x1c5, 0x1c6, 0x9, 0x2, 0x2, 0x2, 0x1c6, 0x17, 0x3, 0x2, 
       0x2, 0x2, 0x1c7, 0x1c8, 0x8, 0xd, 0x1, 0x2, 0x1c8, 0x1ca, 0x5, 0x1a, 
       0xe, 0x2, 0x1c9, 0x1cb, 0x7, 0x96, 0x2, 0x2, 0x1ca, 0x1c9, 0x3, 0x2, 
       0x2, 0x2, 0x1ca, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1d4, 0x3, 0x2, 
       0x2, 0x2, 0x1cc, 0x1cd, 0xc, 0x3, 0x2, 0x2, 0x1cd, 0x1ce, 0x7, 0x8d, 
       0x2, 0x2, 0x1ce, 0x1d0, 0x5, 0x1a, 0xe, 0x2, 0x1cf, 0x1d1, 0x7, 0x96, 
       0x2, 0x2, 0x1d0, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d1, 0x3, 0x2, 
       0x2, 0x2, 0x1d1, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1cc, 0x3, 0x2, 
       0x2, 0x2, 0x1d3, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d2, 0x3, 0x2, 
       0x2, 0x2, 0x1d4, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x19, 0x3, 0x2, 
       0x2, 0x2, 0x1d6, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1da, 0x5, 0x1c, 
       0xf, 0x2, 0x1d8, 0x1da, 0x5, 0x1e, 0x10, 0x2, 0x1d9, 0x1d7, 0x3, 
       0x2, 0x2, 0x2, 0x1d9, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1b, 0x3, 
       0x2, 0x2, 0x2, 0x1db, 0x1e0, 0x7, 0x97, 0x2, 0x2, 0x1dc, 0x1dd, 0x7, 
       0x73, 0x2, 0x2, 0x1dd, 0x1e0, 0x7, 0x97, 0x2, 0x2, 0x1de, 0x1e0, 
       0x7, 0x58, 0x2, 0x2, 0x1df, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1dc, 
       0x3, 0x2, 0x2, 0x2, 0x1df, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1d, 
       0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e2, 0x7, 0x97, 0x2, 0x2, 0x1e2, 0x1e7, 
       0x5, 0x102, 0x82, 0x2, 0x1e3, 0x1e4, 0x7, 0x73, 0x2, 0x2, 0x1e4, 
       0x1e5, 0x7, 0x97, 0x2, 0x2, 0x1e5, 0x1e7, 0x5, 0x102, 0x82, 0x2, 
       0x1e6, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e3, 0x3, 0x2, 0x2, 0x2, 
       0x1e7, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e9, 0x7, 0x67, 0x2, 0x2, 
       0x1e9, 0x1ea, 0x5, 0xf8, 0x7d, 0x2, 0x1ea, 0x1ec, 0x7, 0x68, 0x2, 
       0x2, 0x1eb, 0x1ed, 0x5, 0xdc, 0x6f, 0x2, 0x1ec, 0x1eb, 0x3, 0x2, 
       0x2, 0x2, 0x1ec, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x21, 0x3, 0x2, 
       0x2, 0x2, 0x1ee, 0x1ef, 0x8, 0x12, 0x1, 0x2, 0x1ef, 0x202, 0x5, 0x6, 
       0x4, 0x2, 0x1f0, 0x1f1, 0x5, 0x14e, 0xa8, 0x2, 0x1f1, 0x1f2, 0x7, 
       0x67, 0x2, 0x2, 0x1f2, 0x1f3, 0x5, 0x2a, 0x16, 0x2, 0x1f3, 0x1f4, 
       0x7, 0x68, 0x2, 0x2, 0x1f4, 0x202, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f6, 
       0x5, 0x9e, 0x50, 0x2, 0x1f6, 0x1f8, 0x7, 0x67, 0x2, 0x2, 0x1f7, 0x1f9, 
       0x5, 0x2a, 0x16, 0x2, 0x1f8, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f9, 
       0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fc, 
       0x7, 0x68, 0x2, 0x2, 0x1fb, 0x1fd, 0x5, 0x26, 0x14, 0x2, 0x1fc, 0x1fb, 
       0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x202, 
       0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1ff, 0x5, 0x9e, 0x50, 0x2, 0x1ff, 0x200, 
       0x5, 0x10e, 0x88, 0x2, 0x200, 0x202, 0x3, 0x2, 0x2, 0x2, 0x201, 0x1ee, 
       0x3, 0x2, 0x2, 0x2, 0x201, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x201, 0x1f5, 
       0x3, 0x2, 0x2, 0x2, 0x201, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x202, 0x211, 
       0x3, 0x2, 0x2, 0x2, 0x203, 0x204, 0xc, 0x6, 0x2, 0x2, 0x204, 0x210, 
       0x7, 0x8b, 0x2, 0x2, 0x205, 0x206, 0xc, 0x5, 0x2, 0x2, 0x206, 0x210, 
       0x7, 0x8c, 0x2, 0x2, 0x207, 0x208, 0xc, 0x4, 0x2, 0x2, 0x208, 0x210, 
       0x5, 0x28, 0x15, 0x2, 0x209, 0x20a, 0xc, 0x3, 0x2, 0x2, 0x20a, 0x20b, 
       0x7, 0x67, 0x2, 0x2, 0x20b, 0x20d, 0x7, 0x68, 0x2, 0x2, 0x20c, 0x20e, 
       0x5, 0x26, 0x14, 0x2, 0x20d, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20e, 
       0x3, 0x2, 0x2, 0x2, 0x20e, 0x210, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x203, 
       0x3, 0x2, 0x2, 0x2, 0x20f, 0x205, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x207, 
       0x3, 0x2, 0x2, 0x2, 0x20f, 0x209, 0x3, 0x2, 0x2, 0x2, 0x210, 0x213, 
       0x3, 0x2, 0x2, 0x2, 0x211, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x211, 0x212, 
       0x3, 0x2, 0x2, 0x2, 0x212, 0x23, 0x3, 0x2, 0x2, 0x2, 0x213, 0x211, 
       0x3, 0x2, 0x2, 0x2, 0x214, 0x217, 0x7, 0x69, 0x2, 0x2, 0x215, 0x216, 
       0x7, 0x91, 0x2, 0x2, 0x216, 0x218, 0x5, 0x5c, 0x2f, 0x2, 0x217, 0x215, 
       0x3, 0x2, 0x2, 0x2, 0x217, 0x218, 0x3, 0x2, 0x2, 0x2, 0x218, 0x219, 
       0x3, 0x2, 0x2, 0x2, 0x219, 0x228, 0x7, 0x6a, 0x2, 0x2, 0x21a, 0x21b, 
       0x7, 0x69, 0x2, 0x2, 0x21b, 0x21e, 0x5, 0x5c, 0x2f, 0x2, 0x21c, 0x21d, 
       0x7, 0x91, 0x2, 0x2, 0x21d, 0x21f, 0x5, 0x5c, 0x2f, 0x2, 0x21e, 0x21c, 
       0x3, 0x2, 0x2, 0x2, 0x21e, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x220, 
       0x3, 0x2, 0x2, 0x2, 0x220, 0x221, 0x7, 0x6a, 0x2, 0x2, 0x221, 0x228, 
       0x3, 0x2, 0x2, 0x2, 0x222, 0x223, 0x7, 0x69, 0x2, 0x2, 0x223, 0x224, 
       0x5, 0x5c, 0x2f, 0x2, 0x224, 0x225, 0x7, 0x91, 0x2, 0x2, 0x225, 0x226, 
       0x7, 0x6a, 0x2, 0x2, 0x226, 0x228, 0x3, 0x2, 0x2, 0x2, 0x227, 0x214, 
       0x3, 0x2, 0x2, 0x2, 0x227, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x227, 0x222, 
       0x3, 0x2, 0x2, 0x2, 0x228, 0x25, 0x3, 0x2, 0x2, 0x2, 0x229, 0x22e, 
       0x5, 0x24, 0x13, 0x2, 0x22a, 0x22b, 0x5, 0x24, 0x13, 0x2, 0x22b, 
       0x22c, 0x5, 0x26, 0x14, 0x2, 0x22c, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x22d, 
       0x229, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x22e, 
       0x27, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x230, 0x7, 0x3, 0x2, 0x2, 0x230, 
       0x29, 0x3, 0x2, 0x2, 0x2, 0x231, 0x232, 0x5, 0x108, 0x85, 0x2, 0x232, 
       0x2b, 0x3, 0x2, 0x2, 0x2, 0x233, 0x240, 0x5, 0x22, 0x12, 0x2, 0x234, 
       0x235, 0x7, 0x8b, 0x2, 0x2, 0x235, 0x240, 0x5, 0x3e, 0x20, 0x2, 0x236, 
       0x237, 0x7, 0x8c, 0x2, 0x2, 0x237, 0x240, 0x5, 0x3e, 0x20, 0x2, 0x238, 
       0x239, 0x5, 0x2e, 0x18, 0x2, 0x239, 0x23a, 0x5, 0x3e, 0x20, 0x2, 
       0x23a, 0x240, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x23c, 0x7, 0x94, 0x2, 0x2, 
       0x23c, 0x240, 0x9, 0x3, 0x2, 0x2, 0x23d, 0x240, 0x5, 0x30, 0x19, 
       0x2, 0x23e, 0x240, 0x5, 0x3c, 0x1f, 0x2, 0x23f, 0x233, 0x3, 0x2, 
       0x2, 0x2, 0x23f, 0x234, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x236, 0x3, 0x2, 
       0x2, 0x2, 0x23f, 0x238, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x23b, 0x3, 0x2, 
       0x2, 0x2, 0x23f, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x23e, 0x3, 0x2, 
       0x2, 0x2, 0x240, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x241, 0x242, 0x9, 0x4, 
       0x2, 0x2, 0x242, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x243, 0x245, 0x7, 0x92, 
       0x2, 0x2, 0x244, 0x243, 0x3, 0x2, 0x2, 0x2, 0x244, 0x245, 0x3, 0x2, 
       0x2, 0x2, 0x245, 0x246, 0x3, 0x2, 0x2, 0x2, 0x246, 0x248, 0x7, 0x44, 
       0x2, 0x2, 0x247, 0x249, 0x5, 0x32, 0x1a, 0x2, 0x248, 0x247, 0x3, 
       0x2, 0x2, 0x2, 0x248, 0x249, 0x3, 0x2, 0x2, 0x2, 0x249, 0x24a, 0x3, 
       0x2, 0x2, 0x2, 0x24a, 0x24c, 0x5, 0x34, 0x1b, 0x2, 0x24b, 0x24d, 
       0x5, 0x3a, 0x1e, 0x2, 0x24c, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24d, 
       0x3, 0x2, 0x2, 0x2, 0x24d, 0x271, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x250, 
       0x7, 0x92, 0x2, 0x2, 0x24f, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x250, 
       0x3, 0x2, 0x2, 0x2, 0x250, 0x251, 0x3, 0x2, 0x2, 0x2, 0x251, 0x253, 
       0x7, 0x44, 0x2, 0x2, 0x252, 0x254, 0x5, 0x32, 0x1a, 0x2, 0x253, 0x252, 
       0x3, 0x2, 0x2, 0x2, 0x253, 0x254, 0x3, 0x2, 0x2, 0x2, 0x254, 0x255, 
       0x3, 0x2, 0x2, 0x2, 0x255, 0x256, 0x7, 0x67, 0x2, 0x2, 0x256, 0x257, 
       0x5, 0xe4, 0x73, 0x2, 0x257, 0x259, 0x7, 0x68, 0x2, 0x2, 0x258, 0x25a, 
       0x5, 0x3a, 0x1e, 0x2, 0x259, 0x258, 0x3, 0x2, 0x2, 0x2, 0x259, 0x25a, 
       0x3, 0x2, 0x2, 0x2, 0x25a, 0x271, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x25c, 
       0x7, 0x44, 0x2, 0x2, 0x25c, 0x25e, 0x7, 0x97, 0x2, 0x2, 0x25d, 0x25f, 
       0x5, 0x3a, 0x1e, 0x2, 0x25e, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x25f, 
       0x3, 0x2, 0x2, 0x2, 0x25f, 0x271, 0x3, 0x2, 0x2, 0x2, 0x260, 0x261, 
       0x7, 0x44, 0x2, 0x2, 0x261, 0x262, 0x7, 0x97, 0x2, 0x2, 0x262, 0x263, 
       0x7, 0x69, 0x2, 0x2, 0x263, 0x264, 0x5, 0x5c, 0x2f, 0x2, 0x264, 0x266, 
       0x7, 0x6a, 0x2, 0x2, 0x265, 0x267, 0x5, 0x26, 0x14, 0x2, 0x266, 0x265, 
       0x3, 0x2, 0x2, 0x2, 0x266, 0x267, 0x3, 0x2, 0x2, 0x2, 0x267, 0x271, 
       0x3, 0x2, 0x2, 0x2, 0x268, 0x269, 0x7, 0x44, 0x2, 0x2, 0x269, 0x26a, 
       0x7, 0x3f, 0x2, 0x2, 0x26a, 0x26b, 0x7, 0x69, 0x2, 0x2, 0x26b, 0x26c, 
       0x5, 0x5c, 0x2f, 0x2, 0x26c, 0x26e, 0x7, 0x6a, 0x2, 0x2, 0x26d, 0x26f, 
       0x5, 0x26, 0x14, 0x2, 0x26e, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x26f, 
       0x3, 0x2, 0x2, 0x2, 0x26f, 0x271, 0x3, 0x2, 0x2, 0x2, 0x270, 0x244, 
       0x3, 0x2, 0x2, 0x2, 0x270, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x270, 0x25b, 
       0x3, 0x2, 0x2, 0x2, 0x270, 0x260, 0x3, 0x2, 0x2, 0x2, 0x270, 0x268, 
       0x3, 0x2, 0x2, 0x2, 0x271, 0x31, 0x3, 0x2, 0x2, 0x2, 0x272, 0x273, 
       0x7, 0x67, 0x2, 0x2, 0x273, 0x274, 0x5, 0x2a, 0x16, 0x2, 0x274, 0x275, 
       0x7, 0x68, 0x2, 0x2, 0x275, 0x33, 0x3, 0x2, 0x2, 0x2, 0x276, 0x278, 
       0x5, 0x9a, 0x4e, 0x2, 0x277, 0x279, 0x5, 0x36, 0x1c, 0x2, 0x278, 
       0x277, 0x3, 0x2, 0x2, 0x2, 0x278, 0x279, 0x3, 0x2, 0x2, 0x2, 0x279, 
       0x35, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x27b, 0x5, 0x38, 0x1d, 0x2, 0x27b, 
       0x37, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x27d, 0x8, 0x1d, 0x1, 0x2, 0x27d, 
       0x27e, 0x7, 0x69, 0x2, 0x2, 0x27e, 0x27f, 0x5, 0x5c, 0x2f, 0x2, 0x27f, 
       0x280, 0x7, 0x6a, 0x2, 0x2, 0x280, 0x288, 0x3, 0x2, 0x2, 0x2, 0x281, 
       0x282, 0xc, 0x3, 0x2, 0x2, 0x282, 0x283, 0x7, 0x69, 0x2, 0x2, 0x283, 
       0x284, 0x5, 0x5e, 0x30, 0x2, 0x284, 0x285, 0x7, 0x6a, 0x2, 0x2, 0x285, 
       0x287, 0x3, 0x2, 0x2, 0x2, 0x286, 0x281, 0x3, 0x2, 0x2, 0x2, 0x287, 
       0x28a, 0x3, 0x2, 0x2, 0x2, 0x288, 0x286, 0x3, 0x2, 0x2, 0x2, 0x288, 
       0x289, 0x3, 0x2, 0x2, 0x2, 0x289, 0x39, 0x3, 0x2, 0x2, 0x2, 0x28a, 
       0x288, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x28d, 0x7, 0x67, 0x2, 0x2, 0x28c, 
       0x28e, 0x5, 0x2a, 0x16, 0x2, 0x28d, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x28d, 
       0x28e, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x28f, 
       0x292, 0x7, 0x68, 0x2, 0x2, 0x290, 0x292, 0x5, 0x10e, 0x88, 0x2, 
       0x291, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x291, 0x290, 0x3, 0x2, 0x2, 0x2, 
       0x292, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x293, 0x295, 0x7, 0x92, 0x2, 0x2, 
       0x294, 0x293, 0x3, 0x2, 0x2, 0x2, 0x294, 0x295, 0x3, 0x2, 0x2, 0x2, 
       0x295, 0x296, 0x3, 0x2, 0x2, 0x2, 0x296, 0x297, 0x7, 0x2d, 0x2, 0x2, 
       0x297, 0x2a0, 0x5, 0x3e, 0x20, 0x2, 0x298, 0x29a, 0x7, 0x92, 0x2, 
       0x2, 0x299, 0x298, 0x3, 0x2, 0x2, 0x2, 0x299, 0x29a, 0x3, 0x2, 0x2, 
       0x2, 0x29a, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x29c, 0x7, 0x2d, 0x2, 
       0x2, 0x29c, 0x29d, 0x7, 0x69, 0x2, 0x2, 0x29d, 0x29e, 0x7, 0x6a, 
       0x2, 0x2, 0x29e, 0x2a0, 0x5, 0x3e, 0x20, 0x2, 0x29f, 0x294, 0x3, 
       0x2, 0x2, 0x2, 0x29f, 0x299, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x3d, 0x3, 
       0x2, 0x2, 0x2, 0x2a1, 0x2a8, 0x5, 0x2c, 0x17, 0x2, 0x2a2, 0x2a3, 
       0x7, 0x67, 0x2, 0x2, 0x2a3, 0x2a4, 0x5, 0xe4, 0x73, 0x2, 0x2a4, 0x2a5, 
       0x7, 0x68, 0x2, 0x2, 0x2a5, 0x2a6, 0x5, 0x3e, 0x20, 0x2, 0x2a6, 0x2a8, 
       0x3, 0x2, 0x2, 0x2, 0x2a7, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a7, 0x2a2, 
       0x3, 0x2, 0x2, 0x2, 0x2a8, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2aa, 
       0x5, 0x3e, 0x20, 0x2, 0x2aa, 0x41, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x2ac, 
       0x8, 0x22, 0x1, 0x2, 0x2ac, 0x2ad, 0x5, 0x40, 0x21, 0x2, 0x2ad, 0x2d4, 
       0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2af, 0xc, 0xe, 0x2, 0x2, 0x2af, 0x2b0, 
       0x7, 0x6f, 0x2, 0x2, 0x2b0, 0x2d3, 0x5, 0x40, 0x21, 0x2, 0x2b1, 0x2b2, 
       0xc, 0xd, 0x2, 0x2, 0x2b2, 0x2b3, 0x7, 0x70, 0x2, 0x2, 0x2b3, 0x2d3, 
       0x5, 0x40, 0x21, 0x2, 0x2b4, 0x2b5, 0xc, 0xc, 0x2, 0x2, 0x2b5, 0x2b6, 
       0x7, 0x71, 0x2, 0x2, 0x2b6, 0x2d3, 0x5, 0x40, 0x21, 0x2, 0x2b7, 0x2b8, 
       0xc, 0xb, 0x2, 0x2, 0x2b8, 0x2b9, 0x7, 0x6, 0x2, 0x2, 0x2b9, 0x2d3, 
       0x5, 0x40, 0x21, 0x2, 0x2ba, 0x2bb, 0xc, 0xa, 0x2, 0x2, 0x2bb, 0x2bc, 
       0x7, 0x95, 0x2, 0x2, 0x2bc, 0x2d3, 0x5, 0x40, 0x21, 0x2, 0x2bd, 0x2be, 
       0xc, 0x9, 0x2, 0x2, 0x2be, 0x2bf, 0x7, 0x7, 0x2, 0x2, 0x2bf, 0x2d3, 
       0x5, 0x40, 0x21, 0x2, 0x2c0, 0x2c1, 0xc, 0x8, 0x2, 0x2, 0x2c1, 0x2c2, 
       0x7, 0x8, 0x2, 0x2, 0x2c2, 0x2d3, 0x5, 0x40, 0x21, 0x2, 0x2c3, 0x2c4, 
       0xc, 0x7, 0x2, 0x2, 0x2c4, 0x2c5, 0x7, 0x3, 0x2, 0x2, 0x2c5, 0x2d3, 
       0x5, 0x40, 0x21, 0x2, 0x2c6, 0x2c7, 0xc, 0x6, 0x2, 0x2, 0x2c7, 0x2c8, 
       0x7, 0x9, 0x2, 0x2, 0x2c8, 0x2d3, 0x5, 0x40, 0x21, 0x2, 0x2c9, 0x2ca, 
       0xc, 0x5, 0x2, 0x2, 0x2ca, 0x2cb, 0x7, 0xa, 0x2, 0x2, 0x2cb, 0x2d3, 
       0x5, 0x40, 0x21, 0x2, 0x2cc, 0x2cd, 0xc, 0x4, 0x2, 0x2, 0x2cd, 0x2ce, 
       0x7, 0xb, 0x2, 0x2, 0x2ce, 0x2d3, 0x5, 0x40, 0x21, 0x2, 0x2cf, 0x2d0, 
       0xc, 0x3, 0x2, 0x2, 0x2d0, 0x2d1, 0x7, 0xc, 0x2, 0x2, 0x2d1, 0x2d3, 
       0x5, 0x40, 0x21, 0x2, 0x2d2, 0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2b1, 
       0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2b7, 
       0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2bd, 
       0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2c3, 
       0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2c9, 
       0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2cf, 
       0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d2, 
       0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2d5, 0x43, 
       0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d8, 
       0x8, 0x23, 0x1, 0x2, 0x2d8, 0x2d9, 0x5, 0x42, 0x22, 0x2, 0x2d9, 0x2e8, 
       0x3, 0x2, 0x2, 0x2, 0x2da, 0x2db, 0xc, 0x6, 0x2, 0x2, 0x2db, 0x2dc, 
       0x7, 0x6d, 0x2, 0x2, 0x2dc, 0x2e7, 0x5, 0x42, 0x22, 0x2, 0x2dd, 0x2de, 
       0xc, 0x5, 0x2, 0x2, 0x2de, 0x2df, 0x7, 0x6e, 0x2, 0x2, 0x2df, 0x2e7, 
       0x5, 0x42, 0x22, 0x2, 0x2e0, 0x2e1, 0xc, 0x4, 0x2, 0x2, 0x2e1, 0x2e2, 
       0x7, 0x75, 0x2, 0x2, 0x2e2, 0x2e7, 0x5, 0x42, 0x22, 0x2, 0x2e3, 0x2e4, 
       0xc, 0x3, 0x2, 0x2, 0x2e4, 0x2e5, 0x7, 0x74, 0x2, 0x2, 0x2e5, 0x2e7, 
       0x5, 0x42, 0x22, 0x2, 0x2e6, 0x2da, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2dd, 
       0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e3, 
       0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2e8, 0x2e6, 
       0x3, 0x2, 0x2, 0x2, 0x2e8, 0x2e9, 0x3, 0x2, 0x2, 0x2, 0x2e9, 0x45, 
       0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2ec, 
       0x8, 0x24, 0x1, 0x2, 0x2ec, 0x2ed, 0x5, 0x44, 0x23, 0x2, 0x2ed, 0x2f7, 
       0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2ef, 0xc, 0x4, 0x2, 0x2, 0x2ef, 0x2f0, 
       0x7, 0x83, 0x2, 0x2, 0x2f0, 0x2f6, 0x5, 0x44, 0x23, 0x2, 0x2f1, 0x2f2, 
       0xc, 0x3, 0x2, 0x2, 0x2f2, 0x2f3, 0x5, 0x148, 0xa5, 0x2, 0x2f3, 0x2f4, 
       0x5, 0x44, 0x23, 0x2, 0x2f4, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f5, 0x2ee, 
       0x3, 0x2, 0x2, 0x2, 0x2f5, 0x2f1, 0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2f9, 
       0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2f5, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2f8, 
       0x3, 0x2, 0x2, 0x2, 0x2f8, 0x47, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2f7, 
       0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2fb, 0x8, 0x25, 0x1, 0x2, 0x2fb, 0x2fc, 
       0x5, 0x46, 0x24, 0x2, 0x2fc, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x2fe, 
       0xc, 0x6, 0x2, 0x2, 0x2fe, 0x2ff, 0x7, 0x78, 0x2, 0x2, 0x2ff, 0x30a, 
       0x5, 0x46, 0x24, 0x2, 0x300, 0x301, 0xc, 0x5, 0x2, 0x2, 0x301, 0x302, 
       0x7, 0x79, 0x2, 0x2, 0x302, 0x30a, 0x5, 0x46, 0x24, 0x2, 0x303, 0x304, 
       0xc, 0x4, 0x2, 0x2, 0x304, 0x305, 0x7, 0x87, 0x2, 0x2, 0x305, 0x30a, 
       0x5, 0x46, 0x24, 0x2, 0x306, 0x307, 0xc, 0x3, 0x2, 0x2, 0x307, 0x308, 
       0x7, 0x88, 0x2, 0x2, 0x308, 0x30a, 0x5, 0x46, 0x24, 0x2, 0x309, 0x2fd, 
       0x3, 0x2, 0x2, 0x2, 0x309, 0x300, 0x3, 0x2, 0x2, 0x2, 0x309, 0x303, 
       0x3, 0x2, 0x2, 0x2, 0x309, 0x306, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x30d, 
       0x3, 0x2, 0x2, 0x2, 0x30b, 0x309, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x30c, 
       0x3, 0x2, 0x2, 0x2, 0x30c, 0x49, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x30b, 
       0x3, 0x2, 0x2, 0x2, 0x30e, 0x30f, 0x8, 0x26, 0x1, 0x2, 0x30f, 0x310, 
       0x5, 0x48, 0x25, 0x2, 0x310, 0x31f, 0x3, 0x2, 0x2, 0x2, 0x311, 0x312, 
       0xc, 0x6, 0x2, 0x2, 0x312, 0x313, 0x7, 0x85, 0x2, 0x2, 0x313, 0x31e, 
       0x5, 0x48, 0x25, 0x2, 0x314, 0x315, 0xc, 0x5, 0x2, 0x2, 0x315, 0x316, 
       0x7, 0x86, 0x2, 0x2, 0x316, 0x31e, 0x5, 0x48, 0x25, 0x2, 0x317, 0x318, 
       0xc, 0x4, 0x2, 0x2, 0x318, 0x319, 0x7, 0xd, 0x2, 0x2, 0x319, 0x31e, 
       0x5, 0x48, 0x25, 0x2, 0x31a, 0x31b, 0xc, 0x3, 0x2, 0x2, 0x31b, 0x31c, 
       0x7, 0xe, 0x2, 0x2, 0x31c, 0x31e, 0x5, 0x48, 0x25, 0x2, 0x31d, 0x311, 
       0x3, 0x2, 0x2, 0x2, 0x31d, 0x314, 0x3, 0x2, 0x2, 0x2, 0x31d, 0x317, 
       0x3, 0x2, 0x2, 0x2, 0x31d, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x31e, 0x321, 
       0x3, 0x2, 0x2, 0x2, 0x31f, 0x31d, 0x3, 0x2, 0x2, 0x2, 0x31f, 0x320, 
       0x3, 0x2, 0x2, 0x2, 0x320, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x321, 0x31f, 
       0x3, 0x2, 0x2, 0x2, 0x322, 0x323, 0x8, 0x27, 0x1, 0x2, 0x323, 0x324, 
       0x5, 0x4a, 0x26, 0x2, 0x324, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x325, 0x326, 
       0xc, 0x3, 0x2, 0x2, 0x326, 0x327, 0x7, 0x73, 0x2, 0x2, 0x327, 0x329, 
       0x5, 0x4a, 0x26, 0x2, 0x328, 0x325, 0x3, 0x2, 0x2, 0x2, 0x329, 0x32c, 
       0x3, 0x2, 0x2, 0x2, 0x32a, 0x328, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x32b, 
       0x3, 0x2, 0x2, 0x2, 0x32b, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x32a, 
       0x3, 0x2, 0x2, 0x2, 0x32d, 0x32e, 0x8, 0x28, 0x1, 0x2, 0x32e, 0x32f, 
       0x5, 0x4c, 0x27, 0x2, 0x32f, 0x335, 0x3, 0x2, 0x2, 0x2, 0x330, 0x331, 
       0xc, 0x3, 0x2, 0x2, 0x331, 0x332, 0x7, 0x72, 0x2, 0x2, 0x332, 0x334, 
       0x5, 0x4c, 0x27, 0x2, 0x333, 0x330, 0x3, 0x2, 0x2, 0x2, 0x334, 0x337, 
       0x3, 0x2, 0x2, 0x2, 0x335, 0x333, 0x3, 0x2, 0x2, 0x2, 0x335, 0x336, 
       0x3, 0x2, 0x2, 0x2, 0x336, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x337, 0x335, 
       0x3, 0x2, 0x2, 0x2, 0x338, 0x339, 0x8, 0x29, 0x1, 0x2, 0x339, 0x33a, 
       0x5, 0x4e, 0x28, 0x2, 0x33a, 0x340, 0x3, 0x2, 0x2, 0x2, 0x33b, 0x33c, 
       0xc, 0x3, 0x2, 0x2, 0x33c, 0x33d, 0x9, 0x5, 0x2, 0x2, 0x33d, 0x33f, 
       0x5, 0x4e, 0x28, 0x2, 0x33e, 0x33b, 0x3, 0x2, 0x2, 0x2, 0x33f, 0x342, 
       0x3, 0x2, 0x2, 0x2, 0x340, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x340, 0x341, 
       0x3, 0x2, 0x2, 0x2, 0x341, 0x51, 0x3, 0x2, 0x2, 0x2, 0x342, 0x340, 
       0x3, 0x2, 0x2, 0x2, 0x343, 0x344, 0x8, 0x2a, 0x1, 0x2, 0x344, 0x345, 
       0x5, 0x50, 0x29, 0x2, 0x345, 0x34b, 0x3, 0x2, 0x2, 0x2, 0x346, 0x347, 
       0xc, 0x3, 0x2, 0x2, 0x347, 0x348, 0x9, 0x6, 0x2, 0x2, 0x348, 0x34a, 
       0x5, 0x50, 0x29, 0x2, 0x349, 0x346, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x34d, 
       0x3, 0x2, 0x2, 0x2, 0x34b, 0x349, 0x3, 0x2, 0x2, 0x2, 0x34b, 0x34c, 
       0x3, 0x2, 0x2, 0x2, 0x34c, 0x53, 0x3, 0x2, 0x2, 0x2, 0x34d, 0x34b, 
       0x3, 0x2, 0x2, 0x2, 0x34e, 0x354, 0x5, 0x52, 0x2a, 0x2, 0x34f, 0x350, 
       0x9, 0x7, 0x2, 0x2, 0x350, 0x351, 0x5, 0x5c, 0x2f, 0x2, 0x351, 0x352, 
       0x9, 0x8, 0x2, 0x2, 0x352, 0x353, 0x5, 0x56, 0x2c, 0x2, 0x353, 0x355, 
       0x3, 0x2, 0x2, 0x2, 0x354, 0x34f, 0x3, 0x2, 0x2, 0x2, 0x354, 0x355, 
       0x3, 0x2, 0x2, 0x2, 0x355, 0x55, 0x3, 0x2, 0x2, 0x2, 0x356, 0x362, 
       0x5, 0x54, 0x2b, 0x2, 0x357, 0x358, 0x5, 0x52, 0x2a, 0x2, 0x358, 
       0x359, 0x5, 0x5a, 0x2e, 0x2, 0x359, 0x35a, 0x5, 0x106, 0x84, 0x2, 
       0x35a, 0x362, 0x3, 0x2, 0x2, 0x2, 0x35b, 0x35c, 0x7, 0x69, 0x2, 0x2, 
       0x35c, 0x35d, 0x5, 0x58, 0x2d, 0x2, 0x35d, 0x35e, 0x7, 0x6a, 0x2, 
       0x2, 0x35e, 0x35f, 0x5, 0x5a, 0x2e, 0x2, 0x35f, 0x360, 0x5, 0x106, 
       0x84, 0x2, 0x360, 0x362, 0x3, 0x2, 0x2, 0x2, 0x361, 0x356, 0x3, 0x2, 
       0x2, 0x2, 0x361, 0x357, 0x3, 0x2, 0x2, 0x2, 0x361, 0x35b, 0x3, 0x2, 
       0x2, 0x2, 0x362, 0x57, 0x3, 0x2, 0x2, 0x2, 0x363, 0x364, 0x5, 0x5c, 
       0x2f, 0x2, 0x364, 0x59, 0x3, 0x2, 0x2, 0x2, 0x365, 0x372, 0x7, 0x77, 
       0x2, 0x2, 0x366, 0x372, 0x7, 0x7c, 0x2, 0x2, 0x367, 0x372, 0x7, 0x7d, 
       0x2, 0x2, 0x368, 0x372, 0x7, 0x7a, 0x2, 0x2, 0x369, 0x372, 0x7, 0x7b, 
       0x2, 0x2, 0x36a, 0x372, 0x5, 0x14a, 0xa6, 0x2, 0x36b, 0x372, 0x7, 
       0x80, 0x2, 0x2, 0x36c, 0x372, 0x7, 0x7f, 0x2, 0x2, 0x36d, 0x372, 
       0x7, 0x82, 0x2, 0x2, 0x36e, 0x372, 0x7, 0x13, 0x2, 0x2, 0x36f, 0x372, 
       0x7, 0x14, 0x2, 0x2, 0x370, 0x372, 0x7, 0x15, 0x2, 0x2, 0x371, 0x365, 
       0x3, 0x2, 0x2, 0x2, 0x371, 0x366, 0x3, 0x2, 0x2, 0x2, 0x371, 0x367, 
       0x3, 0x2, 0x2, 0x2, 0x371, 0x368, 0x3, 0x2, 0x2, 0x2, 0x371, 0x369, 
       0x3, 0x2, 0x2, 0x2, 0x371, 0x36a, 0x3, 0x2, 0x2, 0x2, 0x371, 0x36b, 
       0x3, 0x2, 0x2, 0x2, 0x371, 0x36c, 0x3, 0x2, 0x2, 0x2, 0x371, 0x36d, 
       0x3, 0x2, 0x2, 0x2, 0x371, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x371, 0x36f, 
       0x3, 0x2, 0x2, 0x2, 0x371, 0x370, 0x3, 0x2, 0x2, 0x2, 0x372, 0x5b, 
       0x3, 0x2, 0x2, 0x2, 0x373, 0x374, 0x8, 0x2f, 0x1, 0x2, 0x374, 0x375, 
       0x5, 0x56, 0x2c, 0x2, 0x375, 0x37b, 0x3, 0x2, 0x2, 0x2, 0x376, 0x377, 
       0xc, 0x3, 0x2, 0x2, 0x377, 0x378, 0x7, 0x8d, 0x2, 0x2, 0x378, 0x37a, 
       0x5, 0x56, 0x2c, 0x2, 0x379, 0x376, 0x3, 0x2, 0x2, 0x2, 0x37a, 0x37d, 
       0x3, 0x2, 0x2, 0x2, 0x37b, 0x379, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x37c, 
       0x3, 0x2, 0x2, 0x2, 0x37c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x37b, 
       0x3, 0x2, 0x2, 0x2, 0x37e, 0x37f, 0x5, 0x54, 0x2b, 0x2, 0x37f, 0x5f, 
       0x3, 0x2, 0x2, 0x2, 0x380, 0x388, 0x5, 0x66, 0x34, 0x2, 0x381, 0x388, 
       0x5, 0x62, 0x32, 0x2, 0x382, 0x388, 0x5, 0x64, 0x33, 0x2, 0x383, 
       0x388, 0x5, 0x6a, 0x36, 0x2, 0x384, 0x388, 0x5, 0x6e, 0x38, 0x2, 
       0x385, 0x388, 0x5, 0x72, 0x3a, 0x2, 0x386, 0x388, 0x5, 0x74, 0x3b, 
       0x2, 0x387, 0x380, 0x3, 0x2, 0x2, 0x2, 0x387, 0x381, 0x3, 0x2, 0x2, 
       0x2, 0x387, 0x382, 0x3, 0x2, 0x2, 0x2, 0x387, 0x383, 0x3, 0x2, 0x2, 
       0x2, 0x387, 0x384, 0x3, 0x2, 0x2, 0x2, 0x387, 0x385, 0x3, 0x2, 0x2, 
       0x2, 0x387, 0x386, 0x3, 0x2, 0x2, 0x2, 0x388, 0x61, 0x3, 0x2, 0x2, 
       0x2, 0x389, 0x38a, 0x7, 0x97, 0x2, 0x2, 0x38a, 0x38b, 0x7, 0x91, 
       0x2, 0x2, 0x38b, 0x395, 0x5, 0x60, 0x31, 0x2, 0x38c, 0x38d, 0x7, 
       0x21, 0x2, 0x2, 0x38d, 0x38e, 0x5, 0x5e, 0x30, 0x2, 0x38e, 0x38f, 
       0x7, 0x91, 0x2, 0x2, 0x38f, 0x390, 0x5, 0x60, 0x31, 0x2, 0x390, 0x395, 
       0x3, 0x2, 0x2, 0x2, 0x391, 0x392, 0x7, 0x2c, 0x2, 0x2, 0x392, 0x393, 
       0x7, 0x91, 0x2, 0x2, 0x393, 0x395, 0x5, 0x60, 0x31, 0x2, 0x394, 0x389, 
       0x3, 0x2, 0x2, 0x2, 0x394, 0x38c, 0x3, 0x2, 0x2, 0x2, 0x394, 0x391, 
       0x3, 0x2, 0x2, 0x2, 0x395, 0x63, 0x3, 0x2, 0x2, 0x2, 0x396, 0x398, 
       0x5, 0x5c, 0x2f, 0x2, 0x397, 0x396, 0x3, 0x2, 0x2, 0x2, 0x397, 0x398, 
       0x3, 0x2, 0x2, 0x2, 0x398, 0x399, 0x3, 0x2, 0x2, 0x2, 0x399, 0x39a, 
       0x7, 0x93, 0x2, 0x2, 0x39a, 0x65, 0x3, 0x2, 0x2, 0x2, 0x39b, 0x39d, 
       0x7, 0x6b, 0x2, 0x2, 0x39c, 0x39e, 0x5, 0x68, 0x35, 0x2, 0x39d, 0x39c, 
       0x3, 0x2, 0x2, 0x2, 0x39d, 0x39e, 0x3, 0x2, 0x2, 0x2, 0x39e, 0x39f, 
       0x3, 0x2, 0x2, 0x2, 0x39f, 0x3a7, 0x7, 0x6c, 0x2, 0x2, 0x3a0, 0x3a1, 
       0x7, 0x16, 0x2, 0x2, 0x3a1, 0x3a3, 0x7, 0x6b, 0x2, 0x2, 0x3a2, 0x3a4, 
       0x5, 0x68, 0x35, 0x2, 0x3a3, 0x3a2, 0x3, 0x2, 0x2, 0x2, 0x3a3, 0x3a4, 
       0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3a5, 0x3, 0x2, 0x2, 0x2, 0x3a5, 0x3a7, 
       0x7, 0x6c, 0x2, 0x2, 0x3a6, 0x39b, 0x3, 0x2, 0x2, 0x2, 0x3a6, 0x3a0, 
       0x3, 0x2, 0x2, 0x2, 0x3a7, 0x67, 0x3, 0x2, 0x2, 0x2, 0x3a8, 0x3a9, 
       0x8, 0x35, 0x1, 0x2, 0x3a9, 0x3aa, 0x5, 0x60, 0x31, 0x2, 0x3aa, 0x3af, 
       0x3, 0x2, 0x2, 0x2, 0x3ab, 0x3ac, 0xc, 0x3, 0x2, 0x2, 0x3ac, 0x3ae, 
       0x5, 0x60, 0x31, 0x2, 0x3ad, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0x3ae, 0x3b1, 
       0x3, 0x2, 0x2, 0x2, 0x3af, 0x3ad, 0x3, 0x2, 0x2, 0x2, 0x3af, 0x3b0, 
       0x3, 0x2, 0x2, 0x2, 0x3b0, 0x69, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3af, 
       0x3, 0x2, 0x2, 0x2, 0x3b2, 0x3b3, 0x7, 0x3c, 0x2, 0x2, 0x3b3, 0x3b4, 
       0x7, 0x67, 0x2, 0x2, 0x3b4, 0x3b5, 0x5, 0x5c, 0x2f, 0x2, 0x3b5, 0x3b6, 
       0x7, 0x68, 0x2, 0x2, 0x3b6, 0x3b9, 0x5, 0x60, 0x31, 0x2, 0x3b7, 0x3b8, 
       0x7, 0x31, 0x2, 0x2, 0x3b8, 0x3ba, 0x5, 0x60, 0x31, 0x2, 0x3b9, 0x3b7, 
       0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3ba, 0x3c8, 
       0x3, 0x2, 0x2, 0x2, 0x3bb, 0x3bc, 0x7, 0x55, 0x2, 0x2, 0x3bc, 0x3bd, 
       0x7, 0x67, 0x2, 0x2, 0x3bd, 0x3be, 0x5, 0x5c, 0x2f, 0x2, 0x3be, 0x3bf, 
       0x7, 0x68, 0x2, 0x2, 0x3bf, 0x3c0, 0x5, 0x60, 0x31, 0x2, 0x3c0, 0x3c8, 
       0x3, 0x2, 0x2, 0x2, 0x3c1, 0x3c2, 0x7, 0x56, 0x2, 0x2, 0x3c2, 0x3c3, 
       0x7, 0x67, 0x2, 0x2, 0x3c3, 0x3c4, 0x5, 0x5c, 0x2f, 0x2, 0x3c4, 0x3c5, 
       0x7, 0x68, 0x2, 0x2, 0x3c5, 0x3c6, 0x5, 0x60, 0x31, 0x2, 0x3c6, 0x3c8, 
       0x3, 0x2, 0x2, 0x2, 0x3c7, 0x3b2, 0x3, 0x2, 0x2, 0x2, 0x3c7, 0x3bb, 
       0x3, 0x2, 0x2, 0x2, 0x3c7, 0x3c1, 0x3, 0x2, 0x2, 0x2, 0x3c8, 0x6b, 
       0x3, 0x2, 0x2, 0x2, 0x3c9, 0x3d4, 0x5, 0x5c, 0x2f, 0x2, 0x3ca, 0x3cb, 
       0x5, 0x90, 0x49, 0x2, 0x3cb, 0x3cc, 0x5, 0xd2, 0x6a, 0x2, 0x3cc, 
       0x3cd, 0x7, 0x77, 0x2, 0x2, 0x3cd, 0x3ce, 0x5, 0x106, 0x84, 0x2, 
       0x3ce, 0x3d4, 0x3, 0x2, 0x2, 0x2, 0x3cf, 0x3d0, 0x5, 0x90, 0x49, 
       0x2, 0x3d0, 0x3d1, 0x5, 0xd2, 0x6a, 0x2, 0x3d1, 0x3d2, 0x5, 0x10e, 
       0x88, 0x2, 0x3d2, 0x3d4, 0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3c9, 0x3, 0x2, 
       0x2, 0x2, 0x3d3, 0x3ca, 0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3cf, 0x3, 0x2, 
       0x2, 0x2, 0x3d4, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3d6, 0x7, 0x66, 
       0x2, 0x2, 0x3d6, 0x3d7, 0x7, 0x67, 0x2, 0x2, 0x3d7, 0x3d8, 0x5, 0x6c, 
       0x37, 0x2, 0x3d8, 0x3d9, 0x7, 0x68, 0x2, 0x2, 0x3d9, 0x3da, 0x5, 
       0x60, 0x31, 0x2, 0x3da, 0x40a, 0x3, 0x2, 0x2, 0x2, 0x3db, 0x3dc, 
       0x7, 0x2e, 0x2, 0x2, 0x3dc, 0x3dd, 0x5, 0x60, 0x31, 0x2, 0x3dd, 0x3de, 
       0x7, 0x66, 0x2, 0x2, 0x3de, 0x3df, 0x7, 0x67, 0x2, 0x2, 0x3df, 0x3e0, 
       0x5, 0x5c, 0x2f, 0x2, 0x3e0, 0x3e1, 0x7, 0x68, 0x2, 0x2, 0x3e1, 0x3e2, 
       0x7, 0x93, 0x2, 0x2, 0x3e2, 0x40a, 0x3, 0x2, 0x2, 0x2, 0x3e3, 0x3e4, 
       0x7, 0x38, 0x2, 0x2, 0x3e4, 0x3e5, 0x7, 0x67, 0x2, 0x2, 0x3e5, 0x3e7, 
       0x5, 0x70, 0x39, 0x2, 0x3e6, 0x3e8, 0x5, 0x6c, 0x37, 0x2, 0x3e7, 
       0x3e6, 0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3e8, 
       0x3e9, 0x3, 0x2, 0x2, 0x2, 0x3e9, 0x3eb, 0x7, 0x93, 0x2, 0x2, 0x3ea, 
       0x3ec, 0x5, 0x5c, 0x2f, 0x2, 0x3eb, 0x3ea, 0x3, 0x2, 0x2, 0x2, 0x3eb, 
       0x3ec, 0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3ed, 
       0x3ee, 0x7, 0x68, 0x2, 0x2, 0x3ee, 0x3ef, 0x5, 0x60, 0x31, 0x2, 0x3ef, 
       0x40a, 0x3, 0x2, 0x2, 0x2, 0x3f0, 0x3f1, 0x7, 0x39, 0x2, 0x2, 0x3f1, 
       0x3f3, 0x7, 0x67, 0x2, 0x2, 0x3f2, 0x3f4, 0x5, 0x9e, 0x50, 0x2, 0x3f3, 
       0x3f2, 0x3, 0x2, 0x2, 0x2, 0x3f3, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3f4, 
       0x3f5, 0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3f6, 0x5, 0xd2, 0x6a, 0x2, 0x3f6, 
       0x3f7, 0x7, 0x18, 0x2, 0x2, 0x3f7, 0x3f8, 0x5, 0x5c, 0x2f, 0x2, 0x3f8, 
       0x3f9, 0x7, 0x68, 0x2, 0x2, 0x3f9, 0x3fa, 0x5, 0x60, 0x31, 0x2, 0x3fa, 
       0x40a, 0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3fc, 0x7, 0x81, 0x2, 0x2, 0x3fc, 
       0x3fd, 0x7, 0x38, 0x2, 0x2, 0x3fd, 0x3fe, 0x7, 0x67, 0x2, 0x2, 0x3fe, 
       0x400, 0x5, 0x70, 0x39, 0x2, 0x3ff, 0x401, 0x5, 0x6c, 0x37, 0x2, 
       0x400, 0x3ff, 0x3, 0x2, 0x2, 0x2, 0x400, 0x401, 0x3, 0x2, 0x2, 0x2, 
       0x401, 0x402, 0x3, 0x2, 0x2, 0x2, 0x402, 0x404, 0x7, 0x93, 0x2, 0x2, 
       0x403, 0x405, 0x5, 0x5c, 0x2f, 0x2, 0x404, 0x403, 0x3, 0x2, 0x2, 
       0x2, 0x404, 0x405, 0x3, 0x2, 0x2, 0x2, 0x405, 0x406, 0x3, 0x2, 0x2, 
       0x2, 0x406, 0x407, 0x7, 0x68, 0x2, 0x2, 0x407, 0x408, 0x5, 0x60, 
       0x31, 0x2, 0x408, 0x40a, 0x3, 0x2, 0x2, 0x2, 0x409, 0x3d5, 0x3, 0x2, 
       0x2, 0x2, 0x409, 0x3db, 0x3, 0x2, 0x2, 0x2, 0x409, 0x3e3, 0x3, 0x2, 
       0x2, 0x2, 0x409, 0x3f0, 0x3, 0x2, 0x2, 0x2, 0x409, 0x3fb, 0x3, 0x2, 
       0x2, 0x2, 0x40a, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x40b, 0x40e, 0x5, 0x64, 
       0x33, 0x2, 0x40c, 0x40e, 0x5, 0x88, 0x45, 0x2, 0x40d, 0x40b, 0x3, 
       0x2, 0x2, 0x2, 0x40d, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x40e, 0x71, 0x3, 
       0x2, 0x2, 0x2, 0x40f, 0x410, 0x7, 0x20, 0x2, 0x2, 0x410, 0x41c, 0x7, 
       0x93, 0x2, 0x2, 0x411, 0x412, 0x7, 0x2a, 0x2, 0x2, 0x412, 0x41c, 
       0x7, 0x93, 0x2, 0x2, 0x413, 0x415, 0x7, 0x4e, 0x2, 0x2, 0x414, 0x416, 
       0x5, 0x5c, 0x2f, 0x2, 0x415, 0x414, 0x3, 0x2, 0x2, 0x2, 0x415, 0x416, 
       0x3, 0x2, 0x2, 0x2, 0x416, 0x417, 0x3, 0x2, 0x2, 0x2, 0x417, 0x41c, 
       0x7, 0x93, 0x2, 0x2, 0x418, 0x419, 0x7, 0x3b, 0x2, 0x2, 0x419, 0x41a, 
       0x7, 0x97, 0x2, 0x2, 0x41a, 0x41c, 0x7, 0x93, 0x2, 0x2, 0x41b, 0x40f, 
       0x3, 0x2, 0x2, 0x2, 0x41b, 0x411, 0x3, 0x2, 0x2, 0x2, 0x41b, 0x413, 
       0x3, 0x2, 0x2, 0x2, 0x41b, 0x418, 0x3, 0x2, 0x2, 0x2, 0x41c, 0x73, 
       0x3, 0x2, 0x2, 0x2, 0x41d, 0x41e, 0x5, 0x84, 0x43, 0x2, 0x41e, 0x75, 
       0x3, 0x2, 0x2, 0x2, 0x41f, 0x420, 0x8, 0x3c, 0x1, 0x2, 0x420, 0x421, 
       0x5, 0x78, 0x3d, 0x2, 0x421, 0x426, 0x3, 0x2, 0x2, 0x2, 0x422, 0x423, 
       0xc, 0x3, 0x2, 0x2, 0x423, 0x425, 0x5, 0x78, 0x3d, 0x2, 0x424, 0x422, 
       0x3, 0x2, 0x2, 0x2, 0x425, 0x428, 0x3, 0x2, 0x2, 0x2, 0x426, 0x424, 
       0x3, 0x2, 0x2, 0x2, 0x426, 0x427, 0x3, 0x2, 0x2, 0x2, 0x427, 0x77, 
       0x3, 0x2, 0x2, 0x2, 0x428, 0x426, 0x3, 0x2, 0x2, 0x2, 0x429, 0x42f, 
       0x5, 0x84, 0x43, 0x2, 0x42a, 0x42f, 0x5, 0xc8, 0x65, 0x2, 0x42b, 
       0x42f, 0x5, 0xba, 0x5e, 0x2, 0x42c, 0x42f, 0x5, 0x8c, 0x47, 0x2, 
       0x42d, 0x42f, 0x5, 0x7c, 0x3f, 0x2, 0x42e, 0x429, 0x3, 0x2, 0x2, 
       0x2, 0x42e, 0x42a, 0x3, 0x2, 0x2, 0x2, 0x42e, 0x42b, 0x3, 0x2, 0x2, 
       0x2, 0x42e, 0x42c, 0x3, 0x2, 0x2, 0x2, 0x42e, 0x42d, 0x3, 0x2, 0x2, 
       0x2, 0x42f, 0x79, 0x3, 0x2, 0x2, 0x2, 0x430, 0x431, 0x7, 0xa7, 0x2, 
       0x2, 0x431, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x432, 0x437, 0x5, 0xa6, 0x54, 
       0x2, 0x433, 0x437, 0x5, 0xd6, 0x6c, 0x2, 0x434, 0x437, 0x5, 0x80, 
       0x41, 0x2, 0x435, 0x437, 0x5, 0x112, 0x8a, 0x2, 0x436, 0x432, 0x3, 
       0x2, 0x2, 0x2, 0x436, 0x433, 0x3, 0x2, 0x2, 0x2, 0x436, 0x434, 0x3, 
       0x2, 0x2, 0x2, 0x436, 0x435, 0x3, 0x2, 0x2, 0x2, 0x437, 0x7d, 0x3, 
       0x2, 0x2, 0x2, 0x438, 0x439, 0x7, 0x97, 0x2, 0x2, 0x439, 0x7f, 0x3, 
       0x2, 0x2, 0x2, 0x43a, 0x43c, 0x5, 0x94, 0x4b, 0x2, 0x43b, 0x43a, 
       0x3, 0x2, 0x2, 0x2, 0x43b, 0x43c, 0x3, 0x2, 0x2, 0x2, 0x43c, 0x440, 
       0x3, 0x2, 0x2, 0x2, 0x43d, 0x43e, 0x5, 0x110, 0x89, 0x2, 0x43e, 0x43f, 
       0x7, 0x92, 0x2, 0x2, 0x43f, 0x441, 0x3, 0x2, 0x2, 0x2, 0x440, 0x43d, 
       0x3, 0x2, 0x2, 0x2, 0x440, 0x441, 0x3, 0x2, 0x2, 0x2, 0x441, 0x442, 
       0x3, 0x2, 0x2, 0x2, 0x442, 0x443, 0x5, 0x7e, 0x40, 0x2, 0x443, 0x445, 
       0x5, 0xd8, 0x6d, 0x2, 0x444, 0x446, 0x5, 0x100, 0x81, 0x2, 0x445, 
       0x444, 0x3, 0x2, 0x2, 0x2, 0x445, 0x446, 0x3, 0x2, 0x2, 0x2, 0x446, 
       0x453, 0x3, 0x2, 0x2, 0x2, 0x447, 0x449, 0x5, 0x94, 0x4b, 0x2, 0x448, 
       0x447, 0x3, 0x2, 0x2, 0x2, 0x448, 0x449, 0x3, 0x2, 0x2, 0x2, 0x449, 
       0x44a, 0x3, 0x2, 0x2, 0x2, 0x44a, 0x44b, 0x5, 0x110, 0x89, 0x2, 0x44b, 
       0x44c, 0x7, 0x17, 0x2, 0x2, 0x44c, 0x44d, 0x3, 0x2, 0x2, 0x2, 0x44d, 
       0x44e, 0x5, 0x7e, 0x40, 0x2, 0x44e, 0x450, 0x5, 0xd8, 0x6d, 0x2, 
       0x44f, 0x451, 0x5, 0x100, 0x81, 0x2, 0x450, 0x44f, 0x3, 0x2, 0x2, 
       0x2, 0x450, 0x451, 0x3, 0x2, 0x2, 0x2, 0x451, 0x453, 0x3, 0x2, 0x2, 
       0x2, 0x452, 0x43b, 0x3, 0x2, 0x2, 0x2, 0x452, 0x448, 0x3, 0x2, 0x2, 
       0x2, 0x453, 0x81, 0x3, 0x2, 0x2, 0x2, 0x454, 0x459, 0x5, 0x78, 0x3d, 
       0x2, 0x455, 0x459, 0x5, 0xa6, 0x54, 0x2, 0x456, 0x457, 0x7, 0x4b, 
       0x2, 0x2, 0x457, 0x459, 0x7, 0x91, 0x2, 0x2, 0x458, 0x454, 0x3, 0x2, 
       0x2, 0x2, 0x458, 0x455, 0x3, 0x2, 0x2, 0x2, 0x458, 0x456, 0x3, 0x2, 
       0x2, 0x2, 0x459, 0x83, 0x3, 0x2, 0x2, 0x2, 0x45a, 0x45f, 0x5, 0x88, 
       0x45, 0x2, 0x45b, 0x45f, 0x5, 0x8a, 0x46, 0x2, 0x45c, 0x45f, 0x5, 
       0x86, 0x44, 0x2, 0x45d, 0x45f, 0x5, 0xaa, 0x56, 0x2, 0x45e, 0x45a, 
       0x3, 0x2, 0x2, 0x2, 0x45e, 0x45b, 0x3, 0x2, 0x2, 0x2, 0x45e, 0x45c, 
       0x3, 0x2, 0x2, 0x2, 0x45e, 0x45d, 0x3, 0x2, 0x2, 0x2, 0x45f, 0x85, 
       0x3, 0x2, 0x2, 0x2, 0x460, 0x461, 0x7, 0x61, 0x2, 0x2, 0x461, 0x462, 
       0x7, 0x97, 0x2, 0x2, 0x462, 0x463, 0x7, 0x77, 0x2, 0x2, 0x463, 0x464, 
       0x5, 0xe4, 0x73, 0x2, 0x464, 0x465, 0x7, 0x93, 0x2, 0x2, 0x465, 0x87, 
       0x3, 0x2, 0x2, 0x2, 0x466, 0x467, 0x5, 0x90, 0x49, 0x2, 0x467, 0x468, 
       0x5, 0xce, 0x68, 0x2, 0x468, 0x469, 0x7, 0x93, 0x2, 0x2, 0x469, 0x89, 
       0x3, 0x2, 0x2, 0x2, 0x46a, 0x46b, 0x7, 0x52, 0x2, 0x2, 0x46b, 0x46c, 
       0x7, 0x67, 0x2, 0x2, 0x46c, 0x46d, 0x5, 0x5e, 0x30, 0x2, 0x46d, 0x46e, 
       0x7, 0x8d, 0x2, 0x2, 0x46e, 0x46f, 0x7, 0xa0, 0x2, 0x2, 0x46f, 0x470, 
       0x7, 0x68, 0x2, 0x2, 0x470, 0x471, 0x7, 0x93, 0x2, 0x2, 0x471, 0x8b, 
       0x3, 0x2, 0x2, 0x2, 0x472, 0x473, 0x7, 0x93, 0x2, 0x2, 0x473, 0x8d, 
       0x3, 0x2, 0x2, 0x2, 0x474, 0x47a, 0x5, 0x92, 0x4a, 0x2, 0x475, 0x47a, 
       0x5, 0x96, 0x4c, 0x2, 0x476, 0x47a, 0x5, 0x94, 0x4b, 0x2, 0x477, 
       0x47a, 0x7, 0x5d, 0x2, 0x2, 0x478, 0x47a, 0x7, 0x28, 0x2, 0x2, 0x479, 
       0x474, 0x3, 0x2, 0x2, 0x2, 0x479, 0x475, 0x3, 0x2, 0x2, 0x2, 0x479, 
       0x476, 0x3, 0x2, 0x2, 0x2, 0x479, 0x477, 0x3, 0x2, 0x2, 0x2, 0x479, 
       0x478, 0x3, 0x2, 0x2, 0x2, 0x47a, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x47b, 
       0x47d, 0x5, 0x8e, 0x48, 0x2, 0x47c, 0x47e, 0x5, 0x90, 0x49, 0x2, 
       0x47d, 0x47c, 0x3, 0x2, 0x2, 0x2, 0x47d, 0x47e, 0x3, 0x2, 0x2, 0x2, 
       0x47e, 0x91, 0x3, 0x2, 0x2, 0x2, 0x47f, 0x480, 0x9, 0x9, 0x2, 0x2, 
       0x480, 0x93, 0x3, 0x2, 0x2, 0x2, 0x481, 0x482, 0x9, 0xa, 0x2, 0x2, 
       0x482, 0x95, 0x3, 0x2, 0x2, 0x2, 0x483, 0x486, 0x5, 0x98, 0x4d, 0x2, 
       0x484, 0x486, 0x5, 0xe0, 0x71, 0x2, 0x485, 0x483, 0x3, 0x2, 0x2, 
       0x2, 0x485, 0x484, 0x3, 0x2, 0x2, 0x2, 0x486, 0x97, 0x3, 0x2, 0x2, 
       0x2, 0x487, 0x48a, 0x5, 0x9e, 0x50, 0x2, 0x488, 0x48a, 0x5, 0xa4, 
       0x53, 0x2, 0x489, 0x487, 0x3, 0x2, 0x2, 0x2, 0x489, 0x488, 0x3, 0x2, 
       0x2, 0x2, 0x48a, 0x99, 0x3, 0x2, 0x2, 0x2, 0x48b, 0x490, 0x5, 0x96, 
       0x4c, 0x2, 0x48c, 0x48d, 0x5, 0x96, 0x4c, 0x2, 0x48d, 0x48e, 0x5, 
       0x9a, 0x4e, 0x2, 0x48e, 0x490, 0x3, 0x2, 0x2, 0x2, 0x48f, 0x48b, 
       0x3, 0x2, 0x2, 0x2, 0x48f, 0x48c, 0x3, 0x2, 0x2, 0x2, 0x490, 0x9b, 
       0x3, 0x2, 0x2, 0x2, 0x491, 0x496, 0x5, 0x98, 0x4d, 0x2, 0x492, 0x493, 
       0x5, 0x98, 0x4d, 0x2, 0x493, 0x494, 0x5, 0x9c, 0x4f, 0x2, 0x494, 
       0x496, 0x3, 0x2, 0x2, 0x2, 0x495, 0x491, 0x3, 0x2, 0x2, 0x2, 0x495, 
       0x492, 0x3, 0x2, 0x2, 0x2, 0x496, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x497, 
       0x4a5, 0x7, 0x40, 0x2, 0x2, 0x498, 0x4a5, 0x7, 0x65, 0x2, 0x2, 0x499, 
       0x4a5, 0x7, 0x1f, 0x2, 0x2, 0x49a, 0x4a5, 0x7, 0x4f, 0x2, 0x2, 0x49b, 
       0x4a5, 0x7, 0x3e, 0x2, 0x2, 0x49c, 0x4a5, 0x7, 0x41, 0x2, 0x2, 0x49d, 
       0x4a5, 0x7, 0x50, 0x2, 0x2, 0x49e, 0x4a5, 0x7, 0x60, 0x2, 0x2, 0x49f, 
       0x4a5, 0x7, 0x37, 0x2, 0x2, 0x4a0, 0x4a5, 0x7, 0x2f, 0x2, 0x2, 0x4a1, 
       0x4a5, 0x7, 0x63, 0x2, 0x2, 0x4a2, 0x4a5, 0x7, 0x1e, 0x2, 0x2, 0x4a3, 
       0x4a5, 0x5, 0xa2, 0x52, 0x2, 0x4a4, 0x497, 0x3, 0x2, 0x2, 0x2, 0x4a4, 
       0x498, 0x3, 0x2, 0x2, 0x2, 0x4a4, 0x499, 0x3, 0x2, 0x2, 0x2, 0x4a4, 
       0x49a, 0x3, 0x2, 0x2, 0x2, 0x4a4, 0x49b, 0x3, 0x2, 0x2, 0x2, 0x4a4, 
       0x49c, 0x3, 0x2, 0x2, 0x2, 0x4a4, 0x49d, 0x3, 0x2, 0x2, 0x2, 0x4a4, 
       0x49e, 0x3, 0x2, 0x2, 0x2, 0x4a4, 0x49f, 0x3, 0x2, 0x2, 0x2, 0x4a4, 
       0x4a0, 0x3, 0x2, 0x2, 0x2, 0x4a4, 0x4a1, 0x3, 0x2, 0x2, 0x2, 0x4a4, 
       0x4a2, 0x3, 0x2, 0x2, 0x2, 0x4a4, 0x4a3, 0x3, 0x2, 0x2, 0x2, 0x4a5, 
       0x9f, 0x3, 0x2, 0x2, 0x2, 0x4a6, 0x4a7, 0x5, 0x110, 0x89, 0x2, 0x4a7, 
       0xa1, 0x3, 0x2, 0x2, 0x2, 0x4a8, 0x4a9, 0x7, 0x2b, 0x2, 0x2, 0x4a9, 
       0x4aa, 0x7, 0x67, 0x2, 0x2, 0x4aa, 0x4ab, 0x5, 0x5c, 0x2f, 0x2, 0x4ab, 
       0x4ac, 0x7, 0x68, 0x2, 0x2, 0x4ac, 0x4b2, 0x3, 0x2, 0x2, 0x2, 0x4ad, 
       0x4ae, 0x7, 0x2b, 0x2, 0x2, 0x4ae, 0x4af, 0x7, 0x67, 0x2, 0x2, 0x4af, 
       0x4b0, 0x7, 0x1e, 0x2, 0x2, 0x4b0, 0x4b2, 0x7, 0x68, 0x2, 0x2, 0x4b1, 
       0x4a8, 0x3, 0x2, 0x2, 0x2, 0x4b1, 0x4ad, 0x3, 0x2, 0x2, 0x2, 0x4b2, 
       0xa3, 0x3, 0x2, 0x2, 0x2, 0x4b3, 0x4b5, 0x7, 0x32, 0x2, 0x2, 0x4b4, 
       0x4b6, 0x5, 0xe, 0x8, 0x2, 0x4b5, 0x4b4, 0x3, 0x2, 0x2, 0x2, 0x4b5, 
       0x4b6, 0x3, 0x2, 0x2, 0x2, 0x4b6, 0x4b7, 0x3, 0x2, 0x2, 0x2, 0x4b7, 
       0x4b8, 0x7, 0x97, 0x2, 0x2, 0x4b8, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x4b9, 
       0x4ba, 0x5, 0xa8, 0x55, 0x2, 0x4ba, 0x4bc, 0x7, 0x6b, 0x2, 0x2, 0x4bb, 
       0x4bd, 0x5, 0xb0, 0x59, 0x2, 0x4bc, 0x4bb, 0x3, 0x2, 0x2, 0x2, 0x4bc, 
       0x4bd, 0x3, 0x2, 0x2, 0x2, 0x4bd, 0x4be, 0x3, 0x2, 0x2, 0x2, 0x4be, 
       0x4bf, 0x7, 0x6c, 0x2, 0x2, 0x4bf, 0x4c7, 0x3, 0x2, 0x2, 0x2, 0x4c0, 
       0x4c1, 0x5, 0xa8, 0x55, 0x2, 0x4c1, 0x4c2, 0x7, 0x6b, 0x2, 0x2, 0x4c2, 
       0x4c3, 0x5, 0xb0, 0x59, 0x2, 0x4c3, 0x4c4, 0x7, 0x8d, 0x2, 0x2, 0x4c4, 
       0x4c5, 0x7, 0x6c, 0x2, 0x2, 0x4c5, 0x4c7, 0x3, 0x2, 0x2, 0x2, 0x4c6, 
       0x4b9, 0x3, 0x2, 0x2, 0x2, 0x4c6, 0x4c0, 0x3, 0x2, 0x2, 0x2, 0x4c7, 
       0xa7, 0x3, 0x2, 0x2, 0x2, 0x4c8, 0x4ca, 0x5, 0xac, 0x57, 0x2, 0x4c9, 
       0x4cb, 0x7, 0x97, 0x2, 0x2, 0x4ca, 0x4c9, 0x3, 0x2, 0x2, 0x2, 0x4ca, 
       0x4cb, 0x3, 0x2, 0x2, 0x2, 0x4cb, 0x4cd, 0x3, 0x2, 0x2, 0x2, 0x4cc, 
       0x4ce, 0x5, 0xae, 0x58, 0x2, 0x4cd, 0x4cc, 0x3, 0x2, 0x2, 0x2, 0x4cd, 
       0x4ce, 0x3, 0x2, 0x2, 0x2, 0x4ce, 0x4d6, 0x3, 0x2, 0x2, 0x2, 0x4cf, 
       0x4d0, 0x5, 0xac, 0x57, 0x2, 0x4d0, 0x4d1, 0x5, 0xe, 0x8, 0x2, 0x4d1, 
       0x4d3, 0x7, 0x97, 0x2, 0x2, 0x4d2, 0x4d4, 0x5, 0xae, 0x58, 0x2, 0x4d3, 
       0x4d2, 0x3, 0x2, 0x2, 0x2, 0x4d3, 0x4d4, 0x3, 0x2, 0x2, 0x2, 0x4d4, 
       0x4d6, 0x3, 0x2, 0x2, 0x2, 0x4d5, 0x4c8, 0x3, 0x2, 0x2, 0x2, 0x4d5, 
       0x4cf, 0x3, 0x2, 0x2, 0x2, 0x4d6, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x4d7, 
       0x4d8, 0x5, 0xac, 0x57, 0x2, 0x4d8, 0x4da, 0x7, 0x97, 0x2, 0x2, 0x4d9, 
       0x4db, 0x5, 0xae, 0x58, 0x2, 0x4da, 0x4d9, 0x3, 0x2, 0x2, 0x2, 0x4da, 
       0x4db, 0x3, 0x2, 0x2, 0x2, 0x4db, 0x4dc, 0x3, 0x2, 0x2, 0x2, 0x4dc, 
       0x4dd, 0x7, 0x93, 0x2, 0x2, 0x4dd, 0xab, 0x3, 0x2, 0x2, 0x2, 0x4de, 
       0x4e4, 0x7, 0x32, 0x2, 0x2, 0x4df, 0x4e0, 0x7, 0x32, 0x2, 0x2, 0x4e0, 
       0x4e4, 0x7, 0x26, 0x2, 0x2, 0x4e1, 0x4e2, 0x7, 0x32, 0x2, 0x2, 0x4e2, 
       0x4e4, 0x7, 0x54, 0x2, 0x2, 0x4e3, 0x4de, 0x3, 0x2, 0x2, 0x2, 0x4e3, 
       0x4df, 0x3, 0x2, 0x2, 0x2, 0x4e3, 0x4e1, 0x3, 0x2, 0x2, 0x2, 0x4e4, 
       0xad, 0x3, 0x2, 0x2, 0x2, 0x4e5, 0x4e6, 0x7, 0x91, 0x2, 0x2, 0x4e6, 
       0x4e7, 0x5, 0x9a, 0x4e, 0x2, 0x4e7, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x4e8, 
       0x4e9, 0x8, 0x59, 0x1, 0x2, 0x4e9, 0x4ea, 0x5, 0xb2, 0x5a, 0x2, 0x4ea, 
       0x4f0, 0x3, 0x2, 0x2, 0x2, 0x4eb, 0x4ec, 0xc, 0x3, 0x2, 0x2, 0x4ec, 
       0x4ed, 0x7, 0x8d, 0x2, 0x2, 0x4ed, 0x4ef, 0x5, 0xb2, 0x5a, 0x2, 0x4ee, 
       0x4eb, 0x3, 0x2, 0x2, 0x2, 0x4ef, 0x4f2, 0x3, 0x2, 0x2, 0x2, 0x4f0, 
       0x4ee, 0x3, 0x2, 0x2, 0x2, 0x4f0, 0x4f1, 0x3, 0x2, 0x2, 0x2, 0x4f1, 
       0xb1, 0x3, 0x2, 0x2, 0x2, 0x4f2, 0x4f0, 0x3, 0x2, 0x2, 0x2, 0x4f3, 
       0x4f9, 0x5, 0xb4, 0x5b, 0x2, 0x4f4, 0x4f5, 0x5, 0xb4, 0x5b, 0x2, 
       0x4f5, 0x4f6, 0x7, 0x77, 0x2, 0x2, 0x4f6, 0x4f7, 0x5, 0x5e, 0x30, 
       0x2, 0x4f7, 0x4f9, 0x3, 0x2, 0x2, 0x2, 0x4f8, 0x4f3, 0x3, 0x2, 0x2, 
       0x2, 0x4f8, 0x4f4, 0x3, 0x2, 0x2, 0x2, 0x4f9, 0xb3, 0x3, 0x2, 0x2, 
       0x2, 0x4fa, 0x4fb, 0x9, 0xb, 0x2, 0x2, 0x4fb, 0xb5, 0x3, 0x2, 0x2, 
       0x2, 0x4fc, 0x4ff, 0x5, 0xb8, 0x5d, 0x2, 0x4fd, 0x4ff, 0x5, 0xc6, 
       0x64, 0x2, 0x4fe, 0x4fc, 0x3, 0x2, 0x2, 0x2, 0x4fe, 0x4fd, 0x3, 0x2, 
       0x2, 0x2, 0x4ff, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x500, 0x501, 0x7, 0x97, 
       0x2, 0x2, 0x501, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x502, 0x505, 0x5, 0xbc, 
       0x5f, 0x2, 0x503, 0x505, 0x5, 0xc2, 0x62, 0x2, 0x504, 0x502, 0x3, 
       0x2, 0x2, 0x2, 0x504, 0x503, 0x3, 0x2, 0x2, 0x2, 0x505, 0xbb, 0x3, 
       0x2, 0x2, 0x2, 0x506, 0x507, 0x5, 0xc0, 0x61, 0x2, 0x507, 0xbd, 0x3, 
       0x2, 0x2, 0x2, 0x508, 0x509, 0x7, 0x43, 0x2, 0x2, 0x509, 0x50a, 0x7, 
       0x97, 0x2, 0x2, 0x50a, 0x50b, 0x7, 0x6b, 0x2, 0x2, 0x50b, 0x50c, 
       0x5, 0xc4, 0x63, 0x2, 0x50c, 0x50d, 0x7, 0x6c, 0x2, 0x2, 0x50d, 0xbf, 
       0x3, 0x2, 0x2, 0x2, 0x50e, 0x50f, 0x7, 0x43, 0x2, 0x2, 0x50f, 0x510, 
       0x5, 0xb8, 0x5d, 0x2, 0x510, 0x511, 0x7, 0x6b, 0x2, 0x2, 0x511, 0x512, 
       0x5, 0xc4, 0x63, 0x2, 0x512, 0x513, 0x7, 0x6c, 0x2, 0x2, 0x513, 0xc1, 
       0x3, 0x2, 0x2, 0x2, 0x514, 0x515, 0x7, 0x43, 0x2, 0x2, 0x515, 0x516, 
       0x7, 0x6b, 0x2, 0x2, 0x516, 0x517, 0x5, 0xc4, 0x63, 0x2, 0x517, 0x518, 
       0x7, 0x6c, 0x2, 0x2, 0x518, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x519, 0x51b, 
       0x5, 0x76, 0x3c, 0x2, 0x51a, 0x519, 0x3, 0x2, 0x2, 0x2, 0x51a, 0x51b, 
       0x3, 0x2, 0x2, 0x2, 0x51b, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x51c, 0x51d, 
       0x7, 0x97, 0x2, 0x2, 0x51d, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x51e, 0x51f, 
       0x7, 0x34, 0x2, 0x2, 0x51f, 0x520, 0x7, 0xa0, 0x2, 0x2, 0x520, 0x522, 
       0x7, 0x6b, 0x2, 0x2, 0x521, 0x523, 0x5, 0x76, 0x3c, 0x2, 0x522, 0x521, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x523, 0x3, 0x2, 0x2, 0x2, 0x523, 0x524, 
       0x3, 0x2, 0x2, 0x2, 0x524, 0x52e, 0x7, 0x6c, 0x2, 0x2, 0x525, 0x526, 
       0x7, 0x34, 0x2, 0x2, 0x526, 0x527, 0x7, 0xa0, 0x2, 0x2, 0x527, 0x52e, 
       0x5, 0x78, 0x3d, 0x2, 0x528, 0x529, 0x7, 0x34, 0x2, 0x2, 0x529, 0x52a, 
       0x5, 0x92, 0x4a, 0x2, 0x52a, 0x52b, 0x7, 0xa0, 0x2, 0x2, 0x52b, 0x52c, 
       0x5, 0x78, 0x3d, 0x2, 0x52c, 0x52e, 0x3, 0x2, 0x2, 0x2, 0x52d, 0x51e, 
       0x3, 0x2, 0x2, 0x2, 0x52d, 0x525, 0x3, 0x2, 0x2, 0x2, 0x52d, 0x528, 
       0x3, 0x2, 0x2, 0x2, 0x52e, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x52f, 0x531, 
       0x8, 0x66, 0x1, 0x2, 0x530, 0x532, 0x5, 0xcc, 0x67, 0x2, 0x531, 0x530, 
       0x3, 0x2, 0x2, 0x2, 0x531, 0x532, 0x3, 0x2, 0x2, 0x2, 0x532, 0x537, 
       0x3, 0x2, 0x2, 0x2, 0x533, 0x534, 0xc, 0x3, 0x2, 0x2, 0x534, 0x536, 
       0x5, 0xcc, 0x67, 0x2, 0x535, 0x533, 0x3, 0x2, 0x2, 0x2, 0x536, 0x539, 
       0x3, 0x2, 0x2, 0x2, 0x537, 0x535, 0x3, 0x2, 0x2, 0x2, 0x537, 0x538, 
       0x3, 0x2, 0x2, 0x2, 0x538, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x539, 0x537, 
       0x3, 0x2, 0x2, 0x2, 0x53a, 0x53b, 0x7, 0x67, 0x2, 0x2, 0x53b, 0x53c, 
       0x5, 0xca, 0x66, 0x2, 0x53c, 0x53d, 0x7, 0x68, 0x2, 0x2, 0x53d, 0x547, 
       0x3, 0x2, 0x2, 0x2, 0x53e, 0x53f, 0x7, 0x69, 0x2, 0x2, 0x53f, 0x540, 
       0x5, 0xca, 0x66, 0x2, 0x540, 0x541, 0x7, 0x6a, 0x2, 0x2, 0x541, 0x547, 
       0x3, 0x2, 0x2, 0x2, 0x542, 0x543, 0x7, 0x6b, 0x2, 0x2, 0x543, 0x544, 
       0x5, 0xca, 0x66, 0x2, 0x544, 0x545, 0x7, 0x6c, 0x2, 0x2, 0x545, 0x547, 
       0x3, 0x2, 0x2, 0x2, 0x546, 0x53a, 0x3, 0x2, 0x2, 0x2, 0x546, 0x53e, 
       0x3, 0x2, 0x2, 0x2, 0x546, 0x542, 0x3, 0x2, 0x2, 0x2, 0x547, 0xcd, 
       0x3, 0x2, 0x2, 0x2, 0x548, 0x549, 0x8, 0x68, 0x1, 0x2, 0x549, 0x54a, 
       0x5, 0xd0, 0x69, 0x2, 0x54a, 0x550, 0x3, 0x2, 0x2, 0x2, 0x54b, 0x54c, 
       0xc, 0x3, 0x2, 0x2, 0x54c, 0x54d, 0x7, 0x8d, 0x2, 0x2, 0x54d, 0x54f, 
       0x5, 0xd0, 0x69, 0x2, 0x54e, 0x54b, 0x3, 0x2, 0x2, 0x2, 0x54f, 0x552, 
       0x3, 0x2, 0x2, 0x2, 0x550, 0x54e, 0x3, 0x2, 0x2, 0x2, 0x550, 0x551, 
       0x3, 0x2, 0x2, 0x2, 0x551, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x552, 0x550, 
       0x3, 0x2, 0x2, 0x2, 0x553, 0x555, 0x5, 0xd2, 0x6a, 0x2, 0x554, 0x556, 
       0x5, 0x102, 0x82, 0x2, 0x555, 0x554, 0x3, 0x2, 0x2, 0x2, 0x555, 0x556, 
       0x3, 0x2, 0x2, 0x2, 0x556, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x557, 0x55d, 
       0x5, 0xd4, 0x6b, 0x2, 0x558, 0x559, 0x5, 0xd6, 0x6c, 0x2, 0x559, 
       0x55a, 0x5, 0xda, 0x6e, 0x2, 0x55a, 0x55b, 0x5, 0xdc, 0x6f, 0x2, 
       0x55b, 0x55d, 0x3, 0x2, 0x2, 0x2, 0x55c, 0x557, 0x3, 0x2, 0x2, 0x2, 
       0x55c, 0x558, 0x3, 0x2, 0x2, 0x2, 0x55d, 0xd3, 0x3, 0x2, 0x2, 0x2, 
       0x55e, 0x55f, 0x5, 0xd6, 0x6c, 0x2, 0x55f, 0xd5, 0x3, 0x2, 0x2, 0x2, 
       0x560, 0x561, 0x8, 0x6c, 0x1, 0x2, 0x561, 0x567, 0x5, 0xe2, 0x72, 
       0x2, 0x562, 0x563, 0x7, 0x67, 0x2, 0x2, 0x563, 0x564, 0x5, 0xd4, 
       0x6b, 0x2, 0x564, 0x565, 0x7, 0x68, 0x2, 0x2, 0x565, 0x567, 0x3, 
       0x2, 0x2, 0x2, 0x566, 0x560, 0x3, 0x2, 0x2, 0x2, 0x566, 0x562, 0x3, 
       0x2, 0x2, 0x2, 0x567, 0x572, 0x3, 0x2, 0x2, 0x2, 0x568, 0x569, 0xc, 
       0x5, 0x2, 0x2, 0x569, 0x571, 0x5, 0xda, 0x6e, 0x2, 0x56a, 0x56b, 
       0xc, 0x4, 0x2, 0x2, 0x56b, 0x56d, 0x7, 0x69, 0x2, 0x2, 0x56c, 0x56e, 
       0x5, 0x5e, 0x30, 0x2, 0x56d, 0x56c, 0x3, 0x2, 0x2, 0x2, 0x56d, 0x56e, 
       0x3, 0x2, 0x2, 0x2, 0x56e, 0x56f, 0x3, 0x2, 0x2, 0x2, 0x56f, 0x571, 
       0x7, 0x6a, 0x2, 0x2, 0x570, 0x568, 0x3, 0x2, 0x2, 0x2, 0x570, 0x56a, 
       0x3, 0x2, 0x2, 0x2, 0x571, 0x574, 0x3, 0x2, 0x2, 0x2, 0x572, 0x570, 
       0x3, 0x2, 0x2, 0x2, 0x572, 0x573, 0x3, 0x2, 0x2, 0x2, 0x573, 0xd7, 
       0x3, 0x2, 0x2, 0x2, 0x574, 0x572, 0x3, 0x2, 0x2, 0x2, 0x575, 0x576, 
       0x7, 0x67, 0x2, 0x2, 0x576, 0x577, 0x5, 0xf8, 0x7d, 0x2, 0x577, 0x579, 
       0x7, 0x68, 0x2, 0x2, 0x578, 0x57a, 0x5, 0xde, 0x70, 0x2, 0x579, 0x578, 
       0x3, 0x2, 0x2, 0x2, 0x579, 0x57a, 0x3, 0x2, 0x2, 0x2, 0x57a, 0xd9, 
       0x3, 0x2, 0x2, 0x2, 0x57b, 0x57c, 0x7, 0x67, 0x2, 0x2, 0x57c, 0x57d, 
       0x5, 0xf0, 0x79, 0x2, 0x57d, 0x57e, 0x7, 0x68, 0x2, 0x2, 0x57e, 0xdb, 
       0x3, 0x2, 0x2, 0x2, 0x57f, 0x580, 0x7, 0x8f, 0x2, 0x2, 0x580, 0x582, 
       0x5, 0x9c, 0x4f, 0x2, 0x581, 0x583, 0x5, 0xe6, 0x74, 0x2, 0x582, 
       0x581, 0x3, 0x2, 0x2, 0x2, 0x582, 0x583, 0x3, 0x2, 0x2, 0x2, 0x583, 
       0xdd, 0x3, 0x2, 0x2, 0x2, 0x584, 0x586, 0x5, 0xe0, 0x71, 0x2, 0x585, 
       0x587, 0x5, 0xde, 0x70, 0x2, 0x586, 0x585, 0x3, 0x2, 0x2, 0x2, 0x586, 
       0x587, 0x3, 0x2, 0x2, 0x2, 0x587, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x588, 
       0x589, 0x9, 0xc, 0x2, 0x2, 0x589, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x58a, 
       0x58c, 0x7, 0x96, 0x2, 0x2, 0x58b, 0x58a, 0x3, 0x2, 0x2, 0x2, 0x58b, 
       0x58c, 0x3, 0x2, 0x2, 0x2, 0x58c, 0x58d, 0x3, 0x2, 0x2, 0x2, 0x58d, 
       0x58e, 0x5, 0x8, 0x5, 0x2, 0x58e, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x58f, 
       0x591, 0x5, 0x9a, 0x4e, 0x2, 0x590, 0x592, 0x5, 0xe6, 0x74, 0x2, 
       0x591, 0x590, 0x3, 0x2, 0x2, 0x2, 0x591, 0x592, 0x3, 0x2, 0x2, 0x2, 
       0x592, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x593, 0x59c, 0x5, 0xe8, 0x75, 0x2, 
       0x594, 0x596, 0x5, 0xea, 0x76, 0x2, 0x595, 0x594, 0x3, 0x2, 0x2, 
       0x2, 0x595, 0x596, 0x3, 0x2, 0x2, 0x2, 0x596, 0x597, 0x3, 0x2, 0x2, 
       0x2, 0x597, 0x598, 0x5, 0xd8, 0x6d, 0x2, 0x598, 0x599, 0x5, 0xdc, 
       0x6f, 0x2, 0x599, 0x59c, 0x3, 0x2, 0x2, 0x2, 0x59a, 0x59c, 0x5, 0xec, 
       0x77, 0x2, 0x59b, 0x593, 0x3, 0x2, 0x2, 0x2, 0x59b, 0x595, 0x3, 0x2, 
       0x2, 0x2, 0x59b, 0x59a, 0x3, 0x2, 0x2, 0x2, 0x59c, 0xe7, 0x3, 0x2, 
       0x2, 0x2, 0x59d, 0x59e, 0x5, 0xea, 0x76, 0x2, 0x59e, 0xe9, 0x3, 0x2, 
       0x2, 0x2, 0x59f, 0x5a0, 0x8, 0x76, 0x1, 0x2, 0x5a0, 0x5ab, 0x5, 0xd8, 
       0x6d, 0x2, 0x5a1, 0x5a3, 0x7, 0x69, 0x2, 0x2, 0x5a2, 0x5a4, 0x5, 
       0x5e, 0x30, 0x2, 0x5a3, 0x5a2, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x5a4, 
       0x3, 0x2, 0x2, 0x2, 0x5a4, 0x5a5, 0x3, 0x2, 0x2, 0x2, 0x5a5, 0x5ab, 
       0x7, 0x6a, 0x2, 0x2, 0x5a6, 0x5a7, 0x7, 0x67, 0x2, 0x2, 0x5a7, 0x5a8, 
       0x5, 0xe8, 0x75, 0x2, 0x5a8, 0x5a9, 0x7, 0x68, 0x2, 0x2, 0x5a9, 0x5ab, 
       0x3, 0x2, 0x2, 0x2, 0x5aa, 0x59f, 0x3, 0x2, 0x2, 0x2, 0x5aa, 0x5a1, 
       0x3, 0x2, 0x2, 0x2, 0x5aa, 0x5a6, 0x3, 0x2, 0x2, 0x2, 0x5ab, 0x5b6, 
       0x3, 0x2, 0x2, 0x2, 0x5ac, 0x5ad, 0xc, 0x7, 0x2, 0x2, 0x5ad, 0x5b5, 
       0x5, 0xd8, 0x6d, 0x2, 0x5ae, 0x5af, 0xc, 0x5, 0x2, 0x2, 0x5af, 0x5b1, 
       0x7, 0x69, 0x2, 0x2, 0x5b0, 0x5b2, 0x5, 0x5e, 0x30, 0x2, 0x5b1, 0x5b0, 
       0x3, 0x2, 0x2, 0x2, 0x5b1, 0x5b2, 0x3, 0x2, 0x2, 0x2, 0x5b2, 0x5b3, 
       0x3, 0x2, 0x2, 0x2, 0x5b3, 0x5b5, 0x7, 0x6a, 0x2, 0x2, 0x5b4, 0x5ac, 
       0x3, 0x2, 0x2, 0x2, 0x5b4, 0x5ae, 0x3, 0x2, 0x2, 0x2, 0x5b5, 0x5b8, 
       0x3, 0x2, 0x2, 0x2, 0x5b6, 0x5b4, 0x3, 0x2, 0x2, 0x2, 0x5b6, 0x5b7, 
       0x3, 0x2, 0x2, 0x2, 0x5b7, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x5b8, 0x5b6, 
       0x3, 0x2, 0x2, 0x2, 0x5b9, 0x5ba, 0x5, 0xee, 0x78, 0x2, 0x5ba, 0xed, 
       0x3, 0x2, 0x2, 0x2, 0x5bb, 0x5bc, 0x8, 0x78, 0x1, 0x2, 0x5bc, 0x5bd, 
       0x7, 0x96, 0x2, 0x2, 0x5bd, 0x5c8, 0x3, 0x2, 0x2, 0x2, 0x5be, 0x5bf, 
       0xc, 0x5, 0x2, 0x2, 0x5bf, 0x5c7, 0x5, 0xd8, 0x6d, 0x2, 0x5c0, 0x5c1, 
       0xc, 0x4, 0x2, 0x2, 0x5c1, 0x5c3, 0x7, 0x69, 0x2, 0x2, 0x5c2, 0x5c4, 
       0x5, 0x5e, 0x30, 0x2, 0x5c3, 0x5c2, 0x3, 0x2, 0x2, 0x2, 0x5c3, 0x5c4, 
       0x3, 0x2, 0x2, 0x2, 0x5c4, 0x5c5, 0x3, 0x2, 0x2, 0x2, 0x5c5, 0x5c7, 
       0x7, 0x6a, 0x2, 0x2, 0x5c6, 0x5be, 0x3, 0x2, 0x2, 0x2, 0x5c6, 0x5c0, 
       0x3, 0x2, 0x2, 0x2, 0x5c7, 0x5ca, 0x3, 0x2, 0x2, 0x2, 0x5c8, 0x5c6, 
       0x3, 0x2, 0x2, 0x2, 0x5c8, 0x5c9, 0x3, 0x2, 0x2, 0x2, 0x5c9, 0xef, 
       0x3, 0x2, 0x2, 0x2, 0x5ca, 0x5c8, 0x3, 0x2, 0x2, 0x2, 0x5cb, 0x5cd, 
       0x5, 0xf2, 0x7a, 0x2, 0x5cc, 0x5ce, 0x7, 0x96, 0x2, 0x2, 0x5cd, 0x5cc, 
       0x3, 0x2, 0x2, 0x2, 0x5cd, 0x5ce, 0x3, 0x2, 0x2, 0x2, 0x5ce, 0x5d4, 
       0x3, 0x2, 0x2, 0x2, 0x5cf, 0x5d0, 0x5, 0xf2, 0x7a, 0x2, 0x5d0, 0x5d1, 
       0x7, 0x8d, 0x2, 0x2, 0x5d1, 0x5d2, 0x7, 0x96, 0x2, 0x2, 0x5d2, 0x5d4, 
       0x3, 0x2, 0x2, 0x2, 0x5d3, 0x5cb, 0x3, 0x2, 0x2, 0x2, 0x5d3, 0x5cf, 
       0x3, 0x2, 0x2, 0x2, 0x5d4, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x5d5, 0x5d6, 
       0x8, 0x7a, 0x1, 0x2, 0x5d6, 0x5d7, 0x5, 0xf4, 0x7b, 0x2, 0x5d7, 0x5dd, 
       0x3, 0x2, 0x2, 0x2, 0x5d8, 0x5d9, 0xc, 0x3, 0x2, 0x2, 0x5d9, 0x5da, 
       0x7, 0x8d, 0x2, 0x2, 0x5da, 0x5dc, 0x5, 0xf4, 0x7b, 0x2, 0x5db, 0x5d8, 
       0x3, 0x2, 0x2, 0x2, 0x5dc, 0x5df, 0x3, 0x2, 0x2, 0x2, 0x5dd, 0x5db, 
       0x3, 0x2, 0x2, 0x2, 0x5dd, 0x5de, 0x3, 0x2, 0x2, 0x2, 0x5de, 0xf3, 
       0x3, 0x2, 0x2, 0x2, 0x5df, 0x5dd, 0x3, 0x2, 0x2, 0x2, 0x5e0, 0x5e7, 
       0x7, 0x97, 0x2, 0x2, 0x5e1, 0x5e2, 0x7, 0x97, 0x2, 0x2, 0x5e2, 0x5e3, 
       0x7, 0x77, 0x2, 0x2, 0x5e3, 0x5e4, 0x5, 0x106, 0x84, 0x2, 0x5e4, 
       0x5e5, 0x5, 0x106, 0x84, 0x2, 0x5e5, 0x5e7, 0x3, 0x2, 0x2, 0x2, 0x5e6, 
       0x5e0, 0x3, 0x2, 0x2, 0x2, 0x5e6, 0x5e1, 0x3, 0x2, 0x2, 0x2, 0x5e7, 
       0xf5, 0x3, 0x2, 0x2, 0x2, 0x5e8, 0x5e9, 0x7, 0x96, 0x2, 0x2, 0x5e9, 
       0xf7, 0x3, 0x2, 0x2, 0x2, 0x5ea, 0x5ec, 0x8, 0x7d, 0x1, 0x2, 0x5eb, 
       0x5ed, 0x5, 0xfa, 0x7e, 0x2, 0x5ec, 0x5eb, 0x3, 0x2, 0x2, 0x2, 0x5ec, 
       0x5ed, 0x3, 0x2, 0x2, 0x2, 0x5ed, 0x5f3, 0x3, 0x2, 0x2, 0x2, 0x5ee, 
       0x5ef, 0xc, 0x3, 0x2, 0x2, 0x5ef, 0x5f0, 0x7, 0x8d, 0x2, 0x2, 0x5f0, 
       0x5f2, 0x5, 0xfa, 0x7e, 0x2, 0x5f1, 0x5ee, 0x3, 0x2, 0x2, 0x2, 0x5f2, 
       0x5f5, 0x3, 0x2, 0x2, 0x2, 0x5f3, 0x5f1, 0x3, 0x2, 0x2, 0x2, 0x5f3, 
       0x5f4, 0x3, 0x2, 0x2, 0x2, 0x5f4, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x5f5, 
       0x5f3, 0x3, 0x2, 0x2, 0x2, 0x5f6, 0x5f8, 0x5, 0x90, 0x49, 0x2, 0x5f7, 
       0x5f6, 0x3, 0x2, 0x2, 0x2, 0x5f7, 0x5f8, 0x3, 0x2, 0x2, 0x2, 0x5f8, 
       0x5f9, 0x3, 0x2, 0x2, 0x2, 0x5f9, 0x603, 0x5, 0xd2, 0x6a, 0x2, 0x5fa, 
       0x5fc, 0x5, 0x90, 0x49, 0x2, 0x5fb, 0x5fa, 0x3, 0x2, 0x2, 0x2, 0x5fb, 
       0x5fc, 0x3, 0x2, 0x2, 0x2, 0x5fc, 0x5fd, 0x3, 0x2, 0x2, 0x2, 0x5fd, 
       0x5fe, 0x5, 0xd2, 0x6a, 0x2, 0x5fe, 0x5ff, 0x7, 0x77, 0x2, 0x2, 0x5ff, 
       0x600, 0x5, 0x106, 0x84, 0x2, 0x600, 0x603, 0x3, 0x2, 0x2, 0x2, 0x601, 
       0x603, 0x5, 0xf6, 0x7c, 0x2, 0x602, 0x5f7, 0x3, 0x2, 0x2, 0x2, 0x602, 
       0x5fb, 0x3, 0x2, 0x2, 0x2, 0x602, 0x601, 0x3, 0x2, 0x2, 0x2, 0x603, 
       0xfb, 0x3, 0x2, 0x2, 0x2, 0x604, 0x606, 0x5, 0x90, 0x49, 0x2, 0x605, 
       0x604, 0x3, 0x2, 0x2, 0x2, 0x605, 0x606, 0x3, 0x2, 0x2, 0x2, 0x606, 
       0x607, 0x3, 0x2, 0x2, 0x2, 0x607, 0x618, 0x5, 0xd2, 0x6a, 0x2, 0x608, 
       0x60a, 0x5, 0x90, 0x49, 0x2, 0x609, 0x608, 0x3, 0x2, 0x2, 0x2, 0x609, 
       0x60a, 0x3, 0x2, 0x2, 0x2, 0x60a, 0x60b, 0x3, 0x2, 0x2, 0x2, 0x60b, 
       0x60c, 0x5, 0xd2, 0x6a, 0x2, 0x60c, 0x60d, 0x7, 0x77, 0x2, 0x2, 0x60d, 
       0x60e, 0x5, 0x106, 0x84, 0x2, 0x60e, 0x618, 0x3, 0x2, 0x2, 0x2, 0x60f, 
       0x611, 0x5, 0x90, 0x49, 0x2, 0x610, 0x60f, 0x3, 0x2, 0x2, 0x2, 0x610, 
       0x611, 0x3, 0x2, 0x2, 0x2, 0x611, 0x613, 0x3, 0x2, 0x2, 0x2, 0x612, 
       0x614, 0x5, 0xe6, 0x74, 0x2, 0x613, 0x612, 0x3, 0x2, 0x2, 0x2, 0x613, 
       0x614, 0x3, 0x2, 0x2, 0x2, 0x614, 0x615, 0x3, 0x2, 0x2, 0x2, 0x615, 
       0x616, 0x7, 0x77, 0x2, 0x2, 0x616, 0x618, 0x5, 0x106, 0x84, 0x2, 
       0x617, 0x605, 0x3, 0x2, 0x2, 0x2, 0x617, 0x609, 0x3, 0x2, 0x2, 0x2, 
       0x617, 0x610, 0x3, 0x2, 0x2, 0x2, 0x618, 0xfd, 0x3, 0x2, 0x2, 0x2, 
       0x619, 0x61b, 0x5, 0x90, 0x49, 0x2, 0x61a, 0x619, 0x3, 0x2, 0x2, 
       0x2, 0x61a, 0x61b, 0x3, 0x2, 0x2, 0x2, 0x61b, 0x61c, 0x3, 0x2, 0x2, 
       0x2, 0x61c, 0x61e, 0x5, 0xd2, 0x6a, 0x2, 0x61d, 0x61f, 0x5, 0x126, 
       0x94, 0x2, 0x61e, 0x61d, 0x3, 0x2, 0x2, 0x2, 0x61e, 0x61f, 0x3, 0x2, 
       0x2, 0x2, 0x61f, 0x620, 0x3, 0x2, 0x2, 0x2, 0x620, 0x621, 0x5, 0x100, 
       0x81, 0x2, 0x621, 0xff, 0x3, 0x2, 0x2, 0x2, 0x622, 0x624, 0x5, 0x13c, 
       0x9f, 0x2, 0x623, 0x622, 0x3, 0x2, 0x2, 0x2, 0x623, 0x624, 0x3, 0x2, 
       0x2, 0x2, 0x624, 0x625, 0x3, 0x2, 0x2, 0x2, 0x625, 0x62d, 0x5, 0x66, 
       0x34, 0x2, 0x626, 0x627, 0x7, 0x77, 0x2, 0x2, 0x627, 0x628, 0x7, 
       0x2c, 0x2, 0x2, 0x628, 0x62d, 0x7, 0x93, 0x2, 0x2, 0x629, 0x62a, 
       0x7, 0x77, 0x2, 0x2, 0x62a, 0x62b, 0x7, 0x2d, 0x2, 0x2, 0x62b, 0x62d, 
       0x7, 0x93, 0x2, 0x2, 0x62c, 0x623, 0x3, 0x2, 0x2, 0x2, 0x62c, 0x626, 
       0x3, 0x2, 0x2, 0x2, 0x62c, 0x629, 0x3, 0x2, 0x2, 0x2, 0x62d, 0x101, 
       0x3, 0x2, 0x2, 0x2, 0x62e, 0x634, 0x5, 0x104, 0x83, 0x2, 0x62f, 0x630, 
       0x7, 0x67, 0x2, 0x2, 0x630, 0x631, 0x5, 0x2a, 0x16, 0x2, 0x631, 0x632, 
       0x7, 0x68, 0x2, 0x2, 0x632, 0x634, 0x3, 0x2, 0x2, 0x2, 0x633, 0x62e, 
       0x3, 0x2, 0x2, 0x2, 0x633, 0x62f, 0x3, 0x2, 0x2, 0x2, 0x634, 0x103, 
       0x3, 0x2, 0x2, 0x2, 0x635, 0x636, 0x7, 0x77, 0x2, 0x2, 0x636, 0x63a, 
       0x5, 0x106, 0x84, 0x2, 0x637, 0x63a, 0x5, 0x10e, 0x88, 0x2, 0x638, 
       0x63a, 0x5, 0x10c, 0x87, 0x2, 0x639, 0x635, 0x3, 0x2, 0x2, 0x2, 0x639, 
       0x637, 0x3, 0x2, 0x2, 0x2, 0x639, 0x638, 0x3, 0x2, 0x2, 0x2, 0x63a, 
       0x105, 0x3, 0x2, 0x2, 0x2, 0x63b, 0x63e, 0x5, 0x56, 0x2c, 0x2, 0x63c, 
       0x63e, 0x7, 0x94, 0x2, 0x2, 0x63d, 0x63b, 0x3, 0x2, 0x2, 0x2, 0x63d, 
       0x63c, 0x3, 0x2, 0x2, 0x2, 0x63e, 0x107, 0x3, 0x2, 0x2, 0x2, 0x63f, 
       0x640, 0x8, 0x85, 0x1, 0x2, 0x640, 0x642, 0x5, 0x106, 0x84, 0x2, 
       0x641, 0x643, 0x7, 0x96, 0x2, 0x2, 0x642, 0x641, 0x3, 0x2, 0x2, 0x2, 
       0x642, 0x643, 0x3, 0x2, 0x2, 0x2, 0x643, 0x64c, 0x3, 0x2, 0x2, 0x2, 
       0x644, 0x645, 0xc, 0x3, 0x2, 0x2, 0x645, 0x646, 0x7, 0x8d, 0x2, 0x2, 
       0x646, 0x648, 0x5, 0x106, 0x84, 0x2, 0x647, 0x649, 0x7, 0x96, 0x2, 
       0x2, 0x648, 0x647, 0x3, 0x2, 0x2, 0x2, 0x648, 0x649, 0x3, 0x2, 0x2, 
       0x2, 0x649, 0x64b, 0x3, 0x2, 0x2, 0x2, 0x64a, 0x644, 0x3, 0x2, 0x2, 
       0x2, 0x64b, 0x64e, 0x3, 0x2, 0x2, 0x2, 0x64c, 0x64a, 0x3, 0x2, 0x2, 
       0x2, 0x64c, 0x64d, 0x3, 0x2, 0x2, 0x2, 0x64d, 0x109, 0x3, 0x2, 0x2, 
       0x2, 0x64e, 0x64c, 0x3, 0x2, 0x2, 0x2, 0x64f, 0x650, 0x8, 0x86, 0x1, 
       0x2, 0x650, 0x651, 0x5, 0x106, 0x84, 0x2, 0x651, 0x65a, 0x3, 0x2, 
       0x2, 0x2, 0x652, 0x653, 0xc, 0x4, 0x2, 0x2, 0x653, 0x654, 0x7, 0x8d, 
       0x2, 0x2, 0x654, 0x659, 0x5, 0x106, 0x84, 0x2, 0x655, 0x656, 0xc, 
       0x3, 0x2, 0x2, 0x656, 0x657, 0x7, 0x93, 0x2, 0x2, 0x657, 0x659, 0x5, 
       0x106, 0x84, 0x2, 0x658, 0x652, 0x3, 0x2, 0x2, 0x2, 0x658, 0x655, 
       0x3, 0x2, 0x2, 0x2, 0x659, 0x65c, 0x3, 0x2, 0x2, 0x2, 0x65a, 0x658, 
       0x3, 0x2, 0x2, 0x2, 0x65a, 0x65b, 0x3, 0x2, 0x2, 0x2, 0x65b, 0x10b, 
       0x3, 0x2, 0x2, 0x2, 0x65c, 0x65a, 0x3, 0x2, 0x2, 0x2, 0x65d, 0x65e, 
       0x7, 0x78, 0x2, 0x2, 0x65e, 0x660, 0x5, 0x10a, 0x86, 0x2, 0x65f, 
       0x661, 0x9, 0xd, 0x2, 0x2, 0x660, 0x65f, 0x3, 0x2, 0x2, 0x2, 0x660, 
       0x661, 0x3, 0x2, 0x2, 0x2, 0x661, 0x662, 0x3, 0x2, 0x2, 0x2, 0x662, 
       0x664, 0x7, 0x79, 0x2, 0x2, 0x663, 0x665, 0x5, 0x26, 0x14, 0x2, 0x664, 
       0x663, 0x3, 0x2, 0x2, 0x2, 0x664, 0x665, 0x3, 0x2, 0x2, 0x2, 0x665, 
       0x10d, 0x3, 0x2, 0x2, 0x2, 0x666, 0x667, 0x7, 0x6b, 0x2, 0x2, 0x667, 
       0x669, 0x5, 0x108, 0x85, 0x2, 0x668, 0x66a, 0x7, 0x8d, 0x2, 0x2, 
       0x669, 0x668, 0x3, 0x2, 0x2, 0x2, 0x669, 0x66a, 0x3, 0x2, 0x2, 0x2, 
       0x66a, 0x66b, 0x3, 0x2, 0x2, 0x2, 0x66b, 0x66c, 0x7, 0x6c, 0x2, 0x2, 
       0x66c, 0x670, 0x3, 0x2, 0x2, 0x2, 0x66d, 0x66e, 0x7, 0x6b, 0x2, 0x2, 
       0x66e, 0x670, 0x7, 0x6c, 0x2, 0x2, 0x66f, 0x666, 0x3, 0x2, 0x2, 0x2, 
       0x66f, 0x66d, 0x3, 0x2, 0x2, 0x2, 0x670, 0x10f, 0x3, 0x2, 0x2, 0x2, 
       0x671, 0x672, 0x7, 0x97, 0x2, 0x2, 0x672, 0x111, 0x3, 0x2, 0x2, 0x2, 
       0x673, 0x674, 0x5, 0x114, 0x8b, 0x2, 0x674, 0x676, 0x7, 0x6b, 0x2, 
       0x2, 0x675, 0x677, 0x5, 0x11c, 0x8f, 0x2, 0x676, 0x675, 0x3, 0x2, 
       0x2, 0x2, 0x676, 0x677, 0x3, 0x2, 0x2, 0x2, 0x677, 0x678, 0x3, 0x2, 
       0x2, 0x2, 0x678, 0x679, 0x7, 0x6c, 0x2, 0x2, 0x679, 0x113, 0x3, 0x2, 
       0x2, 0x2, 0x67a, 0x67b, 0x5, 0x11a, 0x8e, 0x2, 0x67b, 0x67d, 0x5, 
       0x116, 0x8c, 0x2, 0x67c, 0x67e, 0x5, 0x118, 0x8d, 0x2, 0x67d, 0x67c, 
       0x3, 0x2, 0x2, 0x2, 0x67d, 0x67e, 0x3, 0x2, 0x2, 0x2, 0x67e, 0x680, 
       0x3, 0x2, 0x2, 0x2, 0x67f, 0x681, 0x5, 0x12c, 0x97, 0x2, 0x680, 0x67f, 
       0x3, 0x2, 0x2, 0x2, 0x680, 0x681, 0x3, 0x2, 0x2, 0x2, 0x681, 0x687, 
       0x3, 0x2, 0x2, 0x2, 0x682, 0x684, 0x5, 0x11a, 0x8e, 0x2, 0x683, 0x685, 
       0x5, 0x12c, 0x97, 0x2, 0x684, 0x683, 0x3, 0x2, 0x2, 0x2, 0x684, 0x685, 
       0x3, 0x2, 0x2, 0x2, 0x685, 0x687, 0x3, 0x2, 0x2, 0x2, 0x686, 0x67a, 
       0x3, 0x2, 0x2, 0x2, 0x686, 0x682, 0x3, 0x2, 0x2, 0x2, 0x687, 0x115, 
       0x3, 0x2, 0x2, 0x2, 0x688, 0x68a, 0x5, 0xe, 0x8, 0x2, 0x689, 0x688, 
       0x3, 0x2, 0x2, 0x2, 0x689, 0x68a, 0x3, 0x2, 0x2, 0x2, 0x68a, 0x68b, 
       0x3, 0x2, 0x2, 0x2, 0x68b, 0x68c, 0x5, 0x110, 0x89, 0x2, 0x68c, 0x117, 
       0x3, 0x2, 0x2, 0x2, 0x68d, 0x68e, 0x7, 0x36, 0x2, 0x2, 0x68e, 0x119, 
       0x3, 0x2, 0x2, 0x2, 0x68f, 0x690, 0x9, 0xe, 0x2, 0x2, 0x690, 0x11b, 
       0x3, 0x2, 0x2, 0x2, 0x691, 0x693, 0x5, 0x120, 0x91, 0x2, 0x692, 0x694, 
       0x5, 0x11c, 0x8f, 0x2, 0x693, 0x692, 0x3, 0x2, 0x2, 0x2, 0x693, 0x694, 
       0x3, 0x2, 0x2, 0x2, 0x694, 0x697, 0x3, 0x2, 0x2, 0x2, 0x695, 0x697, 
       0x5, 0x11e, 0x90, 0x2, 0x696, 0x691, 0x3, 0x2, 0x2, 0x2, 0x696, 0x695, 
       0x3, 0x2, 0x2, 0x2, 0x697, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x698, 0x699, 
       0x5, 0x136, 0x9c, 0x2, 0x699, 0x69b, 0x7, 0x91, 0x2, 0x2, 0x69a, 
       0x69c, 0x5, 0x11c, 0x8f, 0x2, 0x69b, 0x69a, 0x3, 0x2, 0x2, 0x2, 0x69b, 
       0x69c, 0x3, 0x2, 0x2, 0x2, 0x69c, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x69d, 
       0x69f, 0x5, 0x122, 0x92, 0x2, 0x69e, 0x69d, 0x3, 0x2, 0x2, 0x2, 0x69e, 
       0x69f, 0x3, 0x2, 0x2, 0x2, 0x69f, 0x6a0, 0x3, 0x2, 0x2, 0x2, 0x6a0, 
       0x6b1, 0x7, 0x93, 0x2, 0x2, 0x6a1, 0x6a2, 0x5, 0xfe, 0x80, 0x2, 0x6a2, 
       0x6a3, 0x7, 0x93, 0x2, 0x2, 0x6a3, 0x6b1, 0x3, 0x2, 0x2, 0x2, 0x6a4, 
       0x6b1, 0x5, 0x8a, 0x46, 0x2, 0x6a5, 0x6a7, 0x7, 0x75, 0x2, 0x2, 0x6a6, 
       0x6a5, 0x3, 0x2, 0x2, 0x2, 0x6a6, 0x6a7, 0x3, 0x2, 0x2, 0x2, 0x6a7, 
       0x6a8, 0x3, 0x2, 0x2, 0x2, 0x6a8, 0x6a9, 0x5, 0x80, 0x41, 0x2, 0x6a9, 
       0x6aa, 0x7, 0x93, 0x2, 0x2, 0x6aa, 0x6b1, 0x3, 0x2, 0x2, 0x2, 0x6ab, 
       0x6ad, 0x5, 0xa6, 0x54, 0x2, 0x6ac, 0x6ae, 0x7, 0x93, 0x2, 0x2, 0x6ad, 
       0x6ac, 0x3, 0x2, 0x2, 0x2, 0x6ad, 0x6ae, 0x3, 0x2, 0x2, 0x2, 0x6ae, 
       0x6b1, 0x3, 0x2, 0x2, 0x2, 0x6af, 0x6b1, 0x5, 0x8c, 0x47, 0x2, 0x6b0, 
       0x69e, 0x3, 0x2, 0x2, 0x2, 0x6b0, 0x6a1, 0x3, 0x2, 0x2, 0x2, 0x6b0, 
       0x6a4, 0x3, 0x2, 0x2, 0x2, 0x6b0, 0x6a6, 0x3, 0x2, 0x2, 0x2, 0x6b0, 
       0x6ab, 0x3, 0x2, 0x2, 0x2, 0x6b0, 0x6af, 0x3, 0x2, 0x2, 0x2, 0x6b1, 
       0x121, 0x3, 0x2, 0x2, 0x2, 0x6b2, 0x6b3, 0x8, 0x92, 0x1, 0x2, 0x6b3, 
       0x6b4, 0x5, 0x124, 0x93, 0x2, 0x6b4, 0x6ba, 0x3, 0x2, 0x2, 0x2, 0x6b5, 
       0x6b6, 0xc, 0x3, 0x2, 0x2, 0x6b6, 0x6b7, 0x7, 0x8d, 0x2, 0x2, 0x6b7, 
       0x6b9, 0x5, 0x124, 0x93, 0x2, 0x6b8, 0x6b5, 0x3, 0x2, 0x2, 0x2, 0x6b9, 
       0x6bc, 0x3, 0x2, 0x2, 0x2, 0x6ba, 0x6b8, 0x3, 0x2, 0x2, 0x2, 0x6ba, 
       0x6bb, 0x3, 0x2, 0x2, 0x2, 0x6bb, 0x123, 0x3, 0x2, 0x2, 0x2, 0x6bc, 
       0x6ba, 0x3, 0x2, 0x2, 0x2, 0x6bd, 0x6bf, 0x5, 0x92, 0x4a, 0x2, 0x6be, 
       0x6bd, 0x3, 0x2, 0x2, 0x2, 0x6be, 0x6bf, 0x3, 0x2, 0x2, 0x2, 0x6bf, 
       0x6c1, 0x3, 0x2, 0x2, 0x2, 0x6c0, 0x6c2, 0x7, 0x40, 0x2, 0x2, 0x6c1, 
       0x6c0, 0x3, 0x2, 0x2, 0x2, 0x6c1, 0x6c2, 0x3, 0x2, 0x2, 0x2, 0x6c2, 
       0x6c3, 0x3, 0x2, 0x2, 0x2, 0x6c3, 0x6c6, 0x7, 0x97, 0x2, 0x2, 0x6c4, 
       0x6c5, 0x7, 0x77, 0x2, 0x2, 0x6c5, 0x6c7, 0x5, 0x5e, 0x30, 0x2, 0x6c6, 
       0x6c4, 0x3, 0x2, 0x2, 0x2, 0x6c6, 0x6c7, 0x3, 0x2, 0x2, 0x2, 0x6c7, 
       0x6ce, 0x3, 0x2, 0x2, 0x2, 0x6c8, 0x6ca, 0x7, 0x97, 0x2, 0x2, 0x6c9, 
       0x6c8, 0x3, 0x2, 0x2, 0x2, 0x6c9, 0x6ca, 0x3, 0x2, 0x2, 0x2, 0x6ca, 
       0x6cb, 0x3, 0x2, 0x2, 0x2, 0x6cb, 0x6cc, 0x7, 0x91, 0x2, 0x2, 0x6cc, 
       0x6ce, 0x5, 0x5e, 0x30, 0x2, 0x6cd, 0x6be, 0x3, 0x2, 0x2, 0x2, 0x6cd, 
       0x6c9, 0x3, 0x2, 0x2, 0x2, 0x6ce, 0x125, 0x3, 0x2, 0x2, 0x2, 0x6cf, 
       0x6d0, 0x8, 0x94, 0x1, 0x2, 0x6d0, 0x6d1, 0x5, 0x128, 0x95, 0x2, 
       0x6d1, 0x6d6, 0x3, 0x2, 0x2, 0x2, 0x6d2, 0x6d3, 0xc, 0x3, 0x2, 0x2, 
       0x6d3, 0x6d5, 0x5, 0x128, 0x95, 0x2, 0x6d4, 0x6d2, 0x3, 0x2, 0x2, 
       0x2, 0x6d5, 0x6d8, 0x3, 0x2, 0x2, 0x2, 0x6d6, 0x6d4, 0x3, 0x2, 0x2, 
       0x2, 0x6d6, 0x6d7, 0x3, 0x2, 0x2, 0x2, 0x6d7, 0x127, 0x3, 0x2, 0x2, 
       0x2, 0x6d8, 0x6d6, 0x3, 0x2, 0x2, 0x2, 0x6d9, 0x6da, 0x9, 0xf, 0x2, 
       0x2, 0x6da, 0x129, 0x3, 0x2, 0x2, 0x2, 0x6db, 0x6dc, 0x7, 0x77, 0x2, 
       0x2, 0x6dc, 0x6dd, 0x7, 0x9a, 0x2, 0x2, 0x6dd, 0x12b, 0x3, 0x2, 0x2, 
       0x2, 0x6de, 0x6df, 0x7, 0x91, 0x2, 0x2, 0x6df, 0x6e0, 0x5, 0x12e, 
       0x98, 0x2, 0x6e0, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x6e1, 0x6e2, 0x8, 0x98, 
       0x1, 0x2, 0x6e2, 0x6e4, 0x5, 0x130, 0x99, 0x2, 0x6e3, 0x6e5, 0x7, 
       0x96, 0x2, 0x2, 0x6e4, 0x6e3, 0x3, 0x2, 0x2, 0x2, 0x6e4, 0x6e5, 0x3, 
       0x2, 0x2, 0x2, 0x6e5, 0x6ee, 0x3, 0x2, 0x2, 0x2, 0x6e6, 0x6e7, 0xc, 
       0x3, 0x2, 0x2, 0x6e7, 0x6e8, 0x7, 0x8d, 0x2, 0x2, 0x6e8, 0x6ea, 0x5, 
       0x130, 0x99, 0x2, 0x6e9, 0x6eb, 0x7, 0x96, 0x2, 0x2, 0x6ea, 0x6e9, 
       0x3, 0x2, 0x2, 0x2, 0x6ea, 0x6eb, 0x3, 0x2, 0x2, 0x2, 0x6eb, 0x6ed, 
       0x3, 0x2, 0x2, 0x2, 0x6ec, 0x6e6, 0x3, 0x2, 0x2, 0x2, 0x6ed, 0x6f0, 
       0x3, 0x2, 0x2, 0x2, 0x6ee, 0x6ec, 0x3, 0x2, 0x2, 0x2, 0x6ee, 0x6ef, 
       0x3, 0x2, 0x2, 0x2, 0x6ef, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x6f0, 0x6ee, 
       0x3, 0x2, 0x2, 0x2, 0x6f1, 0x6fe, 0x5, 0x134, 0x9b, 0x2, 0x6f2, 0x6f4, 
       0x7, 0x62, 0x2, 0x2, 0x6f3, 0x6f5, 0x5, 0x136, 0x9c, 0x2, 0x6f4, 
       0x6f3, 0x3, 0x2, 0x2, 0x2, 0x6f4, 0x6f5, 0x3, 0x2, 0x2, 0x2, 0x6f5, 
       0x6f6, 0x3, 0x2, 0x2, 0x2, 0x6f6, 0x6fe, 0x5, 0x134, 0x9b, 0x2, 0x6f7, 
       0x6f9, 0x5, 0x136, 0x9c, 0x2, 0x6f8, 0x6fa, 0x7, 0x62, 0x2, 0x2, 
       0x6f9, 0x6f8, 0x3, 0x2, 0x2, 0x2, 0x6f9, 0x6fa, 0x3, 0x2, 0x2, 0x2, 
       0x6fa, 0x6fb, 0x3, 0x2, 0x2, 0x2, 0x6fb, 0x6fc, 0x5, 0x134, 0x9b, 
       0x2, 0x6fc, 0x6fe, 0x3, 0x2, 0x2, 0x2, 0x6fd, 0x6f1, 0x3, 0x2, 0x2, 
       0x2, 0x6fd, 0x6f2, 0x3, 0x2, 0x2, 0x2, 0x6fd, 0x6f7, 0x3, 0x2, 0x2, 
       0x2, 0x6fe, 0x131, 0x3, 0x2, 0x2, 0x2, 0x6ff, 0x701, 0x5, 0xe, 0x8, 
       0x2, 0x700, 0x6ff, 0x3, 0x2, 0x2, 0x2, 0x700, 0x701, 0x3, 0x2, 0x2, 
       0x2, 0x701, 0x702, 0x3, 0x2, 0x2, 0x2, 0x702, 0x705, 0x5, 0x110, 
       0x89, 0x2, 0x703, 0x705, 0x5, 0xa2, 0x52, 0x2, 0x704, 0x700, 0x3, 
       0x2, 0x2, 0x2, 0x704, 0x703, 0x3, 0x2, 0x2, 0x2, 0x705, 0x133, 0x3, 
       0x2, 0x2, 0x2, 0x706, 0x707, 0x5, 0x132, 0x9a, 0x2, 0x707, 0x135, 
       0x3, 0x2, 0x2, 0x2, 0x708, 0x709, 0x9, 0x10, 0x2, 0x2, 0x709, 0x137, 
       0x3, 0x2, 0x2, 0x2, 0x70a, 0x70b, 0x7, 0x47, 0x2, 0x2, 0x70b, 0x70c, 
       0x5, 0x13a, 0x9e, 0x2, 0x70c, 0x139, 0x3, 0x2, 0x2, 0x2, 0x70d, 0x70e, 
       0x5, 0x9a, 0x4e, 0x2, 0x70e, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x70f, 0x710, 
       0x7, 0x91, 0x2, 0x2, 0x710, 0x711, 0x5, 0x13e, 0xa0, 0x2, 0x711, 
       0x13d, 0x3, 0x2, 0x2, 0x2, 0x712, 0x714, 0x5, 0x140, 0xa1, 0x2, 0x713, 
       0x715, 0x7, 0x96, 0x2, 0x2, 0x714, 0x713, 0x3, 0x2, 0x2, 0x2, 0x714, 
       0x715, 0x3, 0x2, 0x2, 0x2, 0x715, 0x71e, 0x3, 0x2, 0x2, 0x2, 0x716, 
       0x718, 0x5, 0x140, 0xa1, 0x2, 0x717, 0x719, 0x7, 0x96, 0x2, 0x2, 
       0x718, 0x717, 0x3, 0x2, 0x2, 0x2, 0x718, 0x719, 0x3, 0x2, 0x2, 0x2, 
       0x719, 0x71a, 0x3, 0x2, 0x2, 0x2, 0x71a, 0x71b, 0x7, 0x8d, 0x2, 0x2, 
       0x71b, 0x71c, 0x5, 0x13e, 0xa0, 0x2, 0x71c, 0x71e, 0x3, 0x2, 0x2, 
       0x2, 0x71d, 0x712, 0x3, 0x2, 0x2, 0x2, 0x71d, 0x716, 0x3, 0x2, 0x2, 
       0x2, 0x71e, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x71f, 0x720, 0x5, 0x142, 
       0xa2, 0x2, 0x720, 0x722, 0x7, 0x67, 0x2, 0x2, 0x721, 0x723, 0x5, 
       0x2a, 0x16, 0x2, 0x722, 0x721, 0x3, 0x2, 0x2, 0x2, 0x722, 0x723, 
       0x3, 0x2, 0x2, 0x2, 0x723, 0x724, 0x3, 0x2, 0x2, 0x2, 0x724, 0x725, 
       0x7, 0x68, 0x2, 0x2, 0x725, 0x72a, 0x3, 0x2, 0x2, 0x2, 0x726, 0x727, 
       0x5, 0x142, 0xa2, 0x2, 0x727, 0x728, 0x5, 0x10e, 0x88, 0x2, 0x728, 
       0x72a, 0x3, 0x2, 0x2, 0x2, 0x729, 0x71f, 0x3, 0x2, 0x2, 0x2, 0x729, 
       0x726, 0x3, 0x2, 0x2, 0x2, 0x72a, 0x141, 0x3, 0x2, 0x2, 0x2, 0x72b, 
       0x72e, 0x5, 0x132, 0x9a, 0x2, 0x72c, 0x72e, 0x7, 0x97, 0x2, 0x2, 
       0x72d, 0x72b, 0x3, 0x2, 0x2, 0x2, 0x72d, 0x72c, 0x3, 0x2, 0x2, 0x2, 
       0x72e, 0x143, 0x3, 0x2, 0x2, 0x2, 0x72f, 0x730, 0x7, 0x47, 0x2, 0x2, 
       0x730, 0x731, 0x5, 0x14c, 0xa7, 0x2, 0x731, 0x145, 0x3, 0x2, 0x2, 
       0x2, 0x732, 0x733, 0x7, 0x47, 0x2, 0x2, 0x733, 0x734, 0x7, 0xa0, 
       0x2, 0x2, 0x734, 0x738, 0x7, 0x97, 0x2, 0x2, 0x735, 0x736, 0x7, 0x47, 
       0x2, 0x2, 0x736, 0x738, 0x7, 0xa3, 0x2, 0x2, 0x737, 0x732, 0x3, 0x2, 
       0x2, 0x2, 0x737, 0x735, 0x3, 0x2, 0x2, 0x2, 0x738, 0x147, 0x3, 0x2, 
       0x2, 0x2, 0x739, 0x73a, 0x7, 0x79, 0x2, 0x2, 0x73a, 0x73b, 0x7, 0x79, 
       0x2, 0x2, 0x73b, 0x149, 0x3, 0x2, 0x2, 0x2, 0x73c, 0x73d, 0x7, 0x79, 
       0x2, 0x2, 0x73d, 0x73e, 0x7, 0x79, 0x2, 0x2, 0x73e, 0x73f, 0x7, 0x77, 
       0x2, 0x2, 0x73f, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x740, 0x772, 0x7, 0x44, 
       0x2, 0x2, 0x741, 0x772, 0x7, 0x2d, 0x2, 0x2, 0x742, 0x743, 0x7, 0x44, 
       0x2, 0x2, 0x743, 0x744, 0x7, 0x69, 0x2, 0x2, 0x744, 0x772, 0x7, 0x6a, 
       0x2, 0x2, 0x745, 0x746, 0x7, 0x2d, 0x2, 0x2, 0x746, 0x747, 0x7, 0x69, 
       0x2, 0x2, 0x747, 0x772, 0x7, 0x6a, 0x2, 0x2, 0x748, 0x772, 0x7, 0x6d, 
       0x2, 0x2, 0x749, 0x772, 0x7, 0x6e, 0x2, 0x2, 0x74a, 0x772, 0x7, 0x6f, 
       0x2, 0x2, 0x74b, 0x772, 0x7, 0x70, 0x2, 0x2, 0x74c, 0x772, 0x7, 0x71, 
       0x2, 0x2, 0x74d, 0x772, 0x7, 0x72, 0x2, 0x2, 0x74e, 0x772, 0x7, 0x73, 
       0x2, 0x2, 0x74f, 0x772, 0x7, 0x74, 0x2, 0x2, 0x750, 0x772, 0x7, 0x75, 
       0x2, 0x2, 0x751, 0x772, 0x7, 0x76, 0x2, 0x2, 0x752, 0x772, 0x7, 0x77, 
       0x2, 0x2, 0x753, 0x772, 0x7, 0x78, 0x2, 0x2, 0x754, 0x772, 0x7, 0x79, 
       0x2, 0x2, 0x755, 0x772, 0x7, 0x7a, 0x2, 0x2, 0x756, 0x772, 0x7, 0x7b, 
       0x2, 0x2, 0x757, 0x772, 0x7, 0x7c, 0x2, 0x2, 0x758, 0x772, 0x7, 0x7d, 
       0x2, 0x2, 0x759, 0x772, 0x7, 0x7e, 0x2, 0x2, 0x75a, 0x772, 0x7, 0x7f, 
       0x2, 0x2, 0x75b, 0x772, 0x7, 0x80, 0x2, 0x2, 0x75c, 0x772, 0x7, 0x82, 
       0x2, 0x2, 0x75d, 0x772, 0x7, 0x83, 0x2, 0x2, 0x75e, 0x772, 0x5, 0x148, 
       0xa5, 0x2, 0x75f, 0x772, 0x5, 0x14a, 0xa6, 0x2, 0x760, 0x772, 0x7, 
       0x84, 0x2, 0x2, 0x761, 0x772, 0x7, 0x85, 0x2, 0x2, 0x762, 0x772, 
       0x7, 0x86, 0x2, 0x2, 0x763, 0x772, 0x7, 0x87, 0x2, 0x2, 0x764, 0x772, 
       0x7, 0x88, 0x2, 0x2, 0x765, 0x772, 0x7, 0x89, 0x2, 0x2, 0x766, 0x772, 
       0x7, 0x8a, 0x2, 0x2, 0x767, 0x772, 0x7, 0x8b, 0x2, 0x2, 0x768, 0x772, 
       0x7, 0x8c, 0x2, 0x2, 0x769, 0x772, 0x7, 0x8d, 0x2, 0x2, 0x76a, 0x772, 
       0x7, 0x8e, 0x2, 0x2, 0x76b, 0x772, 0x7, 0x8f, 0x2, 0x2, 0x76c, 0x76d, 
       0x7, 0x67, 0x2, 0x2, 0x76d, 0x772, 0x7, 0x68, 0x2, 0x2, 0x76e, 0x76f, 
       0x7, 0x69, 0x2, 0x2, 0x76f, 0x772, 0x7, 0x6a, 0x2, 0x2, 0x770, 0x772, 
       0x7, 0x94, 0x2, 0x2, 0x771, 0x740, 0x3, 0x2, 0x2, 0x2, 0x771, 0x741, 
       0x3, 0x2, 0x2, 0x2, 0x771, 0x742, 0x3, 0x2, 0x2, 0x2, 0x771, 0x745, 
       0x3, 0x2, 0x2, 0x2, 0x771, 0x748, 0x3, 0x2, 0x2, 0x2, 0x771, 0x749, 
       0x3, 0x2, 0x2, 0x2, 0x771, 0x74a, 0x3, 0x2, 0x2, 0x2, 0x771, 0x74b, 
       0x3, 0x2, 0x2, 0x2, 0x771, 0x74c, 0x3, 0x2, 0x2, 0x2, 0x771, 0x74d, 
       0x3, 0x2, 0x2, 0x2, 0x771, 0x74e, 0x3, 0x2, 0x2, 0x2, 0x771, 0x74f, 
       0x3, 0x2, 0x2, 0x2, 0x771, 0x750, 0x3, 0x2, 0x2, 0x2, 0x771, 0x751, 
       0x3, 0x2, 0x2, 0x2, 0x771, 0x752, 0x3, 0x2, 0x2, 0x2, 0x771, 0x753, 
       0x3, 0x2, 0x2, 0x2, 0x771, 0x754, 0x3, 0x2, 0x2, 0x2, 0x771, 0x755, 
       0x3, 0x2, 0x2, 0x2, 0x771, 0x756, 0x3, 0x2, 0x2, 0x2, 0x771, 0x757, 
       0x3, 0x2, 0x2, 0x2, 0x771, 0x758, 0x3, 0x2, 0x2, 0x2, 0x771, 0x759, 
       0x3, 0x2, 0x2, 0x2, 0x771, 0x75a, 0x3, 0x2, 0x2, 0x2, 0x771, 0x75b, 
       0x3, 0x2, 0x2, 0x2, 0x771, 0x75c, 0x3, 0x2, 0x2, 0x2, 0x771, 0x75d, 
       0x3, 0x2, 0x2, 0x2, 0x771, 0x75e, 0x3, 0x2, 0x2, 0x2, 0x771, 0x75f, 
       0x3, 0x2, 0x2, 0x2, 0x771, 0x760, 0x3, 0x2, 0x2, 0x2, 0x771, 0x761, 
       0x3, 0x2, 0x2, 0x2, 0x771, 0x762, 0x3, 0x2, 0x2, 0x2, 0x771, 0x763, 
       0x3, 0x2, 0x2, 0x2, 0x771, 0x764, 0x3, 0x2, 0x2, 0x2, 0x771, 0x765, 
       0x3, 0x2, 0x2, 0x2, 0x771, 0x766, 0x3, 0x2, 0x2, 0x2, 0x771, 0x767, 
       0x3, 0x2, 0x2, 0x2, 0x771, 0x768, 0x3, 0x2, 0x2, 0x2, 0x771, 0x769, 
       0x3, 0x2, 0x2, 0x2, 0x771, 0x76a, 0x3, 0x2, 0x2, 0x2, 0x771, 0x76b, 
       0x3, 0x2, 0x2, 0x2, 0x771, 0x76c, 0x3, 0x2, 0x2, 0x2, 0x771, 0x76e, 
       0x3, 0x2, 0x2, 0x2, 0x771, 0x770, 0x3, 0x2, 0x2, 0x2, 0x772, 0x14d, 
       0x3, 0x2, 0x2, 0x2, 0x773, 0x77b, 0x7, 0x98, 0x2, 0x2, 0x774, 0x77b, 
       0x7, 0x9e, 0x2, 0x2, 0x775, 0x77b, 0x7, 0x9f, 0x2, 0x2, 0x776, 0x77b, 
       0x7, 0xa0, 0x2, 0x2, 0x777, 0x77b, 0x5, 0x150, 0xa9, 0x2, 0x778, 
       0x77b, 0x5, 0x152, 0xaa, 0x2, 0x779, 0x77b, 0x5, 0x154, 0xab, 0x2, 
       0x77a, 0x773, 0x3, 0x2, 0x2, 0x2, 0x77a, 0x774, 0x3, 0x2, 0x2, 0x2, 
       0x77a, 0x775, 0x3, 0x2, 0x2, 0x2, 0x77a, 0x776, 0x3, 0x2, 0x2, 0x2, 
       0x77a, 0x777, 0x3, 0x2, 0x2, 0x2, 0x77a, 0x778, 0x3, 0x2, 0x2, 0x2, 
       0x77a, 0x779, 0x3, 0x2, 0x2, 0x2, 0x77b, 0x14f, 0x3, 0x2, 0x2, 0x2, 
       0x77c, 0x77d, 0x9, 0x11, 0x2, 0x2, 0x77d, 0x151, 0x3, 0x2, 0x2, 0x2, 
       0x77e, 0x77f, 0x7, 0x46, 0x2, 0x2, 0x77f, 0x153, 0x3, 0x2, 0x2, 0x2, 
       0x780, 0x781, 0x9, 0x12, 0x2, 0x2, 0x781, 0x155, 0x3, 0x2, 0x2, 0x2, 
       0xdb, 0x157, 0x15c, 0x163, 0x168, 0x170, 0x178, 0x185, 0x188, 0x18c, 
       0x191, 0x199, 0x1a0, 0x1a7, 0x1ae, 0x1b3, 0x1b9, 0x1c3, 0x1ca, 0x1d0, 
       0x1d4, 0x1d9, 0x1df, 0x1e6, 0x1ec, 0x1f8, 0x1fc, 0x201, 0x20d, 0x20f, 
       0x211, 0x217, 0x21e, 0x227, 0x22d, 0x23f, 0x244, 0x248, 0x24c, 0x24f, 
       0x253, 0x259, 0x25e, 0x266, 0x26e, 0x270, 0x278, 0x288, 0x28d, 0x291, 
       0x294, 0x299, 0x29f, 0x2a7, 0x2d2, 0x2d4, 0x2e6, 0x2e8, 0x2f5, 0x2f7, 
       0x309, 0x30b, 0x31d, 0x31f, 0x32a, 0x335, 0x340, 0x34b, 0x354, 0x361, 
       0x371, 0x37b, 0x387, 0x394, 0x397, 0x39d, 0x3a3, 0x3a6, 0x3af, 0x3b9, 
       0x3c7, 0x3d3, 0x3e7, 0x3eb, 0x3f3, 0x400, 0x404, 0x409, 0x40d, 0x415, 
       0x41b, 0x426, 0x42e, 0x436, 0x43b, 0x440, 0x445, 0x448, 0x450, 0x452, 
       0x458, 0x45e, 0x479, 0x47d, 0x485, 0x489, 0x48f, 0x495, 0x4a4, 0x4b1, 
       0x4b5, 0x4bc, 0x4c6, 0x4ca, 0x4cd, 0x4d3, 0x4d5, 0x4da, 0x4e3, 0x4f0, 
       0x4f8, 0x4fe, 0x504, 0x51a, 0x522, 0x52d, 0x531, 0x537, 0x546, 0x550, 
       0x555, 0x55c, 0x566, 0x56d, 0x570, 0x572, 0x579, 0x582, 0x586, 0x58b, 
       0x591, 0x595, 0x59b, 0x5a3, 0x5aa, 0x5b1, 0x5b4, 0x5b6, 0x5c3, 0x5c6, 
       0x5c8, 0x5cd, 0x5d3, 0x5dd, 0x5e6, 0x5ec, 0x5f3, 0x5f7, 0x5fb, 0x602, 
       0x605, 0x609, 0x610, 0x613, 0x617, 0x61a, 0x61e, 0x623, 0x62c, 0x633, 
       0x639, 0x63d, 0x642, 0x648, 0x64c, 0x658, 0x65a, 0x660, 0x664, 0x669, 
       0x66f, 0x676, 0x67d, 0x680, 0x684, 0x686, 0x689, 0x693, 0x696, 0x69b, 
       0x69e, 0x6a6, 0x6ad, 0x6b0, 0x6ba, 0x6be, 0x6c1, 0x6c6, 0x6c9, 0x6cd, 
       0x6d6, 0x6e4, 0x6ea, 0x6ee, 0x6f4, 0x6f9, 0x6fd, 0x700, 0x704, 0x714, 
       0x718, 0x71d, 0x722, 0x729, 0x72d, 0x737, 0x771, 0x77a, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

oxadvancedParser::Initializer oxadvancedParser::_init;
