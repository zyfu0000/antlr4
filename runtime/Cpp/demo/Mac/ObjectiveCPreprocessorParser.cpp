
// Generated from ObjectiveCPreprocessorParser.g4 by ANTLR 4.8


#include "ObjectiveCPreprocessorParserListener.h"
#include "ObjectiveCPreprocessorParserVisitor.h"

#include "ObjectiveCPreprocessorParser.h"


using namespace antlrcpp;
using namespace antlrcpptest;
using namespace antlr4;

ObjectiveCPreprocessorParser::ObjectiveCPreprocessorParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ObjectiveCPreprocessorParser::~ObjectiveCPreprocessorParser() {
  delete _interpreter;
}

std::string ObjectiveCPreprocessorParser::getGrammarFileName() const {
  return "ObjectiveCPreprocessorParser.g4";
}

const std::vector<std::string>& ObjectiveCPreprocessorParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ObjectiveCPreprocessorParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- DirectiveContext ------------------------------------------------------------------

ObjectiveCPreprocessorParser::DirectiveContext::DirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ObjectiveCPreprocessorParser::DirectiveContext::getRuleIndex() const {
  return ObjectiveCPreprocessorParser::RuleDirective;
}

void ObjectiveCPreprocessorParser::DirectiveContext::copyFrom(DirectiveContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PreprocessorDefContext ------------------------------------------------------------------

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorDefContext::SHARP() {
  return getToken(ObjectiveCPreprocessorParser::SHARP, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorDefContext::DIRECTIVE_IFDEF() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_IFDEF, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorDefContext::DIRECTIVE_ID() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_ID, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorDefContext::DIRECTIVE_IFNDEF() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_IFNDEF, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorDefContext::DIRECTIVE_UNDEF() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_UNDEF, 0);
}

ObjectiveCPreprocessorParser::PreprocessorDefContext::PreprocessorDefContext(DirectiveContext *ctx) { copyFrom(ctx); }

void ObjectiveCPreprocessorParser::PreprocessorDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorDef(this);
}
void ObjectiveCPreprocessorParser::PreprocessorDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorDef(this);
}

antlrcpp::Any ObjectiveCPreprocessorParser::PreprocessorDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCPreprocessorParserVisitor*>(visitor))
    return parserVisitor->visitPreprocessorDef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreprocessorErrorContext ------------------------------------------------------------------

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorErrorContext::SHARP() {
  return getToken(ObjectiveCPreprocessorParser::SHARP, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorErrorContext::DIRECTIVE_ERROR() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_ERROR, 0);
}

ObjectiveCPreprocessorParser::DirectiveTextContext* ObjectiveCPreprocessorParser::PreprocessorErrorContext::directiveText() {
  return getRuleContext<ObjectiveCPreprocessorParser::DirectiveTextContext>(0);
}

ObjectiveCPreprocessorParser::PreprocessorErrorContext::PreprocessorErrorContext(DirectiveContext *ctx) { copyFrom(ctx); }

void ObjectiveCPreprocessorParser::PreprocessorErrorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorError(this);
}
void ObjectiveCPreprocessorParser::PreprocessorErrorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorError(this);
}

antlrcpp::Any ObjectiveCPreprocessorParser::PreprocessorErrorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCPreprocessorParserVisitor*>(visitor))
    return parserVisitor->visitPreprocessorError(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreprocessorConditionalContext ------------------------------------------------------------------

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorConditionalContext::SHARP() {
  return getToken(ObjectiveCPreprocessorParser::SHARP, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorConditionalContext::DIRECTIVE_IF() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_IF, 0);
}

ObjectiveCPreprocessorParser::PreprocessorExpressionContext* ObjectiveCPreprocessorParser::PreprocessorConditionalContext::preprocessorExpression() {
  return getRuleContext<ObjectiveCPreprocessorParser::PreprocessorExpressionContext>(0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorConditionalContext::DIRECTIVE_ELIF() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_ELIF, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorConditionalContext::DIRECTIVE_ELSE() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_ELSE, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorConditionalContext::DIRECTIVE_ENDIF() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_ENDIF, 0);
}

ObjectiveCPreprocessorParser::PreprocessorConditionalContext::PreprocessorConditionalContext(DirectiveContext *ctx) { copyFrom(ctx); }

void ObjectiveCPreprocessorParser::PreprocessorConditionalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorConditional(this);
}
void ObjectiveCPreprocessorParser::PreprocessorConditionalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorConditional(this);
}

antlrcpp::Any ObjectiveCPreprocessorParser::PreprocessorConditionalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCPreprocessorParserVisitor*>(visitor))
    return parserVisitor->visitPreprocessorConditional(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreprocessorImportContext ------------------------------------------------------------------

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorImportContext::SHARP() {
  return getToken(ObjectiveCPreprocessorParser::SHARP, 0);
}

ObjectiveCPreprocessorParser::DirectiveTextContext* ObjectiveCPreprocessorParser::PreprocessorImportContext::directiveText() {
  return getRuleContext<ObjectiveCPreprocessorParser::DirectiveTextContext>(0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorImportContext::DIRECTIVE_IMPORT() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_IMPORT, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorImportContext::DIRECTIVE_INCLUDE() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_INCLUDE, 0);
}

ObjectiveCPreprocessorParser::PreprocessorImportContext::PreprocessorImportContext(DirectiveContext *ctx) { copyFrom(ctx); }

void ObjectiveCPreprocessorParser::PreprocessorImportContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorImport(this);
}
void ObjectiveCPreprocessorParser::PreprocessorImportContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorImport(this);
}

antlrcpp::Any ObjectiveCPreprocessorParser::PreprocessorImportContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCPreprocessorParserVisitor*>(visitor))
    return parserVisitor->visitPreprocessorImport(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreprocessorPragmaContext ------------------------------------------------------------------

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorPragmaContext::SHARP() {
  return getToken(ObjectiveCPreprocessorParser::SHARP, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorPragmaContext::DIRECTIVE_PRAGMA() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_PRAGMA, 0);
}

ObjectiveCPreprocessorParser::DirectiveTextContext* ObjectiveCPreprocessorParser::PreprocessorPragmaContext::directiveText() {
  return getRuleContext<ObjectiveCPreprocessorParser::DirectiveTextContext>(0);
}

ObjectiveCPreprocessorParser::PreprocessorPragmaContext::PreprocessorPragmaContext(DirectiveContext *ctx) { copyFrom(ctx); }

void ObjectiveCPreprocessorParser::PreprocessorPragmaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorPragma(this);
}
void ObjectiveCPreprocessorParser::PreprocessorPragmaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorPragma(this);
}

antlrcpp::Any ObjectiveCPreprocessorParser::PreprocessorPragmaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCPreprocessorParserVisitor*>(visitor))
    return parserVisitor->visitPreprocessorPragma(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreprocessorDefineContext ------------------------------------------------------------------

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorDefineContext::SHARP() {
  return getToken(ObjectiveCPreprocessorParser::SHARP, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorDefineContext::DIRECTIVE_DEFINE() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_DEFINE, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorDefineContext::DIRECTIVE_ID() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_ID, 0);
}

ObjectiveCPreprocessorParser::DirectiveTextContext* ObjectiveCPreprocessorParser::PreprocessorDefineContext::directiveText() {
  return getRuleContext<ObjectiveCPreprocessorParser::DirectiveTextContext>(0);
}

ObjectiveCPreprocessorParser::PreprocessorDefineContext::PreprocessorDefineContext(DirectiveContext *ctx) { copyFrom(ctx); }

void ObjectiveCPreprocessorParser::PreprocessorDefineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorDefine(this);
}
void ObjectiveCPreprocessorParser::PreprocessorDefineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorDefine(this);
}

antlrcpp::Any ObjectiveCPreprocessorParser::PreprocessorDefineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCPreprocessorParserVisitor*>(visitor))
    return parserVisitor->visitPreprocessorDefine(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreprocessorWarningContext ------------------------------------------------------------------

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorWarningContext::SHARP() {
  return getToken(ObjectiveCPreprocessorParser::SHARP, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorWarningContext::DIRECTIVE_WARNING() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_WARNING, 0);
}

ObjectiveCPreprocessorParser::DirectiveTextContext* ObjectiveCPreprocessorParser::PreprocessorWarningContext::directiveText() {
  return getRuleContext<ObjectiveCPreprocessorParser::DirectiveTextContext>(0);
}

ObjectiveCPreprocessorParser::PreprocessorWarningContext::PreprocessorWarningContext(DirectiveContext *ctx) { copyFrom(ctx); }

void ObjectiveCPreprocessorParser::PreprocessorWarningContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorWarning(this);
}
void ObjectiveCPreprocessorParser::PreprocessorWarningContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorWarning(this);
}

antlrcpp::Any ObjectiveCPreprocessorParser::PreprocessorWarningContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCPreprocessorParserVisitor*>(visitor))
    return parserVisitor->visitPreprocessorWarning(this);
  else
    return visitor->visitChildren(this);
}
ObjectiveCPreprocessorParser::DirectiveContext* ObjectiveCPreprocessorParser::directive() {
  DirectiveContext *_localctx = _tracker.createInstance<DirectiveContext>(_ctx, getState());
  enterRule(_localctx, 0, ObjectiveCPreprocessorParser::RuleDirective);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(43);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<DirectiveContext *>(_tracker.createInstance<ObjectiveCPreprocessorParser::PreprocessorImportContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(6);
      match(ObjectiveCPreprocessorParser::SHARP);
      setState(7);
      _la = _input->LA(1);
      if (!(_la == ObjectiveCPreprocessorParser::DIRECTIVE_IMPORT

      || _la == ObjectiveCPreprocessorParser::DIRECTIVE_INCLUDE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(8);
      directiveText();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<DirectiveContext *>(_tracker.createInstance<ObjectiveCPreprocessorParser::PreprocessorConditionalContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(9);
      match(ObjectiveCPreprocessorParser::SHARP);
      setState(10);
      match(ObjectiveCPreprocessorParser::DIRECTIVE_IF);
      setState(11);
      preprocessorExpression(0);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<DirectiveContext *>(_tracker.createInstance<ObjectiveCPreprocessorParser::PreprocessorConditionalContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(12);
      match(ObjectiveCPreprocessorParser::SHARP);
      setState(13);
      match(ObjectiveCPreprocessorParser::DIRECTIVE_ELIF);
      setState(14);
      preprocessorExpression(0);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<DirectiveContext *>(_tracker.createInstance<ObjectiveCPreprocessorParser::PreprocessorConditionalContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(15);
      match(ObjectiveCPreprocessorParser::SHARP);
      setState(16);
      match(ObjectiveCPreprocessorParser::DIRECTIVE_ELSE);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<DirectiveContext *>(_tracker.createInstance<ObjectiveCPreprocessorParser::PreprocessorConditionalContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(17);
      match(ObjectiveCPreprocessorParser::SHARP);
      setState(18);
      match(ObjectiveCPreprocessorParser::DIRECTIVE_ENDIF);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<DirectiveContext *>(_tracker.createInstance<ObjectiveCPreprocessorParser::PreprocessorDefContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(19);
      match(ObjectiveCPreprocessorParser::SHARP);
      setState(20);
      match(ObjectiveCPreprocessorParser::DIRECTIVE_IFDEF);
      setState(21);
      match(ObjectiveCPreprocessorParser::DIRECTIVE_ID);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<DirectiveContext *>(_tracker.createInstance<ObjectiveCPreprocessorParser::PreprocessorDefContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(22);
      match(ObjectiveCPreprocessorParser::SHARP);
      setState(23);
      match(ObjectiveCPreprocessorParser::DIRECTIVE_IFNDEF);
      setState(24);
      match(ObjectiveCPreprocessorParser::DIRECTIVE_ID);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<DirectiveContext *>(_tracker.createInstance<ObjectiveCPreprocessorParser::PreprocessorDefContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(25);
      match(ObjectiveCPreprocessorParser::SHARP);
      setState(26);
      match(ObjectiveCPreprocessorParser::DIRECTIVE_UNDEF);
      setState(27);
      match(ObjectiveCPreprocessorParser::DIRECTIVE_ID);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<DirectiveContext *>(_tracker.createInstance<ObjectiveCPreprocessorParser::PreprocessorPragmaContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(28);
      match(ObjectiveCPreprocessorParser::SHARP);
      setState(29);
      match(ObjectiveCPreprocessorParser::DIRECTIVE_PRAGMA);
      setState(30);
      directiveText();
      break;
    }

    case 10: {
      _localctx = dynamic_cast<DirectiveContext *>(_tracker.createInstance<ObjectiveCPreprocessorParser::PreprocessorErrorContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(31);
      match(ObjectiveCPreprocessorParser::SHARP);
      setState(32);
      match(ObjectiveCPreprocessorParser::DIRECTIVE_ERROR);
      setState(33);
      directiveText();
      break;
    }

    case 11: {
      _localctx = dynamic_cast<DirectiveContext *>(_tracker.createInstance<ObjectiveCPreprocessorParser::PreprocessorWarningContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(34);
      match(ObjectiveCPreprocessorParser::SHARP);
      setState(35);
      match(ObjectiveCPreprocessorParser::DIRECTIVE_WARNING);
      setState(36);
      directiveText();
      break;
    }

    case 12: {
      _localctx = dynamic_cast<DirectiveContext *>(_tracker.createInstance<ObjectiveCPreprocessorParser::PreprocessorDefineContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(37);
      match(ObjectiveCPreprocessorParser::SHARP);
      setState(38);
      match(ObjectiveCPreprocessorParser::DIRECTIVE_DEFINE);
      setState(39);
      match(ObjectiveCPreprocessorParser::DIRECTIVE_ID);
      setState(41);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ObjectiveCPreprocessorParser::DIRECTIVE_TEXT_NEWLINE

      || _la == ObjectiveCPreprocessorParser::DIRECTIVE_TEXT) {
        setState(40);
        directiveText();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DirectiveTextContext ------------------------------------------------------------------

ObjectiveCPreprocessorParser::DirectiveTextContext::DirectiveTextContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ObjectiveCPreprocessorParser::DirectiveTextContext::DIRECTIVE_TEXT() {
  return getTokens(ObjectiveCPreprocessorParser::DIRECTIVE_TEXT);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::DirectiveTextContext::DIRECTIVE_TEXT(size_t i) {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_TEXT, i);
}

std::vector<tree::TerminalNode *> ObjectiveCPreprocessorParser::DirectiveTextContext::DIRECTIVE_TEXT_NEWLINE() {
  return getTokens(ObjectiveCPreprocessorParser::DIRECTIVE_TEXT_NEWLINE);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::DirectiveTextContext::DIRECTIVE_TEXT_NEWLINE(size_t i) {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_TEXT_NEWLINE, i);
}


size_t ObjectiveCPreprocessorParser::DirectiveTextContext::getRuleIndex() const {
  return ObjectiveCPreprocessorParser::RuleDirectiveText;
}

void ObjectiveCPreprocessorParser::DirectiveTextContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDirectiveText(this);
}

void ObjectiveCPreprocessorParser::DirectiveTextContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDirectiveText(this);
}


antlrcpp::Any ObjectiveCPreprocessorParser::DirectiveTextContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCPreprocessorParserVisitor*>(visitor))
    return parserVisitor->visitDirectiveText(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCPreprocessorParser::DirectiveTextContext* ObjectiveCPreprocessorParser::directiveText() {
  DirectiveTextContext *_localctx = _tracker.createInstance<DirectiveTextContext>(_ctx, getState());
  enterRule(_localctx, 2, ObjectiveCPreprocessorParser::RuleDirectiveText);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(45);
      _la = _input->LA(1);
      if (!(_la == ObjectiveCPreprocessorParser::DIRECTIVE_TEXT_NEWLINE

      || _la == ObjectiveCPreprocessorParser::DIRECTIVE_TEXT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(48); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ObjectiveCPreprocessorParser::DIRECTIVE_TEXT_NEWLINE

    || _la == ObjectiveCPreprocessorParser::DIRECTIVE_TEXT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PreprocessorExpressionContext ------------------------------------------------------------------

ObjectiveCPreprocessorParser::PreprocessorExpressionContext::PreprocessorExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ObjectiveCPreprocessorParser::PreprocessorExpressionContext::getRuleIndex() const {
  return ObjectiveCPreprocessorParser::RulePreprocessorExpression;
}

void ObjectiveCPreprocessorParser::PreprocessorExpressionContext::copyFrom(PreprocessorExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PreprocessorParenthesisContext ------------------------------------------------------------------

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorParenthesisContext::DIRECTIVE_LP() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_LP, 0);
}

ObjectiveCPreprocessorParser::PreprocessorExpressionContext* ObjectiveCPreprocessorParser::PreprocessorParenthesisContext::preprocessorExpression() {
  return getRuleContext<ObjectiveCPreprocessorParser::PreprocessorExpressionContext>(0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorParenthesisContext::DIRECTIVE_RP() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_RP, 0);
}

ObjectiveCPreprocessorParser::PreprocessorParenthesisContext::PreprocessorParenthesisContext(PreprocessorExpressionContext *ctx) { copyFrom(ctx); }

void ObjectiveCPreprocessorParser::PreprocessorParenthesisContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorParenthesis(this);
}
void ObjectiveCPreprocessorParser::PreprocessorParenthesisContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorParenthesis(this);
}

antlrcpp::Any ObjectiveCPreprocessorParser::PreprocessorParenthesisContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCPreprocessorParserVisitor*>(visitor))
    return parserVisitor->visitPreprocessorParenthesis(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreprocessorNotContext ------------------------------------------------------------------

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorNotContext::DIRECTIVE_BANG() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_BANG, 0);
}

ObjectiveCPreprocessorParser::PreprocessorExpressionContext* ObjectiveCPreprocessorParser::PreprocessorNotContext::preprocessorExpression() {
  return getRuleContext<ObjectiveCPreprocessorParser::PreprocessorExpressionContext>(0);
}

ObjectiveCPreprocessorParser::PreprocessorNotContext::PreprocessorNotContext(PreprocessorExpressionContext *ctx) { copyFrom(ctx); }

void ObjectiveCPreprocessorParser::PreprocessorNotContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorNot(this);
}
void ObjectiveCPreprocessorParser::PreprocessorNotContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorNot(this);
}

antlrcpp::Any ObjectiveCPreprocessorParser::PreprocessorNotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCPreprocessorParserVisitor*>(visitor))
    return parserVisitor->visitPreprocessorNot(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreprocessorBinaryContext ------------------------------------------------------------------

std::vector<ObjectiveCPreprocessorParser::PreprocessorExpressionContext *> ObjectiveCPreprocessorParser::PreprocessorBinaryContext::preprocessorExpression() {
  return getRuleContexts<ObjectiveCPreprocessorParser::PreprocessorExpressionContext>();
}

ObjectiveCPreprocessorParser::PreprocessorExpressionContext* ObjectiveCPreprocessorParser::PreprocessorBinaryContext::preprocessorExpression(size_t i) {
  return getRuleContext<ObjectiveCPreprocessorParser::PreprocessorExpressionContext>(i);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorBinaryContext::DIRECTIVE_EQUAL() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_EQUAL, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorBinaryContext::DIRECTIVE_NOTEQUAL() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_NOTEQUAL, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorBinaryContext::DIRECTIVE_AND() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_AND, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorBinaryContext::DIRECTIVE_OR() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_OR, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorBinaryContext::DIRECTIVE_LT() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_LT, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorBinaryContext::DIRECTIVE_GT() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_GT, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorBinaryContext::DIRECTIVE_LE() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_LE, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorBinaryContext::DIRECTIVE_GE() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_GE, 0);
}

ObjectiveCPreprocessorParser::PreprocessorBinaryContext::PreprocessorBinaryContext(PreprocessorExpressionContext *ctx) { copyFrom(ctx); }

void ObjectiveCPreprocessorParser::PreprocessorBinaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorBinary(this);
}
void ObjectiveCPreprocessorParser::PreprocessorBinaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorBinary(this);
}

antlrcpp::Any ObjectiveCPreprocessorParser::PreprocessorBinaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCPreprocessorParserVisitor*>(visitor))
    return parserVisitor->visitPreprocessorBinary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreprocessorConstantContext ------------------------------------------------------------------

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorConstantContext::DIRECTIVE_TRUE() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_TRUE, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorConstantContext::DIRECTIVE_FALSE() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_FALSE, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorConstantContext::DIRECTIVE_DECIMAL_LITERAL() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_DECIMAL_LITERAL, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorConstantContext::DIRECTIVE_STRING() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_STRING, 0);
}

ObjectiveCPreprocessorParser::PreprocessorConstantContext::PreprocessorConstantContext(PreprocessorExpressionContext *ctx) { copyFrom(ctx); }

void ObjectiveCPreprocessorParser::PreprocessorConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorConstant(this);
}
void ObjectiveCPreprocessorParser::PreprocessorConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorConstant(this);
}

antlrcpp::Any ObjectiveCPreprocessorParser::PreprocessorConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCPreprocessorParserVisitor*>(visitor))
    return parserVisitor->visitPreprocessorConstant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreprocessorConditionalSymbolContext ------------------------------------------------------------------

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorConditionalSymbolContext::DIRECTIVE_ID() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_ID, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorConditionalSymbolContext::DIRECTIVE_LP() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_LP, 0);
}

ObjectiveCPreprocessorParser::PreprocessorExpressionContext* ObjectiveCPreprocessorParser::PreprocessorConditionalSymbolContext::preprocessorExpression() {
  return getRuleContext<ObjectiveCPreprocessorParser::PreprocessorExpressionContext>(0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorConditionalSymbolContext::DIRECTIVE_RP() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_RP, 0);
}

ObjectiveCPreprocessorParser::PreprocessorConditionalSymbolContext::PreprocessorConditionalSymbolContext(PreprocessorExpressionContext *ctx) { copyFrom(ctx); }

void ObjectiveCPreprocessorParser::PreprocessorConditionalSymbolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorConditionalSymbol(this);
}
void ObjectiveCPreprocessorParser::PreprocessorConditionalSymbolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorConditionalSymbol(this);
}

antlrcpp::Any ObjectiveCPreprocessorParser::PreprocessorConditionalSymbolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCPreprocessorParserVisitor*>(visitor))
    return parserVisitor->visitPreprocessorConditionalSymbol(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreprocessorDefinedContext ------------------------------------------------------------------

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorDefinedContext::DIRECTIVE_DEFINED() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_DEFINED, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorDefinedContext::DIRECTIVE_ID() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_ID, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorDefinedContext::DIRECTIVE_LP() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_LP, 0);
}

tree::TerminalNode* ObjectiveCPreprocessorParser::PreprocessorDefinedContext::DIRECTIVE_RP() {
  return getToken(ObjectiveCPreprocessorParser::DIRECTIVE_RP, 0);
}

ObjectiveCPreprocessorParser::PreprocessorDefinedContext::PreprocessorDefinedContext(PreprocessorExpressionContext *ctx) { copyFrom(ctx); }

void ObjectiveCPreprocessorParser::PreprocessorDefinedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreprocessorDefined(this);
}
void ObjectiveCPreprocessorParser::PreprocessorDefinedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCPreprocessorParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreprocessorDefined(this);
}

antlrcpp::Any ObjectiveCPreprocessorParser::PreprocessorDefinedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCPreprocessorParserVisitor*>(visitor))
    return parserVisitor->visitPreprocessorDefined(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCPreprocessorParser::PreprocessorExpressionContext* ObjectiveCPreprocessorParser::preprocessorExpression() {
   return preprocessorExpression(0);
}

ObjectiveCPreprocessorParser::PreprocessorExpressionContext* ObjectiveCPreprocessorParser::preprocessorExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ObjectiveCPreprocessorParser::PreprocessorExpressionContext *_localctx = _tracker.createInstance<PreprocessorExpressionContext>(_ctx, parentState);
  ObjectiveCPreprocessorParser::PreprocessorExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, ObjectiveCPreprocessorParser::RulePreprocessorExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(75);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ObjectiveCPreprocessorParser::DIRECTIVE_TRUE: {
        _localctx = _tracker.createInstance<PreprocessorConstantContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(51);
        match(ObjectiveCPreprocessorParser::DIRECTIVE_TRUE);
        break;
      }

      case ObjectiveCPreprocessorParser::DIRECTIVE_FALSE: {
        _localctx = _tracker.createInstance<PreprocessorConstantContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(52);
        match(ObjectiveCPreprocessorParser::DIRECTIVE_FALSE);
        break;
      }

      case ObjectiveCPreprocessorParser::DIRECTIVE_DECIMAL_LITERAL: {
        _localctx = _tracker.createInstance<PreprocessorConstantContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(53);
        match(ObjectiveCPreprocessorParser::DIRECTIVE_DECIMAL_LITERAL);
        break;
      }

      case ObjectiveCPreprocessorParser::DIRECTIVE_STRING: {
        _localctx = _tracker.createInstance<PreprocessorConstantContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(54);
        match(ObjectiveCPreprocessorParser::DIRECTIVE_STRING);
        break;
      }

      case ObjectiveCPreprocessorParser::DIRECTIVE_ID: {
        _localctx = _tracker.createInstance<PreprocessorConditionalSymbolContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(55);
        match(ObjectiveCPreprocessorParser::DIRECTIVE_ID);
        setState(60);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          setState(56);
          match(ObjectiveCPreprocessorParser::DIRECTIVE_LP);
          setState(57);
          preprocessorExpression(0);
          setState(58);
          match(ObjectiveCPreprocessorParser::DIRECTIVE_RP);
          break;
        }

        }
        break;
      }

      case ObjectiveCPreprocessorParser::DIRECTIVE_LP: {
        _localctx = _tracker.createInstance<PreprocessorParenthesisContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(62);
        match(ObjectiveCPreprocessorParser::DIRECTIVE_LP);
        setState(63);
        preprocessorExpression(0);
        setState(64);
        match(ObjectiveCPreprocessorParser::DIRECTIVE_RP);
        break;
      }

      case ObjectiveCPreprocessorParser::DIRECTIVE_BANG: {
        _localctx = _tracker.createInstance<PreprocessorNotContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(66);
        match(ObjectiveCPreprocessorParser::DIRECTIVE_BANG);
        setState(67);
        preprocessorExpression(6);
        break;
      }

      case ObjectiveCPreprocessorParser::DIRECTIVE_DEFINED: {
        _localctx = _tracker.createInstance<PreprocessorDefinedContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(68);
        match(ObjectiveCPreprocessorParser::DIRECTIVE_DEFINED);
        setState(73);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case ObjectiveCPreprocessorParser::DIRECTIVE_ID: {
            setState(69);
            match(ObjectiveCPreprocessorParser::DIRECTIVE_ID);
            break;
          }

          case ObjectiveCPreprocessorParser::DIRECTIVE_LP: {
            setState(70);
            match(ObjectiveCPreprocessorParser::DIRECTIVE_LP);
            setState(71);
            match(ObjectiveCPreprocessorParser::DIRECTIVE_ID);
            setState(72);
            match(ObjectiveCPreprocessorParser::DIRECTIVE_RP);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(91);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(89);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PreprocessorBinaryContext>(_tracker.createInstance<PreprocessorExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePreprocessorExpression);
          setState(77);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(78);
          dynamic_cast<PreprocessorBinaryContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ObjectiveCPreprocessorParser::DIRECTIVE_EQUAL

          || _la == ObjectiveCPreprocessorParser::DIRECTIVE_NOTEQUAL)) {
            dynamic_cast<PreprocessorBinaryContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(79);
          preprocessorExpression(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<PreprocessorBinaryContext>(_tracker.createInstance<PreprocessorExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePreprocessorExpression);
          setState(80);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(81);
          dynamic_cast<PreprocessorBinaryContext *>(_localctx)->op = match(ObjectiveCPreprocessorParser::DIRECTIVE_AND);
          setState(82);
          preprocessorExpression(5);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<PreprocessorBinaryContext>(_tracker.createInstance<PreprocessorExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePreprocessorExpression);
          setState(83);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(84);
          dynamic_cast<PreprocessorBinaryContext *>(_localctx)->op = match(ObjectiveCPreprocessorParser::DIRECTIVE_OR);
          setState(85);
          preprocessorExpression(4);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<PreprocessorBinaryContext>(_tracker.createInstance<PreprocessorExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePreprocessorExpression);
          setState(86);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(87);
          dynamic_cast<PreprocessorBinaryContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 209) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 209)) & ((1ULL << (ObjectiveCPreprocessorParser::DIRECTIVE_LT - 209))
            | (1ULL << (ObjectiveCPreprocessorParser::DIRECTIVE_GT - 209))
            | (1ULL << (ObjectiveCPreprocessorParser::DIRECTIVE_LE - 209))
            | (1ULL << (ObjectiveCPreprocessorParser::DIRECTIVE_GE - 209)))) != 0))) {
            dynamic_cast<PreprocessorBinaryContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(88);
          preprocessorExpression(3);
          break;
        }

        } 
      }
      setState(93);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool ObjectiveCPreprocessorParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return preprocessorExpressionSempred(dynamic_cast<PreprocessorExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ObjectiveCPreprocessorParser::preprocessorExpressionSempred(PreprocessorExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 3);
    case 3: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ObjectiveCPreprocessorParser::_decisionToDFA;
atn::PredictionContextCache ObjectiveCPreprocessorParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ObjectiveCPreprocessorParser::_atn;
std::vector<uint16_t> ObjectiveCPreprocessorParser::_serializedATN;

std::vector<std::string> ObjectiveCPreprocessorParser::_ruleNames = {
  "directive", "directiveText", "preprocessorExpression"
};

std::vector<std::string> ObjectiveCPreprocessorParser::_literalNames = {
  "", "'auto'", "'break'", "'case'", "'char'", "'const'", "'continue'", 
  "'default'", "'do'", "'double'", "", "'enum'", "'extern'", "'float'", 
  "'for'", "'goto'", "", "'inline'", "'int'", "'long'", "'register'", "'restrict'", 
  "'return'", "'short'", "'signed'", "'sizeof'", "'static'", "'struct'", 
  "'switch'", "'typedef'", "'union'", "'unsigned'", "'void'", "'volatile'", 
  "'while'", "'_Bool'", "'_Complex'", "'_Imaginery'", "'true'", "'false'", 
  "'BOOL'", "'Class'", "'bycopy'", "'byref'", "'id'", "'IMP'", "'in'", "'inout'", 
  "'nil'", "'NO'", "'NULL'", "'oneway'", "'out'", "'Protocol'", "'SEL'", 
  "'self'", "'super'", "'YES'", "'@autoreleasepool'", "'@catch'", "'@class'", 
  "'@dynamic'", "'@encode'", "'@end'", "'@finally'", "'@implementation'", 
  "'@interface'", "'@import'", "'@package'", "'@protocol'", "'@optional'", 
  "'@private'", "'@property'", "'@protected'", "'@public'", "'@required'", 
  "'@selector'", "'@synchronized'", "'@synthesize'", "'@throw'", "'@try'", 
  "'atomic'", "'nonatomic'", "'retain'", "'__attribute__'", "'__autoreleasing'", 
  "'__block'", "'__bridge'", "'__bridge_retained'", "'__bridge_transfer'", 
  "'__covariant'", "'__contravariant'", "'__deprecated'", "'__kindof'", 
  "'__strong'", "", "'__unsafe_unretained'", "'__unused'", "'__weak'", "", 
  "", "", "'null_resettable'", "'NS_INLINE'", "'NS_ENUM'", "'NS_OPTIONS'", 
  "'assign'", "'copy'", "'getter'", "'setter'", "'strong'", "'readonly'", 
  "'readwrite'", "'weak'", "'unsafe_unretained'", "'IBOutlet'", "'IBOutletCollection'", 
  "'IBInspectable'", "'IB_DESIGNABLE'", "", "", "", "", "", "'__TVOS_PROHIBITED'", 
  "", "", "", "'{'", "'}'", "'['", "']'", "';'", "','", "'.'", "'->'", "'@'", 
  "'='", "", "", "", "'~'", "'\u003F'", "':'", "", "", "", "", "", "", "'++'", 
  "'--'", "'+'", "'-'", "'*'", "'/'", "'&'", "'|'", "'^'", "'%'", "'+='", 
  "'-='", "'*='", "'/='", "'&='", "'|='", "'^='", "'%='", "'<<='", "'>>='", 
  "'...'", "", "", "", "", "", "", "", "", "", "", "'\\'", "", "", "", "", 
  "", "", "", "", "'defined'", "", "'elif'", "", "'undef'", "'ifdef'", "'ifndef'", 
  "'endif'"
};

std::vector<std::string> ObjectiveCPreprocessorParser::_symbolicNames = {
  "", "AUTO", "BREAK", "CASE", "CHAR", "CONST", "CONTINUE", "DEFAULT", "DO", 
  "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT", "FOR", "GOTO", "IF", "INLINE", 
  "INT", "LONG", "REGISTER", "RESTRICT", "RETURN", "SHORT", "SIGNED", "SIZEOF", 
  "STATIC", "STRUCT", "SWITCH", "TYPEDEF", "UNION", "UNSIGNED", "VOID", 
  "VOLATILE", "WHILE", "BOOL_", "COMPLEX", "IMAGINERY", "TRUE", "FALSE", 
  "BOOL", "Class", "BYCOPY", "BYREF", "ID", "IMP", "IN", "INOUT", "NIL", 
  "NO", "NULL", "ONEWAY", "OUT", "PROTOCOL_", "SEL", "SELF", "SUPER", "YES", 
  "AUTORELEASEPOOL", "CATCH", "CLASS", "DYNAMIC", "ENCODE", "END", "FINALLY", 
  "IMPLEMENTATION", "INTERFACE", "IMPORT", "PACKAGE", "PROTOCOL", "OPTIONAL", 
  "PRIVATE", "PROPERTY", "PROTECTED", "PUBLIC", "REQUIRED", "SELECTOR", 
  "SYNCHRONIZED", "SYNTHESIZE", "THROW", "TRY", "ATOMIC", "NONATOMIC", "RETAIN", 
  "ATTRIBUTE", "AUTORELEASING_QUALIFIER", "BLOCK", "BRIDGE", "BRIDGE_RETAINED", 
  "BRIDGE_TRANSFER", "COVARIANT", "CONTRAVARIANT", "DEPRECATED", "KINDOF", 
  "STRONG_QUALIFIER", "TYPEOF", "UNSAFE_UNRETAINED_QUALIFIER", "UNUSED", 
  "WEAK_QUALIFIER", "NULL_UNSPECIFIED", "NULLABLE", "NONNULL", "NULL_RESETTABLE", 
  "NS_INLINE", "NS_ENUM", "NS_OPTIONS", "ASSIGN", "COPY", "GETTER", "SETTER", 
  "STRONG", "READONLY", "READWRITE", "WEAK", "UNSAFE_UNRETAINED", "IB_OUTLET", 
  "IB_OUTLET_COLLECTION", "IB_INSPECTABLE", "IB_DESIGNABLE", "NS_ASSUME_NONNULL_BEGIN", 
  "NS_ASSUME_NONNULL_END", "EXTERN_SUFFIX", "IOS_SUFFIX", "MAC_SUFFIX", 
  "TVOS_PROHIBITED", "IDENTIFIER", "LP", "RP", "LBRACE", "RBRACE", "LBRACK", 
  "RBRACK", "SEMI", "COMMA", "DOT", "STRUCTACCESS", "AT", "ASSIGNMENT", 
  "GT", "LT", "BANG", "TILDE", "QUESTION", "COLON", "EQUAL", "LE", "GE", 
  "NOTEQUAL", "AND", "OR", "INC", "DEC", "ADD", "SUB", "MUL", "DIV", "BITAND", 
  "BITOR", "BITXOR", "MOD", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", 
  "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", "MOD_ASSIGN", "LSHIFT_ASSIGN", 
  "RSHIFT_ASSIGN", "ELIPSIS", "CHARACTER_LITERAL", "STRING_START", "HEX_LITERAL", 
  "OCTAL_LITERAL", "BINARY_LITERAL", "DECIMAL_LITERAL", "FLOATING_POINT_LITERAL", 
  "WS", "MULTI_COMMENT", "SINGLE_COMMENT", "BACKSLASH", "SHARP", "STRING_NEWLINE", 
  "STRING_END", "STRING_VALUE", "DIRECTIVE_IMPORT", "DIRECTIVE_INCLUDE", 
  "DIRECTIVE_PRAGMA", "DIRECTIVE_DEFINE", "DIRECTIVE_DEFINED", "DIRECTIVE_IF", 
  "DIRECTIVE_ELIF", "DIRECTIVE_ELSE", "DIRECTIVE_UNDEF", "DIRECTIVE_IFDEF", 
  "DIRECTIVE_IFNDEF", "DIRECTIVE_ENDIF", "DIRECTIVE_TRUE", "DIRECTIVE_FALSE", 
  "DIRECTIVE_ERROR", "DIRECTIVE_WARNING", "DIRECTIVE_BANG", "DIRECTIVE_LP", 
  "DIRECTIVE_RP", "DIRECTIVE_EQUAL", "DIRECTIVE_NOTEQUAL", "DIRECTIVE_AND", 
  "DIRECTIVE_OR", "DIRECTIVE_LT", "DIRECTIVE_GT", "DIRECTIVE_LE", "DIRECTIVE_GE", 
  "DIRECTIVE_STRING", "DIRECTIVE_ID", "DIRECTIVE_DECIMAL_LITERAL", "DIRECTIVE_FLOAT", 
  "DIRECTIVE_NEWLINE", "DIRECTIVE_MULTI_COMMENT", "DIRECTIVE_SINGLE_COMMENT", 
  "DIRECTIVE_BACKSLASH_NEWLINE", "DIRECTIVE_TEXT_NEWLINE", "DIRECTIVE_TEXT"
};

dfa::Vocabulary ObjectiveCPreprocessorParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ObjectiveCPreprocessorParser::_tokenNames;

ObjectiveCPreprocessorParser::Initializer::Initializer() {
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

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0xe0, 0x61, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x5, 0x2, 0x2c, 0xa, 0x2, 0x5, 0x2, 0x2e, 0xa, 0x2, 0x3, 0x3, 0x6, 
    0x3, 0x31, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x32, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x5, 0x4, 0x3f, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x5, 0x4, 0x4c, 0xa, 0x4, 0x5, 0x4, 0x4e, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x5c, 0xa, 0x4, 0xc, 0x4, 0xe, 
    0x4, 0x5f, 0xb, 0x4, 0x3, 0x4, 0x2, 0x3, 0x6, 0x5, 0x2, 0x4, 0x6, 0x2, 
    0x6, 0x3, 0x2, 0xbc, 0xbd, 0x3, 0x2, 0xdf, 0xe0, 0x3, 0x2, 0xcf, 0xd0, 
    0x3, 0x2, 0xd3, 0xd6, 0x2, 0x77, 0x2, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x30, 0x3, 0x2, 0x2, 0x2, 0x6, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x8, 0x9, 0x7, 
    0xb8, 0x2, 0x2, 0x9, 0xa, 0x9, 0x2, 0x2, 0x2, 0xa, 0x2e, 0x5, 0x4, 0x3, 
    0x2, 0xb, 0xc, 0x7, 0xb8, 0x2, 0x2, 0xc, 0xd, 0x7, 0xc1, 0x2, 0x2, 0xd, 
    0x2e, 0x5, 0x6, 0x4, 0x2, 0xe, 0xf, 0x7, 0xb8, 0x2, 0x2, 0xf, 0x10, 
    0x7, 0xc2, 0x2, 0x2, 0x10, 0x2e, 0x5, 0x6, 0x4, 0x2, 0x11, 0x12, 0x7, 
    0xb8, 0x2, 0x2, 0x12, 0x2e, 0x7, 0xc3, 0x2, 0x2, 0x13, 0x14, 0x7, 0xb8, 
    0x2, 0x2, 0x14, 0x2e, 0x7, 0xc7, 0x2, 0x2, 0x15, 0x16, 0x7, 0xb8, 0x2, 
    0x2, 0x16, 0x17, 0x7, 0xc5, 0x2, 0x2, 0x17, 0x2e, 0x7, 0xd8, 0x2, 0x2, 
    0x18, 0x19, 0x7, 0xb8, 0x2, 0x2, 0x19, 0x1a, 0x7, 0xc6, 0x2, 0x2, 0x1a, 
    0x2e, 0x7, 0xd8, 0x2, 0x2, 0x1b, 0x1c, 0x7, 0xb8, 0x2, 0x2, 0x1c, 0x1d, 
    0x7, 0xc4, 0x2, 0x2, 0x1d, 0x2e, 0x7, 0xd8, 0x2, 0x2, 0x1e, 0x1f, 0x7, 
    0xb8, 0x2, 0x2, 0x1f, 0x20, 0x7, 0xbe, 0x2, 0x2, 0x20, 0x2e, 0x5, 0x4, 
    0x3, 0x2, 0x21, 0x22, 0x7, 0xb8, 0x2, 0x2, 0x22, 0x23, 0x7, 0xca, 0x2, 
    0x2, 0x23, 0x2e, 0x5, 0x4, 0x3, 0x2, 0x24, 0x25, 0x7, 0xb8, 0x2, 0x2, 
    0x25, 0x26, 0x7, 0xcb, 0x2, 0x2, 0x26, 0x2e, 0x5, 0x4, 0x3, 0x2, 0x27, 
    0x28, 0x7, 0xb8, 0x2, 0x2, 0x28, 0x29, 0x7, 0xbf, 0x2, 0x2, 0x29, 0x2b, 
    0x7, 0xd8, 0x2, 0x2, 0x2a, 0x2c, 0x5, 0x4, 0x3, 0x2, 0x2b, 0x2a, 0x3, 
    0x2, 0x2, 0x2, 0x2b, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2e, 0x3, 0x2, 
    0x2, 0x2, 0x2d, 0x8, 0x3, 0x2, 0x2, 0x2, 0x2d, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x2d, 0xe, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x11, 0x3, 0x2, 0x2, 0x2, 0x2d, 
    0x13, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x15, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x18, 
    0x3, 0x2, 0x2, 0x2, 0x2d, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x1e, 0x3, 
    0x2, 0x2, 0x2, 0x2d, 0x21, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x24, 0x3, 0x2, 
    0x2, 0x2, 0x2d, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x2f, 0x31, 0x9, 0x3, 0x2, 0x2, 0x30, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x31, 0x32, 0x3, 0x2, 0x2, 0x2, 0x32, 0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0x33, 0x5, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 
    0x8, 0x4, 0x1, 0x2, 0x35, 0x4e, 0x7, 0xc8, 0x2, 0x2, 0x36, 0x4e, 0x7, 
    0xc9, 0x2, 0x2, 0x37, 0x4e, 0x7, 0xd9, 0x2, 0x2, 0x38, 0x4e, 0x7, 0xd7, 
    0x2, 0x2, 0x39, 0x3e, 0x7, 0xd8, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0xcd, 0x2, 
    0x2, 0x3b, 0x3c, 0x5, 0x6, 0x4, 0x2, 0x3c, 0x3d, 0x7, 0xce, 0x2, 0x2, 
    0x3d, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x3f, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 
    0x7, 0xcd, 0x2, 0x2, 0x41, 0x42, 0x5, 0x6, 0x4, 0x2, 0x42, 0x43, 0x7, 
    0xce, 0x2, 0x2, 0x43, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x7, 0xcc, 
    0x2, 0x2, 0x45, 0x4e, 0x5, 0x6, 0x4, 0x8, 0x46, 0x4b, 0x7, 0xc0, 0x2, 
    0x2, 0x47, 0x4c, 0x7, 0xd8, 0x2, 0x2, 0x48, 0x49, 0x7, 0xcd, 0x2, 0x2, 
    0x49, 0x4a, 0x7, 0xd8, 0x2, 0x2, 0x4a, 0x4c, 0x7, 0xce, 0x2, 0x2, 0x4b, 
    0x47, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4e, 
    0x3, 0x2, 0x2, 0x2, 0x4d, 0x34, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x36, 0x3, 
    0x2, 0x2, 0x2, 0x4d, 0x37, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x38, 0x3, 0x2, 
    0x2, 0x2, 0x4d, 0x39, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x40, 0x3, 0x2, 0x2, 
    0x2, 0x4d, 0x44, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x46, 0x3, 0x2, 0x2, 0x2, 
    0x4e, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0xc, 0x7, 0x2, 0x2, 0x50, 
    0x51, 0x9, 0x4, 0x2, 0x2, 0x51, 0x5c, 0x5, 0x6, 0x4, 0x8, 0x52, 0x53, 
    0xc, 0x6, 0x2, 0x2, 0x53, 0x54, 0x7, 0xd1, 0x2, 0x2, 0x54, 0x5c, 0x5, 
    0x6, 0x4, 0x7, 0x55, 0x56, 0xc, 0x5, 0x2, 0x2, 0x56, 0x57, 0x7, 0xd2, 
    0x2, 0x2, 0x57, 0x5c, 0x5, 0x6, 0x4, 0x6, 0x58, 0x59, 0xc, 0x4, 0x2, 
    0x2, 0x59, 0x5a, 0x9, 0x5, 0x2, 0x2, 0x5a, 0x5c, 0x5, 0x6, 0x4, 0x5, 
    0x5b, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x52, 0x3, 0x2, 0x2, 0x2, 0x5b, 
    0x55, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5f, 
    0x3, 0x2, 0x2, 0x2, 0x5d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x3, 
    0x2, 0x2, 0x2, 0x5e, 0x7, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5d, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x2b, 0x2d, 0x32, 0x3e, 0x4b, 0x4d, 0x5b, 0x5d, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ObjectiveCPreprocessorParser::Initializer ObjectiveCPreprocessorParser::_init;
