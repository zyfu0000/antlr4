
// Generated from ObjectiveCParser.g4 by ANTLR 4.8


#include "ObjectiveCParserListener.h"
#include "ObjectiveCParserVisitor.h"

#include "ObjectiveCParser.h"


using namespace antlrcpp;
using namespace antlrcpptest;
using namespace antlr4;

ObjectiveCParser::ObjectiveCParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ObjectiveCParser::~ObjectiveCParser() {
  delete _interpreter;
}

std::string ObjectiveCParser::getGrammarFileName() const {
  return "ObjectiveCParser.g4";
}

const std::vector<std::string>& ObjectiveCParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ObjectiveCParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- TranslationUnitContext ------------------------------------------------------------------

ObjectiveCParser::TranslationUnitContext::TranslationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::TranslationUnitContext::EOF() {
  return getToken(ObjectiveCParser::EOF, 0);
}

std::vector<ObjectiveCParser::TopLevelDeclarationContext *> ObjectiveCParser::TranslationUnitContext::topLevelDeclaration() {
  return getRuleContexts<ObjectiveCParser::TopLevelDeclarationContext>();
}

ObjectiveCParser::TopLevelDeclarationContext* ObjectiveCParser::TranslationUnitContext::topLevelDeclaration(size_t i) {
  return getRuleContext<ObjectiveCParser::TopLevelDeclarationContext>(i);
}


size_t ObjectiveCParser::TranslationUnitContext::getRuleIndex() const {
  return ObjectiveCParser::RuleTranslationUnit;
}

void ObjectiveCParser::TranslationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTranslationUnit(this);
}

void ObjectiveCParser::TranslationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTranslationUnit(this);
}


antlrcpp::Any ObjectiveCParser::TranslationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitTranslationUnit(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::TranslationUnitContext* ObjectiveCParser::translationUnit() {
  TranslationUnitContext *_localctx = _tracker.createInstance<TranslationUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, ObjectiveCParser::RuleTranslationUnit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(291);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::AUTO)
      | (1ULL << ObjectiveCParser::CHAR)
      | (1ULL << ObjectiveCParser::CONST)
      | (1ULL << ObjectiveCParser::DOUBLE)
      | (1ULL << ObjectiveCParser::ENUM)
      | (1ULL << ObjectiveCParser::EXTERN)
      | (1ULL << ObjectiveCParser::FLOAT)
      | (1ULL << ObjectiveCParser::INLINE)
      | (1ULL << ObjectiveCParser::INT)
      | (1ULL << ObjectiveCParser::LONG)
      | (1ULL << ObjectiveCParser::REGISTER)
      | (1ULL << ObjectiveCParser::RESTRICT)
      | (1ULL << ObjectiveCParser::SHORT)
      | (1ULL << ObjectiveCParser::SIGNED)
      | (1ULL << ObjectiveCParser::STATIC)
      | (1ULL << ObjectiveCParser::STRUCT)
      | (1ULL << ObjectiveCParser::TYPEDEF)
      | (1ULL << ObjectiveCParser::UNION)
      | (1ULL << ObjectiveCParser::UNSIGNED)
      | (1ULL << ObjectiveCParser::VOID)
      | (1ULL << ObjectiveCParser::VOLATILE)
      | (1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER)
      | (1ULL << ObjectiveCParser::CLASS))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (ObjectiveCParser::IMPLEMENTATION - 65))
      | (1ULL << (ObjectiveCParser::INTERFACE - 65))
      | (1ULL << (ObjectiveCParser::IMPORT - 65))
      | (1ULL << (ObjectiveCParser::PROTOCOL - 65))
      | (1ULL << (ObjectiveCParser::ATOMIC - 65))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 65))
      | (1ULL << (ObjectiveCParser::RETAIN - 65))
      | (1ULL << (ObjectiveCParser::ATTRIBUTE - 65))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 65))
      | (1ULL << (ObjectiveCParser::BLOCK - 65))
      | (1ULL << (ObjectiveCParser::BRIDGE - 65))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 65))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 65))
      | (1ULL << (ObjectiveCParser::COVARIANT - 65))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 65))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 65))
      | (1ULL << (ObjectiveCParser::KINDOF - 65))
      | (1ULL << (ObjectiveCParser::STRONG_QUALIFIER - 65))
      | (1ULL << (ObjectiveCParser::TYPEOF - 65))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED_QUALIFIER - 65))
      | (1ULL << (ObjectiveCParser::UNUSED - 65))
      | (1ULL << (ObjectiveCParser::WEAK_QUALIFIER - 65))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 65))
      | (1ULL << (ObjectiveCParser::NULLABLE - 65))
      | (1ULL << (ObjectiveCParser::NONNULL - 65))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 65))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 65))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 65))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 65))
      | (1ULL << (ObjectiveCParser::ASSIGN - 65))
      | (1ULL << (ObjectiveCParser::COPY - 65))
      | (1ULL << (ObjectiveCParser::GETTER - 65))
      | (1ULL << (ObjectiveCParser::SETTER - 65))
      | (1ULL << (ObjectiveCParser::STRONG - 65))
      | (1ULL << (ObjectiveCParser::READONLY - 65))
      | (1ULL << (ObjectiveCParser::READWRITE - 65))
      | (1ULL << (ObjectiveCParser::WEAK - 65))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 65))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 65))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 65))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 65))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 65))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 65)))) != 0)) {
      setState(288);
      topLevelDeclaration();
      setState(293);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(294);
    match(ObjectiveCParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TopLevelDeclarationContext ------------------------------------------------------------------

ObjectiveCParser::TopLevelDeclarationContext::TopLevelDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::ImportDeclarationContext* ObjectiveCParser::TopLevelDeclarationContext::importDeclaration() {
  return getRuleContext<ObjectiveCParser::ImportDeclarationContext>(0);
}

ObjectiveCParser::FunctionDeclarationContext* ObjectiveCParser::TopLevelDeclarationContext::functionDeclaration() {
  return getRuleContext<ObjectiveCParser::FunctionDeclarationContext>(0);
}

ObjectiveCParser::DeclarationContext* ObjectiveCParser::TopLevelDeclarationContext::declaration() {
  return getRuleContext<ObjectiveCParser::DeclarationContext>(0);
}

ObjectiveCParser::ClassInterfaceContext* ObjectiveCParser::TopLevelDeclarationContext::classInterface() {
  return getRuleContext<ObjectiveCParser::ClassInterfaceContext>(0);
}

ObjectiveCParser::ClassImplementationContext* ObjectiveCParser::TopLevelDeclarationContext::classImplementation() {
  return getRuleContext<ObjectiveCParser::ClassImplementationContext>(0);
}

ObjectiveCParser::CategoryInterfaceContext* ObjectiveCParser::TopLevelDeclarationContext::categoryInterface() {
  return getRuleContext<ObjectiveCParser::CategoryInterfaceContext>(0);
}

ObjectiveCParser::CategoryImplementationContext* ObjectiveCParser::TopLevelDeclarationContext::categoryImplementation() {
  return getRuleContext<ObjectiveCParser::CategoryImplementationContext>(0);
}

ObjectiveCParser::ProtocolDeclarationContext* ObjectiveCParser::TopLevelDeclarationContext::protocolDeclaration() {
  return getRuleContext<ObjectiveCParser::ProtocolDeclarationContext>(0);
}

ObjectiveCParser::ProtocolDeclarationListContext* ObjectiveCParser::TopLevelDeclarationContext::protocolDeclarationList() {
  return getRuleContext<ObjectiveCParser::ProtocolDeclarationListContext>(0);
}

ObjectiveCParser::ClassDeclarationListContext* ObjectiveCParser::TopLevelDeclarationContext::classDeclarationList() {
  return getRuleContext<ObjectiveCParser::ClassDeclarationListContext>(0);
}

ObjectiveCParser::FunctionDefinitionContext* ObjectiveCParser::TopLevelDeclarationContext::functionDefinition() {
  return getRuleContext<ObjectiveCParser::FunctionDefinitionContext>(0);
}


size_t ObjectiveCParser::TopLevelDeclarationContext::getRuleIndex() const {
  return ObjectiveCParser::RuleTopLevelDeclaration;
}

void ObjectiveCParser::TopLevelDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTopLevelDeclaration(this);
}

void ObjectiveCParser::TopLevelDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTopLevelDeclaration(this);
}


antlrcpp::Any ObjectiveCParser::TopLevelDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitTopLevelDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::TopLevelDeclarationContext* ObjectiveCParser::topLevelDeclaration() {
  TopLevelDeclarationContext *_localctx = _tracker.createInstance<TopLevelDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, ObjectiveCParser::RuleTopLevelDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(307);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(296);
      importDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(297);
      functionDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(298);
      declaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(299);
      classInterface();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(300);
      classImplementation();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(301);
      categoryInterface();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(302);
      categoryImplementation();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(303);
      protocolDeclaration();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(304);
      protocolDeclarationList();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(305);
      classDeclarationList();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(306);
      functionDefinition();
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

//----------------- ImportDeclarationContext ------------------------------------------------------------------

ObjectiveCParser::ImportDeclarationContext::ImportDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::ImportDeclarationContext::IMPORT() {
  return getToken(ObjectiveCParser::IMPORT, 0);
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::ImportDeclarationContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::ImportDeclarationContext::SEMI() {
  return getToken(ObjectiveCParser::SEMI, 0);
}


size_t ObjectiveCParser::ImportDeclarationContext::getRuleIndex() const {
  return ObjectiveCParser::RuleImportDeclaration;
}

void ObjectiveCParser::ImportDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportDeclaration(this);
}

void ObjectiveCParser::ImportDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportDeclaration(this);
}


antlrcpp::Any ObjectiveCParser::ImportDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitImportDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ImportDeclarationContext* ObjectiveCParser::importDeclaration() {
  ImportDeclarationContext *_localctx = _tracker.createInstance<ImportDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, ObjectiveCParser::RuleImportDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(309);
    match(ObjectiveCParser::IMPORT);
    setState(310);
    identifier();
    setState(311);
    match(ObjectiveCParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassInterfaceContext ------------------------------------------------------------------

ObjectiveCParser::ClassInterfaceContext::ClassInterfaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::ClassInterfaceContext::INTERFACE() {
  return getToken(ObjectiveCParser::INTERFACE, 0);
}

tree::TerminalNode* ObjectiveCParser::ClassInterfaceContext::END() {
  return getToken(ObjectiveCParser::END, 0);
}

ObjectiveCParser::GenericTypeSpecifierContext* ObjectiveCParser::ClassInterfaceContext::genericTypeSpecifier() {
  return getRuleContext<ObjectiveCParser::GenericTypeSpecifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::ClassInterfaceContext::IB_DESIGNABLE() {
  return getToken(ObjectiveCParser::IB_DESIGNABLE, 0);
}

tree::TerminalNode* ObjectiveCParser::ClassInterfaceContext::COLON() {
  return getToken(ObjectiveCParser::COLON, 0);
}

tree::TerminalNode* ObjectiveCParser::ClassInterfaceContext::LT() {
  return getToken(ObjectiveCParser::LT, 0);
}

ObjectiveCParser::ProtocolListContext* ObjectiveCParser::ClassInterfaceContext::protocolList() {
  return getRuleContext<ObjectiveCParser::ProtocolListContext>(0);
}

tree::TerminalNode* ObjectiveCParser::ClassInterfaceContext::GT() {
  return getToken(ObjectiveCParser::GT, 0);
}

ObjectiveCParser::InstanceVariablesContext* ObjectiveCParser::ClassInterfaceContext::instanceVariables() {
  return getRuleContext<ObjectiveCParser::InstanceVariablesContext>(0);
}

ObjectiveCParser::InterfaceDeclarationListContext* ObjectiveCParser::ClassInterfaceContext::interfaceDeclarationList() {
  return getRuleContext<ObjectiveCParser::InterfaceDeclarationListContext>(0);
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::ClassInterfaceContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}


size_t ObjectiveCParser::ClassInterfaceContext::getRuleIndex() const {
  return ObjectiveCParser::RuleClassInterface;
}

void ObjectiveCParser::ClassInterfaceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassInterface(this);
}

void ObjectiveCParser::ClassInterfaceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassInterface(this);
}


antlrcpp::Any ObjectiveCParser::ClassInterfaceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitClassInterface(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ClassInterfaceContext* ObjectiveCParser::classInterface() {
  ClassInterfaceContext *_localctx = _tracker.createInstance<ClassInterfaceContext>(_ctx, getState());
  enterRule(_localctx, 6, ObjectiveCParser::RuleClassInterface);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(314);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::IB_DESIGNABLE) {
      setState(313);
      match(ObjectiveCParser::IB_DESIGNABLE);
    }
    setState(316);
    match(ObjectiveCParser::INTERFACE);
    setState(317);
    dynamic_cast<ClassInterfaceContext *>(_localctx)->className = genericTypeSpecifier();
    setState(320);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::COLON) {
      setState(318);
      match(ObjectiveCParser::COLON);
      setState(319);
      dynamic_cast<ClassInterfaceContext *>(_localctx)->superclassName = identifier();
    }
    setState(326);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::LT) {
      setState(322);
      match(ObjectiveCParser::LT);
      setState(323);
      protocolList();
      setState(324);
      match(ObjectiveCParser::GT);
    }
    setState(329);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::LBRACE) {
      setState(328);
      instanceVariables();
    }
    setState(332);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::AUTO)
      | (1ULL << ObjectiveCParser::CHAR)
      | (1ULL << ObjectiveCParser::CONST)
      | (1ULL << ObjectiveCParser::DOUBLE)
      | (1ULL << ObjectiveCParser::ENUM)
      | (1ULL << ObjectiveCParser::EXTERN)
      | (1ULL << ObjectiveCParser::FLOAT)
      | (1ULL << ObjectiveCParser::INLINE)
      | (1ULL << ObjectiveCParser::INT)
      | (1ULL << ObjectiveCParser::LONG)
      | (1ULL << ObjectiveCParser::REGISTER)
      | (1ULL << ObjectiveCParser::RESTRICT)
      | (1ULL << ObjectiveCParser::SHORT)
      | (1ULL << ObjectiveCParser::SIGNED)
      | (1ULL << ObjectiveCParser::STATIC)
      | (1ULL << ObjectiveCParser::STRUCT)
      | (1ULL << ObjectiveCParser::TYPEDEF)
      | (1ULL << ObjectiveCParser::UNION)
      | (1ULL << ObjectiveCParser::UNSIGNED)
      | (1ULL << ObjectiveCParser::VOID)
      | (1ULL << ObjectiveCParser::VOLATILE)
      | (1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (ObjectiveCParser::PROPERTY - 72))
      | (1ULL << (ObjectiveCParser::ATOMIC - 72))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 72))
      | (1ULL << (ObjectiveCParser::RETAIN - 72))
      | (1ULL << (ObjectiveCParser::ATTRIBUTE - 72))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 72))
      | (1ULL << (ObjectiveCParser::BLOCK - 72))
      | (1ULL << (ObjectiveCParser::BRIDGE - 72))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 72))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 72))
      | (1ULL << (ObjectiveCParser::COVARIANT - 72))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 72))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 72))
      | (1ULL << (ObjectiveCParser::KINDOF - 72))
      | (1ULL << (ObjectiveCParser::STRONG_QUALIFIER - 72))
      | (1ULL << (ObjectiveCParser::TYPEOF - 72))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED_QUALIFIER - 72))
      | (1ULL << (ObjectiveCParser::UNUSED - 72))
      | (1ULL << (ObjectiveCParser::WEAK_QUALIFIER - 72))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 72))
      | (1ULL << (ObjectiveCParser::NULLABLE - 72))
      | (1ULL << (ObjectiveCParser::NONNULL - 72))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 72))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 72))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 72))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 72))
      | (1ULL << (ObjectiveCParser::ASSIGN - 72))
      | (1ULL << (ObjectiveCParser::COPY - 72))
      | (1ULL << (ObjectiveCParser::GETTER - 72))
      | (1ULL << (ObjectiveCParser::SETTER - 72))
      | (1ULL << (ObjectiveCParser::STRONG - 72))
      | (1ULL << (ObjectiveCParser::READONLY - 72))
      | (1ULL << (ObjectiveCParser::READWRITE - 72))
      | (1ULL << (ObjectiveCParser::WEAK - 72))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 72))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 72))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 72))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 72))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 72))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 72)))) != 0) || _la == ObjectiveCParser::ADD

    || _la == ObjectiveCParser::SUB) {
      setState(331);
      interfaceDeclarationList();
    }
    setState(334);
    match(ObjectiveCParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CategoryInterfaceContext ------------------------------------------------------------------

ObjectiveCParser::CategoryInterfaceContext::CategoryInterfaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::CategoryInterfaceContext::INTERFACE() {
  return getToken(ObjectiveCParser::INTERFACE, 0);
}

tree::TerminalNode* ObjectiveCParser::CategoryInterfaceContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

tree::TerminalNode* ObjectiveCParser::CategoryInterfaceContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

tree::TerminalNode* ObjectiveCParser::CategoryInterfaceContext::END() {
  return getToken(ObjectiveCParser::END, 0);
}

ObjectiveCParser::GenericTypeSpecifierContext* ObjectiveCParser::CategoryInterfaceContext::genericTypeSpecifier() {
  return getRuleContext<ObjectiveCParser::GenericTypeSpecifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::CategoryInterfaceContext::LT() {
  return getToken(ObjectiveCParser::LT, 0);
}

ObjectiveCParser::ProtocolListContext* ObjectiveCParser::CategoryInterfaceContext::protocolList() {
  return getRuleContext<ObjectiveCParser::ProtocolListContext>(0);
}

tree::TerminalNode* ObjectiveCParser::CategoryInterfaceContext::GT() {
  return getToken(ObjectiveCParser::GT, 0);
}

ObjectiveCParser::InstanceVariablesContext* ObjectiveCParser::CategoryInterfaceContext::instanceVariables() {
  return getRuleContext<ObjectiveCParser::InstanceVariablesContext>(0);
}

ObjectiveCParser::InterfaceDeclarationListContext* ObjectiveCParser::CategoryInterfaceContext::interfaceDeclarationList() {
  return getRuleContext<ObjectiveCParser::InterfaceDeclarationListContext>(0);
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::CategoryInterfaceContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}


size_t ObjectiveCParser::CategoryInterfaceContext::getRuleIndex() const {
  return ObjectiveCParser::RuleCategoryInterface;
}

void ObjectiveCParser::CategoryInterfaceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCategoryInterface(this);
}

void ObjectiveCParser::CategoryInterfaceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCategoryInterface(this);
}


antlrcpp::Any ObjectiveCParser::CategoryInterfaceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitCategoryInterface(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::CategoryInterfaceContext* ObjectiveCParser::categoryInterface() {
  CategoryInterfaceContext *_localctx = _tracker.createInstance<CategoryInterfaceContext>(_ctx, getState());
  enterRule(_localctx, 8, ObjectiveCParser::RuleCategoryInterface);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(336);
    match(ObjectiveCParser::INTERFACE);
    setState(337);
    dynamic_cast<CategoryInterfaceContext *>(_localctx)->categoryName = genericTypeSpecifier();
    setState(338);
    match(ObjectiveCParser::LP);
    setState(340);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 81)) & ((1ULL << (ObjectiveCParser::ATOMIC - 81))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 81))
      | (1ULL << (ObjectiveCParser::RETAIN - 81))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 81))
      | (1ULL << (ObjectiveCParser::BLOCK - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 81))
      | (1ULL << (ObjectiveCParser::COVARIANT - 81))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 81))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 81))
      | (1ULL << (ObjectiveCParser::KINDOF - 81))
      | (1ULL << (ObjectiveCParser::UNUSED - 81))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 81))
      | (1ULL << (ObjectiveCParser::NULLABLE - 81))
      | (1ULL << (ObjectiveCParser::NONNULL - 81))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 81))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 81))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 81))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 81))
      | (1ULL << (ObjectiveCParser::ASSIGN - 81))
      | (1ULL << (ObjectiveCParser::COPY - 81))
      | (1ULL << (ObjectiveCParser::GETTER - 81))
      | (1ULL << (ObjectiveCParser::SETTER - 81))
      | (1ULL << (ObjectiveCParser::STRONG - 81))
      | (1ULL << (ObjectiveCParser::READONLY - 81))
      | (1ULL << (ObjectiveCParser::READWRITE - 81))
      | (1ULL << (ObjectiveCParser::WEAK - 81))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 81))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 81))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 81))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 81))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 81))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 81)))) != 0)) {
      setState(339);
      dynamic_cast<CategoryInterfaceContext *>(_localctx)->className = identifier();
    }
    setState(342);
    match(ObjectiveCParser::RP);
    setState(347);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::LT) {
      setState(343);
      match(ObjectiveCParser::LT);
      setState(344);
      protocolList();
      setState(345);
      match(ObjectiveCParser::GT);
    }
    setState(350);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::LBRACE) {
      setState(349);
      instanceVariables();
    }
    setState(353);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::AUTO)
      | (1ULL << ObjectiveCParser::CHAR)
      | (1ULL << ObjectiveCParser::CONST)
      | (1ULL << ObjectiveCParser::DOUBLE)
      | (1ULL << ObjectiveCParser::ENUM)
      | (1ULL << ObjectiveCParser::EXTERN)
      | (1ULL << ObjectiveCParser::FLOAT)
      | (1ULL << ObjectiveCParser::INLINE)
      | (1ULL << ObjectiveCParser::INT)
      | (1ULL << ObjectiveCParser::LONG)
      | (1ULL << ObjectiveCParser::REGISTER)
      | (1ULL << ObjectiveCParser::RESTRICT)
      | (1ULL << ObjectiveCParser::SHORT)
      | (1ULL << ObjectiveCParser::SIGNED)
      | (1ULL << ObjectiveCParser::STATIC)
      | (1ULL << ObjectiveCParser::STRUCT)
      | (1ULL << ObjectiveCParser::TYPEDEF)
      | (1ULL << ObjectiveCParser::UNION)
      | (1ULL << ObjectiveCParser::UNSIGNED)
      | (1ULL << ObjectiveCParser::VOID)
      | (1ULL << ObjectiveCParser::VOLATILE)
      | (1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (ObjectiveCParser::PROPERTY - 72))
      | (1ULL << (ObjectiveCParser::ATOMIC - 72))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 72))
      | (1ULL << (ObjectiveCParser::RETAIN - 72))
      | (1ULL << (ObjectiveCParser::ATTRIBUTE - 72))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 72))
      | (1ULL << (ObjectiveCParser::BLOCK - 72))
      | (1ULL << (ObjectiveCParser::BRIDGE - 72))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 72))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 72))
      | (1ULL << (ObjectiveCParser::COVARIANT - 72))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 72))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 72))
      | (1ULL << (ObjectiveCParser::KINDOF - 72))
      | (1ULL << (ObjectiveCParser::STRONG_QUALIFIER - 72))
      | (1ULL << (ObjectiveCParser::TYPEOF - 72))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED_QUALIFIER - 72))
      | (1ULL << (ObjectiveCParser::UNUSED - 72))
      | (1ULL << (ObjectiveCParser::WEAK_QUALIFIER - 72))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 72))
      | (1ULL << (ObjectiveCParser::NULLABLE - 72))
      | (1ULL << (ObjectiveCParser::NONNULL - 72))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 72))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 72))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 72))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 72))
      | (1ULL << (ObjectiveCParser::ASSIGN - 72))
      | (1ULL << (ObjectiveCParser::COPY - 72))
      | (1ULL << (ObjectiveCParser::GETTER - 72))
      | (1ULL << (ObjectiveCParser::SETTER - 72))
      | (1ULL << (ObjectiveCParser::STRONG - 72))
      | (1ULL << (ObjectiveCParser::READONLY - 72))
      | (1ULL << (ObjectiveCParser::READWRITE - 72))
      | (1ULL << (ObjectiveCParser::WEAK - 72))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 72))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 72))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 72))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 72))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 72))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 72)))) != 0) || _la == ObjectiveCParser::ADD

    || _la == ObjectiveCParser::SUB) {
      setState(352);
      interfaceDeclarationList();
    }
    setState(355);
    match(ObjectiveCParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassImplementationContext ------------------------------------------------------------------

ObjectiveCParser::ClassImplementationContext::ClassImplementationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::ClassImplementationContext::IMPLEMENTATION() {
  return getToken(ObjectiveCParser::IMPLEMENTATION, 0);
}

tree::TerminalNode* ObjectiveCParser::ClassImplementationContext::END() {
  return getToken(ObjectiveCParser::END, 0);
}

ObjectiveCParser::GenericTypeSpecifierContext* ObjectiveCParser::ClassImplementationContext::genericTypeSpecifier() {
  return getRuleContext<ObjectiveCParser::GenericTypeSpecifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::ClassImplementationContext::COLON() {
  return getToken(ObjectiveCParser::COLON, 0);
}

ObjectiveCParser::InstanceVariablesContext* ObjectiveCParser::ClassImplementationContext::instanceVariables() {
  return getRuleContext<ObjectiveCParser::InstanceVariablesContext>(0);
}

ObjectiveCParser::ImplementationDefinitionListContext* ObjectiveCParser::ClassImplementationContext::implementationDefinitionList() {
  return getRuleContext<ObjectiveCParser::ImplementationDefinitionListContext>(0);
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::ClassImplementationContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}


size_t ObjectiveCParser::ClassImplementationContext::getRuleIndex() const {
  return ObjectiveCParser::RuleClassImplementation;
}

void ObjectiveCParser::ClassImplementationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassImplementation(this);
}

void ObjectiveCParser::ClassImplementationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassImplementation(this);
}


antlrcpp::Any ObjectiveCParser::ClassImplementationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitClassImplementation(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ClassImplementationContext* ObjectiveCParser::classImplementation() {
  ClassImplementationContext *_localctx = _tracker.createInstance<ClassImplementationContext>(_ctx, getState());
  enterRule(_localctx, 10, ObjectiveCParser::RuleClassImplementation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(357);
    match(ObjectiveCParser::IMPLEMENTATION);
    setState(358);
    dynamic_cast<ClassImplementationContext *>(_localctx)->className = genericTypeSpecifier();
    setState(361);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::COLON) {
      setState(359);
      match(ObjectiveCParser::COLON);
      setState(360);
      dynamic_cast<ClassImplementationContext *>(_localctx)->superclassName = identifier();
    }
    setState(364);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::LBRACE) {
      setState(363);
      instanceVariables();
    }
    setState(367);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::AUTO)
      | (1ULL << ObjectiveCParser::CHAR)
      | (1ULL << ObjectiveCParser::CONST)
      | (1ULL << ObjectiveCParser::DOUBLE)
      | (1ULL << ObjectiveCParser::ENUM)
      | (1ULL << ObjectiveCParser::EXTERN)
      | (1ULL << ObjectiveCParser::FLOAT)
      | (1ULL << ObjectiveCParser::INLINE)
      | (1ULL << ObjectiveCParser::INT)
      | (1ULL << ObjectiveCParser::LONG)
      | (1ULL << ObjectiveCParser::REGISTER)
      | (1ULL << ObjectiveCParser::RESTRICT)
      | (1ULL << ObjectiveCParser::SHORT)
      | (1ULL << ObjectiveCParser::SIGNED)
      | (1ULL << ObjectiveCParser::STATIC)
      | (1ULL << ObjectiveCParser::STRUCT)
      | (1ULL << ObjectiveCParser::TYPEDEF)
      | (1ULL << ObjectiveCParser::UNION)
      | (1ULL << ObjectiveCParser::UNSIGNED)
      | (1ULL << ObjectiveCParser::VOID)
      | (1ULL << ObjectiveCParser::VOLATILE)
      | (1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER)
      | (1ULL << ObjectiveCParser::DYNAMIC))) != 0) || ((((_la - 78) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 78)) & ((1ULL << (ObjectiveCParser::SYNTHESIZE - 78))
      | (1ULL << (ObjectiveCParser::ATOMIC - 78))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 78))
      | (1ULL << (ObjectiveCParser::RETAIN - 78))
      | (1ULL << (ObjectiveCParser::ATTRIBUTE - 78))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 78))
      | (1ULL << (ObjectiveCParser::BLOCK - 78))
      | (1ULL << (ObjectiveCParser::BRIDGE - 78))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 78))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 78))
      | (1ULL << (ObjectiveCParser::COVARIANT - 78))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 78))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 78))
      | (1ULL << (ObjectiveCParser::KINDOF - 78))
      | (1ULL << (ObjectiveCParser::STRONG_QUALIFIER - 78))
      | (1ULL << (ObjectiveCParser::TYPEOF - 78))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED_QUALIFIER - 78))
      | (1ULL << (ObjectiveCParser::UNUSED - 78))
      | (1ULL << (ObjectiveCParser::WEAK_QUALIFIER - 78))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 78))
      | (1ULL << (ObjectiveCParser::NULLABLE - 78))
      | (1ULL << (ObjectiveCParser::NONNULL - 78))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 78))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 78))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 78))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 78))
      | (1ULL << (ObjectiveCParser::ASSIGN - 78))
      | (1ULL << (ObjectiveCParser::COPY - 78))
      | (1ULL << (ObjectiveCParser::GETTER - 78))
      | (1ULL << (ObjectiveCParser::SETTER - 78))
      | (1ULL << (ObjectiveCParser::STRONG - 78))
      | (1ULL << (ObjectiveCParser::READONLY - 78))
      | (1ULL << (ObjectiveCParser::READWRITE - 78))
      | (1ULL << (ObjectiveCParser::WEAK - 78))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 78))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 78))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 78))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 78))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 78))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 78)))) != 0) || _la == ObjectiveCParser::ADD

    || _la == ObjectiveCParser::SUB) {
      setState(366);
      implementationDefinitionList();
    }
    setState(369);
    match(ObjectiveCParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CategoryImplementationContext ------------------------------------------------------------------

ObjectiveCParser::CategoryImplementationContext::CategoryImplementationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::CategoryImplementationContext::IMPLEMENTATION() {
  return getToken(ObjectiveCParser::IMPLEMENTATION, 0);
}

tree::TerminalNode* ObjectiveCParser::CategoryImplementationContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

tree::TerminalNode* ObjectiveCParser::CategoryImplementationContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

tree::TerminalNode* ObjectiveCParser::CategoryImplementationContext::END() {
  return getToken(ObjectiveCParser::END, 0);
}

ObjectiveCParser::GenericTypeSpecifierContext* ObjectiveCParser::CategoryImplementationContext::genericTypeSpecifier() {
  return getRuleContext<ObjectiveCParser::GenericTypeSpecifierContext>(0);
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::CategoryImplementationContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}

ObjectiveCParser::ImplementationDefinitionListContext* ObjectiveCParser::CategoryImplementationContext::implementationDefinitionList() {
  return getRuleContext<ObjectiveCParser::ImplementationDefinitionListContext>(0);
}


size_t ObjectiveCParser::CategoryImplementationContext::getRuleIndex() const {
  return ObjectiveCParser::RuleCategoryImplementation;
}

void ObjectiveCParser::CategoryImplementationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCategoryImplementation(this);
}

void ObjectiveCParser::CategoryImplementationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCategoryImplementation(this);
}


antlrcpp::Any ObjectiveCParser::CategoryImplementationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitCategoryImplementation(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::CategoryImplementationContext* ObjectiveCParser::categoryImplementation() {
  CategoryImplementationContext *_localctx = _tracker.createInstance<CategoryImplementationContext>(_ctx, getState());
  enterRule(_localctx, 12, ObjectiveCParser::RuleCategoryImplementation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(371);
    match(ObjectiveCParser::IMPLEMENTATION);
    setState(372);
    dynamic_cast<CategoryImplementationContext *>(_localctx)->categoryName = genericTypeSpecifier();
    setState(373);
    match(ObjectiveCParser::LP);
    setState(374);
    dynamic_cast<CategoryImplementationContext *>(_localctx)->className = identifier();
    setState(375);
    match(ObjectiveCParser::RP);
    setState(377);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::AUTO)
      | (1ULL << ObjectiveCParser::CHAR)
      | (1ULL << ObjectiveCParser::CONST)
      | (1ULL << ObjectiveCParser::DOUBLE)
      | (1ULL << ObjectiveCParser::ENUM)
      | (1ULL << ObjectiveCParser::EXTERN)
      | (1ULL << ObjectiveCParser::FLOAT)
      | (1ULL << ObjectiveCParser::INLINE)
      | (1ULL << ObjectiveCParser::INT)
      | (1ULL << ObjectiveCParser::LONG)
      | (1ULL << ObjectiveCParser::REGISTER)
      | (1ULL << ObjectiveCParser::RESTRICT)
      | (1ULL << ObjectiveCParser::SHORT)
      | (1ULL << ObjectiveCParser::SIGNED)
      | (1ULL << ObjectiveCParser::STATIC)
      | (1ULL << ObjectiveCParser::STRUCT)
      | (1ULL << ObjectiveCParser::TYPEDEF)
      | (1ULL << ObjectiveCParser::UNION)
      | (1ULL << ObjectiveCParser::UNSIGNED)
      | (1ULL << ObjectiveCParser::VOID)
      | (1ULL << ObjectiveCParser::VOLATILE)
      | (1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER)
      | (1ULL << ObjectiveCParser::DYNAMIC))) != 0) || ((((_la - 78) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 78)) & ((1ULL << (ObjectiveCParser::SYNTHESIZE - 78))
      | (1ULL << (ObjectiveCParser::ATOMIC - 78))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 78))
      | (1ULL << (ObjectiveCParser::RETAIN - 78))
      | (1ULL << (ObjectiveCParser::ATTRIBUTE - 78))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 78))
      | (1ULL << (ObjectiveCParser::BLOCK - 78))
      | (1ULL << (ObjectiveCParser::BRIDGE - 78))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 78))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 78))
      | (1ULL << (ObjectiveCParser::COVARIANT - 78))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 78))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 78))
      | (1ULL << (ObjectiveCParser::KINDOF - 78))
      | (1ULL << (ObjectiveCParser::STRONG_QUALIFIER - 78))
      | (1ULL << (ObjectiveCParser::TYPEOF - 78))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED_QUALIFIER - 78))
      | (1ULL << (ObjectiveCParser::UNUSED - 78))
      | (1ULL << (ObjectiveCParser::WEAK_QUALIFIER - 78))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 78))
      | (1ULL << (ObjectiveCParser::NULLABLE - 78))
      | (1ULL << (ObjectiveCParser::NONNULL - 78))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 78))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 78))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 78))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 78))
      | (1ULL << (ObjectiveCParser::ASSIGN - 78))
      | (1ULL << (ObjectiveCParser::COPY - 78))
      | (1ULL << (ObjectiveCParser::GETTER - 78))
      | (1ULL << (ObjectiveCParser::SETTER - 78))
      | (1ULL << (ObjectiveCParser::STRONG - 78))
      | (1ULL << (ObjectiveCParser::READONLY - 78))
      | (1ULL << (ObjectiveCParser::READWRITE - 78))
      | (1ULL << (ObjectiveCParser::WEAK - 78))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 78))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 78))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 78))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 78))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 78))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 78)))) != 0) || _la == ObjectiveCParser::ADD

    || _la == ObjectiveCParser::SUB) {
      setState(376);
      implementationDefinitionList();
    }
    setState(379);
    match(ObjectiveCParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericTypeSpecifierContext ------------------------------------------------------------------

ObjectiveCParser::GenericTypeSpecifierContext::GenericTypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::GenericTypeSpecifierContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}

ObjectiveCParser::GenericsSpecifierContext* ObjectiveCParser::GenericTypeSpecifierContext::genericsSpecifier() {
  return getRuleContext<ObjectiveCParser::GenericsSpecifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::GenericTypeSpecifierContext::LT() {
  return getToken(ObjectiveCParser::LT, 0);
}

ObjectiveCParser::ProtocolListContext* ObjectiveCParser::GenericTypeSpecifierContext::protocolList() {
  return getRuleContext<ObjectiveCParser::ProtocolListContext>(0);
}

tree::TerminalNode* ObjectiveCParser::GenericTypeSpecifierContext::GT() {
  return getToken(ObjectiveCParser::GT, 0);
}


size_t ObjectiveCParser::GenericTypeSpecifierContext::getRuleIndex() const {
  return ObjectiveCParser::RuleGenericTypeSpecifier;
}

void ObjectiveCParser::GenericTypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericTypeSpecifier(this);
}

void ObjectiveCParser::GenericTypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericTypeSpecifier(this);
}


antlrcpp::Any ObjectiveCParser::GenericTypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitGenericTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::GenericTypeSpecifierContext* ObjectiveCParser::genericTypeSpecifier() {
  GenericTypeSpecifierContext *_localctx = _tracker.createInstance<GenericTypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 14, ObjectiveCParser::RuleGenericTypeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(381);
    identifier();
    setState(387);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      setState(382);
      match(ObjectiveCParser::LT);
      setState(383);
      protocolList();
      setState(384);
      match(ObjectiveCParser::GT);
      break;
    }

    case 2: {
      setState(386);
      genericsSpecifier();
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

//----------------- ProtocolDeclarationContext ------------------------------------------------------------------

ObjectiveCParser::ProtocolDeclarationContext::ProtocolDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::ProtocolDeclarationContext::PROTOCOL() {
  return getToken(ObjectiveCParser::PROTOCOL, 0);
}

ObjectiveCParser::ProtocolNameContext* ObjectiveCParser::ProtocolDeclarationContext::protocolName() {
  return getRuleContext<ObjectiveCParser::ProtocolNameContext>(0);
}

tree::TerminalNode* ObjectiveCParser::ProtocolDeclarationContext::END() {
  return getToken(ObjectiveCParser::END, 0);
}

tree::TerminalNode* ObjectiveCParser::ProtocolDeclarationContext::LT() {
  return getToken(ObjectiveCParser::LT, 0);
}

ObjectiveCParser::ProtocolListContext* ObjectiveCParser::ProtocolDeclarationContext::protocolList() {
  return getRuleContext<ObjectiveCParser::ProtocolListContext>(0);
}

tree::TerminalNode* ObjectiveCParser::ProtocolDeclarationContext::GT() {
  return getToken(ObjectiveCParser::GT, 0);
}

std::vector<ObjectiveCParser::ProtocolDeclarationSectionContext *> ObjectiveCParser::ProtocolDeclarationContext::protocolDeclarationSection() {
  return getRuleContexts<ObjectiveCParser::ProtocolDeclarationSectionContext>();
}

ObjectiveCParser::ProtocolDeclarationSectionContext* ObjectiveCParser::ProtocolDeclarationContext::protocolDeclarationSection(size_t i) {
  return getRuleContext<ObjectiveCParser::ProtocolDeclarationSectionContext>(i);
}


size_t ObjectiveCParser::ProtocolDeclarationContext::getRuleIndex() const {
  return ObjectiveCParser::RuleProtocolDeclaration;
}

void ObjectiveCParser::ProtocolDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProtocolDeclaration(this);
}

void ObjectiveCParser::ProtocolDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProtocolDeclaration(this);
}


antlrcpp::Any ObjectiveCParser::ProtocolDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitProtocolDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ProtocolDeclarationContext* ObjectiveCParser::protocolDeclaration() {
  ProtocolDeclarationContext *_localctx = _tracker.createInstance<ProtocolDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 16, ObjectiveCParser::RuleProtocolDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(389);
    match(ObjectiveCParser::PROTOCOL);
    setState(390);
    protocolName();
    setState(395);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::LT) {
      setState(391);
      match(ObjectiveCParser::LT);
      setState(392);
      protocolList();
      setState(393);
      match(ObjectiveCParser::GT);
    }
    setState(400);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::AUTO)
      | (1ULL << ObjectiveCParser::CHAR)
      | (1ULL << ObjectiveCParser::CONST)
      | (1ULL << ObjectiveCParser::DOUBLE)
      | (1ULL << ObjectiveCParser::ENUM)
      | (1ULL << ObjectiveCParser::EXTERN)
      | (1ULL << ObjectiveCParser::FLOAT)
      | (1ULL << ObjectiveCParser::INLINE)
      | (1ULL << ObjectiveCParser::INT)
      | (1ULL << ObjectiveCParser::LONG)
      | (1ULL << ObjectiveCParser::REGISTER)
      | (1ULL << ObjectiveCParser::RESTRICT)
      | (1ULL << ObjectiveCParser::SHORT)
      | (1ULL << ObjectiveCParser::SIGNED)
      | (1ULL << ObjectiveCParser::STATIC)
      | (1ULL << ObjectiveCParser::STRUCT)
      | (1ULL << ObjectiveCParser::TYPEDEF)
      | (1ULL << ObjectiveCParser::UNION)
      | (1ULL << ObjectiveCParser::UNSIGNED)
      | (1ULL << ObjectiveCParser::VOID)
      | (1ULL << ObjectiveCParser::VOLATILE)
      | (1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & ((1ULL << (ObjectiveCParser::OPTIONAL - 70))
      | (1ULL << (ObjectiveCParser::PROPERTY - 70))
      | (1ULL << (ObjectiveCParser::REQUIRED - 70))
      | (1ULL << (ObjectiveCParser::ATOMIC - 70))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 70))
      | (1ULL << (ObjectiveCParser::RETAIN - 70))
      | (1ULL << (ObjectiveCParser::ATTRIBUTE - 70))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 70))
      | (1ULL << (ObjectiveCParser::BLOCK - 70))
      | (1ULL << (ObjectiveCParser::BRIDGE - 70))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 70))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 70))
      | (1ULL << (ObjectiveCParser::COVARIANT - 70))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 70))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 70))
      | (1ULL << (ObjectiveCParser::KINDOF - 70))
      | (1ULL << (ObjectiveCParser::STRONG_QUALIFIER - 70))
      | (1ULL << (ObjectiveCParser::TYPEOF - 70))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED_QUALIFIER - 70))
      | (1ULL << (ObjectiveCParser::UNUSED - 70))
      | (1ULL << (ObjectiveCParser::WEAK_QUALIFIER - 70))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 70))
      | (1ULL << (ObjectiveCParser::NULLABLE - 70))
      | (1ULL << (ObjectiveCParser::NONNULL - 70))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 70))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 70))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 70))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 70))
      | (1ULL << (ObjectiveCParser::ASSIGN - 70))
      | (1ULL << (ObjectiveCParser::COPY - 70))
      | (1ULL << (ObjectiveCParser::GETTER - 70))
      | (1ULL << (ObjectiveCParser::SETTER - 70))
      | (1ULL << (ObjectiveCParser::STRONG - 70))
      | (1ULL << (ObjectiveCParser::READONLY - 70))
      | (1ULL << (ObjectiveCParser::READWRITE - 70))
      | (1ULL << (ObjectiveCParser::WEAK - 70))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 70))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 70))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 70))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 70))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 70))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 70)))) != 0) || _la == ObjectiveCParser::ADD

    || _la == ObjectiveCParser::SUB) {
      setState(397);
      protocolDeclarationSection();
      setState(402);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(403);
    match(ObjectiveCParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProtocolDeclarationSectionContext ------------------------------------------------------------------

ObjectiveCParser::ProtocolDeclarationSectionContext::ProtocolDeclarationSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::ProtocolDeclarationSectionContext::REQUIRED() {
  return getToken(ObjectiveCParser::REQUIRED, 0);
}

tree::TerminalNode* ObjectiveCParser::ProtocolDeclarationSectionContext::OPTIONAL() {
  return getToken(ObjectiveCParser::OPTIONAL, 0);
}

std::vector<ObjectiveCParser::InterfaceDeclarationListContext *> ObjectiveCParser::ProtocolDeclarationSectionContext::interfaceDeclarationList() {
  return getRuleContexts<ObjectiveCParser::InterfaceDeclarationListContext>();
}

ObjectiveCParser::InterfaceDeclarationListContext* ObjectiveCParser::ProtocolDeclarationSectionContext::interfaceDeclarationList(size_t i) {
  return getRuleContext<ObjectiveCParser::InterfaceDeclarationListContext>(i);
}


size_t ObjectiveCParser::ProtocolDeclarationSectionContext::getRuleIndex() const {
  return ObjectiveCParser::RuleProtocolDeclarationSection;
}

void ObjectiveCParser::ProtocolDeclarationSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProtocolDeclarationSection(this);
}

void ObjectiveCParser::ProtocolDeclarationSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProtocolDeclarationSection(this);
}


antlrcpp::Any ObjectiveCParser::ProtocolDeclarationSectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitProtocolDeclarationSection(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ProtocolDeclarationSectionContext* ObjectiveCParser::protocolDeclarationSection() {
  ProtocolDeclarationSectionContext *_localctx = _tracker.createInstance<ProtocolDeclarationSectionContext>(_ctx, getState());
  enterRule(_localctx, 18, ObjectiveCParser::RuleProtocolDeclarationSection);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(417);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ObjectiveCParser::OPTIONAL:
      case ObjectiveCParser::REQUIRED: {
        enterOuterAlt(_localctx, 1);
        setState(405);
        dynamic_cast<ProtocolDeclarationSectionContext *>(_localctx)->modifier = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == ObjectiveCParser::OPTIONAL

        || _la == ObjectiveCParser::REQUIRED)) {
          dynamic_cast<ProtocolDeclarationSectionContext *>(_localctx)->modifier = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(409);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(406);
            interfaceDeclarationList(); 
          }
          setState(411);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
        }
        break;
      }

      case ObjectiveCParser::AUTO:
      case ObjectiveCParser::CHAR:
      case ObjectiveCParser::CONST:
      case ObjectiveCParser::DOUBLE:
      case ObjectiveCParser::ENUM:
      case ObjectiveCParser::EXTERN:
      case ObjectiveCParser::FLOAT:
      case ObjectiveCParser::INLINE:
      case ObjectiveCParser::INT:
      case ObjectiveCParser::LONG:
      case ObjectiveCParser::REGISTER:
      case ObjectiveCParser::RESTRICT:
      case ObjectiveCParser::SHORT:
      case ObjectiveCParser::SIGNED:
      case ObjectiveCParser::STATIC:
      case ObjectiveCParser::STRUCT:
      case ObjectiveCParser::TYPEDEF:
      case ObjectiveCParser::UNION:
      case ObjectiveCParser::UNSIGNED:
      case ObjectiveCParser::VOID:
      case ObjectiveCParser::VOLATILE:
      case ObjectiveCParser::BOOL:
      case ObjectiveCParser::Class:
      case ObjectiveCParser::BYCOPY:
      case ObjectiveCParser::BYREF:
      case ObjectiveCParser::ID:
      case ObjectiveCParser::IMP:
      case ObjectiveCParser::IN:
      case ObjectiveCParser::INOUT:
      case ObjectiveCParser::ONEWAY:
      case ObjectiveCParser::OUT:
      case ObjectiveCParser::PROTOCOL_:
      case ObjectiveCParser::SEL:
      case ObjectiveCParser::SELF:
      case ObjectiveCParser::SUPER:
      case ObjectiveCParser::PROPERTY:
      case ObjectiveCParser::ATOMIC:
      case ObjectiveCParser::NONATOMIC:
      case ObjectiveCParser::RETAIN:
      case ObjectiveCParser::ATTRIBUTE:
      case ObjectiveCParser::AUTORELEASING_QUALIFIER:
      case ObjectiveCParser::BLOCK:
      case ObjectiveCParser::BRIDGE:
      case ObjectiveCParser::BRIDGE_RETAINED:
      case ObjectiveCParser::BRIDGE_TRANSFER:
      case ObjectiveCParser::COVARIANT:
      case ObjectiveCParser::CONTRAVARIANT:
      case ObjectiveCParser::DEPRECATED:
      case ObjectiveCParser::KINDOF:
      case ObjectiveCParser::STRONG_QUALIFIER:
      case ObjectiveCParser::TYPEOF:
      case ObjectiveCParser::UNSAFE_UNRETAINED_QUALIFIER:
      case ObjectiveCParser::UNUSED:
      case ObjectiveCParser::WEAK_QUALIFIER:
      case ObjectiveCParser::NULL_UNSPECIFIED:
      case ObjectiveCParser::NULLABLE:
      case ObjectiveCParser::NONNULL:
      case ObjectiveCParser::NULL_RESETTABLE:
      case ObjectiveCParser::NS_INLINE:
      case ObjectiveCParser::NS_ENUM:
      case ObjectiveCParser::NS_OPTIONS:
      case ObjectiveCParser::ASSIGN:
      case ObjectiveCParser::COPY:
      case ObjectiveCParser::GETTER:
      case ObjectiveCParser::SETTER:
      case ObjectiveCParser::STRONG:
      case ObjectiveCParser::READONLY:
      case ObjectiveCParser::READWRITE:
      case ObjectiveCParser::WEAK:
      case ObjectiveCParser::UNSAFE_UNRETAINED:
      case ObjectiveCParser::IB_OUTLET:
      case ObjectiveCParser::IB_OUTLET_COLLECTION:
      case ObjectiveCParser::IB_INSPECTABLE:
      case ObjectiveCParser::IB_DESIGNABLE:
      case ObjectiveCParser::IDENTIFIER:
      case ObjectiveCParser::ADD:
      case ObjectiveCParser::SUB: {
        enterOuterAlt(_localctx, 2);
        setState(413); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(412);
                  interfaceDeclarationList();
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(415); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
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

//----------------- ProtocolDeclarationListContext ------------------------------------------------------------------

ObjectiveCParser::ProtocolDeclarationListContext::ProtocolDeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::ProtocolDeclarationListContext::PROTOCOL() {
  return getToken(ObjectiveCParser::PROTOCOL, 0);
}

ObjectiveCParser::ProtocolListContext* ObjectiveCParser::ProtocolDeclarationListContext::protocolList() {
  return getRuleContext<ObjectiveCParser::ProtocolListContext>(0);
}

tree::TerminalNode* ObjectiveCParser::ProtocolDeclarationListContext::SEMI() {
  return getToken(ObjectiveCParser::SEMI, 0);
}


size_t ObjectiveCParser::ProtocolDeclarationListContext::getRuleIndex() const {
  return ObjectiveCParser::RuleProtocolDeclarationList;
}

void ObjectiveCParser::ProtocolDeclarationListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProtocolDeclarationList(this);
}

void ObjectiveCParser::ProtocolDeclarationListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProtocolDeclarationList(this);
}


antlrcpp::Any ObjectiveCParser::ProtocolDeclarationListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitProtocolDeclarationList(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ProtocolDeclarationListContext* ObjectiveCParser::protocolDeclarationList() {
  ProtocolDeclarationListContext *_localctx = _tracker.createInstance<ProtocolDeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 20, ObjectiveCParser::RuleProtocolDeclarationList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(419);
    match(ObjectiveCParser::PROTOCOL);
    setState(420);
    protocolList();
    setState(421);
    match(ObjectiveCParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDeclarationListContext ------------------------------------------------------------------

ObjectiveCParser::ClassDeclarationListContext::ClassDeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::ClassDeclarationListContext::CLASS() {
  return getToken(ObjectiveCParser::CLASS, 0);
}

std::vector<ObjectiveCParser::IdentifierContext *> ObjectiveCParser::ClassDeclarationListContext::identifier() {
  return getRuleContexts<ObjectiveCParser::IdentifierContext>();
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::ClassDeclarationListContext::identifier(size_t i) {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(i);
}

tree::TerminalNode* ObjectiveCParser::ClassDeclarationListContext::SEMI() {
  return getToken(ObjectiveCParser::SEMI, 0);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::ClassDeclarationListContext::COMMA() {
  return getTokens(ObjectiveCParser::COMMA);
}

tree::TerminalNode* ObjectiveCParser::ClassDeclarationListContext::COMMA(size_t i) {
  return getToken(ObjectiveCParser::COMMA, i);
}


size_t ObjectiveCParser::ClassDeclarationListContext::getRuleIndex() const {
  return ObjectiveCParser::RuleClassDeclarationList;
}

void ObjectiveCParser::ClassDeclarationListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDeclarationList(this);
}

void ObjectiveCParser::ClassDeclarationListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDeclarationList(this);
}


antlrcpp::Any ObjectiveCParser::ClassDeclarationListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitClassDeclarationList(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ClassDeclarationListContext* ObjectiveCParser::classDeclarationList() {
  ClassDeclarationListContext *_localctx = _tracker.createInstance<ClassDeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 22, ObjectiveCParser::RuleClassDeclarationList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(423);
    match(ObjectiveCParser::CLASS);
    setState(424);
    identifier();
    setState(429);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ObjectiveCParser::COMMA) {
      setState(425);
      match(ObjectiveCParser::COMMA);
      setState(426);
      identifier();
      setState(431);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(432);
    match(ObjectiveCParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProtocolListContext ------------------------------------------------------------------

ObjectiveCParser::ProtocolListContext::ProtocolListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ObjectiveCParser::ProtocolNameContext *> ObjectiveCParser::ProtocolListContext::protocolName() {
  return getRuleContexts<ObjectiveCParser::ProtocolNameContext>();
}

ObjectiveCParser::ProtocolNameContext* ObjectiveCParser::ProtocolListContext::protocolName(size_t i) {
  return getRuleContext<ObjectiveCParser::ProtocolNameContext>(i);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::ProtocolListContext::COMMA() {
  return getTokens(ObjectiveCParser::COMMA);
}

tree::TerminalNode* ObjectiveCParser::ProtocolListContext::COMMA(size_t i) {
  return getToken(ObjectiveCParser::COMMA, i);
}


size_t ObjectiveCParser::ProtocolListContext::getRuleIndex() const {
  return ObjectiveCParser::RuleProtocolList;
}

void ObjectiveCParser::ProtocolListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProtocolList(this);
}

void ObjectiveCParser::ProtocolListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProtocolList(this);
}


antlrcpp::Any ObjectiveCParser::ProtocolListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitProtocolList(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ProtocolListContext* ObjectiveCParser::protocolList() {
  ProtocolListContext *_localctx = _tracker.createInstance<ProtocolListContext>(_ctx, getState());
  enterRule(_localctx, 24, ObjectiveCParser::RuleProtocolList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434);
    protocolName();
    setState(439);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ObjectiveCParser::COMMA) {
      setState(435);
      match(ObjectiveCParser::COMMA);
      setState(436);
      protocolName();
      setState(441);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyDeclarationContext ------------------------------------------------------------------

ObjectiveCParser::PropertyDeclarationContext::PropertyDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::PropertyDeclarationContext::PROPERTY() {
  return getToken(ObjectiveCParser::PROPERTY, 0);
}

ObjectiveCParser::FieldDeclarationContext* ObjectiveCParser::PropertyDeclarationContext::fieldDeclaration() {
  return getRuleContext<ObjectiveCParser::FieldDeclarationContext>(0);
}

tree::TerminalNode* ObjectiveCParser::PropertyDeclarationContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

ObjectiveCParser::PropertyAttributesListContext* ObjectiveCParser::PropertyDeclarationContext::propertyAttributesList() {
  return getRuleContext<ObjectiveCParser::PropertyAttributesListContext>(0);
}

tree::TerminalNode* ObjectiveCParser::PropertyDeclarationContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

ObjectiveCParser::IbOutletQualifierContext* ObjectiveCParser::PropertyDeclarationContext::ibOutletQualifier() {
  return getRuleContext<ObjectiveCParser::IbOutletQualifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::PropertyDeclarationContext::IB_INSPECTABLE() {
  return getToken(ObjectiveCParser::IB_INSPECTABLE, 0);
}


size_t ObjectiveCParser::PropertyDeclarationContext::getRuleIndex() const {
  return ObjectiveCParser::RulePropertyDeclaration;
}

void ObjectiveCParser::PropertyDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyDeclaration(this);
}

void ObjectiveCParser::PropertyDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyDeclaration(this);
}


antlrcpp::Any ObjectiveCParser::PropertyDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitPropertyDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::PropertyDeclarationContext* ObjectiveCParser::propertyDeclaration() {
  PropertyDeclarationContext *_localctx = _tracker.createInstance<PropertyDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 26, ObjectiveCParser::RulePropertyDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(442);
    match(ObjectiveCParser::PROPERTY);
    setState(447);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::LP) {
      setState(443);
      match(ObjectiveCParser::LP);
      setState(444);
      propertyAttributesList();
      setState(445);
      match(ObjectiveCParser::RP);
    }
    setState(450);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      setState(449);
      ibOutletQualifier();
      break;
    }

    }
    setState(453);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      setState(452);
      match(ObjectiveCParser::IB_INSPECTABLE);
      break;
    }

    }
    setState(455);
    fieldDeclaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyAttributesListContext ------------------------------------------------------------------

ObjectiveCParser::PropertyAttributesListContext::PropertyAttributesListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ObjectiveCParser::PropertyAttributeContext *> ObjectiveCParser::PropertyAttributesListContext::propertyAttribute() {
  return getRuleContexts<ObjectiveCParser::PropertyAttributeContext>();
}

ObjectiveCParser::PropertyAttributeContext* ObjectiveCParser::PropertyAttributesListContext::propertyAttribute(size_t i) {
  return getRuleContext<ObjectiveCParser::PropertyAttributeContext>(i);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::PropertyAttributesListContext::COMMA() {
  return getTokens(ObjectiveCParser::COMMA);
}

tree::TerminalNode* ObjectiveCParser::PropertyAttributesListContext::COMMA(size_t i) {
  return getToken(ObjectiveCParser::COMMA, i);
}


size_t ObjectiveCParser::PropertyAttributesListContext::getRuleIndex() const {
  return ObjectiveCParser::RulePropertyAttributesList;
}

void ObjectiveCParser::PropertyAttributesListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyAttributesList(this);
}

void ObjectiveCParser::PropertyAttributesListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyAttributesList(this);
}


antlrcpp::Any ObjectiveCParser::PropertyAttributesListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitPropertyAttributesList(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::PropertyAttributesListContext* ObjectiveCParser::propertyAttributesList() {
  PropertyAttributesListContext *_localctx = _tracker.createInstance<PropertyAttributesListContext>(_ctx, getState());
  enterRule(_localctx, 28, ObjectiveCParser::RulePropertyAttributesList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(457);
    propertyAttribute();
    setState(462);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ObjectiveCParser::COMMA) {
      setState(458);
      match(ObjectiveCParser::COMMA);
      setState(459);
      propertyAttribute();
      setState(464);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyAttributeContext ------------------------------------------------------------------

ObjectiveCParser::PropertyAttributeContext::PropertyAttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::PropertyAttributeContext::ATOMIC() {
  return getToken(ObjectiveCParser::ATOMIC, 0);
}

tree::TerminalNode* ObjectiveCParser::PropertyAttributeContext::NONATOMIC() {
  return getToken(ObjectiveCParser::NONATOMIC, 0);
}

tree::TerminalNode* ObjectiveCParser::PropertyAttributeContext::STRONG() {
  return getToken(ObjectiveCParser::STRONG, 0);
}

tree::TerminalNode* ObjectiveCParser::PropertyAttributeContext::WEAK() {
  return getToken(ObjectiveCParser::WEAK, 0);
}

tree::TerminalNode* ObjectiveCParser::PropertyAttributeContext::RETAIN() {
  return getToken(ObjectiveCParser::RETAIN, 0);
}

tree::TerminalNode* ObjectiveCParser::PropertyAttributeContext::ASSIGN() {
  return getToken(ObjectiveCParser::ASSIGN, 0);
}

tree::TerminalNode* ObjectiveCParser::PropertyAttributeContext::UNSAFE_UNRETAINED() {
  return getToken(ObjectiveCParser::UNSAFE_UNRETAINED, 0);
}

tree::TerminalNode* ObjectiveCParser::PropertyAttributeContext::COPY() {
  return getToken(ObjectiveCParser::COPY, 0);
}

tree::TerminalNode* ObjectiveCParser::PropertyAttributeContext::READONLY() {
  return getToken(ObjectiveCParser::READONLY, 0);
}

tree::TerminalNode* ObjectiveCParser::PropertyAttributeContext::READWRITE() {
  return getToken(ObjectiveCParser::READWRITE, 0);
}

tree::TerminalNode* ObjectiveCParser::PropertyAttributeContext::GETTER() {
  return getToken(ObjectiveCParser::GETTER, 0);
}

tree::TerminalNode* ObjectiveCParser::PropertyAttributeContext::ASSIGNMENT() {
  return getToken(ObjectiveCParser::ASSIGNMENT, 0);
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::PropertyAttributeContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::PropertyAttributeContext::SETTER() {
  return getToken(ObjectiveCParser::SETTER, 0);
}

tree::TerminalNode* ObjectiveCParser::PropertyAttributeContext::COLON() {
  return getToken(ObjectiveCParser::COLON, 0);
}

ObjectiveCParser::NullabilitySpecifierContext* ObjectiveCParser::PropertyAttributeContext::nullabilitySpecifier() {
  return getRuleContext<ObjectiveCParser::NullabilitySpecifierContext>(0);
}


size_t ObjectiveCParser::PropertyAttributeContext::getRuleIndex() const {
  return ObjectiveCParser::RulePropertyAttribute;
}

void ObjectiveCParser::PropertyAttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyAttribute(this);
}

void ObjectiveCParser::PropertyAttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyAttribute(this);
}


antlrcpp::Any ObjectiveCParser::PropertyAttributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitPropertyAttribute(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::PropertyAttributeContext* ObjectiveCParser::propertyAttribute() {
  PropertyAttributeContext *_localctx = _tracker.createInstance<PropertyAttributeContext>(_ctx, getState());
  enterRule(_localctx, 30, ObjectiveCParser::RulePropertyAttribute);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(485);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(465);
      match(ObjectiveCParser::ATOMIC);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(466);
      match(ObjectiveCParser::NONATOMIC);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(467);
      match(ObjectiveCParser::STRONG);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(468);
      match(ObjectiveCParser::WEAK);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(469);
      match(ObjectiveCParser::RETAIN);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(470);
      match(ObjectiveCParser::ASSIGN);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(471);
      match(ObjectiveCParser::UNSAFE_UNRETAINED);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(472);
      match(ObjectiveCParser::COPY);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(473);
      match(ObjectiveCParser::READONLY);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(474);
      match(ObjectiveCParser::READWRITE);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(475);
      match(ObjectiveCParser::GETTER);
      setState(476);
      match(ObjectiveCParser::ASSIGNMENT);
      setState(477);
      identifier();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(478);
      match(ObjectiveCParser::SETTER);
      setState(479);
      match(ObjectiveCParser::ASSIGNMENT);
      setState(480);
      identifier();
      setState(481);
      match(ObjectiveCParser::COLON);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(483);
      nullabilitySpecifier();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(484);
      identifier();
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

//----------------- ProtocolNameContext ------------------------------------------------------------------

ObjectiveCParser::ProtocolNameContext::ProtocolNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::ProtocolNameContext::LT() {
  return getToken(ObjectiveCParser::LT, 0);
}

ObjectiveCParser::ProtocolListContext* ObjectiveCParser::ProtocolNameContext::protocolList() {
  return getRuleContext<ObjectiveCParser::ProtocolListContext>(0);
}

tree::TerminalNode* ObjectiveCParser::ProtocolNameContext::GT() {
  return getToken(ObjectiveCParser::GT, 0);
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::ProtocolNameContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::ProtocolNameContext::COVARIANT() {
  return getToken(ObjectiveCParser::COVARIANT, 0);
}

tree::TerminalNode* ObjectiveCParser::ProtocolNameContext::CONTRAVARIANT() {
  return getToken(ObjectiveCParser::CONTRAVARIANT, 0);
}


size_t ObjectiveCParser::ProtocolNameContext::getRuleIndex() const {
  return ObjectiveCParser::RuleProtocolName;
}

void ObjectiveCParser::ProtocolNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProtocolName(this);
}

void ObjectiveCParser::ProtocolNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProtocolName(this);
}


antlrcpp::Any ObjectiveCParser::ProtocolNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitProtocolName(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ProtocolNameContext* ObjectiveCParser::protocolName() {
  ProtocolNameContext *_localctx = _tracker.createInstance<ProtocolNameContext>(_ctx, getState());
  enterRule(_localctx, 32, ObjectiveCParser::RuleProtocolName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(495);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ObjectiveCParser::LT: {
        enterOuterAlt(_localctx, 1);
        setState(487);
        match(ObjectiveCParser::LT);
        setState(488);
        protocolList();
        setState(489);
        match(ObjectiveCParser::GT);
        break;
      }

      case ObjectiveCParser::BOOL:
      case ObjectiveCParser::Class:
      case ObjectiveCParser::BYCOPY:
      case ObjectiveCParser::BYREF:
      case ObjectiveCParser::ID:
      case ObjectiveCParser::IMP:
      case ObjectiveCParser::IN:
      case ObjectiveCParser::INOUT:
      case ObjectiveCParser::ONEWAY:
      case ObjectiveCParser::OUT:
      case ObjectiveCParser::PROTOCOL_:
      case ObjectiveCParser::SEL:
      case ObjectiveCParser::SELF:
      case ObjectiveCParser::SUPER:
      case ObjectiveCParser::ATOMIC:
      case ObjectiveCParser::NONATOMIC:
      case ObjectiveCParser::RETAIN:
      case ObjectiveCParser::AUTORELEASING_QUALIFIER:
      case ObjectiveCParser::BLOCK:
      case ObjectiveCParser::BRIDGE_RETAINED:
      case ObjectiveCParser::BRIDGE_TRANSFER:
      case ObjectiveCParser::COVARIANT:
      case ObjectiveCParser::CONTRAVARIANT:
      case ObjectiveCParser::DEPRECATED:
      case ObjectiveCParser::KINDOF:
      case ObjectiveCParser::UNUSED:
      case ObjectiveCParser::NULL_UNSPECIFIED:
      case ObjectiveCParser::NULLABLE:
      case ObjectiveCParser::NONNULL:
      case ObjectiveCParser::NULL_RESETTABLE:
      case ObjectiveCParser::NS_INLINE:
      case ObjectiveCParser::NS_ENUM:
      case ObjectiveCParser::NS_OPTIONS:
      case ObjectiveCParser::ASSIGN:
      case ObjectiveCParser::COPY:
      case ObjectiveCParser::GETTER:
      case ObjectiveCParser::SETTER:
      case ObjectiveCParser::STRONG:
      case ObjectiveCParser::READONLY:
      case ObjectiveCParser::READWRITE:
      case ObjectiveCParser::WEAK:
      case ObjectiveCParser::UNSAFE_UNRETAINED:
      case ObjectiveCParser::IB_OUTLET:
      case ObjectiveCParser::IB_OUTLET_COLLECTION:
      case ObjectiveCParser::IB_INSPECTABLE:
      case ObjectiveCParser::IB_DESIGNABLE:
      case ObjectiveCParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(492);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
        case 1: {
          setState(491);
          _la = _input->LA(1);
          if (!(_la == ObjectiveCParser::COVARIANT

          || _la == ObjectiveCParser::CONTRAVARIANT)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        }
        setState(494);
        identifier();
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

//----------------- InstanceVariablesContext ------------------------------------------------------------------

ObjectiveCParser::InstanceVariablesContext::InstanceVariablesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::InstanceVariablesContext::LBRACE() {
  return getToken(ObjectiveCParser::LBRACE, 0);
}

tree::TerminalNode* ObjectiveCParser::InstanceVariablesContext::RBRACE() {
  return getToken(ObjectiveCParser::RBRACE, 0);
}

std::vector<ObjectiveCParser::VisibilitySectionContext *> ObjectiveCParser::InstanceVariablesContext::visibilitySection() {
  return getRuleContexts<ObjectiveCParser::VisibilitySectionContext>();
}

ObjectiveCParser::VisibilitySectionContext* ObjectiveCParser::InstanceVariablesContext::visibilitySection(size_t i) {
  return getRuleContext<ObjectiveCParser::VisibilitySectionContext>(i);
}


size_t ObjectiveCParser::InstanceVariablesContext::getRuleIndex() const {
  return ObjectiveCParser::RuleInstanceVariables;
}

void ObjectiveCParser::InstanceVariablesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstanceVariables(this);
}

void ObjectiveCParser::InstanceVariablesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstanceVariables(this);
}


antlrcpp::Any ObjectiveCParser::InstanceVariablesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitInstanceVariables(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::InstanceVariablesContext* ObjectiveCParser::instanceVariables() {
  InstanceVariablesContext *_localctx = _tracker.createInstance<InstanceVariablesContext>(_ctx, getState());
  enterRule(_localctx, 34, ObjectiveCParser::RuleInstanceVariables);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(497);
    match(ObjectiveCParser::LBRACE);
    setState(501);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::CHAR)
      | (1ULL << ObjectiveCParser::CONST)
      | (1ULL << ObjectiveCParser::DOUBLE)
      | (1ULL << ObjectiveCParser::ENUM)
      | (1ULL << ObjectiveCParser::FLOAT)
      | (1ULL << ObjectiveCParser::INLINE)
      | (1ULL << ObjectiveCParser::INT)
      | (1ULL << ObjectiveCParser::LONG)
      | (1ULL << ObjectiveCParser::RESTRICT)
      | (1ULL << ObjectiveCParser::SHORT)
      | (1ULL << ObjectiveCParser::SIGNED)
      | (1ULL << ObjectiveCParser::STRUCT)
      | (1ULL << ObjectiveCParser::UNION)
      | (1ULL << ObjectiveCParser::UNSIGNED)
      | (1ULL << ObjectiveCParser::VOID)
      | (1ULL << ObjectiveCParser::VOLATILE)
      | (1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (ObjectiveCParser::PACKAGE - 68))
      | (1ULL << (ObjectiveCParser::PRIVATE - 68))
      | (1ULL << (ObjectiveCParser::PROTECTED - 68))
      | (1ULL << (ObjectiveCParser::PUBLIC - 68))
      | (1ULL << (ObjectiveCParser::ATOMIC - 68))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 68))
      | (1ULL << (ObjectiveCParser::RETAIN - 68))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 68))
      | (1ULL << (ObjectiveCParser::BLOCK - 68))
      | (1ULL << (ObjectiveCParser::BRIDGE - 68))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 68))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 68))
      | (1ULL << (ObjectiveCParser::COVARIANT - 68))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 68))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 68))
      | (1ULL << (ObjectiveCParser::KINDOF - 68))
      | (1ULL << (ObjectiveCParser::STRONG_QUALIFIER - 68))
      | (1ULL << (ObjectiveCParser::TYPEOF - 68))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED_QUALIFIER - 68))
      | (1ULL << (ObjectiveCParser::UNUSED - 68))
      | (1ULL << (ObjectiveCParser::WEAK_QUALIFIER - 68))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 68))
      | (1ULL << (ObjectiveCParser::NULLABLE - 68))
      | (1ULL << (ObjectiveCParser::NONNULL - 68))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 68))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 68))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 68))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 68))
      | (1ULL << (ObjectiveCParser::ASSIGN - 68))
      | (1ULL << (ObjectiveCParser::COPY - 68))
      | (1ULL << (ObjectiveCParser::GETTER - 68))
      | (1ULL << (ObjectiveCParser::SETTER - 68))
      | (1ULL << (ObjectiveCParser::STRONG - 68))
      | (1ULL << (ObjectiveCParser::READONLY - 68))
      | (1ULL << (ObjectiveCParser::READWRITE - 68))
      | (1ULL << (ObjectiveCParser::WEAK - 68))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 68))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 68))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 68))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 68))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 68))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 68)))) != 0)) {
      setState(498);
      visibilitySection();
      setState(503);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(504);
    match(ObjectiveCParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VisibilitySectionContext ------------------------------------------------------------------

ObjectiveCParser::VisibilitySectionContext::VisibilitySectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::AccessModifierContext* ObjectiveCParser::VisibilitySectionContext::accessModifier() {
  return getRuleContext<ObjectiveCParser::AccessModifierContext>(0);
}

std::vector<ObjectiveCParser::FieldDeclarationContext *> ObjectiveCParser::VisibilitySectionContext::fieldDeclaration() {
  return getRuleContexts<ObjectiveCParser::FieldDeclarationContext>();
}

ObjectiveCParser::FieldDeclarationContext* ObjectiveCParser::VisibilitySectionContext::fieldDeclaration(size_t i) {
  return getRuleContext<ObjectiveCParser::FieldDeclarationContext>(i);
}


size_t ObjectiveCParser::VisibilitySectionContext::getRuleIndex() const {
  return ObjectiveCParser::RuleVisibilitySection;
}

void ObjectiveCParser::VisibilitySectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVisibilitySection(this);
}

void ObjectiveCParser::VisibilitySectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVisibilitySection(this);
}


antlrcpp::Any ObjectiveCParser::VisibilitySectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitVisibilitySection(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::VisibilitySectionContext* ObjectiveCParser::visibilitySection() {
  VisibilitySectionContext *_localctx = _tracker.createInstance<VisibilitySectionContext>(_ctx, getState());
  enterRule(_localctx, 36, ObjectiveCParser::RuleVisibilitySection);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(518);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ObjectiveCParser::PACKAGE:
      case ObjectiveCParser::PRIVATE:
      case ObjectiveCParser::PROTECTED:
      case ObjectiveCParser::PUBLIC: {
        enterOuterAlt(_localctx, 1);
        setState(506);
        accessModifier();
        setState(510);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(507);
            fieldDeclaration(); 
          }
          setState(512);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
        }
        break;
      }

      case ObjectiveCParser::CHAR:
      case ObjectiveCParser::CONST:
      case ObjectiveCParser::DOUBLE:
      case ObjectiveCParser::ENUM:
      case ObjectiveCParser::FLOAT:
      case ObjectiveCParser::INLINE:
      case ObjectiveCParser::INT:
      case ObjectiveCParser::LONG:
      case ObjectiveCParser::RESTRICT:
      case ObjectiveCParser::SHORT:
      case ObjectiveCParser::SIGNED:
      case ObjectiveCParser::STRUCT:
      case ObjectiveCParser::UNION:
      case ObjectiveCParser::UNSIGNED:
      case ObjectiveCParser::VOID:
      case ObjectiveCParser::VOLATILE:
      case ObjectiveCParser::BOOL:
      case ObjectiveCParser::Class:
      case ObjectiveCParser::BYCOPY:
      case ObjectiveCParser::BYREF:
      case ObjectiveCParser::ID:
      case ObjectiveCParser::IMP:
      case ObjectiveCParser::IN:
      case ObjectiveCParser::INOUT:
      case ObjectiveCParser::ONEWAY:
      case ObjectiveCParser::OUT:
      case ObjectiveCParser::PROTOCOL_:
      case ObjectiveCParser::SEL:
      case ObjectiveCParser::SELF:
      case ObjectiveCParser::SUPER:
      case ObjectiveCParser::ATOMIC:
      case ObjectiveCParser::NONATOMIC:
      case ObjectiveCParser::RETAIN:
      case ObjectiveCParser::AUTORELEASING_QUALIFIER:
      case ObjectiveCParser::BLOCK:
      case ObjectiveCParser::BRIDGE:
      case ObjectiveCParser::BRIDGE_RETAINED:
      case ObjectiveCParser::BRIDGE_TRANSFER:
      case ObjectiveCParser::COVARIANT:
      case ObjectiveCParser::CONTRAVARIANT:
      case ObjectiveCParser::DEPRECATED:
      case ObjectiveCParser::KINDOF:
      case ObjectiveCParser::STRONG_QUALIFIER:
      case ObjectiveCParser::TYPEOF:
      case ObjectiveCParser::UNSAFE_UNRETAINED_QUALIFIER:
      case ObjectiveCParser::UNUSED:
      case ObjectiveCParser::WEAK_QUALIFIER:
      case ObjectiveCParser::NULL_UNSPECIFIED:
      case ObjectiveCParser::NULLABLE:
      case ObjectiveCParser::NONNULL:
      case ObjectiveCParser::NULL_RESETTABLE:
      case ObjectiveCParser::NS_INLINE:
      case ObjectiveCParser::NS_ENUM:
      case ObjectiveCParser::NS_OPTIONS:
      case ObjectiveCParser::ASSIGN:
      case ObjectiveCParser::COPY:
      case ObjectiveCParser::GETTER:
      case ObjectiveCParser::SETTER:
      case ObjectiveCParser::STRONG:
      case ObjectiveCParser::READONLY:
      case ObjectiveCParser::READWRITE:
      case ObjectiveCParser::WEAK:
      case ObjectiveCParser::UNSAFE_UNRETAINED:
      case ObjectiveCParser::IB_OUTLET:
      case ObjectiveCParser::IB_OUTLET_COLLECTION:
      case ObjectiveCParser::IB_INSPECTABLE:
      case ObjectiveCParser::IB_DESIGNABLE:
      case ObjectiveCParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(514); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(513);
                  fieldDeclaration();
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(516); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
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

//----------------- AccessModifierContext ------------------------------------------------------------------

ObjectiveCParser::AccessModifierContext::AccessModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::AccessModifierContext::PRIVATE() {
  return getToken(ObjectiveCParser::PRIVATE, 0);
}

tree::TerminalNode* ObjectiveCParser::AccessModifierContext::PROTECTED() {
  return getToken(ObjectiveCParser::PROTECTED, 0);
}

tree::TerminalNode* ObjectiveCParser::AccessModifierContext::PACKAGE() {
  return getToken(ObjectiveCParser::PACKAGE, 0);
}

tree::TerminalNode* ObjectiveCParser::AccessModifierContext::PUBLIC() {
  return getToken(ObjectiveCParser::PUBLIC, 0);
}


size_t ObjectiveCParser::AccessModifierContext::getRuleIndex() const {
  return ObjectiveCParser::RuleAccessModifier;
}

void ObjectiveCParser::AccessModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessModifier(this);
}

void ObjectiveCParser::AccessModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessModifier(this);
}


antlrcpp::Any ObjectiveCParser::AccessModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitAccessModifier(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::AccessModifierContext* ObjectiveCParser::accessModifier() {
  AccessModifierContext *_localctx = _tracker.createInstance<AccessModifierContext>(_ctx, getState());
  enterRule(_localctx, 38, ObjectiveCParser::RuleAccessModifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(520);
    _la = _input->LA(1);
    if (!(((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (ObjectiveCParser::PACKAGE - 68))
      | (1ULL << (ObjectiveCParser::PRIVATE - 68))
      | (1ULL << (ObjectiveCParser::PROTECTED - 68))
      | (1ULL << (ObjectiveCParser::PUBLIC - 68)))) != 0))) {
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

//----------------- InterfaceDeclarationListContext ------------------------------------------------------------------

ObjectiveCParser::InterfaceDeclarationListContext::InterfaceDeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ObjectiveCParser::DeclarationContext *> ObjectiveCParser::InterfaceDeclarationListContext::declaration() {
  return getRuleContexts<ObjectiveCParser::DeclarationContext>();
}

ObjectiveCParser::DeclarationContext* ObjectiveCParser::InterfaceDeclarationListContext::declaration(size_t i) {
  return getRuleContext<ObjectiveCParser::DeclarationContext>(i);
}

std::vector<ObjectiveCParser::ClassMethodDeclarationContext *> ObjectiveCParser::InterfaceDeclarationListContext::classMethodDeclaration() {
  return getRuleContexts<ObjectiveCParser::ClassMethodDeclarationContext>();
}

ObjectiveCParser::ClassMethodDeclarationContext* ObjectiveCParser::InterfaceDeclarationListContext::classMethodDeclaration(size_t i) {
  return getRuleContext<ObjectiveCParser::ClassMethodDeclarationContext>(i);
}

std::vector<ObjectiveCParser::InstanceMethodDeclarationContext *> ObjectiveCParser::InterfaceDeclarationListContext::instanceMethodDeclaration() {
  return getRuleContexts<ObjectiveCParser::InstanceMethodDeclarationContext>();
}

ObjectiveCParser::InstanceMethodDeclarationContext* ObjectiveCParser::InterfaceDeclarationListContext::instanceMethodDeclaration(size_t i) {
  return getRuleContext<ObjectiveCParser::InstanceMethodDeclarationContext>(i);
}

std::vector<ObjectiveCParser::PropertyDeclarationContext *> ObjectiveCParser::InterfaceDeclarationListContext::propertyDeclaration() {
  return getRuleContexts<ObjectiveCParser::PropertyDeclarationContext>();
}

ObjectiveCParser::PropertyDeclarationContext* ObjectiveCParser::InterfaceDeclarationListContext::propertyDeclaration(size_t i) {
  return getRuleContext<ObjectiveCParser::PropertyDeclarationContext>(i);
}

std::vector<ObjectiveCParser::FunctionDeclarationContext *> ObjectiveCParser::InterfaceDeclarationListContext::functionDeclaration() {
  return getRuleContexts<ObjectiveCParser::FunctionDeclarationContext>();
}

ObjectiveCParser::FunctionDeclarationContext* ObjectiveCParser::InterfaceDeclarationListContext::functionDeclaration(size_t i) {
  return getRuleContext<ObjectiveCParser::FunctionDeclarationContext>(i);
}


size_t ObjectiveCParser::InterfaceDeclarationListContext::getRuleIndex() const {
  return ObjectiveCParser::RuleInterfaceDeclarationList;
}

void ObjectiveCParser::InterfaceDeclarationListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceDeclarationList(this);
}

void ObjectiveCParser::InterfaceDeclarationListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceDeclarationList(this);
}


antlrcpp::Any ObjectiveCParser::InterfaceDeclarationListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitInterfaceDeclarationList(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::InterfaceDeclarationListContext* ObjectiveCParser::interfaceDeclarationList() {
  InterfaceDeclarationListContext *_localctx = _tracker.createInstance<InterfaceDeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 40, ObjectiveCParser::RuleInterfaceDeclarationList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(527); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(527);
              _errHandler->sync(this);
              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
              case 1: {
                setState(522);
                declaration();
                break;
              }

              case 2: {
                setState(523);
                classMethodDeclaration();
                break;
              }

              case 3: {
                setState(524);
                instanceMethodDeclaration();
                break;
              }

              case 4: {
                setState(525);
                propertyDeclaration();
                break;
              }

              case 5: {
                setState(526);
                functionDeclaration();
                break;
              }

              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(529); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassMethodDeclarationContext ------------------------------------------------------------------

ObjectiveCParser::ClassMethodDeclarationContext::ClassMethodDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::ClassMethodDeclarationContext::ADD() {
  return getToken(ObjectiveCParser::ADD, 0);
}

ObjectiveCParser::MethodDeclarationContext* ObjectiveCParser::ClassMethodDeclarationContext::methodDeclaration() {
  return getRuleContext<ObjectiveCParser::MethodDeclarationContext>(0);
}


size_t ObjectiveCParser::ClassMethodDeclarationContext::getRuleIndex() const {
  return ObjectiveCParser::RuleClassMethodDeclaration;
}

void ObjectiveCParser::ClassMethodDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassMethodDeclaration(this);
}

void ObjectiveCParser::ClassMethodDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassMethodDeclaration(this);
}


antlrcpp::Any ObjectiveCParser::ClassMethodDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitClassMethodDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ClassMethodDeclarationContext* ObjectiveCParser::classMethodDeclaration() {
  ClassMethodDeclarationContext *_localctx = _tracker.createInstance<ClassMethodDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 42, ObjectiveCParser::RuleClassMethodDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(531);
    match(ObjectiveCParser::ADD);
    setState(532);
    methodDeclaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstanceMethodDeclarationContext ------------------------------------------------------------------

ObjectiveCParser::InstanceMethodDeclarationContext::InstanceMethodDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::InstanceMethodDeclarationContext::SUB() {
  return getToken(ObjectiveCParser::SUB, 0);
}

ObjectiveCParser::MethodDeclarationContext* ObjectiveCParser::InstanceMethodDeclarationContext::methodDeclaration() {
  return getRuleContext<ObjectiveCParser::MethodDeclarationContext>(0);
}


size_t ObjectiveCParser::InstanceMethodDeclarationContext::getRuleIndex() const {
  return ObjectiveCParser::RuleInstanceMethodDeclaration;
}

void ObjectiveCParser::InstanceMethodDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstanceMethodDeclaration(this);
}

void ObjectiveCParser::InstanceMethodDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstanceMethodDeclaration(this);
}


antlrcpp::Any ObjectiveCParser::InstanceMethodDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitInstanceMethodDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::InstanceMethodDeclarationContext* ObjectiveCParser::instanceMethodDeclaration() {
  InstanceMethodDeclarationContext *_localctx = _tracker.createInstance<InstanceMethodDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 44, ObjectiveCParser::RuleInstanceMethodDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(534);
    match(ObjectiveCParser::SUB);
    setState(535);
    methodDeclaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodDeclarationContext ------------------------------------------------------------------

ObjectiveCParser::MethodDeclarationContext::MethodDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::MethodSelectorContext* ObjectiveCParser::MethodDeclarationContext::methodSelector() {
  return getRuleContext<ObjectiveCParser::MethodSelectorContext>(0);
}

tree::TerminalNode* ObjectiveCParser::MethodDeclarationContext::SEMI() {
  return getToken(ObjectiveCParser::SEMI, 0);
}

ObjectiveCParser::MethodTypeContext* ObjectiveCParser::MethodDeclarationContext::methodType() {
  return getRuleContext<ObjectiveCParser::MethodTypeContext>(0);
}

ObjectiveCParser::MacroContext* ObjectiveCParser::MethodDeclarationContext::macro() {
  return getRuleContext<ObjectiveCParser::MacroContext>(0);
}


size_t ObjectiveCParser::MethodDeclarationContext::getRuleIndex() const {
  return ObjectiveCParser::RuleMethodDeclaration;
}

void ObjectiveCParser::MethodDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodDeclaration(this);
}

void ObjectiveCParser::MethodDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodDeclaration(this);
}


antlrcpp::Any ObjectiveCParser::MethodDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitMethodDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::MethodDeclarationContext* ObjectiveCParser::methodDeclaration() {
  MethodDeclarationContext *_localctx = _tracker.createInstance<MethodDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 46, ObjectiveCParser::RuleMethodDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(538);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::LP) {
      setState(537);
      methodType();
    }
    setState(540);
    methodSelector();
    setState(542);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 81)) & ((1ULL << (ObjectiveCParser::ATOMIC - 81))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 81))
      | (1ULL << (ObjectiveCParser::RETAIN - 81))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 81))
      | (1ULL << (ObjectiveCParser::BLOCK - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 81))
      | (1ULL << (ObjectiveCParser::COVARIANT - 81))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 81))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 81))
      | (1ULL << (ObjectiveCParser::KINDOF - 81))
      | (1ULL << (ObjectiveCParser::UNUSED - 81))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 81))
      | (1ULL << (ObjectiveCParser::NULLABLE - 81))
      | (1ULL << (ObjectiveCParser::NONNULL - 81))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 81))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 81))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 81))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 81))
      | (1ULL << (ObjectiveCParser::ASSIGN - 81))
      | (1ULL << (ObjectiveCParser::COPY - 81))
      | (1ULL << (ObjectiveCParser::GETTER - 81))
      | (1ULL << (ObjectiveCParser::SETTER - 81))
      | (1ULL << (ObjectiveCParser::STRONG - 81))
      | (1ULL << (ObjectiveCParser::READONLY - 81))
      | (1ULL << (ObjectiveCParser::READWRITE - 81))
      | (1ULL << (ObjectiveCParser::WEAK - 81))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 81))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 81))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 81))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 81))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 81))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 81)))) != 0)) {
      setState(541);
      macro();
    }
    setState(544);
    match(ObjectiveCParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImplementationDefinitionListContext ------------------------------------------------------------------

ObjectiveCParser::ImplementationDefinitionListContext::ImplementationDefinitionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ObjectiveCParser::FunctionDefinitionContext *> ObjectiveCParser::ImplementationDefinitionListContext::functionDefinition() {
  return getRuleContexts<ObjectiveCParser::FunctionDefinitionContext>();
}

ObjectiveCParser::FunctionDefinitionContext* ObjectiveCParser::ImplementationDefinitionListContext::functionDefinition(size_t i) {
  return getRuleContext<ObjectiveCParser::FunctionDefinitionContext>(i);
}

std::vector<ObjectiveCParser::DeclarationContext *> ObjectiveCParser::ImplementationDefinitionListContext::declaration() {
  return getRuleContexts<ObjectiveCParser::DeclarationContext>();
}

ObjectiveCParser::DeclarationContext* ObjectiveCParser::ImplementationDefinitionListContext::declaration(size_t i) {
  return getRuleContext<ObjectiveCParser::DeclarationContext>(i);
}

std::vector<ObjectiveCParser::ClassMethodDefinitionContext *> ObjectiveCParser::ImplementationDefinitionListContext::classMethodDefinition() {
  return getRuleContexts<ObjectiveCParser::ClassMethodDefinitionContext>();
}

ObjectiveCParser::ClassMethodDefinitionContext* ObjectiveCParser::ImplementationDefinitionListContext::classMethodDefinition(size_t i) {
  return getRuleContext<ObjectiveCParser::ClassMethodDefinitionContext>(i);
}

std::vector<ObjectiveCParser::InstanceMethodDefinitionContext *> ObjectiveCParser::ImplementationDefinitionListContext::instanceMethodDefinition() {
  return getRuleContexts<ObjectiveCParser::InstanceMethodDefinitionContext>();
}

ObjectiveCParser::InstanceMethodDefinitionContext* ObjectiveCParser::ImplementationDefinitionListContext::instanceMethodDefinition(size_t i) {
  return getRuleContext<ObjectiveCParser::InstanceMethodDefinitionContext>(i);
}

std::vector<ObjectiveCParser::PropertyImplementationContext *> ObjectiveCParser::ImplementationDefinitionListContext::propertyImplementation() {
  return getRuleContexts<ObjectiveCParser::PropertyImplementationContext>();
}

ObjectiveCParser::PropertyImplementationContext* ObjectiveCParser::ImplementationDefinitionListContext::propertyImplementation(size_t i) {
  return getRuleContext<ObjectiveCParser::PropertyImplementationContext>(i);
}


size_t ObjectiveCParser::ImplementationDefinitionListContext::getRuleIndex() const {
  return ObjectiveCParser::RuleImplementationDefinitionList;
}

void ObjectiveCParser::ImplementationDefinitionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImplementationDefinitionList(this);
}

void ObjectiveCParser::ImplementationDefinitionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImplementationDefinitionList(this);
}


antlrcpp::Any ObjectiveCParser::ImplementationDefinitionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitImplementationDefinitionList(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ImplementationDefinitionListContext* ObjectiveCParser::implementationDefinitionList() {
  ImplementationDefinitionListContext *_localctx = _tracker.createInstance<ImplementationDefinitionListContext>(_ctx, getState());
  enterRule(_localctx, 48, ObjectiveCParser::RuleImplementationDefinitionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(551); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(551);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
      case 1: {
        setState(546);
        functionDefinition();
        break;
      }

      case 2: {
        setState(547);
        declaration();
        break;
      }

      case 3: {
        setState(548);
        classMethodDefinition();
        break;
      }

      case 4: {
        setState(549);
        instanceMethodDefinition();
        break;
      }

      case 5: {
        setState(550);
        propertyImplementation();
        break;
      }

      }
      setState(553); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::AUTO)
      | (1ULL << ObjectiveCParser::CHAR)
      | (1ULL << ObjectiveCParser::CONST)
      | (1ULL << ObjectiveCParser::DOUBLE)
      | (1ULL << ObjectiveCParser::ENUM)
      | (1ULL << ObjectiveCParser::EXTERN)
      | (1ULL << ObjectiveCParser::FLOAT)
      | (1ULL << ObjectiveCParser::INLINE)
      | (1ULL << ObjectiveCParser::INT)
      | (1ULL << ObjectiveCParser::LONG)
      | (1ULL << ObjectiveCParser::REGISTER)
      | (1ULL << ObjectiveCParser::RESTRICT)
      | (1ULL << ObjectiveCParser::SHORT)
      | (1ULL << ObjectiveCParser::SIGNED)
      | (1ULL << ObjectiveCParser::STATIC)
      | (1ULL << ObjectiveCParser::STRUCT)
      | (1ULL << ObjectiveCParser::TYPEDEF)
      | (1ULL << ObjectiveCParser::UNION)
      | (1ULL << ObjectiveCParser::UNSIGNED)
      | (1ULL << ObjectiveCParser::VOID)
      | (1ULL << ObjectiveCParser::VOLATILE)
      | (1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER)
      | (1ULL << ObjectiveCParser::DYNAMIC))) != 0) || ((((_la - 78) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 78)) & ((1ULL << (ObjectiveCParser::SYNTHESIZE - 78))
      | (1ULL << (ObjectiveCParser::ATOMIC - 78))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 78))
      | (1ULL << (ObjectiveCParser::RETAIN - 78))
      | (1ULL << (ObjectiveCParser::ATTRIBUTE - 78))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 78))
      | (1ULL << (ObjectiveCParser::BLOCK - 78))
      | (1ULL << (ObjectiveCParser::BRIDGE - 78))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 78))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 78))
      | (1ULL << (ObjectiveCParser::COVARIANT - 78))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 78))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 78))
      | (1ULL << (ObjectiveCParser::KINDOF - 78))
      | (1ULL << (ObjectiveCParser::STRONG_QUALIFIER - 78))
      | (1ULL << (ObjectiveCParser::TYPEOF - 78))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED_QUALIFIER - 78))
      | (1ULL << (ObjectiveCParser::UNUSED - 78))
      | (1ULL << (ObjectiveCParser::WEAK_QUALIFIER - 78))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 78))
      | (1ULL << (ObjectiveCParser::NULLABLE - 78))
      | (1ULL << (ObjectiveCParser::NONNULL - 78))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 78))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 78))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 78))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 78))
      | (1ULL << (ObjectiveCParser::ASSIGN - 78))
      | (1ULL << (ObjectiveCParser::COPY - 78))
      | (1ULL << (ObjectiveCParser::GETTER - 78))
      | (1ULL << (ObjectiveCParser::SETTER - 78))
      | (1ULL << (ObjectiveCParser::STRONG - 78))
      | (1ULL << (ObjectiveCParser::READONLY - 78))
      | (1ULL << (ObjectiveCParser::READWRITE - 78))
      | (1ULL << (ObjectiveCParser::WEAK - 78))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 78))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 78))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 78))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 78))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 78))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 78)))) != 0) || _la == ObjectiveCParser::ADD

    || _la == ObjectiveCParser::SUB);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassMethodDefinitionContext ------------------------------------------------------------------

ObjectiveCParser::ClassMethodDefinitionContext::ClassMethodDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::ClassMethodDefinitionContext::ADD() {
  return getToken(ObjectiveCParser::ADD, 0);
}

ObjectiveCParser::MethodDefinitionContext* ObjectiveCParser::ClassMethodDefinitionContext::methodDefinition() {
  return getRuleContext<ObjectiveCParser::MethodDefinitionContext>(0);
}


size_t ObjectiveCParser::ClassMethodDefinitionContext::getRuleIndex() const {
  return ObjectiveCParser::RuleClassMethodDefinition;
}

void ObjectiveCParser::ClassMethodDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassMethodDefinition(this);
}

void ObjectiveCParser::ClassMethodDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassMethodDefinition(this);
}


antlrcpp::Any ObjectiveCParser::ClassMethodDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitClassMethodDefinition(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ClassMethodDefinitionContext* ObjectiveCParser::classMethodDefinition() {
  ClassMethodDefinitionContext *_localctx = _tracker.createInstance<ClassMethodDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 50, ObjectiveCParser::RuleClassMethodDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(555);
    match(ObjectiveCParser::ADD);
    setState(556);
    methodDefinition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstanceMethodDefinitionContext ------------------------------------------------------------------

ObjectiveCParser::InstanceMethodDefinitionContext::InstanceMethodDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::InstanceMethodDefinitionContext::SUB() {
  return getToken(ObjectiveCParser::SUB, 0);
}

ObjectiveCParser::MethodDefinitionContext* ObjectiveCParser::InstanceMethodDefinitionContext::methodDefinition() {
  return getRuleContext<ObjectiveCParser::MethodDefinitionContext>(0);
}


size_t ObjectiveCParser::InstanceMethodDefinitionContext::getRuleIndex() const {
  return ObjectiveCParser::RuleInstanceMethodDefinition;
}

void ObjectiveCParser::InstanceMethodDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstanceMethodDefinition(this);
}

void ObjectiveCParser::InstanceMethodDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstanceMethodDefinition(this);
}


antlrcpp::Any ObjectiveCParser::InstanceMethodDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitInstanceMethodDefinition(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::InstanceMethodDefinitionContext* ObjectiveCParser::instanceMethodDefinition() {
  InstanceMethodDefinitionContext *_localctx = _tracker.createInstance<InstanceMethodDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 52, ObjectiveCParser::RuleInstanceMethodDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(558);
    match(ObjectiveCParser::SUB);
    setState(559);
    methodDefinition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodDefinitionContext ------------------------------------------------------------------

ObjectiveCParser::MethodDefinitionContext::MethodDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::MethodSelectorContext* ObjectiveCParser::MethodDefinitionContext::methodSelector() {
  return getRuleContext<ObjectiveCParser::MethodSelectorContext>(0);
}

ObjectiveCParser::CompoundStatementContext* ObjectiveCParser::MethodDefinitionContext::compoundStatement() {
  return getRuleContext<ObjectiveCParser::CompoundStatementContext>(0);
}

ObjectiveCParser::MethodTypeContext* ObjectiveCParser::MethodDefinitionContext::methodType() {
  return getRuleContext<ObjectiveCParser::MethodTypeContext>(0);
}

ObjectiveCParser::InitDeclaratorListContext* ObjectiveCParser::MethodDefinitionContext::initDeclaratorList() {
  return getRuleContext<ObjectiveCParser::InitDeclaratorListContext>(0);
}

tree::TerminalNode* ObjectiveCParser::MethodDefinitionContext::SEMI() {
  return getToken(ObjectiveCParser::SEMI, 0);
}


size_t ObjectiveCParser::MethodDefinitionContext::getRuleIndex() const {
  return ObjectiveCParser::RuleMethodDefinition;
}

void ObjectiveCParser::MethodDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodDefinition(this);
}

void ObjectiveCParser::MethodDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodDefinition(this);
}


antlrcpp::Any ObjectiveCParser::MethodDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitMethodDefinition(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::MethodDefinitionContext* ObjectiveCParser::methodDefinition() {
  MethodDefinitionContext *_localctx = _tracker.createInstance<MethodDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 54, ObjectiveCParser::RuleMethodDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(562);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::LP) {
      setState(561);
      methodType();
    }
    setState(564);
    methodSelector();
    setState(566);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 40) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 40)) & ((1ULL << (ObjectiveCParser::BOOL - 40))
      | (1ULL << (ObjectiveCParser::Class - 40))
      | (1ULL << (ObjectiveCParser::BYCOPY - 40))
      | (1ULL << (ObjectiveCParser::BYREF - 40))
      | (1ULL << (ObjectiveCParser::ID - 40))
      | (1ULL << (ObjectiveCParser::IMP - 40))
      | (1ULL << (ObjectiveCParser::IN - 40))
      | (1ULL << (ObjectiveCParser::INOUT - 40))
      | (1ULL << (ObjectiveCParser::ONEWAY - 40))
      | (1ULL << (ObjectiveCParser::OUT - 40))
      | (1ULL << (ObjectiveCParser::PROTOCOL_ - 40))
      | (1ULL << (ObjectiveCParser::SEL - 40))
      | (1ULL << (ObjectiveCParser::SELF - 40))
      | (1ULL << (ObjectiveCParser::SUPER - 40))
      | (1ULL << (ObjectiveCParser::ATOMIC - 40))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 40))
      | (1ULL << (ObjectiveCParser::RETAIN - 40))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 40))
      | (1ULL << (ObjectiveCParser::BLOCK - 40))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 40))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 40))
      | (1ULL << (ObjectiveCParser::COVARIANT - 40))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 40))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 40))
      | (1ULL << (ObjectiveCParser::KINDOF - 40))
      | (1ULL << (ObjectiveCParser::UNUSED - 40))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 40))
      | (1ULL << (ObjectiveCParser::NULLABLE - 40))
      | (1ULL << (ObjectiveCParser::NONNULL - 40))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 40))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 40)))) != 0) || ((((_la - 104) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 104)) & ((1ULL << (ObjectiveCParser::NS_ENUM - 104))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 104))
      | (1ULL << (ObjectiveCParser::ASSIGN - 104))
      | (1ULL << (ObjectiveCParser::COPY - 104))
      | (1ULL << (ObjectiveCParser::GETTER - 104))
      | (1ULL << (ObjectiveCParser::SETTER - 104))
      | (1ULL << (ObjectiveCParser::STRONG - 104))
      | (1ULL << (ObjectiveCParser::READONLY - 104))
      | (1ULL << (ObjectiveCParser::READWRITE - 104))
      | (1ULL << (ObjectiveCParser::WEAK - 104))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 104))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 104))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 104))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 104))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 104))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 104))
      | (1ULL << (ObjectiveCParser::LP - 104))
      | (1ULL << (ObjectiveCParser::MUL - 104)))) != 0)) {
      setState(565);
      initDeclaratorList();
    }
    setState(569);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::SEMI) {
      setState(568);
      match(ObjectiveCParser::SEMI);
    }
    setState(571);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodSelectorContext ------------------------------------------------------------------

ObjectiveCParser::MethodSelectorContext::MethodSelectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::SelectorContext* ObjectiveCParser::MethodSelectorContext::selector() {
  return getRuleContext<ObjectiveCParser::SelectorContext>(0);
}

std::vector<ObjectiveCParser::KeywordDeclaratorContext *> ObjectiveCParser::MethodSelectorContext::keywordDeclarator() {
  return getRuleContexts<ObjectiveCParser::KeywordDeclaratorContext>();
}

ObjectiveCParser::KeywordDeclaratorContext* ObjectiveCParser::MethodSelectorContext::keywordDeclarator(size_t i) {
  return getRuleContext<ObjectiveCParser::KeywordDeclaratorContext>(i);
}

tree::TerminalNode* ObjectiveCParser::MethodSelectorContext::COMMA() {
  return getToken(ObjectiveCParser::COMMA, 0);
}

tree::TerminalNode* ObjectiveCParser::MethodSelectorContext::ELIPSIS() {
  return getToken(ObjectiveCParser::ELIPSIS, 0);
}


size_t ObjectiveCParser::MethodSelectorContext::getRuleIndex() const {
  return ObjectiveCParser::RuleMethodSelector;
}

void ObjectiveCParser::MethodSelectorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodSelector(this);
}

void ObjectiveCParser::MethodSelectorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodSelector(this);
}


antlrcpp::Any ObjectiveCParser::MethodSelectorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitMethodSelector(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::MethodSelectorContext* ObjectiveCParser::methodSelector() {
  MethodSelectorContext *_localctx = _tracker.createInstance<MethodSelectorContext>(_ctx, getState());
  enterRule(_localctx, 56, ObjectiveCParser::RuleMethodSelector);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(583);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(573);
      selector();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(575); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(574);
                keywordDeclarator();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(577); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(581);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ObjectiveCParser::COMMA) {
        setState(579);
        match(ObjectiveCParser::COMMA);
        setState(580);
        match(ObjectiveCParser::ELIPSIS);
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

//----------------- KeywordDeclaratorContext ------------------------------------------------------------------

ObjectiveCParser::KeywordDeclaratorContext::KeywordDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::KeywordDeclaratorContext::COLON() {
  return getToken(ObjectiveCParser::COLON, 0);
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::KeywordDeclaratorContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}

ObjectiveCParser::SelectorContext* ObjectiveCParser::KeywordDeclaratorContext::selector() {
  return getRuleContext<ObjectiveCParser::SelectorContext>(0);
}

std::vector<ObjectiveCParser::MethodTypeContext *> ObjectiveCParser::KeywordDeclaratorContext::methodType() {
  return getRuleContexts<ObjectiveCParser::MethodTypeContext>();
}

ObjectiveCParser::MethodTypeContext* ObjectiveCParser::KeywordDeclaratorContext::methodType(size_t i) {
  return getRuleContext<ObjectiveCParser::MethodTypeContext>(i);
}

ObjectiveCParser::ArcBehaviourSpecifierContext* ObjectiveCParser::KeywordDeclaratorContext::arcBehaviourSpecifier() {
  return getRuleContext<ObjectiveCParser::ArcBehaviourSpecifierContext>(0);
}


size_t ObjectiveCParser::KeywordDeclaratorContext::getRuleIndex() const {
  return ObjectiveCParser::RuleKeywordDeclarator;
}

void ObjectiveCParser::KeywordDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeywordDeclarator(this);
}

void ObjectiveCParser::KeywordDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeywordDeclarator(this);
}


antlrcpp::Any ObjectiveCParser::KeywordDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitKeywordDeclarator(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::KeywordDeclaratorContext* ObjectiveCParser::keywordDeclarator() {
  KeywordDeclaratorContext *_localctx = _tracker.createInstance<KeywordDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 58, ObjectiveCParser::RuleKeywordDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(586);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::RETURN)
      | (1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 81)) & ((1ULL << (ObjectiveCParser::ATOMIC - 81))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 81))
      | (1ULL << (ObjectiveCParser::RETAIN - 81))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 81))
      | (1ULL << (ObjectiveCParser::BLOCK - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 81))
      | (1ULL << (ObjectiveCParser::COVARIANT - 81))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 81))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 81))
      | (1ULL << (ObjectiveCParser::KINDOF - 81))
      | (1ULL << (ObjectiveCParser::UNUSED - 81))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 81))
      | (1ULL << (ObjectiveCParser::NULLABLE - 81))
      | (1ULL << (ObjectiveCParser::NONNULL - 81))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 81))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 81))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 81))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 81))
      | (1ULL << (ObjectiveCParser::ASSIGN - 81))
      | (1ULL << (ObjectiveCParser::COPY - 81))
      | (1ULL << (ObjectiveCParser::GETTER - 81))
      | (1ULL << (ObjectiveCParser::SETTER - 81))
      | (1ULL << (ObjectiveCParser::STRONG - 81))
      | (1ULL << (ObjectiveCParser::READONLY - 81))
      | (1ULL << (ObjectiveCParser::READWRITE - 81))
      | (1ULL << (ObjectiveCParser::WEAK - 81))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 81))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 81))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 81))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 81))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 81))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 81)))) != 0)) {
      setState(585);
      selector();
    }
    setState(588);
    match(ObjectiveCParser::COLON);
    setState(592);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ObjectiveCParser::LP) {
      setState(589);
      methodType();
      setState(594);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(596);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      setState(595);
      arcBehaviourSpecifier();
      break;
    }

    }
    setState(598);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectorContext ------------------------------------------------------------------

ObjectiveCParser::SelectorContext::SelectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::SelectorContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::SelectorContext::RETURN() {
  return getToken(ObjectiveCParser::RETURN, 0);
}


size_t ObjectiveCParser::SelectorContext::getRuleIndex() const {
  return ObjectiveCParser::RuleSelector;
}

void ObjectiveCParser::SelectorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelector(this);
}

void ObjectiveCParser::SelectorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelector(this);
}


antlrcpp::Any ObjectiveCParser::SelectorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitSelector(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::SelectorContext* ObjectiveCParser::selector() {
  SelectorContext *_localctx = _tracker.createInstance<SelectorContext>(_ctx, getState());
  enterRule(_localctx, 60, ObjectiveCParser::RuleSelector);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(602);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ObjectiveCParser::BOOL:
      case ObjectiveCParser::Class:
      case ObjectiveCParser::BYCOPY:
      case ObjectiveCParser::BYREF:
      case ObjectiveCParser::ID:
      case ObjectiveCParser::IMP:
      case ObjectiveCParser::IN:
      case ObjectiveCParser::INOUT:
      case ObjectiveCParser::ONEWAY:
      case ObjectiveCParser::OUT:
      case ObjectiveCParser::PROTOCOL_:
      case ObjectiveCParser::SEL:
      case ObjectiveCParser::SELF:
      case ObjectiveCParser::SUPER:
      case ObjectiveCParser::ATOMIC:
      case ObjectiveCParser::NONATOMIC:
      case ObjectiveCParser::RETAIN:
      case ObjectiveCParser::AUTORELEASING_QUALIFIER:
      case ObjectiveCParser::BLOCK:
      case ObjectiveCParser::BRIDGE_RETAINED:
      case ObjectiveCParser::BRIDGE_TRANSFER:
      case ObjectiveCParser::COVARIANT:
      case ObjectiveCParser::CONTRAVARIANT:
      case ObjectiveCParser::DEPRECATED:
      case ObjectiveCParser::KINDOF:
      case ObjectiveCParser::UNUSED:
      case ObjectiveCParser::NULL_UNSPECIFIED:
      case ObjectiveCParser::NULLABLE:
      case ObjectiveCParser::NONNULL:
      case ObjectiveCParser::NULL_RESETTABLE:
      case ObjectiveCParser::NS_INLINE:
      case ObjectiveCParser::NS_ENUM:
      case ObjectiveCParser::NS_OPTIONS:
      case ObjectiveCParser::ASSIGN:
      case ObjectiveCParser::COPY:
      case ObjectiveCParser::GETTER:
      case ObjectiveCParser::SETTER:
      case ObjectiveCParser::STRONG:
      case ObjectiveCParser::READONLY:
      case ObjectiveCParser::READWRITE:
      case ObjectiveCParser::WEAK:
      case ObjectiveCParser::UNSAFE_UNRETAINED:
      case ObjectiveCParser::IB_OUTLET:
      case ObjectiveCParser::IB_OUTLET_COLLECTION:
      case ObjectiveCParser::IB_INSPECTABLE:
      case ObjectiveCParser::IB_DESIGNABLE:
      case ObjectiveCParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(600);
        identifier();
        break;
      }

      case ObjectiveCParser::RETURN: {
        enterOuterAlt(_localctx, 2);
        setState(601);
        match(ObjectiveCParser::RETURN);
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

//----------------- MethodTypeContext ------------------------------------------------------------------

ObjectiveCParser::MethodTypeContext::MethodTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::MethodTypeContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

ObjectiveCParser::TypeNameContext* ObjectiveCParser::MethodTypeContext::typeName() {
  return getRuleContext<ObjectiveCParser::TypeNameContext>(0);
}

tree::TerminalNode* ObjectiveCParser::MethodTypeContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}


size_t ObjectiveCParser::MethodTypeContext::getRuleIndex() const {
  return ObjectiveCParser::RuleMethodType;
}

void ObjectiveCParser::MethodTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodType(this);
}

void ObjectiveCParser::MethodTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodType(this);
}


antlrcpp::Any ObjectiveCParser::MethodTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitMethodType(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::MethodTypeContext* ObjectiveCParser::methodType() {
  MethodTypeContext *_localctx = _tracker.createInstance<MethodTypeContext>(_ctx, getState());
  enterRule(_localctx, 62, ObjectiveCParser::RuleMethodType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(604);
    match(ObjectiveCParser::LP);
    setState(605);
    typeName();
    setState(606);
    match(ObjectiveCParser::RP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyImplementationContext ------------------------------------------------------------------

ObjectiveCParser::PropertyImplementationContext::PropertyImplementationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::PropertyImplementationContext::SYNTHESIZE() {
  return getToken(ObjectiveCParser::SYNTHESIZE, 0);
}

ObjectiveCParser::PropertySynthesizeListContext* ObjectiveCParser::PropertyImplementationContext::propertySynthesizeList() {
  return getRuleContext<ObjectiveCParser::PropertySynthesizeListContext>(0);
}

tree::TerminalNode* ObjectiveCParser::PropertyImplementationContext::SEMI() {
  return getToken(ObjectiveCParser::SEMI, 0);
}

tree::TerminalNode* ObjectiveCParser::PropertyImplementationContext::DYNAMIC() {
  return getToken(ObjectiveCParser::DYNAMIC, 0);
}


size_t ObjectiveCParser::PropertyImplementationContext::getRuleIndex() const {
  return ObjectiveCParser::RulePropertyImplementation;
}

void ObjectiveCParser::PropertyImplementationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyImplementation(this);
}

void ObjectiveCParser::PropertyImplementationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyImplementation(this);
}


antlrcpp::Any ObjectiveCParser::PropertyImplementationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitPropertyImplementation(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::PropertyImplementationContext* ObjectiveCParser::propertyImplementation() {
  PropertyImplementationContext *_localctx = _tracker.createInstance<PropertyImplementationContext>(_ctx, getState());
  enterRule(_localctx, 64, ObjectiveCParser::RulePropertyImplementation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(616);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ObjectiveCParser::SYNTHESIZE: {
        enterOuterAlt(_localctx, 1);
        setState(608);
        match(ObjectiveCParser::SYNTHESIZE);
        setState(609);
        propertySynthesizeList();
        setState(610);
        match(ObjectiveCParser::SEMI);
        break;
      }

      case ObjectiveCParser::DYNAMIC: {
        enterOuterAlt(_localctx, 2);
        setState(612);
        match(ObjectiveCParser::DYNAMIC);
        setState(613);
        propertySynthesizeList();
        setState(614);
        match(ObjectiveCParser::SEMI);
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

//----------------- PropertySynthesizeListContext ------------------------------------------------------------------

ObjectiveCParser::PropertySynthesizeListContext::PropertySynthesizeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ObjectiveCParser::PropertySynthesizeItemContext *> ObjectiveCParser::PropertySynthesizeListContext::propertySynthesizeItem() {
  return getRuleContexts<ObjectiveCParser::PropertySynthesizeItemContext>();
}

ObjectiveCParser::PropertySynthesizeItemContext* ObjectiveCParser::PropertySynthesizeListContext::propertySynthesizeItem(size_t i) {
  return getRuleContext<ObjectiveCParser::PropertySynthesizeItemContext>(i);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::PropertySynthesizeListContext::COMMA() {
  return getTokens(ObjectiveCParser::COMMA);
}

tree::TerminalNode* ObjectiveCParser::PropertySynthesizeListContext::COMMA(size_t i) {
  return getToken(ObjectiveCParser::COMMA, i);
}


size_t ObjectiveCParser::PropertySynthesizeListContext::getRuleIndex() const {
  return ObjectiveCParser::RulePropertySynthesizeList;
}

void ObjectiveCParser::PropertySynthesizeListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertySynthesizeList(this);
}

void ObjectiveCParser::PropertySynthesizeListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertySynthesizeList(this);
}


antlrcpp::Any ObjectiveCParser::PropertySynthesizeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitPropertySynthesizeList(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::PropertySynthesizeListContext* ObjectiveCParser::propertySynthesizeList() {
  PropertySynthesizeListContext *_localctx = _tracker.createInstance<PropertySynthesizeListContext>(_ctx, getState());
  enterRule(_localctx, 66, ObjectiveCParser::RulePropertySynthesizeList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(618);
    propertySynthesizeItem();
    setState(623);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ObjectiveCParser::COMMA) {
      setState(619);
      match(ObjectiveCParser::COMMA);
      setState(620);
      propertySynthesizeItem();
      setState(625);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertySynthesizeItemContext ------------------------------------------------------------------

ObjectiveCParser::PropertySynthesizeItemContext::PropertySynthesizeItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ObjectiveCParser::IdentifierContext *> ObjectiveCParser::PropertySynthesizeItemContext::identifier() {
  return getRuleContexts<ObjectiveCParser::IdentifierContext>();
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::PropertySynthesizeItemContext::identifier(size_t i) {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(i);
}

tree::TerminalNode* ObjectiveCParser::PropertySynthesizeItemContext::ASSIGNMENT() {
  return getToken(ObjectiveCParser::ASSIGNMENT, 0);
}


size_t ObjectiveCParser::PropertySynthesizeItemContext::getRuleIndex() const {
  return ObjectiveCParser::RulePropertySynthesizeItem;
}

void ObjectiveCParser::PropertySynthesizeItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertySynthesizeItem(this);
}

void ObjectiveCParser::PropertySynthesizeItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertySynthesizeItem(this);
}


antlrcpp::Any ObjectiveCParser::PropertySynthesizeItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitPropertySynthesizeItem(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::PropertySynthesizeItemContext* ObjectiveCParser::propertySynthesizeItem() {
  PropertySynthesizeItemContext *_localctx = _tracker.createInstance<PropertySynthesizeItemContext>(_ctx, getState());
  enterRule(_localctx, 68, ObjectiveCParser::RulePropertySynthesizeItem);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(626);
    identifier();
    setState(629);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::ASSIGNMENT) {
      setState(627);
      match(ObjectiveCParser::ASSIGNMENT);
      setState(628);
      identifier();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockTypeContext ------------------------------------------------------------------

ObjectiveCParser::BlockTypeContext::BlockTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ObjectiveCParser::TypeSpecifierContext *> ObjectiveCParser::BlockTypeContext::typeSpecifier() {
  return getRuleContexts<ObjectiveCParser::TypeSpecifierContext>();
}

ObjectiveCParser::TypeSpecifierContext* ObjectiveCParser::BlockTypeContext::typeSpecifier(size_t i) {
  return getRuleContext<ObjectiveCParser::TypeSpecifierContext>(i);
}

tree::TerminalNode* ObjectiveCParser::BlockTypeContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

tree::TerminalNode* ObjectiveCParser::BlockTypeContext::BITXOR() {
  return getToken(ObjectiveCParser::BITXOR, 0);
}

tree::TerminalNode* ObjectiveCParser::BlockTypeContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

std::vector<ObjectiveCParser::NullabilitySpecifierContext *> ObjectiveCParser::BlockTypeContext::nullabilitySpecifier() {
  return getRuleContexts<ObjectiveCParser::NullabilitySpecifierContext>();
}

ObjectiveCParser::NullabilitySpecifierContext* ObjectiveCParser::BlockTypeContext::nullabilitySpecifier(size_t i) {
  return getRuleContext<ObjectiveCParser::NullabilitySpecifierContext>(i);
}

ObjectiveCParser::BlockParametersContext* ObjectiveCParser::BlockTypeContext::blockParameters() {
  return getRuleContext<ObjectiveCParser::BlockParametersContext>(0);
}


size_t ObjectiveCParser::BlockTypeContext::getRuleIndex() const {
  return ObjectiveCParser::RuleBlockType;
}

void ObjectiveCParser::BlockTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockType(this);
}

void ObjectiveCParser::BlockTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockType(this);
}


antlrcpp::Any ObjectiveCParser::BlockTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitBlockType(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::BlockTypeContext* ObjectiveCParser::blockType() {
  BlockTypeContext *_localctx = _tracker.createInstance<BlockTypeContext>(_ctx, getState());
  enterRule(_localctx, 70, ObjectiveCParser::RuleBlockType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(632);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
    case 1: {
      setState(631);
      nullabilitySpecifier();
      break;
    }

    }
    setState(634);
    typeSpecifier();
    setState(636);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 99) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 99)) & ((1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 99))
      | (1ULL << (ObjectiveCParser::NULLABLE - 99))
      | (1ULL << (ObjectiveCParser::NONNULL - 99))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 99)))) != 0)) {
      setState(635);
      nullabilitySpecifier();
    }
    setState(638);
    match(ObjectiveCParser::LP);
    setState(639);
    match(ObjectiveCParser::BITXOR);
    setState(642);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      setState(640);
      nullabilitySpecifier();
      break;
    }

    case 2: {
      setState(641);
      typeSpecifier();
      break;
    }

    }
    setState(644);
    match(ObjectiveCParser::RP);
    setState(646);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::LP) {
      setState(645);
      blockParameters();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericsSpecifierContext ------------------------------------------------------------------

ObjectiveCParser::GenericsSpecifierContext::GenericsSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::GenericsSpecifierContext::LT() {
  return getToken(ObjectiveCParser::LT, 0);
}

tree::TerminalNode* ObjectiveCParser::GenericsSpecifierContext::GT() {
  return getToken(ObjectiveCParser::GT, 0);
}

std::vector<ObjectiveCParser::TypeSpecifierWithPrefixesContext *> ObjectiveCParser::GenericsSpecifierContext::typeSpecifierWithPrefixes() {
  return getRuleContexts<ObjectiveCParser::TypeSpecifierWithPrefixesContext>();
}

ObjectiveCParser::TypeSpecifierWithPrefixesContext* ObjectiveCParser::GenericsSpecifierContext::typeSpecifierWithPrefixes(size_t i) {
  return getRuleContext<ObjectiveCParser::TypeSpecifierWithPrefixesContext>(i);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::GenericsSpecifierContext::COMMA() {
  return getTokens(ObjectiveCParser::COMMA);
}

tree::TerminalNode* ObjectiveCParser::GenericsSpecifierContext::COMMA(size_t i) {
  return getToken(ObjectiveCParser::COMMA, i);
}


size_t ObjectiveCParser::GenericsSpecifierContext::getRuleIndex() const {
  return ObjectiveCParser::RuleGenericsSpecifier;
}

void ObjectiveCParser::GenericsSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericsSpecifier(this);
}

void ObjectiveCParser::GenericsSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericsSpecifier(this);
}


antlrcpp::Any ObjectiveCParser::GenericsSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitGenericsSpecifier(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::GenericsSpecifierContext* ObjectiveCParser::genericsSpecifier() {
  GenericsSpecifierContext *_localctx = _tracker.createInstance<GenericsSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 72, ObjectiveCParser::RuleGenericsSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(648);
    match(ObjectiveCParser::LT);
    setState(657);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::CHAR)
      | (1ULL << ObjectiveCParser::DOUBLE)
      | (1ULL << ObjectiveCParser::ENUM)
      | (1ULL << ObjectiveCParser::FLOAT)
      | (1ULL << ObjectiveCParser::INLINE)
      | (1ULL << ObjectiveCParser::INT)
      | (1ULL << ObjectiveCParser::LONG)
      | (1ULL << ObjectiveCParser::SHORT)
      | (1ULL << ObjectiveCParser::SIGNED)
      | (1ULL << ObjectiveCParser::STRUCT)
      | (1ULL << ObjectiveCParser::UNION)
      | (1ULL << ObjectiveCParser::UNSIGNED)
      | (1ULL << ObjectiveCParser::VOID)
      | (1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 81)) & ((1ULL << (ObjectiveCParser::ATOMIC - 81))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 81))
      | (1ULL << (ObjectiveCParser::RETAIN - 81))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 81))
      | (1ULL << (ObjectiveCParser::BLOCK - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 81))
      | (1ULL << (ObjectiveCParser::COVARIANT - 81))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 81))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 81))
      | (1ULL << (ObjectiveCParser::KINDOF - 81))
      | (1ULL << (ObjectiveCParser::TYPEOF - 81))
      | (1ULL << (ObjectiveCParser::UNUSED - 81))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 81))
      | (1ULL << (ObjectiveCParser::NULLABLE - 81))
      | (1ULL << (ObjectiveCParser::NONNULL - 81))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 81))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 81))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 81))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 81))
      | (1ULL << (ObjectiveCParser::ASSIGN - 81))
      | (1ULL << (ObjectiveCParser::COPY - 81))
      | (1ULL << (ObjectiveCParser::GETTER - 81))
      | (1ULL << (ObjectiveCParser::SETTER - 81))
      | (1ULL << (ObjectiveCParser::STRONG - 81))
      | (1ULL << (ObjectiveCParser::READONLY - 81))
      | (1ULL << (ObjectiveCParser::READWRITE - 81))
      | (1ULL << (ObjectiveCParser::WEAK - 81))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 81))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 81))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 81))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 81))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 81))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 81)))) != 0)) {
      setState(649);
      typeSpecifierWithPrefixes();
      setState(654);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ObjectiveCParser::COMMA) {
        setState(650);
        match(ObjectiveCParser::COMMA);
        setState(651);
        typeSpecifierWithPrefixes();
        setState(656);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(659);
    match(ObjectiveCParser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSpecifierWithPrefixesContext ------------------------------------------------------------------

ObjectiveCParser::TypeSpecifierWithPrefixesContext::TypeSpecifierWithPrefixesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::TypeSpecifierContext* ObjectiveCParser::TypeSpecifierWithPrefixesContext::typeSpecifier() {
  return getRuleContext<ObjectiveCParser::TypeSpecifierContext>(0);
}

std::vector<ObjectiveCParser::TypePrefixContext *> ObjectiveCParser::TypeSpecifierWithPrefixesContext::typePrefix() {
  return getRuleContexts<ObjectiveCParser::TypePrefixContext>();
}

ObjectiveCParser::TypePrefixContext* ObjectiveCParser::TypeSpecifierWithPrefixesContext::typePrefix(size_t i) {
  return getRuleContext<ObjectiveCParser::TypePrefixContext>(i);
}


size_t ObjectiveCParser::TypeSpecifierWithPrefixesContext::getRuleIndex() const {
  return ObjectiveCParser::RuleTypeSpecifierWithPrefixes;
}

void ObjectiveCParser::TypeSpecifierWithPrefixesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeSpecifierWithPrefixes(this);
}

void ObjectiveCParser::TypeSpecifierWithPrefixesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeSpecifierWithPrefixes(this);
}


antlrcpp::Any ObjectiveCParser::TypeSpecifierWithPrefixesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitTypeSpecifierWithPrefixes(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::TypeSpecifierWithPrefixesContext* ObjectiveCParser::typeSpecifierWithPrefixes() {
  TypeSpecifierWithPrefixesContext *_localctx = _tracker.createInstance<TypeSpecifierWithPrefixesContext>(_ctx, getState());
  enterRule(_localctx, 74, ObjectiveCParser::RuleTypeSpecifierWithPrefixes);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(664);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(661);
        typePrefix(); 
      }
      setState(666);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    }
    setState(667);
    typeSpecifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DictionaryExpressionContext ------------------------------------------------------------------

ObjectiveCParser::DictionaryExpressionContext::DictionaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::DictionaryExpressionContext::AT() {
  return getToken(ObjectiveCParser::AT, 0);
}

tree::TerminalNode* ObjectiveCParser::DictionaryExpressionContext::LBRACE() {
  return getToken(ObjectiveCParser::LBRACE, 0);
}

tree::TerminalNode* ObjectiveCParser::DictionaryExpressionContext::RBRACE() {
  return getToken(ObjectiveCParser::RBRACE, 0);
}

std::vector<ObjectiveCParser::DictionaryPairContext *> ObjectiveCParser::DictionaryExpressionContext::dictionaryPair() {
  return getRuleContexts<ObjectiveCParser::DictionaryPairContext>();
}

ObjectiveCParser::DictionaryPairContext* ObjectiveCParser::DictionaryExpressionContext::dictionaryPair(size_t i) {
  return getRuleContext<ObjectiveCParser::DictionaryPairContext>(i);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::DictionaryExpressionContext::COMMA() {
  return getTokens(ObjectiveCParser::COMMA);
}

tree::TerminalNode* ObjectiveCParser::DictionaryExpressionContext::COMMA(size_t i) {
  return getToken(ObjectiveCParser::COMMA, i);
}


size_t ObjectiveCParser::DictionaryExpressionContext::getRuleIndex() const {
  return ObjectiveCParser::RuleDictionaryExpression;
}

void ObjectiveCParser::DictionaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDictionaryExpression(this);
}

void ObjectiveCParser::DictionaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDictionaryExpression(this);
}


antlrcpp::Any ObjectiveCParser::DictionaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitDictionaryExpression(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::DictionaryExpressionContext* ObjectiveCParser::dictionaryExpression() {
  DictionaryExpressionContext *_localctx = _tracker.createInstance<DictionaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 76, ObjectiveCParser::RuleDictionaryExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(669);
    match(ObjectiveCParser::AT);
    setState(670);
    match(ObjectiveCParser::LBRACE);
    setState(682);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::SIZEOF)
      | (1ULL << ObjectiveCParser::TRUE)
      | (1ULL << ObjectiveCParser::FALSE)
      | (1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::NIL)
      | (1ULL << ObjectiveCParser::NO)
      | (1ULL << ObjectiveCParser::NULL_)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER)
      | (1ULL << ObjectiveCParser::YES)
      | (1ULL << ObjectiveCParser::ENCODE))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (ObjectiveCParser::PROTOCOL - 69))
      | (1ULL << (ObjectiveCParser::SELECTOR - 69))
      | (1ULL << (ObjectiveCParser::ATOMIC - 69))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 69))
      | (1ULL << (ObjectiveCParser::RETAIN - 69))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 69))
      | (1ULL << (ObjectiveCParser::BLOCK - 69))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 69))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 69))
      | (1ULL << (ObjectiveCParser::COVARIANT - 69))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 69))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 69))
      | (1ULL << (ObjectiveCParser::KINDOF - 69))
      | (1ULL << (ObjectiveCParser::UNUSED - 69))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 69))
      | (1ULL << (ObjectiveCParser::NULLABLE - 69))
      | (1ULL << (ObjectiveCParser::NONNULL - 69))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 69))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 69))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 69))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 69))
      | (1ULL << (ObjectiveCParser::ASSIGN - 69))
      | (1ULL << (ObjectiveCParser::COPY - 69))
      | (1ULL << (ObjectiveCParser::GETTER - 69))
      | (1ULL << (ObjectiveCParser::SETTER - 69))
      | (1ULL << (ObjectiveCParser::STRONG - 69))
      | (1ULL << (ObjectiveCParser::READONLY - 69))
      | (1ULL << (ObjectiveCParser::READWRITE - 69))
      | (1ULL << (ObjectiveCParser::WEAK - 69))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 69))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 69))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 69))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 69))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 69))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 69))
      | (1ULL << (ObjectiveCParser::LP - 69))
      | (1ULL << (ObjectiveCParser::LBRACK - 69)))) != 0) || ((((_la - 136) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 136)) & ((1ULL << (ObjectiveCParser::AT - 136))
      | (1ULL << (ObjectiveCParser::BANG - 136))
      | (1ULL << (ObjectiveCParser::TILDE - 136))
      | (1ULL << (ObjectiveCParser::INC - 136))
      | (1ULL << (ObjectiveCParser::DEC - 136))
      | (1ULL << (ObjectiveCParser::ADD - 136))
      | (1ULL << (ObjectiveCParser::SUB - 136))
      | (1ULL << (ObjectiveCParser::MUL - 136))
      | (1ULL << (ObjectiveCParser::BITAND - 136))
      | (1ULL << (ObjectiveCParser::BITXOR - 136))
      | (1ULL << (ObjectiveCParser::CHARACTER_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::STRING_START - 136))
      | (1ULL << (ObjectiveCParser::HEX_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::OCTAL_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::BINARY_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::DECIMAL_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::FLOATING_POINT_LITERAL - 136)))) != 0)) {
      setState(671);
      dictionaryPair();
      setState(676);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(672);
          match(ObjectiveCParser::COMMA);
          setState(673);
          dictionaryPair(); 
        }
        setState(678);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
      }
      setState(680);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ObjectiveCParser::COMMA) {
        setState(679);
        match(ObjectiveCParser::COMMA);
      }
    }
    setState(684);
    match(ObjectiveCParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DictionaryPairContext ------------------------------------------------------------------

ObjectiveCParser::DictionaryPairContext::DictionaryPairContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::CastExpressionContext* ObjectiveCParser::DictionaryPairContext::castExpression() {
  return getRuleContext<ObjectiveCParser::CastExpressionContext>(0);
}

tree::TerminalNode* ObjectiveCParser::DictionaryPairContext::COLON() {
  return getToken(ObjectiveCParser::COLON, 0);
}

ObjectiveCParser::ExpressionContext* ObjectiveCParser::DictionaryPairContext::expression() {
  return getRuleContext<ObjectiveCParser::ExpressionContext>(0);
}


size_t ObjectiveCParser::DictionaryPairContext::getRuleIndex() const {
  return ObjectiveCParser::RuleDictionaryPair;
}

void ObjectiveCParser::DictionaryPairContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDictionaryPair(this);
}

void ObjectiveCParser::DictionaryPairContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDictionaryPair(this);
}


antlrcpp::Any ObjectiveCParser::DictionaryPairContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitDictionaryPair(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::DictionaryPairContext* ObjectiveCParser::dictionaryPair() {
  DictionaryPairContext *_localctx = _tracker.createInstance<DictionaryPairContext>(_ctx, getState());
  enterRule(_localctx, 78, ObjectiveCParser::RuleDictionaryPair);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(686);
    castExpression();
    setState(687);
    match(ObjectiveCParser::COLON);
    setState(688);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayExpressionContext ------------------------------------------------------------------

ObjectiveCParser::ArrayExpressionContext::ArrayExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::ArrayExpressionContext::AT() {
  return getToken(ObjectiveCParser::AT, 0);
}

tree::TerminalNode* ObjectiveCParser::ArrayExpressionContext::LBRACK() {
  return getToken(ObjectiveCParser::LBRACK, 0);
}

tree::TerminalNode* ObjectiveCParser::ArrayExpressionContext::RBRACK() {
  return getToken(ObjectiveCParser::RBRACK, 0);
}

ObjectiveCParser::ExpressionsContext* ObjectiveCParser::ArrayExpressionContext::expressions() {
  return getRuleContext<ObjectiveCParser::ExpressionsContext>(0);
}

tree::TerminalNode* ObjectiveCParser::ArrayExpressionContext::COMMA() {
  return getToken(ObjectiveCParser::COMMA, 0);
}


size_t ObjectiveCParser::ArrayExpressionContext::getRuleIndex() const {
  return ObjectiveCParser::RuleArrayExpression;
}

void ObjectiveCParser::ArrayExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayExpression(this);
}

void ObjectiveCParser::ArrayExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayExpression(this);
}


antlrcpp::Any ObjectiveCParser::ArrayExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitArrayExpression(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ArrayExpressionContext* ObjectiveCParser::arrayExpression() {
  ArrayExpressionContext *_localctx = _tracker.createInstance<ArrayExpressionContext>(_ctx, getState());
  enterRule(_localctx, 80, ObjectiveCParser::RuleArrayExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(690);
    match(ObjectiveCParser::AT);
    setState(691);
    match(ObjectiveCParser::LBRACK);
    setState(696);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::SIZEOF)
      | (1ULL << ObjectiveCParser::TRUE)
      | (1ULL << ObjectiveCParser::FALSE)
      | (1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::NIL)
      | (1ULL << ObjectiveCParser::NO)
      | (1ULL << ObjectiveCParser::NULL_)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER)
      | (1ULL << ObjectiveCParser::YES)
      | (1ULL << ObjectiveCParser::ENCODE))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (ObjectiveCParser::PROTOCOL - 69))
      | (1ULL << (ObjectiveCParser::SELECTOR - 69))
      | (1ULL << (ObjectiveCParser::ATOMIC - 69))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 69))
      | (1ULL << (ObjectiveCParser::RETAIN - 69))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 69))
      | (1ULL << (ObjectiveCParser::BLOCK - 69))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 69))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 69))
      | (1ULL << (ObjectiveCParser::COVARIANT - 69))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 69))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 69))
      | (1ULL << (ObjectiveCParser::KINDOF - 69))
      | (1ULL << (ObjectiveCParser::UNUSED - 69))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 69))
      | (1ULL << (ObjectiveCParser::NULLABLE - 69))
      | (1ULL << (ObjectiveCParser::NONNULL - 69))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 69))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 69))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 69))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 69))
      | (1ULL << (ObjectiveCParser::ASSIGN - 69))
      | (1ULL << (ObjectiveCParser::COPY - 69))
      | (1ULL << (ObjectiveCParser::GETTER - 69))
      | (1ULL << (ObjectiveCParser::SETTER - 69))
      | (1ULL << (ObjectiveCParser::STRONG - 69))
      | (1ULL << (ObjectiveCParser::READONLY - 69))
      | (1ULL << (ObjectiveCParser::READWRITE - 69))
      | (1ULL << (ObjectiveCParser::WEAK - 69))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 69))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 69))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 69))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 69))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 69))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 69))
      | (1ULL << (ObjectiveCParser::LP - 69))
      | (1ULL << (ObjectiveCParser::LBRACK - 69)))) != 0) || ((((_la - 136) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 136)) & ((1ULL << (ObjectiveCParser::AT - 136))
      | (1ULL << (ObjectiveCParser::BANG - 136))
      | (1ULL << (ObjectiveCParser::TILDE - 136))
      | (1ULL << (ObjectiveCParser::INC - 136))
      | (1ULL << (ObjectiveCParser::DEC - 136))
      | (1ULL << (ObjectiveCParser::ADD - 136))
      | (1ULL << (ObjectiveCParser::SUB - 136))
      | (1ULL << (ObjectiveCParser::MUL - 136))
      | (1ULL << (ObjectiveCParser::BITAND - 136))
      | (1ULL << (ObjectiveCParser::BITXOR - 136))
      | (1ULL << (ObjectiveCParser::CHARACTER_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::STRING_START - 136))
      | (1ULL << (ObjectiveCParser::HEX_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::OCTAL_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::BINARY_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::DECIMAL_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::FLOATING_POINT_LITERAL - 136)))) != 0)) {
      setState(692);
      expressions();
      setState(694);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ObjectiveCParser::COMMA) {
        setState(693);
        match(ObjectiveCParser::COMMA);
      }
    }
    setState(698);
    match(ObjectiveCParser::RBRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BoxExpressionContext ------------------------------------------------------------------

ObjectiveCParser::BoxExpressionContext::BoxExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::BoxExpressionContext::AT() {
  return getToken(ObjectiveCParser::AT, 0);
}

tree::TerminalNode* ObjectiveCParser::BoxExpressionContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

ObjectiveCParser::ExpressionContext* ObjectiveCParser::BoxExpressionContext::expression() {
  return getRuleContext<ObjectiveCParser::ExpressionContext>(0);
}

tree::TerminalNode* ObjectiveCParser::BoxExpressionContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

ObjectiveCParser::ConstantContext* ObjectiveCParser::BoxExpressionContext::constant() {
  return getRuleContext<ObjectiveCParser::ConstantContext>(0);
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::BoxExpressionContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}


size_t ObjectiveCParser::BoxExpressionContext::getRuleIndex() const {
  return ObjectiveCParser::RuleBoxExpression;
}

void ObjectiveCParser::BoxExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoxExpression(this);
}

void ObjectiveCParser::BoxExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoxExpression(this);
}


antlrcpp::Any ObjectiveCParser::BoxExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitBoxExpression(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::BoxExpressionContext* ObjectiveCParser::boxExpression() {
  BoxExpressionContext *_localctx = _tracker.createInstance<BoxExpressionContext>(_ctx, getState());
  enterRule(_localctx, 82, ObjectiveCParser::RuleBoxExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(710);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(700);
      match(ObjectiveCParser::AT);
      setState(701);
      match(ObjectiveCParser::LP);
      setState(702);
      expression(0);
      setState(703);
      match(ObjectiveCParser::RP);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(705);
      match(ObjectiveCParser::AT);
      setState(708);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ObjectiveCParser::TRUE:
        case ObjectiveCParser::FALSE:
        case ObjectiveCParser::NIL:
        case ObjectiveCParser::NO:
        case ObjectiveCParser::NULL_:
        case ObjectiveCParser::YES:
        case ObjectiveCParser::ADD:
        case ObjectiveCParser::SUB:
        case ObjectiveCParser::CHARACTER_LITERAL:
        case ObjectiveCParser::HEX_LITERAL:
        case ObjectiveCParser::OCTAL_LITERAL:
        case ObjectiveCParser::BINARY_LITERAL:
        case ObjectiveCParser::DECIMAL_LITERAL:
        case ObjectiveCParser::FLOATING_POINT_LITERAL: {
          setState(706);
          constant();
          break;
        }

        case ObjectiveCParser::BOOL:
        case ObjectiveCParser::Class:
        case ObjectiveCParser::BYCOPY:
        case ObjectiveCParser::BYREF:
        case ObjectiveCParser::ID:
        case ObjectiveCParser::IMP:
        case ObjectiveCParser::IN:
        case ObjectiveCParser::INOUT:
        case ObjectiveCParser::ONEWAY:
        case ObjectiveCParser::OUT:
        case ObjectiveCParser::PROTOCOL_:
        case ObjectiveCParser::SEL:
        case ObjectiveCParser::SELF:
        case ObjectiveCParser::SUPER:
        case ObjectiveCParser::ATOMIC:
        case ObjectiveCParser::NONATOMIC:
        case ObjectiveCParser::RETAIN:
        case ObjectiveCParser::AUTORELEASING_QUALIFIER:
        case ObjectiveCParser::BLOCK:
        case ObjectiveCParser::BRIDGE_RETAINED:
        case ObjectiveCParser::BRIDGE_TRANSFER:
        case ObjectiveCParser::COVARIANT:
        case ObjectiveCParser::CONTRAVARIANT:
        case ObjectiveCParser::DEPRECATED:
        case ObjectiveCParser::KINDOF:
        case ObjectiveCParser::UNUSED:
        case ObjectiveCParser::NULL_UNSPECIFIED:
        case ObjectiveCParser::NULLABLE:
        case ObjectiveCParser::NONNULL:
        case ObjectiveCParser::NULL_RESETTABLE:
        case ObjectiveCParser::NS_INLINE:
        case ObjectiveCParser::NS_ENUM:
        case ObjectiveCParser::NS_OPTIONS:
        case ObjectiveCParser::ASSIGN:
        case ObjectiveCParser::COPY:
        case ObjectiveCParser::GETTER:
        case ObjectiveCParser::SETTER:
        case ObjectiveCParser::STRONG:
        case ObjectiveCParser::READONLY:
        case ObjectiveCParser::READWRITE:
        case ObjectiveCParser::WEAK:
        case ObjectiveCParser::UNSAFE_UNRETAINED:
        case ObjectiveCParser::IB_OUTLET:
        case ObjectiveCParser::IB_OUTLET_COLLECTION:
        case ObjectiveCParser::IB_INSPECTABLE:
        case ObjectiveCParser::IB_DESIGNABLE:
        case ObjectiveCParser::IDENTIFIER: {
          setState(707);
          identifier();
          break;
        }

      default:
        throw NoViableAltException(this);
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

//----------------- BlockParametersContext ------------------------------------------------------------------

ObjectiveCParser::BlockParametersContext::BlockParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::BlockParametersContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

tree::TerminalNode* ObjectiveCParser::BlockParametersContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

std::vector<ObjectiveCParser::TypeVariableDeclaratorOrNameContext *> ObjectiveCParser::BlockParametersContext::typeVariableDeclaratorOrName() {
  return getRuleContexts<ObjectiveCParser::TypeVariableDeclaratorOrNameContext>();
}

ObjectiveCParser::TypeVariableDeclaratorOrNameContext* ObjectiveCParser::BlockParametersContext::typeVariableDeclaratorOrName(size_t i) {
  return getRuleContext<ObjectiveCParser::TypeVariableDeclaratorOrNameContext>(i);
}

tree::TerminalNode* ObjectiveCParser::BlockParametersContext::VOID() {
  return getToken(ObjectiveCParser::VOID, 0);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::BlockParametersContext::COMMA() {
  return getTokens(ObjectiveCParser::COMMA);
}

tree::TerminalNode* ObjectiveCParser::BlockParametersContext::COMMA(size_t i) {
  return getToken(ObjectiveCParser::COMMA, i);
}


size_t ObjectiveCParser::BlockParametersContext::getRuleIndex() const {
  return ObjectiveCParser::RuleBlockParameters;
}

void ObjectiveCParser::BlockParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockParameters(this);
}

void ObjectiveCParser::BlockParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockParameters(this);
}


antlrcpp::Any ObjectiveCParser::BlockParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitBlockParameters(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::BlockParametersContext* ObjectiveCParser::blockParameters() {
  BlockParametersContext *_localctx = _tracker.createInstance<BlockParametersContext>(_ctx, getState());
  enterRule(_localctx, 84, ObjectiveCParser::RuleBlockParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(712);
    match(ObjectiveCParser::LP);
    setState(724);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::AUTO)
      | (1ULL << ObjectiveCParser::CHAR)
      | (1ULL << ObjectiveCParser::CONST)
      | (1ULL << ObjectiveCParser::DOUBLE)
      | (1ULL << ObjectiveCParser::ENUM)
      | (1ULL << ObjectiveCParser::EXTERN)
      | (1ULL << ObjectiveCParser::FLOAT)
      | (1ULL << ObjectiveCParser::INLINE)
      | (1ULL << ObjectiveCParser::INT)
      | (1ULL << ObjectiveCParser::LONG)
      | (1ULL << ObjectiveCParser::REGISTER)
      | (1ULL << ObjectiveCParser::RESTRICT)
      | (1ULL << ObjectiveCParser::SHORT)
      | (1ULL << ObjectiveCParser::SIGNED)
      | (1ULL << ObjectiveCParser::STATIC)
      | (1ULL << ObjectiveCParser::STRUCT)
      | (1ULL << ObjectiveCParser::UNION)
      | (1ULL << ObjectiveCParser::UNSIGNED)
      | (1ULL << ObjectiveCParser::VOID)
      | (1ULL << ObjectiveCParser::VOLATILE)
      | (1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 81)) & ((1ULL << (ObjectiveCParser::ATOMIC - 81))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 81))
      | (1ULL << (ObjectiveCParser::RETAIN - 81))
      | (1ULL << (ObjectiveCParser::ATTRIBUTE - 81))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 81))
      | (1ULL << (ObjectiveCParser::BLOCK - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 81))
      | (1ULL << (ObjectiveCParser::COVARIANT - 81))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 81))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 81))
      | (1ULL << (ObjectiveCParser::KINDOF - 81))
      | (1ULL << (ObjectiveCParser::STRONG_QUALIFIER - 81))
      | (1ULL << (ObjectiveCParser::TYPEOF - 81))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED_QUALIFIER - 81))
      | (1ULL << (ObjectiveCParser::UNUSED - 81))
      | (1ULL << (ObjectiveCParser::WEAK_QUALIFIER - 81))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 81))
      | (1ULL << (ObjectiveCParser::NULLABLE - 81))
      | (1ULL << (ObjectiveCParser::NONNULL - 81))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 81))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 81))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 81))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 81))
      | (1ULL << (ObjectiveCParser::ASSIGN - 81))
      | (1ULL << (ObjectiveCParser::COPY - 81))
      | (1ULL << (ObjectiveCParser::GETTER - 81))
      | (1ULL << (ObjectiveCParser::SETTER - 81))
      | (1ULL << (ObjectiveCParser::STRONG - 81))
      | (1ULL << (ObjectiveCParser::READONLY - 81))
      | (1ULL << (ObjectiveCParser::READWRITE - 81))
      | (1ULL << (ObjectiveCParser::WEAK - 81))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 81))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 81))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 81))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 81))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 81))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 81)))) != 0)) {
      setState(715);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
      case 1: {
        setState(713);
        typeVariableDeclaratorOrName();
        break;
      }

      case 2: {
        setState(714);
        match(ObjectiveCParser::VOID);
        break;
      }

      }
      setState(721);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ObjectiveCParser::COMMA) {
        setState(717);
        match(ObjectiveCParser::COMMA);
        setState(718);
        typeVariableDeclaratorOrName();
        setState(723);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(726);
    match(ObjectiveCParser::RP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeVariableDeclaratorOrNameContext ------------------------------------------------------------------

ObjectiveCParser::TypeVariableDeclaratorOrNameContext::TypeVariableDeclaratorOrNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::TypeVariableDeclaratorContext* ObjectiveCParser::TypeVariableDeclaratorOrNameContext::typeVariableDeclarator() {
  return getRuleContext<ObjectiveCParser::TypeVariableDeclaratorContext>(0);
}

ObjectiveCParser::TypeNameContext* ObjectiveCParser::TypeVariableDeclaratorOrNameContext::typeName() {
  return getRuleContext<ObjectiveCParser::TypeNameContext>(0);
}


size_t ObjectiveCParser::TypeVariableDeclaratorOrNameContext::getRuleIndex() const {
  return ObjectiveCParser::RuleTypeVariableDeclaratorOrName;
}

void ObjectiveCParser::TypeVariableDeclaratorOrNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeVariableDeclaratorOrName(this);
}

void ObjectiveCParser::TypeVariableDeclaratorOrNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeVariableDeclaratorOrName(this);
}


antlrcpp::Any ObjectiveCParser::TypeVariableDeclaratorOrNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitTypeVariableDeclaratorOrName(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::TypeVariableDeclaratorOrNameContext* ObjectiveCParser::typeVariableDeclaratorOrName() {
  TypeVariableDeclaratorOrNameContext *_localctx = _tracker.createInstance<TypeVariableDeclaratorOrNameContext>(_ctx, getState());
  enterRule(_localctx, 86, ObjectiveCParser::RuleTypeVariableDeclaratorOrName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(730);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(728);
      typeVariableDeclarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(729);
      typeName();
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

//----------------- BlockExpressionContext ------------------------------------------------------------------

ObjectiveCParser::BlockExpressionContext::BlockExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::BlockExpressionContext::BITXOR() {
  return getToken(ObjectiveCParser::BITXOR, 0);
}

ObjectiveCParser::CompoundStatementContext* ObjectiveCParser::BlockExpressionContext::compoundStatement() {
  return getRuleContext<ObjectiveCParser::CompoundStatementContext>(0);
}

ObjectiveCParser::TypeSpecifierContext* ObjectiveCParser::BlockExpressionContext::typeSpecifier() {
  return getRuleContext<ObjectiveCParser::TypeSpecifierContext>(0);
}

ObjectiveCParser::NullabilitySpecifierContext* ObjectiveCParser::BlockExpressionContext::nullabilitySpecifier() {
  return getRuleContext<ObjectiveCParser::NullabilitySpecifierContext>(0);
}

ObjectiveCParser::BlockParametersContext* ObjectiveCParser::BlockExpressionContext::blockParameters() {
  return getRuleContext<ObjectiveCParser::BlockParametersContext>(0);
}


size_t ObjectiveCParser::BlockExpressionContext::getRuleIndex() const {
  return ObjectiveCParser::RuleBlockExpression;
}

void ObjectiveCParser::BlockExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockExpression(this);
}

void ObjectiveCParser::BlockExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockExpression(this);
}


antlrcpp::Any ObjectiveCParser::BlockExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitBlockExpression(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::BlockExpressionContext* ObjectiveCParser::blockExpression() {
  BlockExpressionContext *_localctx = _tracker.createInstance<BlockExpressionContext>(_ctx, getState());
  enterRule(_localctx, 88, ObjectiveCParser::RuleBlockExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(732);
    match(ObjectiveCParser::BITXOR);
    setState(734);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      setState(733);
      typeSpecifier();
      break;
    }

    }
    setState(737);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 99) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 99)) & ((1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 99))
      | (1ULL << (ObjectiveCParser::NULLABLE - 99))
      | (1ULL << (ObjectiveCParser::NONNULL - 99))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 99)))) != 0)) {
      setState(736);
      nullabilitySpecifier();
    }
    setState(740);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::LP) {
      setState(739);
      blockParameters();
    }
    setState(742);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MessageExpressionContext ------------------------------------------------------------------

ObjectiveCParser::MessageExpressionContext::MessageExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::MessageExpressionContext::LBRACK() {
  return getToken(ObjectiveCParser::LBRACK, 0);
}

ObjectiveCParser::ReceiverContext* ObjectiveCParser::MessageExpressionContext::receiver() {
  return getRuleContext<ObjectiveCParser::ReceiverContext>(0);
}

ObjectiveCParser::MessageSelectorContext* ObjectiveCParser::MessageExpressionContext::messageSelector() {
  return getRuleContext<ObjectiveCParser::MessageSelectorContext>(0);
}

tree::TerminalNode* ObjectiveCParser::MessageExpressionContext::RBRACK() {
  return getToken(ObjectiveCParser::RBRACK, 0);
}


size_t ObjectiveCParser::MessageExpressionContext::getRuleIndex() const {
  return ObjectiveCParser::RuleMessageExpression;
}

void ObjectiveCParser::MessageExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessageExpression(this);
}

void ObjectiveCParser::MessageExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessageExpression(this);
}


antlrcpp::Any ObjectiveCParser::MessageExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitMessageExpression(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::MessageExpressionContext* ObjectiveCParser::messageExpression() {
  MessageExpressionContext *_localctx = _tracker.createInstance<MessageExpressionContext>(_ctx, getState());
  enterRule(_localctx, 90, ObjectiveCParser::RuleMessageExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(744);
    match(ObjectiveCParser::LBRACK);
    setState(745);
    receiver();
    setState(746);
    messageSelector();
    setState(747);
    match(ObjectiveCParser::RBRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReceiverContext ------------------------------------------------------------------

ObjectiveCParser::ReceiverContext::ReceiverContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::ExpressionContext* ObjectiveCParser::ReceiverContext::expression() {
  return getRuleContext<ObjectiveCParser::ExpressionContext>(0);
}

ObjectiveCParser::TypeSpecifierContext* ObjectiveCParser::ReceiverContext::typeSpecifier() {
  return getRuleContext<ObjectiveCParser::TypeSpecifierContext>(0);
}


size_t ObjectiveCParser::ReceiverContext::getRuleIndex() const {
  return ObjectiveCParser::RuleReceiver;
}

void ObjectiveCParser::ReceiverContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReceiver(this);
}

void ObjectiveCParser::ReceiverContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReceiver(this);
}


antlrcpp::Any ObjectiveCParser::ReceiverContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitReceiver(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ReceiverContext* ObjectiveCParser::receiver() {
  ReceiverContext *_localctx = _tracker.createInstance<ReceiverContext>(_ctx, getState());
  enterRule(_localctx, 92, ObjectiveCParser::RuleReceiver);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(751);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(749);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(750);
      typeSpecifier();
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

//----------------- MessageSelectorContext ------------------------------------------------------------------

ObjectiveCParser::MessageSelectorContext::MessageSelectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::SelectorContext* ObjectiveCParser::MessageSelectorContext::selector() {
  return getRuleContext<ObjectiveCParser::SelectorContext>(0);
}

std::vector<ObjectiveCParser::KeywordArgumentContext *> ObjectiveCParser::MessageSelectorContext::keywordArgument() {
  return getRuleContexts<ObjectiveCParser::KeywordArgumentContext>();
}

ObjectiveCParser::KeywordArgumentContext* ObjectiveCParser::MessageSelectorContext::keywordArgument(size_t i) {
  return getRuleContext<ObjectiveCParser::KeywordArgumentContext>(i);
}


size_t ObjectiveCParser::MessageSelectorContext::getRuleIndex() const {
  return ObjectiveCParser::RuleMessageSelector;
}

void ObjectiveCParser::MessageSelectorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessageSelector(this);
}

void ObjectiveCParser::MessageSelectorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessageSelector(this);
}


antlrcpp::Any ObjectiveCParser::MessageSelectorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitMessageSelector(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::MessageSelectorContext* ObjectiveCParser::messageSelector() {
  MessageSelectorContext *_localctx = _tracker.createInstance<MessageSelectorContext>(_ctx, getState());
  enterRule(_localctx, 94, ObjectiveCParser::RuleMessageSelector);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(759);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(753);
      selector();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(755); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(754);
        keywordArgument();
        setState(757); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ObjectiveCParser::RETURN)
        | (1ULL << ObjectiveCParser::BOOL)
        | (1ULL << ObjectiveCParser::Class)
        | (1ULL << ObjectiveCParser::BYCOPY)
        | (1ULL << ObjectiveCParser::BYREF)
        | (1ULL << ObjectiveCParser::ID)
        | (1ULL << ObjectiveCParser::IMP)
        | (1ULL << ObjectiveCParser::IN)
        | (1ULL << ObjectiveCParser::INOUT)
        | (1ULL << ObjectiveCParser::ONEWAY)
        | (1ULL << ObjectiveCParser::OUT)
        | (1ULL << ObjectiveCParser::PROTOCOL_)
        | (1ULL << ObjectiveCParser::SEL)
        | (1ULL << ObjectiveCParser::SELF)
        | (1ULL << ObjectiveCParser::SUPER))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 81)) & ((1ULL << (ObjectiveCParser::ATOMIC - 81))
        | (1ULL << (ObjectiveCParser::NONATOMIC - 81))
        | (1ULL << (ObjectiveCParser::RETAIN - 81))
        | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 81))
        | (1ULL << (ObjectiveCParser::BLOCK - 81))
        | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 81))
        | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 81))
        | (1ULL << (ObjectiveCParser::COVARIANT - 81))
        | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 81))
        | (1ULL << (ObjectiveCParser::DEPRECATED - 81))
        | (1ULL << (ObjectiveCParser::KINDOF - 81))
        | (1ULL << (ObjectiveCParser::UNUSED - 81))
        | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 81))
        | (1ULL << (ObjectiveCParser::NULLABLE - 81))
        | (1ULL << (ObjectiveCParser::NONNULL - 81))
        | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 81))
        | (1ULL << (ObjectiveCParser::NS_INLINE - 81))
        | (1ULL << (ObjectiveCParser::NS_ENUM - 81))
        | (1ULL << (ObjectiveCParser::NS_OPTIONS - 81))
        | (1ULL << (ObjectiveCParser::ASSIGN - 81))
        | (1ULL << (ObjectiveCParser::COPY - 81))
        | (1ULL << (ObjectiveCParser::GETTER - 81))
        | (1ULL << (ObjectiveCParser::SETTER - 81))
        | (1ULL << (ObjectiveCParser::STRONG - 81))
        | (1ULL << (ObjectiveCParser::READONLY - 81))
        | (1ULL << (ObjectiveCParser::READWRITE - 81))
        | (1ULL << (ObjectiveCParser::WEAK - 81))
        | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 81))
        | (1ULL << (ObjectiveCParser::IB_OUTLET - 81))
        | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 81))
        | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 81))
        | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 81))
        | (1ULL << (ObjectiveCParser::IDENTIFIER - 81))
        | (1ULL << (ObjectiveCParser::COLON - 81)))) != 0));
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

//----------------- KeywordArgumentContext ------------------------------------------------------------------

ObjectiveCParser::KeywordArgumentContext::KeywordArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::KeywordArgumentContext::COLON() {
  return getToken(ObjectiveCParser::COLON, 0);
}

std::vector<ObjectiveCParser::KeywordArgumentTypeContext *> ObjectiveCParser::KeywordArgumentContext::keywordArgumentType() {
  return getRuleContexts<ObjectiveCParser::KeywordArgumentTypeContext>();
}

ObjectiveCParser::KeywordArgumentTypeContext* ObjectiveCParser::KeywordArgumentContext::keywordArgumentType(size_t i) {
  return getRuleContext<ObjectiveCParser::KeywordArgumentTypeContext>(i);
}

ObjectiveCParser::SelectorContext* ObjectiveCParser::KeywordArgumentContext::selector() {
  return getRuleContext<ObjectiveCParser::SelectorContext>(0);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::KeywordArgumentContext::COMMA() {
  return getTokens(ObjectiveCParser::COMMA);
}

tree::TerminalNode* ObjectiveCParser::KeywordArgumentContext::COMMA(size_t i) {
  return getToken(ObjectiveCParser::COMMA, i);
}


size_t ObjectiveCParser::KeywordArgumentContext::getRuleIndex() const {
  return ObjectiveCParser::RuleKeywordArgument;
}

void ObjectiveCParser::KeywordArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeywordArgument(this);
}

void ObjectiveCParser::KeywordArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeywordArgument(this);
}


antlrcpp::Any ObjectiveCParser::KeywordArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitKeywordArgument(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::KeywordArgumentContext* ObjectiveCParser::keywordArgument() {
  KeywordArgumentContext *_localctx = _tracker.createInstance<KeywordArgumentContext>(_ctx, getState());
  enterRule(_localctx, 96, ObjectiveCParser::RuleKeywordArgument);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(762);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::RETURN)
      | (1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 81)) & ((1ULL << (ObjectiveCParser::ATOMIC - 81))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 81))
      | (1ULL << (ObjectiveCParser::RETAIN - 81))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 81))
      | (1ULL << (ObjectiveCParser::BLOCK - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 81))
      | (1ULL << (ObjectiveCParser::COVARIANT - 81))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 81))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 81))
      | (1ULL << (ObjectiveCParser::KINDOF - 81))
      | (1ULL << (ObjectiveCParser::UNUSED - 81))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 81))
      | (1ULL << (ObjectiveCParser::NULLABLE - 81))
      | (1ULL << (ObjectiveCParser::NONNULL - 81))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 81))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 81))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 81))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 81))
      | (1ULL << (ObjectiveCParser::ASSIGN - 81))
      | (1ULL << (ObjectiveCParser::COPY - 81))
      | (1ULL << (ObjectiveCParser::GETTER - 81))
      | (1ULL << (ObjectiveCParser::SETTER - 81))
      | (1ULL << (ObjectiveCParser::STRONG - 81))
      | (1ULL << (ObjectiveCParser::READONLY - 81))
      | (1ULL << (ObjectiveCParser::READWRITE - 81))
      | (1ULL << (ObjectiveCParser::WEAK - 81))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 81))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 81))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 81))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 81))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 81))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 81)))) != 0)) {
      setState(761);
      selector();
    }
    setState(764);
    match(ObjectiveCParser::COLON);
    setState(765);
    keywordArgumentType();
    setState(770);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ObjectiveCParser::COMMA) {
      setState(766);
      match(ObjectiveCParser::COMMA);
      setState(767);
      keywordArgumentType();
      setState(772);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeywordArgumentTypeContext ------------------------------------------------------------------

ObjectiveCParser::KeywordArgumentTypeContext::KeywordArgumentTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::ExpressionsContext* ObjectiveCParser::KeywordArgumentTypeContext::expressions() {
  return getRuleContext<ObjectiveCParser::ExpressionsContext>(0);
}

ObjectiveCParser::NullabilitySpecifierContext* ObjectiveCParser::KeywordArgumentTypeContext::nullabilitySpecifier() {
  return getRuleContext<ObjectiveCParser::NullabilitySpecifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::KeywordArgumentTypeContext::LBRACE() {
  return getToken(ObjectiveCParser::LBRACE, 0);
}

ObjectiveCParser::InitializerListContext* ObjectiveCParser::KeywordArgumentTypeContext::initializerList() {
  return getRuleContext<ObjectiveCParser::InitializerListContext>(0);
}

tree::TerminalNode* ObjectiveCParser::KeywordArgumentTypeContext::RBRACE() {
  return getToken(ObjectiveCParser::RBRACE, 0);
}


size_t ObjectiveCParser::KeywordArgumentTypeContext::getRuleIndex() const {
  return ObjectiveCParser::RuleKeywordArgumentType;
}

void ObjectiveCParser::KeywordArgumentTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeywordArgumentType(this);
}

void ObjectiveCParser::KeywordArgumentTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeywordArgumentType(this);
}


antlrcpp::Any ObjectiveCParser::KeywordArgumentTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitKeywordArgumentType(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::KeywordArgumentTypeContext* ObjectiveCParser::keywordArgumentType() {
  KeywordArgumentTypeContext *_localctx = _tracker.createInstance<KeywordArgumentTypeContext>(_ctx, getState());
  enterRule(_localctx, 98, ObjectiveCParser::RuleKeywordArgumentType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(773);
    expressions();
    setState(775);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
    case 1: {
      setState(774);
      nullabilitySpecifier();
      break;
    }

    }
    setState(781);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::LBRACE) {
      setState(777);
      match(ObjectiveCParser::LBRACE);
      setState(778);
      initializerList();
      setState(779);
      match(ObjectiveCParser::RBRACE);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectorExpressionContext ------------------------------------------------------------------

ObjectiveCParser::SelectorExpressionContext::SelectorExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::SelectorExpressionContext::SELECTOR() {
  return getToken(ObjectiveCParser::SELECTOR, 0);
}

tree::TerminalNode* ObjectiveCParser::SelectorExpressionContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

ObjectiveCParser::SelectorNameContext* ObjectiveCParser::SelectorExpressionContext::selectorName() {
  return getRuleContext<ObjectiveCParser::SelectorNameContext>(0);
}

tree::TerminalNode* ObjectiveCParser::SelectorExpressionContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}


size_t ObjectiveCParser::SelectorExpressionContext::getRuleIndex() const {
  return ObjectiveCParser::RuleSelectorExpression;
}

void ObjectiveCParser::SelectorExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectorExpression(this);
}

void ObjectiveCParser::SelectorExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectorExpression(this);
}


antlrcpp::Any ObjectiveCParser::SelectorExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitSelectorExpression(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::SelectorExpressionContext* ObjectiveCParser::selectorExpression() {
  SelectorExpressionContext *_localctx = _tracker.createInstance<SelectorExpressionContext>(_ctx, getState());
  enterRule(_localctx, 100, ObjectiveCParser::RuleSelectorExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(783);
    match(ObjectiveCParser::SELECTOR);
    setState(784);
    match(ObjectiveCParser::LP);
    setState(785);
    selectorName();
    setState(786);
    match(ObjectiveCParser::RP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectorNameContext ------------------------------------------------------------------

ObjectiveCParser::SelectorNameContext::SelectorNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ObjectiveCParser::SelectorContext *> ObjectiveCParser::SelectorNameContext::selector() {
  return getRuleContexts<ObjectiveCParser::SelectorContext>();
}

ObjectiveCParser::SelectorContext* ObjectiveCParser::SelectorNameContext::selector(size_t i) {
  return getRuleContext<ObjectiveCParser::SelectorContext>(i);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::SelectorNameContext::COLON() {
  return getTokens(ObjectiveCParser::COLON);
}

tree::TerminalNode* ObjectiveCParser::SelectorNameContext::COLON(size_t i) {
  return getToken(ObjectiveCParser::COLON, i);
}


size_t ObjectiveCParser::SelectorNameContext::getRuleIndex() const {
  return ObjectiveCParser::RuleSelectorName;
}

void ObjectiveCParser::SelectorNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectorName(this);
}

void ObjectiveCParser::SelectorNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectorName(this);
}


antlrcpp::Any ObjectiveCParser::SelectorNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitSelectorName(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::SelectorNameContext* ObjectiveCParser::selectorName() {
  SelectorNameContext *_localctx = _tracker.createInstance<SelectorNameContext>(_ctx, getState());
  enterRule(_localctx, 102, ObjectiveCParser::RuleSelectorName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(797);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(788);
      selector();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(793); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(790);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << ObjectiveCParser::RETURN)
          | (1ULL << ObjectiveCParser::BOOL)
          | (1ULL << ObjectiveCParser::Class)
          | (1ULL << ObjectiveCParser::BYCOPY)
          | (1ULL << ObjectiveCParser::BYREF)
          | (1ULL << ObjectiveCParser::ID)
          | (1ULL << ObjectiveCParser::IMP)
          | (1ULL << ObjectiveCParser::IN)
          | (1ULL << ObjectiveCParser::INOUT)
          | (1ULL << ObjectiveCParser::ONEWAY)
          | (1ULL << ObjectiveCParser::OUT)
          | (1ULL << ObjectiveCParser::PROTOCOL_)
          | (1ULL << ObjectiveCParser::SEL)
          | (1ULL << ObjectiveCParser::SELF)
          | (1ULL << ObjectiveCParser::SUPER))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 81)) & ((1ULL << (ObjectiveCParser::ATOMIC - 81))
          | (1ULL << (ObjectiveCParser::NONATOMIC - 81))
          | (1ULL << (ObjectiveCParser::RETAIN - 81))
          | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 81))
          | (1ULL << (ObjectiveCParser::BLOCK - 81))
          | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 81))
          | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 81))
          | (1ULL << (ObjectiveCParser::COVARIANT - 81))
          | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 81))
          | (1ULL << (ObjectiveCParser::DEPRECATED - 81))
          | (1ULL << (ObjectiveCParser::KINDOF - 81))
          | (1ULL << (ObjectiveCParser::UNUSED - 81))
          | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 81))
          | (1ULL << (ObjectiveCParser::NULLABLE - 81))
          | (1ULL << (ObjectiveCParser::NONNULL - 81))
          | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 81))
          | (1ULL << (ObjectiveCParser::NS_INLINE - 81))
          | (1ULL << (ObjectiveCParser::NS_ENUM - 81))
          | (1ULL << (ObjectiveCParser::NS_OPTIONS - 81))
          | (1ULL << (ObjectiveCParser::ASSIGN - 81))
          | (1ULL << (ObjectiveCParser::COPY - 81))
          | (1ULL << (ObjectiveCParser::GETTER - 81))
          | (1ULL << (ObjectiveCParser::SETTER - 81))
          | (1ULL << (ObjectiveCParser::STRONG - 81))
          | (1ULL << (ObjectiveCParser::READONLY - 81))
          | (1ULL << (ObjectiveCParser::READWRITE - 81))
          | (1ULL << (ObjectiveCParser::WEAK - 81))
          | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 81))
          | (1ULL << (ObjectiveCParser::IB_OUTLET - 81))
          | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 81))
          | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 81))
          | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 81))
          | (1ULL << (ObjectiveCParser::IDENTIFIER - 81)))) != 0)) {
          setState(789);
          selector();
        }
        setState(792);
        match(ObjectiveCParser::COLON);
        setState(795); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ObjectiveCParser::RETURN)
        | (1ULL << ObjectiveCParser::BOOL)
        | (1ULL << ObjectiveCParser::Class)
        | (1ULL << ObjectiveCParser::BYCOPY)
        | (1ULL << ObjectiveCParser::BYREF)
        | (1ULL << ObjectiveCParser::ID)
        | (1ULL << ObjectiveCParser::IMP)
        | (1ULL << ObjectiveCParser::IN)
        | (1ULL << ObjectiveCParser::INOUT)
        | (1ULL << ObjectiveCParser::ONEWAY)
        | (1ULL << ObjectiveCParser::OUT)
        | (1ULL << ObjectiveCParser::PROTOCOL_)
        | (1ULL << ObjectiveCParser::SEL)
        | (1ULL << ObjectiveCParser::SELF)
        | (1ULL << ObjectiveCParser::SUPER))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 81)) & ((1ULL << (ObjectiveCParser::ATOMIC - 81))
        | (1ULL << (ObjectiveCParser::NONATOMIC - 81))
        | (1ULL << (ObjectiveCParser::RETAIN - 81))
        | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 81))
        | (1ULL << (ObjectiveCParser::BLOCK - 81))
        | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 81))
        | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 81))
        | (1ULL << (ObjectiveCParser::COVARIANT - 81))
        | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 81))
        | (1ULL << (ObjectiveCParser::DEPRECATED - 81))
        | (1ULL << (ObjectiveCParser::KINDOF - 81))
        | (1ULL << (ObjectiveCParser::UNUSED - 81))
        | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 81))
        | (1ULL << (ObjectiveCParser::NULLABLE - 81))
        | (1ULL << (ObjectiveCParser::NONNULL - 81))
        | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 81))
        | (1ULL << (ObjectiveCParser::NS_INLINE - 81))
        | (1ULL << (ObjectiveCParser::NS_ENUM - 81))
        | (1ULL << (ObjectiveCParser::NS_OPTIONS - 81))
        | (1ULL << (ObjectiveCParser::ASSIGN - 81))
        | (1ULL << (ObjectiveCParser::COPY - 81))
        | (1ULL << (ObjectiveCParser::GETTER - 81))
        | (1ULL << (ObjectiveCParser::SETTER - 81))
        | (1ULL << (ObjectiveCParser::STRONG - 81))
        | (1ULL << (ObjectiveCParser::READONLY - 81))
        | (1ULL << (ObjectiveCParser::READWRITE - 81))
        | (1ULL << (ObjectiveCParser::WEAK - 81))
        | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 81))
        | (1ULL << (ObjectiveCParser::IB_OUTLET - 81))
        | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 81))
        | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 81))
        | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 81))
        | (1ULL << (ObjectiveCParser::IDENTIFIER - 81))
        | (1ULL << (ObjectiveCParser::COLON - 81)))) != 0));
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

//----------------- ProtocolExpressionContext ------------------------------------------------------------------

ObjectiveCParser::ProtocolExpressionContext::ProtocolExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::ProtocolExpressionContext::PROTOCOL() {
  return getToken(ObjectiveCParser::PROTOCOL, 0);
}

tree::TerminalNode* ObjectiveCParser::ProtocolExpressionContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

ObjectiveCParser::ProtocolNameContext* ObjectiveCParser::ProtocolExpressionContext::protocolName() {
  return getRuleContext<ObjectiveCParser::ProtocolNameContext>(0);
}

tree::TerminalNode* ObjectiveCParser::ProtocolExpressionContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}


size_t ObjectiveCParser::ProtocolExpressionContext::getRuleIndex() const {
  return ObjectiveCParser::RuleProtocolExpression;
}

void ObjectiveCParser::ProtocolExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProtocolExpression(this);
}

void ObjectiveCParser::ProtocolExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProtocolExpression(this);
}


antlrcpp::Any ObjectiveCParser::ProtocolExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitProtocolExpression(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ProtocolExpressionContext* ObjectiveCParser::protocolExpression() {
  ProtocolExpressionContext *_localctx = _tracker.createInstance<ProtocolExpressionContext>(_ctx, getState());
  enterRule(_localctx, 104, ObjectiveCParser::RuleProtocolExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(799);
    match(ObjectiveCParser::PROTOCOL);
    setState(800);
    match(ObjectiveCParser::LP);
    setState(801);
    protocolName();
    setState(802);
    match(ObjectiveCParser::RP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EncodeExpressionContext ------------------------------------------------------------------

ObjectiveCParser::EncodeExpressionContext::EncodeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::EncodeExpressionContext::ENCODE() {
  return getToken(ObjectiveCParser::ENCODE, 0);
}

tree::TerminalNode* ObjectiveCParser::EncodeExpressionContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

ObjectiveCParser::TypeNameContext* ObjectiveCParser::EncodeExpressionContext::typeName() {
  return getRuleContext<ObjectiveCParser::TypeNameContext>(0);
}

tree::TerminalNode* ObjectiveCParser::EncodeExpressionContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}


size_t ObjectiveCParser::EncodeExpressionContext::getRuleIndex() const {
  return ObjectiveCParser::RuleEncodeExpression;
}

void ObjectiveCParser::EncodeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEncodeExpression(this);
}

void ObjectiveCParser::EncodeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEncodeExpression(this);
}


antlrcpp::Any ObjectiveCParser::EncodeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitEncodeExpression(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::EncodeExpressionContext* ObjectiveCParser::encodeExpression() {
  EncodeExpressionContext *_localctx = _tracker.createInstance<EncodeExpressionContext>(_ctx, getState());
  enterRule(_localctx, 106, ObjectiveCParser::RuleEncodeExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(804);
    match(ObjectiveCParser::ENCODE);
    setState(805);
    match(ObjectiveCParser::LP);
    setState(806);
    typeName();
    setState(807);
    match(ObjectiveCParser::RP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeVariableDeclaratorContext ------------------------------------------------------------------

ObjectiveCParser::TypeVariableDeclaratorContext::TypeVariableDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::DeclarationSpecifiersContext* ObjectiveCParser::TypeVariableDeclaratorContext::declarationSpecifiers() {
  return getRuleContext<ObjectiveCParser::DeclarationSpecifiersContext>(0);
}

ObjectiveCParser::DeclaratorContext* ObjectiveCParser::TypeVariableDeclaratorContext::declarator() {
  return getRuleContext<ObjectiveCParser::DeclaratorContext>(0);
}


size_t ObjectiveCParser::TypeVariableDeclaratorContext::getRuleIndex() const {
  return ObjectiveCParser::RuleTypeVariableDeclarator;
}

void ObjectiveCParser::TypeVariableDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeVariableDeclarator(this);
}

void ObjectiveCParser::TypeVariableDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeVariableDeclarator(this);
}


antlrcpp::Any ObjectiveCParser::TypeVariableDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitTypeVariableDeclarator(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::TypeVariableDeclaratorContext* ObjectiveCParser::typeVariableDeclarator() {
  TypeVariableDeclaratorContext *_localctx = _tracker.createInstance<TypeVariableDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 108, ObjectiveCParser::RuleTypeVariableDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(809);
    declarationSpecifiers();
    setState(810);
    declarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThrowStatementContext ------------------------------------------------------------------

ObjectiveCParser::ThrowStatementContext::ThrowStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::ThrowStatementContext::THROW() {
  return getToken(ObjectiveCParser::THROW, 0);
}

tree::TerminalNode* ObjectiveCParser::ThrowStatementContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::ThrowStatementContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::ThrowStatementContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

ObjectiveCParser::ExpressionContext* ObjectiveCParser::ThrowStatementContext::expression() {
  return getRuleContext<ObjectiveCParser::ExpressionContext>(0);
}


size_t ObjectiveCParser::ThrowStatementContext::getRuleIndex() const {
  return ObjectiveCParser::RuleThrowStatement;
}

void ObjectiveCParser::ThrowStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThrowStatement(this);
}

void ObjectiveCParser::ThrowStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThrowStatement(this);
}


antlrcpp::Any ObjectiveCParser::ThrowStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitThrowStatement(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ThrowStatementContext* ObjectiveCParser::throwStatement() {
  ThrowStatementContext *_localctx = _tracker.createInstance<ThrowStatementContext>(_ctx, getState());
  enterRule(_localctx, 110, ObjectiveCParser::RuleThrowStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(819);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(812);
      match(ObjectiveCParser::THROW);
      setState(813);
      match(ObjectiveCParser::LP);
      setState(814);
      identifier();
      setState(815);
      match(ObjectiveCParser::RP);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(817);
      match(ObjectiveCParser::THROW);
      setState(818);
      expression(0);
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

//----------------- TryBlockContext ------------------------------------------------------------------

ObjectiveCParser::TryBlockContext::TryBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::TryBlockContext::TRY() {
  return getToken(ObjectiveCParser::TRY, 0);
}

std::vector<ObjectiveCParser::CompoundStatementContext *> ObjectiveCParser::TryBlockContext::compoundStatement() {
  return getRuleContexts<ObjectiveCParser::CompoundStatementContext>();
}

ObjectiveCParser::CompoundStatementContext* ObjectiveCParser::TryBlockContext::compoundStatement(size_t i) {
  return getRuleContext<ObjectiveCParser::CompoundStatementContext>(i);
}

std::vector<ObjectiveCParser::CatchStatementContext *> ObjectiveCParser::TryBlockContext::catchStatement() {
  return getRuleContexts<ObjectiveCParser::CatchStatementContext>();
}

ObjectiveCParser::CatchStatementContext* ObjectiveCParser::TryBlockContext::catchStatement(size_t i) {
  return getRuleContext<ObjectiveCParser::CatchStatementContext>(i);
}

tree::TerminalNode* ObjectiveCParser::TryBlockContext::FINALLY() {
  return getToken(ObjectiveCParser::FINALLY, 0);
}


size_t ObjectiveCParser::TryBlockContext::getRuleIndex() const {
  return ObjectiveCParser::RuleTryBlock;
}

void ObjectiveCParser::TryBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTryBlock(this);
}

void ObjectiveCParser::TryBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTryBlock(this);
}


antlrcpp::Any ObjectiveCParser::TryBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitTryBlock(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::TryBlockContext* ObjectiveCParser::tryBlock() {
  TryBlockContext *_localctx = _tracker.createInstance<TryBlockContext>(_ctx, getState());
  enterRule(_localctx, 112, ObjectiveCParser::RuleTryBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(821);
    match(ObjectiveCParser::TRY);
    setState(822);
    dynamic_cast<TryBlockContext *>(_localctx)->tryStatement = compoundStatement();
    setState(826);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ObjectiveCParser::CATCH) {
      setState(823);
      catchStatement();
      setState(828);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(831);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::FINALLY) {
      setState(829);
      match(ObjectiveCParser::FINALLY);
      setState(830);
      dynamic_cast<TryBlockContext *>(_localctx)->finallyStatement = compoundStatement();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CatchStatementContext ------------------------------------------------------------------

ObjectiveCParser::CatchStatementContext::CatchStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::CatchStatementContext::CATCH() {
  return getToken(ObjectiveCParser::CATCH, 0);
}

tree::TerminalNode* ObjectiveCParser::CatchStatementContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

ObjectiveCParser::TypeVariableDeclaratorContext* ObjectiveCParser::CatchStatementContext::typeVariableDeclarator() {
  return getRuleContext<ObjectiveCParser::TypeVariableDeclaratorContext>(0);
}

tree::TerminalNode* ObjectiveCParser::CatchStatementContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

ObjectiveCParser::CompoundStatementContext* ObjectiveCParser::CatchStatementContext::compoundStatement() {
  return getRuleContext<ObjectiveCParser::CompoundStatementContext>(0);
}


size_t ObjectiveCParser::CatchStatementContext::getRuleIndex() const {
  return ObjectiveCParser::RuleCatchStatement;
}

void ObjectiveCParser::CatchStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCatchStatement(this);
}

void ObjectiveCParser::CatchStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCatchStatement(this);
}


antlrcpp::Any ObjectiveCParser::CatchStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitCatchStatement(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::CatchStatementContext* ObjectiveCParser::catchStatement() {
  CatchStatementContext *_localctx = _tracker.createInstance<CatchStatementContext>(_ctx, getState());
  enterRule(_localctx, 114, ObjectiveCParser::RuleCatchStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(833);
    match(ObjectiveCParser::CATCH);
    setState(834);
    match(ObjectiveCParser::LP);
    setState(835);
    typeVariableDeclarator();
    setState(836);
    match(ObjectiveCParser::RP);
    setState(837);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SynchronizedStatementContext ------------------------------------------------------------------

ObjectiveCParser::SynchronizedStatementContext::SynchronizedStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::SynchronizedStatementContext::SYNCHRONIZED() {
  return getToken(ObjectiveCParser::SYNCHRONIZED, 0);
}

tree::TerminalNode* ObjectiveCParser::SynchronizedStatementContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

ObjectiveCParser::ExpressionContext* ObjectiveCParser::SynchronizedStatementContext::expression() {
  return getRuleContext<ObjectiveCParser::ExpressionContext>(0);
}

tree::TerminalNode* ObjectiveCParser::SynchronizedStatementContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

ObjectiveCParser::CompoundStatementContext* ObjectiveCParser::SynchronizedStatementContext::compoundStatement() {
  return getRuleContext<ObjectiveCParser::CompoundStatementContext>(0);
}


size_t ObjectiveCParser::SynchronizedStatementContext::getRuleIndex() const {
  return ObjectiveCParser::RuleSynchronizedStatement;
}

void ObjectiveCParser::SynchronizedStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSynchronizedStatement(this);
}

void ObjectiveCParser::SynchronizedStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSynchronizedStatement(this);
}


antlrcpp::Any ObjectiveCParser::SynchronizedStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitSynchronizedStatement(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::SynchronizedStatementContext* ObjectiveCParser::synchronizedStatement() {
  SynchronizedStatementContext *_localctx = _tracker.createInstance<SynchronizedStatementContext>(_ctx, getState());
  enterRule(_localctx, 116, ObjectiveCParser::RuleSynchronizedStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(839);
    match(ObjectiveCParser::SYNCHRONIZED);
    setState(840);
    match(ObjectiveCParser::LP);
    setState(841);
    expression(0);
    setState(842);
    match(ObjectiveCParser::RP);
    setState(843);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AutoreleaseStatementContext ------------------------------------------------------------------

ObjectiveCParser::AutoreleaseStatementContext::AutoreleaseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::AutoreleaseStatementContext::AUTORELEASEPOOL() {
  return getToken(ObjectiveCParser::AUTORELEASEPOOL, 0);
}

ObjectiveCParser::CompoundStatementContext* ObjectiveCParser::AutoreleaseStatementContext::compoundStatement() {
  return getRuleContext<ObjectiveCParser::CompoundStatementContext>(0);
}


size_t ObjectiveCParser::AutoreleaseStatementContext::getRuleIndex() const {
  return ObjectiveCParser::RuleAutoreleaseStatement;
}

void ObjectiveCParser::AutoreleaseStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAutoreleaseStatement(this);
}

void ObjectiveCParser::AutoreleaseStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAutoreleaseStatement(this);
}


antlrcpp::Any ObjectiveCParser::AutoreleaseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitAutoreleaseStatement(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::AutoreleaseStatementContext* ObjectiveCParser::autoreleaseStatement() {
  AutoreleaseStatementContext *_localctx = _tracker.createInstance<AutoreleaseStatementContext>(_ctx, getState());
  enterRule(_localctx, 118, ObjectiveCParser::RuleAutoreleaseStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(845);
    match(ObjectiveCParser::AUTORELEASEPOOL);
    setState(846);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

ObjectiveCParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::FunctionSignatureContext* ObjectiveCParser::FunctionDeclarationContext::functionSignature() {
  return getRuleContext<ObjectiveCParser::FunctionSignatureContext>(0);
}

tree::TerminalNode* ObjectiveCParser::FunctionDeclarationContext::SEMI() {
  return getToken(ObjectiveCParser::SEMI, 0);
}


size_t ObjectiveCParser::FunctionDeclarationContext::getRuleIndex() const {
  return ObjectiveCParser::RuleFunctionDeclaration;
}

void ObjectiveCParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void ObjectiveCParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}


antlrcpp::Any ObjectiveCParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::FunctionDeclarationContext* ObjectiveCParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 120, ObjectiveCParser::RuleFunctionDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(848);
    functionSignature();
    setState(849);
    match(ObjectiveCParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

ObjectiveCParser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::FunctionSignatureContext* ObjectiveCParser::FunctionDefinitionContext::functionSignature() {
  return getRuleContext<ObjectiveCParser::FunctionSignatureContext>(0);
}

ObjectiveCParser::CompoundStatementContext* ObjectiveCParser::FunctionDefinitionContext::compoundStatement() {
  return getRuleContext<ObjectiveCParser::CompoundStatementContext>(0);
}


size_t ObjectiveCParser::FunctionDefinitionContext::getRuleIndex() const {
  return ObjectiveCParser::RuleFunctionDefinition;
}

void ObjectiveCParser::FunctionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefinition(this);
}

void ObjectiveCParser::FunctionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefinition(this);
}


antlrcpp::Any ObjectiveCParser::FunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDefinition(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::FunctionDefinitionContext* ObjectiveCParser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 122, ObjectiveCParser::RuleFunctionDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(851);
    functionSignature();
    setState(852);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionSignatureContext ------------------------------------------------------------------

ObjectiveCParser::FunctionSignatureContext::FunctionSignatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::FunctionSignatureContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::FunctionSignatureContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

tree::TerminalNode* ObjectiveCParser::FunctionSignatureContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

ObjectiveCParser::DeclarationSpecifiersContext* ObjectiveCParser::FunctionSignatureContext::declarationSpecifiers() {
  return getRuleContext<ObjectiveCParser::DeclarationSpecifiersContext>(0);
}

ObjectiveCParser::AttributeSpecifierContext* ObjectiveCParser::FunctionSignatureContext::attributeSpecifier() {
  return getRuleContext<ObjectiveCParser::AttributeSpecifierContext>(0);
}

ObjectiveCParser::ParameterListContext* ObjectiveCParser::FunctionSignatureContext::parameterList() {
  return getRuleContext<ObjectiveCParser::ParameterListContext>(0);
}


size_t ObjectiveCParser::FunctionSignatureContext::getRuleIndex() const {
  return ObjectiveCParser::RuleFunctionSignature;
}

void ObjectiveCParser::FunctionSignatureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionSignature(this);
}

void ObjectiveCParser::FunctionSignatureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionSignature(this);
}


antlrcpp::Any ObjectiveCParser::FunctionSignatureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitFunctionSignature(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::FunctionSignatureContext* ObjectiveCParser::functionSignature() {
  FunctionSignatureContext *_localctx = _tracker.createInstance<FunctionSignatureContext>(_ctx, getState());
  enterRule(_localctx, 124, ObjectiveCParser::RuleFunctionSignature);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(855);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx)) {
    case 1: {
      setState(854);
      declarationSpecifiers();
      break;
    }

    }
    setState(857);
    identifier();

    setState(858);
    match(ObjectiveCParser::LP);
    setState(860);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::AUTO)
      | (1ULL << ObjectiveCParser::CHAR)
      | (1ULL << ObjectiveCParser::CONST)
      | (1ULL << ObjectiveCParser::DOUBLE)
      | (1ULL << ObjectiveCParser::ENUM)
      | (1ULL << ObjectiveCParser::EXTERN)
      | (1ULL << ObjectiveCParser::FLOAT)
      | (1ULL << ObjectiveCParser::INLINE)
      | (1ULL << ObjectiveCParser::INT)
      | (1ULL << ObjectiveCParser::LONG)
      | (1ULL << ObjectiveCParser::REGISTER)
      | (1ULL << ObjectiveCParser::RESTRICT)
      | (1ULL << ObjectiveCParser::SHORT)
      | (1ULL << ObjectiveCParser::SIGNED)
      | (1ULL << ObjectiveCParser::STATIC)
      | (1ULL << ObjectiveCParser::STRUCT)
      | (1ULL << ObjectiveCParser::UNION)
      | (1ULL << ObjectiveCParser::UNSIGNED)
      | (1ULL << ObjectiveCParser::VOID)
      | (1ULL << ObjectiveCParser::VOLATILE)
      | (1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 81)) & ((1ULL << (ObjectiveCParser::ATOMIC - 81))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 81))
      | (1ULL << (ObjectiveCParser::RETAIN - 81))
      | (1ULL << (ObjectiveCParser::ATTRIBUTE - 81))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 81))
      | (1ULL << (ObjectiveCParser::BLOCK - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 81))
      | (1ULL << (ObjectiveCParser::COVARIANT - 81))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 81))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 81))
      | (1ULL << (ObjectiveCParser::KINDOF - 81))
      | (1ULL << (ObjectiveCParser::STRONG_QUALIFIER - 81))
      | (1ULL << (ObjectiveCParser::TYPEOF - 81))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED_QUALIFIER - 81))
      | (1ULL << (ObjectiveCParser::UNUSED - 81))
      | (1ULL << (ObjectiveCParser::WEAK_QUALIFIER - 81))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 81))
      | (1ULL << (ObjectiveCParser::NULLABLE - 81))
      | (1ULL << (ObjectiveCParser::NONNULL - 81))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 81))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 81))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 81))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 81))
      | (1ULL << (ObjectiveCParser::ASSIGN - 81))
      | (1ULL << (ObjectiveCParser::COPY - 81))
      | (1ULL << (ObjectiveCParser::GETTER - 81))
      | (1ULL << (ObjectiveCParser::SETTER - 81))
      | (1ULL << (ObjectiveCParser::STRONG - 81))
      | (1ULL << (ObjectiveCParser::READONLY - 81))
      | (1ULL << (ObjectiveCParser::READWRITE - 81))
      | (1ULL << (ObjectiveCParser::WEAK - 81))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 81))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 81))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 81))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 81))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 81))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 81)))) != 0)) {
      setState(859);
      parameterList();
    }
    setState(862);
    match(ObjectiveCParser::RP);
    setState(865);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::ATTRIBUTE) {
      setState(864);
      attributeSpecifier();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeContext ------------------------------------------------------------------

ObjectiveCParser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::AttributeNameContext* ObjectiveCParser::AttributeContext::attributeName() {
  return getRuleContext<ObjectiveCParser::AttributeNameContext>(0);
}

ObjectiveCParser::AttributeParametersContext* ObjectiveCParser::AttributeContext::attributeParameters() {
  return getRuleContext<ObjectiveCParser::AttributeParametersContext>(0);
}


size_t ObjectiveCParser::AttributeContext::getRuleIndex() const {
  return ObjectiveCParser::RuleAttribute;
}

void ObjectiveCParser::AttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute(this);
}

void ObjectiveCParser::AttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute(this);
}


antlrcpp::Any ObjectiveCParser::AttributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitAttribute(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::AttributeContext* ObjectiveCParser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 126, ObjectiveCParser::RuleAttribute);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(867);
    attributeName();
    setState(869);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::LP) {
      setState(868);
      attributeParameters();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeNameContext ------------------------------------------------------------------

ObjectiveCParser::AttributeNameContext::AttributeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::AttributeNameContext::CONST() {
  return getToken(ObjectiveCParser::CONST, 0);
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::AttributeNameContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}


size_t ObjectiveCParser::AttributeNameContext::getRuleIndex() const {
  return ObjectiveCParser::RuleAttributeName;
}

void ObjectiveCParser::AttributeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeName(this);
}

void ObjectiveCParser::AttributeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeName(this);
}


antlrcpp::Any ObjectiveCParser::AttributeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitAttributeName(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::AttributeNameContext* ObjectiveCParser::attributeName() {
  AttributeNameContext *_localctx = _tracker.createInstance<AttributeNameContext>(_ctx, getState());
  enterRule(_localctx, 128, ObjectiveCParser::RuleAttributeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(873);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ObjectiveCParser::CONST: {
        enterOuterAlt(_localctx, 1);
        setState(871);
        match(ObjectiveCParser::CONST);
        break;
      }

      case ObjectiveCParser::BOOL:
      case ObjectiveCParser::Class:
      case ObjectiveCParser::BYCOPY:
      case ObjectiveCParser::BYREF:
      case ObjectiveCParser::ID:
      case ObjectiveCParser::IMP:
      case ObjectiveCParser::IN:
      case ObjectiveCParser::INOUT:
      case ObjectiveCParser::ONEWAY:
      case ObjectiveCParser::OUT:
      case ObjectiveCParser::PROTOCOL_:
      case ObjectiveCParser::SEL:
      case ObjectiveCParser::SELF:
      case ObjectiveCParser::SUPER:
      case ObjectiveCParser::ATOMIC:
      case ObjectiveCParser::NONATOMIC:
      case ObjectiveCParser::RETAIN:
      case ObjectiveCParser::AUTORELEASING_QUALIFIER:
      case ObjectiveCParser::BLOCK:
      case ObjectiveCParser::BRIDGE_RETAINED:
      case ObjectiveCParser::BRIDGE_TRANSFER:
      case ObjectiveCParser::COVARIANT:
      case ObjectiveCParser::CONTRAVARIANT:
      case ObjectiveCParser::DEPRECATED:
      case ObjectiveCParser::KINDOF:
      case ObjectiveCParser::UNUSED:
      case ObjectiveCParser::NULL_UNSPECIFIED:
      case ObjectiveCParser::NULLABLE:
      case ObjectiveCParser::NONNULL:
      case ObjectiveCParser::NULL_RESETTABLE:
      case ObjectiveCParser::NS_INLINE:
      case ObjectiveCParser::NS_ENUM:
      case ObjectiveCParser::NS_OPTIONS:
      case ObjectiveCParser::ASSIGN:
      case ObjectiveCParser::COPY:
      case ObjectiveCParser::GETTER:
      case ObjectiveCParser::SETTER:
      case ObjectiveCParser::STRONG:
      case ObjectiveCParser::READONLY:
      case ObjectiveCParser::READWRITE:
      case ObjectiveCParser::WEAK:
      case ObjectiveCParser::UNSAFE_UNRETAINED:
      case ObjectiveCParser::IB_OUTLET:
      case ObjectiveCParser::IB_OUTLET_COLLECTION:
      case ObjectiveCParser::IB_INSPECTABLE:
      case ObjectiveCParser::IB_DESIGNABLE:
      case ObjectiveCParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(872);
        identifier();
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

//----------------- AttributeParametersContext ------------------------------------------------------------------

ObjectiveCParser::AttributeParametersContext::AttributeParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::AttributeParametersContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

tree::TerminalNode* ObjectiveCParser::AttributeParametersContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

ObjectiveCParser::AttributeParameterListContext* ObjectiveCParser::AttributeParametersContext::attributeParameterList() {
  return getRuleContext<ObjectiveCParser::AttributeParameterListContext>(0);
}


size_t ObjectiveCParser::AttributeParametersContext::getRuleIndex() const {
  return ObjectiveCParser::RuleAttributeParameters;
}

void ObjectiveCParser::AttributeParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeParameters(this);
}

void ObjectiveCParser::AttributeParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeParameters(this);
}


antlrcpp::Any ObjectiveCParser::AttributeParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitAttributeParameters(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::AttributeParametersContext* ObjectiveCParser::attributeParameters() {
  AttributeParametersContext *_localctx = _tracker.createInstance<AttributeParametersContext>(_ctx, getState());
  enterRule(_localctx, 130, ObjectiveCParser::RuleAttributeParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(875);
    match(ObjectiveCParser::LP);
    setState(877);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::CONST)
      | (1ULL << ObjectiveCParser::TRUE)
      | (1ULL << ObjectiveCParser::FALSE)
      | (1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::NIL)
      | (1ULL << ObjectiveCParser::NO)
      | (1ULL << ObjectiveCParser::NULL_)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER)
      | (1ULL << ObjectiveCParser::YES))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 81)) & ((1ULL << (ObjectiveCParser::ATOMIC - 81))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 81))
      | (1ULL << (ObjectiveCParser::RETAIN - 81))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 81))
      | (1ULL << (ObjectiveCParser::BLOCK - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 81))
      | (1ULL << (ObjectiveCParser::COVARIANT - 81))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 81))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 81))
      | (1ULL << (ObjectiveCParser::KINDOF - 81))
      | (1ULL << (ObjectiveCParser::UNUSED - 81))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 81))
      | (1ULL << (ObjectiveCParser::NULLABLE - 81))
      | (1ULL << (ObjectiveCParser::NONNULL - 81))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 81))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 81))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 81))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 81))
      | (1ULL << (ObjectiveCParser::ASSIGN - 81))
      | (1ULL << (ObjectiveCParser::COPY - 81))
      | (1ULL << (ObjectiveCParser::GETTER - 81))
      | (1ULL << (ObjectiveCParser::SETTER - 81))
      | (1ULL << (ObjectiveCParser::STRONG - 81))
      | (1ULL << (ObjectiveCParser::READONLY - 81))
      | (1ULL << (ObjectiveCParser::READWRITE - 81))
      | (1ULL << (ObjectiveCParser::WEAK - 81))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 81))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 81))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 81))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 81))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 81))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 81)))) != 0) || ((((_la - 152) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 152)) & ((1ULL << (ObjectiveCParser::ADD - 152))
      | (1ULL << (ObjectiveCParser::SUB - 152))
      | (1ULL << (ObjectiveCParser::CHARACTER_LITERAL - 152))
      | (1ULL << (ObjectiveCParser::STRING_START - 152))
      | (1ULL << (ObjectiveCParser::HEX_LITERAL - 152))
      | (1ULL << (ObjectiveCParser::OCTAL_LITERAL - 152))
      | (1ULL << (ObjectiveCParser::BINARY_LITERAL - 152))
      | (1ULL << (ObjectiveCParser::DECIMAL_LITERAL - 152))
      | (1ULL << (ObjectiveCParser::FLOATING_POINT_LITERAL - 152)))) != 0)) {
      setState(876);
      attributeParameterList();
    }
    setState(879);
    match(ObjectiveCParser::RP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeParameterListContext ------------------------------------------------------------------

ObjectiveCParser::AttributeParameterListContext::AttributeParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ObjectiveCParser::AttributeParameterContext *> ObjectiveCParser::AttributeParameterListContext::attributeParameter() {
  return getRuleContexts<ObjectiveCParser::AttributeParameterContext>();
}

ObjectiveCParser::AttributeParameterContext* ObjectiveCParser::AttributeParameterListContext::attributeParameter(size_t i) {
  return getRuleContext<ObjectiveCParser::AttributeParameterContext>(i);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::AttributeParameterListContext::COMMA() {
  return getTokens(ObjectiveCParser::COMMA);
}

tree::TerminalNode* ObjectiveCParser::AttributeParameterListContext::COMMA(size_t i) {
  return getToken(ObjectiveCParser::COMMA, i);
}


size_t ObjectiveCParser::AttributeParameterListContext::getRuleIndex() const {
  return ObjectiveCParser::RuleAttributeParameterList;
}

void ObjectiveCParser::AttributeParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeParameterList(this);
}

void ObjectiveCParser::AttributeParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeParameterList(this);
}


antlrcpp::Any ObjectiveCParser::AttributeParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitAttributeParameterList(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::AttributeParameterListContext* ObjectiveCParser::attributeParameterList() {
  AttributeParameterListContext *_localctx = _tracker.createInstance<AttributeParameterListContext>(_ctx, getState());
  enterRule(_localctx, 132, ObjectiveCParser::RuleAttributeParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(881);
    attributeParameter();
    setState(886);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ObjectiveCParser::COMMA) {
      setState(882);
      match(ObjectiveCParser::COMMA);
      setState(883);
      attributeParameter();
      setState(888);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeParameterContext ------------------------------------------------------------------

ObjectiveCParser::AttributeParameterContext::AttributeParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::AttributeContext* ObjectiveCParser::AttributeParameterContext::attribute() {
  return getRuleContext<ObjectiveCParser::AttributeContext>(0);
}

ObjectiveCParser::ConstantContext* ObjectiveCParser::AttributeParameterContext::constant() {
  return getRuleContext<ObjectiveCParser::ConstantContext>(0);
}

ObjectiveCParser::StringLiteralContext* ObjectiveCParser::AttributeParameterContext::stringLiteral() {
  return getRuleContext<ObjectiveCParser::StringLiteralContext>(0);
}

ObjectiveCParser::AttributeParameterAssignmentContext* ObjectiveCParser::AttributeParameterContext::attributeParameterAssignment() {
  return getRuleContext<ObjectiveCParser::AttributeParameterAssignmentContext>(0);
}


size_t ObjectiveCParser::AttributeParameterContext::getRuleIndex() const {
  return ObjectiveCParser::RuleAttributeParameter;
}

void ObjectiveCParser::AttributeParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeParameter(this);
}

void ObjectiveCParser::AttributeParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeParameter(this);
}


antlrcpp::Any ObjectiveCParser::AttributeParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitAttributeParameter(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::AttributeParameterContext* ObjectiveCParser::attributeParameter() {
  AttributeParameterContext *_localctx = _tracker.createInstance<AttributeParameterContext>(_ctx, getState());
  enterRule(_localctx, 134, ObjectiveCParser::RuleAttributeParameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(893);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 94, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(889);
      attribute();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(890);
      constant();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(891);
      stringLiteral();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(892);
      attributeParameterAssignment();
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

//----------------- AttributeParameterAssignmentContext ------------------------------------------------------------------

ObjectiveCParser::AttributeParameterAssignmentContext::AttributeParameterAssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ObjectiveCParser::AttributeNameContext *> ObjectiveCParser::AttributeParameterAssignmentContext::attributeName() {
  return getRuleContexts<ObjectiveCParser::AttributeNameContext>();
}

ObjectiveCParser::AttributeNameContext* ObjectiveCParser::AttributeParameterAssignmentContext::attributeName(size_t i) {
  return getRuleContext<ObjectiveCParser::AttributeNameContext>(i);
}

tree::TerminalNode* ObjectiveCParser::AttributeParameterAssignmentContext::ASSIGNMENT() {
  return getToken(ObjectiveCParser::ASSIGNMENT, 0);
}

ObjectiveCParser::ConstantContext* ObjectiveCParser::AttributeParameterAssignmentContext::constant() {
  return getRuleContext<ObjectiveCParser::ConstantContext>(0);
}

ObjectiveCParser::StringLiteralContext* ObjectiveCParser::AttributeParameterAssignmentContext::stringLiteral() {
  return getRuleContext<ObjectiveCParser::StringLiteralContext>(0);
}


size_t ObjectiveCParser::AttributeParameterAssignmentContext::getRuleIndex() const {
  return ObjectiveCParser::RuleAttributeParameterAssignment;
}

void ObjectiveCParser::AttributeParameterAssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeParameterAssignment(this);
}

void ObjectiveCParser::AttributeParameterAssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeParameterAssignment(this);
}


antlrcpp::Any ObjectiveCParser::AttributeParameterAssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitAttributeParameterAssignment(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::AttributeParameterAssignmentContext* ObjectiveCParser::attributeParameterAssignment() {
  AttributeParameterAssignmentContext *_localctx = _tracker.createInstance<AttributeParameterAssignmentContext>(_ctx, getState());
  enterRule(_localctx, 136, ObjectiveCParser::RuleAttributeParameterAssignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(895);
    attributeName();
    setState(896);
    match(ObjectiveCParser::ASSIGNMENT);
    setState(900);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ObjectiveCParser::TRUE:
      case ObjectiveCParser::FALSE:
      case ObjectiveCParser::NIL:
      case ObjectiveCParser::NO:
      case ObjectiveCParser::NULL_:
      case ObjectiveCParser::YES:
      case ObjectiveCParser::ADD:
      case ObjectiveCParser::SUB:
      case ObjectiveCParser::CHARACTER_LITERAL:
      case ObjectiveCParser::HEX_LITERAL:
      case ObjectiveCParser::OCTAL_LITERAL:
      case ObjectiveCParser::BINARY_LITERAL:
      case ObjectiveCParser::DECIMAL_LITERAL:
      case ObjectiveCParser::FLOATING_POINT_LITERAL: {
        setState(897);
        constant();
        break;
      }

      case ObjectiveCParser::CONST:
      case ObjectiveCParser::BOOL:
      case ObjectiveCParser::Class:
      case ObjectiveCParser::BYCOPY:
      case ObjectiveCParser::BYREF:
      case ObjectiveCParser::ID:
      case ObjectiveCParser::IMP:
      case ObjectiveCParser::IN:
      case ObjectiveCParser::INOUT:
      case ObjectiveCParser::ONEWAY:
      case ObjectiveCParser::OUT:
      case ObjectiveCParser::PROTOCOL_:
      case ObjectiveCParser::SEL:
      case ObjectiveCParser::SELF:
      case ObjectiveCParser::SUPER:
      case ObjectiveCParser::ATOMIC:
      case ObjectiveCParser::NONATOMIC:
      case ObjectiveCParser::RETAIN:
      case ObjectiveCParser::AUTORELEASING_QUALIFIER:
      case ObjectiveCParser::BLOCK:
      case ObjectiveCParser::BRIDGE_RETAINED:
      case ObjectiveCParser::BRIDGE_TRANSFER:
      case ObjectiveCParser::COVARIANT:
      case ObjectiveCParser::CONTRAVARIANT:
      case ObjectiveCParser::DEPRECATED:
      case ObjectiveCParser::KINDOF:
      case ObjectiveCParser::UNUSED:
      case ObjectiveCParser::NULL_UNSPECIFIED:
      case ObjectiveCParser::NULLABLE:
      case ObjectiveCParser::NONNULL:
      case ObjectiveCParser::NULL_RESETTABLE:
      case ObjectiveCParser::NS_INLINE:
      case ObjectiveCParser::NS_ENUM:
      case ObjectiveCParser::NS_OPTIONS:
      case ObjectiveCParser::ASSIGN:
      case ObjectiveCParser::COPY:
      case ObjectiveCParser::GETTER:
      case ObjectiveCParser::SETTER:
      case ObjectiveCParser::STRONG:
      case ObjectiveCParser::READONLY:
      case ObjectiveCParser::READWRITE:
      case ObjectiveCParser::WEAK:
      case ObjectiveCParser::UNSAFE_UNRETAINED:
      case ObjectiveCParser::IB_OUTLET:
      case ObjectiveCParser::IB_OUTLET_COLLECTION:
      case ObjectiveCParser::IB_INSPECTABLE:
      case ObjectiveCParser::IB_DESIGNABLE:
      case ObjectiveCParser::IDENTIFIER: {
        setState(898);
        attributeName();
        break;
      }

      case ObjectiveCParser::STRING_START: {
        setState(899);
        stringLiteral();
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

//----------------- DeclarationContext ------------------------------------------------------------------

ObjectiveCParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::FunctionCallExpressionContext* ObjectiveCParser::DeclarationContext::functionCallExpression() {
  return getRuleContext<ObjectiveCParser::FunctionCallExpressionContext>(0);
}

ObjectiveCParser::EnumDeclarationContext* ObjectiveCParser::DeclarationContext::enumDeclaration() {
  return getRuleContext<ObjectiveCParser::EnumDeclarationContext>(0);
}

ObjectiveCParser::VarDeclarationContext* ObjectiveCParser::DeclarationContext::varDeclaration() {
  return getRuleContext<ObjectiveCParser::VarDeclarationContext>(0);
}

ObjectiveCParser::TypedefDeclarationContext* ObjectiveCParser::DeclarationContext::typedefDeclaration() {
  return getRuleContext<ObjectiveCParser::TypedefDeclarationContext>(0);
}


size_t ObjectiveCParser::DeclarationContext::getRuleIndex() const {
  return ObjectiveCParser::RuleDeclaration;
}

void ObjectiveCParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void ObjectiveCParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


antlrcpp::Any ObjectiveCParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::DeclarationContext* ObjectiveCParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 138, ObjectiveCParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(906);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 96, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(902);
      functionCallExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(903);
      enumDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(904);
      varDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(905);
      typedefDeclaration();
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

//----------------- FunctionCallExpressionContext ------------------------------------------------------------------

ObjectiveCParser::FunctionCallExpressionContext::FunctionCallExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::FunctionCallExpressionContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::FunctionCallExpressionContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

ObjectiveCParser::DirectDeclaratorContext* ObjectiveCParser::FunctionCallExpressionContext::directDeclarator() {
  return getRuleContext<ObjectiveCParser::DirectDeclaratorContext>(0);
}

tree::TerminalNode* ObjectiveCParser::FunctionCallExpressionContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

tree::TerminalNode* ObjectiveCParser::FunctionCallExpressionContext::SEMI() {
  return getToken(ObjectiveCParser::SEMI, 0);
}

std::vector<ObjectiveCParser::AttributeSpecifierContext *> ObjectiveCParser::FunctionCallExpressionContext::attributeSpecifier() {
  return getRuleContexts<ObjectiveCParser::AttributeSpecifierContext>();
}

ObjectiveCParser::AttributeSpecifierContext* ObjectiveCParser::FunctionCallExpressionContext::attributeSpecifier(size_t i) {
  return getRuleContext<ObjectiveCParser::AttributeSpecifierContext>(i);
}


size_t ObjectiveCParser::FunctionCallExpressionContext::getRuleIndex() const {
  return ObjectiveCParser::RuleFunctionCallExpression;
}

void ObjectiveCParser::FunctionCallExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallExpression(this);
}

void ObjectiveCParser::FunctionCallExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallExpression(this);
}


antlrcpp::Any ObjectiveCParser::FunctionCallExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCallExpression(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::FunctionCallExpressionContext* ObjectiveCParser::functionCallExpression() {
  FunctionCallExpressionContext *_localctx = _tracker.createInstance<FunctionCallExpressionContext>(_ctx, getState());
  enterRule(_localctx, 140, ObjectiveCParser::RuleFunctionCallExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(909);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::ATTRIBUTE) {
      setState(908);
      attributeSpecifier();
    }
    setState(911);
    identifier();
    setState(913);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::ATTRIBUTE) {
      setState(912);
      attributeSpecifier();
    }
    setState(915);
    match(ObjectiveCParser::LP);
    setState(916);
    directDeclarator();
    setState(917);
    match(ObjectiveCParser::RP);
    setState(918);
    match(ObjectiveCParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumDeclarationContext ------------------------------------------------------------------

ObjectiveCParser::EnumDeclarationContext::EnumDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::EnumSpecifierContext* ObjectiveCParser::EnumDeclarationContext::enumSpecifier() {
  return getRuleContext<ObjectiveCParser::EnumSpecifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::EnumDeclarationContext::SEMI() {
  return getToken(ObjectiveCParser::SEMI, 0);
}

ObjectiveCParser::AttributeSpecifierContext* ObjectiveCParser::EnumDeclarationContext::attributeSpecifier() {
  return getRuleContext<ObjectiveCParser::AttributeSpecifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::EnumDeclarationContext::TYPEDEF() {
  return getToken(ObjectiveCParser::TYPEDEF, 0);
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::EnumDeclarationContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}


size_t ObjectiveCParser::EnumDeclarationContext::getRuleIndex() const {
  return ObjectiveCParser::RuleEnumDeclaration;
}

void ObjectiveCParser::EnumDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumDeclaration(this);
}

void ObjectiveCParser::EnumDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumDeclaration(this);
}


antlrcpp::Any ObjectiveCParser::EnumDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitEnumDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::EnumDeclarationContext* ObjectiveCParser::enumDeclaration() {
  EnumDeclarationContext *_localctx = _tracker.createInstance<EnumDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 142, ObjectiveCParser::RuleEnumDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(921);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::ATTRIBUTE) {
      setState(920);
      attributeSpecifier();
    }
    setState(924);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::TYPEDEF) {
      setState(923);
      match(ObjectiveCParser::TYPEDEF);
    }
    setState(926);
    enumSpecifier();
    setState(928);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 81)) & ((1ULL << (ObjectiveCParser::ATOMIC - 81))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 81))
      | (1ULL << (ObjectiveCParser::RETAIN - 81))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 81))
      | (1ULL << (ObjectiveCParser::BLOCK - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 81))
      | (1ULL << (ObjectiveCParser::COVARIANT - 81))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 81))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 81))
      | (1ULL << (ObjectiveCParser::KINDOF - 81))
      | (1ULL << (ObjectiveCParser::UNUSED - 81))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 81))
      | (1ULL << (ObjectiveCParser::NULLABLE - 81))
      | (1ULL << (ObjectiveCParser::NONNULL - 81))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 81))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 81))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 81))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 81))
      | (1ULL << (ObjectiveCParser::ASSIGN - 81))
      | (1ULL << (ObjectiveCParser::COPY - 81))
      | (1ULL << (ObjectiveCParser::GETTER - 81))
      | (1ULL << (ObjectiveCParser::SETTER - 81))
      | (1ULL << (ObjectiveCParser::STRONG - 81))
      | (1ULL << (ObjectiveCParser::READONLY - 81))
      | (1ULL << (ObjectiveCParser::READWRITE - 81))
      | (1ULL << (ObjectiveCParser::WEAK - 81))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 81))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 81))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 81))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 81))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 81))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 81)))) != 0)) {
      setState(927);
      identifier();
    }
    setState(930);
    match(ObjectiveCParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclarationContext ------------------------------------------------------------------

ObjectiveCParser::VarDeclarationContext::VarDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::VarDeclarationContext::SEMI() {
  return getToken(ObjectiveCParser::SEMI, 0);
}

ObjectiveCParser::DeclarationSpecifiersContext* ObjectiveCParser::VarDeclarationContext::declarationSpecifiers() {
  return getRuleContext<ObjectiveCParser::DeclarationSpecifiersContext>(0);
}

ObjectiveCParser::InitDeclaratorListContext* ObjectiveCParser::VarDeclarationContext::initDeclaratorList() {
  return getRuleContext<ObjectiveCParser::InitDeclaratorListContext>(0);
}


size_t ObjectiveCParser::VarDeclarationContext::getRuleIndex() const {
  return ObjectiveCParser::RuleVarDeclaration;
}

void ObjectiveCParser::VarDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDeclaration(this);
}

void ObjectiveCParser::VarDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDeclaration(this);
}


antlrcpp::Any ObjectiveCParser::VarDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitVarDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::VarDeclarationContext* ObjectiveCParser::varDeclaration() {
  VarDeclarationContext *_localctx = _tracker.createInstance<VarDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 144, ObjectiveCParser::RuleVarDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(936);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
    case 1: {
      setState(932);
      declarationSpecifiers();
      setState(933);
      initDeclaratorList();
      break;
    }

    case 2: {
      setState(935);
      declarationSpecifiers();
      break;
    }

    }
    setState(938);
    match(ObjectiveCParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypedefDeclarationContext ------------------------------------------------------------------

ObjectiveCParser::TypedefDeclarationContext::TypedefDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::TypedefDeclarationContext::TYPEDEF() {
  return getToken(ObjectiveCParser::TYPEDEF, 0);
}

tree::TerminalNode* ObjectiveCParser::TypedefDeclarationContext::SEMI() {
  return getToken(ObjectiveCParser::SEMI, 0);
}

ObjectiveCParser::DeclarationSpecifiersContext* ObjectiveCParser::TypedefDeclarationContext::declarationSpecifiers() {
  return getRuleContext<ObjectiveCParser::DeclarationSpecifiersContext>(0);
}

ObjectiveCParser::TypeDeclaratorListContext* ObjectiveCParser::TypedefDeclarationContext::typeDeclaratorList() {
  return getRuleContext<ObjectiveCParser::TypeDeclaratorListContext>(0);
}

ObjectiveCParser::AttributeSpecifierContext* ObjectiveCParser::TypedefDeclarationContext::attributeSpecifier() {
  return getRuleContext<ObjectiveCParser::AttributeSpecifierContext>(0);
}


size_t ObjectiveCParser::TypedefDeclarationContext::getRuleIndex() const {
  return ObjectiveCParser::RuleTypedefDeclaration;
}

void ObjectiveCParser::TypedefDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypedefDeclaration(this);
}

void ObjectiveCParser::TypedefDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypedefDeclaration(this);
}


antlrcpp::Any ObjectiveCParser::TypedefDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitTypedefDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::TypedefDeclarationContext* ObjectiveCParser::typedefDeclaration() {
  TypedefDeclarationContext *_localctx = _tracker.createInstance<TypedefDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 146, ObjectiveCParser::RuleTypedefDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(941);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::ATTRIBUTE) {
      setState(940);
      attributeSpecifier();
    }
    setState(943);
    match(ObjectiveCParser::TYPEDEF);
    setState(948);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx)) {
    case 1: {
      setState(944);
      declarationSpecifiers();
      setState(945);
      typeDeclaratorList();
      break;
    }

    case 2: {
      setState(947);
      declarationSpecifiers();
      break;
    }

    }
    setState(950);
    match(ObjectiveCParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDeclaratorListContext ------------------------------------------------------------------

ObjectiveCParser::TypeDeclaratorListContext::TypeDeclaratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ObjectiveCParser::TypeDeclaratorContext *> ObjectiveCParser::TypeDeclaratorListContext::typeDeclarator() {
  return getRuleContexts<ObjectiveCParser::TypeDeclaratorContext>();
}

ObjectiveCParser::TypeDeclaratorContext* ObjectiveCParser::TypeDeclaratorListContext::typeDeclarator(size_t i) {
  return getRuleContext<ObjectiveCParser::TypeDeclaratorContext>(i);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::TypeDeclaratorListContext::COMMA() {
  return getTokens(ObjectiveCParser::COMMA);
}

tree::TerminalNode* ObjectiveCParser::TypeDeclaratorListContext::COMMA(size_t i) {
  return getToken(ObjectiveCParser::COMMA, i);
}


size_t ObjectiveCParser::TypeDeclaratorListContext::getRuleIndex() const {
  return ObjectiveCParser::RuleTypeDeclaratorList;
}

void ObjectiveCParser::TypeDeclaratorListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDeclaratorList(this);
}

void ObjectiveCParser::TypeDeclaratorListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDeclaratorList(this);
}


antlrcpp::Any ObjectiveCParser::TypeDeclaratorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitTypeDeclaratorList(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::TypeDeclaratorListContext* ObjectiveCParser::typeDeclaratorList() {
  TypeDeclaratorListContext *_localctx = _tracker.createInstance<TypeDeclaratorListContext>(_ctx, getState());
  enterRule(_localctx, 148, ObjectiveCParser::RuleTypeDeclaratorList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(952);
    typeDeclarator();
    setState(957);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ObjectiveCParser::COMMA) {
      setState(953);
      match(ObjectiveCParser::COMMA);
      setState(954);
      typeDeclarator();
      setState(959);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDeclaratorContext ------------------------------------------------------------------

ObjectiveCParser::TypeDeclaratorContext::TypeDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::DirectDeclaratorContext* ObjectiveCParser::TypeDeclaratorContext::directDeclarator() {
  return getRuleContext<ObjectiveCParser::DirectDeclaratorContext>(0);
}

ObjectiveCParser::PointerContext* ObjectiveCParser::TypeDeclaratorContext::pointer() {
  return getRuleContext<ObjectiveCParser::PointerContext>(0);
}


size_t ObjectiveCParser::TypeDeclaratorContext::getRuleIndex() const {
  return ObjectiveCParser::RuleTypeDeclarator;
}

void ObjectiveCParser::TypeDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDeclarator(this);
}

void ObjectiveCParser::TypeDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDeclarator(this);
}


antlrcpp::Any ObjectiveCParser::TypeDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitTypeDeclarator(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::TypeDeclaratorContext* ObjectiveCParser::typeDeclarator() {
  TypeDeclaratorContext *_localctx = _tracker.createInstance<TypeDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 150, ObjectiveCParser::RuleTypeDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(961);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::MUL) {
      setState(960);
      pointer();
    }
    setState(963);
    directDeclarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationSpecifiersContext ------------------------------------------------------------------

ObjectiveCParser::DeclarationSpecifiersContext::DeclarationSpecifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ObjectiveCParser::StorageClassSpecifierContext *> ObjectiveCParser::DeclarationSpecifiersContext::storageClassSpecifier() {
  return getRuleContexts<ObjectiveCParser::StorageClassSpecifierContext>();
}

ObjectiveCParser::StorageClassSpecifierContext* ObjectiveCParser::DeclarationSpecifiersContext::storageClassSpecifier(size_t i) {
  return getRuleContext<ObjectiveCParser::StorageClassSpecifierContext>(i);
}

std::vector<ObjectiveCParser::AttributeSpecifierContext *> ObjectiveCParser::DeclarationSpecifiersContext::attributeSpecifier() {
  return getRuleContexts<ObjectiveCParser::AttributeSpecifierContext>();
}

ObjectiveCParser::AttributeSpecifierContext* ObjectiveCParser::DeclarationSpecifiersContext::attributeSpecifier(size_t i) {
  return getRuleContext<ObjectiveCParser::AttributeSpecifierContext>(i);
}

std::vector<ObjectiveCParser::ArcBehaviourSpecifierContext *> ObjectiveCParser::DeclarationSpecifiersContext::arcBehaviourSpecifier() {
  return getRuleContexts<ObjectiveCParser::ArcBehaviourSpecifierContext>();
}

ObjectiveCParser::ArcBehaviourSpecifierContext* ObjectiveCParser::DeclarationSpecifiersContext::arcBehaviourSpecifier(size_t i) {
  return getRuleContext<ObjectiveCParser::ArcBehaviourSpecifierContext>(i);
}

std::vector<ObjectiveCParser::NullabilitySpecifierContext *> ObjectiveCParser::DeclarationSpecifiersContext::nullabilitySpecifier() {
  return getRuleContexts<ObjectiveCParser::NullabilitySpecifierContext>();
}

ObjectiveCParser::NullabilitySpecifierContext* ObjectiveCParser::DeclarationSpecifiersContext::nullabilitySpecifier(size_t i) {
  return getRuleContext<ObjectiveCParser::NullabilitySpecifierContext>(i);
}

std::vector<ObjectiveCParser::IbOutletQualifierContext *> ObjectiveCParser::DeclarationSpecifiersContext::ibOutletQualifier() {
  return getRuleContexts<ObjectiveCParser::IbOutletQualifierContext>();
}

ObjectiveCParser::IbOutletQualifierContext* ObjectiveCParser::DeclarationSpecifiersContext::ibOutletQualifier(size_t i) {
  return getRuleContext<ObjectiveCParser::IbOutletQualifierContext>(i);
}

std::vector<ObjectiveCParser::TypePrefixContext *> ObjectiveCParser::DeclarationSpecifiersContext::typePrefix() {
  return getRuleContexts<ObjectiveCParser::TypePrefixContext>();
}

ObjectiveCParser::TypePrefixContext* ObjectiveCParser::DeclarationSpecifiersContext::typePrefix(size_t i) {
  return getRuleContext<ObjectiveCParser::TypePrefixContext>(i);
}

std::vector<ObjectiveCParser::TypeQualifierContext *> ObjectiveCParser::DeclarationSpecifiersContext::typeQualifier() {
  return getRuleContexts<ObjectiveCParser::TypeQualifierContext>();
}

ObjectiveCParser::TypeQualifierContext* ObjectiveCParser::DeclarationSpecifiersContext::typeQualifier(size_t i) {
  return getRuleContext<ObjectiveCParser::TypeQualifierContext>(i);
}

std::vector<ObjectiveCParser::TypeSpecifierContext *> ObjectiveCParser::DeclarationSpecifiersContext::typeSpecifier() {
  return getRuleContexts<ObjectiveCParser::TypeSpecifierContext>();
}

ObjectiveCParser::TypeSpecifierContext* ObjectiveCParser::DeclarationSpecifiersContext::typeSpecifier(size_t i) {
  return getRuleContext<ObjectiveCParser::TypeSpecifierContext>(i);
}


size_t ObjectiveCParser::DeclarationSpecifiersContext::getRuleIndex() const {
  return ObjectiveCParser::RuleDeclarationSpecifiers;
}

void ObjectiveCParser::DeclarationSpecifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationSpecifiers(this);
}

void ObjectiveCParser::DeclarationSpecifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationSpecifiers(this);
}


antlrcpp::Any ObjectiveCParser::DeclarationSpecifiersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitDeclarationSpecifiers(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::DeclarationSpecifiersContext* ObjectiveCParser::declarationSpecifiers() {
  DeclarationSpecifiersContext *_localctx = _tracker.createInstance<DeclarationSpecifiersContext>(_ctx, getState());
  enterRule(_localctx, 152, ObjectiveCParser::RuleDeclarationSpecifiers);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(973); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(973);
              _errHandler->sync(this);
              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 107, _ctx)) {
              case 1: {
                setState(965);
                storageClassSpecifier();
                break;
              }

              case 2: {
                setState(966);
                attributeSpecifier();
                break;
              }

              case 3: {
                setState(967);
                arcBehaviourSpecifier();
                break;
              }

              case 4: {
                setState(968);
                nullabilitySpecifier();
                break;
              }

              case 5: {
                setState(969);
                ibOutletQualifier();
                break;
              }

              case 6: {
                setState(970);
                typePrefix();
                break;
              }

              case 7: {
                setState(971);
                typeQualifier();
                break;
              }

              case 8: {
                setState(972);
                typeSpecifier();
                break;
              }

              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(975); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeSpecifierContext ------------------------------------------------------------------

ObjectiveCParser::AttributeSpecifierContext::AttributeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::AttributeSpecifierContext::ATTRIBUTE() {
  return getToken(ObjectiveCParser::ATTRIBUTE, 0);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::AttributeSpecifierContext::LP() {
  return getTokens(ObjectiveCParser::LP);
}

tree::TerminalNode* ObjectiveCParser::AttributeSpecifierContext::LP(size_t i) {
  return getToken(ObjectiveCParser::LP, i);
}

std::vector<ObjectiveCParser::AttributeContext *> ObjectiveCParser::AttributeSpecifierContext::attribute() {
  return getRuleContexts<ObjectiveCParser::AttributeContext>();
}

ObjectiveCParser::AttributeContext* ObjectiveCParser::AttributeSpecifierContext::attribute(size_t i) {
  return getRuleContext<ObjectiveCParser::AttributeContext>(i);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::AttributeSpecifierContext::RP() {
  return getTokens(ObjectiveCParser::RP);
}

tree::TerminalNode* ObjectiveCParser::AttributeSpecifierContext::RP(size_t i) {
  return getToken(ObjectiveCParser::RP, i);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::AttributeSpecifierContext::COMMA() {
  return getTokens(ObjectiveCParser::COMMA);
}

tree::TerminalNode* ObjectiveCParser::AttributeSpecifierContext::COMMA(size_t i) {
  return getToken(ObjectiveCParser::COMMA, i);
}


size_t ObjectiveCParser::AttributeSpecifierContext::getRuleIndex() const {
  return ObjectiveCParser::RuleAttributeSpecifier;
}

void ObjectiveCParser::AttributeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeSpecifier(this);
}

void ObjectiveCParser::AttributeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeSpecifier(this);
}


antlrcpp::Any ObjectiveCParser::AttributeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitAttributeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::AttributeSpecifierContext* ObjectiveCParser::attributeSpecifier() {
  AttributeSpecifierContext *_localctx = _tracker.createInstance<AttributeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 154, ObjectiveCParser::RuleAttributeSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(977);
    match(ObjectiveCParser::ATTRIBUTE);
    setState(978);
    match(ObjectiveCParser::LP);
    setState(979);
    match(ObjectiveCParser::LP);
    setState(980);
    attribute();
    setState(985);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ObjectiveCParser::COMMA) {
      setState(981);
      match(ObjectiveCParser::COMMA);
      setState(982);
      attribute();
      setState(987);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(988);
    match(ObjectiveCParser::RP);
    setState(989);
    match(ObjectiveCParser::RP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitDeclaratorListContext ------------------------------------------------------------------

ObjectiveCParser::InitDeclaratorListContext::InitDeclaratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ObjectiveCParser::InitDeclaratorContext *> ObjectiveCParser::InitDeclaratorListContext::initDeclarator() {
  return getRuleContexts<ObjectiveCParser::InitDeclaratorContext>();
}

ObjectiveCParser::InitDeclaratorContext* ObjectiveCParser::InitDeclaratorListContext::initDeclarator(size_t i) {
  return getRuleContext<ObjectiveCParser::InitDeclaratorContext>(i);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::InitDeclaratorListContext::COMMA() {
  return getTokens(ObjectiveCParser::COMMA);
}

tree::TerminalNode* ObjectiveCParser::InitDeclaratorListContext::COMMA(size_t i) {
  return getToken(ObjectiveCParser::COMMA, i);
}


size_t ObjectiveCParser::InitDeclaratorListContext::getRuleIndex() const {
  return ObjectiveCParser::RuleInitDeclaratorList;
}

void ObjectiveCParser::InitDeclaratorListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitDeclaratorList(this);
}

void ObjectiveCParser::InitDeclaratorListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitDeclaratorList(this);
}


antlrcpp::Any ObjectiveCParser::InitDeclaratorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitInitDeclaratorList(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::InitDeclaratorListContext* ObjectiveCParser::initDeclaratorList() {
  InitDeclaratorListContext *_localctx = _tracker.createInstance<InitDeclaratorListContext>(_ctx, getState());
  enterRule(_localctx, 156, ObjectiveCParser::RuleInitDeclaratorList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(991);
    initDeclarator();
    setState(996);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ObjectiveCParser::COMMA) {
      setState(992);
      match(ObjectiveCParser::COMMA);
      setState(993);
      initDeclarator();
      setState(998);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitDeclaratorContext ------------------------------------------------------------------

ObjectiveCParser::InitDeclaratorContext::InitDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::DeclaratorContext* ObjectiveCParser::InitDeclaratorContext::declarator() {
  return getRuleContext<ObjectiveCParser::DeclaratorContext>(0);
}

tree::TerminalNode* ObjectiveCParser::InitDeclaratorContext::ASSIGNMENT() {
  return getToken(ObjectiveCParser::ASSIGNMENT, 0);
}

ObjectiveCParser::InitializerContext* ObjectiveCParser::InitDeclaratorContext::initializer() {
  return getRuleContext<ObjectiveCParser::InitializerContext>(0);
}


size_t ObjectiveCParser::InitDeclaratorContext::getRuleIndex() const {
  return ObjectiveCParser::RuleInitDeclarator;
}

void ObjectiveCParser::InitDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitDeclarator(this);
}

void ObjectiveCParser::InitDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitDeclarator(this);
}


antlrcpp::Any ObjectiveCParser::InitDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitInitDeclarator(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::InitDeclaratorContext* ObjectiveCParser::initDeclarator() {
  InitDeclaratorContext *_localctx = _tracker.createInstance<InitDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 158, ObjectiveCParser::RuleInitDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(999);
    declarator();
    setState(1002);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::ASSIGNMENT) {
      setState(1000);
      match(ObjectiveCParser::ASSIGNMENT);
      setState(1001);
      initializer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructOrUnionSpecifierContext ------------------------------------------------------------------

ObjectiveCParser::StructOrUnionSpecifierContext::StructOrUnionSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::StructOrUnionSpecifierContext::STRUCT() {
  return getToken(ObjectiveCParser::STRUCT, 0);
}

tree::TerminalNode* ObjectiveCParser::StructOrUnionSpecifierContext::UNION() {
  return getToken(ObjectiveCParser::UNION, 0);
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::StructOrUnionSpecifierContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::StructOrUnionSpecifierContext::LBRACE() {
  return getToken(ObjectiveCParser::LBRACE, 0);
}

tree::TerminalNode* ObjectiveCParser::StructOrUnionSpecifierContext::RBRACE() {
  return getToken(ObjectiveCParser::RBRACE, 0);
}

std::vector<ObjectiveCParser::FieldDeclarationContext *> ObjectiveCParser::StructOrUnionSpecifierContext::fieldDeclaration() {
  return getRuleContexts<ObjectiveCParser::FieldDeclarationContext>();
}

ObjectiveCParser::FieldDeclarationContext* ObjectiveCParser::StructOrUnionSpecifierContext::fieldDeclaration(size_t i) {
  return getRuleContext<ObjectiveCParser::FieldDeclarationContext>(i);
}


size_t ObjectiveCParser::StructOrUnionSpecifierContext::getRuleIndex() const {
  return ObjectiveCParser::RuleStructOrUnionSpecifier;
}

void ObjectiveCParser::StructOrUnionSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructOrUnionSpecifier(this);
}

void ObjectiveCParser::StructOrUnionSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructOrUnionSpecifier(this);
}


antlrcpp::Any ObjectiveCParser::StructOrUnionSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitStructOrUnionSpecifier(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::StructOrUnionSpecifierContext* ObjectiveCParser::structOrUnionSpecifier() {
  StructOrUnionSpecifierContext *_localctx = _tracker.createInstance<StructOrUnionSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 160, ObjectiveCParser::RuleStructOrUnionSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1004);
    _la = _input->LA(1);
    if (!(_la == ObjectiveCParser::STRUCT

    || _la == ObjectiveCParser::UNION)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(1017);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 114, _ctx)) {
    case 1: {
      setState(1005);
      identifier();
      break;
    }

    case 2: {
      setState(1007);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ObjectiveCParser::BOOL)
        | (1ULL << ObjectiveCParser::Class)
        | (1ULL << ObjectiveCParser::BYCOPY)
        | (1ULL << ObjectiveCParser::BYREF)
        | (1ULL << ObjectiveCParser::ID)
        | (1ULL << ObjectiveCParser::IMP)
        | (1ULL << ObjectiveCParser::IN)
        | (1ULL << ObjectiveCParser::INOUT)
        | (1ULL << ObjectiveCParser::ONEWAY)
        | (1ULL << ObjectiveCParser::OUT)
        | (1ULL << ObjectiveCParser::PROTOCOL_)
        | (1ULL << ObjectiveCParser::SEL)
        | (1ULL << ObjectiveCParser::SELF)
        | (1ULL << ObjectiveCParser::SUPER))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 81)) & ((1ULL << (ObjectiveCParser::ATOMIC - 81))
        | (1ULL << (ObjectiveCParser::NONATOMIC - 81))
        | (1ULL << (ObjectiveCParser::RETAIN - 81))
        | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 81))
        | (1ULL << (ObjectiveCParser::BLOCK - 81))
        | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 81))
        | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 81))
        | (1ULL << (ObjectiveCParser::COVARIANT - 81))
        | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 81))
        | (1ULL << (ObjectiveCParser::DEPRECATED - 81))
        | (1ULL << (ObjectiveCParser::KINDOF - 81))
        | (1ULL << (ObjectiveCParser::UNUSED - 81))
        | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 81))
        | (1ULL << (ObjectiveCParser::NULLABLE - 81))
        | (1ULL << (ObjectiveCParser::NONNULL - 81))
        | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 81))
        | (1ULL << (ObjectiveCParser::NS_INLINE - 81))
        | (1ULL << (ObjectiveCParser::NS_ENUM - 81))
        | (1ULL << (ObjectiveCParser::NS_OPTIONS - 81))
        | (1ULL << (ObjectiveCParser::ASSIGN - 81))
        | (1ULL << (ObjectiveCParser::COPY - 81))
        | (1ULL << (ObjectiveCParser::GETTER - 81))
        | (1ULL << (ObjectiveCParser::SETTER - 81))
        | (1ULL << (ObjectiveCParser::STRONG - 81))
        | (1ULL << (ObjectiveCParser::READONLY - 81))
        | (1ULL << (ObjectiveCParser::READWRITE - 81))
        | (1ULL << (ObjectiveCParser::WEAK - 81))
        | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 81))
        | (1ULL << (ObjectiveCParser::IB_OUTLET - 81))
        | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 81))
        | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 81))
        | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 81))
        | (1ULL << (ObjectiveCParser::IDENTIFIER - 81)))) != 0)) {
        setState(1006);
        identifier();
      }
      setState(1009);
      match(ObjectiveCParser::LBRACE);
      setState(1011); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(1010);
        fieldDeclaration();
        setState(1013); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ObjectiveCParser::CHAR)
        | (1ULL << ObjectiveCParser::CONST)
        | (1ULL << ObjectiveCParser::DOUBLE)
        | (1ULL << ObjectiveCParser::ENUM)
        | (1ULL << ObjectiveCParser::FLOAT)
        | (1ULL << ObjectiveCParser::INLINE)
        | (1ULL << ObjectiveCParser::INT)
        | (1ULL << ObjectiveCParser::LONG)
        | (1ULL << ObjectiveCParser::RESTRICT)
        | (1ULL << ObjectiveCParser::SHORT)
        | (1ULL << ObjectiveCParser::SIGNED)
        | (1ULL << ObjectiveCParser::STRUCT)
        | (1ULL << ObjectiveCParser::UNION)
        | (1ULL << ObjectiveCParser::UNSIGNED)
        | (1ULL << ObjectiveCParser::VOID)
        | (1ULL << ObjectiveCParser::VOLATILE)
        | (1ULL << ObjectiveCParser::BOOL)
        | (1ULL << ObjectiveCParser::Class)
        | (1ULL << ObjectiveCParser::BYCOPY)
        | (1ULL << ObjectiveCParser::BYREF)
        | (1ULL << ObjectiveCParser::ID)
        | (1ULL << ObjectiveCParser::IMP)
        | (1ULL << ObjectiveCParser::IN)
        | (1ULL << ObjectiveCParser::INOUT)
        | (1ULL << ObjectiveCParser::ONEWAY)
        | (1ULL << ObjectiveCParser::OUT)
        | (1ULL << ObjectiveCParser::PROTOCOL_)
        | (1ULL << ObjectiveCParser::SEL)
        | (1ULL << ObjectiveCParser::SELF)
        | (1ULL << ObjectiveCParser::SUPER))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 81)) & ((1ULL << (ObjectiveCParser::ATOMIC - 81))
        | (1ULL << (ObjectiveCParser::NONATOMIC - 81))
        | (1ULL << (ObjectiveCParser::RETAIN - 81))
        | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 81))
        | (1ULL << (ObjectiveCParser::BLOCK - 81))
        | (1ULL << (ObjectiveCParser::BRIDGE - 81))
        | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 81))
        | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 81))
        | (1ULL << (ObjectiveCParser::COVARIANT - 81))
        | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 81))
        | (1ULL << (ObjectiveCParser::DEPRECATED - 81))
        | (1ULL << (ObjectiveCParser::KINDOF - 81))
        | (1ULL << (ObjectiveCParser::STRONG_QUALIFIER - 81))
        | (1ULL << (ObjectiveCParser::TYPEOF - 81))
        | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED_QUALIFIER - 81))
        | (1ULL << (ObjectiveCParser::UNUSED - 81))
        | (1ULL << (ObjectiveCParser::WEAK_QUALIFIER - 81))
        | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 81))
        | (1ULL << (ObjectiveCParser::NULLABLE - 81))
        | (1ULL << (ObjectiveCParser::NONNULL - 81))
        | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 81))
        | (1ULL << (ObjectiveCParser::NS_INLINE - 81))
        | (1ULL << (ObjectiveCParser::NS_ENUM - 81))
        | (1ULL << (ObjectiveCParser::NS_OPTIONS - 81))
        | (1ULL << (ObjectiveCParser::ASSIGN - 81))
        | (1ULL << (ObjectiveCParser::COPY - 81))
        | (1ULL << (ObjectiveCParser::GETTER - 81))
        | (1ULL << (ObjectiveCParser::SETTER - 81))
        | (1ULL << (ObjectiveCParser::STRONG - 81))
        | (1ULL << (ObjectiveCParser::READONLY - 81))
        | (1ULL << (ObjectiveCParser::READWRITE - 81))
        | (1ULL << (ObjectiveCParser::WEAK - 81))
        | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 81))
        | (1ULL << (ObjectiveCParser::IB_OUTLET - 81))
        | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 81))
        | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 81))
        | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 81))
        | (1ULL << (ObjectiveCParser::IDENTIFIER - 81)))) != 0));
      setState(1015);
      match(ObjectiveCParser::RBRACE);
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

//----------------- FieldDeclarationContext ------------------------------------------------------------------

ObjectiveCParser::FieldDeclarationContext::FieldDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::SpecifierQualifierListContext* ObjectiveCParser::FieldDeclarationContext::specifierQualifierList() {
  return getRuleContext<ObjectiveCParser::SpecifierQualifierListContext>(0);
}

ObjectiveCParser::FieldDeclaratorListContext* ObjectiveCParser::FieldDeclarationContext::fieldDeclaratorList() {
  return getRuleContext<ObjectiveCParser::FieldDeclaratorListContext>(0);
}

tree::TerminalNode* ObjectiveCParser::FieldDeclarationContext::SEMI() {
  return getToken(ObjectiveCParser::SEMI, 0);
}

ObjectiveCParser::MacroContext* ObjectiveCParser::FieldDeclarationContext::macro() {
  return getRuleContext<ObjectiveCParser::MacroContext>(0);
}


size_t ObjectiveCParser::FieldDeclarationContext::getRuleIndex() const {
  return ObjectiveCParser::RuleFieldDeclaration;
}

void ObjectiveCParser::FieldDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldDeclaration(this);
}

void ObjectiveCParser::FieldDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldDeclaration(this);
}


antlrcpp::Any ObjectiveCParser::FieldDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitFieldDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::FieldDeclarationContext* ObjectiveCParser::fieldDeclaration() {
  FieldDeclarationContext *_localctx = _tracker.createInstance<FieldDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 162, ObjectiveCParser::RuleFieldDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1019);
    specifierQualifierList();
    setState(1020);
    fieldDeclaratorList();
    setState(1022);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 81)) & ((1ULL << (ObjectiveCParser::ATOMIC - 81))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 81))
      | (1ULL << (ObjectiveCParser::RETAIN - 81))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 81))
      | (1ULL << (ObjectiveCParser::BLOCK - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 81))
      | (1ULL << (ObjectiveCParser::COVARIANT - 81))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 81))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 81))
      | (1ULL << (ObjectiveCParser::KINDOF - 81))
      | (1ULL << (ObjectiveCParser::UNUSED - 81))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 81))
      | (1ULL << (ObjectiveCParser::NULLABLE - 81))
      | (1ULL << (ObjectiveCParser::NONNULL - 81))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 81))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 81))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 81))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 81))
      | (1ULL << (ObjectiveCParser::ASSIGN - 81))
      | (1ULL << (ObjectiveCParser::COPY - 81))
      | (1ULL << (ObjectiveCParser::GETTER - 81))
      | (1ULL << (ObjectiveCParser::SETTER - 81))
      | (1ULL << (ObjectiveCParser::STRONG - 81))
      | (1ULL << (ObjectiveCParser::READONLY - 81))
      | (1ULL << (ObjectiveCParser::READWRITE - 81))
      | (1ULL << (ObjectiveCParser::WEAK - 81))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 81))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 81))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 81))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 81))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 81))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 81)))) != 0)) {
      setState(1021);
      macro();
    }
    setState(1024);
    match(ObjectiveCParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SpecifierQualifierListContext ------------------------------------------------------------------

ObjectiveCParser::SpecifierQualifierListContext::SpecifierQualifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ObjectiveCParser::ArcBehaviourSpecifierContext *> ObjectiveCParser::SpecifierQualifierListContext::arcBehaviourSpecifier() {
  return getRuleContexts<ObjectiveCParser::ArcBehaviourSpecifierContext>();
}

ObjectiveCParser::ArcBehaviourSpecifierContext* ObjectiveCParser::SpecifierQualifierListContext::arcBehaviourSpecifier(size_t i) {
  return getRuleContext<ObjectiveCParser::ArcBehaviourSpecifierContext>(i);
}

std::vector<ObjectiveCParser::NullabilitySpecifierContext *> ObjectiveCParser::SpecifierQualifierListContext::nullabilitySpecifier() {
  return getRuleContexts<ObjectiveCParser::NullabilitySpecifierContext>();
}

ObjectiveCParser::NullabilitySpecifierContext* ObjectiveCParser::SpecifierQualifierListContext::nullabilitySpecifier(size_t i) {
  return getRuleContext<ObjectiveCParser::NullabilitySpecifierContext>(i);
}

std::vector<ObjectiveCParser::IbOutletQualifierContext *> ObjectiveCParser::SpecifierQualifierListContext::ibOutletQualifier() {
  return getRuleContexts<ObjectiveCParser::IbOutletQualifierContext>();
}

ObjectiveCParser::IbOutletQualifierContext* ObjectiveCParser::SpecifierQualifierListContext::ibOutletQualifier(size_t i) {
  return getRuleContext<ObjectiveCParser::IbOutletQualifierContext>(i);
}

std::vector<ObjectiveCParser::TypePrefixContext *> ObjectiveCParser::SpecifierQualifierListContext::typePrefix() {
  return getRuleContexts<ObjectiveCParser::TypePrefixContext>();
}

ObjectiveCParser::TypePrefixContext* ObjectiveCParser::SpecifierQualifierListContext::typePrefix(size_t i) {
  return getRuleContext<ObjectiveCParser::TypePrefixContext>(i);
}

std::vector<ObjectiveCParser::TypeQualifierContext *> ObjectiveCParser::SpecifierQualifierListContext::typeQualifier() {
  return getRuleContexts<ObjectiveCParser::TypeQualifierContext>();
}

ObjectiveCParser::TypeQualifierContext* ObjectiveCParser::SpecifierQualifierListContext::typeQualifier(size_t i) {
  return getRuleContext<ObjectiveCParser::TypeQualifierContext>(i);
}

std::vector<ObjectiveCParser::TypeSpecifierContext *> ObjectiveCParser::SpecifierQualifierListContext::typeSpecifier() {
  return getRuleContexts<ObjectiveCParser::TypeSpecifierContext>();
}

ObjectiveCParser::TypeSpecifierContext* ObjectiveCParser::SpecifierQualifierListContext::typeSpecifier(size_t i) {
  return getRuleContext<ObjectiveCParser::TypeSpecifierContext>(i);
}


size_t ObjectiveCParser::SpecifierQualifierListContext::getRuleIndex() const {
  return ObjectiveCParser::RuleSpecifierQualifierList;
}

void ObjectiveCParser::SpecifierQualifierListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSpecifierQualifierList(this);
}

void ObjectiveCParser::SpecifierQualifierListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSpecifierQualifierList(this);
}


antlrcpp::Any ObjectiveCParser::SpecifierQualifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitSpecifierQualifierList(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::SpecifierQualifierListContext* ObjectiveCParser::specifierQualifierList() {
  SpecifierQualifierListContext *_localctx = _tracker.createInstance<SpecifierQualifierListContext>(_ctx, getState());
  enterRule(_localctx, 164, ObjectiveCParser::RuleSpecifierQualifierList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1032); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1032);
              _errHandler->sync(this);
              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx)) {
              case 1: {
                setState(1026);
                arcBehaviourSpecifier();
                break;
              }

              case 2: {
                setState(1027);
                nullabilitySpecifier();
                break;
              }

              case 3: {
                setState(1028);
                ibOutletQualifier();
                break;
              }

              case 4: {
                setState(1029);
                typePrefix();
                break;
              }

              case 5: {
                setState(1030);
                typeQualifier();
                break;
              }

              case 6: {
                setState(1031);
                typeSpecifier();
                break;
              }

              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1034); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IbOutletQualifierContext ------------------------------------------------------------------

ObjectiveCParser::IbOutletQualifierContext::IbOutletQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::IbOutletQualifierContext::IB_OUTLET_COLLECTION() {
  return getToken(ObjectiveCParser::IB_OUTLET_COLLECTION, 0);
}

tree::TerminalNode* ObjectiveCParser::IbOutletQualifierContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::IbOutletQualifierContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::IbOutletQualifierContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

tree::TerminalNode* ObjectiveCParser::IbOutletQualifierContext::IB_OUTLET() {
  return getToken(ObjectiveCParser::IB_OUTLET, 0);
}


size_t ObjectiveCParser::IbOutletQualifierContext::getRuleIndex() const {
  return ObjectiveCParser::RuleIbOutletQualifier;
}

void ObjectiveCParser::IbOutletQualifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIbOutletQualifier(this);
}

void ObjectiveCParser::IbOutletQualifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIbOutletQualifier(this);
}


antlrcpp::Any ObjectiveCParser::IbOutletQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitIbOutletQualifier(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::IbOutletQualifierContext* ObjectiveCParser::ibOutletQualifier() {
  IbOutletQualifierContext *_localctx = _tracker.createInstance<IbOutletQualifierContext>(_ctx, getState());
  enterRule(_localctx, 166, ObjectiveCParser::RuleIbOutletQualifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1042);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ObjectiveCParser::IB_OUTLET_COLLECTION: {
        enterOuterAlt(_localctx, 1);
        setState(1036);
        match(ObjectiveCParser::IB_OUTLET_COLLECTION);
        setState(1037);
        match(ObjectiveCParser::LP);
        setState(1038);
        identifier();
        setState(1039);
        match(ObjectiveCParser::RP);
        break;
      }

      case ObjectiveCParser::IB_OUTLET: {
        enterOuterAlt(_localctx, 2);
        setState(1041);
        match(ObjectiveCParser::IB_OUTLET);
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

//----------------- ArcBehaviourSpecifierContext ------------------------------------------------------------------

ObjectiveCParser::ArcBehaviourSpecifierContext::ArcBehaviourSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::ArcBehaviourSpecifierContext::WEAK_QUALIFIER() {
  return getToken(ObjectiveCParser::WEAK_QUALIFIER, 0);
}

tree::TerminalNode* ObjectiveCParser::ArcBehaviourSpecifierContext::STRONG_QUALIFIER() {
  return getToken(ObjectiveCParser::STRONG_QUALIFIER, 0);
}

tree::TerminalNode* ObjectiveCParser::ArcBehaviourSpecifierContext::AUTORELEASING_QUALIFIER() {
  return getToken(ObjectiveCParser::AUTORELEASING_QUALIFIER, 0);
}

tree::TerminalNode* ObjectiveCParser::ArcBehaviourSpecifierContext::UNSAFE_UNRETAINED_QUALIFIER() {
  return getToken(ObjectiveCParser::UNSAFE_UNRETAINED_QUALIFIER, 0);
}


size_t ObjectiveCParser::ArcBehaviourSpecifierContext::getRuleIndex() const {
  return ObjectiveCParser::RuleArcBehaviourSpecifier;
}

void ObjectiveCParser::ArcBehaviourSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArcBehaviourSpecifier(this);
}

void ObjectiveCParser::ArcBehaviourSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArcBehaviourSpecifier(this);
}


antlrcpp::Any ObjectiveCParser::ArcBehaviourSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitArcBehaviourSpecifier(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ArcBehaviourSpecifierContext* ObjectiveCParser::arcBehaviourSpecifier() {
  ArcBehaviourSpecifierContext *_localctx = _tracker.createInstance<ArcBehaviourSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 168, ObjectiveCParser::RuleArcBehaviourSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1044);
    _la = _input->LA(1);
    if (!(((((_la - 85) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 85)) & ((1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 85))
      | (1ULL << (ObjectiveCParser::STRONG_QUALIFIER - 85))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED_QUALIFIER - 85))
      | (1ULL << (ObjectiveCParser::WEAK_QUALIFIER - 85)))) != 0))) {
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

//----------------- NullabilitySpecifierContext ------------------------------------------------------------------

ObjectiveCParser::NullabilitySpecifierContext::NullabilitySpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::NullabilitySpecifierContext::NULL_UNSPECIFIED() {
  return getToken(ObjectiveCParser::NULL_UNSPECIFIED, 0);
}

tree::TerminalNode* ObjectiveCParser::NullabilitySpecifierContext::NULLABLE() {
  return getToken(ObjectiveCParser::NULLABLE, 0);
}

tree::TerminalNode* ObjectiveCParser::NullabilitySpecifierContext::NONNULL() {
  return getToken(ObjectiveCParser::NONNULL, 0);
}

tree::TerminalNode* ObjectiveCParser::NullabilitySpecifierContext::NULL_RESETTABLE() {
  return getToken(ObjectiveCParser::NULL_RESETTABLE, 0);
}


size_t ObjectiveCParser::NullabilitySpecifierContext::getRuleIndex() const {
  return ObjectiveCParser::RuleNullabilitySpecifier;
}

void ObjectiveCParser::NullabilitySpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNullabilitySpecifier(this);
}

void ObjectiveCParser::NullabilitySpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNullabilitySpecifier(this);
}


antlrcpp::Any ObjectiveCParser::NullabilitySpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitNullabilitySpecifier(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::NullabilitySpecifierContext* ObjectiveCParser::nullabilitySpecifier() {
  NullabilitySpecifierContext *_localctx = _tracker.createInstance<NullabilitySpecifierContext>(_ctx, getState());
  enterRule(_localctx, 170, ObjectiveCParser::RuleNullabilitySpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1046);
    _la = _input->LA(1);
    if (!(((((_la - 99) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 99)) & ((1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 99))
      | (1ULL << (ObjectiveCParser::NULLABLE - 99))
      | (1ULL << (ObjectiveCParser::NONNULL - 99))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 99)))) != 0))) {
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

//----------------- StorageClassSpecifierContext ------------------------------------------------------------------

ObjectiveCParser::StorageClassSpecifierContext::StorageClassSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::StorageClassSpecifierContext::AUTO() {
  return getToken(ObjectiveCParser::AUTO, 0);
}

tree::TerminalNode* ObjectiveCParser::StorageClassSpecifierContext::REGISTER() {
  return getToken(ObjectiveCParser::REGISTER, 0);
}

tree::TerminalNode* ObjectiveCParser::StorageClassSpecifierContext::STATIC() {
  return getToken(ObjectiveCParser::STATIC, 0);
}

tree::TerminalNode* ObjectiveCParser::StorageClassSpecifierContext::EXTERN() {
  return getToken(ObjectiveCParser::EXTERN, 0);
}


size_t ObjectiveCParser::StorageClassSpecifierContext::getRuleIndex() const {
  return ObjectiveCParser::RuleStorageClassSpecifier;
}

void ObjectiveCParser::StorageClassSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStorageClassSpecifier(this);
}

void ObjectiveCParser::StorageClassSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStorageClassSpecifier(this);
}


antlrcpp::Any ObjectiveCParser::StorageClassSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitStorageClassSpecifier(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::StorageClassSpecifierContext* ObjectiveCParser::storageClassSpecifier() {
  StorageClassSpecifierContext *_localctx = _tracker.createInstance<StorageClassSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 172, ObjectiveCParser::RuleStorageClassSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1048);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::AUTO)
      | (1ULL << ObjectiveCParser::EXTERN)
      | (1ULL << ObjectiveCParser::REGISTER)
      | (1ULL << ObjectiveCParser::STATIC))) != 0))) {
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

//----------------- TypePrefixContext ------------------------------------------------------------------

ObjectiveCParser::TypePrefixContext::TypePrefixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::TypePrefixContext::BRIDGE() {
  return getToken(ObjectiveCParser::BRIDGE, 0);
}

tree::TerminalNode* ObjectiveCParser::TypePrefixContext::BRIDGE_TRANSFER() {
  return getToken(ObjectiveCParser::BRIDGE_TRANSFER, 0);
}

tree::TerminalNode* ObjectiveCParser::TypePrefixContext::BRIDGE_RETAINED() {
  return getToken(ObjectiveCParser::BRIDGE_RETAINED, 0);
}

tree::TerminalNode* ObjectiveCParser::TypePrefixContext::BLOCK() {
  return getToken(ObjectiveCParser::BLOCK, 0);
}

tree::TerminalNode* ObjectiveCParser::TypePrefixContext::INLINE() {
  return getToken(ObjectiveCParser::INLINE, 0);
}

tree::TerminalNode* ObjectiveCParser::TypePrefixContext::NS_INLINE() {
  return getToken(ObjectiveCParser::NS_INLINE, 0);
}

tree::TerminalNode* ObjectiveCParser::TypePrefixContext::KINDOF() {
  return getToken(ObjectiveCParser::KINDOF, 0);
}


size_t ObjectiveCParser::TypePrefixContext::getRuleIndex() const {
  return ObjectiveCParser::RuleTypePrefix;
}

void ObjectiveCParser::TypePrefixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypePrefix(this);
}

void ObjectiveCParser::TypePrefixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypePrefix(this);
}


antlrcpp::Any ObjectiveCParser::TypePrefixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitTypePrefix(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::TypePrefixContext* ObjectiveCParser::typePrefix() {
  TypePrefixContext *_localctx = _tracker.createInstance<TypePrefixContext>(_ctx, getState());
  enterRule(_localctx, 174, ObjectiveCParser::RuleTypePrefix);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1050);
    _la = _input->LA(1);
    if (!(_la == ObjectiveCParser::INLINE || ((((_la - 86) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 86)) & ((1ULL << (ObjectiveCParser::BLOCK - 86))
      | (1ULL << (ObjectiveCParser::BRIDGE - 86))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 86))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 86))
      | (1ULL << (ObjectiveCParser::KINDOF - 86))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 86)))) != 0))) {
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

//----------------- TypeQualifierContext ------------------------------------------------------------------

ObjectiveCParser::TypeQualifierContext::TypeQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::TypeQualifierContext::CONST() {
  return getToken(ObjectiveCParser::CONST, 0);
}

tree::TerminalNode* ObjectiveCParser::TypeQualifierContext::VOLATILE() {
  return getToken(ObjectiveCParser::VOLATILE, 0);
}

tree::TerminalNode* ObjectiveCParser::TypeQualifierContext::RESTRICT() {
  return getToken(ObjectiveCParser::RESTRICT, 0);
}

ObjectiveCParser::ProtocolQualifierContext* ObjectiveCParser::TypeQualifierContext::protocolQualifier() {
  return getRuleContext<ObjectiveCParser::ProtocolQualifierContext>(0);
}


size_t ObjectiveCParser::TypeQualifierContext::getRuleIndex() const {
  return ObjectiveCParser::RuleTypeQualifier;
}

void ObjectiveCParser::TypeQualifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeQualifier(this);
}

void ObjectiveCParser::TypeQualifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeQualifier(this);
}


antlrcpp::Any ObjectiveCParser::TypeQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitTypeQualifier(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::TypeQualifierContext* ObjectiveCParser::typeQualifier() {
  TypeQualifierContext *_localctx = _tracker.createInstance<TypeQualifierContext>(_ctx, getState());
  enterRule(_localctx, 176, ObjectiveCParser::RuleTypeQualifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1056);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ObjectiveCParser::CONST: {
        enterOuterAlt(_localctx, 1);
        setState(1052);
        match(ObjectiveCParser::CONST);
        break;
      }

      case ObjectiveCParser::VOLATILE: {
        enterOuterAlt(_localctx, 2);
        setState(1053);
        match(ObjectiveCParser::VOLATILE);
        break;
      }

      case ObjectiveCParser::RESTRICT: {
        enterOuterAlt(_localctx, 3);
        setState(1054);
        match(ObjectiveCParser::RESTRICT);
        break;
      }

      case ObjectiveCParser::BYCOPY:
      case ObjectiveCParser::BYREF:
      case ObjectiveCParser::IN:
      case ObjectiveCParser::INOUT:
      case ObjectiveCParser::ONEWAY:
      case ObjectiveCParser::OUT: {
        enterOuterAlt(_localctx, 4);
        setState(1055);
        protocolQualifier();
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

//----------------- ProtocolQualifierContext ------------------------------------------------------------------

ObjectiveCParser::ProtocolQualifierContext::ProtocolQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::ProtocolQualifierContext::IN() {
  return getToken(ObjectiveCParser::IN, 0);
}

tree::TerminalNode* ObjectiveCParser::ProtocolQualifierContext::OUT() {
  return getToken(ObjectiveCParser::OUT, 0);
}

tree::TerminalNode* ObjectiveCParser::ProtocolQualifierContext::INOUT() {
  return getToken(ObjectiveCParser::INOUT, 0);
}

tree::TerminalNode* ObjectiveCParser::ProtocolQualifierContext::BYCOPY() {
  return getToken(ObjectiveCParser::BYCOPY, 0);
}

tree::TerminalNode* ObjectiveCParser::ProtocolQualifierContext::BYREF() {
  return getToken(ObjectiveCParser::BYREF, 0);
}

tree::TerminalNode* ObjectiveCParser::ProtocolQualifierContext::ONEWAY() {
  return getToken(ObjectiveCParser::ONEWAY, 0);
}


size_t ObjectiveCParser::ProtocolQualifierContext::getRuleIndex() const {
  return ObjectiveCParser::RuleProtocolQualifier;
}

void ObjectiveCParser::ProtocolQualifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProtocolQualifier(this);
}

void ObjectiveCParser::ProtocolQualifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProtocolQualifier(this);
}


antlrcpp::Any ObjectiveCParser::ProtocolQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitProtocolQualifier(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ProtocolQualifierContext* ObjectiveCParser::protocolQualifier() {
  ProtocolQualifierContext *_localctx = _tracker.createInstance<ProtocolQualifierContext>(_ctx, getState());
  enterRule(_localctx, 178, ObjectiveCParser::RuleProtocolQualifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1058);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT))) != 0))) {
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

//----------------- TypeSpecifierContext ------------------------------------------------------------------

ObjectiveCParser::TypeSpecifierContext::TypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::TypeSpecifierContext::VOID() {
  return getToken(ObjectiveCParser::VOID, 0);
}

tree::TerminalNode* ObjectiveCParser::TypeSpecifierContext::CHAR() {
  return getToken(ObjectiveCParser::CHAR, 0);
}

tree::TerminalNode* ObjectiveCParser::TypeSpecifierContext::SHORT() {
  return getToken(ObjectiveCParser::SHORT, 0);
}

tree::TerminalNode* ObjectiveCParser::TypeSpecifierContext::INT() {
  return getToken(ObjectiveCParser::INT, 0);
}

tree::TerminalNode* ObjectiveCParser::TypeSpecifierContext::LONG() {
  return getToken(ObjectiveCParser::LONG, 0);
}

tree::TerminalNode* ObjectiveCParser::TypeSpecifierContext::FLOAT() {
  return getToken(ObjectiveCParser::FLOAT, 0);
}

tree::TerminalNode* ObjectiveCParser::TypeSpecifierContext::DOUBLE() {
  return getToken(ObjectiveCParser::DOUBLE, 0);
}

tree::TerminalNode* ObjectiveCParser::TypeSpecifierContext::SIGNED() {
  return getToken(ObjectiveCParser::SIGNED, 0);
}

tree::TerminalNode* ObjectiveCParser::TypeSpecifierContext::UNSIGNED() {
  return getToken(ObjectiveCParser::UNSIGNED, 0);
}

ObjectiveCParser::TypeofExpressionContext* ObjectiveCParser::TypeSpecifierContext::typeofExpression() {
  return getRuleContext<ObjectiveCParser::TypeofExpressionContext>(0);
}

ObjectiveCParser::GenericTypeSpecifierContext* ObjectiveCParser::TypeSpecifierContext::genericTypeSpecifier() {
  return getRuleContext<ObjectiveCParser::GenericTypeSpecifierContext>(0);
}

ObjectiveCParser::StructOrUnionSpecifierContext* ObjectiveCParser::TypeSpecifierContext::structOrUnionSpecifier() {
  return getRuleContext<ObjectiveCParser::StructOrUnionSpecifierContext>(0);
}

ObjectiveCParser::EnumSpecifierContext* ObjectiveCParser::TypeSpecifierContext::enumSpecifier() {
  return getRuleContext<ObjectiveCParser::EnumSpecifierContext>(0);
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::TypeSpecifierContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}

ObjectiveCParser::PointerContext* ObjectiveCParser::TypeSpecifierContext::pointer() {
  return getRuleContext<ObjectiveCParser::PointerContext>(0);
}


size_t ObjectiveCParser::TypeSpecifierContext::getRuleIndex() const {
  return ObjectiveCParser::RuleTypeSpecifier;
}

void ObjectiveCParser::TypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeSpecifier(this);
}

void ObjectiveCParser::TypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeSpecifier(this);
}


antlrcpp::Any ObjectiveCParser::TypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::TypeSpecifierContext* ObjectiveCParser::typeSpecifier() {
  TypeSpecifierContext *_localctx = _tracker.createInstance<TypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 180, ObjectiveCParser::RuleTypeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1077);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 121, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1060);
      match(ObjectiveCParser::VOID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1061);
      match(ObjectiveCParser::CHAR);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1062);
      match(ObjectiveCParser::SHORT);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1063);
      match(ObjectiveCParser::INT);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1064);
      match(ObjectiveCParser::LONG);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1065);
      match(ObjectiveCParser::FLOAT);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1066);
      match(ObjectiveCParser::DOUBLE);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1067);
      match(ObjectiveCParser::SIGNED);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1068);
      match(ObjectiveCParser::UNSIGNED);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1069);
      typeofExpression();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1070);
      genericTypeSpecifier();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1071);
      structOrUnionSpecifier();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(1072);
      enumSpecifier();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(1073);
      identifier();
      setState(1075);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 120, _ctx)) {
      case 1: {
        setState(1074);
        pointer();
        break;
      }

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

//----------------- TypeofExpressionContext ------------------------------------------------------------------

ObjectiveCParser::TypeofExpressionContext::TypeofExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::TypeofExpressionContext::TYPEOF() {
  return getToken(ObjectiveCParser::TYPEOF, 0);
}

tree::TerminalNode* ObjectiveCParser::TypeofExpressionContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

ObjectiveCParser::ExpressionContext* ObjectiveCParser::TypeofExpressionContext::expression() {
  return getRuleContext<ObjectiveCParser::ExpressionContext>(0);
}

tree::TerminalNode* ObjectiveCParser::TypeofExpressionContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}


size_t ObjectiveCParser::TypeofExpressionContext::getRuleIndex() const {
  return ObjectiveCParser::RuleTypeofExpression;
}

void ObjectiveCParser::TypeofExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeofExpression(this);
}

void ObjectiveCParser::TypeofExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeofExpression(this);
}


antlrcpp::Any ObjectiveCParser::TypeofExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitTypeofExpression(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::TypeofExpressionContext* ObjectiveCParser::typeofExpression() {
  TypeofExpressionContext *_localctx = _tracker.createInstance<TypeofExpressionContext>(_ctx, getState());
  enterRule(_localctx, 182, ObjectiveCParser::RuleTypeofExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1079);
    match(ObjectiveCParser::TYPEOF);

    setState(1080);
    match(ObjectiveCParser::LP);
    setState(1081);
    expression(0);
    setState(1082);
    match(ObjectiveCParser::RP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldDeclaratorListContext ------------------------------------------------------------------

ObjectiveCParser::FieldDeclaratorListContext::FieldDeclaratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ObjectiveCParser::FieldDeclaratorContext *> ObjectiveCParser::FieldDeclaratorListContext::fieldDeclarator() {
  return getRuleContexts<ObjectiveCParser::FieldDeclaratorContext>();
}

ObjectiveCParser::FieldDeclaratorContext* ObjectiveCParser::FieldDeclaratorListContext::fieldDeclarator(size_t i) {
  return getRuleContext<ObjectiveCParser::FieldDeclaratorContext>(i);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::FieldDeclaratorListContext::COMMA() {
  return getTokens(ObjectiveCParser::COMMA);
}

tree::TerminalNode* ObjectiveCParser::FieldDeclaratorListContext::COMMA(size_t i) {
  return getToken(ObjectiveCParser::COMMA, i);
}


size_t ObjectiveCParser::FieldDeclaratorListContext::getRuleIndex() const {
  return ObjectiveCParser::RuleFieldDeclaratorList;
}

void ObjectiveCParser::FieldDeclaratorListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldDeclaratorList(this);
}

void ObjectiveCParser::FieldDeclaratorListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldDeclaratorList(this);
}


antlrcpp::Any ObjectiveCParser::FieldDeclaratorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitFieldDeclaratorList(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::FieldDeclaratorListContext* ObjectiveCParser::fieldDeclaratorList() {
  FieldDeclaratorListContext *_localctx = _tracker.createInstance<FieldDeclaratorListContext>(_ctx, getState());
  enterRule(_localctx, 184, ObjectiveCParser::RuleFieldDeclaratorList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1084);
    fieldDeclarator();
    setState(1089);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ObjectiveCParser::COMMA) {
      setState(1085);
      match(ObjectiveCParser::COMMA);
      setState(1086);
      fieldDeclarator();
      setState(1091);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldDeclaratorContext ------------------------------------------------------------------

ObjectiveCParser::FieldDeclaratorContext::FieldDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::DeclaratorContext* ObjectiveCParser::FieldDeclaratorContext::declarator() {
  return getRuleContext<ObjectiveCParser::DeclaratorContext>(0);
}

tree::TerminalNode* ObjectiveCParser::FieldDeclaratorContext::COLON() {
  return getToken(ObjectiveCParser::COLON, 0);
}

ObjectiveCParser::ConstantContext* ObjectiveCParser::FieldDeclaratorContext::constant() {
  return getRuleContext<ObjectiveCParser::ConstantContext>(0);
}


size_t ObjectiveCParser::FieldDeclaratorContext::getRuleIndex() const {
  return ObjectiveCParser::RuleFieldDeclarator;
}

void ObjectiveCParser::FieldDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldDeclarator(this);
}

void ObjectiveCParser::FieldDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldDeclarator(this);
}


antlrcpp::Any ObjectiveCParser::FieldDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitFieldDeclarator(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::FieldDeclaratorContext* ObjectiveCParser::fieldDeclarator() {
  FieldDeclaratorContext *_localctx = _tracker.createInstance<FieldDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 186, ObjectiveCParser::RuleFieldDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1098);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 124, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1092);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1094);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 40) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 40)) & ((1ULL << (ObjectiveCParser::BOOL - 40))
        | (1ULL << (ObjectiveCParser::Class - 40))
        | (1ULL << (ObjectiveCParser::BYCOPY - 40))
        | (1ULL << (ObjectiveCParser::BYREF - 40))
        | (1ULL << (ObjectiveCParser::ID - 40))
        | (1ULL << (ObjectiveCParser::IMP - 40))
        | (1ULL << (ObjectiveCParser::IN - 40))
        | (1ULL << (ObjectiveCParser::INOUT - 40))
        | (1ULL << (ObjectiveCParser::ONEWAY - 40))
        | (1ULL << (ObjectiveCParser::OUT - 40))
        | (1ULL << (ObjectiveCParser::PROTOCOL_ - 40))
        | (1ULL << (ObjectiveCParser::SEL - 40))
        | (1ULL << (ObjectiveCParser::SELF - 40))
        | (1ULL << (ObjectiveCParser::SUPER - 40))
        | (1ULL << (ObjectiveCParser::ATOMIC - 40))
        | (1ULL << (ObjectiveCParser::NONATOMIC - 40))
        | (1ULL << (ObjectiveCParser::RETAIN - 40))
        | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 40))
        | (1ULL << (ObjectiveCParser::BLOCK - 40))
        | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 40))
        | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 40))
        | (1ULL << (ObjectiveCParser::COVARIANT - 40))
        | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 40))
        | (1ULL << (ObjectiveCParser::DEPRECATED - 40))
        | (1ULL << (ObjectiveCParser::KINDOF - 40))
        | (1ULL << (ObjectiveCParser::UNUSED - 40))
        | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 40))
        | (1ULL << (ObjectiveCParser::NULLABLE - 40))
        | (1ULL << (ObjectiveCParser::NONNULL - 40))
        | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 40))
        | (1ULL << (ObjectiveCParser::NS_INLINE - 40)))) != 0) || ((((_la - 104) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 104)) & ((1ULL << (ObjectiveCParser::NS_ENUM - 104))
        | (1ULL << (ObjectiveCParser::NS_OPTIONS - 104))
        | (1ULL << (ObjectiveCParser::ASSIGN - 104))
        | (1ULL << (ObjectiveCParser::COPY - 104))
        | (1ULL << (ObjectiveCParser::GETTER - 104))
        | (1ULL << (ObjectiveCParser::SETTER - 104))
        | (1ULL << (ObjectiveCParser::STRONG - 104))
        | (1ULL << (ObjectiveCParser::READONLY - 104))
        | (1ULL << (ObjectiveCParser::READWRITE - 104))
        | (1ULL << (ObjectiveCParser::WEAK - 104))
        | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 104))
        | (1ULL << (ObjectiveCParser::IB_OUTLET - 104))
        | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 104))
        | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 104))
        | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 104))
        | (1ULL << (ObjectiveCParser::IDENTIFIER - 104))
        | (1ULL << (ObjectiveCParser::LP - 104))
        | (1ULL << (ObjectiveCParser::MUL - 104)))) != 0)) {
        setState(1093);
        declarator();
      }
      setState(1096);
      match(ObjectiveCParser::COLON);
      setState(1097);
      constant();
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

//----------------- EnumSpecifierContext ------------------------------------------------------------------

ObjectiveCParser::EnumSpecifierContext::EnumSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::EnumSpecifierContext::ENUM() {
  return getToken(ObjectiveCParser::ENUM, 0);
}

std::vector<ObjectiveCParser::IdentifierContext *> ObjectiveCParser::EnumSpecifierContext::identifier() {
  return getRuleContexts<ObjectiveCParser::IdentifierContext>();
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::EnumSpecifierContext::identifier(size_t i) {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(i);
}

tree::TerminalNode* ObjectiveCParser::EnumSpecifierContext::LBRACE() {
  return getToken(ObjectiveCParser::LBRACE, 0);
}

ObjectiveCParser::EnumeratorListContext* ObjectiveCParser::EnumSpecifierContext::enumeratorList() {
  return getRuleContext<ObjectiveCParser::EnumeratorListContext>(0);
}

tree::TerminalNode* ObjectiveCParser::EnumSpecifierContext::RBRACE() {
  return getToken(ObjectiveCParser::RBRACE, 0);
}

tree::TerminalNode* ObjectiveCParser::EnumSpecifierContext::COLON() {
  return getToken(ObjectiveCParser::COLON, 0);
}

ObjectiveCParser::TypeNameContext* ObjectiveCParser::EnumSpecifierContext::typeName() {
  return getRuleContext<ObjectiveCParser::TypeNameContext>(0);
}

tree::TerminalNode* ObjectiveCParser::EnumSpecifierContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

tree::TerminalNode* ObjectiveCParser::EnumSpecifierContext::COMMA() {
  return getToken(ObjectiveCParser::COMMA, 0);
}

tree::TerminalNode* ObjectiveCParser::EnumSpecifierContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

tree::TerminalNode* ObjectiveCParser::EnumSpecifierContext::NS_OPTIONS() {
  return getToken(ObjectiveCParser::NS_OPTIONS, 0);
}

tree::TerminalNode* ObjectiveCParser::EnumSpecifierContext::NS_ENUM() {
  return getToken(ObjectiveCParser::NS_ENUM, 0);
}


size_t ObjectiveCParser::EnumSpecifierContext::getRuleIndex() const {
  return ObjectiveCParser::RuleEnumSpecifier;
}

void ObjectiveCParser::EnumSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumSpecifier(this);
}

void ObjectiveCParser::EnumSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumSpecifier(this);
}


antlrcpp::Any ObjectiveCParser::EnumSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitEnumSpecifier(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::EnumSpecifierContext* ObjectiveCParser::enumSpecifier() {
  EnumSpecifierContext *_localctx = _tracker.createInstance<EnumSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 188, ObjectiveCParser::RuleEnumSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1131);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ObjectiveCParser::ENUM: {
        enterOuterAlt(_localctx, 1);
        setState(1100);
        match(ObjectiveCParser::ENUM);
        setState(1106);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 126, _ctx)) {
        case 1: {
          setState(1102);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << ObjectiveCParser::BOOL)
            | (1ULL << ObjectiveCParser::Class)
            | (1ULL << ObjectiveCParser::BYCOPY)
            | (1ULL << ObjectiveCParser::BYREF)
            | (1ULL << ObjectiveCParser::ID)
            | (1ULL << ObjectiveCParser::IMP)
            | (1ULL << ObjectiveCParser::IN)
            | (1ULL << ObjectiveCParser::INOUT)
            | (1ULL << ObjectiveCParser::ONEWAY)
            | (1ULL << ObjectiveCParser::OUT)
            | (1ULL << ObjectiveCParser::PROTOCOL_)
            | (1ULL << ObjectiveCParser::SEL)
            | (1ULL << ObjectiveCParser::SELF)
            | (1ULL << ObjectiveCParser::SUPER))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 81)) & ((1ULL << (ObjectiveCParser::ATOMIC - 81))
            | (1ULL << (ObjectiveCParser::NONATOMIC - 81))
            | (1ULL << (ObjectiveCParser::RETAIN - 81))
            | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 81))
            | (1ULL << (ObjectiveCParser::BLOCK - 81))
            | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 81))
            | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 81))
            | (1ULL << (ObjectiveCParser::COVARIANT - 81))
            | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 81))
            | (1ULL << (ObjectiveCParser::DEPRECATED - 81))
            | (1ULL << (ObjectiveCParser::KINDOF - 81))
            | (1ULL << (ObjectiveCParser::UNUSED - 81))
            | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 81))
            | (1ULL << (ObjectiveCParser::NULLABLE - 81))
            | (1ULL << (ObjectiveCParser::NONNULL - 81))
            | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 81))
            | (1ULL << (ObjectiveCParser::NS_INLINE - 81))
            | (1ULL << (ObjectiveCParser::NS_ENUM - 81))
            | (1ULL << (ObjectiveCParser::NS_OPTIONS - 81))
            | (1ULL << (ObjectiveCParser::ASSIGN - 81))
            | (1ULL << (ObjectiveCParser::COPY - 81))
            | (1ULL << (ObjectiveCParser::GETTER - 81))
            | (1ULL << (ObjectiveCParser::SETTER - 81))
            | (1ULL << (ObjectiveCParser::STRONG - 81))
            | (1ULL << (ObjectiveCParser::READONLY - 81))
            | (1ULL << (ObjectiveCParser::READWRITE - 81))
            | (1ULL << (ObjectiveCParser::WEAK - 81))
            | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 81))
            | (1ULL << (ObjectiveCParser::IB_OUTLET - 81))
            | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 81))
            | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 81))
            | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 81))
            | (1ULL << (ObjectiveCParser::IDENTIFIER - 81)))) != 0)) {
            setState(1101);
            identifier();
          }
          setState(1104);
          match(ObjectiveCParser::COLON);
          setState(1105);
          typeName();
          break;
        }

        }
        setState(1119);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case ObjectiveCParser::BOOL:
          case ObjectiveCParser::Class:
          case ObjectiveCParser::BYCOPY:
          case ObjectiveCParser::BYREF:
          case ObjectiveCParser::ID:
          case ObjectiveCParser::IMP:
          case ObjectiveCParser::IN:
          case ObjectiveCParser::INOUT:
          case ObjectiveCParser::ONEWAY:
          case ObjectiveCParser::OUT:
          case ObjectiveCParser::PROTOCOL_:
          case ObjectiveCParser::SEL:
          case ObjectiveCParser::SELF:
          case ObjectiveCParser::SUPER:
          case ObjectiveCParser::ATOMIC:
          case ObjectiveCParser::NONATOMIC:
          case ObjectiveCParser::RETAIN:
          case ObjectiveCParser::AUTORELEASING_QUALIFIER:
          case ObjectiveCParser::BLOCK:
          case ObjectiveCParser::BRIDGE_RETAINED:
          case ObjectiveCParser::BRIDGE_TRANSFER:
          case ObjectiveCParser::COVARIANT:
          case ObjectiveCParser::CONTRAVARIANT:
          case ObjectiveCParser::DEPRECATED:
          case ObjectiveCParser::KINDOF:
          case ObjectiveCParser::UNUSED:
          case ObjectiveCParser::NULL_UNSPECIFIED:
          case ObjectiveCParser::NULLABLE:
          case ObjectiveCParser::NONNULL:
          case ObjectiveCParser::NULL_RESETTABLE:
          case ObjectiveCParser::NS_INLINE:
          case ObjectiveCParser::NS_ENUM:
          case ObjectiveCParser::NS_OPTIONS:
          case ObjectiveCParser::ASSIGN:
          case ObjectiveCParser::COPY:
          case ObjectiveCParser::GETTER:
          case ObjectiveCParser::SETTER:
          case ObjectiveCParser::STRONG:
          case ObjectiveCParser::READONLY:
          case ObjectiveCParser::READWRITE:
          case ObjectiveCParser::WEAK:
          case ObjectiveCParser::UNSAFE_UNRETAINED:
          case ObjectiveCParser::IB_OUTLET:
          case ObjectiveCParser::IB_OUTLET_COLLECTION:
          case ObjectiveCParser::IB_INSPECTABLE:
          case ObjectiveCParser::IB_DESIGNABLE:
          case ObjectiveCParser::IDENTIFIER: {
            setState(1108);
            identifier();
            setState(1113);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 127, _ctx)) {
            case 1: {
              setState(1109);
              match(ObjectiveCParser::LBRACE);
              setState(1110);
              enumeratorList();
              setState(1111);
              match(ObjectiveCParser::RBRACE);
              break;
            }

            }
            break;
          }

          case ObjectiveCParser::LBRACE: {
            setState(1115);
            match(ObjectiveCParser::LBRACE);
            setState(1116);
            enumeratorList();
            setState(1117);
            match(ObjectiveCParser::RBRACE);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      case ObjectiveCParser::NS_ENUM:
      case ObjectiveCParser::NS_OPTIONS: {
        enterOuterAlt(_localctx, 2);
        setState(1121);
        _la = _input->LA(1);
        if (!(_la == ObjectiveCParser::NS_ENUM

        || _la == ObjectiveCParser::NS_OPTIONS)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(1122);
        match(ObjectiveCParser::LP);
        setState(1123);
        typeName();
        setState(1124);
        match(ObjectiveCParser::COMMA);
        setState(1125);
        identifier();
        setState(1126);
        match(ObjectiveCParser::RP);
        setState(1127);
        match(ObjectiveCParser::LBRACE);
        setState(1128);
        enumeratorList();
        setState(1129);
        match(ObjectiveCParser::RBRACE);
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

//----------------- EnumeratorListContext ------------------------------------------------------------------

ObjectiveCParser::EnumeratorListContext::EnumeratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ObjectiveCParser::EnumeratorContext *> ObjectiveCParser::EnumeratorListContext::enumerator() {
  return getRuleContexts<ObjectiveCParser::EnumeratorContext>();
}

ObjectiveCParser::EnumeratorContext* ObjectiveCParser::EnumeratorListContext::enumerator(size_t i) {
  return getRuleContext<ObjectiveCParser::EnumeratorContext>(i);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::EnumeratorListContext::COMMA() {
  return getTokens(ObjectiveCParser::COMMA);
}

tree::TerminalNode* ObjectiveCParser::EnumeratorListContext::COMMA(size_t i) {
  return getToken(ObjectiveCParser::COMMA, i);
}


size_t ObjectiveCParser::EnumeratorListContext::getRuleIndex() const {
  return ObjectiveCParser::RuleEnumeratorList;
}

void ObjectiveCParser::EnumeratorListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumeratorList(this);
}

void ObjectiveCParser::EnumeratorListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumeratorList(this);
}


antlrcpp::Any ObjectiveCParser::EnumeratorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitEnumeratorList(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::EnumeratorListContext* ObjectiveCParser::enumeratorList() {
  EnumeratorListContext *_localctx = _tracker.createInstance<EnumeratorListContext>(_ctx, getState());
  enterRule(_localctx, 190, ObjectiveCParser::RuleEnumeratorList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1133);
    enumerator();
    setState(1138);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 130, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1134);
        match(ObjectiveCParser::COMMA);
        setState(1135);
        enumerator(); 
      }
      setState(1140);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 130, _ctx);
    }
    setState(1142);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::COMMA) {
      setState(1141);
      match(ObjectiveCParser::COMMA);
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

ObjectiveCParser::EnumeratorContext::EnumeratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::EnumeratorIdentifierContext* ObjectiveCParser::EnumeratorContext::enumeratorIdentifier() {
  return getRuleContext<ObjectiveCParser::EnumeratorIdentifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::EnumeratorContext::ASSIGNMENT() {
  return getToken(ObjectiveCParser::ASSIGNMENT, 0);
}

ObjectiveCParser::ExpressionContext* ObjectiveCParser::EnumeratorContext::expression() {
  return getRuleContext<ObjectiveCParser::ExpressionContext>(0);
}


size_t ObjectiveCParser::EnumeratorContext::getRuleIndex() const {
  return ObjectiveCParser::RuleEnumerator;
}

void ObjectiveCParser::EnumeratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumerator(this);
}

void ObjectiveCParser::EnumeratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumerator(this);
}


antlrcpp::Any ObjectiveCParser::EnumeratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitEnumerator(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::EnumeratorContext* ObjectiveCParser::enumerator() {
  EnumeratorContext *_localctx = _tracker.createInstance<EnumeratorContext>(_ctx, getState());
  enterRule(_localctx, 192, ObjectiveCParser::RuleEnumerator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1144);
    enumeratorIdentifier();
    setState(1147);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::ASSIGNMENT) {
      setState(1145);
      match(ObjectiveCParser::ASSIGNMENT);
      setState(1146);
      expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorIdentifierContext ------------------------------------------------------------------

ObjectiveCParser::EnumeratorIdentifierContext::EnumeratorIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::EnumeratorIdentifierContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::EnumeratorIdentifierContext::DEFAULT() {
  return getToken(ObjectiveCParser::DEFAULT, 0);
}


size_t ObjectiveCParser::EnumeratorIdentifierContext::getRuleIndex() const {
  return ObjectiveCParser::RuleEnumeratorIdentifier;
}

void ObjectiveCParser::EnumeratorIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumeratorIdentifier(this);
}

void ObjectiveCParser::EnumeratorIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumeratorIdentifier(this);
}


antlrcpp::Any ObjectiveCParser::EnumeratorIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitEnumeratorIdentifier(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::EnumeratorIdentifierContext* ObjectiveCParser::enumeratorIdentifier() {
  EnumeratorIdentifierContext *_localctx = _tracker.createInstance<EnumeratorIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 194, ObjectiveCParser::RuleEnumeratorIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1151);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ObjectiveCParser::BOOL:
      case ObjectiveCParser::Class:
      case ObjectiveCParser::BYCOPY:
      case ObjectiveCParser::BYREF:
      case ObjectiveCParser::ID:
      case ObjectiveCParser::IMP:
      case ObjectiveCParser::IN:
      case ObjectiveCParser::INOUT:
      case ObjectiveCParser::ONEWAY:
      case ObjectiveCParser::OUT:
      case ObjectiveCParser::PROTOCOL_:
      case ObjectiveCParser::SEL:
      case ObjectiveCParser::SELF:
      case ObjectiveCParser::SUPER:
      case ObjectiveCParser::ATOMIC:
      case ObjectiveCParser::NONATOMIC:
      case ObjectiveCParser::RETAIN:
      case ObjectiveCParser::AUTORELEASING_QUALIFIER:
      case ObjectiveCParser::BLOCK:
      case ObjectiveCParser::BRIDGE_RETAINED:
      case ObjectiveCParser::BRIDGE_TRANSFER:
      case ObjectiveCParser::COVARIANT:
      case ObjectiveCParser::CONTRAVARIANT:
      case ObjectiveCParser::DEPRECATED:
      case ObjectiveCParser::KINDOF:
      case ObjectiveCParser::UNUSED:
      case ObjectiveCParser::NULL_UNSPECIFIED:
      case ObjectiveCParser::NULLABLE:
      case ObjectiveCParser::NONNULL:
      case ObjectiveCParser::NULL_RESETTABLE:
      case ObjectiveCParser::NS_INLINE:
      case ObjectiveCParser::NS_ENUM:
      case ObjectiveCParser::NS_OPTIONS:
      case ObjectiveCParser::ASSIGN:
      case ObjectiveCParser::COPY:
      case ObjectiveCParser::GETTER:
      case ObjectiveCParser::SETTER:
      case ObjectiveCParser::STRONG:
      case ObjectiveCParser::READONLY:
      case ObjectiveCParser::READWRITE:
      case ObjectiveCParser::WEAK:
      case ObjectiveCParser::UNSAFE_UNRETAINED:
      case ObjectiveCParser::IB_OUTLET:
      case ObjectiveCParser::IB_OUTLET_COLLECTION:
      case ObjectiveCParser::IB_INSPECTABLE:
      case ObjectiveCParser::IB_DESIGNABLE:
      case ObjectiveCParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(1149);
        identifier();
        break;
      }

      case ObjectiveCParser::DEFAULT: {
        enterOuterAlt(_localctx, 2);
        setState(1150);
        match(ObjectiveCParser::DEFAULT);
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

//----------------- DirectDeclaratorContext ------------------------------------------------------------------

ObjectiveCParser::DirectDeclaratorContext::DirectDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::DirectDeclaratorContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::DirectDeclaratorContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

ObjectiveCParser::DeclaratorContext* ObjectiveCParser::DirectDeclaratorContext::declarator() {
  return getRuleContext<ObjectiveCParser::DeclaratorContext>(0);
}

tree::TerminalNode* ObjectiveCParser::DirectDeclaratorContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

std::vector<ObjectiveCParser::DeclaratorSuffixContext *> ObjectiveCParser::DirectDeclaratorContext::declaratorSuffix() {
  return getRuleContexts<ObjectiveCParser::DeclaratorSuffixContext>();
}

ObjectiveCParser::DeclaratorSuffixContext* ObjectiveCParser::DirectDeclaratorContext::declaratorSuffix(size_t i) {
  return getRuleContext<ObjectiveCParser::DeclaratorSuffixContext>(i);
}

tree::TerminalNode* ObjectiveCParser::DirectDeclaratorContext::BITXOR() {
  return getToken(ObjectiveCParser::BITXOR, 0);
}

ObjectiveCParser::BlockParametersContext* ObjectiveCParser::DirectDeclaratorContext::blockParameters() {
  return getRuleContext<ObjectiveCParser::BlockParametersContext>(0);
}

ObjectiveCParser::NullabilitySpecifierContext* ObjectiveCParser::DirectDeclaratorContext::nullabilitySpecifier() {
  return getRuleContext<ObjectiveCParser::NullabilitySpecifierContext>(0);
}


size_t ObjectiveCParser::DirectDeclaratorContext::getRuleIndex() const {
  return ObjectiveCParser::RuleDirectDeclarator;
}

void ObjectiveCParser::DirectDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDirectDeclarator(this);
}

void ObjectiveCParser::DirectDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDirectDeclarator(this);
}


antlrcpp::Any ObjectiveCParser::DirectDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitDirectDeclarator(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::DirectDeclaratorContext* ObjectiveCParser::directDeclarator() {
  DirectDeclaratorContext *_localctx = _tracker.createInstance<DirectDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 196, ObjectiveCParser::RuleDirectDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1176);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 138, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1158);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ObjectiveCParser::BOOL:
        case ObjectiveCParser::Class:
        case ObjectiveCParser::BYCOPY:
        case ObjectiveCParser::BYREF:
        case ObjectiveCParser::ID:
        case ObjectiveCParser::IMP:
        case ObjectiveCParser::IN:
        case ObjectiveCParser::INOUT:
        case ObjectiveCParser::ONEWAY:
        case ObjectiveCParser::OUT:
        case ObjectiveCParser::PROTOCOL_:
        case ObjectiveCParser::SEL:
        case ObjectiveCParser::SELF:
        case ObjectiveCParser::SUPER:
        case ObjectiveCParser::ATOMIC:
        case ObjectiveCParser::NONATOMIC:
        case ObjectiveCParser::RETAIN:
        case ObjectiveCParser::AUTORELEASING_QUALIFIER:
        case ObjectiveCParser::BLOCK:
        case ObjectiveCParser::BRIDGE_RETAINED:
        case ObjectiveCParser::BRIDGE_TRANSFER:
        case ObjectiveCParser::COVARIANT:
        case ObjectiveCParser::CONTRAVARIANT:
        case ObjectiveCParser::DEPRECATED:
        case ObjectiveCParser::KINDOF:
        case ObjectiveCParser::UNUSED:
        case ObjectiveCParser::NULL_UNSPECIFIED:
        case ObjectiveCParser::NULLABLE:
        case ObjectiveCParser::NONNULL:
        case ObjectiveCParser::NULL_RESETTABLE:
        case ObjectiveCParser::NS_INLINE:
        case ObjectiveCParser::NS_ENUM:
        case ObjectiveCParser::NS_OPTIONS:
        case ObjectiveCParser::ASSIGN:
        case ObjectiveCParser::COPY:
        case ObjectiveCParser::GETTER:
        case ObjectiveCParser::SETTER:
        case ObjectiveCParser::STRONG:
        case ObjectiveCParser::READONLY:
        case ObjectiveCParser::READWRITE:
        case ObjectiveCParser::WEAK:
        case ObjectiveCParser::UNSAFE_UNRETAINED:
        case ObjectiveCParser::IB_OUTLET:
        case ObjectiveCParser::IB_OUTLET_COLLECTION:
        case ObjectiveCParser::IB_INSPECTABLE:
        case ObjectiveCParser::IB_DESIGNABLE:
        case ObjectiveCParser::IDENTIFIER: {
          setState(1153);
          identifier();
          break;
        }

        case ObjectiveCParser::LP: {
          setState(1154);
          match(ObjectiveCParser::LP);
          setState(1155);
          declarator();
          setState(1156);
          match(ObjectiveCParser::RP);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1163);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ObjectiveCParser::LBRACK) {
        setState(1160);
        declaratorSuffix();
        setState(1165);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1166);
      match(ObjectiveCParser::LP);
      setState(1167);
      match(ObjectiveCParser::BITXOR);
      setState(1169);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 136, _ctx)) {
      case 1: {
        setState(1168);
        nullabilitySpecifier();
        break;
      }

      }
      setState(1172);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ObjectiveCParser::BOOL)
        | (1ULL << ObjectiveCParser::Class)
        | (1ULL << ObjectiveCParser::BYCOPY)
        | (1ULL << ObjectiveCParser::BYREF)
        | (1ULL << ObjectiveCParser::ID)
        | (1ULL << ObjectiveCParser::IMP)
        | (1ULL << ObjectiveCParser::IN)
        | (1ULL << ObjectiveCParser::INOUT)
        | (1ULL << ObjectiveCParser::ONEWAY)
        | (1ULL << ObjectiveCParser::OUT)
        | (1ULL << ObjectiveCParser::PROTOCOL_)
        | (1ULL << ObjectiveCParser::SEL)
        | (1ULL << ObjectiveCParser::SELF)
        | (1ULL << ObjectiveCParser::SUPER))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 81)) & ((1ULL << (ObjectiveCParser::ATOMIC - 81))
        | (1ULL << (ObjectiveCParser::NONATOMIC - 81))
        | (1ULL << (ObjectiveCParser::RETAIN - 81))
        | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 81))
        | (1ULL << (ObjectiveCParser::BLOCK - 81))
        | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 81))
        | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 81))
        | (1ULL << (ObjectiveCParser::COVARIANT - 81))
        | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 81))
        | (1ULL << (ObjectiveCParser::DEPRECATED - 81))
        | (1ULL << (ObjectiveCParser::KINDOF - 81))
        | (1ULL << (ObjectiveCParser::UNUSED - 81))
        | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 81))
        | (1ULL << (ObjectiveCParser::NULLABLE - 81))
        | (1ULL << (ObjectiveCParser::NONNULL - 81))
        | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 81))
        | (1ULL << (ObjectiveCParser::NS_INLINE - 81))
        | (1ULL << (ObjectiveCParser::NS_ENUM - 81))
        | (1ULL << (ObjectiveCParser::NS_OPTIONS - 81))
        | (1ULL << (ObjectiveCParser::ASSIGN - 81))
        | (1ULL << (ObjectiveCParser::COPY - 81))
        | (1ULL << (ObjectiveCParser::GETTER - 81))
        | (1ULL << (ObjectiveCParser::SETTER - 81))
        | (1ULL << (ObjectiveCParser::STRONG - 81))
        | (1ULL << (ObjectiveCParser::READONLY - 81))
        | (1ULL << (ObjectiveCParser::READWRITE - 81))
        | (1ULL << (ObjectiveCParser::WEAK - 81))
        | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 81))
        | (1ULL << (ObjectiveCParser::IB_OUTLET - 81))
        | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 81))
        | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 81))
        | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 81))
        | (1ULL << (ObjectiveCParser::IDENTIFIER - 81)))) != 0)) {
        setState(1171);
        identifier();
      }
      setState(1174);
      match(ObjectiveCParser::RP);
      setState(1175);
      blockParameters();
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

//----------------- DeclaratorSuffixContext ------------------------------------------------------------------

ObjectiveCParser::DeclaratorSuffixContext::DeclaratorSuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::DeclaratorSuffixContext::LBRACK() {
  return getToken(ObjectiveCParser::LBRACK, 0);
}

tree::TerminalNode* ObjectiveCParser::DeclaratorSuffixContext::RBRACK() {
  return getToken(ObjectiveCParser::RBRACK, 0);
}

ObjectiveCParser::ConstantExpressionContext* ObjectiveCParser::DeclaratorSuffixContext::constantExpression() {
  return getRuleContext<ObjectiveCParser::ConstantExpressionContext>(0);
}


size_t ObjectiveCParser::DeclaratorSuffixContext::getRuleIndex() const {
  return ObjectiveCParser::RuleDeclaratorSuffix;
}

void ObjectiveCParser::DeclaratorSuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaratorSuffix(this);
}

void ObjectiveCParser::DeclaratorSuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaratorSuffix(this);
}


antlrcpp::Any ObjectiveCParser::DeclaratorSuffixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitDeclaratorSuffix(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::DeclaratorSuffixContext* ObjectiveCParser::declaratorSuffix() {
  DeclaratorSuffixContext *_localctx = _tracker.createInstance<DeclaratorSuffixContext>(_ctx, getState());
  enterRule(_localctx, 198, ObjectiveCParser::RuleDeclaratorSuffix);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1178);
    match(ObjectiveCParser::LBRACK);
    setState(1180);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::TRUE)
      | (1ULL << ObjectiveCParser::FALSE)
      | (1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::NIL)
      | (1ULL << ObjectiveCParser::NO)
      | (1ULL << ObjectiveCParser::NULL_)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER)
      | (1ULL << ObjectiveCParser::YES))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 81)) & ((1ULL << (ObjectiveCParser::ATOMIC - 81))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 81))
      | (1ULL << (ObjectiveCParser::RETAIN - 81))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 81))
      | (1ULL << (ObjectiveCParser::BLOCK - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 81))
      | (1ULL << (ObjectiveCParser::COVARIANT - 81))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 81))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 81))
      | (1ULL << (ObjectiveCParser::KINDOF - 81))
      | (1ULL << (ObjectiveCParser::UNUSED - 81))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 81))
      | (1ULL << (ObjectiveCParser::NULLABLE - 81))
      | (1ULL << (ObjectiveCParser::NONNULL - 81))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 81))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 81))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 81))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 81))
      | (1ULL << (ObjectiveCParser::ASSIGN - 81))
      | (1ULL << (ObjectiveCParser::COPY - 81))
      | (1ULL << (ObjectiveCParser::GETTER - 81))
      | (1ULL << (ObjectiveCParser::SETTER - 81))
      | (1ULL << (ObjectiveCParser::STRONG - 81))
      | (1ULL << (ObjectiveCParser::READONLY - 81))
      | (1ULL << (ObjectiveCParser::READWRITE - 81))
      | (1ULL << (ObjectiveCParser::WEAK - 81))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 81))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 81))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 81))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 81))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 81))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 81)))) != 0) || ((((_la - 152) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 152)) & ((1ULL << (ObjectiveCParser::ADD - 152))
      | (1ULL << (ObjectiveCParser::SUB - 152))
      | (1ULL << (ObjectiveCParser::CHARACTER_LITERAL - 152))
      | (1ULL << (ObjectiveCParser::HEX_LITERAL - 152))
      | (1ULL << (ObjectiveCParser::OCTAL_LITERAL - 152))
      | (1ULL << (ObjectiveCParser::BINARY_LITERAL - 152))
      | (1ULL << (ObjectiveCParser::DECIMAL_LITERAL - 152))
      | (1ULL << (ObjectiveCParser::FLOATING_POINT_LITERAL - 152)))) != 0)) {
      setState(1179);
      constantExpression();
    }
    setState(1182);
    match(ObjectiveCParser::RBRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

ObjectiveCParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::ParameterDeclarationListContext* ObjectiveCParser::ParameterListContext::parameterDeclarationList() {
  return getRuleContext<ObjectiveCParser::ParameterDeclarationListContext>(0);
}

tree::TerminalNode* ObjectiveCParser::ParameterListContext::COMMA() {
  return getToken(ObjectiveCParser::COMMA, 0);
}

tree::TerminalNode* ObjectiveCParser::ParameterListContext::ELIPSIS() {
  return getToken(ObjectiveCParser::ELIPSIS, 0);
}


size_t ObjectiveCParser::ParameterListContext::getRuleIndex() const {
  return ObjectiveCParser::RuleParameterList;
}

void ObjectiveCParser::ParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterList(this);
}

void ObjectiveCParser::ParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterList(this);
}


antlrcpp::Any ObjectiveCParser::ParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitParameterList(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ParameterListContext* ObjectiveCParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 200, ObjectiveCParser::RuleParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1184);
    parameterDeclarationList();
    setState(1187);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::COMMA) {
      setState(1185);
      match(ObjectiveCParser::COMMA);
      setState(1186);
      match(ObjectiveCParser::ELIPSIS);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerContext ------------------------------------------------------------------

ObjectiveCParser::PointerContext::PointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::PointerContext::MUL() {
  return getToken(ObjectiveCParser::MUL, 0);
}

ObjectiveCParser::DeclarationSpecifiersContext* ObjectiveCParser::PointerContext::declarationSpecifiers() {
  return getRuleContext<ObjectiveCParser::DeclarationSpecifiersContext>(0);
}

ObjectiveCParser::PointerContext* ObjectiveCParser::PointerContext::pointer() {
  return getRuleContext<ObjectiveCParser::PointerContext>(0);
}


size_t ObjectiveCParser::PointerContext::getRuleIndex() const {
  return ObjectiveCParser::RulePointer;
}

void ObjectiveCParser::PointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointer(this);
}

void ObjectiveCParser::PointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointer(this);
}


antlrcpp::Any ObjectiveCParser::PointerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitPointer(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::PointerContext* ObjectiveCParser::pointer() {
  PointerContext *_localctx = _tracker.createInstance<PointerContext>(_ctx, getState());
  enterRule(_localctx, 202, ObjectiveCParser::RulePointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1189);
    match(ObjectiveCParser::MUL);
    setState(1191);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, _ctx)) {
    case 1: {
      setState(1190);
      declarationSpecifiers();
      break;
    }

    }
    setState(1194);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 142, _ctx)) {
    case 1: {
      setState(1193);
      pointer();
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

//----------------- MacroContext ------------------------------------------------------------------

ObjectiveCParser::MacroContext::MacroContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::MacroContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::MacroContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

std::vector<ObjectiveCParser::PrimaryExpressionContext *> ObjectiveCParser::MacroContext::primaryExpression() {
  return getRuleContexts<ObjectiveCParser::PrimaryExpressionContext>();
}

ObjectiveCParser::PrimaryExpressionContext* ObjectiveCParser::MacroContext::primaryExpression(size_t i) {
  return getRuleContext<ObjectiveCParser::PrimaryExpressionContext>(i);
}

tree::TerminalNode* ObjectiveCParser::MacroContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::MacroContext::COMMA() {
  return getTokens(ObjectiveCParser::COMMA);
}

tree::TerminalNode* ObjectiveCParser::MacroContext::COMMA(size_t i) {
  return getToken(ObjectiveCParser::COMMA, i);
}


size_t ObjectiveCParser::MacroContext::getRuleIndex() const {
  return ObjectiveCParser::RuleMacro;
}

void ObjectiveCParser::MacroContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMacro(this);
}

void ObjectiveCParser::MacroContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMacro(this);
}


antlrcpp::Any ObjectiveCParser::MacroContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitMacro(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::MacroContext* ObjectiveCParser::macro() {
  MacroContext *_localctx = _tracker.createInstance<MacroContext>(_ctx, getState());
  enterRule(_localctx, 204, ObjectiveCParser::RuleMacro);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1196);
    identifier();
    setState(1208);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::LP) {
      setState(1197);
      match(ObjectiveCParser::LP);
      setState(1198);
      primaryExpression();
      setState(1203);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ObjectiveCParser::COMMA) {
        setState(1199);
        match(ObjectiveCParser::COMMA);
        setState(1200);
        primaryExpression();
        setState(1205);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1206);
      match(ObjectiveCParser::RP);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayInitializerContext ------------------------------------------------------------------

ObjectiveCParser::ArrayInitializerContext::ArrayInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::ArrayInitializerContext::LBRACE() {
  return getToken(ObjectiveCParser::LBRACE, 0);
}

tree::TerminalNode* ObjectiveCParser::ArrayInitializerContext::RBRACE() {
  return getToken(ObjectiveCParser::RBRACE, 0);
}

ObjectiveCParser::ExpressionsContext* ObjectiveCParser::ArrayInitializerContext::expressions() {
  return getRuleContext<ObjectiveCParser::ExpressionsContext>(0);
}

tree::TerminalNode* ObjectiveCParser::ArrayInitializerContext::COMMA() {
  return getToken(ObjectiveCParser::COMMA, 0);
}


size_t ObjectiveCParser::ArrayInitializerContext::getRuleIndex() const {
  return ObjectiveCParser::RuleArrayInitializer;
}

void ObjectiveCParser::ArrayInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayInitializer(this);
}

void ObjectiveCParser::ArrayInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayInitializer(this);
}


antlrcpp::Any ObjectiveCParser::ArrayInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitArrayInitializer(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ArrayInitializerContext* ObjectiveCParser::arrayInitializer() {
  ArrayInitializerContext *_localctx = _tracker.createInstance<ArrayInitializerContext>(_ctx, getState());
  enterRule(_localctx, 206, ObjectiveCParser::RuleArrayInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1210);
    match(ObjectiveCParser::LBRACE);
    setState(1215);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::SIZEOF)
      | (1ULL << ObjectiveCParser::TRUE)
      | (1ULL << ObjectiveCParser::FALSE)
      | (1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::NIL)
      | (1ULL << ObjectiveCParser::NO)
      | (1ULL << ObjectiveCParser::NULL_)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER)
      | (1ULL << ObjectiveCParser::YES)
      | (1ULL << ObjectiveCParser::ENCODE))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (ObjectiveCParser::PROTOCOL - 69))
      | (1ULL << (ObjectiveCParser::SELECTOR - 69))
      | (1ULL << (ObjectiveCParser::ATOMIC - 69))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 69))
      | (1ULL << (ObjectiveCParser::RETAIN - 69))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 69))
      | (1ULL << (ObjectiveCParser::BLOCK - 69))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 69))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 69))
      | (1ULL << (ObjectiveCParser::COVARIANT - 69))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 69))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 69))
      | (1ULL << (ObjectiveCParser::KINDOF - 69))
      | (1ULL << (ObjectiveCParser::UNUSED - 69))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 69))
      | (1ULL << (ObjectiveCParser::NULLABLE - 69))
      | (1ULL << (ObjectiveCParser::NONNULL - 69))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 69))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 69))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 69))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 69))
      | (1ULL << (ObjectiveCParser::ASSIGN - 69))
      | (1ULL << (ObjectiveCParser::COPY - 69))
      | (1ULL << (ObjectiveCParser::GETTER - 69))
      | (1ULL << (ObjectiveCParser::SETTER - 69))
      | (1ULL << (ObjectiveCParser::STRONG - 69))
      | (1ULL << (ObjectiveCParser::READONLY - 69))
      | (1ULL << (ObjectiveCParser::READWRITE - 69))
      | (1ULL << (ObjectiveCParser::WEAK - 69))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 69))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 69))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 69))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 69))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 69))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 69))
      | (1ULL << (ObjectiveCParser::LP - 69))
      | (1ULL << (ObjectiveCParser::LBRACK - 69)))) != 0) || ((((_la - 136) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 136)) & ((1ULL << (ObjectiveCParser::AT - 136))
      | (1ULL << (ObjectiveCParser::BANG - 136))
      | (1ULL << (ObjectiveCParser::TILDE - 136))
      | (1ULL << (ObjectiveCParser::INC - 136))
      | (1ULL << (ObjectiveCParser::DEC - 136))
      | (1ULL << (ObjectiveCParser::ADD - 136))
      | (1ULL << (ObjectiveCParser::SUB - 136))
      | (1ULL << (ObjectiveCParser::MUL - 136))
      | (1ULL << (ObjectiveCParser::BITAND - 136))
      | (1ULL << (ObjectiveCParser::BITXOR - 136))
      | (1ULL << (ObjectiveCParser::CHARACTER_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::STRING_START - 136))
      | (1ULL << (ObjectiveCParser::HEX_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::OCTAL_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::BINARY_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::DECIMAL_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::FLOATING_POINT_LITERAL - 136)))) != 0)) {
      setState(1211);
      expressions();
      setState(1213);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ObjectiveCParser::COMMA) {
        setState(1212);
        match(ObjectiveCParser::COMMA);
      }
    }
    setState(1217);
    match(ObjectiveCParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructInitializerContext ------------------------------------------------------------------

ObjectiveCParser::StructInitializerContext::StructInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::StructInitializerContext::LBRACE() {
  return getToken(ObjectiveCParser::LBRACE, 0);
}

tree::TerminalNode* ObjectiveCParser::StructInitializerContext::RBRACE() {
  return getToken(ObjectiveCParser::RBRACE, 0);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::StructInitializerContext::DOT() {
  return getTokens(ObjectiveCParser::DOT);
}

tree::TerminalNode* ObjectiveCParser::StructInitializerContext::DOT(size_t i) {
  return getToken(ObjectiveCParser::DOT, i);
}

std::vector<ObjectiveCParser::ExpressionContext *> ObjectiveCParser::StructInitializerContext::expression() {
  return getRuleContexts<ObjectiveCParser::ExpressionContext>();
}

ObjectiveCParser::ExpressionContext* ObjectiveCParser::StructInitializerContext::expression(size_t i) {
  return getRuleContext<ObjectiveCParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::StructInitializerContext::COMMA() {
  return getTokens(ObjectiveCParser::COMMA);
}

tree::TerminalNode* ObjectiveCParser::StructInitializerContext::COMMA(size_t i) {
  return getToken(ObjectiveCParser::COMMA, i);
}


size_t ObjectiveCParser::StructInitializerContext::getRuleIndex() const {
  return ObjectiveCParser::RuleStructInitializer;
}

void ObjectiveCParser::StructInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructInitializer(this);
}

void ObjectiveCParser::StructInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructInitializer(this);
}


antlrcpp::Any ObjectiveCParser::StructInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitStructInitializer(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::StructInitializerContext* ObjectiveCParser::structInitializer() {
  StructInitializerContext *_localctx = _tracker.createInstance<StructInitializerContext>(_ctx, getState());
  enterRule(_localctx, 208, ObjectiveCParser::RuleStructInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1219);
    match(ObjectiveCParser::LBRACE);
    setState(1233);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::DOT) {
      setState(1220);
      match(ObjectiveCParser::DOT);
      setState(1221);
      expression(0);
      setState(1227);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 147, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(1222);
          match(ObjectiveCParser::COMMA);
          setState(1223);
          match(ObjectiveCParser::DOT);
          setState(1224);
          expression(0); 
        }
        setState(1229);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 147, _ctx);
      }
      setState(1231);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ObjectiveCParser::COMMA) {
        setState(1230);
        match(ObjectiveCParser::COMMA);
      }
    }
    setState(1235);
    match(ObjectiveCParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerListContext ------------------------------------------------------------------

ObjectiveCParser::InitializerListContext::InitializerListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ObjectiveCParser::InitializerContext *> ObjectiveCParser::InitializerListContext::initializer() {
  return getRuleContexts<ObjectiveCParser::InitializerContext>();
}

ObjectiveCParser::InitializerContext* ObjectiveCParser::InitializerListContext::initializer(size_t i) {
  return getRuleContext<ObjectiveCParser::InitializerContext>(i);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::InitializerListContext::COMMA() {
  return getTokens(ObjectiveCParser::COMMA);
}

tree::TerminalNode* ObjectiveCParser::InitializerListContext::COMMA(size_t i) {
  return getToken(ObjectiveCParser::COMMA, i);
}


size_t ObjectiveCParser::InitializerListContext::getRuleIndex() const {
  return ObjectiveCParser::RuleInitializerList;
}

void ObjectiveCParser::InitializerListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerList(this);
}

void ObjectiveCParser::InitializerListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerList(this);
}


antlrcpp::Any ObjectiveCParser::InitializerListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitInitializerList(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::InitializerListContext* ObjectiveCParser::initializerList() {
  InitializerListContext *_localctx = _tracker.createInstance<InitializerListContext>(_ctx, getState());
  enterRule(_localctx, 210, ObjectiveCParser::RuleInitializerList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1237);
    initializer();
    setState(1242);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 150, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1238);
        match(ObjectiveCParser::COMMA);
        setState(1239);
        initializer(); 
      }
      setState(1244);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 150, _ctx);
    }
    setState(1246);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::COMMA) {
      setState(1245);
      match(ObjectiveCParser::COMMA);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeNameContext ------------------------------------------------------------------

ObjectiveCParser::TypeNameContext::TypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::SpecifierQualifierListContext* ObjectiveCParser::TypeNameContext::specifierQualifierList() {
  return getRuleContext<ObjectiveCParser::SpecifierQualifierListContext>(0);
}

ObjectiveCParser::AbstractDeclaratorContext* ObjectiveCParser::TypeNameContext::abstractDeclarator() {
  return getRuleContext<ObjectiveCParser::AbstractDeclaratorContext>(0);
}

ObjectiveCParser::BlockTypeContext* ObjectiveCParser::TypeNameContext::blockType() {
  return getRuleContext<ObjectiveCParser::BlockTypeContext>(0);
}


size_t ObjectiveCParser::TypeNameContext::getRuleIndex() const {
  return ObjectiveCParser::RuleTypeName;
}

void ObjectiveCParser::TypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeName(this);
}

void ObjectiveCParser::TypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeName(this);
}


antlrcpp::Any ObjectiveCParser::TypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitTypeName(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::TypeNameContext* ObjectiveCParser::typeName() {
  TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, getState());
  enterRule(_localctx, 212, ObjectiveCParser::RuleTypeName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1253);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1248);
      specifierQualifierList();
      setState(1250);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 126) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 126)) & ((1ULL << (ObjectiveCParser::LP - 126))
        | (1ULL << (ObjectiveCParser::LBRACK - 126))
        | (1ULL << (ObjectiveCParser::MUL - 126)))) != 0)) {
        setState(1249);
        abstractDeclarator();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1252);
      blockType();
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

//----------------- AbstractDeclaratorContext ------------------------------------------------------------------

ObjectiveCParser::AbstractDeclaratorContext::AbstractDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::PointerContext* ObjectiveCParser::AbstractDeclaratorContext::pointer() {
  return getRuleContext<ObjectiveCParser::PointerContext>(0);
}

ObjectiveCParser::AbstractDeclaratorContext* ObjectiveCParser::AbstractDeclaratorContext::abstractDeclarator() {
  return getRuleContext<ObjectiveCParser::AbstractDeclaratorContext>(0);
}

tree::TerminalNode* ObjectiveCParser::AbstractDeclaratorContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

tree::TerminalNode* ObjectiveCParser::AbstractDeclaratorContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

std::vector<ObjectiveCParser::AbstractDeclaratorSuffixContext *> ObjectiveCParser::AbstractDeclaratorContext::abstractDeclaratorSuffix() {
  return getRuleContexts<ObjectiveCParser::AbstractDeclaratorSuffixContext>();
}

ObjectiveCParser::AbstractDeclaratorSuffixContext* ObjectiveCParser::AbstractDeclaratorContext::abstractDeclaratorSuffix(size_t i) {
  return getRuleContext<ObjectiveCParser::AbstractDeclaratorSuffixContext>(i);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::AbstractDeclaratorContext::LBRACK() {
  return getTokens(ObjectiveCParser::LBRACK);
}

tree::TerminalNode* ObjectiveCParser::AbstractDeclaratorContext::LBRACK(size_t i) {
  return getToken(ObjectiveCParser::LBRACK, i);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::AbstractDeclaratorContext::RBRACK() {
  return getTokens(ObjectiveCParser::RBRACK);
}

tree::TerminalNode* ObjectiveCParser::AbstractDeclaratorContext::RBRACK(size_t i) {
  return getToken(ObjectiveCParser::RBRACK, i);
}

std::vector<ObjectiveCParser::ConstantExpressionContext *> ObjectiveCParser::AbstractDeclaratorContext::constantExpression() {
  return getRuleContexts<ObjectiveCParser::ConstantExpressionContext>();
}

ObjectiveCParser::ConstantExpressionContext* ObjectiveCParser::AbstractDeclaratorContext::constantExpression(size_t i) {
  return getRuleContext<ObjectiveCParser::ConstantExpressionContext>(i);
}


size_t ObjectiveCParser::AbstractDeclaratorContext::getRuleIndex() const {
  return ObjectiveCParser::RuleAbstractDeclarator;
}

void ObjectiveCParser::AbstractDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbstractDeclarator(this);
}

void ObjectiveCParser::AbstractDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbstractDeclarator(this);
}


antlrcpp::Any ObjectiveCParser::AbstractDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitAbstractDeclarator(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::AbstractDeclaratorContext* ObjectiveCParser::abstractDeclarator() {
  AbstractDeclaratorContext *_localctx = _tracker.createInstance<AbstractDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 214, ObjectiveCParser::RuleAbstractDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1278);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ObjectiveCParser::MUL: {
        enterOuterAlt(_localctx, 1);
        setState(1255);
        pointer();
        setState(1257);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 126) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 126)) & ((1ULL << (ObjectiveCParser::LP - 126))
          | (1ULL << (ObjectiveCParser::LBRACK - 126))
          | (1ULL << (ObjectiveCParser::MUL - 126)))) != 0)) {
          setState(1256);
          abstractDeclarator();
        }
        break;
      }

      case ObjectiveCParser::LP: {
        enterOuterAlt(_localctx, 2);
        setState(1259);
        match(ObjectiveCParser::LP);
        setState(1261);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 126) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 126)) & ((1ULL << (ObjectiveCParser::LP - 126))
          | (1ULL << (ObjectiveCParser::LBRACK - 126))
          | (1ULL << (ObjectiveCParser::MUL - 126)))) != 0)) {
          setState(1260);
          abstractDeclarator();
        }
        setState(1263);
        match(ObjectiveCParser::RP);
        setState(1265); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(1264);
          abstractDeclaratorSuffix();
          setState(1267); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == ObjectiveCParser::LP

        || _la == ObjectiveCParser::LBRACK);
        break;
      }

      case ObjectiveCParser::LBRACK: {
        enterOuterAlt(_localctx, 3);
        setState(1274); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(1269);
          match(ObjectiveCParser::LBRACK);
          setState(1271);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << ObjectiveCParser::TRUE)
            | (1ULL << ObjectiveCParser::FALSE)
            | (1ULL << ObjectiveCParser::BOOL)
            | (1ULL << ObjectiveCParser::Class)
            | (1ULL << ObjectiveCParser::BYCOPY)
            | (1ULL << ObjectiveCParser::BYREF)
            | (1ULL << ObjectiveCParser::ID)
            | (1ULL << ObjectiveCParser::IMP)
            | (1ULL << ObjectiveCParser::IN)
            | (1ULL << ObjectiveCParser::INOUT)
            | (1ULL << ObjectiveCParser::NIL)
            | (1ULL << ObjectiveCParser::NO)
            | (1ULL << ObjectiveCParser::NULL_)
            | (1ULL << ObjectiveCParser::ONEWAY)
            | (1ULL << ObjectiveCParser::OUT)
            | (1ULL << ObjectiveCParser::PROTOCOL_)
            | (1ULL << ObjectiveCParser::SEL)
            | (1ULL << ObjectiveCParser::SELF)
            | (1ULL << ObjectiveCParser::SUPER)
            | (1ULL << ObjectiveCParser::YES))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 81)) & ((1ULL << (ObjectiveCParser::ATOMIC - 81))
            | (1ULL << (ObjectiveCParser::NONATOMIC - 81))
            | (1ULL << (ObjectiveCParser::RETAIN - 81))
            | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 81))
            | (1ULL << (ObjectiveCParser::BLOCK - 81))
            | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 81))
            | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 81))
            | (1ULL << (ObjectiveCParser::COVARIANT - 81))
            | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 81))
            | (1ULL << (ObjectiveCParser::DEPRECATED - 81))
            | (1ULL << (ObjectiveCParser::KINDOF - 81))
            | (1ULL << (ObjectiveCParser::UNUSED - 81))
            | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 81))
            | (1ULL << (ObjectiveCParser::NULLABLE - 81))
            | (1ULL << (ObjectiveCParser::NONNULL - 81))
            | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 81))
            | (1ULL << (ObjectiveCParser::NS_INLINE - 81))
            | (1ULL << (ObjectiveCParser::NS_ENUM - 81))
            | (1ULL << (ObjectiveCParser::NS_OPTIONS - 81))
            | (1ULL << (ObjectiveCParser::ASSIGN - 81))
            | (1ULL << (ObjectiveCParser::COPY - 81))
            | (1ULL << (ObjectiveCParser::GETTER - 81))
            | (1ULL << (ObjectiveCParser::SETTER - 81))
            | (1ULL << (ObjectiveCParser::STRONG - 81))
            | (1ULL << (ObjectiveCParser::READONLY - 81))
            | (1ULL << (ObjectiveCParser::READWRITE - 81))
            | (1ULL << (ObjectiveCParser::WEAK - 81))
            | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 81))
            | (1ULL << (ObjectiveCParser::IB_OUTLET - 81))
            | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 81))
            | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 81))
            | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 81))
            | (1ULL << (ObjectiveCParser::IDENTIFIER - 81)))) != 0) || ((((_la - 152) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 152)) & ((1ULL << (ObjectiveCParser::ADD - 152))
            | (1ULL << (ObjectiveCParser::SUB - 152))
            | (1ULL << (ObjectiveCParser::CHARACTER_LITERAL - 152))
            | (1ULL << (ObjectiveCParser::HEX_LITERAL - 152))
            | (1ULL << (ObjectiveCParser::OCTAL_LITERAL - 152))
            | (1ULL << (ObjectiveCParser::BINARY_LITERAL - 152))
            | (1ULL << (ObjectiveCParser::DECIMAL_LITERAL - 152))
            | (1ULL << (ObjectiveCParser::FLOATING_POINT_LITERAL - 152)))) != 0)) {
            setState(1270);
            constantExpression();
          }
          setState(1273);
          match(ObjectiveCParser::RBRACK);
          setState(1276); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == ObjectiveCParser::LBRACK);
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

//----------------- AbstractDeclaratorSuffixContext ------------------------------------------------------------------

ObjectiveCParser::AbstractDeclaratorSuffixContext::AbstractDeclaratorSuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::AbstractDeclaratorSuffixContext::LBRACK() {
  return getToken(ObjectiveCParser::LBRACK, 0);
}

tree::TerminalNode* ObjectiveCParser::AbstractDeclaratorSuffixContext::RBRACK() {
  return getToken(ObjectiveCParser::RBRACK, 0);
}

ObjectiveCParser::ConstantExpressionContext* ObjectiveCParser::AbstractDeclaratorSuffixContext::constantExpression() {
  return getRuleContext<ObjectiveCParser::ConstantExpressionContext>(0);
}

tree::TerminalNode* ObjectiveCParser::AbstractDeclaratorSuffixContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

tree::TerminalNode* ObjectiveCParser::AbstractDeclaratorSuffixContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

ObjectiveCParser::ParameterDeclarationListContext* ObjectiveCParser::AbstractDeclaratorSuffixContext::parameterDeclarationList() {
  return getRuleContext<ObjectiveCParser::ParameterDeclarationListContext>(0);
}


size_t ObjectiveCParser::AbstractDeclaratorSuffixContext::getRuleIndex() const {
  return ObjectiveCParser::RuleAbstractDeclaratorSuffix;
}

void ObjectiveCParser::AbstractDeclaratorSuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbstractDeclaratorSuffix(this);
}

void ObjectiveCParser::AbstractDeclaratorSuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbstractDeclaratorSuffix(this);
}


antlrcpp::Any ObjectiveCParser::AbstractDeclaratorSuffixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitAbstractDeclaratorSuffix(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::AbstractDeclaratorSuffixContext* ObjectiveCParser::abstractDeclaratorSuffix() {
  AbstractDeclaratorSuffixContext *_localctx = _tracker.createInstance<AbstractDeclaratorSuffixContext>(_ctx, getState());
  enterRule(_localctx, 216, ObjectiveCParser::RuleAbstractDeclaratorSuffix);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1290);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ObjectiveCParser::LBRACK: {
        enterOuterAlt(_localctx, 1);
        setState(1280);
        match(ObjectiveCParser::LBRACK);
        setState(1282);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << ObjectiveCParser::TRUE)
          | (1ULL << ObjectiveCParser::FALSE)
          | (1ULL << ObjectiveCParser::BOOL)
          | (1ULL << ObjectiveCParser::Class)
          | (1ULL << ObjectiveCParser::BYCOPY)
          | (1ULL << ObjectiveCParser::BYREF)
          | (1ULL << ObjectiveCParser::ID)
          | (1ULL << ObjectiveCParser::IMP)
          | (1ULL << ObjectiveCParser::IN)
          | (1ULL << ObjectiveCParser::INOUT)
          | (1ULL << ObjectiveCParser::NIL)
          | (1ULL << ObjectiveCParser::NO)
          | (1ULL << ObjectiveCParser::NULL_)
          | (1ULL << ObjectiveCParser::ONEWAY)
          | (1ULL << ObjectiveCParser::OUT)
          | (1ULL << ObjectiveCParser::PROTOCOL_)
          | (1ULL << ObjectiveCParser::SEL)
          | (1ULL << ObjectiveCParser::SELF)
          | (1ULL << ObjectiveCParser::SUPER)
          | (1ULL << ObjectiveCParser::YES))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 81)) & ((1ULL << (ObjectiveCParser::ATOMIC - 81))
          | (1ULL << (ObjectiveCParser::NONATOMIC - 81))
          | (1ULL << (ObjectiveCParser::RETAIN - 81))
          | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 81))
          | (1ULL << (ObjectiveCParser::BLOCK - 81))
          | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 81))
          | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 81))
          | (1ULL << (ObjectiveCParser::COVARIANT - 81))
          | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 81))
          | (1ULL << (ObjectiveCParser::DEPRECATED - 81))
          | (1ULL << (ObjectiveCParser::KINDOF - 81))
          | (1ULL << (ObjectiveCParser::UNUSED - 81))
          | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 81))
          | (1ULL << (ObjectiveCParser::NULLABLE - 81))
          | (1ULL << (ObjectiveCParser::NONNULL - 81))
          | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 81))
          | (1ULL << (ObjectiveCParser::NS_INLINE - 81))
          | (1ULL << (ObjectiveCParser::NS_ENUM - 81))
          | (1ULL << (ObjectiveCParser::NS_OPTIONS - 81))
          | (1ULL << (ObjectiveCParser::ASSIGN - 81))
          | (1ULL << (ObjectiveCParser::COPY - 81))
          | (1ULL << (ObjectiveCParser::GETTER - 81))
          | (1ULL << (ObjectiveCParser::SETTER - 81))
          | (1ULL << (ObjectiveCParser::STRONG - 81))
          | (1ULL << (ObjectiveCParser::READONLY - 81))
          | (1ULL << (ObjectiveCParser::READWRITE - 81))
          | (1ULL << (ObjectiveCParser::WEAK - 81))
          | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 81))
          | (1ULL << (ObjectiveCParser::IB_OUTLET - 81))
          | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 81))
          | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 81))
          | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 81))
          | (1ULL << (ObjectiveCParser::IDENTIFIER - 81)))) != 0) || ((((_la - 152) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 152)) & ((1ULL << (ObjectiveCParser::ADD - 152))
          | (1ULL << (ObjectiveCParser::SUB - 152))
          | (1ULL << (ObjectiveCParser::CHARACTER_LITERAL - 152))
          | (1ULL << (ObjectiveCParser::HEX_LITERAL - 152))
          | (1ULL << (ObjectiveCParser::OCTAL_LITERAL - 152))
          | (1ULL << (ObjectiveCParser::BINARY_LITERAL - 152))
          | (1ULL << (ObjectiveCParser::DECIMAL_LITERAL - 152))
          | (1ULL << (ObjectiveCParser::FLOATING_POINT_LITERAL - 152)))) != 0)) {
          setState(1281);
          constantExpression();
        }
        setState(1284);
        match(ObjectiveCParser::RBRACK);
        break;
      }

      case ObjectiveCParser::LP: {
        enterOuterAlt(_localctx, 2);
        setState(1285);
        match(ObjectiveCParser::LP);
        setState(1287);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << ObjectiveCParser::AUTO)
          | (1ULL << ObjectiveCParser::CHAR)
          | (1ULL << ObjectiveCParser::CONST)
          | (1ULL << ObjectiveCParser::DOUBLE)
          | (1ULL << ObjectiveCParser::ENUM)
          | (1ULL << ObjectiveCParser::EXTERN)
          | (1ULL << ObjectiveCParser::FLOAT)
          | (1ULL << ObjectiveCParser::INLINE)
          | (1ULL << ObjectiveCParser::INT)
          | (1ULL << ObjectiveCParser::LONG)
          | (1ULL << ObjectiveCParser::REGISTER)
          | (1ULL << ObjectiveCParser::RESTRICT)
          | (1ULL << ObjectiveCParser::SHORT)
          | (1ULL << ObjectiveCParser::SIGNED)
          | (1ULL << ObjectiveCParser::STATIC)
          | (1ULL << ObjectiveCParser::STRUCT)
          | (1ULL << ObjectiveCParser::UNION)
          | (1ULL << ObjectiveCParser::UNSIGNED)
          | (1ULL << ObjectiveCParser::VOID)
          | (1ULL << ObjectiveCParser::VOLATILE)
          | (1ULL << ObjectiveCParser::BOOL)
          | (1ULL << ObjectiveCParser::Class)
          | (1ULL << ObjectiveCParser::BYCOPY)
          | (1ULL << ObjectiveCParser::BYREF)
          | (1ULL << ObjectiveCParser::ID)
          | (1ULL << ObjectiveCParser::IMP)
          | (1ULL << ObjectiveCParser::IN)
          | (1ULL << ObjectiveCParser::INOUT)
          | (1ULL << ObjectiveCParser::ONEWAY)
          | (1ULL << ObjectiveCParser::OUT)
          | (1ULL << ObjectiveCParser::PROTOCOL_)
          | (1ULL << ObjectiveCParser::SEL)
          | (1ULL << ObjectiveCParser::SELF)
          | (1ULL << ObjectiveCParser::SUPER))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 81)) & ((1ULL << (ObjectiveCParser::ATOMIC - 81))
          | (1ULL << (ObjectiveCParser::NONATOMIC - 81))
          | (1ULL << (ObjectiveCParser::RETAIN - 81))
          | (1ULL << (ObjectiveCParser::ATTRIBUTE - 81))
          | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 81))
          | (1ULL << (ObjectiveCParser::BLOCK - 81))
          | (1ULL << (ObjectiveCParser::BRIDGE - 81))
          | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 81))
          | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 81))
          | (1ULL << (ObjectiveCParser::COVARIANT - 81))
          | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 81))
          | (1ULL << (ObjectiveCParser::DEPRECATED - 81))
          | (1ULL << (ObjectiveCParser::KINDOF - 81))
          | (1ULL << (ObjectiveCParser::STRONG_QUALIFIER - 81))
          | (1ULL << (ObjectiveCParser::TYPEOF - 81))
          | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED_QUALIFIER - 81))
          | (1ULL << (ObjectiveCParser::UNUSED - 81))
          | (1ULL << (ObjectiveCParser::WEAK_QUALIFIER - 81))
          | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 81))
          | (1ULL << (ObjectiveCParser::NULLABLE - 81))
          | (1ULL << (ObjectiveCParser::NONNULL - 81))
          | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 81))
          | (1ULL << (ObjectiveCParser::NS_INLINE - 81))
          | (1ULL << (ObjectiveCParser::NS_ENUM - 81))
          | (1ULL << (ObjectiveCParser::NS_OPTIONS - 81))
          | (1ULL << (ObjectiveCParser::ASSIGN - 81))
          | (1ULL << (ObjectiveCParser::COPY - 81))
          | (1ULL << (ObjectiveCParser::GETTER - 81))
          | (1ULL << (ObjectiveCParser::SETTER - 81))
          | (1ULL << (ObjectiveCParser::STRONG - 81))
          | (1ULL << (ObjectiveCParser::READONLY - 81))
          | (1ULL << (ObjectiveCParser::READWRITE - 81))
          | (1ULL << (ObjectiveCParser::WEAK - 81))
          | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 81))
          | (1ULL << (ObjectiveCParser::IB_OUTLET - 81))
          | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 81))
          | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 81))
          | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 81))
          | (1ULL << (ObjectiveCParser::IDENTIFIER - 81)))) != 0)) {
          setState(1286);
          parameterDeclarationList();
        }
        setState(1289);
        match(ObjectiveCParser::RP);
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

//----------------- ParameterDeclarationListContext ------------------------------------------------------------------

ObjectiveCParser::ParameterDeclarationListContext::ParameterDeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ObjectiveCParser::ParameterDeclarationContext *> ObjectiveCParser::ParameterDeclarationListContext::parameterDeclaration() {
  return getRuleContexts<ObjectiveCParser::ParameterDeclarationContext>();
}

ObjectiveCParser::ParameterDeclarationContext* ObjectiveCParser::ParameterDeclarationListContext::parameterDeclaration(size_t i) {
  return getRuleContext<ObjectiveCParser::ParameterDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::ParameterDeclarationListContext::COMMA() {
  return getTokens(ObjectiveCParser::COMMA);
}

tree::TerminalNode* ObjectiveCParser::ParameterDeclarationListContext::COMMA(size_t i) {
  return getToken(ObjectiveCParser::COMMA, i);
}


size_t ObjectiveCParser::ParameterDeclarationListContext::getRuleIndex() const {
  return ObjectiveCParser::RuleParameterDeclarationList;
}

void ObjectiveCParser::ParameterDeclarationListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterDeclarationList(this);
}

void ObjectiveCParser::ParameterDeclarationListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterDeclarationList(this);
}


antlrcpp::Any ObjectiveCParser::ParameterDeclarationListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitParameterDeclarationList(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ParameterDeclarationListContext* ObjectiveCParser::parameterDeclarationList() {
  ParameterDeclarationListContext *_localctx = _tracker.createInstance<ParameterDeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 218, ObjectiveCParser::RuleParameterDeclarationList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1292);
    parameterDeclaration();
    setState(1297);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 163, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1293);
        match(ObjectiveCParser::COMMA);
        setState(1294);
        parameterDeclaration(); 
      }
      setState(1299);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 163, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterDeclarationContext ------------------------------------------------------------------

ObjectiveCParser::ParameterDeclarationContext::ParameterDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::DeclarationSpecifiersContext* ObjectiveCParser::ParameterDeclarationContext::declarationSpecifiers() {
  return getRuleContext<ObjectiveCParser::DeclarationSpecifiersContext>(0);
}

ObjectiveCParser::DeclaratorContext* ObjectiveCParser::ParameterDeclarationContext::declarator() {
  return getRuleContext<ObjectiveCParser::DeclaratorContext>(0);
}

tree::TerminalNode* ObjectiveCParser::ParameterDeclarationContext::VOID() {
  return getToken(ObjectiveCParser::VOID, 0);
}


size_t ObjectiveCParser::ParameterDeclarationContext::getRuleIndex() const {
  return ObjectiveCParser::RuleParameterDeclaration;
}

void ObjectiveCParser::ParameterDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterDeclaration(this);
}

void ObjectiveCParser::ParameterDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterDeclaration(this);
}


antlrcpp::Any ObjectiveCParser::ParameterDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitParameterDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ParameterDeclarationContext* ObjectiveCParser::parameterDeclaration() {
  ParameterDeclarationContext *_localctx = _tracker.createInstance<ParameterDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 220, ObjectiveCParser::RuleParameterDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1304);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 164, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1300);
      declarationSpecifiers();
      setState(1301);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1303);
      match(ObjectiveCParser::VOID);
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

//----------------- DeclaratorContext ------------------------------------------------------------------

ObjectiveCParser::DeclaratorContext::DeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::DirectDeclaratorContext* ObjectiveCParser::DeclaratorContext::directDeclarator() {
  return getRuleContext<ObjectiveCParser::DirectDeclaratorContext>(0);
}

ObjectiveCParser::PointerContext* ObjectiveCParser::DeclaratorContext::pointer() {
  return getRuleContext<ObjectiveCParser::PointerContext>(0);
}


size_t ObjectiveCParser::DeclaratorContext::getRuleIndex() const {
  return ObjectiveCParser::RuleDeclarator;
}

void ObjectiveCParser::DeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarator(this);
}

void ObjectiveCParser::DeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarator(this);
}


antlrcpp::Any ObjectiveCParser::DeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitDeclarator(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::DeclaratorContext* ObjectiveCParser::declarator() {
  DeclaratorContext *_localctx = _tracker.createInstance<DeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 222, ObjectiveCParser::RuleDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1307);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::MUL) {
      setState(1306);
      pointer();
    }
    setState(1309);
    directDeclarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

ObjectiveCParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::LabeledStatementContext* ObjectiveCParser::StatementContext::labeledStatement() {
  return getRuleContext<ObjectiveCParser::LabeledStatementContext>(0);
}

tree::TerminalNode* ObjectiveCParser::StatementContext::SEMI() {
  return getToken(ObjectiveCParser::SEMI, 0);
}

ObjectiveCParser::CompoundStatementContext* ObjectiveCParser::StatementContext::compoundStatement() {
  return getRuleContext<ObjectiveCParser::CompoundStatementContext>(0);
}

ObjectiveCParser::SelectionStatementContext* ObjectiveCParser::StatementContext::selectionStatement() {
  return getRuleContext<ObjectiveCParser::SelectionStatementContext>(0);
}

ObjectiveCParser::IterationStatementContext* ObjectiveCParser::StatementContext::iterationStatement() {
  return getRuleContext<ObjectiveCParser::IterationStatementContext>(0);
}

ObjectiveCParser::JumpStatementContext* ObjectiveCParser::StatementContext::jumpStatement() {
  return getRuleContext<ObjectiveCParser::JumpStatementContext>(0);
}

ObjectiveCParser::SynchronizedStatementContext* ObjectiveCParser::StatementContext::synchronizedStatement() {
  return getRuleContext<ObjectiveCParser::SynchronizedStatementContext>(0);
}

ObjectiveCParser::AutoreleaseStatementContext* ObjectiveCParser::StatementContext::autoreleaseStatement() {
  return getRuleContext<ObjectiveCParser::AutoreleaseStatementContext>(0);
}

ObjectiveCParser::ThrowStatementContext* ObjectiveCParser::StatementContext::throwStatement() {
  return getRuleContext<ObjectiveCParser::ThrowStatementContext>(0);
}

ObjectiveCParser::TryBlockContext* ObjectiveCParser::StatementContext::tryBlock() {
  return getRuleContext<ObjectiveCParser::TryBlockContext>(0);
}

ObjectiveCParser::ExpressionsContext* ObjectiveCParser::StatementContext::expressions() {
  return getRuleContext<ObjectiveCParser::ExpressionsContext>(0);
}


size_t ObjectiveCParser::StatementContext::getRuleIndex() const {
  return ObjectiveCParser::RuleStatement;
}

void ObjectiveCParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void ObjectiveCParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any ObjectiveCParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::StatementContext* ObjectiveCParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 224, ObjectiveCParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1352);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 176, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1311);
      labeledStatement();
      setState(1313);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 166, _ctx)) {
      case 1: {
        setState(1312);
        match(ObjectiveCParser::SEMI);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1315);
      compoundStatement();
      setState(1317);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 167, _ctx)) {
      case 1: {
        setState(1316);
        match(ObjectiveCParser::SEMI);
        break;
      }

      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1319);
      selectionStatement();
      setState(1321);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 168, _ctx)) {
      case 1: {
        setState(1320);
        match(ObjectiveCParser::SEMI);
        break;
      }

      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1323);
      iterationStatement();
      setState(1325);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 169, _ctx)) {
      case 1: {
        setState(1324);
        match(ObjectiveCParser::SEMI);
        break;
      }

      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1327);
      jumpStatement();
      setState(1329);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 170, _ctx)) {
      case 1: {
        setState(1328);
        match(ObjectiveCParser::SEMI);
        break;
      }

      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1331);
      synchronizedStatement();
      setState(1333);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 171, _ctx)) {
      case 1: {
        setState(1332);
        match(ObjectiveCParser::SEMI);
        break;
      }

      }
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1335);
      autoreleaseStatement();
      setState(1337);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 172, _ctx)) {
      case 1: {
        setState(1336);
        match(ObjectiveCParser::SEMI);
        break;
      }

      }
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1339);
      throwStatement();
      setState(1341);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 173, _ctx)) {
      case 1: {
        setState(1340);
        match(ObjectiveCParser::SEMI);
        break;
      }

      }
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1343);
      tryBlock();
      setState(1345);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 174, _ctx)) {
      case 1: {
        setState(1344);
        match(ObjectiveCParser::SEMI);
        break;
      }

      }
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1347);
      expressions();
      setState(1349);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 175, _ctx)) {
      case 1: {
        setState(1348);
        match(ObjectiveCParser::SEMI);
        break;
      }

      }
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1351);
      match(ObjectiveCParser::SEMI);
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

//----------------- LabeledStatementContext ------------------------------------------------------------------

ObjectiveCParser::LabeledStatementContext::LabeledStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::LabeledStatementContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::LabeledStatementContext::COLON() {
  return getToken(ObjectiveCParser::COLON, 0);
}

ObjectiveCParser::StatementContext* ObjectiveCParser::LabeledStatementContext::statement() {
  return getRuleContext<ObjectiveCParser::StatementContext>(0);
}


size_t ObjectiveCParser::LabeledStatementContext::getRuleIndex() const {
  return ObjectiveCParser::RuleLabeledStatement;
}

void ObjectiveCParser::LabeledStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabeledStatement(this);
}

void ObjectiveCParser::LabeledStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabeledStatement(this);
}


antlrcpp::Any ObjectiveCParser::LabeledStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitLabeledStatement(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::LabeledStatementContext* ObjectiveCParser::labeledStatement() {
  LabeledStatementContext *_localctx = _tracker.createInstance<LabeledStatementContext>(_ctx, getState());
  enterRule(_localctx, 226, ObjectiveCParser::RuleLabeledStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1354);
    identifier();
    setState(1355);
    match(ObjectiveCParser::COLON);
    setState(1356);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RangeExpressionContext ------------------------------------------------------------------

ObjectiveCParser::RangeExpressionContext::RangeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ObjectiveCParser::ConstantExpressionContext *> ObjectiveCParser::RangeExpressionContext::constantExpression() {
  return getRuleContexts<ObjectiveCParser::ConstantExpressionContext>();
}

ObjectiveCParser::ConstantExpressionContext* ObjectiveCParser::RangeExpressionContext::constantExpression(size_t i) {
  return getRuleContext<ObjectiveCParser::ConstantExpressionContext>(i);
}

tree::TerminalNode* ObjectiveCParser::RangeExpressionContext::ELIPSIS() {
  return getToken(ObjectiveCParser::ELIPSIS, 0);
}


size_t ObjectiveCParser::RangeExpressionContext::getRuleIndex() const {
  return ObjectiveCParser::RuleRangeExpression;
}

void ObjectiveCParser::RangeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRangeExpression(this);
}

void ObjectiveCParser::RangeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRangeExpression(this);
}


antlrcpp::Any ObjectiveCParser::RangeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitRangeExpression(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::RangeExpressionContext* ObjectiveCParser::rangeExpression() {
  RangeExpressionContext *_localctx = _tracker.createInstance<RangeExpressionContext>(_ctx, getState());
  enterRule(_localctx, 228, ObjectiveCParser::RuleRangeExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1358);
    constantExpression();
    setState(1361);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ObjectiveCParser::ELIPSIS) {
      setState(1359);
      match(ObjectiveCParser::ELIPSIS);
      setState(1360);
      constantExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStatementContext ------------------------------------------------------------------

ObjectiveCParser::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::CompoundStatementContext::LBRACE() {
  return getToken(ObjectiveCParser::LBRACE, 0);
}

tree::TerminalNode* ObjectiveCParser::CompoundStatementContext::RBRACE() {
  return getToken(ObjectiveCParser::RBRACE, 0);
}

std::vector<ObjectiveCParser::DeclarationContext *> ObjectiveCParser::CompoundStatementContext::declaration() {
  return getRuleContexts<ObjectiveCParser::DeclarationContext>();
}

ObjectiveCParser::DeclarationContext* ObjectiveCParser::CompoundStatementContext::declaration(size_t i) {
  return getRuleContext<ObjectiveCParser::DeclarationContext>(i);
}

std::vector<ObjectiveCParser::StatementContext *> ObjectiveCParser::CompoundStatementContext::statement() {
  return getRuleContexts<ObjectiveCParser::StatementContext>();
}

ObjectiveCParser::StatementContext* ObjectiveCParser::CompoundStatementContext::statement(size_t i) {
  return getRuleContext<ObjectiveCParser::StatementContext>(i);
}


size_t ObjectiveCParser::CompoundStatementContext::getRuleIndex() const {
  return ObjectiveCParser::RuleCompoundStatement;
}

void ObjectiveCParser::CompoundStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundStatement(this);
}

void ObjectiveCParser::CompoundStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundStatement(this);
}


antlrcpp::Any ObjectiveCParser::CompoundStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitCompoundStatement(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::CompoundStatementContext* ObjectiveCParser::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 230, ObjectiveCParser::RuleCompoundStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1363);
    match(ObjectiveCParser::LBRACE);
    setState(1368);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::AUTO)
      | (1ULL << ObjectiveCParser::BREAK)
      | (1ULL << ObjectiveCParser::CHAR)
      | (1ULL << ObjectiveCParser::CONST)
      | (1ULL << ObjectiveCParser::CONTINUE)
      | (1ULL << ObjectiveCParser::DO)
      | (1ULL << ObjectiveCParser::DOUBLE)
      | (1ULL << ObjectiveCParser::ENUM)
      | (1ULL << ObjectiveCParser::EXTERN)
      | (1ULL << ObjectiveCParser::FLOAT)
      | (1ULL << ObjectiveCParser::FOR)
      | (1ULL << ObjectiveCParser::GOTO)
      | (1ULL << ObjectiveCParser::IF)
      | (1ULL << ObjectiveCParser::INLINE)
      | (1ULL << ObjectiveCParser::INT)
      | (1ULL << ObjectiveCParser::LONG)
      | (1ULL << ObjectiveCParser::REGISTER)
      | (1ULL << ObjectiveCParser::RESTRICT)
      | (1ULL << ObjectiveCParser::RETURN)
      | (1ULL << ObjectiveCParser::SHORT)
      | (1ULL << ObjectiveCParser::SIGNED)
      | (1ULL << ObjectiveCParser::SIZEOF)
      | (1ULL << ObjectiveCParser::STATIC)
      | (1ULL << ObjectiveCParser::STRUCT)
      | (1ULL << ObjectiveCParser::SWITCH)
      | (1ULL << ObjectiveCParser::TYPEDEF)
      | (1ULL << ObjectiveCParser::UNION)
      | (1ULL << ObjectiveCParser::UNSIGNED)
      | (1ULL << ObjectiveCParser::VOID)
      | (1ULL << ObjectiveCParser::VOLATILE)
      | (1ULL << ObjectiveCParser::WHILE)
      | (1ULL << ObjectiveCParser::TRUE)
      | (1ULL << ObjectiveCParser::FALSE)
      | (1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::NIL)
      | (1ULL << ObjectiveCParser::NO)
      | (1ULL << ObjectiveCParser::NULL_)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER)
      | (1ULL << ObjectiveCParser::YES)
      | (1ULL << ObjectiveCParser::AUTORELEASEPOOL)
      | (1ULL << ObjectiveCParser::ENCODE))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (ObjectiveCParser::PROTOCOL - 69))
      | (1ULL << (ObjectiveCParser::SELECTOR - 69))
      | (1ULL << (ObjectiveCParser::SYNCHRONIZED - 69))
      | (1ULL << (ObjectiveCParser::THROW - 69))
      | (1ULL << (ObjectiveCParser::TRY - 69))
      | (1ULL << (ObjectiveCParser::ATOMIC - 69))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 69))
      | (1ULL << (ObjectiveCParser::RETAIN - 69))
      | (1ULL << (ObjectiveCParser::ATTRIBUTE - 69))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 69))
      | (1ULL << (ObjectiveCParser::BLOCK - 69))
      | (1ULL << (ObjectiveCParser::BRIDGE - 69))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 69))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 69))
      | (1ULL << (ObjectiveCParser::COVARIANT - 69))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 69))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 69))
      | (1ULL << (ObjectiveCParser::KINDOF - 69))
      | (1ULL << (ObjectiveCParser::STRONG_QUALIFIER - 69))
      | (1ULL << (ObjectiveCParser::TYPEOF - 69))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED_QUALIFIER - 69))
      | (1ULL << (ObjectiveCParser::UNUSED - 69))
      | (1ULL << (ObjectiveCParser::WEAK_QUALIFIER - 69))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 69))
      | (1ULL << (ObjectiveCParser::NULLABLE - 69))
      | (1ULL << (ObjectiveCParser::NONNULL - 69))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 69))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 69))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 69))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 69))
      | (1ULL << (ObjectiveCParser::ASSIGN - 69))
      | (1ULL << (ObjectiveCParser::COPY - 69))
      | (1ULL << (ObjectiveCParser::GETTER - 69))
      | (1ULL << (ObjectiveCParser::SETTER - 69))
      | (1ULL << (ObjectiveCParser::STRONG - 69))
      | (1ULL << (ObjectiveCParser::READONLY - 69))
      | (1ULL << (ObjectiveCParser::READWRITE - 69))
      | (1ULL << (ObjectiveCParser::WEAK - 69))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 69))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 69))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 69))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 69))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 69))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 69))
      | (1ULL << (ObjectiveCParser::LP - 69))
      | (1ULL << (ObjectiveCParser::LBRACE - 69))
      | (1ULL << (ObjectiveCParser::LBRACK - 69))
      | (1ULL << (ObjectiveCParser::SEMI - 69)))) != 0) || ((((_la - 136) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 136)) & ((1ULL << (ObjectiveCParser::AT - 136))
      | (1ULL << (ObjectiveCParser::BANG - 136))
      | (1ULL << (ObjectiveCParser::TILDE - 136))
      | (1ULL << (ObjectiveCParser::INC - 136))
      | (1ULL << (ObjectiveCParser::DEC - 136))
      | (1ULL << (ObjectiveCParser::ADD - 136))
      | (1ULL << (ObjectiveCParser::SUB - 136))
      | (1ULL << (ObjectiveCParser::MUL - 136))
      | (1ULL << (ObjectiveCParser::BITAND - 136))
      | (1ULL << (ObjectiveCParser::BITXOR - 136))
      | (1ULL << (ObjectiveCParser::CHARACTER_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::STRING_START - 136))
      | (1ULL << (ObjectiveCParser::HEX_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::OCTAL_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::BINARY_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::DECIMAL_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::FLOATING_POINT_LITERAL - 136)))) != 0)) {
      setState(1366);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 178, _ctx)) {
      case 1: {
        setState(1364);
        declaration();
        break;
      }

      case 2: {
        setState(1365);
        statement();
        break;
      }

      }
      setState(1370);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1371);
    match(ObjectiveCParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectionStatementContext ------------------------------------------------------------------

ObjectiveCParser::SelectionStatementContext::SelectionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::SelectionStatementContext::IF() {
  return getToken(ObjectiveCParser::IF, 0);
}

tree::TerminalNode* ObjectiveCParser::SelectionStatementContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

ObjectiveCParser::ExpressionContext* ObjectiveCParser::SelectionStatementContext::expression() {
  return getRuleContext<ObjectiveCParser::ExpressionContext>(0);
}

tree::TerminalNode* ObjectiveCParser::SelectionStatementContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

std::vector<ObjectiveCParser::StatementContext *> ObjectiveCParser::SelectionStatementContext::statement() {
  return getRuleContexts<ObjectiveCParser::StatementContext>();
}

ObjectiveCParser::StatementContext* ObjectiveCParser::SelectionStatementContext::statement(size_t i) {
  return getRuleContext<ObjectiveCParser::StatementContext>(i);
}

tree::TerminalNode* ObjectiveCParser::SelectionStatementContext::ELSE() {
  return getToken(ObjectiveCParser::ELSE, 0);
}

ObjectiveCParser::SwitchStatementContext* ObjectiveCParser::SelectionStatementContext::switchStatement() {
  return getRuleContext<ObjectiveCParser::SwitchStatementContext>(0);
}


size_t ObjectiveCParser::SelectionStatementContext::getRuleIndex() const {
  return ObjectiveCParser::RuleSelectionStatement;
}

void ObjectiveCParser::SelectionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectionStatement(this);
}

void ObjectiveCParser::SelectionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectionStatement(this);
}


antlrcpp::Any ObjectiveCParser::SelectionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitSelectionStatement(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::SelectionStatementContext* ObjectiveCParser::selectionStatement() {
  SelectionStatementContext *_localctx = _tracker.createInstance<SelectionStatementContext>(_ctx, getState());
  enterRule(_localctx, 232, ObjectiveCParser::RuleSelectionStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1383);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ObjectiveCParser::IF: {
        enterOuterAlt(_localctx, 1);
        setState(1373);
        match(ObjectiveCParser::IF);
        setState(1374);
        match(ObjectiveCParser::LP);
        setState(1375);
        expression(0);
        setState(1376);
        match(ObjectiveCParser::RP);
        setState(1377);
        dynamic_cast<SelectionStatementContext *>(_localctx)->ifBody = statement();
        setState(1380);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 180, _ctx)) {
        case 1: {
          setState(1378);
          match(ObjectiveCParser::ELSE);
          setState(1379);
          dynamic_cast<SelectionStatementContext *>(_localctx)->elseBody = statement();
          break;
        }

        }
        break;
      }

      case ObjectiveCParser::SWITCH: {
        enterOuterAlt(_localctx, 2);
        setState(1382);
        switchStatement();
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

//----------------- SwitchStatementContext ------------------------------------------------------------------

ObjectiveCParser::SwitchStatementContext::SwitchStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::SwitchStatementContext::SWITCH() {
  return getToken(ObjectiveCParser::SWITCH, 0);
}

tree::TerminalNode* ObjectiveCParser::SwitchStatementContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

ObjectiveCParser::ExpressionContext* ObjectiveCParser::SwitchStatementContext::expression() {
  return getRuleContext<ObjectiveCParser::ExpressionContext>(0);
}

tree::TerminalNode* ObjectiveCParser::SwitchStatementContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

ObjectiveCParser::SwitchBlockContext* ObjectiveCParser::SwitchStatementContext::switchBlock() {
  return getRuleContext<ObjectiveCParser::SwitchBlockContext>(0);
}


size_t ObjectiveCParser::SwitchStatementContext::getRuleIndex() const {
  return ObjectiveCParser::RuleSwitchStatement;
}

void ObjectiveCParser::SwitchStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchStatement(this);
}

void ObjectiveCParser::SwitchStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchStatement(this);
}


antlrcpp::Any ObjectiveCParser::SwitchStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitSwitchStatement(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::SwitchStatementContext* ObjectiveCParser::switchStatement() {
  SwitchStatementContext *_localctx = _tracker.createInstance<SwitchStatementContext>(_ctx, getState());
  enterRule(_localctx, 234, ObjectiveCParser::RuleSwitchStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1385);
    match(ObjectiveCParser::SWITCH);
    setState(1386);
    match(ObjectiveCParser::LP);
    setState(1387);
    expression(0);
    setState(1388);
    match(ObjectiveCParser::RP);
    setState(1389);
    switchBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchBlockContext ------------------------------------------------------------------

ObjectiveCParser::SwitchBlockContext::SwitchBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::SwitchBlockContext::LBRACE() {
  return getToken(ObjectiveCParser::LBRACE, 0);
}

tree::TerminalNode* ObjectiveCParser::SwitchBlockContext::RBRACE() {
  return getToken(ObjectiveCParser::RBRACE, 0);
}

std::vector<ObjectiveCParser::SwitchSectionContext *> ObjectiveCParser::SwitchBlockContext::switchSection() {
  return getRuleContexts<ObjectiveCParser::SwitchSectionContext>();
}

ObjectiveCParser::SwitchSectionContext* ObjectiveCParser::SwitchBlockContext::switchSection(size_t i) {
  return getRuleContext<ObjectiveCParser::SwitchSectionContext>(i);
}


size_t ObjectiveCParser::SwitchBlockContext::getRuleIndex() const {
  return ObjectiveCParser::RuleSwitchBlock;
}

void ObjectiveCParser::SwitchBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchBlock(this);
}

void ObjectiveCParser::SwitchBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchBlock(this);
}


antlrcpp::Any ObjectiveCParser::SwitchBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitSwitchBlock(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::SwitchBlockContext* ObjectiveCParser::switchBlock() {
  SwitchBlockContext *_localctx = _tracker.createInstance<SwitchBlockContext>(_ctx, getState());
  enterRule(_localctx, 236, ObjectiveCParser::RuleSwitchBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1391);
    match(ObjectiveCParser::LBRACE);
    setState(1395);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ObjectiveCParser::CASE

    || _la == ObjectiveCParser::DEFAULT) {
      setState(1392);
      switchSection();
      setState(1397);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1398);
    match(ObjectiveCParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchSectionContext ------------------------------------------------------------------

ObjectiveCParser::SwitchSectionContext::SwitchSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ObjectiveCParser::SwitchLabelContext *> ObjectiveCParser::SwitchSectionContext::switchLabel() {
  return getRuleContexts<ObjectiveCParser::SwitchLabelContext>();
}

ObjectiveCParser::SwitchLabelContext* ObjectiveCParser::SwitchSectionContext::switchLabel(size_t i) {
  return getRuleContext<ObjectiveCParser::SwitchLabelContext>(i);
}

std::vector<ObjectiveCParser::StatementContext *> ObjectiveCParser::SwitchSectionContext::statement() {
  return getRuleContexts<ObjectiveCParser::StatementContext>();
}

ObjectiveCParser::StatementContext* ObjectiveCParser::SwitchSectionContext::statement(size_t i) {
  return getRuleContext<ObjectiveCParser::StatementContext>(i);
}


size_t ObjectiveCParser::SwitchSectionContext::getRuleIndex() const {
  return ObjectiveCParser::RuleSwitchSection;
}

void ObjectiveCParser::SwitchSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchSection(this);
}

void ObjectiveCParser::SwitchSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchSection(this);
}


antlrcpp::Any ObjectiveCParser::SwitchSectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitSwitchSection(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::SwitchSectionContext* ObjectiveCParser::switchSection() {
  SwitchSectionContext *_localctx = _tracker.createInstance<SwitchSectionContext>(_ctx, getState());
  enterRule(_localctx, 238, ObjectiveCParser::RuleSwitchSection);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1401); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1400);
      switchLabel();
      setState(1403); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ObjectiveCParser::CASE

    || _la == ObjectiveCParser::DEFAULT);
    setState(1406); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1405);
      statement();
      setState(1408); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::BREAK)
      | (1ULL << ObjectiveCParser::CONTINUE)
      | (1ULL << ObjectiveCParser::DO)
      | (1ULL << ObjectiveCParser::FOR)
      | (1ULL << ObjectiveCParser::GOTO)
      | (1ULL << ObjectiveCParser::IF)
      | (1ULL << ObjectiveCParser::RETURN)
      | (1ULL << ObjectiveCParser::SIZEOF)
      | (1ULL << ObjectiveCParser::SWITCH)
      | (1ULL << ObjectiveCParser::WHILE)
      | (1ULL << ObjectiveCParser::TRUE)
      | (1ULL << ObjectiveCParser::FALSE)
      | (1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::NIL)
      | (1ULL << ObjectiveCParser::NO)
      | (1ULL << ObjectiveCParser::NULL_)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER)
      | (1ULL << ObjectiveCParser::YES)
      | (1ULL << ObjectiveCParser::AUTORELEASEPOOL)
      | (1ULL << ObjectiveCParser::ENCODE))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (ObjectiveCParser::PROTOCOL - 69))
      | (1ULL << (ObjectiveCParser::SELECTOR - 69))
      | (1ULL << (ObjectiveCParser::SYNCHRONIZED - 69))
      | (1ULL << (ObjectiveCParser::THROW - 69))
      | (1ULL << (ObjectiveCParser::TRY - 69))
      | (1ULL << (ObjectiveCParser::ATOMIC - 69))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 69))
      | (1ULL << (ObjectiveCParser::RETAIN - 69))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 69))
      | (1ULL << (ObjectiveCParser::BLOCK - 69))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 69))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 69))
      | (1ULL << (ObjectiveCParser::COVARIANT - 69))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 69))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 69))
      | (1ULL << (ObjectiveCParser::KINDOF - 69))
      | (1ULL << (ObjectiveCParser::UNUSED - 69))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 69))
      | (1ULL << (ObjectiveCParser::NULLABLE - 69))
      | (1ULL << (ObjectiveCParser::NONNULL - 69))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 69))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 69))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 69))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 69))
      | (1ULL << (ObjectiveCParser::ASSIGN - 69))
      | (1ULL << (ObjectiveCParser::COPY - 69))
      | (1ULL << (ObjectiveCParser::GETTER - 69))
      | (1ULL << (ObjectiveCParser::SETTER - 69))
      | (1ULL << (ObjectiveCParser::STRONG - 69))
      | (1ULL << (ObjectiveCParser::READONLY - 69))
      | (1ULL << (ObjectiveCParser::READWRITE - 69))
      | (1ULL << (ObjectiveCParser::WEAK - 69))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 69))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 69))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 69))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 69))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 69))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 69))
      | (1ULL << (ObjectiveCParser::LP - 69))
      | (1ULL << (ObjectiveCParser::LBRACE - 69))
      | (1ULL << (ObjectiveCParser::LBRACK - 69))
      | (1ULL << (ObjectiveCParser::SEMI - 69)))) != 0) || ((((_la - 136) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 136)) & ((1ULL << (ObjectiveCParser::AT - 136))
      | (1ULL << (ObjectiveCParser::BANG - 136))
      | (1ULL << (ObjectiveCParser::TILDE - 136))
      | (1ULL << (ObjectiveCParser::INC - 136))
      | (1ULL << (ObjectiveCParser::DEC - 136))
      | (1ULL << (ObjectiveCParser::ADD - 136))
      | (1ULL << (ObjectiveCParser::SUB - 136))
      | (1ULL << (ObjectiveCParser::MUL - 136))
      | (1ULL << (ObjectiveCParser::BITAND - 136))
      | (1ULL << (ObjectiveCParser::BITXOR - 136))
      | (1ULL << (ObjectiveCParser::CHARACTER_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::STRING_START - 136))
      | (1ULL << (ObjectiveCParser::HEX_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::OCTAL_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::BINARY_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::DECIMAL_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::FLOATING_POINT_LITERAL - 136)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchLabelContext ------------------------------------------------------------------

ObjectiveCParser::SwitchLabelContext::SwitchLabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::SwitchLabelContext::CASE() {
  return getToken(ObjectiveCParser::CASE, 0);
}

tree::TerminalNode* ObjectiveCParser::SwitchLabelContext::COLON() {
  return getToken(ObjectiveCParser::COLON, 0);
}

ObjectiveCParser::RangeExpressionContext* ObjectiveCParser::SwitchLabelContext::rangeExpression() {
  return getRuleContext<ObjectiveCParser::RangeExpressionContext>(0);
}

tree::TerminalNode* ObjectiveCParser::SwitchLabelContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

tree::TerminalNode* ObjectiveCParser::SwitchLabelContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

tree::TerminalNode* ObjectiveCParser::SwitchLabelContext::DEFAULT() {
  return getToken(ObjectiveCParser::DEFAULT, 0);
}


size_t ObjectiveCParser::SwitchLabelContext::getRuleIndex() const {
  return ObjectiveCParser::RuleSwitchLabel;
}

void ObjectiveCParser::SwitchLabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchLabel(this);
}

void ObjectiveCParser::SwitchLabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchLabel(this);
}


antlrcpp::Any ObjectiveCParser::SwitchLabelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitSwitchLabel(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::SwitchLabelContext* ObjectiveCParser::switchLabel() {
  SwitchLabelContext *_localctx = _tracker.createInstance<SwitchLabelContext>(_ctx, getState());
  enterRule(_localctx, 240, ObjectiveCParser::RuleSwitchLabel);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1422);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ObjectiveCParser::CASE: {
        enterOuterAlt(_localctx, 1);
        setState(1410);
        match(ObjectiveCParser::CASE);
        setState(1416);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case ObjectiveCParser::TRUE:
          case ObjectiveCParser::FALSE:
          case ObjectiveCParser::BOOL:
          case ObjectiveCParser::Class:
          case ObjectiveCParser::BYCOPY:
          case ObjectiveCParser::BYREF:
          case ObjectiveCParser::ID:
          case ObjectiveCParser::IMP:
          case ObjectiveCParser::IN:
          case ObjectiveCParser::INOUT:
          case ObjectiveCParser::NIL:
          case ObjectiveCParser::NO:
          case ObjectiveCParser::NULL_:
          case ObjectiveCParser::ONEWAY:
          case ObjectiveCParser::OUT:
          case ObjectiveCParser::PROTOCOL_:
          case ObjectiveCParser::SEL:
          case ObjectiveCParser::SELF:
          case ObjectiveCParser::SUPER:
          case ObjectiveCParser::YES:
          case ObjectiveCParser::ATOMIC:
          case ObjectiveCParser::NONATOMIC:
          case ObjectiveCParser::RETAIN:
          case ObjectiveCParser::AUTORELEASING_QUALIFIER:
          case ObjectiveCParser::BLOCK:
          case ObjectiveCParser::BRIDGE_RETAINED:
          case ObjectiveCParser::BRIDGE_TRANSFER:
          case ObjectiveCParser::COVARIANT:
          case ObjectiveCParser::CONTRAVARIANT:
          case ObjectiveCParser::DEPRECATED:
          case ObjectiveCParser::KINDOF:
          case ObjectiveCParser::UNUSED:
          case ObjectiveCParser::NULL_UNSPECIFIED:
          case ObjectiveCParser::NULLABLE:
          case ObjectiveCParser::NONNULL:
          case ObjectiveCParser::NULL_RESETTABLE:
          case ObjectiveCParser::NS_INLINE:
          case ObjectiveCParser::NS_ENUM:
          case ObjectiveCParser::NS_OPTIONS:
          case ObjectiveCParser::ASSIGN:
          case ObjectiveCParser::COPY:
          case ObjectiveCParser::GETTER:
          case ObjectiveCParser::SETTER:
          case ObjectiveCParser::STRONG:
          case ObjectiveCParser::READONLY:
          case ObjectiveCParser::READWRITE:
          case ObjectiveCParser::WEAK:
          case ObjectiveCParser::UNSAFE_UNRETAINED:
          case ObjectiveCParser::IB_OUTLET:
          case ObjectiveCParser::IB_OUTLET_COLLECTION:
          case ObjectiveCParser::IB_INSPECTABLE:
          case ObjectiveCParser::IB_DESIGNABLE:
          case ObjectiveCParser::IDENTIFIER:
          case ObjectiveCParser::ADD:
          case ObjectiveCParser::SUB:
          case ObjectiveCParser::CHARACTER_LITERAL:
          case ObjectiveCParser::HEX_LITERAL:
          case ObjectiveCParser::OCTAL_LITERAL:
          case ObjectiveCParser::BINARY_LITERAL:
          case ObjectiveCParser::DECIMAL_LITERAL:
          case ObjectiveCParser::FLOATING_POINT_LITERAL: {
            setState(1411);
            rangeExpression();
            break;
          }

          case ObjectiveCParser::LP: {
            setState(1412);
            match(ObjectiveCParser::LP);
            setState(1413);
            rangeExpression();
            setState(1414);
            match(ObjectiveCParser::RP);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(1418);
        match(ObjectiveCParser::COLON);
        break;
      }

      case ObjectiveCParser::DEFAULT: {
        enterOuterAlt(_localctx, 2);
        setState(1420);
        match(ObjectiveCParser::DEFAULT);
        setState(1421);
        match(ObjectiveCParser::COLON);
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

//----------------- IterationStatementContext ------------------------------------------------------------------

ObjectiveCParser::IterationStatementContext::IterationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::WhileStatementContext* ObjectiveCParser::IterationStatementContext::whileStatement() {
  return getRuleContext<ObjectiveCParser::WhileStatementContext>(0);
}

ObjectiveCParser::DoStatementContext* ObjectiveCParser::IterationStatementContext::doStatement() {
  return getRuleContext<ObjectiveCParser::DoStatementContext>(0);
}

ObjectiveCParser::ForStatementContext* ObjectiveCParser::IterationStatementContext::forStatement() {
  return getRuleContext<ObjectiveCParser::ForStatementContext>(0);
}

ObjectiveCParser::ForInStatementContext* ObjectiveCParser::IterationStatementContext::forInStatement() {
  return getRuleContext<ObjectiveCParser::ForInStatementContext>(0);
}


size_t ObjectiveCParser::IterationStatementContext::getRuleIndex() const {
  return ObjectiveCParser::RuleIterationStatement;
}

void ObjectiveCParser::IterationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIterationStatement(this);
}

void ObjectiveCParser::IterationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIterationStatement(this);
}


antlrcpp::Any ObjectiveCParser::IterationStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitIterationStatement(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::IterationStatementContext* ObjectiveCParser::iterationStatement() {
  IterationStatementContext *_localctx = _tracker.createInstance<IterationStatementContext>(_ctx, getState());
  enterRule(_localctx, 242, ObjectiveCParser::RuleIterationStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1428);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 187, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1424);
      whileStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1425);
      doStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1426);
      forStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1427);
      forInStatement();
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

//----------------- WhileStatementContext ------------------------------------------------------------------

ObjectiveCParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::WhileStatementContext::WHILE() {
  return getToken(ObjectiveCParser::WHILE, 0);
}

tree::TerminalNode* ObjectiveCParser::WhileStatementContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

ObjectiveCParser::ExpressionContext* ObjectiveCParser::WhileStatementContext::expression() {
  return getRuleContext<ObjectiveCParser::ExpressionContext>(0);
}

tree::TerminalNode* ObjectiveCParser::WhileStatementContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

ObjectiveCParser::StatementContext* ObjectiveCParser::WhileStatementContext::statement() {
  return getRuleContext<ObjectiveCParser::StatementContext>(0);
}


size_t ObjectiveCParser::WhileStatementContext::getRuleIndex() const {
  return ObjectiveCParser::RuleWhileStatement;
}

void ObjectiveCParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void ObjectiveCParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}


antlrcpp::Any ObjectiveCParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::WhileStatementContext* ObjectiveCParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 244, ObjectiveCParser::RuleWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1430);
    match(ObjectiveCParser::WHILE);
    setState(1431);
    match(ObjectiveCParser::LP);
    setState(1432);
    expression(0);
    setState(1433);
    match(ObjectiveCParser::RP);
    setState(1434);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoStatementContext ------------------------------------------------------------------

ObjectiveCParser::DoStatementContext::DoStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::DoStatementContext::DO() {
  return getToken(ObjectiveCParser::DO, 0);
}

ObjectiveCParser::StatementContext* ObjectiveCParser::DoStatementContext::statement() {
  return getRuleContext<ObjectiveCParser::StatementContext>(0);
}

tree::TerminalNode* ObjectiveCParser::DoStatementContext::WHILE() {
  return getToken(ObjectiveCParser::WHILE, 0);
}

tree::TerminalNode* ObjectiveCParser::DoStatementContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

ObjectiveCParser::ExpressionContext* ObjectiveCParser::DoStatementContext::expression() {
  return getRuleContext<ObjectiveCParser::ExpressionContext>(0);
}

tree::TerminalNode* ObjectiveCParser::DoStatementContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

tree::TerminalNode* ObjectiveCParser::DoStatementContext::SEMI() {
  return getToken(ObjectiveCParser::SEMI, 0);
}


size_t ObjectiveCParser::DoStatementContext::getRuleIndex() const {
  return ObjectiveCParser::RuleDoStatement;
}

void ObjectiveCParser::DoStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoStatement(this);
}

void ObjectiveCParser::DoStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoStatement(this);
}


antlrcpp::Any ObjectiveCParser::DoStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitDoStatement(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::DoStatementContext* ObjectiveCParser::doStatement() {
  DoStatementContext *_localctx = _tracker.createInstance<DoStatementContext>(_ctx, getState());
  enterRule(_localctx, 246, ObjectiveCParser::RuleDoStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1436);
    match(ObjectiveCParser::DO);
    setState(1437);
    statement();
    setState(1438);
    match(ObjectiveCParser::WHILE);
    setState(1439);
    match(ObjectiveCParser::LP);
    setState(1440);
    expression(0);
    setState(1441);
    match(ObjectiveCParser::RP);
    setState(1442);
    match(ObjectiveCParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

ObjectiveCParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::ForStatementContext::FOR() {
  return getToken(ObjectiveCParser::FOR, 0);
}

tree::TerminalNode* ObjectiveCParser::ForStatementContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::ForStatementContext::SEMI() {
  return getTokens(ObjectiveCParser::SEMI);
}

tree::TerminalNode* ObjectiveCParser::ForStatementContext::SEMI(size_t i) {
  return getToken(ObjectiveCParser::SEMI, i);
}

tree::TerminalNode* ObjectiveCParser::ForStatementContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

ObjectiveCParser::StatementContext* ObjectiveCParser::ForStatementContext::statement() {
  return getRuleContext<ObjectiveCParser::StatementContext>(0);
}

ObjectiveCParser::ForLoopInitializerContext* ObjectiveCParser::ForStatementContext::forLoopInitializer() {
  return getRuleContext<ObjectiveCParser::ForLoopInitializerContext>(0);
}

ObjectiveCParser::ExpressionContext* ObjectiveCParser::ForStatementContext::expression() {
  return getRuleContext<ObjectiveCParser::ExpressionContext>(0);
}

ObjectiveCParser::ExpressionsContext* ObjectiveCParser::ForStatementContext::expressions() {
  return getRuleContext<ObjectiveCParser::ExpressionsContext>(0);
}


size_t ObjectiveCParser::ForStatementContext::getRuleIndex() const {
  return ObjectiveCParser::RuleForStatement;
}

void ObjectiveCParser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}

void ObjectiveCParser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}


antlrcpp::Any ObjectiveCParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ForStatementContext* ObjectiveCParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 248, ObjectiveCParser::RuleForStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1444);
    match(ObjectiveCParser::FOR);
    setState(1445);
    match(ObjectiveCParser::LP);
    setState(1447);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::AUTO)
      | (1ULL << ObjectiveCParser::CHAR)
      | (1ULL << ObjectiveCParser::CONST)
      | (1ULL << ObjectiveCParser::DOUBLE)
      | (1ULL << ObjectiveCParser::ENUM)
      | (1ULL << ObjectiveCParser::EXTERN)
      | (1ULL << ObjectiveCParser::FLOAT)
      | (1ULL << ObjectiveCParser::INLINE)
      | (1ULL << ObjectiveCParser::INT)
      | (1ULL << ObjectiveCParser::LONG)
      | (1ULL << ObjectiveCParser::REGISTER)
      | (1ULL << ObjectiveCParser::RESTRICT)
      | (1ULL << ObjectiveCParser::SHORT)
      | (1ULL << ObjectiveCParser::SIGNED)
      | (1ULL << ObjectiveCParser::SIZEOF)
      | (1ULL << ObjectiveCParser::STATIC)
      | (1ULL << ObjectiveCParser::STRUCT)
      | (1ULL << ObjectiveCParser::UNION)
      | (1ULL << ObjectiveCParser::UNSIGNED)
      | (1ULL << ObjectiveCParser::VOID)
      | (1ULL << ObjectiveCParser::VOLATILE)
      | (1ULL << ObjectiveCParser::TRUE)
      | (1ULL << ObjectiveCParser::FALSE)
      | (1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::NIL)
      | (1ULL << ObjectiveCParser::NO)
      | (1ULL << ObjectiveCParser::NULL_)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER)
      | (1ULL << ObjectiveCParser::YES)
      | (1ULL << ObjectiveCParser::ENCODE))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (ObjectiveCParser::PROTOCOL - 69))
      | (1ULL << (ObjectiveCParser::SELECTOR - 69))
      | (1ULL << (ObjectiveCParser::ATOMIC - 69))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 69))
      | (1ULL << (ObjectiveCParser::RETAIN - 69))
      | (1ULL << (ObjectiveCParser::ATTRIBUTE - 69))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 69))
      | (1ULL << (ObjectiveCParser::BLOCK - 69))
      | (1ULL << (ObjectiveCParser::BRIDGE - 69))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 69))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 69))
      | (1ULL << (ObjectiveCParser::COVARIANT - 69))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 69))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 69))
      | (1ULL << (ObjectiveCParser::KINDOF - 69))
      | (1ULL << (ObjectiveCParser::STRONG_QUALIFIER - 69))
      | (1ULL << (ObjectiveCParser::TYPEOF - 69))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED_QUALIFIER - 69))
      | (1ULL << (ObjectiveCParser::UNUSED - 69))
      | (1ULL << (ObjectiveCParser::WEAK_QUALIFIER - 69))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 69))
      | (1ULL << (ObjectiveCParser::NULLABLE - 69))
      | (1ULL << (ObjectiveCParser::NONNULL - 69))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 69))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 69))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 69))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 69))
      | (1ULL << (ObjectiveCParser::ASSIGN - 69))
      | (1ULL << (ObjectiveCParser::COPY - 69))
      | (1ULL << (ObjectiveCParser::GETTER - 69))
      | (1ULL << (ObjectiveCParser::SETTER - 69))
      | (1ULL << (ObjectiveCParser::STRONG - 69))
      | (1ULL << (ObjectiveCParser::READONLY - 69))
      | (1ULL << (ObjectiveCParser::READWRITE - 69))
      | (1ULL << (ObjectiveCParser::WEAK - 69))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 69))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 69))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 69))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 69))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 69))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 69))
      | (1ULL << (ObjectiveCParser::LP - 69))
      | (1ULL << (ObjectiveCParser::LBRACK - 69)))) != 0) || ((((_la - 136) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 136)) & ((1ULL << (ObjectiveCParser::AT - 136))
      | (1ULL << (ObjectiveCParser::BANG - 136))
      | (1ULL << (ObjectiveCParser::TILDE - 136))
      | (1ULL << (ObjectiveCParser::INC - 136))
      | (1ULL << (ObjectiveCParser::DEC - 136))
      | (1ULL << (ObjectiveCParser::ADD - 136))
      | (1ULL << (ObjectiveCParser::SUB - 136))
      | (1ULL << (ObjectiveCParser::MUL - 136))
      | (1ULL << (ObjectiveCParser::BITAND - 136))
      | (1ULL << (ObjectiveCParser::BITXOR - 136))
      | (1ULL << (ObjectiveCParser::CHARACTER_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::STRING_START - 136))
      | (1ULL << (ObjectiveCParser::HEX_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::OCTAL_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::BINARY_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::DECIMAL_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::FLOATING_POINT_LITERAL - 136)))) != 0)) {
      setState(1446);
      forLoopInitializer();
    }
    setState(1449);
    match(ObjectiveCParser::SEMI);
    setState(1451);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::SIZEOF)
      | (1ULL << ObjectiveCParser::TRUE)
      | (1ULL << ObjectiveCParser::FALSE)
      | (1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::NIL)
      | (1ULL << ObjectiveCParser::NO)
      | (1ULL << ObjectiveCParser::NULL_)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER)
      | (1ULL << ObjectiveCParser::YES)
      | (1ULL << ObjectiveCParser::ENCODE))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (ObjectiveCParser::PROTOCOL - 69))
      | (1ULL << (ObjectiveCParser::SELECTOR - 69))
      | (1ULL << (ObjectiveCParser::ATOMIC - 69))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 69))
      | (1ULL << (ObjectiveCParser::RETAIN - 69))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 69))
      | (1ULL << (ObjectiveCParser::BLOCK - 69))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 69))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 69))
      | (1ULL << (ObjectiveCParser::COVARIANT - 69))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 69))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 69))
      | (1ULL << (ObjectiveCParser::KINDOF - 69))
      | (1ULL << (ObjectiveCParser::UNUSED - 69))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 69))
      | (1ULL << (ObjectiveCParser::NULLABLE - 69))
      | (1ULL << (ObjectiveCParser::NONNULL - 69))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 69))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 69))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 69))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 69))
      | (1ULL << (ObjectiveCParser::ASSIGN - 69))
      | (1ULL << (ObjectiveCParser::COPY - 69))
      | (1ULL << (ObjectiveCParser::GETTER - 69))
      | (1ULL << (ObjectiveCParser::SETTER - 69))
      | (1ULL << (ObjectiveCParser::STRONG - 69))
      | (1ULL << (ObjectiveCParser::READONLY - 69))
      | (1ULL << (ObjectiveCParser::READWRITE - 69))
      | (1ULL << (ObjectiveCParser::WEAK - 69))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 69))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 69))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 69))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 69))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 69))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 69))
      | (1ULL << (ObjectiveCParser::LP - 69))
      | (1ULL << (ObjectiveCParser::LBRACK - 69)))) != 0) || ((((_la - 136) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 136)) & ((1ULL << (ObjectiveCParser::AT - 136))
      | (1ULL << (ObjectiveCParser::BANG - 136))
      | (1ULL << (ObjectiveCParser::TILDE - 136))
      | (1ULL << (ObjectiveCParser::INC - 136))
      | (1ULL << (ObjectiveCParser::DEC - 136))
      | (1ULL << (ObjectiveCParser::ADD - 136))
      | (1ULL << (ObjectiveCParser::SUB - 136))
      | (1ULL << (ObjectiveCParser::MUL - 136))
      | (1ULL << (ObjectiveCParser::BITAND - 136))
      | (1ULL << (ObjectiveCParser::BITXOR - 136))
      | (1ULL << (ObjectiveCParser::CHARACTER_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::STRING_START - 136))
      | (1ULL << (ObjectiveCParser::HEX_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::OCTAL_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::BINARY_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::DECIMAL_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::FLOATING_POINT_LITERAL - 136)))) != 0)) {
      setState(1450);
      expression(0);
    }
    setState(1453);
    match(ObjectiveCParser::SEMI);
    setState(1455);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::SIZEOF)
      | (1ULL << ObjectiveCParser::TRUE)
      | (1ULL << ObjectiveCParser::FALSE)
      | (1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::NIL)
      | (1ULL << ObjectiveCParser::NO)
      | (1ULL << ObjectiveCParser::NULL_)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER)
      | (1ULL << ObjectiveCParser::YES)
      | (1ULL << ObjectiveCParser::ENCODE))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (ObjectiveCParser::PROTOCOL - 69))
      | (1ULL << (ObjectiveCParser::SELECTOR - 69))
      | (1ULL << (ObjectiveCParser::ATOMIC - 69))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 69))
      | (1ULL << (ObjectiveCParser::RETAIN - 69))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 69))
      | (1ULL << (ObjectiveCParser::BLOCK - 69))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 69))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 69))
      | (1ULL << (ObjectiveCParser::COVARIANT - 69))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 69))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 69))
      | (1ULL << (ObjectiveCParser::KINDOF - 69))
      | (1ULL << (ObjectiveCParser::UNUSED - 69))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 69))
      | (1ULL << (ObjectiveCParser::NULLABLE - 69))
      | (1ULL << (ObjectiveCParser::NONNULL - 69))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 69))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 69))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 69))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 69))
      | (1ULL << (ObjectiveCParser::ASSIGN - 69))
      | (1ULL << (ObjectiveCParser::COPY - 69))
      | (1ULL << (ObjectiveCParser::GETTER - 69))
      | (1ULL << (ObjectiveCParser::SETTER - 69))
      | (1ULL << (ObjectiveCParser::STRONG - 69))
      | (1ULL << (ObjectiveCParser::READONLY - 69))
      | (1ULL << (ObjectiveCParser::READWRITE - 69))
      | (1ULL << (ObjectiveCParser::WEAK - 69))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 69))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 69))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 69))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 69))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 69))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 69))
      | (1ULL << (ObjectiveCParser::LP - 69))
      | (1ULL << (ObjectiveCParser::LBRACK - 69)))) != 0) || ((((_la - 136) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 136)) & ((1ULL << (ObjectiveCParser::AT - 136))
      | (1ULL << (ObjectiveCParser::BANG - 136))
      | (1ULL << (ObjectiveCParser::TILDE - 136))
      | (1ULL << (ObjectiveCParser::INC - 136))
      | (1ULL << (ObjectiveCParser::DEC - 136))
      | (1ULL << (ObjectiveCParser::ADD - 136))
      | (1ULL << (ObjectiveCParser::SUB - 136))
      | (1ULL << (ObjectiveCParser::MUL - 136))
      | (1ULL << (ObjectiveCParser::BITAND - 136))
      | (1ULL << (ObjectiveCParser::BITXOR - 136))
      | (1ULL << (ObjectiveCParser::CHARACTER_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::STRING_START - 136))
      | (1ULL << (ObjectiveCParser::HEX_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::OCTAL_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::BINARY_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::DECIMAL_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::FLOATING_POINT_LITERAL - 136)))) != 0)) {
      setState(1454);
      expressions();
    }
    setState(1457);
    match(ObjectiveCParser::RP);
    setState(1458);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForLoopInitializerContext ------------------------------------------------------------------

ObjectiveCParser::ForLoopInitializerContext::ForLoopInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::DeclarationSpecifiersContext* ObjectiveCParser::ForLoopInitializerContext::declarationSpecifiers() {
  return getRuleContext<ObjectiveCParser::DeclarationSpecifiersContext>(0);
}

ObjectiveCParser::InitDeclaratorListContext* ObjectiveCParser::ForLoopInitializerContext::initDeclaratorList() {
  return getRuleContext<ObjectiveCParser::InitDeclaratorListContext>(0);
}

ObjectiveCParser::ExpressionsContext* ObjectiveCParser::ForLoopInitializerContext::expressions() {
  return getRuleContext<ObjectiveCParser::ExpressionsContext>(0);
}


size_t ObjectiveCParser::ForLoopInitializerContext::getRuleIndex() const {
  return ObjectiveCParser::RuleForLoopInitializer;
}

void ObjectiveCParser::ForLoopInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForLoopInitializer(this);
}

void ObjectiveCParser::ForLoopInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForLoopInitializer(this);
}


antlrcpp::Any ObjectiveCParser::ForLoopInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitForLoopInitializer(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ForLoopInitializerContext* ObjectiveCParser::forLoopInitializer() {
  ForLoopInitializerContext *_localctx = _tracker.createInstance<ForLoopInitializerContext>(_ctx, getState());
  enterRule(_localctx, 250, ObjectiveCParser::RuleForLoopInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1464);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 191, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1460);
      declarationSpecifiers();
      setState(1461);
      initDeclaratorList();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1463);
      expressions();
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

//----------------- ForInStatementContext ------------------------------------------------------------------

ObjectiveCParser::ForInStatementContext::ForInStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::ForInStatementContext::FOR() {
  return getToken(ObjectiveCParser::FOR, 0);
}

tree::TerminalNode* ObjectiveCParser::ForInStatementContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

ObjectiveCParser::TypeVariableDeclaratorContext* ObjectiveCParser::ForInStatementContext::typeVariableDeclarator() {
  return getRuleContext<ObjectiveCParser::TypeVariableDeclaratorContext>(0);
}

tree::TerminalNode* ObjectiveCParser::ForInStatementContext::IN() {
  return getToken(ObjectiveCParser::IN, 0);
}

tree::TerminalNode* ObjectiveCParser::ForInStatementContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

ObjectiveCParser::StatementContext* ObjectiveCParser::ForInStatementContext::statement() {
  return getRuleContext<ObjectiveCParser::StatementContext>(0);
}

ObjectiveCParser::ExpressionContext* ObjectiveCParser::ForInStatementContext::expression() {
  return getRuleContext<ObjectiveCParser::ExpressionContext>(0);
}


size_t ObjectiveCParser::ForInStatementContext::getRuleIndex() const {
  return ObjectiveCParser::RuleForInStatement;
}

void ObjectiveCParser::ForInStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForInStatement(this);
}

void ObjectiveCParser::ForInStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForInStatement(this);
}


antlrcpp::Any ObjectiveCParser::ForInStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitForInStatement(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ForInStatementContext* ObjectiveCParser::forInStatement() {
  ForInStatementContext *_localctx = _tracker.createInstance<ForInStatementContext>(_ctx, getState());
  enterRule(_localctx, 252, ObjectiveCParser::RuleForInStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1466);
    match(ObjectiveCParser::FOR);
    setState(1467);
    match(ObjectiveCParser::LP);
    setState(1468);
    typeVariableDeclarator();
    setState(1469);
    match(ObjectiveCParser::IN);
    setState(1471);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::SIZEOF)
      | (1ULL << ObjectiveCParser::TRUE)
      | (1ULL << ObjectiveCParser::FALSE)
      | (1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::NIL)
      | (1ULL << ObjectiveCParser::NO)
      | (1ULL << ObjectiveCParser::NULL_)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER)
      | (1ULL << ObjectiveCParser::YES)
      | (1ULL << ObjectiveCParser::ENCODE))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (ObjectiveCParser::PROTOCOL - 69))
      | (1ULL << (ObjectiveCParser::SELECTOR - 69))
      | (1ULL << (ObjectiveCParser::ATOMIC - 69))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 69))
      | (1ULL << (ObjectiveCParser::RETAIN - 69))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 69))
      | (1ULL << (ObjectiveCParser::BLOCK - 69))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 69))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 69))
      | (1ULL << (ObjectiveCParser::COVARIANT - 69))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 69))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 69))
      | (1ULL << (ObjectiveCParser::KINDOF - 69))
      | (1ULL << (ObjectiveCParser::UNUSED - 69))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 69))
      | (1ULL << (ObjectiveCParser::NULLABLE - 69))
      | (1ULL << (ObjectiveCParser::NONNULL - 69))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 69))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 69))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 69))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 69))
      | (1ULL << (ObjectiveCParser::ASSIGN - 69))
      | (1ULL << (ObjectiveCParser::COPY - 69))
      | (1ULL << (ObjectiveCParser::GETTER - 69))
      | (1ULL << (ObjectiveCParser::SETTER - 69))
      | (1ULL << (ObjectiveCParser::STRONG - 69))
      | (1ULL << (ObjectiveCParser::READONLY - 69))
      | (1ULL << (ObjectiveCParser::READWRITE - 69))
      | (1ULL << (ObjectiveCParser::WEAK - 69))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 69))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 69))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 69))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 69))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 69))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 69))
      | (1ULL << (ObjectiveCParser::LP - 69))
      | (1ULL << (ObjectiveCParser::LBRACK - 69)))) != 0) || ((((_la - 136) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 136)) & ((1ULL << (ObjectiveCParser::AT - 136))
      | (1ULL << (ObjectiveCParser::BANG - 136))
      | (1ULL << (ObjectiveCParser::TILDE - 136))
      | (1ULL << (ObjectiveCParser::INC - 136))
      | (1ULL << (ObjectiveCParser::DEC - 136))
      | (1ULL << (ObjectiveCParser::ADD - 136))
      | (1ULL << (ObjectiveCParser::SUB - 136))
      | (1ULL << (ObjectiveCParser::MUL - 136))
      | (1ULL << (ObjectiveCParser::BITAND - 136))
      | (1ULL << (ObjectiveCParser::BITXOR - 136))
      | (1ULL << (ObjectiveCParser::CHARACTER_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::STRING_START - 136))
      | (1ULL << (ObjectiveCParser::HEX_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::OCTAL_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::BINARY_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::DECIMAL_LITERAL - 136))
      | (1ULL << (ObjectiveCParser::FLOATING_POINT_LITERAL - 136)))) != 0)) {
      setState(1470);
      expression(0);
    }
    setState(1473);
    match(ObjectiveCParser::RP);
    setState(1474);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpStatementContext ------------------------------------------------------------------

ObjectiveCParser::JumpStatementContext::JumpStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::JumpStatementContext::GOTO() {
  return getToken(ObjectiveCParser::GOTO, 0);
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::JumpStatementContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::JumpStatementContext::CONTINUE() {
  return getToken(ObjectiveCParser::CONTINUE, 0);
}

tree::TerminalNode* ObjectiveCParser::JumpStatementContext::BREAK() {
  return getToken(ObjectiveCParser::BREAK, 0);
}

tree::TerminalNode* ObjectiveCParser::JumpStatementContext::RETURN() {
  return getToken(ObjectiveCParser::RETURN, 0);
}

ObjectiveCParser::ExpressionContext* ObjectiveCParser::JumpStatementContext::expression() {
  return getRuleContext<ObjectiveCParser::ExpressionContext>(0);
}


size_t ObjectiveCParser::JumpStatementContext::getRuleIndex() const {
  return ObjectiveCParser::RuleJumpStatement;
}

void ObjectiveCParser::JumpStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpStatement(this);
}

void ObjectiveCParser::JumpStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpStatement(this);
}


antlrcpp::Any ObjectiveCParser::JumpStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitJumpStatement(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::JumpStatementContext* ObjectiveCParser::jumpStatement() {
  JumpStatementContext *_localctx = _tracker.createInstance<JumpStatementContext>(_ctx, getState());
  enterRule(_localctx, 254, ObjectiveCParser::RuleJumpStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1484);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ObjectiveCParser::GOTO: {
        enterOuterAlt(_localctx, 1);
        setState(1476);
        match(ObjectiveCParser::GOTO);
        setState(1477);
        identifier();
        break;
      }

      case ObjectiveCParser::CONTINUE: {
        enterOuterAlt(_localctx, 2);
        setState(1478);
        match(ObjectiveCParser::CONTINUE);
        break;
      }

      case ObjectiveCParser::BREAK: {
        enterOuterAlt(_localctx, 3);
        setState(1479);
        match(ObjectiveCParser::BREAK);
        break;
      }

      case ObjectiveCParser::RETURN: {
        enterOuterAlt(_localctx, 4);
        setState(1480);
        match(ObjectiveCParser::RETURN);
        setState(1482);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 193, _ctx)) {
        case 1: {
          setState(1481);
          expression(0);
          break;
        }

        }
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

//----------------- ExpressionsContext ------------------------------------------------------------------

ObjectiveCParser::ExpressionsContext::ExpressionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ObjectiveCParser::ExpressionContext *> ObjectiveCParser::ExpressionsContext::expression() {
  return getRuleContexts<ObjectiveCParser::ExpressionContext>();
}

ObjectiveCParser::ExpressionContext* ObjectiveCParser::ExpressionsContext::expression(size_t i) {
  return getRuleContext<ObjectiveCParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::ExpressionsContext::COMMA() {
  return getTokens(ObjectiveCParser::COMMA);
}

tree::TerminalNode* ObjectiveCParser::ExpressionsContext::COMMA(size_t i) {
  return getToken(ObjectiveCParser::COMMA, i);
}


size_t ObjectiveCParser::ExpressionsContext::getRuleIndex() const {
  return ObjectiveCParser::RuleExpressions;
}

void ObjectiveCParser::ExpressionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressions(this);
}

void ObjectiveCParser::ExpressionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressions(this);
}


antlrcpp::Any ObjectiveCParser::ExpressionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitExpressions(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ExpressionsContext* ObjectiveCParser::expressions() {
  ExpressionsContext *_localctx = _tracker.createInstance<ExpressionsContext>(_ctx, getState());
  enterRule(_localctx, 256, ObjectiveCParser::RuleExpressions);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1486);
    expression(0);
    setState(1491);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 195, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1487);
        match(ObjectiveCParser::COMMA);
        setState(1488);
        expression(0); 
      }
      setState(1493);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 195, _ctx);
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

ObjectiveCParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::CastExpressionContext* ObjectiveCParser::ExpressionContext::castExpression() {
  return getRuleContext<ObjectiveCParser::CastExpressionContext>(0);
}

tree::TerminalNode* ObjectiveCParser::ExpressionContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

ObjectiveCParser::CompoundStatementContext* ObjectiveCParser::ExpressionContext::compoundStatement() {
  return getRuleContext<ObjectiveCParser::CompoundStatementContext>(0);
}

tree::TerminalNode* ObjectiveCParser::ExpressionContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

ObjectiveCParser::UnaryExpressionContext* ObjectiveCParser::ExpressionContext::unaryExpression() {
  return getRuleContext<ObjectiveCParser::UnaryExpressionContext>(0);
}

ObjectiveCParser::AssignmentOperatorContext* ObjectiveCParser::ExpressionContext::assignmentOperator() {
  return getRuleContext<ObjectiveCParser::AssignmentOperatorContext>(0);
}

std::vector<ObjectiveCParser::ExpressionContext *> ObjectiveCParser::ExpressionContext::expression() {
  return getRuleContexts<ObjectiveCParser::ExpressionContext>();
}

ObjectiveCParser::ExpressionContext* ObjectiveCParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<ObjectiveCParser::ExpressionContext>(i);
}

tree::TerminalNode* ObjectiveCParser::ExpressionContext::MUL() {
  return getToken(ObjectiveCParser::MUL, 0);
}

tree::TerminalNode* ObjectiveCParser::ExpressionContext::DIV() {
  return getToken(ObjectiveCParser::DIV, 0);
}

tree::TerminalNode* ObjectiveCParser::ExpressionContext::MOD() {
  return getToken(ObjectiveCParser::MOD, 0);
}

tree::TerminalNode* ObjectiveCParser::ExpressionContext::ADD() {
  return getToken(ObjectiveCParser::ADD, 0);
}

tree::TerminalNode* ObjectiveCParser::ExpressionContext::SUB() {
  return getToken(ObjectiveCParser::SUB, 0);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::ExpressionContext::LT() {
  return getTokens(ObjectiveCParser::LT);
}

tree::TerminalNode* ObjectiveCParser::ExpressionContext::LT(size_t i) {
  return getToken(ObjectiveCParser::LT, i);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::ExpressionContext::GT() {
  return getTokens(ObjectiveCParser::GT);
}

tree::TerminalNode* ObjectiveCParser::ExpressionContext::GT(size_t i) {
  return getToken(ObjectiveCParser::GT, i);
}

tree::TerminalNode* ObjectiveCParser::ExpressionContext::LE() {
  return getToken(ObjectiveCParser::LE, 0);
}

tree::TerminalNode* ObjectiveCParser::ExpressionContext::GE() {
  return getToken(ObjectiveCParser::GE, 0);
}

tree::TerminalNode* ObjectiveCParser::ExpressionContext::NOTEQUAL() {
  return getToken(ObjectiveCParser::NOTEQUAL, 0);
}

tree::TerminalNode* ObjectiveCParser::ExpressionContext::EQUAL() {
  return getToken(ObjectiveCParser::EQUAL, 0);
}

tree::TerminalNode* ObjectiveCParser::ExpressionContext::BITAND() {
  return getToken(ObjectiveCParser::BITAND, 0);
}

tree::TerminalNode* ObjectiveCParser::ExpressionContext::BITXOR() {
  return getToken(ObjectiveCParser::BITXOR, 0);
}

tree::TerminalNode* ObjectiveCParser::ExpressionContext::BITOR() {
  return getToken(ObjectiveCParser::BITOR, 0);
}

tree::TerminalNode* ObjectiveCParser::ExpressionContext::AND() {
  return getToken(ObjectiveCParser::AND, 0);
}

tree::TerminalNode* ObjectiveCParser::ExpressionContext::OR() {
  return getToken(ObjectiveCParser::OR, 0);
}

tree::TerminalNode* ObjectiveCParser::ExpressionContext::QUESTION() {
  return getToken(ObjectiveCParser::QUESTION, 0);
}

tree::TerminalNode* ObjectiveCParser::ExpressionContext::COLON() {
  return getToken(ObjectiveCParser::COLON, 0);
}


size_t ObjectiveCParser::ExpressionContext::getRuleIndex() const {
  return ObjectiveCParser::RuleExpression;
}

void ObjectiveCParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void ObjectiveCParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any ObjectiveCParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


ObjectiveCParser::ExpressionContext* ObjectiveCParser::expression() {
   return expression(0);
}

ObjectiveCParser::ExpressionContext* ObjectiveCParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ObjectiveCParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  ObjectiveCParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 258;
  enterRecursionRule(_localctx, 258, ObjectiveCParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1504);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 196, _ctx)) {
    case 1: {
      setState(1495);
      castExpression();
      break;
    }

    case 2: {
      setState(1496);
      match(ObjectiveCParser::LP);
      setState(1497);
      compoundStatement();
      setState(1498);
      match(ObjectiveCParser::RP);
      break;
    }

    case 3: {
      setState(1500);
      unaryExpression();
      setState(1501);
      assignmentOperator();
      setState(1502);
      dynamic_cast<ExpressionContext *>(_localctx)->assignmentExpression = expression(1);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1550);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 200, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1548);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 199, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1506);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(1507);
          dynamic_cast<ExpressionContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 154) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 154)) & ((1ULL << (ObjectiveCParser::MUL - 154))
            | (1ULL << (ObjectiveCParser::DIV - 154))
            | (1ULL << (ObjectiveCParser::MOD - 154)))) != 0))) {
            dynamic_cast<ExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1508);
          expression(14);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1509);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(1510);
          dynamic_cast<ExpressionContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ObjectiveCParser::ADD

          || _la == ObjectiveCParser::SUB)) {
            dynamic_cast<ExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1511);
          expression(13);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1512);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(1517);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case ObjectiveCParser::LT: {
              setState(1513);
              match(ObjectiveCParser::LT);
              setState(1514);
              match(ObjectiveCParser::LT);
              break;
            }

            case ObjectiveCParser::GT: {
              setState(1515);
              match(ObjectiveCParser::GT);
              setState(1516);
              match(ObjectiveCParser::GT);
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(1519);
          expression(12);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1520);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(1521);
          dynamic_cast<ExpressionContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 138) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 138)) & ((1ULL << (ObjectiveCParser::GT - 138))
            | (1ULL << (ObjectiveCParser::LT - 138))
            | (1ULL << (ObjectiveCParser::LE - 138))
            | (1ULL << (ObjectiveCParser::GE - 138)))) != 0))) {
            dynamic_cast<ExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1522);
          expression(11);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1523);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(1524);
          dynamic_cast<ExpressionContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ObjectiveCParser::EQUAL

          || _la == ObjectiveCParser::NOTEQUAL)) {
            dynamic_cast<ExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1525);
          expression(10);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1526);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(1527);
          dynamic_cast<ExpressionContext *>(_localctx)->op = match(ObjectiveCParser::BITAND);
          setState(1528);
          expression(9);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1529);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(1530);
          dynamic_cast<ExpressionContext *>(_localctx)->op = match(ObjectiveCParser::BITXOR);
          setState(1531);
          expression(8);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1532);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(1533);
          dynamic_cast<ExpressionContext *>(_localctx)->op = match(ObjectiveCParser::BITOR);
          setState(1534);
          expression(7);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1535);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(1536);
          dynamic_cast<ExpressionContext *>(_localctx)->op = match(ObjectiveCParser::AND);
          setState(1537);
          expression(6);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1538);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(1539);
          dynamic_cast<ExpressionContext *>(_localctx)->op = match(ObjectiveCParser::OR);
          setState(1540);
          expression(5);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(1541);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1542);
          match(ObjectiveCParser::QUESTION);
          setState(1544);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << ObjectiveCParser::SIZEOF)
            | (1ULL << ObjectiveCParser::TRUE)
            | (1ULL << ObjectiveCParser::FALSE)
            | (1ULL << ObjectiveCParser::BOOL)
            | (1ULL << ObjectiveCParser::Class)
            | (1ULL << ObjectiveCParser::BYCOPY)
            | (1ULL << ObjectiveCParser::BYREF)
            | (1ULL << ObjectiveCParser::ID)
            | (1ULL << ObjectiveCParser::IMP)
            | (1ULL << ObjectiveCParser::IN)
            | (1ULL << ObjectiveCParser::INOUT)
            | (1ULL << ObjectiveCParser::NIL)
            | (1ULL << ObjectiveCParser::NO)
            | (1ULL << ObjectiveCParser::NULL_)
            | (1ULL << ObjectiveCParser::ONEWAY)
            | (1ULL << ObjectiveCParser::OUT)
            | (1ULL << ObjectiveCParser::PROTOCOL_)
            | (1ULL << ObjectiveCParser::SEL)
            | (1ULL << ObjectiveCParser::SELF)
            | (1ULL << ObjectiveCParser::SUPER)
            | (1ULL << ObjectiveCParser::YES)
            | (1ULL << ObjectiveCParser::ENCODE))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 69)) & ((1ULL << (ObjectiveCParser::PROTOCOL - 69))
            | (1ULL << (ObjectiveCParser::SELECTOR - 69))
            | (1ULL << (ObjectiveCParser::ATOMIC - 69))
            | (1ULL << (ObjectiveCParser::NONATOMIC - 69))
            | (1ULL << (ObjectiveCParser::RETAIN - 69))
            | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 69))
            | (1ULL << (ObjectiveCParser::BLOCK - 69))
            | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 69))
            | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 69))
            | (1ULL << (ObjectiveCParser::COVARIANT - 69))
            | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 69))
            | (1ULL << (ObjectiveCParser::DEPRECATED - 69))
            | (1ULL << (ObjectiveCParser::KINDOF - 69))
            | (1ULL << (ObjectiveCParser::UNUSED - 69))
            | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 69))
            | (1ULL << (ObjectiveCParser::NULLABLE - 69))
            | (1ULL << (ObjectiveCParser::NONNULL - 69))
            | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 69))
            | (1ULL << (ObjectiveCParser::NS_INLINE - 69))
            | (1ULL << (ObjectiveCParser::NS_ENUM - 69))
            | (1ULL << (ObjectiveCParser::NS_OPTIONS - 69))
            | (1ULL << (ObjectiveCParser::ASSIGN - 69))
            | (1ULL << (ObjectiveCParser::COPY - 69))
            | (1ULL << (ObjectiveCParser::GETTER - 69))
            | (1ULL << (ObjectiveCParser::SETTER - 69))
            | (1ULL << (ObjectiveCParser::STRONG - 69))
            | (1ULL << (ObjectiveCParser::READONLY - 69))
            | (1ULL << (ObjectiveCParser::READWRITE - 69))
            | (1ULL << (ObjectiveCParser::WEAK - 69))
            | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 69))
            | (1ULL << (ObjectiveCParser::IB_OUTLET - 69))
            | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 69))
            | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 69))
            | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 69))
            | (1ULL << (ObjectiveCParser::IDENTIFIER - 69))
            | (1ULL << (ObjectiveCParser::LP - 69))
            | (1ULL << (ObjectiveCParser::LBRACK - 69)))) != 0) || ((((_la - 136) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 136)) & ((1ULL << (ObjectiveCParser::AT - 136))
            | (1ULL << (ObjectiveCParser::BANG - 136))
            | (1ULL << (ObjectiveCParser::TILDE - 136))
            | (1ULL << (ObjectiveCParser::INC - 136))
            | (1ULL << (ObjectiveCParser::DEC - 136))
            | (1ULL << (ObjectiveCParser::ADD - 136))
            | (1ULL << (ObjectiveCParser::SUB - 136))
            | (1ULL << (ObjectiveCParser::MUL - 136))
            | (1ULL << (ObjectiveCParser::BITAND - 136))
            | (1ULL << (ObjectiveCParser::BITXOR - 136))
            | (1ULL << (ObjectiveCParser::CHARACTER_LITERAL - 136))
            | (1ULL << (ObjectiveCParser::STRING_START - 136))
            | (1ULL << (ObjectiveCParser::HEX_LITERAL - 136))
            | (1ULL << (ObjectiveCParser::OCTAL_LITERAL - 136))
            | (1ULL << (ObjectiveCParser::BINARY_LITERAL - 136))
            | (1ULL << (ObjectiveCParser::DECIMAL_LITERAL - 136))
            | (1ULL << (ObjectiveCParser::FLOATING_POINT_LITERAL - 136)))) != 0)) {
            setState(1543);
            dynamic_cast<ExpressionContext *>(_localctx)->trueExpression = expression(0);
          }
          setState(1546);
          match(ObjectiveCParser::COLON);
          setState(1547);
          dynamic_cast<ExpressionContext *>(_localctx)->falseExpression = expression(4);
          break;
        }

        } 
      }
      setState(1552);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 200, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AssignmentOperatorContext ------------------------------------------------------------------

ObjectiveCParser::AssignmentOperatorContext::AssignmentOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::AssignmentOperatorContext::ASSIGNMENT() {
  return getToken(ObjectiveCParser::ASSIGNMENT, 0);
}

tree::TerminalNode* ObjectiveCParser::AssignmentOperatorContext::MUL_ASSIGN() {
  return getToken(ObjectiveCParser::MUL_ASSIGN, 0);
}

tree::TerminalNode* ObjectiveCParser::AssignmentOperatorContext::DIV_ASSIGN() {
  return getToken(ObjectiveCParser::DIV_ASSIGN, 0);
}

tree::TerminalNode* ObjectiveCParser::AssignmentOperatorContext::MOD_ASSIGN() {
  return getToken(ObjectiveCParser::MOD_ASSIGN, 0);
}

tree::TerminalNode* ObjectiveCParser::AssignmentOperatorContext::ADD_ASSIGN() {
  return getToken(ObjectiveCParser::ADD_ASSIGN, 0);
}

tree::TerminalNode* ObjectiveCParser::AssignmentOperatorContext::SUB_ASSIGN() {
  return getToken(ObjectiveCParser::SUB_ASSIGN, 0);
}

tree::TerminalNode* ObjectiveCParser::AssignmentOperatorContext::LSHIFT_ASSIGN() {
  return getToken(ObjectiveCParser::LSHIFT_ASSIGN, 0);
}

tree::TerminalNode* ObjectiveCParser::AssignmentOperatorContext::RSHIFT_ASSIGN() {
  return getToken(ObjectiveCParser::RSHIFT_ASSIGN, 0);
}

tree::TerminalNode* ObjectiveCParser::AssignmentOperatorContext::AND_ASSIGN() {
  return getToken(ObjectiveCParser::AND_ASSIGN, 0);
}

tree::TerminalNode* ObjectiveCParser::AssignmentOperatorContext::XOR_ASSIGN() {
  return getToken(ObjectiveCParser::XOR_ASSIGN, 0);
}

tree::TerminalNode* ObjectiveCParser::AssignmentOperatorContext::OR_ASSIGN() {
  return getToken(ObjectiveCParser::OR_ASSIGN, 0);
}


size_t ObjectiveCParser::AssignmentOperatorContext::getRuleIndex() const {
  return ObjectiveCParser::RuleAssignmentOperator;
}

void ObjectiveCParser::AssignmentOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentOperator(this);
}

void ObjectiveCParser::AssignmentOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentOperator(this);
}


antlrcpp::Any ObjectiveCParser::AssignmentOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitAssignmentOperator(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::AssignmentOperatorContext* ObjectiveCParser::assignmentOperator() {
  AssignmentOperatorContext *_localctx = _tracker.createInstance<AssignmentOperatorContext>(_ctx, getState());
  enterRule(_localctx, 260, ObjectiveCParser::RuleAssignmentOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1553);
    _la = _input->LA(1);
    if (!(((((_la - 137) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 137)) & ((1ULL << (ObjectiveCParser::ASSIGNMENT - 137))
      | (1ULL << (ObjectiveCParser::ADD_ASSIGN - 137))
      | (1ULL << (ObjectiveCParser::SUB_ASSIGN - 137))
      | (1ULL << (ObjectiveCParser::MUL_ASSIGN - 137))
      | (1ULL << (ObjectiveCParser::DIV_ASSIGN - 137))
      | (1ULL << (ObjectiveCParser::AND_ASSIGN - 137))
      | (1ULL << (ObjectiveCParser::OR_ASSIGN - 137))
      | (1ULL << (ObjectiveCParser::XOR_ASSIGN - 137))
      | (1ULL << (ObjectiveCParser::MOD_ASSIGN - 137))
      | (1ULL << (ObjectiveCParser::LSHIFT_ASSIGN - 137))
      | (1ULL << (ObjectiveCParser::RSHIFT_ASSIGN - 137)))) != 0))) {
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

//----------------- CastExpressionContext ------------------------------------------------------------------

ObjectiveCParser::CastExpressionContext::CastExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::UnaryExpressionContext* ObjectiveCParser::CastExpressionContext::unaryExpression() {
  return getRuleContext<ObjectiveCParser::UnaryExpressionContext>(0);
}

tree::TerminalNode* ObjectiveCParser::CastExpressionContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

ObjectiveCParser::TypeNameContext* ObjectiveCParser::CastExpressionContext::typeName() {
  return getRuleContext<ObjectiveCParser::TypeNameContext>(0);
}

tree::TerminalNode* ObjectiveCParser::CastExpressionContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

ObjectiveCParser::CastExpressionContext* ObjectiveCParser::CastExpressionContext::castExpression() {
  return getRuleContext<ObjectiveCParser::CastExpressionContext>(0);
}

ObjectiveCParser::InitializerContext* ObjectiveCParser::CastExpressionContext::initializer() {
  return getRuleContext<ObjectiveCParser::InitializerContext>(0);
}


size_t ObjectiveCParser::CastExpressionContext::getRuleIndex() const {
  return ObjectiveCParser::RuleCastExpression;
}

void ObjectiveCParser::CastExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCastExpression(this);
}

void ObjectiveCParser::CastExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCastExpression(this);
}


antlrcpp::Any ObjectiveCParser::CastExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitCastExpression(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::CastExpressionContext* ObjectiveCParser::castExpression() {
  CastExpressionContext *_localctx = _tracker.createInstance<CastExpressionContext>(_ctx, getState());
  enterRule(_localctx, 262, ObjectiveCParser::RuleCastExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1564);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 202, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1555);
      unaryExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1556);
      match(ObjectiveCParser::LP);
      setState(1557);
      typeName();
      setState(1558);
      match(ObjectiveCParser::RP);
      setState(1562);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 201, _ctx)) {
      case 1: {
        setState(1560);
        castExpression();
        break;
      }

      case 2: {
        setState(1561);
        initializer();
        break;
      }

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

//----------------- InitializerContext ------------------------------------------------------------------

ObjectiveCParser::InitializerContext::InitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::ExpressionContext* ObjectiveCParser::InitializerContext::expression() {
  return getRuleContext<ObjectiveCParser::ExpressionContext>(0);
}

ObjectiveCParser::ArrayInitializerContext* ObjectiveCParser::InitializerContext::arrayInitializer() {
  return getRuleContext<ObjectiveCParser::ArrayInitializerContext>(0);
}

ObjectiveCParser::StructInitializerContext* ObjectiveCParser::InitializerContext::structInitializer() {
  return getRuleContext<ObjectiveCParser::StructInitializerContext>(0);
}


size_t ObjectiveCParser::InitializerContext::getRuleIndex() const {
  return ObjectiveCParser::RuleInitializer;
}

void ObjectiveCParser::InitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer(this);
}

void ObjectiveCParser::InitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer(this);
}


antlrcpp::Any ObjectiveCParser::InitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitInitializer(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::InitializerContext* ObjectiveCParser::initializer() {
  InitializerContext *_localctx = _tracker.createInstance<InitializerContext>(_ctx, getState());
  enterRule(_localctx, 264, ObjectiveCParser::RuleInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1569);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 203, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1566);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1567);
      arrayInitializer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1568);
      structInitializer();
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

//----------------- ConstantExpressionContext ------------------------------------------------------------------

ObjectiveCParser::ConstantExpressionContext::ConstantExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::ConstantExpressionContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}

ObjectiveCParser::ConstantContext* ObjectiveCParser::ConstantExpressionContext::constant() {
  return getRuleContext<ObjectiveCParser::ConstantContext>(0);
}


size_t ObjectiveCParser::ConstantExpressionContext::getRuleIndex() const {
  return ObjectiveCParser::RuleConstantExpression;
}

void ObjectiveCParser::ConstantExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantExpression(this);
}

void ObjectiveCParser::ConstantExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantExpression(this);
}


antlrcpp::Any ObjectiveCParser::ConstantExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitConstantExpression(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ConstantExpressionContext* ObjectiveCParser::constantExpression() {
  ConstantExpressionContext *_localctx = _tracker.createInstance<ConstantExpressionContext>(_ctx, getState());
  enterRule(_localctx, 266, ObjectiveCParser::RuleConstantExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1573);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ObjectiveCParser::BOOL:
      case ObjectiveCParser::Class:
      case ObjectiveCParser::BYCOPY:
      case ObjectiveCParser::BYREF:
      case ObjectiveCParser::ID:
      case ObjectiveCParser::IMP:
      case ObjectiveCParser::IN:
      case ObjectiveCParser::INOUT:
      case ObjectiveCParser::ONEWAY:
      case ObjectiveCParser::OUT:
      case ObjectiveCParser::PROTOCOL_:
      case ObjectiveCParser::SEL:
      case ObjectiveCParser::SELF:
      case ObjectiveCParser::SUPER:
      case ObjectiveCParser::ATOMIC:
      case ObjectiveCParser::NONATOMIC:
      case ObjectiveCParser::RETAIN:
      case ObjectiveCParser::AUTORELEASING_QUALIFIER:
      case ObjectiveCParser::BLOCK:
      case ObjectiveCParser::BRIDGE_RETAINED:
      case ObjectiveCParser::BRIDGE_TRANSFER:
      case ObjectiveCParser::COVARIANT:
      case ObjectiveCParser::CONTRAVARIANT:
      case ObjectiveCParser::DEPRECATED:
      case ObjectiveCParser::KINDOF:
      case ObjectiveCParser::UNUSED:
      case ObjectiveCParser::NULL_UNSPECIFIED:
      case ObjectiveCParser::NULLABLE:
      case ObjectiveCParser::NONNULL:
      case ObjectiveCParser::NULL_RESETTABLE:
      case ObjectiveCParser::NS_INLINE:
      case ObjectiveCParser::NS_ENUM:
      case ObjectiveCParser::NS_OPTIONS:
      case ObjectiveCParser::ASSIGN:
      case ObjectiveCParser::COPY:
      case ObjectiveCParser::GETTER:
      case ObjectiveCParser::SETTER:
      case ObjectiveCParser::STRONG:
      case ObjectiveCParser::READONLY:
      case ObjectiveCParser::READWRITE:
      case ObjectiveCParser::WEAK:
      case ObjectiveCParser::UNSAFE_UNRETAINED:
      case ObjectiveCParser::IB_OUTLET:
      case ObjectiveCParser::IB_OUTLET_COLLECTION:
      case ObjectiveCParser::IB_INSPECTABLE:
      case ObjectiveCParser::IB_DESIGNABLE:
      case ObjectiveCParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(1571);
        identifier();
        break;
      }

      case ObjectiveCParser::TRUE:
      case ObjectiveCParser::FALSE:
      case ObjectiveCParser::NIL:
      case ObjectiveCParser::NO:
      case ObjectiveCParser::NULL_:
      case ObjectiveCParser::YES:
      case ObjectiveCParser::ADD:
      case ObjectiveCParser::SUB:
      case ObjectiveCParser::CHARACTER_LITERAL:
      case ObjectiveCParser::HEX_LITERAL:
      case ObjectiveCParser::OCTAL_LITERAL:
      case ObjectiveCParser::BINARY_LITERAL:
      case ObjectiveCParser::DECIMAL_LITERAL:
      case ObjectiveCParser::FLOATING_POINT_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(1572);
        constant();
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

//----------------- UnaryExpressionContext ------------------------------------------------------------------

ObjectiveCParser::UnaryExpressionContext::UnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::PostfixExpressionContext* ObjectiveCParser::UnaryExpressionContext::postfixExpression() {
  return getRuleContext<ObjectiveCParser::PostfixExpressionContext>(0);
}

tree::TerminalNode* ObjectiveCParser::UnaryExpressionContext::SIZEOF() {
  return getToken(ObjectiveCParser::SIZEOF, 0);
}

ObjectiveCParser::UnaryExpressionContext* ObjectiveCParser::UnaryExpressionContext::unaryExpression() {
  return getRuleContext<ObjectiveCParser::UnaryExpressionContext>(0);
}

tree::TerminalNode* ObjectiveCParser::UnaryExpressionContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

ObjectiveCParser::TypeSpecifierContext* ObjectiveCParser::UnaryExpressionContext::typeSpecifier() {
  return getRuleContext<ObjectiveCParser::TypeSpecifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::UnaryExpressionContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

tree::TerminalNode* ObjectiveCParser::UnaryExpressionContext::INC() {
  return getToken(ObjectiveCParser::INC, 0);
}

tree::TerminalNode* ObjectiveCParser::UnaryExpressionContext::DEC() {
  return getToken(ObjectiveCParser::DEC, 0);
}

ObjectiveCParser::UnaryOperatorContext* ObjectiveCParser::UnaryExpressionContext::unaryOperator() {
  return getRuleContext<ObjectiveCParser::UnaryOperatorContext>(0);
}

ObjectiveCParser::CastExpressionContext* ObjectiveCParser::UnaryExpressionContext::castExpression() {
  return getRuleContext<ObjectiveCParser::CastExpressionContext>(0);
}


size_t ObjectiveCParser::UnaryExpressionContext::getRuleIndex() const {
  return ObjectiveCParser::RuleUnaryExpression;
}

void ObjectiveCParser::UnaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpression(this);
}

void ObjectiveCParser::UnaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpression(this);
}


antlrcpp::Any ObjectiveCParser::UnaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitUnaryExpression(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::UnaryExpressionContext* ObjectiveCParser::unaryExpression() {
  UnaryExpressionContext *_localctx = _tracker.createInstance<UnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 268, ObjectiveCParser::RuleUnaryExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1589);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 206, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1575);
      postfixExpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1576);
      match(ObjectiveCParser::SIZEOF);
      setState(1582);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 205, _ctx)) {
      case 1: {
        setState(1577);
        unaryExpression();
        break;
      }

      case 2: {
        setState(1578);
        match(ObjectiveCParser::LP);
        setState(1579);
        typeSpecifier();
        setState(1580);
        match(ObjectiveCParser::RP);
        break;
      }

      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1584);
      dynamic_cast<UnaryExpressionContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == ObjectiveCParser::INC

      || _la == ObjectiveCParser::DEC)) {
        dynamic_cast<UnaryExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(1585);
      unaryExpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1586);
      unaryOperator();
      setState(1587);
      castExpression();
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

//----------------- UnaryOperatorContext ------------------------------------------------------------------

ObjectiveCParser::UnaryOperatorContext::UnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::UnaryOperatorContext::BITAND() {
  return getToken(ObjectiveCParser::BITAND, 0);
}

tree::TerminalNode* ObjectiveCParser::UnaryOperatorContext::MUL() {
  return getToken(ObjectiveCParser::MUL, 0);
}

tree::TerminalNode* ObjectiveCParser::UnaryOperatorContext::ADD() {
  return getToken(ObjectiveCParser::ADD, 0);
}

tree::TerminalNode* ObjectiveCParser::UnaryOperatorContext::SUB() {
  return getToken(ObjectiveCParser::SUB, 0);
}

tree::TerminalNode* ObjectiveCParser::UnaryOperatorContext::TILDE() {
  return getToken(ObjectiveCParser::TILDE, 0);
}

tree::TerminalNode* ObjectiveCParser::UnaryOperatorContext::BANG() {
  return getToken(ObjectiveCParser::BANG, 0);
}


size_t ObjectiveCParser::UnaryOperatorContext::getRuleIndex() const {
  return ObjectiveCParser::RuleUnaryOperator;
}

void ObjectiveCParser::UnaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryOperator(this);
}

void ObjectiveCParser::UnaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryOperator(this);
}


antlrcpp::Any ObjectiveCParser::UnaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitUnaryOperator(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::UnaryOperatorContext* ObjectiveCParser::unaryOperator() {
  UnaryOperatorContext *_localctx = _tracker.createInstance<UnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 270, ObjectiveCParser::RuleUnaryOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1591);
    _la = _input->LA(1);
    if (!(((((_la - 140) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 140)) & ((1ULL << (ObjectiveCParser::BANG - 140))
      | (1ULL << (ObjectiveCParser::TILDE - 140))
      | (1ULL << (ObjectiveCParser::ADD - 140))
      | (1ULL << (ObjectiveCParser::SUB - 140))
      | (1ULL << (ObjectiveCParser::MUL - 140))
      | (1ULL << (ObjectiveCParser::BITAND - 140)))) != 0))) {
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

//----------------- PostfixExpressionContext ------------------------------------------------------------------

ObjectiveCParser::PostfixExpressionContext::PostfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::PrimaryExpressionContext* ObjectiveCParser::PostfixExpressionContext::primaryExpression() {
  return getRuleContext<ObjectiveCParser::PrimaryExpressionContext>(0);
}

std::vector<ObjectiveCParser::PostfixContext *> ObjectiveCParser::PostfixExpressionContext::postfix() {
  return getRuleContexts<ObjectiveCParser::PostfixContext>();
}

ObjectiveCParser::PostfixContext* ObjectiveCParser::PostfixExpressionContext::postfix(size_t i) {
  return getRuleContext<ObjectiveCParser::PostfixContext>(i);
}

ObjectiveCParser::PostfixExpressionContext* ObjectiveCParser::PostfixExpressionContext::postfixExpression() {
  return getRuleContext<ObjectiveCParser::PostfixExpressionContext>(0);
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::PostfixExpressionContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}

tree::TerminalNode* ObjectiveCParser::PostfixExpressionContext::DOT() {
  return getToken(ObjectiveCParser::DOT, 0);
}

tree::TerminalNode* ObjectiveCParser::PostfixExpressionContext::STRUCTACCESS() {
  return getToken(ObjectiveCParser::STRUCTACCESS, 0);
}


size_t ObjectiveCParser::PostfixExpressionContext::getRuleIndex() const {
  return ObjectiveCParser::RulePostfixExpression;
}

void ObjectiveCParser::PostfixExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixExpression(this);
}

void ObjectiveCParser::PostfixExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixExpression(this);
}


antlrcpp::Any ObjectiveCParser::PostfixExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitPostfixExpression(this);
  else
    return visitor->visitChildren(this);
}


ObjectiveCParser::PostfixExpressionContext* ObjectiveCParser::postfixExpression() {
   return postfixExpression(0);
}

ObjectiveCParser::PostfixExpressionContext* ObjectiveCParser::postfixExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ObjectiveCParser::PostfixExpressionContext *_localctx = _tracker.createInstance<PostfixExpressionContext>(_ctx, parentState);
  ObjectiveCParser::PostfixExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 272;
  enterRecursionRule(_localctx, 272, ObjectiveCParser::RulePostfixExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1594);
    primaryExpression();
    setState(1598);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 207, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1595);
        postfix(); 
      }
      setState(1600);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 207, _ctx);
    }
    _ctx->stop = _input->LT(-1);
    setState(1612);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 209, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
        setState(1601);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1602);
        _la = _input->LA(1);
        if (!(_la == ObjectiveCParser::DOT

        || _la == ObjectiveCParser::STRUCTACCESS)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(1603);
        identifier();
        setState(1607);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 208, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(1604);
            postfix(); 
          }
          setState(1609);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 208, _ctx);
        } 
      }
      setState(1614);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 209, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PostfixContext ------------------------------------------------------------------

ObjectiveCParser::PostfixContext::PostfixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::PostfixContext::LBRACK() {
  return getToken(ObjectiveCParser::LBRACK, 0);
}

ObjectiveCParser::ExpressionContext* ObjectiveCParser::PostfixContext::expression() {
  return getRuleContext<ObjectiveCParser::ExpressionContext>(0);
}

tree::TerminalNode* ObjectiveCParser::PostfixContext::RBRACK() {
  return getToken(ObjectiveCParser::RBRACK, 0);
}

tree::TerminalNode* ObjectiveCParser::PostfixContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::PostfixContext::RP() {
  return getTokens(ObjectiveCParser::RP);
}

tree::TerminalNode* ObjectiveCParser::PostfixContext::RP(size_t i) {
  return getToken(ObjectiveCParser::RP, i);
}

ObjectiveCParser::ArgumentExpressionListContext* ObjectiveCParser::PostfixContext::argumentExpressionList() {
  return getRuleContext<ObjectiveCParser::ArgumentExpressionListContext>(0);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::PostfixContext::COMMA() {
  return getTokens(ObjectiveCParser::COMMA);
}

tree::TerminalNode* ObjectiveCParser::PostfixContext::COMMA(size_t i) {
  return getToken(ObjectiveCParser::COMMA, i);
}

tree::TerminalNode* ObjectiveCParser::PostfixContext::INC() {
  return getToken(ObjectiveCParser::INC, 0);
}

tree::TerminalNode* ObjectiveCParser::PostfixContext::DEC() {
  return getToken(ObjectiveCParser::DEC, 0);
}


size_t ObjectiveCParser::PostfixContext::getRuleIndex() const {
  return ObjectiveCParser::RulePostfix;
}

void ObjectiveCParser::PostfixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfix(this);
}

void ObjectiveCParser::PostfixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfix(this);
}


antlrcpp::Any ObjectiveCParser::PostfixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitPostfix(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::PostfixContext* ObjectiveCParser::postfix() {
  PostfixContext *_localctx = _tracker.createInstance<PostfixContext>(_ctx, getState());
  enterRule(_localctx, 274, ObjectiveCParser::RulePostfix);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1633);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 213, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1615);
      match(ObjectiveCParser::LBRACK);
      setState(1616);
      expression(0);
      setState(1617);
      match(ObjectiveCParser::RBRACK);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1619);
      match(ObjectiveCParser::LP);
      setState(1621);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ObjectiveCParser::CHAR)
        | (1ULL << ObjectiveCParser::DOUBLE)
        | (1ULL << ObjectiveCParser::ENUM)
        | (1ULL << ObjectiveCParser::FLOAT)
        | (1ULL << ObjectiveCParser::INT)
        | (1ULL << ObjectiveCParser::LONG)
        | (1ULL << ObjectiveCParser::SHORT)
        | (1ULL << ObjectiveCParser::SIGNED)
        | (1ULL << ObjectiveCParser::SIZEOF)
        | (1ULL << ObjectiveCParser::STRUCT)
        | (1ULL << ObjectiveCParser::UNION)
        | (1ULL << ObjectiveCParser::UNSIGNED)
        | (1ULL << ObjectiveCParser::VOID)
        | (1ULL << ObjectiveCParser::TRUE)
        | (1ULL << ObjectiveCParser::FALSE)
        | (1ULL << ObjectiveCParser::BOOL)
        | (1ULL << ObjectiveCParser::Class)
        | (1ULL << ObjectiveCParser::BYCOPY)
        | (1ULL << ObjectiveCParser::BYREF)
        | (1ULL << ObjectiveCParser::ID)
        | (1ULL << ObjectiveCParser::IMP)
        | (1ULL << ObjectiveCParser::IN)
        | (1ULL << ObjectiveCParser::INOUT)
        | (1ULL << ObjectiveCParser::NIL)
        | (1ULL << ObjectiveCParser::NO)
        | (1ULL << ObjectiveCParser::NULL_)
        | (1ULL << ObjectiveCParser::ONEWAY)
        | (1ULL << ObjectiveCParser::OUT)
        | (1ULL << ObjectiveCParser::PROTOCOL_)
        | (1ULL << ObjectiveCParser::SEL)
        | (1ULL << ObjectiveCParser::SELF)
        | (1ULL << ObjectiveCParser::SUPER)
        | (1ULL << ObjectiveCParser::YES)
        | (1ULL << ObjectiveCParser::ENCODE))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (ObjectiveCParser::PROTOCOL - 69))
        | (1ULL << (ObjectiveCParser::SELECTOR - 69))
        | (1ULL << (ObjectiveCParser::ATOMIC - 69))
        | (1ULL << (ObjectiveCParser::NONATOMIC - 69))
        | (1ULL << (ObjectiveCParser::RETAIN - 69))
        | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 69))
        | (1ULL << (ObjectiveCParser::BLOCK - 69))
        | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 69))
        | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 69))
        | (1ULL << (ObjectiveCParser::COVARIANT - 69))
        | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 69))
        | (1ULL << (ObjectiveCParser::DEPRECATED - 69))
        | (1ULL << (ObjectiveCParser::KINDOF - 69))
        | (1ULL << (ObjectiveCParser::TYPEOF - 69))
        | (1ULL << (ObjectiveCParser::UNUSED - 69))
        | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 69))
        | (1ULL << (ObjectiveCParser::NULLABLE - 69))
        | (1ULL << (ObjectiveCParser::NONNULL - 69))
        | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 69))
        | (1ULL << (ObjectiveCParser::NS_INLINE - 69))
        | (1ULL << (ObjectiveCParser::NS_ENUM - 69))
        | (1ULL << (ObjectiveCParser::NS_OPTIONS - 69))
        | (1ULL << (ObjectiveCParser::ASSIGN - 69))
        | (1ULL << (ObjectiveCParser::COPY - 69))
        | (1ULL << (ObjectiveCParser::GETTER - 69))
        | (1ULL << (ObjectiveCParser::SETTER - 69))
        | (1ULL << (ObjectiveCParser::STRONG - 69))
        | (1ULL << (ObjectiveCParser::READONLY - 69))
        | (1ULL << (ObjectiveCParser::READWRITE - 69))
        | (1ULL << (ObjectiveCParser::WEAK - 69))
        | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 69))
        | (1ULL << (ObjectiveCParser::IB_OUTLET - 69))
        | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 69))
        | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 69))
        | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 69))
        | (1ULL << (ObjectiveCParser::IDENTIFIER - 69))
        | (1ULL << (ObjectiveCParser::LP - 69))
        | (1ULL << (ObjectiveCParser::LBRACK - 69)))) != 0) || ((((_la - 136) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 136)) & ((1ULL << (ObjectiveCParser::AT - 136))
        | (1ULL << (ObjectiveCParser::BANG - 136))
        | (1ULL << (ObjectiveCParser::TILDE - 136))
        | (1ULL << (ObjectiveCParser::INC - 136))
        | (1ULL << (ObjectiveCParser::DEC - 136))
        | (1ULL << (ObjectiveCParser::ADD - 136))
        | (1ULL << (ObjectiveCParser::SUB - 136))
        | (1ULL << (ObjectiveCParser::MUL - 136))
        | (1ULL << (ObjectiveCParser::BITAND - 136))
        | (1ULL << (ObjectiveCParser::BITXOR - 136))
        | (1ULL << (ObjectiveCParser::CHARACTER_LITERAL - 136))
        | (1ULL << (ObjectiveCParser::STRING_START - 136))
        | (1ULL << (ObjectiveCParser::HEX_LITERAL - 136))
        | (1ULL << (ObjectiveCParser::OCTAL_LITERAL - 136))
        | (1ULL << (ObjectiveCParser::BINARY_LITERAL - 136))
        | (1ULL << (ObjectiveCParser::DECIMAL_LITERAL - 136))
        | (1ULL << (ObjectiveCParser::FLOATING_POINT_LITERAL - 136)))) != 0)) {
        setState(1620);
        argumentExpressionList();
      }
      setState(1623);
      match(ObjectiveCParser::RP);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1624);
      match(ObjectiveCParser::LP);
      setState(1627); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(1627);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 211, _ctx)) {
        case 1: {
          setState(1625);
          match(ObjectiveCParser::COMMA);
          break;
        }

        case 2: {
          setState(1626);
          dynamic_cast<PostfixContext *>(_localctx)->_tset3106 = _input->LT(1);
          _la = _input->LA(1);
          if (_la == 0 || _la == Token::EOF || (_la == ObjectiveCParser::RP)) {
            dynamic_cast<PostfixContext *>(_localctx)->_tset3106 = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          dynamic_cast<PostfixContext *>(_localctx)->macroArguments.push_back(dynamic_cast<PostfixContext *>(_localctx)->_tset3106);
          break;
        }

        }
        setState(1629); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ObjectiveCParser::AUTO)
        | (1ULL << ObjectiveCParser::BREAK)
        | (1ULL << ObjectiveCParser::CASE)
        | (1ULL << ObjectiveCParser::CHAR)
        | (1ULL << ObjectiveCParser::CONST)
        | (1ULL << ObjectiveCParser::CONTINUE)
        | (1ULL << ObjectiveCParser::DEFAULT)
        | (1ULL << ObjectiveCParser::DO)
        | (1ULL << ObjectiveCParser::DOUBLE)
        | (1ULL << ObjectiveCParser::ELSE)
        | (1ULL << ObjectiveCParser::ENUM)
        | (1ULL << ObjectiveCParser::EXTERN)
        | (1ULL << ObjectiveCParser::FLOAT)
        | (1ULL << ObjectiveCParser::FOR)
        | (1ULL << ObjectiveCParser::GOTO)
        | (1ULL << ObjectiveCParser::IF)
        | (1ULL << ObjectiveCParser::INLINE)
        | (1ULL << ObjectiveCParser::INT)
        | (1ULL << ObjectiveCParser::LONG)
        | (1ULL << ObjectiveCParser::REGISTER)
        | (1ULL << ObjectiveCParser::RESTRICT)
        | (1ULL << ObjectiveCParser::RETURN)
        | (1ULL << ObjectiveCParser::SHORT)
        | (1ULL << ObjectiveCParser::SIGNED)
        | (1ULL << ObjectiveCParser::SIZEOF)
        | (1ULL << ObjectiveCParser::STATIC)
        | (1ULL << ObjectiveCParser::STRUCT)
        | (1ULL << ObjectiveCParser::SWITCH)
        | (1ULL << ObjectiveCParser::TYPEDEF)
        | (1ULL << ObjectiveCParser::UNION)
        | (1ULL << ObjectiveCParser::UNSIGNED)
        | (1ULL << ObjectiveCParser::VOID)
        | (1ULL << ObjectiveCParser::VOLATILE)
        | (1ULL << ObjectiveCParser::WHILE)
        | (1ULL << ObjectiveCParser::BOOL_)
        | (1ULL << ObjectiveCParser::COMPLEX)
        | (1ULL << ObjectiveCParser::IMAGINERY)
        | (1ULL << ObjectiveCParser::TRUE)
        | (1ULL << ObjectiveCParser::FALSE)
        | (1ULL << ObjectiveCParser::BOOL)
        | (1ULL << ObjectiveCParser::Class)
        | (1ULL << ObjectiveCParser::BYCOPY)
        | (1ULL << ObjectiveCParser::BYREF)
        | (1ULL << ObjectiveCParser::ID)
        | (1ULL << ObjectiveCParser::IMP)
        | (1ULL << ObjectiveCParser::IN)
        | (1ULL << ObjectiveCParser::INOUT)
        | (1ULL << ObjectiveCParser::NIL)
        | (1ULL << ObjectiveCParser::NO)
        | (1ULL << ObjectiveCParser::NULL_)
        | (1ULL << ObjectiveCParser::ONEWAY)
        | (1ULL << ObjectiveCParser::OUT)
        | (1ULL << ObjectiveCParser::PROTOCOL_)
        | (1ULL << ObjectiveCParser::SEL)
        | (1ULL << ObjectiveCParser::SELF)
        | (1ULL << ObjectiveCParser::SUPER)
        | (1ULL << ObjectiveCParser::YES)
        | (1ULL << ObjectiveCParser::AUTORELEASEPOOL)
        | (1ULL << ObjectiveCParser::CATCH)
        | (1ULL << ObjectiveCParser::CLASS)
        | (1ULL << ObjectiveCParser::DYNAMIC)
        | (1ULL << ObjectiveCParser::ENCODE)
        | (1ULL << ObjectiveCParser::END))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (ObjectiveCParser::FINALLY - 64))
        | (1ULL << (ObjectiveCParser::IMPLEMENTATION - 64))
        | (1ULL << (ObjectiveCParser::INTERFACE - 64))
        | (1ULL << (ObjectiveCParser::IMPORT - 64))
        | (1ULL << (ObjectiveCParser::PACKAGE - 64))
        | (1ULL << (ObjectiveCParser::PROTOCOL - 64))
        | (1ULL << (ObjectiveCParser::OPTIONAL - 64))
        | (1ULL << (ObjectiveCParser::PRIVATE - 64))
        | (1ULL << (ObjectiveCParser::PROPERTY - 64))
        | (1ULL << (ObjectiveCParser::PROTECTED - 64))
        | (1ULL << (ObjectiveCParser::PUBLIC - 64))
        | (1ULL << (ObjectiveCParser::REQUIRED - 64))
        | (1ULL << (ObjectiveCParser::SELECTOR - 64))
        | (1ULL << (ObjectiveCParser::SYNCHRONIZED - 64))
        | (1ULL << (ObjectiveCParser::SYNTHESIZE - 64))
        | (1ULL << (ObjectiveCParser::THROW - 64))
        | (1ULL << (ObjectiveCParser::TRY - 64))
        | (1ULL << (ObjectiveCParser::ATOMIC - 64))
        | (1ULL << (ObjectiveCParser::NONATOMIC - 64))
        | (1ULL << (ObjectiveCParser::RETAIN - 64))
        | (1ULL << (ObjectiveCParser::ATTRIBUTE - 64))
        | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 64))
        | (1ULL << (ObjectiveCParser::BLOCK - 64))
        | (1ULL << (ObjectiveCParser::BRIDGE - 64))
        | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 64))
        | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 64))
        | (1ULL << (ObjectiveCParser::COVARIANT - 64))
        | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 64))
        | (1ULL << (ObjectiveCParser::DEPRECATED - 64))
        | (1ULL << (ObjectiveCParser::KINDOF - 64))
        | (1ULL << (ObjectiveCParser::STRONG_QUALIFIER - 64))
        | (1ULL << (ObjectiveCParser::TYPEOF - 64))
        | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED_QUALIFIER - 64))
        | (1ULL << (ObjectiveCParser::UNUSED - 64))
        | (1ULL << (ObjectiveCParser::WEAK_QUALIFIER - 64))
        | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 64))
        | (1ULL << (ObjectiveCParser::NULLABLE - 64))
        | (1ULL << (ObjectiveCParser::NONNULL - 64))
        | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 64))
        | (1ULL << (ObjectiveCParser::NS_INLINE - 64))
        | (1ULL << (ObjectiveCParser::NS_ENUM - 64))
        | (1ULL << (ObjectiveCParser::NS_OPTIONS - 64))
        | (1ULL << (ObjectiveCParser::ASSIGN - 64))
        | (1ULL << (ObjectiveCParser::COPY - 64))
        | (1ULL << (ObjectiveCParser::GETTER - 64))
        | (1ULL << (ObjectiveCParser::SETTER - 64))
        | (1ULL << (ObjectiveCParser::STRONG - 64))
        | (1ULL << (ObjectiveCParser::READONLY - 64))
        | (1ULL << (ObjectiveCParser::READWRITE - 64))
        | (1ULL << (ObjectiveCParser::WEAK - 64))
        | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 64))
        | (1ULL << (ObjectiveCParser::IB_OUTLET - 64))
        | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 64))
        | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 64))
        | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 64))
        | (1ULL << (ObjectiveCParser::NS_ASSUME_NONNULL_BEGIN - 64))
        | (1ULL << (ObjectiveCParser::NS_ASSUME_NONNULL_END - 64))
        | (1ULL << (ObjectiveCParser::EXTERN_SUFFIX - 64))
        | (1ULL << (ObjectiveCParser::IOS_SUFFIX - 64))
        | (1ULL << (ObjectiveCParser::MAC_SUFFIX - 64))
        | (1ULL << (ObjectiveCParser::TVOS_PROHIBITED - 64))
        | (1ULL << (ObjectiveCParser::IDENTIFIER - 64))
        | (1ULL << (ObjectiveCParser::LP - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (ObjectiveCParser::LBRACE - 128))
        | (1ULL << (ObjectiveCParser::RBRACE - 128))
        | (1ULL << (ObjectiveCParser::LBRACK - 128))
        | (1ULL << (ObjectiveCParser::RBRACK - 128))
        | (1ULL << (ObjectiveCParser::SEMI - 128))
        | (1ULL << (ObjectiveCParser::COMMA - 128))
        | (1ULL << (ObjectiveCParser::DOT - 128))
        | (1ULL << (ObjectiveCParser::STRUCTACCESS - 128))
        | (1ULL << (ObjectiveCParser::AT - 128))
        | (1ULL << (ObjectiveCParser::ASSIGNMENT - 128))
        | (1ULL << (ObjectiveCParser::GT - 128))
        | (1ULL << (ObjectiveCParser::LT - 128))
        | (1ULL << (ObjectiveCParser::BANG - 128))
        | (1ULL << (ObjectiveCParser::TILDE - 128))
        | (1ULL << (ObjectiveCParser::QUESTION - 128))
        | (1ULL << (ObjectiveCParser::COLON - 128))
        | (1ULL << (ObjectiveCParser::EQUAL - 128))
        | (1ULL << (ObjectiveCParser::LE - 128))
        | (1ULL << (ObjectiveCParser::GE - 128))
        | (1ULL << (ObjectiveCParser::NOTEQUAL - 128))
        | (1ULL << (ObjectiveCParser::AND - 128))
        | (1ULL << (ObjectiveCParser::OR - 128))
        | (1ULL << (ObjectiveCParser::INC - 128))
        | (1ULL << (ObjectiveCParser::DEC - 128))
        | (1ULL << (ObjectiveCParser::ADD - 128))
        | (1ULL << (ObjectiveCParser::SUB - 128))
        | (1ULL << (ObjectiveCParser::MUL - 128))
        | (1ULL << (ObjectiveCParser::DIV - 128))
        | (1ULL << (ObjectiveCParser::BITAND - 128))
        | (1ULL << (ObjectiveCParser::BITOR - 128))
        | (1ULL << (ObjectiveCParser::BITXOR - 128))
        | (1ULL << (ObjectiveCParser::MOD - 128))
        | (1ULL << (ObjectiveCParser::ADD_ASSIGN - 128))
        | (1ULL << (ObjectiveCParser::SUB_ASSIGN - 128))
        | (1ULL << (ObjectiveCParser::MUL_ASSIGN - 128))
        | (1ULL << (ObjectiveCParser::DIV_ASSIGN - 128))
        | (1ULL << (ObjectiveCParser::AND_ASSIGN - 128))
        | (1ULL << (ObjectiveCParser::OR_ASSIGN - 128))
        | (1ULL << (ObjectiveCParser::XOR_ASSIGN - 128))
        | (1ULL << (ObjectiveCParser::MOD_ASSIGN - 128))
        | (1ULL << (ObjectiveCParser::LSHIFT_ASSIGN - 128))
        | (1ULL << (ObjectiveCParser::RSHIFT_ASSIGN - 128))
        | (1ULL << (ObjectiveCParser::ELIPSIS - 128))
        | (1ULL << (ObjectiveCParser::CHARACTER_LITERAL - 128))
        | (1ULL << (ObjectiveCParser::STRING_START - 128))
        | (1ULL << (ObjectiveCParser::HEX_LITERAL - 128))
        | (1ULL << (ObjectiveCParser::OCTAL_LITERAL - 128))
        | (1ULL << (ObjectiveCParser::BINARY_LITERAL - 128))
        | (1ULL << (ObjectiveCParser::DECIMAL_LITERAL - 128))
        | (1ULL << (ObjectiveCParser::FLOATING_POINT_LITERAL - 128))
        | (1ULL << (ObjectiveCParser::WS - 128))
        | (1ULL << (ObjectiveCParser::MULTI_COMMENT - 128))
        | (1ULL << (ObjectiveCParser::SINGLE_COMMENT - 128))
        | (1ULL << (ObjectiveCParser::BACKSLASH - 128))
        | (1ULL << (ObjectiveCParser::SHARP - 128))
        | (1ULL << (ObjectiveCParser::STRING_NEWLINE - 128))
        | (1ULL << (ObjectiveCParser::STRING_END - 128))
        | (1ULL << (ObjectiveCParser::STRING_VALUE - 128))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_IMPORT - 128))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_INCLUDE - 128))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_PRAGMA - 128))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_DEFINE - 128))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_DEFINED - 128))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_IF - 128)))) != 0) || ((((_la - 192) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 192)) & ((1ULL << (ObjectiveCParser::DIRECTIVE_ELIF - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_ELSE - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_UNDEF - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_IFDEF - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_IFNDEF - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_ENDIF - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_TRUE - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_FALSE - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_ERROR - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_WARNING - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_BANG - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_LP - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_RP - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_EQUAL - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_NOTEQUAL - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_AND - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_OR - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_LT - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_GT - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_LE - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_GE - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_STRING - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_ID - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_DECIMAL_LITERAL - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_FLOAT - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_NEWLINE - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_MULTI_COMMENT - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_SINGLE_COMMENT - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_BACKSLASH_NEWLINE - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_TEXT_NEWLINE - 192))
        | (1ULL << (ObjectiveCParser::DIRECTIVE_TEXT - 192)))) != 0));
      setState(1631);
      match(ObjectiveCParser::RP);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1632);
      dynamic_cast<PostfixContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == ObjectiveCParser::INC

      || _la == ObjectiveCParser::DEC)) {
        dynamic_cast<PostfixContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
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

//----------------- ArgumentExpressionListContext ------------------------------------------------------------------

ObjectiveCParser::ArgumentExpressionListContext::ArgumentExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ObjectiveCParser::ArgumentExpressionContext *> ObjectiveCParser::ArgumentExpressionListContext::argumentExpression() {
  return getRuleContexts<ObjectiveCParser::ArgumentExpressionContext>();
}

ObjectiveCParser::ArgumentExpressionContext* ObjectiveCParser::ArgumentExpressionListContext::argumentExpression(size_t i) {
  return getRuleContext<ObjectiveCParser::ArgumentExpressionContext>(i);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::ArgumentExpressionListContext::COMMA() {
  return getTokens(ObjectiveCParser::COMMA);
}

tree::TerminalNode* ObjectiveCParser::ArgumentExpressionListContext::COMMA(size_t i) {
  return getToken(ObjectiveCParser::COMMA, i);
}


size_t ObjectiveCParser::ArgumentExpressionListContext::getRuleIndex() const {
  return ObjectiveCParser::RuleArgumentExpressionList;
}

void ObjectiveCParser::ArgumentExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentExpressionList(this);
}

void ObjectiveCParser::ArgumentExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentExpressionList(this);
}


antlrcpp::Any ObjectiveCParser::ArgumentExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitArgumentExpressionList(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ArgumentExpressionListContext* ObjectiveCParser::argumentExpressionList() {
  ArgumentExpressionListContext *_localctx = _tracker.createInstance<ArgumentExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 276, ObjectiveCParser::RuleArgumentExpressionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1635);
    argumentExpression();
    setState(1640);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ObjectiveCParser::COMMA) {
      setState(1636);
      match(ObjectiveCParser::COMMA);
      setState(1637);
      argumentExpression();
      setState(1642);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentExpressionContext ------------------------------------------------------------------

ObjectiveCParser::ArgumentExpressionContext::ArgumentExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::ExpressionContext* ObjectiveCParser::ArgumentExpressionContext::expression() {
  return getRuleContext<ObjectiveCParser::ExpressionContext>(0);
}

ObjectiveCParser::TypeSpecifierContext* ObjectiveCParser::ArgumentExpressionContext::typeSpecifier() {
  return getRuleContext<ObjectiveCParser::TypeSpecifierContext>(0);
}


size_t ObjectiveCParser::ArgumentExpressionContext::getRuleIndex() const {
  return ObjectiveCParser::RuleArgumentExpression;
}

void ObjectiveCParser::ArgumentExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentExpression(this);
}

void ObjectiveCParser::ArgumentExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentExpression(this);
}


antlrcpp::Any ObjectiveCParser::ArgumentExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitArgumentExpression(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ArgumentExpressionContext* ObjectiveCParser::argumentExpression() {
  ArgumentExpressionContext *_localctx = _tracker.createInstance<ArgumentExpressionContext>(_ctx, getState());
  enterRule(_localctx, 278, ObjectiveCParser::RuleArgumentExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1645);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 215, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1643);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1644);
      typeSpecifier();
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

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

ObjectiveCParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::PrimaryExpressionContext::identifier() {
  return getRuleContext<ObjectiveCParser::IdentifierContext>(0);
}

ObjectiveCParser::ConstantContext* ObjectiveCParser::PrimaryExpressionContext::constant() {
  return getRuleContext<ObjectiveCParser::ConstantContext>(0);
}

ObjectiveCParser::StringLiteralContext* ObjectiveCParser::PrimaryExpressionContext::stringLiteral() {
  return getRuleContext<ObjectiveCParser::StringLiteralContext>(0);
}

tree::TerminalNode* ObjectiveCParser::PrimaryExpressionContext::LP() {
  return getToken(ObjectiveCParser::LP, 0);
}

ObjectiveCParser::ExpressionContext* ObjectiveCParser::PrimaryExpressionContext::expression() {
  return getRuleContext<ObjectiveCParser::ExpressionContext>(0);
}

tree::TerminalNode* ObjectiveCParser::PrimaryExpressionContext::RP() {
  return getToken(ObjectiveCParser::RP, 0);
}

ObjectiveCParser::MessageExpressionContext* ObjectiveCParser::PrimaryExpressionContext::messageExpression() {
  return getRuleContext<ObjectiveCParser::MessageExpressionContext>(0);
}

ObjectiveCParser::SelectorExpressionContext* ObjectiveCParser::PrimaryExpressionContext::selectorExpression() {
  return getRuleContext<ObjectiveCParser::SelectorExpressionContext>(0);
}

ObjectiveCParser::ProtocolExpressionContext* ObjectiveCParser::PrimaryExpressionContext::protocolExpression() {
  return getRuleContext<ObjectiveCParser::ProtocolExpressionContext>(0);
}

ObjectiveCParser::EncodeExpressionContext* ObjectiveCParser::PrimaryExpressionContext::encodeExpression() {
  return getRuleContext<ObjectiveCParser::EncodeExpressionContext>(0);
}

ObjectiveCParser::DictionaryExpressionContext* ObjectiveCParser::PrimaryExpressionContext::dictionaryExpression() {
  return getRuleContext<ObjectiveCParser::DictionaryExpressionContext>(0);
}

ObjectiveCParser::ArrayExpressionContext* ObjectiveCParser::PrimaryExpressionContext::arrayExpression() {
  return getRuleContext<ObjectiveCParser::ArrayExpressionContext>(0);
}

ObjectiveCParser::BoxExpressionContext* ObjectiveCParser::PrimaryExpressionContext::boxExpression() {
  return getRuleContext<ObjectiveCParser::BoxExpressionContext>(0);
}

ObjectiveCParser::BlockExpressionContext* ObjectiveCParser::PrimaryExpressionContext::blockExpression() {
  return getRuleContext<ObjectiveCParser::BlockExpressionContext>(0);
}


size_t ObjectiveCParser::PrimaryExpressionContext::getRuleIndex() const {
  return ObjectiveCParser::RulePrimaryExpression;
}

void ObjectiveCParser::PrimaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExpression(this);
}

void ObjectiveCParser::PrimaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExpression(this);
}


antlrcpp::Any ObjectiveCParser::PrimaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryExpression(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::PrimaryExpressionContext* ObjectiveCParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 280, ObjectiveCParser::RulePrimaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1662);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 216, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1647);
      identifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1648);
      constant();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1649);
      stringLiteral();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1650);
      match(ObjectiveCParser::LP);
      setState(1651);
      expression(0);
      setState(1652);
      match(ObjectiveCParser::RP);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1654);
      messageExpression();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1655);
      selectorExpression();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1656);
      protocolExpression();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1657);
      encodeExpression();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1658);
      dictionaryExpression();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1659);
      arrayExpression();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1660);
      boxExpression();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1661);
      blockExpression();
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

//----------------- ConstantContext ------------------------------------------------------------------

ObjectiveCParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::ConstantContext::HEX_LITERAL() {
  return getToken(ObjectiveCParser::HEX_LITERAL, 0);
}

tree::TerminalNode* ObjectiveCParser::ConstantContext::OCTAL_LITERAL() {
  return getToken(ObjectiveCParser::OCTAL_LITERAL, 0);
}

tree::TerminalNode* ObjectiveCParser::ConstantContext::BINARY_LITERAL() {
  return getToken(ObjectiveCParser::BINARY_LITERAL, 0);
}

tree::TerminalNode* ObjectiveCParser::ConstantContext::DECIMAL_LITERAL() {
  return getToken(ObjectiveCParser::DECIMAL_LITERAL, 0);
}

tree::TerminalNode* ObjectiveCParser::ConstantContext::ADD() {
  return getToken(ObjectiveCParser::ADD, 0);
}

tree::TerminalNode* ObjectiveCParser::ConstantContext::SUB() {
  return getToken(ObjectiveCParser::SUB, 0);
}

tree::TerminalNode* ObjectiveCParser::ConstantContext::FLOATING_POINT_LITERAL() {
  return getToken(ObjectiveCParser::FLOATING_POINT_LITERAL, 0);
}

tree::TerminalNode* ObjectiveCParser::ConstantContext::CHARACTER_LITERAL() {
  return getToken(ObjectiveCParser::CHARACTER_LITERAL, 0);
}

tree::TerminalNode* ObjectiveCParser::ConstantContext::NIL() {
  return getToken(ObjectiveCParser::NIL, 0);
}

tree::TerminalNode* ObjectiveCParser::ConstantContext::NULL_() {
  return getToken(ObjectiveCParser::NULL_, 0);
}

tree::TerminalNode* ObjectiveCParser::ConstantContext::YES() {
  return getToken(ObjectiveCParser::YES, 0);
}

tree::TerminalNode* ObjectiveCParser::ConstantContext::NO() {
  return getToken(ObjectiveCParser::NO, 0);
}

tree::TerminalNode* ObjectiveCParser::ConstantContext::TRUE() {
  return getToken(ObjectiveCParser::TRUE, 0);
}

tree::TerminalNode* ObjectiveCParser::ConstantContext::FALSE() {
  return getToken(ObjectiveCParser::FALSE, 0);
}


size_t ObjectiveCParser::ConstantContext::getRuleIndex() const {
  return ObjectiveCParser::RuleConstant;
}

void ObjectiveCParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}

void ObjectiveCParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}


antlrcpp::Any ObjectiveCParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::ConstantContext* ObjectiveCParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 282, ObjectiveCParser::RuleConstant);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1682);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 219, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1664);
      match(ObjectiveCParser::HEX_LITERAL);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1665);
      match(ObjectiveCParser::OCTAL_LITERAL);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1666);
      match(ObjectiveCParser::BINARY_LITERAL);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1668);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ObjectiveCParser::ADD

      || _la == ObjectiveCParser::SUB) {
        setState(1667);
        _la = _input->LA(1);
        if (!(_la == ObjectiveCParser::ADD

        || _la == ObjectiveCParser::SUB)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(1670);
      match(ObjectiveCParser::DECIMAL_LITERAL);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1672);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ObjectiveCParser::ADD

      || _la == ObjectiveCParser::SUB) {
        setState(1671);
        _la = _input->LA(1);
        if (!(_la == ObjectiveCParser::ADD

        || _la == ObjectiveCParser::SUB)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(1674);
      match(ObjectiveCParser::FLOATING_POINT_LITERAL);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1675);
      match(ObjectiveCParser::CHARACTER_LITERAL);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1676);
      match(ObjectiveCParser::NIL);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1677);
      match(ObjectiveCParser::NULL_);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1678);
      match(ObjectiveCParser::YES);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1679);
      match(ObjectiveCParser::NO);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1680);
      match(ObjectiveCParser::TRUE);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1681);
      match(ObjectiveCParser::FALSE);
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

//----------------- StringLiteralContext ------------------------------------------------------------------

ObjectiveCParser::StringLiteralContext::StringLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ObjectiveCParser::StringLiteralContext::STRING_START() {
  return getTokens(ObjectiveCParser::STRING_START);
}

tree::TerminalNode* ObjectiveCParser::StringLiteralContext::STRING_START(size_t i) {
  return getToken(ObjectiveCParser::STRING_START, i);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::StringLiteralContext::STRING_END() {
  return getTokens(ObjectiveCParser::STRING_END);
}

tree::TerminalNode* ObjectiveCParser::StringLiteralContext::STRING_END(size_t i) {
  return getToken(ObjectiveCParser::STRING_END, i);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::StringLiteralContext::STRING_VALUE() {
  return getTokens(ObjectiveCParser::STRING_VALUE);
}

tree::TerminalNode* ObjectiveCParser::StringLiteralContext::STRING_VALUE(size_t i) {
  return getToken(ObjectiveCParser::STRING_VALUE, i);
}

std::vector<tree::TerminalNode *> ObjectiveCParser::StringLiteralContext::STRING_NEWLINE() {
  return getTokens(ObjectiveCParser::STRING_NEWLINE);
}

tree::TerminalNode* ObjectiveCParser::StringLiteralContext::STRING_NEWLINE(size_t i) {
  return getToken(ObjectiveCParser::STRING_NEWLINE, i);
}


size_t ObjectiveCParser::StringLiteralContext::getRuleIndex() const {
  return ObjectiveCParser::RuleStringLiteral;
}

void ObjectiveCParser::StringLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringLiteral(this);
}

void ObjectiveCParser::StringLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringLiteral(this);
}


antlrcpp::Any ObjectiveCParser::StringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitStringLiteral(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::StringLiteralContext* ObjectiveCParser::stringLiteral() {
  StringLiteralContext *_localctx = _tracker.createInstance<StringLiteralContext>(_ctx, getState());
  enterRule(_localctx, 284, ObjectiveCParser::RuleStringLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1692); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(1684);
              match(ObjectiveCParser::STRING_START);
              setState(1688);
              _errHandler->sync(this);
              _la = _input->LA(1);
              while (_la == ObjectiveCParser::STRING_NEWLINE

              || _la == ObjectiveCParser::STRING_VALUE) {
                setState(1685);
                _la = _input->LA(1);
                if (!(_la == ObjectiveCParser::STRING_NEWLINE

                || _la == ObjectiveCParser::STRING_VALUE)) {
                _errHandler->recoverInline(this);
                }
                else {
                  _errHandler->reportMatch(this);
                  consume();
                }
                setState(1690);
                _errHandler->sync(this);
                _la = _input->LA(1);
              }
              setState(1691);
              match(ObjectiveCParser::STRING_END);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(1694); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 221, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

ObjectiveCParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::IDENTIFIER() {
  return getToken(ObjectiveCParser::IDENTIFIER, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::BOOL() {
  return getToken(ObjectiveCParser::BOOL, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::Class() {
  return getToken(ObjectiveCParser::Class, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::BYCOPY() {
  return getToken(ObjectiveCParser::BYCOPY, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::BYREF() {
  return getToken(ObjectiveCParser::BYREF, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::ID() {
  return getToken(ObjectiveCParser::ID, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::IMP() {
  return getToken(ObjectiveCParser::IMP, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::IN() {
  return getToken(ObjectiveCParser::IN, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::INOUT() {
  return getToken(ObjectiveCParser::INOUT, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::ONEWAY() {
  return getToken(ObjectiveCParser::ONEWAY, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::OUT() {
  return getToken(ObjectiveCParser::OUT, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::PROTOCOL_() {
  return getToken(ObjectiveCParser::PROTOCOL_, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::SEL() {
  return getToken(ObjectiveCParser::SEL, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::SELF() {
  return getToken(ObjectiveCParser::SELF, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::SUPER() {
  return getToken(ObjectiveCParser::SUPER, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::ATOMIC() {
  return getToken(ObjectiveCParser::ATOMIC, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::NONATOMIC() {
  return getToken(ObjectiveCParser::NONATOMIC, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::RETAIN() {
  return getToken(ObjectiveCParser::RETAIN, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::AUTORELEASING_QUALIFIER() {
  return getToken(ObjectiveCParser::AUTORELEASING_QUALIFIER, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::BLOCK() {
  return getToken(ObjectiveCParser::BLOCK, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::BRIDGE_RETAINED() {
  return getToken(ObjectiveCParser::BRIDGE_RETAINED, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::BRIDGE_TRANSFER() {
  return getToken(ObjectiveCParser::BRIDGE_TRANSFER, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::COVARIANT() {
  return getToken(ObjectiveCParser::COVARIANT, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::CONTRAVARIANT() {
  return getToken(ObjectiveCParser::CONTRAVARIANT, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::DEPRECATED() {
  return getToken(ObjectiveCParser::DEPRECATED, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::KINDOF() {
  return getToken(ObjectiveCParser::KINDOF, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::UNUSED() {
  return getToken(ObjectiveCParser::UNUSED, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::NS_INLINE() {
  return getToken(ObjectiveCParser::NS_INLINE, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::NS_ENUM() {
  return getToken(ObjectiveCParser::NS_ENUM, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::NS_OPTIONS() {
  return getToken(ObjectiveCParser::NS_OPTIONS, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::NULL_UNSPECIFIED() {
  return getToken(ObjectiveCParser::NULL_UNSPECIFIED, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::NULLABLE() {
  return getToken(ObjectiveCParser::NULLABLE, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::NONNULL() {
  return getToken(ObjectiveCParser::NONNULL, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::NULL_RESETTABLE() {
  return getToken(ObjectiveCParser::NULL_RESETTABLE, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::ASSIGN() {
  return getToken(ObjectiveCParser::ASSIGN, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::COPY() {
  return getToken(ObjectiveCParser::COPY, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::GETTER() {
  return getToken(ObjectiveCParser::GETTER, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::SETTER() {
  return getToken(ObjectiveCParser::SETTER, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::STRONG() {
  return getToken(ObjectiveCParser::STRONG, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::READONLY() {
  return getToken(ObjectiveCParser::READONLY, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::READWRITE() {
  return getToken(ObjectiveCParser::READWRITE, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::WEAK() {
  return getToken(ObjectiveCParser::WEAK, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::UNSAFE_UNRETAINED() {
  return getToken(ObjectiveCParser::UNSAFE_UNRETAINED, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::IB_OUTLET() {
  return getToken(ObjectiveCParser::IB_OUTLET, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::IB_OUTLET_COLLECTION() {
  return getToken(ObjectiveCParser::IB_OUTLET_COLLECTION, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::IB_INSPECTABLE() {
  return getToken(ObjectiveCParser::IB_INSPECTABLE, 0);
}

tree::TerminalNode* ObjectiveCParser::IdentifierContext::IB_DESIGNABLE() {
  return getToken(ObjectiveCParser::IB_DESIGNABLE, 0);
}


size_t ObjectiveCParser::IdentifierContext::getRuleIndex() const {
  return ObjectiveCParser::RuleIdentifier;
}

void ObjectiveCParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void ObjectiveCParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ObjectiveCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}


antlrcpp::Any ObjectiveCParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ObjectiveCParserVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

ObjectiveCParser::IdentifierContext* ObjectiveCParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 286, ObjectiveCParser::RuleIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1696);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ObjectiveCParser::BOOL)
      | (1ULL << ObjectiveCParser::Class)
      | (1ULL << ObjectiveCParser::BYCOPY)
      | (1ULL << ObjectiveCParser::BYREF)
      | (1ULL << ObjectiveCParser::ID)
      | (1ULL << ObjectiveCParser::IMP)
      | (1ULL << ObjectiveCParser::IN)
      | (1ULL << ObjectiveCParser::INOUT)
      | (1ULL << ObjectiveCParser::ONEWAY)
      | (1ULL << ObjectiveCParser::OUT)
      | (1ULL << ObjectiveCParser::PROTOCOL_)
      | (1ULL << ObjectiveCParser::SEL)
      | (1ULL << ObjectiveCParser::SELF)
      | (1ULL << ObjectiveCParser::SUPER))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 81)) & ((1ULL << (ObjectiveCParser::ATOMIC - 81))
      | (1ULL << (ObjectiveCParser::NONATOMIC - 81))
      | (1ULL << (ObjectiveCParser::RETAIN - 81))
      | (1ULL << (ObjectiveCParser::AUTORELEASING_QUALIFIER - 81))
      | (1ULL << (ObjectiveCParser::BLOCK - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE_RETAINED - 81))
      | (1ULL << (ObjectiveCParser::BRIDGE_TRANSFER - 81))
      | (1ULL << (ObjectiveCParser::COVARIANT - 81))
      | (1ULL << (ObjectiveCParser::CONTRAVARIANT - 81))
      | (1ULL << (ObjectiveCParser::DEPRECATED - 81))
      | (1ULL << (ObjectiveCParser::KINDOF - 81))
      | (1ULL << (ObjectiveCParser::UNUSED - 81))
      | (1ULL << (ObjectiveCParser::NULL_UNSPECIFIED - 81))
      | (1ULL << (ObjectiveCParser::NULLABLE - 81))
      | (1ULL << (ObjectiveCParser::NONNULL - 81))
      | (1ULL << (ObjectiveCParser::NULL_RESETTABLE - 81))
      | (1ULL << (ObjectiveCParser::NS_INLINE - 81))
      | (1ULL << (ObjectiveCParser::NS_ENUM - 81))
      | (1ULL << (ObjectiveCParser::NS_OPTIONS - 81))
      | (1ULL << (ObjectiveCParser::ASSIGN - 81))
      | (1ULL << (ObjectiveCParser::COPY - 81))
      | (1ULL << (ObjectiveCParser::GETTER - 81))
      | (1ULL << (ObjectiveCParser::SETTER - 81))
      | (1ULL << (ObjectiveCParser::STRONG - 81))
      | (1ULL << (ObjectiveCParser::READONLY - 81))
      | (1ULL << (ObjectiveCParser::READWRITE - 81))
      | (1ULL << (ObjectiveCParser::WEAK - 81))
      | (1ULL << (ObjectiveCParser::UNSAFE_UNRETAINED - 81))
      | (1ULL << (ObjectiveCParser::IB_OUTLET - 81))
      | (1ULL << (ObjectiveCParser::IB_OUTLET_COLLECTION - 81))
      | (1ULL << (ObjectiveCParser::IB_INSPECTABLE - 81))
      | (1ULL << (ObjectiveCParser::IB_DESIGNABLE - 81))
      | (1ULL << (ObjectiveCParser::IDENTIFIER - 81)))) != 0))) {
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

bool ObjectiveCParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 129: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 136: return postfixExpressionSempred(dynamic_cast<PostfixExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ObjectiveCParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 13);
    case 1: return precpred(_ctx, 12);
    case 2: return precpred(_ctx, 11);
    case 3: return precpred(_ctx, 10);
    case 4: return precpred(_ctx, 9);
    case 5: return precpred(_ctx, 8);
    case 6: return precpred(_ctx, 7);
    case 7: return precpred(_ctx, 6);
    case 8: return precpred(_ctx, 5);
    case 9: return precpred(_ctx, 4);
    case 10: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool ObjectiveCParser::postfixExpressionSempred(PostfixExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 11: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ObjectiveCParser::_decisionToDFA;
atn::PredictionContextCache ObjectiveCParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ObjectiveCParser::_atn;
std::vector<uint16_t> ObjectiveCParser::_serializedATN;

std::vector<std::string> ObjectiveCParser::_ruleNames = {
  "translationUnit", "topLevelDeclaration", "importDeclaration", "classInterface", 
  "categoryInterface", "classImplementation", "categoryImplementation", 
  "genericTypeSpecifier", "protocolDeclaration", "protocolDeclarationSection", 
  "protocolDeclarationList", "classDeclarationList", "protocolList", "propertyDeclaration", 
  "propertyAttributesList", "propertyAttribute", "protocolName", "instanceVariables", 
  "visibilitySection", "accessModifier", "interfaceDeclarationList", "classMethodDeclaration", 
  "instanceMethodDeclaration", "methodDeclaration", "implementationDefinitionList", 
  "classMethodDefinition", "instanceMethodDefinition", "methodDefinition", 
  "methodSelector", "keywordDeclarator", "selector", "methodType", "propertyImplementation", 
  "propertySynthesizeList", "propertySynthesizeItem", "blockType", "genericsSpecifier", 
  "typeSpecifierWithPrefixes", "dictionaryExpression", "dictionaryPair", 
  "arrayExpression", "boxExpression", "blockParameters", "typeVariableDeclaratorOrName", 
  "blockExpression", "messageExpression", "receiver", "messageSelector", 
  "keywordArgument", "keywordArgumentType", "selectorExpression", "selectorName", 
  "protocolExpression", "encodeExpression", "typeVariableDeclarator", "throwStatement", 
  "tryBlock", "catchStatement", "synchronizedStatement", "autoreleaseStatement", 
  "functionDeclaration", "functionDefinition", "functionSignature", "attribute", 
  "attributeName", "attributeParameters", "attributeParameterList", "attributeParameter", 
  "attributeParameterAssignment", "declaration", "functionCallExpression", 
  "enumDeclaration", "varDeclaration", "typedefDeclaration", "typeDeclaratorList", 
  "typeDeclarator", "declarationSpecifiers", "attributeSpecifier", "initDeclaratorList", 
  "initDeclarator", "structOrUnionSpecifier", "fieldDeclaration", "specifierQualifierList", 
  "ibOutletQualifier", "arcBehaviourSpecifier", "nullabilitySpecifier", 
  "storageClassSpecifier", "typePrefix", "typeQualifier", "protocolQualifier", 
  "typeSpecifier", "typeofExpression", "fieldDeclaratorList", "fieldDeclarator", 
  "enumSpecifier", "enumeratorList", "enumerator", "enumeratorIdentifier", 
  "directDeclarator", "declaratorSuffix", "parameterList", "pointer", "macro", 
  "arrayInitializer", "structInitializer", "initializerList", "typeName", 
  "abstractDeclarator", "abstractDeclaratorSuffix", "parameterDeclarationList", 
  "parameterDeclaration", "declarator", "statement", "labeledStatement", 
  "rangeExpression", "compoundStatement", "selectionStatement", "switchStatement", 
  "switchBlock", "switchSection", "switchLabel", "iterationStatement", "whileStatement", 
  "doStatement", "forStatement", "forLoopInitializer", "forInStatement", 
  "jumpStatement", "expressions", "expression", "assignmentOperator", "castExpression", 
  "initializer", "constantExpression", "unaryExpression", "unaryOperator", 
  "postfixExpression", "postfix", "argumentExpressionList", "argumentExpression", 
  "primaryExpression", "constant", "stringLiteral", "identifier"
};

std::vector<std::string> ObjectiveCParser::_literalNames = {
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

std::vector<std::string> ObjectiveCParser::_symbolicNames = {
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

dfa::Vocabulary ObjectiveCParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ObjectiveCParser::_tokenNames;

ObjectiveCParser::Initializer::Initializer() {
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
    0x3, 0xe0, 0x6a5, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 
    0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 
    0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 0x9, 0x5f, 0x4, 
    0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 0x9, 0x62, 0x4, 0x63, 
    0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 0x9, 0x65, 0x4, 0x66, 0x9, 
    0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 
    0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 
    0x6d, 0x9, 0x6d, 0x4, 0x6e, 0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 
    0x9, 0x70, 0x4, 0x71, 0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 
    0x73, 0x4, 0x74, 0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 
    0x4, 0x77, 0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 
    0x7a, 0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
    0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 0x9, 
    0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 0x9, 0x83, 
    0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 0x9, 0x86, 0x4, 
    0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 0x9, 0x89, 0x4, 0x8a, 
    0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 0x9, 0x8c, 0x4, 0x8d, 0x9, 
    0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 
    0x4, 0x91, 0x9, 0x91, 0x3, 0x2, 0x7, 0x2, 0x124, 0xa, 0x2, 0xc, 0x2, 
    0xe, 0x2, 0x127, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x5, 0x3, 0x136, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x5, 0x5, 0x5, 0x13d, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x143, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x5, 0x5, 0x149, 0xa, 0x5, 0x3, 0x5, 0x5, 0x5, 0x14c, 0xa, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x14f, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x157, 0xa, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x15e, 0xa, 0x6, 0x3, 0x6, 
    0x5, 0x6, 0x161, 0xa, 0x6, 0x3, 0x6, 0x5, 0x6, 0x164, 0xa, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x16c, 
    0xa, 0x7, 0x3, 0x7, 0x5, 0x7, 0x16f, 0xa, 0x7, 0x3, 0x7, 0x5, 0x7, 0x172, 
    0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x17c, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x186, 
    0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x5, 0xa, 0x18e, 0xa, 0xa, 0x3, 0xa, 0x7, 0xa, 0x191, 0xa, 0xa, 0xc, 
    0xa, 0xe, 0xa, 0x194, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 
    0x7, 0xb, 0x19a, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x19d, 0xb, 0xb, 0x3, 
    0xb, 0x6, 0xb, 0x1a0, 0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 0x1a1, 0x5, 0xb, 
    0x1a4, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x1ae, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 
    0x1b1, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 
    0xe, 0x1b8, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x1bb, 0xb, 0xe, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x1c2, 0xa, 0xf, 0x3, 
    0xf, 0x5, 0xf, 0x1c5, 0xa, 0xf, 0x3, 0xf, 0x5, 0xf, 0x1c8, 0xa, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x1cf, 
    0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x1d2, 0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x1e8, 
    0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 
    0x12, 0x1ef, 0xa, 0x12, 0x3, 0x12, 0x5, 0x12, 0x1f2, 0xa, 0x12, 0x3, 
    0x13, 0x3, 0x13, 0x7, 0x13, 0x1f6, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 
    0x1f9, 0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 
    0x1ff, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x202, 0xb, 0x14, 0x3, 0x14, 
    0x6, 0x14, 0x205, 0xa, 0x14, 0xd, 0x14, 0xe, 0x14, 0x206, 0x5, 0x14, 
    0x209, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x6, 0x16, 0x212, 0xa, 0x16, 0xd, 0x16, 0xe, 0x16, 
    0x213, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x19, 0x5, 0x19, 0x21d, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 
    0x221, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x6, 0x1a, 0x22a, 0xa, 0x1a, 0xd, 0x1a, 0xe, 0x1a, 
    0x22b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1d, 0x5, 0x1d, 0x235, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 
    0x239, 0xa, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x23c, 0xa, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x6, 0x1e, 0x242, 0xa, 0x1e, 0xd, 0x1e, 
    0xe, 0x1e, 0x243, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x248, 0xa, 0x1e, 
    0x5, 0x1e, 0x24a, 0xa, 0x1e, 0x3, 0x1f, 0x5, 0x1f, 0x24d, 0xa, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x251, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 
    0x254, 0xb, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x257, 0xa, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x25d, 0xa, 0x20, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x26b, 
    0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0x270, 0xa, 0x23, 
    0xc, 0x23, 0xe, 0x23, 0x273, 0xb, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
    0x5, 0x24, 0x278, 0xa, 0x24, 0x3, 0x25, 0x5, 0x25, 0x27b, 0xa, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x27f, 0xa, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x285, 0xa, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x5, 0x25, 0x289, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x7, 0x26, 0x28f, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x292, 0xb, 0x26, 
    0x5, 0x26, 0x294, 0xa, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x7, 0x27, 
    0x299, 0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 0x29c, 0xb, 0x27, 0x3, 0x27, 
    0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x7, 
    0x28, 0x2a5, 0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x2a8, 0xb, 0x28, 0x3, 
    0x28, 0x5, 0x28, 0x2ab, 0xa, 0x28, 0x5, 0x28, 0x2ad, 0xa, 0x28, 0x3, 
    0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x2b9, 0xa, 0x2a, 0x5, 0x2a, 
    0x2bb, 0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x2c7, 
    0xa, 0x2b, 0x5, 0x2b, 0x2c9, 0xa, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x5, 0x2c, 0x2ce, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x7, 0x2c, 0x2d2, 
    0xa, 0x2c, 0xc, 0x2c, 0xe, 0x2c, 0x2d5, 0xb, 0x2c, 0x5, 0x2c, 0x2d7, 
    0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x2dd, 
    0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x2e1, 0xa, 0x2e, 0x3, 0x2e, 
    0x5, 0x2e, 0x2e4, 0xa, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x2e7, 0xa, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
    0x2f, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x2f2, 0xa, 0x30, 0x3, 0x31, 
    0x3, 0x31, 0x6, 0x31, 0x2f6, 0xa, 0x31, 0xd, 0x31, 0xe, 0x31, 0x2f7, 
    0x5, 0x31, 0x2fa, 0xa, 0x31, 0x3, 0x32, 0x5, 0x32, 0x2fd, 0xa, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x7, 0x32, 0x303, 0xa, 0x32, 
    0xc, 0x32, 0xe, 0x32, 0x306, 0xb, 0x32, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 
    0x30a, 0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 
    0x310, 0xa, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x319, 0xa, 0x35, 0x3, 0x35, 0x6, 0x35, 
    0x31c, 0xa, 0x35, 0xd, 0x35, 0xe, 0x35, 0x31d, 0x5, 0x35, 0x320, 0xa, 
    0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 
    0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 
    0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x39, 0x5, 0x39, 0x336, 0xa, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 
    0x7, 0x3a, 0x33b, 0xa, 0x3a, 0xc, 0x3a, 0xe, 0x3a, 0x33e, 0xb, 0x3a, 
    0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x342, 0xa, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
    0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 
    0x40, 0x5, 0x40, 0x35a, 0xa, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 
    0x5, 0x40, 0x35f, 0xa, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 
    0x364, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x368, 0xa, 0x41, 
    0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x36c, 0xa, 0x42, 0x3, 0x43, 0x3, 0x43, 
    0x5, 0x43, 0x370, 0xa, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 0x44, 
    0x3, 0x44, 0x7, 0x44, 0x377, 0xa, 0x44, 0xc, 0x44, 0xe, 0x44, 0x37a, 
    0xb, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x5, 0x45, 0x380, 
    0xa, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 
    0x46, 0x387, 0xa, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
    0x5, 0x47, 0x38d, 0xa, 0x47, 0x3, 0x48, 0x5, 0x48, 0x390, 0xa, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x5, 0x48, 0x394, 0xa, 0x48, 0x3, 0x48, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 0x5, 0x49, 0x39c, 0xa, 0x49, 
    0x3, 0x49, 0x5, 0x49, 0x39f, 0xa, 0x49, 0x3, 0x49, 0x3, 0x49, 0x5, 0x49, 
    0x3a3, 0xa, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 
    0x3, 0x4a, 0x5, 0x4a, 0x3ab, 0xa, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4b, 
    0x5, 0x4b, 0x3b0, 0xa, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 
    0x3, 0x4b, 0x5, 0x4b, 0x3b7, 0xa, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4c, 
    0x3, 0x4c, 0x3, 0x4c, 0x7, 0x4c, 0x3be, 0xa, 0x4c, 0xc, 0x4c, 0xe, 0x4c, 
    0x3c1, 0xb, 0x4c, 0x3, 0x4d, 0x5, 0x4d, 0x3c4, 0xa, 0x4d, 0x3, 0x4d, 
    0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x6, 0x4e, 0x3d0, 0xa, 0x4e, 0xd, 0x4e, 
    0xe, 0x4e, 0x3d1, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
    0x3, 0x4f, 0x7, 0x4f, 0x3da, 0xa, 0x4f, 0xc, 0x4f, 0xe, 0x4f, 0x3dd, 
    0xb, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x50, 0x3, 0x50, 0x3, 
    0x50, 0x7, 0x50, 0x3e5, 0xa, 0x50, 0xc, 0x50, 0xe, 0x50, 0x3e8, 0xb, 
    0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 0x3ed, 0xa, 0x51, 
    0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x3f2, 0xa, 0x52, 0x3, 0x52, 
    0x3, 0x52, 0x6, 0x52, 0x3f6, 0xa, 0x52, 0xd, 0x52, 0xe, 0x52, 0x3f7, 
    0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x3fc, 0xa, 0x52, 0x3, 0x53, 0x3, 0x53, 
    0x3, 0x53, 0x5, 0x53, 0x401, 0xa, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x54, 
    0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x6, 0x54, 0x40b, 
    0xa, 0x54, 0xd, 0x54, 0xe, 0x54, 0x40c, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 
    0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x5, 0x55, 0x415, 0xa, 0x55, 0x3, 0x56, 
    0x3, 0x56, 0x3, 0x57, 0x3, 0x57, 0x3, 0x58, 0x3, 0x58, 0x3, 0x59, 0x3, 
    0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x423, 
    0xa, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 
    0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 
    0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x5, 0x5c, 0x436, 
    0xa, 0x5c, 0x5, 0x5c, 0x438, 0xa, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 
    0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x7, 0x5e, 0x442, 
    0xa, 0x5e, 0xc, 0x5e, 0xe, 0x5e, 0x445, 0xb, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 
    0x5, 0x5f, 0x449, 0xa, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x5, 0x5f, 0x44d, 
    0xa, 0x5f, 0x3, 0x60, 0x3, 0x60, 0x5, 0x60, 0x451, 0xa, 0x60, 0x3, 0x60, 
    0x3, 0x60, 0x5, 0x60, 0x455, 0xa, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 
    0x3, 0x60, 0x3, 0x60, 0x5, 0x60, 0x45c, 0xa, 0x60, 0x3, 0x60, 0x3, 0x60, 
    0x3, 0x60, 0x3, 0x60, 0x5, 0x60, 0x462, 0xa, 0x60, 0x3, 0x60, 0x3, 0x60, 
    0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 
    0x60, 0x3, 0x60, 0x5, 0x60, 0x46e, 0xa, 0x60, 0x3, 0x61, 0x3, 0x61, 
    0x3, 0x61, 0x7, 0x61, 0x473, 0xa, 0x61, 0xc, 0x61, 0xe, 0x61, 0x476, 
    0xb, 0x61, 0x3, 0x61, 0x5, 0x61, 0x479, 0xa, 0x61, 0x3, 0x62, 0x3, 0x62, 
    0x3, 0x62, 0x5, 0x62, 0x47e, 0xa, 0x62, 0x3, 0x63, 0x3, 0x63, 0x5, 0x63, 
    0x482, 0xa, 0x63, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 
    0x5, 0x64, 0x489, 0xa, 0x64, 0x3, 0x64, 0x7, 0x64, 0x48c, 0xa, 0x64, 
    0xc, 0x64, 0xe, 0x64, 0x48f, 0xb, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 
    0x5, 0x64, 0x494, 0xa, 0x64, 0x3, 0x64, 0x5, 0x64, 0x497, 0xa, 0x64, 
    0x3, 0x64, 0x3, 0x64, 0x5, 0x64, 0x49b, 0xa, 0x64, 0x3, 0x65, 0x3, 0x65, 
    0x5, 0x65, 0x49f, 0xa, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x66, 0x3, 0x66, 
    0x3, 0x66, 0x5, 0x66, 0x4a6, 0xa, 0x66, 0x3, 0x67, 0x3, 0x67, 0x5, 0x67, 
    0x4aa, 0xa, 0x67, 0x3, 0x67, 0x5, 0x67, 0x4ad, 0xa, 0x67, 0x3, 0x68, 
    0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x7, 0x68, 0x4b4, 0xa, 0x68, 
    0xc, 0x68, 0xe, 0x68, 0x4b7, 0xb, 0x68, 0x3, 0x68, 0x3, 0x68, 0x5, 0x68, 
    0x4bb, 0xa, 0x68, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x5, 0x69, 0x4c0, 
    0xa, 0x69, 0x5, 0x69, 0x4c2, 0xa, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x6a, 
    0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x7, 0x6a, 0x4cc, 
    0xa, 0x6a, 0xc, 0x6a, 0xe, 0x6a, 0x4cf, 0xb, 0x6a, 0x3, 0x6a, 0x5, 0x6a, 
    0x4d2, 0xa, 0x6a, 0x5, 0x6a, 0x4d4, 0xa, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
    0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x7, 0x6b, 0x4db, 0xa, 0x6b, 0xc, 0x6b, 
    0xe, 0x6b, 0x4de, 0xb, 0x6b, 0x3, 0x6b, 0x5, 0x6b, 0x4e1, 0xa, 0x6b, 
    0x3, 0x6c, 0x3, 0x6c, 0x5, 0x6c, 0x4e5, 0xa, 0x6c, 0x3, 0x6c, 0x5, 0x6c, 
    0x4e8, 0xa, 0x6c, 0x3, 0x6d, 0x3, 0x6d, 0x5, 0x6d, 0x4ec, 0xa, 0x6d, 
    0x3, 0x6d, 0x3, 0x6d, 0x5, 0x6d, 0x4f0, 0xa, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 
    0x6, 0x6d, 0x4f4, 0xa, 0x6d, 0xd, 0x6d, 0xe, 0x6d, 0x4f5, 0x3, 0x6d, 
    0x3, 0x6d, 0x5, 0x6d, 0x4fa, 0xa, 0x6d, 0x3, 0x6d, 0x6, 0x6d, 0x4fd, 
    0xa, 0x6d, 0xd, 0x6d, 0xe, 0x6d, 0x4fe, 0x5, 0x6d, 0x501, 0xa, 0x6d, 
    0x3, 0x6e, 0x3, 0x6e, 0x5, 0x6e, 0x505, 0xa, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 
    0x3, 0x6e, 0x5, 0x6e, 0x50a, 0xa, 0x6e, 0x3, 0x6e, 0x5, 0x6e, 0x50d, 
    0xa, 0x6e, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x7, 0x6f, 0x512, 0xa, 0x6f, 
    0xc, 0x6f, 0xe, 0x6f, 0x515, 0xb, 0x6f, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 
    0x3, 0x70, 0x5, 0x70, 0x51b, 0xa, 0x70, 0x3, 0x71, 0x5, 0x71, 0x51e, 
    0xa, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x72, 0x3, 0x72, 0x5, 0x72, 0x524, 
    0xa, 0x72, 0x3, 0x72, 0x3, 0x72, 0x5, 0x72, 0x528, 0xa, 0x72, 0x3, 0x72, 
    0x3, 0x72, 0x5, 0x72, 0x52c, 0xa, 0x72, 0x3, 0x72, 0x3, 0x72, 0x5, 0x72, 
    0x530, 0xa, 0x72, 0x3, 0x72, 0x3, 0x72, 0x5, 0x72, 0x534, 0xa, 0x72, 
    0x3, 0x72, 0x3, 0x72, 0x5, 0x72, 0x538, 0xa, 0x72, 0x3, 0x72, 0x3, 0x72, 
    0x5, 0x72, 0x53c, 0xa, 0x72, 0x3, 0x72, 0x3, 0x72, 0x5, 0x72, 0x540, 
    0xa, 0x72, 0x3, 0x72, 0x3, 0x72, 0x5, 0x72, 0x544, 0xa, 0x72, 0x3, 0x72, 
    0x3, 0x72, 0x5, 0x72, 0x548, 0xa, 0x72, 0x3, 0x72, 0x5, 0x72, 0x54b, 
    0xa, 0x72, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x74, 0x3, 
    0x74, 0x3, 0x74, 0x5, 0x74, 0x554, 0xa, 0x74, 0x3, 0x75, 0x3, 0x75, 
    0x3, 0x75, 0x7, 0x75, 0x559, 0xa, 0x75, 0xc, 0x75, 0xe, 0x75, 0x55c, 
    0xb, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 
    0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x5, 0x76, 0x567, 0xa, 0x76, 
    0x3, 0x76, 0x5, 0x76, 0x56a, 0xa, 0x76, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 
    0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x78, 0x3, 0x78, 0x7, 0x78, 0x574, 
    0xa, 0x78, 0xc, 0x78, 0xe, 0x78, 0x577, 0xb, 0x78, 0x3, 0x78, 0x3, 0x78, 
    0x3, 0x79, 0x6, 0x79, 0x57c, 0xa, 0x79, 0xd, 0x79, 0xe, 0x79, 0x57d, 
    0x3, 0x79, 0x6, 0x79, 0x581, 0xa, 0x79, 0xd, 0x79, 0xe, 0x79, 0x582, 
    0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x5, 
    0x7a, 0x58b, 0xa, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 
    0x5, 0x7a, 0x591, 0xa, 0x7a, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 
    0x5, 0x7b, 0x597, 0xa, 0x7b, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 
    0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
    0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 
    0x5, 0x7e, 0x5aa, 0xa, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x5, 0x7e, 0x5ae, 
    0xa, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x5, 0x7e, 0x5b2, 0xa, 0x7e, 0x3, 0x7e, 
    0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x5, 
    0x7f, 0x5bb, 0xa, 0x7f, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 
    0x3, 0x80, 0x5, 0x80, 0x5c2, 0xa, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 
    0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x5, 
    0x81, 0x5cd, 0xa, 0x81, 0x5, 0x81, 0x5cf, 0xa, 0x81, 0x3, 0x82, 0x3, 
    0x82, 0x3, 0x82, 0x7, 0x82, 0x5d4, 0xa, 0x82, 0xc, 0x82, 0xe, 0x82, 
    0x5d7, 0xb, 0x82, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 
    0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 0x5e3, 
    0xa, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 
    0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 
    0x5f0, 0xa, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 
    0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 
    0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 
    0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 
    0x83, 0x5, 0x83, 0x60b, 0xa, 0x83, 0x3, 0x83, 0x3, 0x83, 0x7, 0x83, 
    0x60f, 0xa, 0x83, 0xc, 0x83, 0xe, 0x83, 0x612, 0xb, 0x83, 0x3, 0x84, 
    0x3, 0x84, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 
    0x85, 0x3, 0x85, 0x5, 0x85, 0x61d, 0xa, 0x85, 0x5, 0x85, 0x61f, 0xa, 
    0x85, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x5, 0x86, 0x624, 0xa, 0x86, 
    0x3, 0x87, 0x3, 0x87, 0x5, 0x87, 0x628, 0xa, 0x87, 0x3, 0x88, 0x3, 0x88, 
    0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x5, 0x88, 0x631, 
    0xa, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x5, 
    0x88, 0x638, 0xa, 0x88, 0x3, 0x89, 0x3, 0x89, 0x3, 0x8a, 0x3, 0x8a, 
    0x3, 0x8a, 0x7, 0x8a, 0x63f, 0xa, 0x8a, 0xc, 0x8a, 0xe, 0x8a, 0x642, 
    0xb, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x7, 0x8a, 0x648, 
    0xa, 0x8a, 0xc, 0x8a, 0xe, 0x8a, 0x64b, 0xb, 0x8a, 0x7, 0x8a, 0x64d, 
    0xa, 0x8a, 0xc, 0x8a, 0xe, 0x8a, 0x650, 0xb, 0x8a, 0x3, 0x8b, 0x3, 0x8b, 
    0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 0x658, 0xa, 0x8b, 
    0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x6, 0x8b, 0x65e, 0xa, 0x8b, 
    0xd, 0x8b, 0xe, 0x8b, 0x65f, 0x3, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 0x664, 
    0xa, 0x8b, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x7, 0x8c, 0x669, 0xa, 0x8c, 
    0xc, 0x8c, 0xe, 0x8c, 0x66c, 0xb, 0x8c, 0x3, 0x8d, 0x3, 0x8d, 0x5, 0x8d, 
    0x670, 0xa, 0x8d, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 
    0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 
    0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x5, 0x8e, 0x681, 0xa, 0x8e, 
    0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x5, 0x8f, 0x687, 0xa, 0x8f, 
    0x3, 0x8f, 0x3, 0x8f, 0x5, 0x8f, 0x68b, 0xa, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 
    0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x5, 
    0x8f, 0x695, 0xa, 0x8f, 0x3, 0x90, 0x3, 0x90, 0x7, 0x90, 0x699, 0xa, 
    0x90, 0xc, 0x90, 0xe, 0x90, 0x69c, 0xb, 0x90, 0x3, 0x90, 0x6, 0x90, 
    0x69f, 0xa, 0x90, 0xd, 0x90, 0xe, 0x90, 0x6a0, 0x3, 0x91, 0x3, 0x91, 
    0x3, 0x91, 0x2, 0x4, 0x104, 0x112, 0x92, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
    0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 
    0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 
    0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 
    0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 
    0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 
    0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 
    0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 
    0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 0xda, 0xdc, 0xde, 0xe0, 0xe2, 0xe4, 
    0xe6, 0xe8, 0xea, 0xec, 0xee, 0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 0xfa, 0xfc, 
    0xfe, 0x100, 0x102, 0x104, 0x106, 0x108, 0x10a, 0x10c, 0x10e, 0x110, 
    0x112, 0x114, 0x116, 0x118, 0x11a, 0x11c, 0x11e, 0x120, 0x2, 0x17, 0x4, 
    0x2, 0x48, 0x48, 0x4d, 0x4d, 0x3, 0x2, 0x5c, 0x5d, 0x5, 0x2, 0x46, 0x46, 
    0x49, 0x49, 0x4b, 0x4c, 0x4, 0x2, 0x1d, 0x1d, 0x20, 0x20, 0x6, 0x2, 
    0x57, 0x57, 0x60, 0x60, 0x62, 0x62, 0x64, 0x64, 0x3, 0x2, 0x65, 0x68, 
    0x6, 0x2, 0x3, 0x3, 0xe, 0xe, 0x16, 0x16, 0x1c, 0x1c, 0x6, 0x2, 0x13, 
    0x13, 0x58, 0x5b, 0x5f, 0x5f, 0x69, 0x69, 0x5, 0x2, 0x2c, 0x2d, 0x30, 
    0x31, 0x35, 0x36, 0x3, 0x2, 0x6a, 0x6b, 0x4, 0x2, 0x9c, 0x9d, 0xa1, 
    0xa1, 0x3, 0x2, 0x9a, 0x9b, 0x4, 0x2, 0x8c, 0x8d, 0x93, 0x94, 0x4, 0x2, 
    0x92, 0x92, 0x95, 0x95, 0x4, 0x2, 0x8b, 0x8b, 0xa2, 0xab, 0x3, 0x2, 
    0x98, 0x99, 0x5, 0x2, 0x8e, 0x8f, 0x9a, 0x9c, 0x9e, 0x9e, 0x3, 0x2, 
    0x88, 0x89, 0x3, 0x2, 0x81, 0x81, 0x4, 0x2, 0xb9, 0xb9, 0xbb, 0xbb, 
    0xa, 0x2, 0x2a, 0x31, 0x35, 0x3a, 0x53, 0x55, 0x57, 0x58, 0x5a, 0x5f, 
    0x63, 0x63, 0x65, 0x78, 0x7f, 0x7f, 0x2, 0x75d, 0x2, 0x125, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x135, 0x3, 0x2, 0x2, 0x2, 0x6, 0x137, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x13c, 0x3, 0x2, 0x2, 0x2, 0xa, 0x152, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x167, 0x3, 0x2, 0x2, 0x2, 0xe, 0x175, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0x17f, 0x3, 0x2, 0x2, 0x2, 0x12, 0x187, 0x3, 0x2, 0x2, 0x2, 0x14, 0x1a3, 
    0x3, 0x2, 0x2, 0x2, 0x16, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x18, 0x1a9, 0x3, 
    0x2, 0x2, 0x2, 0x1a, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1bc, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1e7, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x24, 0x1f3, 0x3, 0x2, 0x2, 0x2, 
    0x26, 0x208, 0x3, 0x2, 0x2, 0x2, 0x28, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x2a, 
    0x211, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x215, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x218, 
    0x3, 0x2, 0x2, 0x2, 0x30, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x32, 0x229, 0x3, 
    0x2, 0x2, 0x2, 0x34, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x36, 0x230, 0x3, 0x2, 
    0x2, 0x2, 0x38, 0x234, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x249, 0x3, 0x2, 0x2, 
    0x2, 0x3c, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x25c, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x42, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x44, 
    0x26c, 0x3, 0x2, 0x2, 0x2, 0x46, 0x274, 0x3, 0x2, 0x2, 0x2, 0x48, 0x27a, 
    0x3, 0x2, 0x2, 0x2, 0x4a, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x29a, 0x3, 
    0x2, 0x2, 0x2, 0x4e, 0x29f, 0x3, 0x2, 0x2, 0x2, 0x50, 0x2b0, 0x3, 0x2, 
    0x2, 0x2, 0x52, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x54, 0x2c8, 0x3, 0x2, 0x2, 
    0x2, 0x56, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x58, 0x2dc, 0x3, 0x2, 0x2, 0x2, 
    0x5a, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x5e, 
    0x2f1, 0x3, 0x2, 0x2, 0x2, 0x60, 0x2f9, 0x3, 0x2, 0x2, 0x2, 0x62, 0x2fc, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x307, 0x3, 0x2, 0x2, 0x2, 0x66, 0x311, 0x3, 
    0x2, 0x2, 0x2, 0x68, 0x31f, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x321, 0x3, 0x2, 
    0x2, 0x2, 0x6c, 0x326, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x32b, 0x3, 0x2, 0x2, 
    0x2, 0x70, 0x335, 0x3, 0x2, 0x2, 0x2, 0x72, 0x337, 0x3, 0x2, 0x2, 0x2, 
    0x74, 0x343, 0x3, 0x2, 0x2, 0x2, 0x76, 0x349, 0x3, 0x2, 0x2, 0x2, 0x78, 
    0x34f, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x352, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x355, 
    0x3, 0x2, 0x2, 0x2, 0x7e, 0x359, 0x3, 0x2, 0x2, 0x2, 0x80, 0x365, 0x3, 
    0x2, 0x2, 0x2, 0x82, 0x36b, 0x3, 0x2, 0x2, 0x2, 0x84, 0x36d, 0x3, 0x2, 
    0x2, 0x2, 0x86, 0x373, 0x3, 0x2, 0x2, 0x2, 0x88, 0x37f, 0x3, 0x2, 0x2, 
    0x2, 0x8a, 0x381, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x38c, 0x3, 0x2, 0x2, 0x2, 
    0x8e, 0x38f, 0x3, 0x2, 0x2, 0x2, 0x90, 0x39b, 0x3, 0x2, 0x2, 0x2, 0x92, 
    0x3aa, 0x3, 0x2, 0x2, 0x2, 0x94, 0x3af, 0x3, 0x2, 0x2, 0x2, 0x96, 0x3ba, 
    0x3, 0x2, 0x2, 0x2, 0x98, 0x3c3, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x3cf, 0x3, 
    0x2, 0x2, 0x2, 0x9c, 0x3d3, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x3e1, 0x3, 0x2, 
    0x2, 0x2, 0xa0, 0x3e9, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x3ee, 0x3, 0x2, 0x2, 
    0x2, 0xa4, 0x3fd, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x40a, 0x3, 0x2, 0x2, 0x2, 
    0xa8, 0x414, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x416, 0x3, 0x2, 0x2, 0x2, 0xac, 
    0x418, 0x3, 0x2, 0x2, 0x2, 0xae, 0x41a, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x41c, 
    0x3, 0x2, 0x2, 0x2, 0xb2, 0x422, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x424, 0x3, 
    0x2, 0x2, 0x2, 0xb6, 0x437, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x439, 0x3, 0x2, 
    0x2, 0x2, 0xba, 0x43e, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x44c, 0x3, 0x2, 0x2, 
    0x2, 0xbe, 0x46d, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x46f, 0x3, 0x2, 0x2, 0x2, 
    0xc2, 0x47a, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x481, 0x3, 0x2, 0x2, 0x2, 0xc6, 
    0x49a, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x49c, 0x3, 0x2, 0x2, 0x2, 0xca, 0x4a2, 
    0x3, 0x2, 0x2, 0x2, 0xcc, 0x4a7, 0x3, 0x2, 0x2, 0x2, 0xce, 0x4ae, 0x3, 
    0x2, 0x2, 0x2, 0xd0, 0x4bc, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x4c5, 0x3, 0x2, 
    0x2, 0x2, 0xd4, 0x4d7, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x4e7, 0x3, 0x2, 0x2, 
    0x2, 0xd8, 0x500, 0x3, 0x2, 0x2, 0x2, 0xda, 0x50c, 0x3, 0x2, 0x2, 0x2, 
    0xdc, 0x50e, 0x3, 0x2, 0x2, 0x2, 0xde, 0x51a, 0x3, 0x2, 0x2, 0x2, 0xe0, 
    0x51d, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x54a, 0x3, 0x2, 0x2, 0x2, 0xe4, 0x54c, 
    0x3, 0x2, 0x2, 0x2, 0xe6, 0x550, 0x3, 0x2, 0x2, 0x2, 0xe8, 0x555, 0x3, 
    0x2, 0x2, 0x2, 0xea, 0x569, 0x3, 0x2, 0x2, 0x2, 0xec, 0x56b, 0x3, 0x2, 
    0x2, 0x2, 0xee, 0x571, 0x3, 0x2, 0x2, 0x2, 0xf0, 0x57b, 0x3, 0x2, 0x2, 
    0x2, 0xf2, 0x590, 0x3, 0x2, 0x2, 0x2, 0xf4, 0x596, 0x3, 0x2, 0x2, 0x2, 
    0xf6, 0x598, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x59e, 0x3, 0x2, 0x2, 0x2, 0xfa, 
    0x5a6, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x5ba, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x5bc, 
    0x3, 0x2, 0x2, 0x2, 0x100, 0x5ce, 0x3, 0x2, 0x2, 0x2, 0x102, 0x5d0, 
    0x3, 0x2, 0x2, 0x2, 0x104, 0x5e2, 0x3, 0x2, 0x2, 0x2, 0x106, 0x613, 
    0x3, 0x2, 0x2, 0x2, 0x108, 0x61e, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x623, 
    0x3, 0x2, 0x2, 0x2, 0x10c, 0x627, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x637, 
    0x3, 0x2, 0x2, 0x2, 0x110, 0x639, 0x3, 0x2, 0x2, 0x2, 0x112, 0x63b, 
    0x3, 0x2, 0x2, 0x2, 0x114, 0x663, 0x3, 0x2, 0x2, 0x2, 0x116, 0x665, 
    0x3, 0x2, 0x2, 0x2, 0x118, 0x66f, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x680, 
    0x3, 0x2, 0x2, 0x2, 0x11c, 0x694, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x69e, 
    0x3, 0x2, 0x2, 0x2, 0x120, 0x6a2, 0x3, 0x2, 0x2, 0x2, 0x122, 0x124, 
    0x5, 0x4, 0x3, 0x2, 0x123, 0x122, 0x3, 0x2, 0x2, 0x2, 0x124, 0x127, 
    0x3, 0x2, 0x2, 0x2, 0x125, 0x123, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 
    0x3, 0x2, 0x2, 0x2, 0x126, 0x128, 0x3, 0x2, 0x2, 0x2, 0x127, 0x125, 
    0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x7, 0x2, 0x2, 0x3, 0x129, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x12a, 0x136, 0x5, 0x6, 0x4, 0x2, 0x12b, 0x136, 0x5, 
    0x7a, 0x3e, 0x2, 0x12c, 0x136, 0x5, 0x8c, 0x47, 0x2, 0x12d, 0x136, 0x5, 
    0x8, 0x5, 0x2, 0x12e, 0x136, 0x5, 0xc, 0x7, 0x2, 0x12f, 0x136, 0x5, 
    0xa, 0x6, 0x2, 0x130, 0x136, 0x5, 0xe, 0x8, 0x2, 0x131, 0x136, 0x5, 
    0x12, 0xa, 0x2, 0x132, 0x136, 0x5, 0x16, 0xc, 0x2, 0x133, 0x136, 0x5, 
    0x18, 0xd, 0x2, 0x134, 0x136, 0x5, 0x7c, 0x3f, 0x2, 0x135, 0x12a, 0x3, 
    0x2, 0x2, 0x2, 0x135, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x135, 0x12c, 0x3, 
    0x2, 0x2, 0x2, 0x135, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x135, 0x12e, 0x3, 
    0x2, 0x2, 0x2, 0x135, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x135, 0x130, 0x3, 
    0x2, 0x2, 0x2, 0x135, 0x131, 0x3, 0x2, 0x2, 0x2, 0x135, 0x132, 0x3, 
    0x2, 0x2, 0x2, 0x135, 0x133, 0x3, 0x2, 0x2, 0x2, 0x135, 0x134, 0x3, 
    0x2, 0x2, 0x2, 0x136, 0x5, 0x3, 0x2, 0x2, 0x2, 0x137, 0x138, 0x7, 0x45, 
    0x2, 0x2, 0x138, 0x139, 0x5, 0x120, 0x91, 0x2, 0x139, 0x13a, 0x7, 0x86, 
    0x2, 0x2, 0x13a, 0x7, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13d, 0x7, 0x78, 0x2, 
    0x2, 0x13c, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x3, 0x2, 0x2, 
    0x2, 0x13d, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13f, 0x7, 0x44, 0x2, 
    0x2, 0x13f, 0x142, 0x5, 0x10, 0x9, 0x2, 0x140, 0x141, 0x7, 0x91, 0x2, 
    0x2, 0x141, 0x143, 0x5, 0x120, 0x91, 0x2, 0x142, 0x140, 0x3, 0x2, 0x2, 
    0x2, 0x142, 0x143, 0x3, 0x2, 0x2, 0x2, 0x143, 0x148, 0x3, 0x2, 0x2, 
    0x2, 0x144, 0x145, 0x7, 0x8d, 0x2, 0x2, 0x145, 0x146, 0x5, 0x1a, 0xe, 
    0x2, 0x146, 0x147, 0x7, 0x8c, 0x2, 0x2, 0x147, 0x149, 0x3, 0x2, 0x2, 
    0x2, 0x148, 0x144, 0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 0x3, 0x2, 0x2, 
    0x2, 0x149, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14c, 0x5, 0x24, 0x13, 
    0x2, 0x14b, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x3, 0x2, 0x2, 
    0x2, 0x14c, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14f, 0x5, 0x2a, 0x16, 
    0x2, 0x14e, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 0x3, 0x2, 0x2, 
    0x2, 0x14f, 0x150, 0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 0x7, 0x41, 0x2, 
    0x2, 0x151, 0x9, 0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 0x7, 0x44, 0x2, 0x2, 
    0x153, 0x154, 0x5, 0x10, 0x9, 0x2, 0x154, 0x156, 0x7, 0x80, 0x2, 0x2, 
    0x155, 0x157, 0x5, 0x120, 0x91, 0x2, 0x156, 0x155, 0x3, 0x2, 0x2, 0x2, 
    0x156, 0x157, 0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 0x3, 0x2, 0x2, 0x2, 
    0x158, 0x15d, 0x7, 0x81, 0x2, 0x2, 0x159, 0x15a, 0x7, 0x8d, 0x2, 0x2, 
    0x15a, 0x15b, 0x5, 0x1a, 0xe, 0x2, 0x15b, 0x15c, 0x7, 0x8c, 0x2, 0x2, 
    0x15c, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x159, 0x3, 0x2, 0x2, 0x2, 
    0x15d, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x160, 0x3, 0x2, 0x2, 0x2, 
    0x15f, 0x161, 0x5, 0x24, 0x13, 0x2, 0x160, 0x15f, 0x3, 0x2, 0x2, 0x2, 
    0x160, 0x161, 0x3, 0x2, 0x2, 0x2, 0x161, 0x163, 0x3, 0x2, 0x2, 0x2, 
    0x162, 0x164, 0x5, 0x2a, 0x16, 0x2, 0x163, 0x162, 0x3, 0x2, 0x2, 0x2, 
    0x163, 0x164, 0x3, 0x2, 0x2, 0x2, 0x164, 0x165, 0x3, 0x2, 0x2, 0x2, 
    0x165, 0x166, 0x7, 0x41, 0x2, 0x2, 0x166, 0xb, 0x3, 0x2, 0x2, 0x2, 0x167, 
    0x168, 0x7, 0x43, 0x2, 0x2, 0x168, 0x16b, 0x5, 0x10, 0x9, 0x2, 0x169, 
    0x16a, 0x7, 0x91, 0x2, 0x2, 0x16a, 0x16c, 0x5, 0x120, 0x91, 0x2, 0x16b, 
    0x169, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16c, 
    0x16e, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16f, 0x5, 0x24, 0x13, 0x2, 0x16e, 
    0x16d, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x16f, 
    0x171, 0x3, 0x2, 0x2, 0x2, 0x170, 0x172, 0x5, 0x32, 0x1a, 0x2, 0x171, 
    0x170, 0x3, 0x2, 0x2, 0x2, 0x171, 0x172, 0x3, 0x2, 0x2, 0x2, 0x172, 
    0x173, 0x3, 0x2, 0x2, 0x2, 0x173, 0x174, 0x7, 0x41, 0x2, 0x2, 0x174, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 0x7, 0x43, 0x2, 0x2, 0x176, 0x177, 
    0x5, 0x10, 0x9, 0x2, 0x177, 0x178, 0x7, 0x80, 0x2, 0x2, 0x178, 0x179, 
    0x5, 0x120, 0x91, 0x2, 0x179, 0x17b, 0x7, 0x81, 0x2, 0x2, 0x17a, 0x17c, 
    0x5, 0x32, 0x1a, 0x2, 0x17b, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 
    0x3, 0x2, 0x2, 0x2, 0x17c, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17e, 
    0x7, 0x41, 0x2, 0x2, 0x17e, 0xf, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x185, 0x5, 
    0x120, 0x91, 0x2, 0x180, 0x181, 0x7, 0x8d, 0x2, 0x2, 0x181, 0x182, 0x5, 
    0x1a, 0xe, 0x2, 0x182, 0x183, 0x7, 0x8c, 0x2, 0x2, 0x183, 0x186, 0x3, 
    0x2, 0x2, 0x2, 0x184, 0x186, 0x5, 0x4a, 0x26, 0x2, 0x185, 0x180, 0x3, 
    0x2, 0x2, 0x2, 0x185, 0x184, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x3, 
    0x2, 0x2, 0x2, 0x186, 0x11, 0x3, 0x2, 0x2, 0x2, 0x187, 0x188, 0x7, 0x47, 
    0x2, 0x2, 0x188, 0x18d, 0x5, 0x22, 0x12, 0x2, 0x189, 0x18a, 0x7, 0x8d, 
    0x2, 0x2, 0x18a, 0x18b, 0x5, 0x1a, 0xe, 0x2, 0x18b, 0x18c, 0x7, 0x8c, 
    0x2, 0x2, 0x18c, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x189, 0x3, 0x2, 
    0x2, 0x2, 0x18d, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x192, 0x3, 0x2, 
    0x2, 0x2, 0x18f, 0x191, 0x5, 0x14, 0xb, 0x2, 0x190, 0x18f, 0x3, 0x2, 
    0x2, 0x2, 0x191, 0x194, 0x3, 0x2, 0x2, 0x2, 0x192, 0x190, 0x3, 0x2, 
    0x2, 0x2, 0x192, 0x193, 0x3, 0x2, 0x2, 0x2, 0x193, 0x195, 0x3, 0x2, 
    0x2, 0x2, 0x194, 0x192, 0x3, 0x2, 0x2, 0x2, 0x195, 0x196, 0x7, 0x41, 
    0x2, 0x2, 0x196, 0x13, 0x3, 0x2, 0x2, 0x2, 0x197, 0x19b, 0x9, 0x2, 0x2, 
    0x2, 0x198, 0x19a, 0x5, 0x2a, 0x16, 0x2, 0x199, 0x198, 0x3, 0x2, 0x2, 
    0x2, 0x19a, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x199, 0x3, 0x2, 0x2, 
    0x2, 0x19b, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x1a4, 0x3, 0x2, 0x2, 
    0x2, 0x19d, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x1a0, 0x5, 0x2a, 0x16, 
    0x2, 0x19f, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a1, 0x3, 0x2, 0x2, 
    0x2, 0x1a1, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a2, 0x3, 0x2, 0x2, 
    0x2, 0x1a2, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x197, 0x3, 0x2, 0x2, 
    0x2, 0x1a3, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0x1a5, 0x1a6, 0x7, 0x47, 0x2, 0x2, 0x1a6, 0x1a7, 0x5, 0x1a, 0xe, 0x2, 
    0x1a7, 0x1a8, 0x7, 0x86, 0x2, 0x2, 0x1a8, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0x1a9, 0x1aa, 0x7, 0x3e, 0x2, 0x2, 0x1aa, 0x1af, 0x5, 0x120, 0x91, 0x2, 
    0x1ab, 0x1ac, 0x7, 0x87, 0x2, 0x2, 0x1ac, 0x1ae, 0x5, 0x120, 0x91, 0x2, 
    0x1ad, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1b1, 0x3, 0x2, 0x2, 0x2, 
    0x1af, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b0, 0x3, 0x2, 0x2, 0x2, 
    0x1b0, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1af, 0x3, 0x2, 0x2, 0x2, 
    0x1b2, 0x1b3, 0x7, 0x86, 0x2, 0x2, 0x1b3, 0x19, 0x3, 0x2, 0x2, 0x2, 
    0x1b4, 0x1b9, 0x5, 0x22, 0x12, 0x2, 0x1b5, 0x1b6, 0x7, 0x87, 0x2, 0x2, 
    0x1b6, 0x1b8, 0x5, 0x22, 0x12, 0x2, 0x1b7, 0x1b5, 0x3, 0x2, 0x2, 0x2, 
    0x1b8, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1b7, 0x3, 0x2, 0x2, 0x2, 
    0x1b9, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1bb, 
    0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1c1, 0x7, 0x4a, 0x2, 0x2, 0x1bd, 
    0x1be, 0x7, 0x80, 0x2, 0x2, 0x1be, 0x1bf, 0x5, 0x1e, 0x10, 0x2, 0x1bf, 
    0x1c0, 0x7, 0x81, 0x2, 0x2, 0x1c0, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c1, 
    0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c2, 
    0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c5, 0x5, 0xa8, 0x55, 0x2, 0x1c4, 
    0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c5, 
    0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c8, 0x7, 0x77, 0x2, 0x2, 0x1c7, 
    0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1c8, 
    0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ca, 0x5, 0xa4, 0x53, 0x2, 0x1ca, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1d0, 0x5, 0x20, 0x11, 0x2, 0x1cc, 
    0x1cd, 0x7, 0x87, 0x2, 0x2, 0x1cd, 0x1cf, 0x5, 0x20, 0x11, 0x2, 0x1ce, 
    0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d0, 
    0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d1, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1e8, 
    0x7, 0x53, 0x2, 0x2, 0x1d4, 0x1e8, 0x7, 0x54, 0x2, 0x2, 0x1d5, 0x1e8, 
    0x7, 0x70, 0x2, 0x2, 0x1d6, 0x1e8, 0x7, 0x73, 0x2, 0x2, 0x1d7, 0x1e8, 
    0x7, 0x55, 0x2, 0x2, 0x1d8, 0x1e8, 0x7, 0x6c, 0x2, 0x2, 0x1d9, 0x1e8, 
    0x7, 0x74, 0x2, 0x2, 0x1da, 0x1e8, 0x7, 0x6d, 0x2, 0x2, 0x1db, 0x1e8, 
    0x7, 0x71, 0x2, 0x2, 0x1dc, 0x1e8, 0x7, 0x72, 0x2, 0x2, 0x1dd, 0x1de, 
    0x7, 0x6e, 0x2, 0x2, 0x1de, 0x1df, 0x7, 0x8b, 0x2, 0x2, 0x1df, 0x1e8, 
    0x5, 0x120, 0x91, 0x2, 0x1e0, 0x1e1, 0x7, 0x6f, 0x2, 0x2, 0x1e1, 0x1e2, 
    0x7, 0x8b, 0x2, 0x2, 0x1e2, 0x1e3, 0x5, 0x120, 0x91, 0x2, 0x1e3, 0x1e4, 
    0x7, 0x91, 0x2, 0x2, 0x1e4, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e8, 
    0x5, 0xac, 0x57, 0x2, 0x1e6, 0x1e8, 0x5, 0x120, 0x91, 0x2, 0x1e7, 0x1d3, 
    0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1d5, 
    0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1d7, 
    0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1d9, 
    0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1db, 
    0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1dd, 
    0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e5, 
    0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0x1e9, 0x1ea, 0x7, 0x8d, 0x2, 0x2, 0x1ea, 0x1eb, 0x5, 
    0x1a, 0xe, 0x2, 0x1eb, 0x1ec, 0x7, 0x8c, 0x2, 0x2, 0x1ec, 0x1f2, 0x3, 
    0x2, 0x2, 0x2, 0x1ed, 0x1ef, 0x9, 0x3, 0x2, 0x2, 0x1ee, 0x1ed, 0x3, 
    0x2, 0x2, 0x2, 0x1ee, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f0, 0x3, 
    0x2, 0x2, 0x2, 0x1f0, 0x1f2, 0x5, 0x120, 0x91, 0x2, 0x1f1, 0x1e9, 0x3, 
    0x2, 0x2, 0x2, 0x1f1, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0x1f3, 0x1f7, 0x7, 0x82, 0x2, 0x2, 0x1f4, 0x1f6, 0x5, 0x26, 
    0x14, 0x2, 0x1f5, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f9, 0x3, 0x2, 
    0x2, 0x2, 0x1f7, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 0x3, 0x2, 
    0x2, 0x2, 0x1f8, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1f7, 0x3, 0x2, 
    0x2, 0x2, 0x1fa, 0x1fb, 0x7, 0x83, 0x2, 0x2, 0x1fb, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0x1fc, 0x200, 0x5, 0x28, 0x15, 0x2, 0x1fd, 0x1ff, 0x5, 0xa4, 
    0x53, 0x2, 0x1fe, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x202, 0x3, 0x2, 
    0x2, 0x2, 0x200, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x200, 0x201, 0x3, 0x2, 
    0x2, 0x2, 0x201, 0x209, 0x3, 0x2, 0x2, 0x2, 0x202, 0x200, 0x3, 0x2, 
    0x2, 0x2, 0x203, 0x205, 0x5, 0xa4, 0x53, 0x2, 0x204, 0x203, 0x3, 0x2, 
    0x2, 0x2, 0x205, 0x206, 0x3, 0x2, 0x2, 0x2, 0x206, 0x204, 0x3, 0x2, 
    0x2, 0x2, 0x206, 0x207, 0x3, 0x2, 0x2, 0x2, 0x207, 0x209, 0x3, 0x2, 
    0x2, 0x2, 0x208, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x208, 0x204, 0x3, 0x2, 
    0x2, 0x2, 0x209, 0x27, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20b, 0x9, 0x4, 0x2, 
    0x2, 0x20b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x212, 0x5, 0x8c, 0x47, 
    0x2, 0x20d, 0x212, 0x5, 0x2c, 0x17, 0x2, 0x20e, 0x212, 0x5, 0x2e, 0x18, 
    0x2, 0x20f, 0x212, 0x5, 0x1c, 0xf, 0x2, 0x210, 0x212, 0x5, 0x7a, 0x3e, 
    0x2, 0x211, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x211, 0x20d, 0x3, 0x2, 0x2, 
    0x2, 0x211, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x211, 0x20f, 0x3, 0x2, 0x2, 
    0x2, 0x211, 0x210, 0x3, 0x2, 0x2, 0x2, 0x212, 0x213, 0x3, 0x2, 0x2, 
    0x2, 0x213, 0x211, 0x3, 0x2, 0x2, 0x2, 0x213, 0x214, 0x3, 0x2, 0x2, 
    0x2, 0x214, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x215, 0x216, 0x7, 0x9a, 0x2, 
    0x2, 0x216, 0x217, 0x5, 0x30, 0x19, 0x2, 0x217, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x218, 0x219, 0x7, 0x9b, 0x2, 0x2, 0x219, 0x21a, 0x5, 0x30, 0x19, 
    0x2, 0x21a, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21d, 0x5, 0x40, 0x21, 
    0x2, 0x21c, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21d, 0x3, 0x2, 0x2, 
    0x2, 0x21d, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x220, 0x5, 0x3a, 0x1e, 
    0x2, 0x21f, 0x221, 0x5, 0xce, 0x68, 0x2, 0x220, 0x21f, 0x3, 0x2, 0x2, 
    0x2, 0x220, 0x221, 0x3, 0x2, 0x2, 0x2, 0x221, 0x222, 0x3, 0x2, 0x2, 
    0x2, 0x222, 0x223, 0x7, 0x86, 0x2, 0x2, 0x223, 0x31, 0x3, 0x2, 0x2, 
    0x2, 0x224, 0x22a, 0x5, 0x7c, 0x3f, 0x2, 0x225, 0x22a, 0x5, 0x8c, 0x47, 
    0x2, 0x226, 0x22a, 0x5, 0x34, 0x1b, 0x2, 0x227, 0x22a, 0x5, 0x36, 0x1c, 
    0x2, 0x228, 0x22a, 0x5, 0x42, 0x22, 0x2, 0x229, 0x224, 0x3, 0x2, 0x2, 
    0x2, 0x229, 0x225, 0x3, 0x2, 0x2, 0x2, 0x229, 0x226, 0x3, 0x2, 0x2, 
    0x2, 0x229, 0x227, 0x3, 0x2, 0x2, 0x2, 0x229, 0x228, 0x3, 0x2, 0x2, 
    0x2, 0x22a, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x229, 0x3, 0x2, 0x2, 
    0x2, 0x22b, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x22d, 0x22e, 0x7, 0x9a, 0x2, 0x2, 0x22e, 0x22f, 0x5, 0x38, 0x1d, 0x2, 
    0x22f, 0x35, 0x3, 0x2, 0x2, 0x2, 0x230, 0x231, 0x7, 0x9b, 0x2, 0x2, 
    0x231, 0x232, 0x5, 0x38, 0x1d, 0x2, 0x232, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0x233, 0x235, 0x5, 0x40, 0x21, 0x2, 0x234, 0x233, 0x3, 0x2, 0x2, 0x2, 
    0x234, 0x235, 0x3, 0x2, 0x2, 0x2, 0x235, 0x236, 0x3, 0x2, 0x2, 0x2, 
    0x236, 0x238, 0x5, 0x3a, 0x1e, 0x2, 0x237, 0x239, 0x5, 0x9e, 0x50, 0x2, 
    0x238, 0x237, 0x3, 0x2, 0x2, 0x2, 0x238, 0x239, 0x3, 0x2, 0x2, 0x2, 
    0x239, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x23c, 0x7, 0x86, 0x2, 0x2, 
    0x23b, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x23c, 0x3, 0x2, 0x2, 0x2, 
    0x23c, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x23e, 0x5, 0xe8, 0x75, 0x2, 
    0x23e, 0x39, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x24a, 0x5, 0x3e, 0x20, 0x2, 
    0x240, 0x242, 0x5, 0x3c, 0x1f, 0x2, 0x241, 0x240, 0x3, 0x2, 0x2, 0x2, 
    0x242, 0x243, 0x3, 0x2, 0x2, 0x2, 0x243, 0x241, 0x3, 0x2, 0x2, 0x2, 
    0x243, 0x244, 0x3, 0x2, 0x2, 0x2, 0x244, 0x247, 0x3, 0x2, 0x2, 0x2, 
    0x245, 0x246, 0x7, 0x87, 0x2, 0x2, 0x246, 0x248, 0x7, 0xac, 0x2, 0x2, 
    0x247, 0x245, 0x3, 0x2, 0x2, 0x2, 0x247, 0x248, 0x3, 0x2, 0x2, 0x2, 
    0x248, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x249, 0x23f, 0x3, 0x2, 0x2, 0x2, 
    0x249, 0x241, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x24b, 
    0x24d, 0x5, 0x3e, 0x20, 0x2, 0x24c, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x24c, 
    0x24d, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x24e, 
    0x252, 0x7, 0x91, 0x2, 0x2, 0x24f, 0x251, 0x5, 0x40, 0x21, 0x2, 0x250, 
    0x24f, 0x3, 0x2, 0x2, 0x2, 0x251, 0x254, 0x3, 0x2, 0x2, 0x2, 0x252, 
    0x250, 0x3, 0x2, 0x2, 0x2, 0x252, 0x253, 0x3, 0x2, 0x2, 0x2, 0x253, 
    0x256, 0x3, 0x2, 0x2, 0x2, 0x254, 0x252, 0x3, 0x2, 0x2, 0x2, 0x255, 
    0x257, 0x5, 0xaa, 0x56, 0x2, 0x256, 0x255, 0x3, 0x2, 0x2, 0x2, 0x256, 
    0x257, 0x3, 0x2, 0x2, 0x2, 0x257, 0x258, 0x3, 0x2, 0x2, 0x2, 0x258, 
    0x259, 0x5, 0x120, 0x91, 0x2, 0x259, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x25a, 
    0x25d, 0x5, 0x120, 0x91, 0x2, 0x25b, 0x25d, 0x7, 0x18, 0x2, 0x2, 0x25c, 
    0x25a, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x25d, 
    0x3f, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x25f, 0x7, 0x80, 0x2, 0x2, 0x25f, 
    0x260, 0x5, 0xd6, 0x6c, 0x2, 0x260, 0x261, 0x7, 0x81, 0x2, 0x2, 0x261, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x262, 0x263, 0x7, 0x50, 0x2, 0x2, 0x263, 
    0x264, 0x5, 0x44, 0x23, 0x2, 0x264, 0x265, 0x7, 0x86, 0x2, 0x2, 0x265, 
    0x26b, 0x3, 0x2, 0x2, 0x2, 0x266, 0x267, 0x7, 0x3f, 0x2, 0x2, 0x267, 
    0x268, 0x5, 0x44, 0x23, 0x2, 0x268, 0x269, 0x7, 0x86, 0x2, 0x2, 0x269, 
    0x26b, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x262, 0x3, 0x2, 0x2, 0x2, 0x26a, 
    0x266, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x43, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x271, 
    0x5, 0x46, 0x24, 0x2, 0x26d, 0x26e, 0x7, 0x87, 0x2, 0x2, 0x26e, 0x270, 
    0x5, 0x46, 0x24, 0x2, 0x26f, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x270, 0x273, 
    0x3, 0x2, 0x2, 0x2, 0x271, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x271, 0x272, 
    0x3, 0x2, 0x2, 0x2, 0x272, 0x45, 0x3, 0x2, 0x2, 0x2, 0x273, 0x271, 0x3, 
    0x2, 0x2, 0x2, 0x274, 0x277, 0x5, 0x120, 0x91, 0x2, 0x275, 0x276, 0x7, 
    0x8b, 0x2, 0x2, 0x276, 0x278, 0x5, 0x120, 0x91, 0x2, 0x277, 0x275, 0x3, 
    0x2, 0x2, 0x2, 0x277, 0x278, 0x3, 0x2, 0x2, 0x2, 0x278, 0x47, 0x3, 0x2, 
    0x2, 0x2, 0x279, 0x27b, 0x5, 0xac, 0x57, 0x2, 0x27a, 0x279, 0x3, 0x2, 
    0x2, 0x2, 0x27a, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x27c, 0x3, 0x2, 
    0x2, 0x2, 0x27c, 0x27e, 0x5, 0xb6, 0x5c, 0x2, 0x27d, 0x27f, 0x5, 0xac, 
    0x57, 0x2, 0x27e, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x27f, 0x3, 0x2, 
    0x2, 0x2, 0x27f, 0x280, 0x3, 0x2, 0x2, 0x2, 0x280, 0x281, 0x7, 0x80, 
    0x2, 0x2, 0x281, 0x284, 0x7, 0xa0, 0x2, 0x2, 0x282, 0x285, 0x5, 0xac, 
    0x57, 0x2, 0x283, 0x285, 0x5, 0xb6, 0x5c, 0x2, 0x284, 0x282, 0x3, 0x2, 
    0x2, 0x2, 0x284, 0x283, 0x3, 0x2, 0x2, 0x2, 0x284, 0x285, 0x3, 0x2, 
    0x2, 0x2, 0x285, 0x286, 0x3, 0x2, 0x2, 0x2, 0x286, 0x288, 0x7, 0x81, 
    0x2, 0x2, 0x287, 0x289, 0x5, 0x56, 0x2c, 0x2, 0x288, 0x287, 0x3, 0x2, 
    0x2, 0x2, 0x288, 0x289, 0x3, 0x2, 0x2, 0x2, 0x289, 0x49, 0x3, 0x2, 0x2, 
    0x2, 0x28a, 0x293, 0x7, 0x8d, 0x2, 0x2, 0x28b, 0x290, 0x5, 0x4c, 0x27, 
    0x2, 0x28c, 0x28d, 0x7, 0x87, 0x2, 0x2, 0x28d, 0x28f, 0x5, 0x4c, 0x27, 
    0x2, 0x28e, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x292, 0x3, 0x2, 0x2, 
    0x2, 0x290, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x290, 0x291, 0x3, 0x2, 0x2, 
    0x2, 0x291, 0x294, 0x3, 0x2, 0x2, 0x2, 0x292, 0x290, 0x3, 0x2, 0x2, 
    0x2, 0x293, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x293, 0x294, 0x3, 0x2, 0x2, 
    0x2, 0x294, 0x295, 0x3, 0x2, 0x2, 0x2, 0x295, 0x296, 0x7, 0x8c, 0x2, 
    0x2, 0x296, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x297, 0x299, 0x5, 0xb0, 0x59, 
    0x2, 0x298, 0x297, 0x3, 0x2, 0x2, 0x2, 0x299, 0x29c, 0x3, 0x2, 0x2, 
    0x2, 0x29a, 0x298, 0x3, 0x2, 0x2, 0x2, 0x29a, 0x29b, 0x3, 0x2, 0x2, 
    0x2, 0x29b, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x29a, 0x3, 0x2, 0x2, 
    0x2, 0x29d, 0x29e, 0x5, 0xb6, 0x5c, 0x2, 0x29e, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x29f, 0x2a0, 0x7, 0x8a, 0x2, 0x2, 0x2a0, 0x2ac, 0x7, 0x82, 0x2, 
    0x2, 0x2a1, 0x2a6, 0x5, 0x50, 0x29, 0x2, 0x2a2, 0x2a3, 0x7, 0x87, 0x2, 
    0x2, 0x2a3, 0x2a5, 0x5, 0x50, 0x29, 0x2, 0x2a4, 0x2a2, 0x3, 0x2, 0x2, 
    0x2, 0x2a5, 0x2a8, 0x3, 0x2, 0x2, 0x2, 0x2a6, 0x2a4, 0x3, 0x2, 0x2, 
    0x2, 0x2a6, 0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2a7, 0x2aa, 0x3, 0x2, 0x2, 
    0x2, 0x2a8, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2ab, 0x7, 0x87, 0x2, 
    0x2, 0x2aa, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2ab, 0x3, 0x2, 0x2, 
    0x2, 0x2ab, 0x2ad, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2a1, 0x3, 0x2, 0x2, 
    0x2, 0x2ac, 0x2ad, 0x3, 0x2, 0x2, 0x2, 0x2ad, 0x2ae, 0x3, 0x2, 0x2, 
    0x2, 0x2ae, 0x2af, 0x7, 0x83, 0x2, 0x2, 0x2af, 0x4f, 0x3, 0x2, 0x2, 
    0x2, 0x2b0, 0x2b1, 0x5, 0x108, 0x85, 0x2, 0x2b1, 0x2b2, 0x7, 0x91, 0x2, 
    0x2, 0x2b2, 0x2b3, 0x5, 0x104, 0x83, 0x2, 0x2b3, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x2b4, 0x2b5, 0x7, 0x8a, 0x2, 0x2, 0x2b5, 0x2ba, 0x7, 0x84, 0x2, 
    0x2, 0x2b6, 0x2b8, 0x5, 0x102, 0x82, 0x2, 0x2b7, 0x2b9, 0x7, 0x87, 0x2, 
    0x2, 0x2b8, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2b8, 0x2b9, 0x3, 0x2, 0x2, 
    0x2, 0x2b9, 0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2b6, 0x3, 0x2, 0x2, 
    0x2, 0x2ba, 0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2bb, 0x2bc, 0x3, 0x2, 0x2, 
    0x2, 0x2bc, 0x2bd, 0x7, 0x85, 0x2, 0x2, 0x2bd, 0x53, 0x3, 0x2, 0x2, 
    0x2, 0x2be, 0x2bf, 0x7, 0x8a, 0x2, 0x2, 0x2bf, 0x2c0, 0x7, 0x80, 0x2, 
    0x2, 0x2c0, 0x2c1, 0x5, 0x104, 0x83, 0x2, 0x2c1, 0x2c2, 0x7, 0x81, 0x2, 
    0x2, 0x2c2, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c6, 0x7, 0x8a, 0x2, 
    0x2, 0x2c4, 0x2c7, 0x5, 0x11c, 0x8f, 0x2, 0x2c5, 0x2c7, 0x5, 0x120, 
    0x91, 0x2, 0x2c6, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2c6, 0x2c5, 0x3, 0x2, 
    0x2, 0x2, 0x2c7, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2be, 0x3, 0x2, 
    0x2, 0x2, 0x2c8, 0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x2ca, 0x2d6, 0x7, 0x80, 0x2, 0x2, 0x2cb, 0x2ce, 0x5, 0x58, 0x2d, 
    0x2, 0x2cc, 0x2ce, 0x7, 0x22, 0x2, 0x2, 0x2cd, 0x2cb, 0x3, 0x2, 0x2, 
    0x2, 0x2cd, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2d3, 0x3, 0x2, 0x2, 
    0x2, 0x2cf, 0x2d0, 0x7, 0x87, 0x2, 0x2, 0x2d0, 0x2d2, 0x5, 0x58, 0x2d, 
    0x2, 0x2d1, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d5, 0x3, 0x2, 0x2, 
    0x2, 0x2d3, 0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d4, 0x3, 0x2, 0x2, 
    0x2, 0x2d4, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2d5, 0x2d3, 0x3, 0x2, 0x2, 
    0x2, 0x2d6, 0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2d7, 0x3, 0x2, 0x2, 
    0x2, 0x2d7, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2d9, 0x7, 0x81, 0x2, 
    0x2, 0x2d9, 0x57, 0x3, 0x2, 0x2, 0x2, 0x2da, 0x2dd, 0x5, 0x6e, 0x38, 
    0x2, 0x2db, 0x2dd, 0x5, 0xd6, 0x6c, 0x2, 0x2dc, 0x2da, 0x3, 0x2, 0x2, 
    0x2, 0x2dc, 0x2db, 0x3, 0x2, 0x2, 0x2, 0x2dd, 0x59, 0x3, 0x2, 0x2, 0x2, 
    0x2de, 0x2e0, 0x7, 0xa0, 0x2, 0x2, 0x2df, 0x2e1, 0x5, 0xb6, 0x5c, 0x2, 
    0x2e0, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2e1, 0x3, 0x2, 0x2, 0x2, 
    0x2e1, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e4, 0x5, 0xac, 0x57, 0x2, 
    0x2e3, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e4, 0x3, 0x2, 0x2, 0x2, 
    0x2e4, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e7, 0x5, 0x56, 0x2c, 0x2, 
    0x2e6, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e7, 0x3, 0x2, 0x2, 0x2, 
    0x2e7, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2e8, 0x2e9, 0x5, 0xe8, 0x75, 0x2, 
    0x2e9, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2eb, 0x7, 0x84, 0x2, 0x2, 
    0x2eb, 0x2ec, 0x5, 0x5e, 0x30, 0x2, 0x2ec, 0x2ed, 0x5, 0x60, 0x31, 0x2, 
    0x2ed, 0x2ee, 0x7, 0x85, 0x2, 0x2, 0x2ee, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x2ef, 0x2f2, 0x5, 0x104, 0x83, 0x2, 0x2f0, 0x2f2, 0x5, 0xb6, 0x5c, 
    0x2, 0x2f1, 0x2ef, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2f0, 0x3, 0x2, 0x2, 
    0x2, 0x2f2, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2fa, 0x5, 0x3e, 0x20, 
    0x2, 0x2f4, 0x2f6, 0x5, 0x62, 0x32, 0x2, 0x2f5, 0x2f4, 0x3, 0x2, 0x2, 
    0x2, 0x2f6, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2f5, 0x3, 0x2, 0x2, 
    0x2, 0x2f7, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2fa, 0x3, 0x2, 0x2, 
    0x2, 0x2f9, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2f5, 0x3, 0x2, 0x2, 
    0x2, 0x2fa, 0x61, 0x3, 0x2, 0x2, 0x2, 0x2fb, 0x2fd, 0x5, 0x3e, 0x20, 
    0x2, 0x2fc, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2fd, 0x3, 0x2, 0x2, 
    0x2, 0x2fd, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x2ff, 0x7, 0x91, 0x2, 
    0x2, 0x2ff, 0x304, 0x5, 0x64, 0x33, 0x2, 0x300, 0x301, 0x7, 0x87, 0x2, 
    0x2, 0x301, 0x303, 0x5, 0x64, 0x33, 0x2, 0x302, 0x300, 0x3, 0x2, 0x2, 
    0x2, 0x303, 0x306, 0x3, 0x2, 0x2, 0x2, 0x304, 0x302, 0x3, 0x2, 0x2, 
    0x2, 0x304, 0x305, 0x3, 0x2, 0x2, 0x2, 0x305, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x306, 0x304, 0x3, 0x2, 0x2, 0x2, 0x307, 0x309, 0x5, 0x102, 0x82, 0x2, 
    0x308, 0x30a, 0x5, 0xac, 0x57, 0x2, 0x309, 0x308, 0x3, 0x2, 0x2, 0x2, 
    0x309, 0x30a, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x30f, 0x3, 0x2, 0x2, 0x2, 
    0x30b, 0x30c, 0x7, 0x82, 0x2, 0x2, 0x30c, 0x30d, 0x5, 0xd4, 0x6b, 0x2, 
    0x30d, 0x30e, 0x7, 0x83, 0x2, 0x2, 0x30e, 0x310, 0x3, 0x2, 0x2, 0x2, 
    0x30f, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x310, 0x3, 0x2, 0x2, 0x2, 
    0x310, 0x65, 0x3, 0x2, 0x2, 0x2, 0x311, 0x312, 0x7, 0x4e, 0x2, 0x2, 
    0x312, 0x313, 0x7, 0x80, 0x2, 0x2, 0x313, 0x314, 0x5, 0x68, 0x35, 0x2, 
    0x314, 0x315, 0x7, 0x81, 0x2, 0x2, 0x315, 0x67, 0x3, 0x2, 0x2, 0x2, 
    0x316, 0x320, 0x5, 0x3e, 0x20, 0x2, 0x317, 0x319, 0x5, 0x3e, 0x20, 0x2, 
    0x318, 0x317, 0x3, 0x2, 0x2, 0x2, 0x318, 0x319, 0x3, 0x2, 0x2, 0x2, 
    0x319, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x31a, 0x31c, 0x7, 0x91, 0x2, 0x2, 
    0x31b, 0x318, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x31d, 0x3, 0x2, 0x2, 0x2, 
    0x31d, 0x31b, 0x3, 0x2, 0x2, 0x2, 0x31d, 0x31e, 0x3, 0x2, 0x2, 0x2, 
    0x31e, 0x320, 0x3, 0x2, 0x2, 0x2, 0x31f, 0x316, 0x3, 0x2, 0x2, 0x2, 
    0x31f, 0x31b, 0x3, 0x2, 0x2, 0x2, 0x320, 0x69, 0x3, 0x2, 0x2, 0x2, 0x321, 
    0x322, 0x7, 0x47, 0x2, 0x2, 0x322, 0x323, 0x7, 0x80, 0x2, 0x2, 0x323, 
    0x324, 0x5, 0x22, 0x12, 0x2, 0x324, 0x325, 0x7, 0x81, 0x2, 0x2, 0x325, 
    0x6b, 0x3, 0x2, 0x2, 0x2, 0x326, 0x327, 0x7, 0x40, 0x2, 0x2, 0x327, 
    0x328, 0x7, 0x80, 0x2, 0x2, 0x328, 0x329, 0x5, 0xd6, 0x6c, 0x2, 0x329, 
    0x32a, 0x7, 0x81, 0x2, 0x2, 0x32a, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x32b, 
    0x32c, 0x5, 0x9a, 0x4e, 0x2, 0x32c, 0x32d, 0x5, 0xe0, 0x71, 0x2, 0x32d, 
    0x6f, 0x3, 0x2, 0x2, 0x2, 0x32e, 0x32f, 0x7, 0x51, 0x2, 0x2, 0x32f, 
    0x330, 0x7, 0x80, 0x2, 0x2, 0x330, 0x331, 0x5, 0x120, 0x91, 0x2, 0x331, 
    0x332, 0x7, 0x81, 0x2, 0x2, 0x332, 0x336, 0x3, 0x2, 0x2, 0x2, 0x333, 
    0x334, 0x7, 0x51, 0x2, 0x2, 0x334, 0x336, 0x5, 0x104, 0x83, 0x2, 0x335, 
    0x32e, 0x3, 0x2, 0x2, 0x2, 0x335, 0x333, 0x3, 0x2, 0x2, 0x2, 0x336, 
    0x71, 0x3, 0x2, 0x2, 0x2, 0x337, 0x338, 0x7, 0x52, 0x2, 0x2, 0x338, 
    0x33c, 0x5, 0xe8, 0x75, 0x2, 0x339, 0x33b, 0x5, 0x74, 0x3b, 0x2, 0x33a, 
    0x339, 0x3, 0x2, 0x2, 0x2, 0x33b, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x33c, 
    0x33a, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x33d, 0x3, 0x2, 0x2, 0x2, 0x33d, 
    0x341, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x33c, 0x3, 0x2, 0x2, 0x2, 0x33f, 
    0x340, 0x7, 0x42, 0x2, 0x2, 0x340, 0x342, 0x5, 0xe8, 0x75, 0x2, 0x341, 
    0x33f, 0x3, 0x2, 0x2, 0x2, 0x341, 0x342, 0x3, 0x2, 0x2, 0x2, 0x342, 
    0x73, 0x3, 0x2, 0x2, 0x2, 0x343, 0x344, 0x7, 0x3d, 0x2, 0x2, 0x344, 
    0x345, 0x7, 0x80, 0x2, 0x2, 0x345, 0x346, 0x5, 0x6e, 0x38, 0x2, 0x346, 
    0x347, 0x7, 0x81, 0x2, 0x2, 0x347, 0x348, 0x5, 0xe8, 0x75, 0x2, 0x348, 
    0x75, 0x3, 0x2, 0x2, 0x2, 0x349, 0x34a, 0x7, 0x4f, 0x2, 0x2, 0x34a, 
    0x34b, 0x7, 0x80, 0x2, 0x2, 0x34b, 0x34c, 0x5, 0x104, 0x83, 0x2, 0x34c, 
    0x34d, 0x7, 0x81, 0x2, 0x2, 0x34d, 0x34e, 0x5, 0xe8, 0x75, 0x2, 0x34e, 
    0x77, 0x3, 0x2, 0x2, 0x2, 0x34f, 0x350, 0x7, 0x3c, 0x2, 0x2, 0x350, 
    0x351, 0x5, 0xe8, 0x75, 0x2, 0x351, 0x79, 0x3, 0x2, 0x2, 0x2, 0x352, 
    0x353, 0x5, 0x7e, 0x40, 0x2, 0x353, 0x354, 0x7, 0x86, 0x2, 0x2, 0x354, 
    0x7b, 0x3, 0x2, 0x2, 0x2, 0x355, 0x356, 0x5, 0x7e, 0x40, 0x2, 0x356, 
    0x357, 0x5, 0xe8, 0x75, 0x2, 0x357, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x358, 
    0x35a, 0x5, 0x9a, 0x4e, 0x2, 0x359, 0x358, 0x3, 0x2, 0x2, 0x2, 0x359, 
    0x35a, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x35b, 0x3, 0x2, 0x2, 0x2, 0x35b, 
    0x35c, 0x5, 0x120, 0x91, 0x2, 0x35c, 0x35e, 0x7, 0x80, 0x2, 0x2, 0x35d, 
    0x35f, 0x5, 0xca, 0x66, 0x2, 0x35e, 0x35d, 0x3, 0x2, 0x2, 0x2, 0x35e, 
    0x35f, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x360, 0x3, 0x2, 0x2, 0x2, 0x360, 
    0x361, 0x7, 0x81, 0x2, 0x2, 0x361, 0x363, 0x3, 0x2, 0x2, 0x2, 0x362, 
    0x364, 0x5, 0x9c, 0x4f, 0x2, 0x363, 0x362, 0x3, 0x2, 0x2, 0x2, 0x363, 
    0x364, 0x3, 0x2, 0x2, 0x2, 0x364, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x365, 0x367, 
    0x5, 0x82, 0x42, 0x2, 0x366, 0x368, 0x5, 0x84, 0x43, 0x2, 0x367, 0x366, 
    0x3, 0x2, 0x2, 0x2, 0x367, 0x368, 0x3, 0x2, 0x2, 0x2, 0x368, 0x81, 0x3, 
    0x2, 0x2, 0x2, 0x369, 0x36c, 0x7, 0x7, 0x2, 0x2, 0x36a, 0x36c, 0x5, 
    0x120, 0x91, 0x2, 0x36b, 0x369, 0x3, 0x2, 0x2, 0x2, 0x36b, 0x36a, 0x3, 
    0x2, 0x2, 0x2, 0x36c, 0x83, 0x3, 0x2, 0x2, 0x2, 0x36d, 0x36f, 0x7, 0x80, 
    0x2, 0x2, 0x36e, 0x370, 0x5, 0x86, 0x44, 0x2, 0x36f, 0x36e, 0x3, 0x2, 
    0x2, 0x2, 0x36f, 0x370, 0x3, 0x2, 0x2, 0x2, 0x370, 0x371, 0x3, 0x2, 
    0x2, 0x2, 0x371, 0x372, 0x7, 0x81, 0x2, 0x2, 0x372, 0x85, 0x3, 0x2, 
    0x2, 0x2, 0x373, 0x378, 0x5, 0x88, 0x45, 0x2, 0x374, 0x375, 0x7, 0x87, 
    0x2, 0x2, 0x375, 0x377, 0x5, 0x88, 0x45, 0x2, 0x376, 0x374, 0x3, 0x2, 
    0x2, 0x2, 0x377, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x378, 0x376, 0x3, 0x2, 
    0x2, 0x2, 0x378, 0x379, 0x3, 0x2, 0x2, 0x2, 0x379, 0x87, 0x3, 0x2, 0x2, 
    0x2, 0x37a, 0x378, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x380, 0x5, 0x80, 0x41, 
    0x2, 0x37c, 0x380, 0x5, 0x11c, 0x8f, 0x2, 0x37d, 0x380, 0x5, 0x11e, 
    0x90, 0x2, 0x37e, 0x380, 0x5, 0x8a, 0x46, 0x2, 0x37f, 0x37b, 0x3, 0x2, 
    0x2, 0x2, 0x37f, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x37f, 0x37d, 0x3, 0x2, 
    0x2, 0x2, 0x37f, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x380, 0x89, 0x3, 0x2, 0x2, 
    0x2, 0x381, 0x382, 0x5, 0x82, 0x42, 0x2, 0x382, 0x386, 0x7, 0x8b, 0x2, 
    0x2, 0x383, 0x387, 0x5, 0x11c, 0x8f, 0x2, 0x384, 0x387, 0x5, 0x82, 0x42, 
    0x2, 0x385, 0x387, 0x5, 0x11e, 0x90, 0x2, 0x386, 0x383, 0x3, 0x2, 0x2, 
    0x2, 0x386, 0x384, 0x3, 0x2, 0x2, 0x2, 0x386, 0x385, 0x3, 0x2, 0x2, 
    0x2, 0x387, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x388, 0x38d, 0x5, 0x8e, 0x48, 
    0x2, 0x389, 0x38d, 0x5, 0x90, 0x49, 0x2, 0x38a, 0x38d, 0x5, 0x92, 0x4a, 
    0x2, 0x38b, 0x38d, 0x5, 0x94, 0x4b, 0x2, 0x38c, 0x388, 0x3, 0x2, 0x2, 
    0x2, 0x38c, 0x389, 0x3, 0x2, 0x2, 0x2, 0x38c, 0x38a, 0x3, 0x2, 0x2, 
    0x2, 0x38c, 0x38b, 0x3, 0x2, 0x2, 0x2, 0x38d, 0x8d, 0x3, 0x2, 0x2, 0x2, 
    0x38e, 0x390, 0x5, 0x9c, 0x4f, 0x2, 0x38f, 0x38e, 0x3, 0x2, 0x2, 0x2, 
    0x38f, 0x390, 0x3, 0x2, 0x2, 0x2, 0x390, 0x391, 0x3, 0x2, 0x2, 0x2, 
    0x391, 0x393, 0x5, 0x120, 0x91, 0x2, 0x392, 0x394, 0x5, 0x9c, 0x4f, 
    0x2, 0x393, 0x392, 0x3, 0x2, 0x2, 0x2, 0x393, 0x394, 0x3, 0x2, 0x2, 
    0x2, 0x394, 0x395, 0x3, 0x2, 0x2, 0x2, 0x395, 0x396, 0x7, 0x80, 0x2, 
    0x2, 0x396, 0x397, 0x5, 0xc6, 0x64, 0x2, 0x397, 0x398, 0x7, 0x81, 0x2, 
    0x2, 0x398, 0x399, 0x7, 0x86, 0x2, 0x2, 0x399, 0x8f, 0x3, 0x2, 0x2, 
    0x2, 0x39a, 0x39c, 0x5, 0x9c, 0x4f, 0x2, 0x39b, 0x39a, 0x3, 0x2, 0x2, 
    0x2, 0x39b, 0x39c, 0x3, 0x2, 0x2, 0x2, 0x39c, 0x39e, 0x3, 0x2, 0x2, 
    0x2, 0x39d, 0x39f, 0x7, 0x1f, 0x2, 0x2, 0x39e, 0x39d, 0x3, 0x2, 0x2, 
    0x2, 0x39e, 0x39f, 0x3, 0x2, 0x2, 0x2, 0x39f, 0x3a0, 0x3, 0x2, 0x2, 
    0x2, 0x3a0, 0x3a2, 0x5, 0xbe, 0x60, 0x2, 0x3a1, 0x3a3, 0x5, 0x120, 0x91, 
    0x2, 0x3a2, 0x3a1, 0x3, 0x2, 0x2, 0x2, 0x3a2, 0x3a3, 0x3, 0x2, 0x2, 
    0x2, 0x3a3, 0x3a4, 0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3a5, 0x7, 0x86, 0x2, 
    0x2, 0x3a5, 0x91, 0x3, 0x2, 0x2, 0x2, 0x3a6, 0x3a7, 0x5, 0x9a, 0x4e, 
    0x2, 0x3a7, 0x3a8, 0x5, 0x9e, 0x50, 0x2, 0x3a8, 0x3ab, 0x3, 0x2, 0x2, 
    0x2, 0x3a9, 0x3ab, 0x5, 0x9a, 0x4e, 0x2, 0x3aa, 0x3a6, 0x3, 0x2, 0x2, 
    0x2, 0x3aa, 0x3a9, 0x3, 0x2, 0x2, 0x2, 0x3ab, 0x3ac, 0x3, 0x2, 0x2, 
    0x2, 0x3ac, 0x3ad, 0x7, 0x86, 0x2, 0x2, 0x3ad, 0x93, 0x3, 0x2, 0x2, 
    0x2, 0x3ae, 0x3b0, 0x5, 0x9c, 0x4f, 0x2, 0x3af, 0x3ae, 0x3, 0x2, 0x2, 
    0x2, 0x3af, 0x3b0, 0x3, 0x2, 0x2, 0x2, 0x3b0, 0x3b1, 0x3, 0x2, 0x2, 
    0x2, 0x3b1, 0x3b6, 0x7, 0x1f, 0x2, 0x2, 0x3b2, 0x3b3, 0x5, 0x9a, 0x4e, 
    0x2, 0x3b3, 0x3b4, 0x5, 0x96, 0x4c, 0x2, 0x3b4, 0x3b7, 0x3, 0x2, 0x2, 
    0x2, 0x3b5, 0x3b7, 0x5, 0x9a, 0x4e, 0x2, 0x3b6, 0x3b2, 0x3, 0x2, 0x2, 
    0x2, 0x3b6, 0x3b5, 0x3, 0x2, 0x2, 0x2, 0x3b7, 0x3b8, 0x3, 0x2, 0x2, 
    0x2, 0x3b8, 0x3b9, 0x7, 0x86, 0x2, 0x2, 0x3b9, 0x95, 0x3, 0x2, 0x2, 
    0x2, 0x3ba, 0x3bf, 0x5, 0x98, 0x4d, 0x2, 0x3bb, 0x3bc, 0x7, 0x87, 0x2, 
    0x2, 0x3bc, 0x3be, 0x5, 0x98, 0x4d, 0x2, 0x3bd, 0x3bb, 0x3, 0x2, 0x2, 
    0x2, 0x3be, 0x3c1, 0x3, 0x2, 0x2, 0x2, 0x3bf, 0x3bd, 0x3, 0x2, 0x2, 
    0x2, 0x3bf, 0x3c0, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x97, 0x3, 0x2, 0x2, 0x2, 
    0x3c1, 0x3bf, 0x3, 0x2, 0x2, 0x2, 0x3c2, 0x3c4, 0x5, 0xcc, 0x67, 0x2, 
    0x3c3, 0x3c2, 0x3, 0x2, 0x2, 0x2, 0x3c3, 0x3c4, 0x3, 0x2, 0x2, 0x2, 
    0x3c4, 0x3c5, 0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3c6, 0x5, 0xc6, 0x64, 0x2, 
    0x3c6, 0x99, 0x3, 0x2, 0x2, 0x2, 0x3c7, 0x3d0, 0x5, 0xae, 0x58, 0x2, 
    0x3c8, 0x3d0, 0x5, 0x9c, 0x4f, 0x2, 0x3c9, 0x3d0, 0x5, 0xaa, 0x56, 0x2, 
    0x3ca, 0x3d0, 0x5, 0xac, 0x57, 0x2, 0x3cb, 0x3d0, 0x5, 0xa8, 0x55, 0x2, 
    0x3cc, 0x3d0, 0x5, 0xb0, 0x59, 0x2, 0x3cd, 0x3d0, 0x5, 0xb2, 0x5a, 0x2, 
    0x3ce, 0x3d0, 0x5, 0xb6, 0x5c, 0x2, 0x3cf, 0x3c7, 0x3, 0x2, 0x2, 0x2, 
    0x3cf, 0x3c8, 0x3, 0x2, 0x2, 0x2, 0x3cf, 0x3c9, 0x3, 0x2, 0x2, 0x2, 
    0x3cf, 0x3ca, 0x3, 0x2, 0x2, 0x2, 0x3cf, 0x3cb, 0x3, 0x2, 0x2, 0x2, 
    0x3cf, 0x3cc, 0x3, 0x2, 0x2, 0x2, 0x3cf, 0x3cd, 0x3, 0x2, 0x2, 0x2, 
    0x3cf, 0x3ce, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3d1, 0x3, 0x2, 0x2, 0x2, 
    0x3d1, 0x3cf, 0x3, 0x2, 0x2, 0x2, 0x3d1, 0x3d2, 0x3, 0x2, 0x2, 0x2, 
    0x3d2, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3d4, 0x7, 0x56, 0x2, 0x2, 
    0x3d4, 0x3d5, 0x7, 0x80, 0x2, 0x2, 0x3d5, 0x3d6, 0x7, 0x80, 0x2, 0x2, 
    0x3d6, 0x3db, 0x5, 0x80, 0x41, 0x2, 0x3d7, 0x3d8, 0x7, 0x87, 0x2, 0x2, 
    0x3d8, 0x3da, 0x5, 0x80, 0x41, 0x2, 0x3d9, 0x3d7, 0x3, 0x2, 0x2, 0x2, 
    0x3da, 0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3db, 0x3d9, 0x3, 0x2, 0x2, 0x2, 
    0x3db, 0x3dc, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3de, 0x3, 0x2, 0x2, 0x2, 
    0x3dd, 0x3db, 0x3, 0x2, 0x2, 0x2, 0x3de, 0x3df, 0x7, 0x81, 0x2, 0x2, 
    0x3df, 0x3e0, 0x7, 0x81, 0x2, 0x2, 0x3e0, 0x9d, 0x3, 0x2, 0x2, 0x2, 
    0x3e1, 0x3e6, 0x5, 0xa0, 0x51, 0x2, 0x3e2, 0x3e3, 0x7, 0x87, 0x2, 0x2, 
    0x3e3, 0x3e5, 0x5, 0xa0, 0x51, 0x2, 0x3e4, 0x3e2, 0x3, 0x2, 0x2, 0x2, 
    0x3e5, 0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3e6, 0x3e4, 0x3, 0x2, 0x2, 0x2, 
    0x3e6, 0x3e7, 0x3, 0x2, 0x2, 0x2, 0x3e7, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x3e8, 
    0x3e6, 0x3, 0x2, 0x2, 0x2, 0x3e9, 0x3ec, 0x5, 0xe0, 0x71, 0x2, 0x3ea, 
    0x3eb, 0x7, 0x8b, 0x2, 0x2, 0x3eb, 0x3ed, 0x5, 0x10a, 0x86, 0x2, 0x3ec, 
    0x3ea, 0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3ed, 
    0xa1, 0x3, 0x2, 0x2, 0x2, 0x3ee, 0x3fb, 0x9, 0x5, 0x2, 0x2, 0x3ef, 0x3fc, 
    0x5, 0x120, 0x91, 0x2, 0x3f0, 0x3f2, 0x5, 0x120, 0x91, 0x2, 0x3f1, 0x3f0, 
    0x3, 0x2, 0x2, 0x2, 0x3f1, 0x3f2, 0x3, 0x2, 0x2, 0x2, 0x3f2, 0x3f3, 
    0x3, 0x2, 0x2, 0x2, 0x3f3, 0x3f5, 0x7, 0x82, 0x2, 0x2, 0x3f4, 0x3f6, 
    0x5, 0xa4, 0x53, 0x2, 0x3f5, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3f7, 
    0x3, 0x2, 0x2, 0x2, 0x3f7, 0x3f5, 0x3, 0x2, 0x2, 0x2, 0x3f7, 0x3f8, 
    0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3f9, 0x3, 0x2, 0x2, 0x2, 0x3f9, 0x3fa, 
    0x7, 0x83, 0x2, 0x2, 0x3fa, 0x3fc, 0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3ef, 
    0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3f1, 0x3, 0x2, 0x2, 0x2, 0x3fc, 0xa3, 0x3, 
    0x2, 0x2, 0x2, 0x3fd, 0x3fe, 0x5, 0xa6, 0x54, 0x2, 0x3fe, 0x400, 0x5, 
    0xba, 0x5e, 0x2, 0x3ff, 0x401, 0x5, 0xce, 0x68, 0x2, 0x400, 0x3ff, 0x3, 
    0x2, 0x2, 0x2, 0x400, 0x401, 0x3, 0x2, 0x2, 0x2, 0x401, 0x402, 0x3, 
    0x2, 0x2, 0x2, 0x402, 0x403, 0x7, 0x86, 0x2, 0x2, 0x403, 0xa5, 0x3, 
    0x2, 0x2, 0x2, 0x404, 0x40b, 0x5, 0xaa, 0x56, 0x2, 0x405, 0x40b, 0x5, 
    0xac, 0x57, 0x2, 0x406, 0x40b, 0x5, 0xa8, 0x55, 0x2, 0x407, 0x40b, 0x5, 
    0xb0, 0x59, 0x2, 0x408, 0x40b, 0x5, 0xb2, 0x5a, 0x2, 0x409, 0x40b, 0x5, 
    0xb6, 0x5c, 0x2, 0x40a, 0x404, 0x3, 0x2, 0x2, 0x2, 0x40a, 0x405, 0x3, 
    0x2, 0x2, 0x2, 0x40a, 0x406, 0x3, 0x2, 0x2, 0x2, 0x40a, 0x407, 0x3, 
    0x2, 0x2, 0x2, 0x40a, 0x408, 0x3, 0x2, 0x2, 0x2, 0x40a, 0x409, 0x3, 
    0x2, 0x2, 0x2, 0x40b, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x40c, 0x40a, 0x3, 
    0x2, 0x2, 0x2, 0x40c, 0x40d, 0x3, 0x2, 0x2, 0x2, 0x40d, 0xa7, 0x3, 0x2, 
    0x2, 0x2, 0x40e, 0x40f, 0x7, 0x76, 0x2, 0x2, 0x40f, 0x410, 0x7, 0x80, 
    0x2, 0x2, 0x410, 0x411, 0x5, 0x120, 0x91, 0x2, 0x411, 0x412, 0x7, 0x81, 
    0x2, 0x2, 0x412, 0x415, 0x3, 0x2, 0x2, 0x2, 0x413, 0x415, 0x7, 0x75, 
    0x2, 0x2, 0x414, 0x40e, 0x3, 0x2, 0x2, 0x2, 0x414, 0x413, 0x3, 0x2, 
    0x2, 0x2, 0x415, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x416, 0x417, 0x9, 0x6, 0x2, 
    0x2, 0x417, 0xab, 0x3, 0x2, 0x2, 0x2, 0x418, 0x419, 0x9, 0x7, 0x2, 0x2, 
    0x419, 0xad, 0x3, 0x2, 0x2, 0x2, 0x41a, 0x41b, 0x9, 0x8, 0x2, 0x2, 0x41b, 
    0xaf, 0x3, 0x2, 0x2, 0x2, 0x41c, 0x41d, 0x9, 0x9, 0x2, 0x2, 0x41d, 0xb1, 
    0x3, 0x2, 0x2, 0x2, 0x41e, 0x423, 0x7, 0x7, 0x2, 0x2, 0x41f, 0x423, 
    0x7, 0x23, 0x2, 0x2, 0x420, 0x423, 0x7, 0x17, 0x2, 0x2, 0x421, 0x423, 
    0x5, 0xb4, 0x5b, 0x2, 0x422, 0x41e, 0x3, 0x2, 0x2, 0x2, 0x422, 0x41f, 
    0x3, 0x2, 0x2, 0x2, 0x422, 0x420, 0x3, 0x2, 0x2, 0x2, 0x422, 0x421, 
    0x3, 0x2, 0x2, 0x2, 0x423, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x424, 0x425, 0x9, 
    0xa, 0x2, 0x2, 0x425, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x426, 0x438, 0x7, 0x22, 
    0x2, 0x2, 0x427, 0x438, 0x7, 0x6, 0x2, 0x2, 0x428, 0x438, 0x7, 0x19, 
    0x2, 0x2, 0x429, 0x438, 0x7, 0x14, 0x2, 0x2, 0x42a, 0x438, 0x7, 0x15, 
    0x2, 0x2, 0x42b, 0x438, 0x7, 0xf, 0x2, 0x2, 0x42c, 0x438, 0x7, 0xb, 
    0x2, 0x2, 0x42d, 0x438, 0x7, 0x1a, 0x2, 0x2, 0x42e, 0x438, 0x7, 0x21, 
    0x2, 0x2, 0x42f, 0x438, 0x5, 0xb8, 0x5d, 0x2, 0x430, 0x438, 0x5, 0x10, 
    0x9, 0x2, 0x431, 0x438, 0x5, 0xa2, 0x52, 0x2, 0x432, 0x438, 0x5, 0xbe, 
    0x60, 0x2, 0x433, 0x435, 0x5, 0x120, 0x91, 0x2, 0x434, 0x436, 0x5, 0xcc, 
    0x67, 0x2, 0x435, 0x434, 0x3, 0x2, 0x2, 0x2, 0x435, 0x436, 0x3, 0x2, 
    0x2, 0x2, 0x436, 0x438, 0x3, 0x2, 0x2, 0x2, 0x437, 0x426, 0x3, 0x2, 
    0x2, 0x2, 0x437, 0x427, 0x3, 0x2, 0x2, 0x2, 0x437, 0x428, 0x3, 0x2, 
    0x2, 0x2, 0x437, 0x429, 0x3, 0x2, 0x2, 0x2, 0x437, 0x42a, 0x3, 0x2, 
    0x2, 0x2, 0x437, 0x42b, 0x3, 0x2, 0x2, 0x2, 0x437, 0x42c, 0x3, 0x2, 
    0x2, 0x2, 0x437, 0x42d, 0x3, 0x2, 0x2, 0x2, 0x437, 0x42e, 0x3, 0x2, 
    0x2, 0x2, 0x437, 0x42f, 0x3, 0x2, 0x2, 0x2, 0x437, 0x430, 0x3, 0x2, 
    0x2, 0x2, 0x437, 0x431, 0x3, 0x2, 0x2, 0x2, 0x437, 0x432, 0x3, 0x2, 
    0x2, 0x2, 0x437, 0x433, 0x3, 0x2, 0x2, 0x2, 0x438, 0xb7, 0x3, 0x2, 0x2, 
    0x2, 0x439, 0x43a, 0x7, 0x61, 0x2, 0x2, 0x43a, 0x43b, 0x7, 0x80, 0x2, 
    0x2, 0x43b, 0x43c, 0x5, 0x104, 0x83, 0x2, 0x43c, 0x43d, 0x7, 0x81, 0x2, 
    0x2, 0x43d, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x43e, 0x443, 0x5, 0xbc, 0x5f, 
    0x2, 0x43f, 0x440, 0x7, 0x87, 0x2, 0x2, 0x440, 0x442, 0x5, 0xbc, 0x5f, 
    0x2, 0x441, 0x43f, 0x3, 0x2, 0x2, 0x2, 0x442, 0x445, 0x3, 0x2, 0x2, 
    0x2, 0x443, 0x441, 0x3, 0x2, 0x2, 0x2, 0x443, 0x444, 0x3, 0x2, 0x2, 
    0x2, 0x444, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x445, 0x443, 0x3, 0x2, 0x2, 0x2, 
    0x446, 0x44d, 0x5, 0xe0, 0x71, 0x2, 0x447, 0x449, 0x5, 0xe0, 0x71, 0x2, 
    0x448, 0x447, 0x3, 0x2, 0x2, 0x2, 0x448, 0x449, 0x3, 0x2, 0x2, 0x2, 
    0x449, 0x44a, 0x3, 0x2, 0x2, 0x2, 0x44a, 0x44b, 0x7, 0x91, 0x2, 0x2, 
    0x44b, 0x44d, 0x5, 0x11c, 0x8f, 0x2, 0x44c, 0x446, 0x3, 0x2, 0x2, 0x2, 
    0x44c, 0x448, 0x3, 0x2, 0x2, 0x2, 0x44d, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x44e, 
    0x454, 0x7, 0xd, 0x2, 0x2, 0x44f, 0x451, 0x5, 0x120, 0x91, 0x2, 0x450, 
    0x44f, 0x3, 0x2, 0x2, 0x2, 0x450, 0x451, 0x3, 0x2, 0x2, 0x2, 0x451, 
    0x452, 0x3, 0x2, 0x2, 0x2, 0x452, 0x453, 0x7, 0x91, 0x2, 0x2, 0x453, 
    0x455, 0x5, 0xd6, 0x6c, 0x2, 0x454, 0x450, 0x3, 0x2, 0x2, 0x2, 0x454, 
    0x455, 0x3, 0x2, 0x2, 0x2, 0x455, 0x461, 0x3, 0x2, 0x2, 0x2, 0x456, 
    0x45b, 0x5, 0x120, 0x91, 0x2, 0x457, 0x458, 0x7, 0x82, 0x2, 0x2, 0x458, 
    0x459, 0x5, 0xc0, 0x61, 0x2, 0x459, 0x45a, 0x7, 0x83, 0x2, 0x2, 0x45a, 
    0x45c, 0x3, 0x2, 0x2, 0x2, 0x45b, 0x457, 0x3, 0x2, 0x2, 0x2, 0x45b, 
    0x45c, 0x3, 0x2, 0x2, 0x2, 0x45c, 0x462, 0x3, 0x2, 0x2, 0x2, 0x45d, 
    0x45e, 0x7, 0x82, 0x2, 0x2, 0x45e, 0x45f, 0x5, 0xc0, 0x61, 0x2, 0x45f, 
    0x460, 0x7, 0x83, 0x2, 0x2, 0x460, 0x462, 0x3, 0x2, 0x2, 0x2, 0x461, 
    0x456, 0x3, 0x2, 0x2, 0x2, 0x461, 0x45d, 0x3, 0x2, 0x2, 0x2, 0x462, 
    0x46e, 0x3, 0x2, 0x2, 0x2, 0x463, 0x464, 0x9, 0xb, 0x2, 0x2, 0x464, 
    0x465, 0x7, 0x80, 0x2, 0x2, 0x465, 0x466, 0x5, 0xd6, 0x6c, 0x2, 0x466, 
    0x467, 0x7, 0x87, 0x2, 0x2, 0x467, 0x468, 0x5, 0x120, 0x91, 0x2, 0x468, 
    0x469, 0x7, 0x81, 0x2, 0x2, 0x469, 0x46a, 0x7, 0x82, 0x2, 0x2, 0x46a, 
    0x46b, 0x5, 0xc0, 0x61, 0x2, 0x46b, 0x46c, 0x7, 0x83, 0x2, 0x2, 0x46c, 
    0x46e, 0x3, 0x2, 0x2, 0x2, 0x46d, 0x44e, 0x3, 0x2, 0x2, 0x2, 0x46d, 
    0x463, 0x3, 0x2, 0x2, 0x2, 0x46e, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x46f, 0x474, 
    0x5, 0xc2, 0x62, 0x2, 0x470, 0x471, 0x7, 0x87, 0x2, 0x2, 0x471, 0x473, 
    0x5, 0xc2, 0x62, 0x2, 0x472, 0x470, 0x3, 0x2, 0x2, 0x2, 0x473, 0x476, 
    0x3, 0x2, 0x2, 0x2, 0x474, 0x472, 0x3, 0x2, 0x2, 0x2, 0x474, 0x475, 
    0x3, 0x2, 0x2, 0x2, 0x475, 0x478, 0x3, 0x2, 0x2, 0x2, 0x476, 0x474, 
    0x3, 0x2, 0x2, 0x2, 0x477, 0x479, 0x7, 0x87, 0x2, 0x2, 0x478, 0x477, 
    0x3, 0x2, 0x2, 0x2, 0x478, 0x479, 0x3, 0x2, 0x2, 0x2, 0x479, 0xc1, 0x3, 
    0x2, 0x2, 0x2, 0x47a, 0x47d, 0x5, 0xc4, 0x63, 0x2, 0x47b, 0x47c, 0x7, 
    0x8b, 0x2, 0x2, 0x47c, 0x47e, 0x5, 0x104, 0x83, 0x2, 0x47d, 0x47b, 0x3, 
    0x2, 0x2, 0x2, 0x47d, 0x47e, 0x3, 0x2, 0x2, 0x2, 0x47e, 0xc3, 0x3, 0x2, 
    0x2, 0x2, 0x47f, 0x482, 0x5, 0x120, 0x91, 0x2, 0x480, 0x482, 0x7, 0x9, 
    0x2, 0x2, 0x481, 0x47f, 0x3, 0x2, 0x2, 0x2, 0x481, 0x480, 0x3, 0x2, 
    0x2, 0x2, 0x482, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x483, 0x489, 0x5, 0x120, 
    0x91, 0x2, 0x484, 0x485, 0x7, 0x80, 0x2, 0x2, 0x485, 0x486, 0x5, 0xe0, 
    0x71, 0x2, 0x486, 0x487, 0x7, 0x81, 0x2, 0x2, 0x487, 0x489, 0x3, 0x2, 
    0x2, 0x2, 0x488, 0x483, 0x3, 0x2, 0x2, 0x2, 0x488, 0x484, 0x3, 0x2, 
    0x2, 0x2, 0x489, 0x48d, 0x3, 0x2, 0x2, 0x2, 0x48a, 0x48c, 0x5, 0xc8, 
    0x65, 0x2, 0x48b, 0x48a, 0x3, 0x2, 0x2, 0x2, 0x48c, 0x48f, 0x3, 0x2, 
    0x2, 0x2, 0x48d, 0x48b, 0x3, 0x2, 0x2, 0x2, 0x48d, 0x48e, 0x3, 0x2, 
    0x2, 0x2, 0x48e, 0x49b, 0x3, 0x2, 0x2, 0x2, 0x48f, 0x48d, 0x3, 0x2, 
    0x2, 0x2, 0x490, 0x491, 0x7, 0x80, 0x2, 0x2, 0x491, 0x493, 0x7, 0xa0, 
    0x2, 0x2, 0x492, 0x494, 0x5, 0xac, 0x57, 0x2, 0x493, 0x492, 0x3, 0x2, 
    0x2, 0x2, 0x493, 0x494, 0x3, 0x2, 0x2, 0x2, 0x494, 0x496, 0x3, 0x2, 
    0x2, 0x2, 0x495, 0x497, 0x5, 0x120, 0x91, 0x2, 0x496, 0x495, 0x3, 0x2, 
    0x2, 0x2, 0x496, 0x497, 0x3, 0x2, 0x2, 0x2, 0x497, 0x498, 0x3, 0x2, 
    0x2, 0x2, 0x498, 0x499, 0x7, 0x81, 0x2, 0x2, 0x499, 0x49b, 0x5, 0x56, 
    0x2c, 0x2, 0x49a, 0x488, 0x3, 0x2, 0x2, 0x2, 0x49a, 0x490, 0x3, 0x2, 
    0x2, 0x2, 0x49b, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x49c, 0x49e, 0x7, 0x84, 
    0x2, 0x2, 0x49d, 0x49f, 0x5, 0x10c, 0x87, 0x2, 0x49e, 0x49d, 0x3, 0x2, 
    0x2, 0x2, 0x49e, 0x49f, 0x3, 0x2, 0x2, 0x2, 0x49f, 0x4a0, 0x3, 0x2, 
    0x2, 0x2, 0x4a0, 0x4a1, 0x7, 0x85, 0x2, 0x2, 0x4a1, 0xc9, 0x3, 0x2, 
    0x2, 0x2, 0x4a2, 0x4a5, 0x5, 0xdc, 0x6f, 0x2, 0x4a3, 0x4a4, 0x7, 0x87, 
    0x2, 0x2, 0x4a4, 0x4a6, 0x7, 0xac, 0x2, 0x2, 0x4a5, 0x4a3, 0x3, 0x2, 
    0x2, 0x2, 0x4a5, 0x4a6, 0x3, 0x2, 0x2, 0x2, 0x4a6, 0xcb, 0x3, 0x2, 0x2, 
    0x2, 0x4a7, 0x4a9, 0x7, 0x9c, 0x2, 0x2, 0x4a8, 0x4aa, 0x5, 0x9a, 0x4e, 
    0x2, 0x4a9, 0x4a8, 0x3, 0x2, 0x2, 0x2, 0x4a9, 0x4aa, 0x3, 0x2, 0x2, 
    0x2, 0x4aa, 0x4ac, 0x3, 0x2, 0x2, 0x2, 0x4ab, 0x4ad, 0x5, 0xcc, 0x67, 
    0x2, 0x4ac, 0x4ab, 0x3, 0x2, 0x2, 0x2, 0x4ac, 0x4ad, 0x3, 0x2, 0x2, 
    0x2, 0x4ad, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x4ae, 0x4ba, 0x5, 0x120, 0x91, 
    0x2, 0x4af, 0x4b0, 0x7, 0x80, 0x2, 0x2, 0x4b0, 0x4b5, 0x5, 0x11a, 0x8e, 
    0x2, 0x4b1, 0x4b2, 0x7, 0x87, 0x2, 0x2, 0x4b2, 0x4b4, 0x5, 0x11a, 0x8e, 
    0x2, 0x4b3, 0x4b1, 0x3, 0x2, 0x2, 0x2, 0x4b4, 0x4b7, 0x3, 0x2, 0x2, 
    0x2, 0x4b5, 0x4b3, 0x3, 0x2, 0x2, 0x2, 0x4b5, 0x4b6, 0x3, 0x2, 0x2, 
    0x2, 0x4b6, 0x4b8, 0x3, 0x2, 0x2, 0x2, 0x4b7, 0x4b5, 0x3, 0x2, 0x2, 
    0x2, 0x4b8, 0x4b9, 0x7, 0x81, 0x2, 0x2, 0x4b9, 0x4bb, 0x3, 0x2, 0x2, 
    0x2, 0x4ba, 0x4af, 0x3, 0x2, 0x2, 0x2, 0x4ba, 0x4bb, 0x3, 0x2, 0x2, 
    0x2, 0x4bb, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x4bc, 0x4c1, 0x7, 0x82, 0x2, 
    0x2, 0x4bd, 0x4bf, 0x5, 0x102, 0x82, 0x2, 0x4be, 0x4c0, 0x7, 0x87, 0x2, 
    0x2, 0x4bf, 0x4be, 0x3, 0x2, 0x2, 0x2, 0x4bf, 0x4c0, 0x3, 0x2, 0x2, 
    0x2, 0x4c0, 0x4c2, 0x3, 0x2, 0x2, 0x2, 0x4c1, 0x4bd, 0x3, 0x2, 0x2, 
    0x2, 0x4c1, 0x4c2, 0x3, 0x2, 0x2, 0x2, 0x4c2, 0x4c3, 0x3, 0x2, 0x2, 
    0x2, 0x4c3, 0x4c4, 0x7, 0x83, 0x2, 0x2, 0x4c4, 0xd1, 0x3, 0x2, 0x2, 
    0x2, 0x4c5, 0x4d3, 0x7, 0x82, 0x2, 0x2, 0x4c6, 0x4c7, 0x7, 0x88, 0x2, 
    0x2, 0x4c7, 0x4cd, 0x5, 0x104, 0x83, 0x2, 0x4c8, 0x4c9, 0x7, 0x87, 0x2, 
    0x2, 0x4c9, 0x4ca, 0x7, 0x88, 0x2, 0x2, 0x4ca, 0x4cc, 0x5, 0x104, 0x83, 
    0x2, 0x4cb, 0x4c8, 0x3, 0x2, 0x2, 0x2, 0x4cc, 0x4cf, 0x3, 0x2, 0x2, 
    0x2, 0x4cd, 0x4cb, 0x3, 0x2, 0x2, 0x2, 0x4cd, 0x4ce, 0x3, 0x2, 0x2, 
    0x2, 0x4ce, 0x4d1, 0x3, 0x2, 0x2, 0x2, 0x4cf, 0x4cd, 0x3, 0x2, 0x2, 
    0x2, 0x4d0, 0x4d2, 0x7, 0x87, 0x2, 0x2, 0x4d1, 0x4d0, 0x3, 0x2, 0x2, 
    0x2, 0x4d1, 0x4d2, 0x3, 0x2, 0x2, 0x2, 0x4d2, 0x4d4, 0x3, 0x2, 0x2, 
    0x2, 0x4d3, 0x4c6, 0x3, 0x2, 0x2, 0x2, 0x4d3, 0x4d4, 0x3, 0x2, 0x2, 
    0x2, 0x4d4, 0x4d5, 0x3, 0x2, 0x2, 0x2, 0x4d5, 0x4d6, 0x7, 0x83, 0x2, 
    0x2, 0x4d6, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x4d7, 0x4dc, 0x5, 0x10a, 0x86, 
    0x2, 0x4d8, 0x4d9, 0x7, 0x87, 0x2, 0x2, 0x4d9, 0x4db, 0x5, 0x10a, 0x86, 
    0x2, 0x4da, 0x4d8, 0x3, 0x2, 0x2, 0x2, 0x4db, 0x4de, 0x3, 0x2, 0x2, 
    0x2, 0x4dc, 0x4da, 0x3, 0x2, 0x2, 0x2, 0x4dc, 0x4dd, 0x3, 0x2, 0x2, 
    0x2, 0x4dd, 0x4e0, 0x3, 0x2, 0x2, 0x2, 0x4de, 0x4dc, 0x3, 0x2, 0x2, 
    0x2, 0x4df, 0x4e1, 0x7, 0x87, 0x2, 0x2, 0x4e0, 0x4df, 0x3, 0x2, 0x2, 
    0x2, 0x4e0, 0x4e1, 0x3, 0x2, 0x2, 0x2, 0x4e1, 0xd5, 0x3, 0x2, 0x2, 0x2, 
    0x4e2, 0x4e4, 0x5, 0xa6, 0x54, 0x2, 0x4e3, 0x4e5, 0x5, 0xd8, 0x6d, 0x2, 
    0x4e4, 0x4e3, 0x3, 0x2, 0x2, 0x2, 0x4e4, 0x4e5, 0x3, 0x2, 0x2, 0x2, 
    0x4e5, 0x4e8, 0x3, 0x2, 0x2, 0x2, 0x4e6, 0x4e8, 0x5, 0x48, 0x25, 0x2, 
    0x4e7, 0x4e2, 0x3, 0x2, 0x2, 0x2, 0x4e7, 0x4e6, 0x3, 0x2, 0x2, 0x2, 
    0x4e8, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x4e9, 0x4eb, 0x5, 0xcc, 0x67, 0x2, 
    0x4ea, 0x4ec, 0x5, 0xd8, 0x6d, 0x2, 0x4eb, 0x4ea, 0x3, 0x2, 0x2, 0x2, 
    0x4eb, 0x4ec, 0x3, 0x2, 0x2, 0x2, 0x4ec, 0x501, 0x3, 0x2, 0x2, 0x2, 
    0x4ed, 0x4ef, 0x7, 0x80, 0x2, 0x2, 0x4ee, 0x4f0, 0x5, 0xd8, 0x6d, 0x2, 
    0x4ef, 0x4ee, 0x3, 0x2, 0x2, 0x2, 0x4ef, 0x4f0, 0x3, 0x2, 0x2, 0x2, 
    0x4f0, 0x4f1, 0x3, 0x2, 0x2, 0x2, 0x4f1, 0x4f3, 0x7, 0x81, 0x2, 0x2, 
    0x4f2, 0x4f4, 0x5, 0xda, 0x6e, 0x2, 0x4f3, 0x4f2, 0x3, 0x2, 0x2, 0x2, 
    0x4f4, 0x4f5, 0x3, 0x2, 0x2, 0x2, 0x4f5, 0x4f3, 0x3, 0x2, 0x2, 0x2, 
    0x4f5, 0x4f6, 0x3, 0x2, 0x2, 0x2, 0x4f6, 0x501, 0x3, 0x2, 0x2, 0x2, 
    0x4f7, 0x4f9, 0x7, 0x84, 0x2, 0x2, 0x4f8, 0x4fa, 0x5, 0x10c, 0x87, 0x2, 
    0x4f9, 0x4f8, 0x3, 0x2, 0x2, 0x2, 0x4f9, 0x4fa, 0x3, 0x2, 0x2, 0x2, 
    0x4fa, 0x4fb, 0x3, 0x2, 0x2, 0x2, 0x4fb, 0x4fd, 0x7, 0x85, 0x2, 0x2, 
    0x4fc, 0x4f7, 0x3, 0x2, 0x2, 0x2, 0x4fd, 0x4fe, 0x3, 0x2, 0x2, 0x2, 
    0x4fe, 0x4fc, 0x3, 0x2, 0x2, 0x2, 0x4fe, 0x4ff, 0x3, 0x2, 0x2, 0x2, 
    0x4ff, 0x501, 0x3, 0x2, 0x2, 0x2, 0x500, 0x4e9, 0x3, 0x2, 0x2, 0x2, 
    0x500, 0x4ed, 0x3, 0x2, 0x2, 0x2, 0x500, 0x4fc, 0x3, 0x2, 0x2, 0x2, 
    0x501, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x502, 0x504, 0x7, 0x84, 0x2, 0x2, 
    0x503, 0x505, 0x5, 0x10c, 0x87, 0x2, 0x504, 0x503, 0x3, 0x2, 0x2, 0x2, 
    0x504, 0x505, 0x3, 0x2, 0x2, 0x2, 0x505, 0x506, 0x3, 0x2, 0x2, 0x2, 
    0x506, 0x50d, 0x7, 0x85, 0x2, 0x2, 0x507, 0x509, 0x7, 0x80, 0x2, 0x2, 
    0x508, 0x50a, 0x5, 0xdc, 0x6f, 0x2, 0x509, 0x508, 0x3, 0x2, 0x2, 0x2, 
    0x509, 0x50a, 0x3, 0x2, 0x2, 0x2, 0x50a, 0x50b, 0x3, 0x2, 0x2, 0x2, 
    0x50b, 0x50d, 0x7, 0x81, 0x2, 0x2, 0x50c, 0x502, 0x3, 0x2, 0x2, 0x2, 
    0x50c, 0x507, 0x3, 0x2, 0x2, 0x2, 0x50d, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x50e, 
    0x513, 0x5, 0xde, 0x70, 0x2, 0x50f, 0x510, 0x7, 0x87, 0x2, 0x2, 0x510, 
    0x512, 0x5, 0xde, 0x70, 0x2, 0x511, 0x50f, 0x3, 0x2, 0x2, 0x2, 0x512, 
    0x515, 0x3, 0x2, 0x2, 0x2, 0x513, 0x511, 0x3, 0x2, 0x2, 0x2, 0x513, 
    0x514, 0x3, 0x2, 0x2, 0x2, 0x514, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x515, 0x513, 
    0x3, 0x2, 0x2, 0x2, 0x516, 0x517, 0x5, 0x9a, 0x4e, 0x2, 0x517, 0x518, 
    0x5, 0xe0, 0x71, 0x2, 0x518, 0x51b, 0x3, 0x2, 0x2, 0x2, 0x519, 0x51b, 
    0x7, 0x22, 0x2, 0x2, 0x51a, 0x516, 0x3, 0x2, 0x2, 0x2, 0x51a, 0x519, 
    0x3, 0x2, 0x2, 0x2, 0x51b, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x51c, 0x51e, 0x5, 
    0xcc, 0x67, 0x2, 0x51d, 0x51c, 0x3, 0x2, 0x2, 0x2, 0x51d, 0x51e, 0x3, 
    0x2, 0x2, 0x2, 0x51e, 0x51f, 0x3, 0x2, 0x2, 0x2, 0x51f, 0x520, 0x5, 
    0xc6, 0x64, 0x2, 0x520, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x521, 0x523, 0x5, 
    0xe4, 0x73, 0x2, 0x522, 0x524, 0x7, 0x86, 0x2, 0x2, 0x523, 0x522, 0x3, 
    0x2, 0x2, 0x2, 0x523, 0x524, 0x3, 0x2, 0x2, 0x2, 0x524, 0x54b, 0x3, 
    0x2, 0x2, 0x2, 0x525, 0x527, 0x5, 0xe8, 0x75, 0x2, 0x526, 0x528, 0x7, 
    0x86, 0x2, 0x2, 0x527, 0x526, 0x3, 0x2, 0x2, 0x2, 0x527, 0x528, 0x3, 
    0x2, 0x2, 0x2, 0x528, 0x54b, 0x3, 0x2, 0x2, 0x2, 0x529, 0x52b, 0x5, 
    0xea, 0x76, 0x2, 0x52a, 0x52c, 0x7, 0x86, 0x2, 0x2, 0x52b, 0x52a, 0x3, 
    0x2, 0x2, 0x2, 0x52b, 0x52c, 0x3, 0x2, 0x2, 0x2, 0x52c, 0x54b, 0x3, 
    0x2, 0x2, 0x2, 0x52d, 0x52f, 0x5, 0xf4, 0x7b, 0x2, 0x52e, 0x530, 0x7, 
    0x86, 0x2, 0x2, 0x52f, 0x52e, 0x3, 0x2, 0x2, 0x2, 0x52f, 0x530, 0x3, 
    0x2, 0x2, 0x2, 0x530, 0x54b, 0x3, 0x2, 0x2, 0x2, 0x531, 0x533, 0x5, 
    0x100, 0x81, 0x2, 0x532, 0x534, 0x7, 0x86, 0x2, 0x2, 0x533, 0x532, 0x3, 
    0x2, 0x2, 0x2, 0x533, 0x534, 0x3, 0x2, 0x2, 0x2, 0x534, 0x54b, 0x3, 
    0x2, 0x2, 0x2, 0x535, 0x537, 0x5, 0x76, 0x3c, 0x2, 0x536, 0x538, 0x7, 
    0x86, 0x2, 0x2, 0x537, 0x536, 0x3, 0x2, 0x2, 0x2, 0x537, 0x538, 0x3, 
    0x2, 0x2, 0x2, 0x538, 0x54b, 0x3, 0x2, 0x2, 0x2, 0x539, 0x53b, 0x5, 
    0x78, 0x3d, 0x2, 0x53a, 0x53c, 0x7, 0x86, 0x2, 0x2, 0x53b, 0x53a, 0x3, 
    0x2, 0x2, 0x2, 0x53b, 0x53c, 0x3, 0x2, 0x2, 0x2, 0x53c, 0x54b, 0x3, 
    0x2, 0x2, 0x2, 0x53d, 0x53f, 0x5, 0x70, 0x39, 0x2, 0x53e, 0x540, 0x7, 
    0x86, 0x2, 0x2, 0x53f, 0x53e, 0x3, 0x2, 0x2, 0x2, 0x53f, 0x540, 0x3, 
    0x2, 0x2, 0x2, 0x540, 0x54b, 0x3, 0x2, 0x2, 0x2, 0x541, 0x543, 0x5, 
    0x72, 0x3a, 0x2, 0x542, 0x544, 0x7, 0x86, 0x2, 0x2, 0x543, 0x542, 0x3, 
    0x2, 0x2, 0x2, 0x543, 0x544, 0x3, 0x2, 0x2, 0x2, 0x544, 0x54b, 0x3, 
    0x2, 0x2, 0x2, 0x545, 0x547, 0x5, 0x102, 0x82, 0x2, 0x546, 0x548, 0x7, 
    0x86, 0x2, 0x2, 0x547, 0x546, 0x3, 0x2, 0x2, 0x2, 0x547, 0x548, 0x3, 
    0x2, 0x2, 0x2, 0x548, 0x54b, 0x3, 0x2, 0x2, 0x2, 0x549, 0x54b, 0x7, 
    0x86, 0x2, 0x2, 0x54a, 0x521, 0x3, 0x2, 0x2, 0x2, 0x54a, 0x525, 0x3, 
    0x2, 0x2, 0x2, 0x54a, 0x529, 0x3, 0x2, 0x2, 0x2, 0x54a, 0x52d, 0x3, 
    0x2, 0x2, 0x2, 0x54a, 0x531, 0x3, 0x2, 0x2, 0x2, 0x54a, 0x535, 0x3, 
    0x2, 0x2, 0x2, 0x54a, 0x539, 0x3, 0x2, 0x2, 0x2, 0x54a, 0x53d, 0x3, 
    0x2, 0x2, 0x2, 0x54a, 0x541, 0x3, 0x2, 0x2, 0x2, 0x54a, 0x545, 0x3, 
    0x2, 0x2, 0x2, 0x54a, 0x549, 0x3, 0x2, 0x2, 0x2, 0x54b, 0xe3, 0x3, 0x2, 
    0x2, 0x2, 0x54c, 0x54d, 0x5, 0x120, 0x91, 0x2, 0x54d, 0x54e, 0x7, 0x91, 
    0x2, 0x2, 0x54e, 0x54f, 0x5, 0xe2, 0x72, 0x2, 0x54f, 0xe5, 0x3, 0x2, 
    0x2, 0x2, 0x550, 0x553, 0x5, 0x10c, 0x87, 0x2, 0x551, 0x552, 0x7, 0xac, 
    0x2, 0x2, 0x552, 0x554, 0x5, 0x10c, 0x87, 0x2, 0x553, 0x551, 0x3, 0x2, 
    0x2, 0x2, 0x553, 0x554, 0x3, 0x2, 0x2, 0x2, 0x554, 0xe7, 0x3, 0x2, 0x2, 
    0x2, 0x555, 0x55a, 0x7, 0x82, 0x2, 0x2, 0x556, 0x559, 0x5, 0x8c, 0x47, 
    0x2, 0x557, 0x559, 0x5, 0xe2, 0x72, 0x2, 0x558, 0x556, 0x3, 0x2, 0x2, 
    0x2, 0x558, 0x557, 0x3, 0x2, 0x2, 0x2, 0x559, 0x55c, 0x3, 0x2, 0x2, 
    0x2, 0x55a, 0x558, 0x3, 0x2, 0x2, 0x2, 0x55a, 0x55b, 0x3, 0x2, 0x2, 
    0x2, 0x55b, 0x55d, 0x3, 0x2, 0x2, 0x2, 0x55c, 0x55a, 0x3, 0x2, 0x2, 
    0x2, 0x55d, 0x55e, 0x7, 0x83, 0x2, 0x2, 0x55e, 0xe9, 0x3, 0x2, 0x2, 
    0x2, 0x55f, 0x560, 0x7, 0x12, 0x2, 0x2, 0x560, 0x561, 0x7, 0x80, 0x2, 
    0x2, 0x561, 0x562, 0x5, 0x104, 0x83, 0x2, 0x562, 0x563, 0x7, 0x81, 0x2, 
    0x2, 0x563, 0x566, 0x5, 0xe2, 0x72, 0x2, 0x564, 0x565, 0x7, 0xc, 0x2, 
    0x2, 0x565, 0x567, 0x5, 0xe2, 0x72, 0x2, 0x566, 0x564, 0x3, 0x2, 0x2, 
    0x2, 0x566, 0x567, 0x3, 0x2, 0x2, 0x2, 0x567, 0x56a, 0x3, 0x2, 0x2, 
    0x2, 0x568, 0x56a, 0x5, 0xec, 0x77, 0x2, 0x569, 0x55f, 0x3, 0x2, 0x2, 
    0x2, 0x569, 0x568, 0x3, 0x2, 0x2, 0x2, 0x56a, 0xeb, 0x3, 0x2, 0x2, 0x2, 
    0x56b, 0x56c, 0x7, 0x1e, 0x2, 0x2, 0x56c, 0x56d, 0x7, 0x80, 0x2, 0x2, 
    0x56d, 0x56e, 0x5, 0x104, 0x83, 0x2, 0x56e, 0x56f, 0x7, 0x81, 0x2, 0x2, 
    0x56f, 0x570, 0x5, 0xee, 0x78, 0x2, 0x570, 0xed, 0x3, 0x2, 0x2, 0x2, 
    0x571, 0x575, 0x7, 0x82, 0x2, 0x2, 0x572, 0x574, 0x5, 0xf0, 0x79, 0x2, 
    0x573, 0x572, 0x3, 0x2, 0x2, 0x2, 0x574, 0x577, 0x3, 0x2, 0x2, 0x2, 
    0x575, 0x573, 0x3, 0x2, 0x2, 0x2, 0x575, 0x576, 0x3, 0x2, 0x2, 0x2, 
    0x576, 0x578, 0x3, 0x2, 0x2, 0x2, 0x577, 0x575, 0x3, 0x2, 0x2, 0x2, 
    0x578, 0x579, 0x7, 0x83, 0x2, 0x2, 0x579, 0xef, 0x3, 0x2, 0x2, 0x2, 
    0x57a, 0x57c, 0x5, 0xf2, 0x7a, 0x2, 0x57b, 0x57a, 0x3, 0x2, 0x2, 0x2, 
    0x57c, 0x57d, 0x3, 0x2, 0x2, 0x2, 0x57d, 0x57b, 0x3, 0x2, 0x2, 0x2, 
    0x57d, 0x57e, 0x3, 0x2, 0x2, 0x2, 0x57e, 0x580, 0x3, 0x2, 0x2, 0x2, 
    0x57f, 0x581, 0x5, 0xe2, 0x72, 0x2, 0x580, 0x57f, 0x3, 0x2, 0x2, 0x2, 
    0x581, 0x582, 0x3, 0x2, 0x2, 0x2, 0x582, 0x580, 0x3, 0x2, 0x2, 0x2, 
    0x582, 0x583, 0x3, 0x2, 0x2, 0x2, 0x583, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x584, 
    0x58a, 0x7, 0x5, 0x2, 0x2, 0x585, 0x58b, 0x5, 0xe6, 0x74, 0x2, 0x586, 
    0x587, 0x7, 0x80, 0x2, 0x2, 0x587, 0x588, 0x5, 0xe6, 0x74, 0x2, 0x588, 
    0x589, 0x7, 0x81, 0x2, 0x2, 0x589, 0x58b, 0x3, 0x2, 0x2, 0x2, 0x58a, 
    0x585, 0x3, 0x2, 0x2, 0x2, 0x58a, 0x586, 0x3, 0x2, 0x2, 0x2, 0x58b, 
    0x58c, 0x3, 0x2, 0x2, 0x2, 0x58c, 0x58d, 0x7, 0x91, 0x2, 0x2, 0x58d, 
    0x591, 0x3, 0x2, 0x2, 0x2, 0x58e, 0x58f, 0x7, 0x9, 0x2, 0x2, 0x58f, 
    0x591, 0x7, 0x91, 0x2, 0x2, 0x590, 0x584, 0x3, 0x2, 0x2, 0x2, 0x590, 
    0x58e, 0x3, 0x2, 0x2, 0x2, 0x591, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x592, 0x597, 
    0x5, 0xf6, 0x7c, 0x2, 0x593, 0x597, 0x5, 0xf8, 0x7d, 0x2, 0x594, 0x597, 
    0x5, 0xfa, 0x7e, 0x2, 0x595, 0x597, 0x5, 0xfe, 0x80, 0x2, 0x596, 0x592, 
    0x3, 0x2, 0x2, 0x2, 0x596, 0x593, 0x3, 0x2, 0x2, 0x2, 0x596, 0x594, 
    0x3, 0x2, 0x2, 0x2, 0x596, 0x595, 0x3, 0x2, 0x2, 0x2, 0x597, 0xf5, 0x3, 
    0x2, 0x2, 0x2, 0x598, 0x599, 0x7, 0x24, 0x2, 0x2, 0x599, 0x59a, 0x7, 
    0x80, 0x2, 0x2, 0x59a, 0x59b, 0x5, 0x104, 0x83, 0x2, 0x59b, 0x59c, 0x7, 
    0x81, 0x2, 0x2, 0x59c, 0x59d, 0x5, 0xe2, 0x72, 0x2, 0x59d, 0xf7, 0x3, 
    0x2, 0x2, 0x2, 0x59e, 0x59f, 0x7, 0xa, 0x2, 0x2, 0x59f, 0x5a0, 0x5, 
    0xe2, 0x72, 0x2, 0x5a0, 0x5a1, 0x7, 0x24, 0x2, 0x2, 0x5a1, 0x5a2, 0x7, 
    0x80, 0x2, 0x2, 0x5a2, 0x5a3, 0x5, 0x104, 0x83, 0x2, 0x5a3, 0x5a4, 0x7, 
    0x81, 0x2, 0x2, 0x5a4, 0x5a5, 0x7, 0x86, 0x2, 0x2, 0x5a5, 0xf9, 0x3, 
    0x2, 0x2, 0x2, 0x5a6, 0x5a7, 0x7, 0x10, 0x2, 0x2, 0x5a7, 0x5a9, 0x7, 
    0x80, 0x2, 0x2, 0x5a8, 0x5aa, 0x5, 0xfc, 0x7f, 0x2, 0x5a9, 0x5a8, 0x3, 
    0x2, 0x2, 0x2, 0x5a9, 0x5aa, 0x3, 0x2, 0x2, 0x2, 0x5aa, 0x5ab, 0x3, 
    0x2, 0x2, 0x2, 0x5ab, 0x5ad, 0x7, 0x86, 0x2, 0x2, 0x5ac, 0x5ae, 0x5, 
    0x104, 0x83, 0x2, 0x5ad, 0x5ac, 0x3, 0x2, 0x2, 0x2, 0x5ad, 0x5ae, 0x3, 
    0x2, 0x2, 0x2, 0x5ae, 0x5af, 0x3, 0x2, 0x2, 0x2, 0x5af, 0x5b1, 0x7, 
    0x86, 0x2, 0x2, 0x5b0, 0x5b2, 0x5, 0x102, 0x82, 0x2, 0x5b1, 0x5b0, 0x3, 
    0x2, 0x2, 0x2, 0x5b1, 0x5b2, 0x3, 0x2, 0x2, 0x2, 0x5b2, 0x5b3, 0x3, 
    0x2, 0x2, 0x2, 0x5b3, 0x5b4, 0x7, 0x81, 0x2, 0x2, 0x5b4, 0x5b5, 0x5, 
    0xe2, 0x72, 0x2, 0x5b5, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x5b6, 0x5b7, 0x5, 
    0x9a, 0x4e, 0x2, 0x5b7, 0x5b8, 0x5, 0x9e, 0x50, 0x2, 0x5b8, 0x5bb, 0x3, 
    0x2, 0x2, 0x2, 0x5b9, 0x5bb, 0x5, 0x102, 0x82, 0x2, 0x5ba, 0x5b6, 0x3, 
    0x2, 0x2, 0x2, 0x5ba, 0x5b9, 0x3, 0x2, 0x2, 0x2, 0x5bb, 0xfd, 0x3, 0x2, 
    0x2, 0x2, 0x5bc, 0x5bd, 0x7, 0x10, 0x2, 0x2, 0x5bd, 0x5be, 0x7, 0x80, 
    0x2, 0x2, 0x5be, 0x5bf, 0x5, 0x6e, 0x38, 0x2, 0x5bf, 0x5c1, 0x7, 0x30, 
    0x2, 0x2, 0x5c0, 0x5c2, 0x5, 0x104, 0x83, 0x2, 0x5c1, 0x5c0, 0x3, 0x2, 
    0x2, 0x2, 0x5c1, 0x5c2, 0x3, 0x2, 0x2, 0x2, 0x5c2, 0x5c3, 0x3, 0x2, 
    0x2, 0x2, 0x5c3, 0x5c4, 0x7, 0x81, 0x2, 0x2, 0x5c4, 0x5c5, 0x5, 0xe2, 
    0x72, 0x2, 0x5c5, 0xff, 0x3, 0x2, 0x2, 0x2, 0x5c6, 0x5c7, 0x7, 0x11, 
    0x2, 0x2, 0x5c7, 0x5cf, 0x5, 0x120, 0x91, 0x2, 0x5c8, 0x5cf, 0x7, 0x8, 
    0x2, 0x2, 0x5c9, 0x5cf, 0x7, 0x4, 0x2, 0x2, 0x5ca, 0x5cc, 0x7, 0x18, 
    0x2, 0x2, 0x5cb, 0x5cd, 0x5, 0x104, 0x83, 0x2, 0x5cc, 0x5cb, 0x3, 0x2, 
    0x2, 0x2, 0x5cc, 0x5cd, 0x3, 0x2, 0x2, 0x2, 0x5cd, 0x5cf, 0x3, 0x2, 
    0x2, 0x2, 0x5ce, 0x5c6, 0x3, 0x2, 0x2, 0x2, 0x5ce, 0x5c8, 0x3, 0x2, 
    0x2, 0x2, 0x5ce, 0x5c9, 0x3, 0x2, 0x2, 0x2, 0x5ce, 0x5ca, 0x3, 0x2, 
    0x2, 0x2, 0x5cf, 0x101, 0x3, 0x2, 0x2, 0x2, 0x5d0, 0x5d5, 0x5, 0x104, 
    0x83, 0x2, 0x5d1, 0x5d2, 0x7, 0x87, 0x2, 0x2, 0x5d2, 0x5d4, 0x5, 0x104, 
    0x83, 0x2, 0x5d3, 0x5d1, 0x3, 0x2, 0x2, 0x2, 0x5d4, 0x5d7, 0x3, 0x2, 
    0x2, 0x2, 0x5d5, 0x5d3, 0x3, 0x2, 0x2, 0x2, 0x5d5, 0x5d6, 0x3, 0x2, 
    0x2, 0x2, 0x5d6, 0x103, 0x3, 0x2, 0x2, 0x2, 0x5d7, 0x5d5, 0x3, 0x2, 
    0x2, 0x2, 0x5d8, 0x5d9, 0x8, 0x83, 0x1, 0x2, 0x5d9, 0x5e3, 0x5, 0x108, 
    0x85, 0x2, 0x5da, 0x5db, 0x7, 0x80, 0x2, 0x2, 0x5db, 0x5dc, 0x5, 0xe8, 
    0x75, 0x2, 0x5dc, 0x5dd, 0x7, 0x81, 0x2, 0x2, 0x5dd, 0x5e3, 0x3, 0x2, 
    0x2, 0x2, 0x5de, 0x5df, 0x5, 0x10e, 0x88, 0x2, 0x5df, 0x5e0, 0x5, 0x106, 
    0x84, 0x2, 0x5e0, 0x5e1, 0x5, 0x104, 0x83, 0x3, 0x5e1, 0x5e3, 0x3, 0x2, 
    0x2, 0x2, 0x5e2, 0x5d8, 0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5da, 0x3, 0x2, 
    0x2, 0x2, 0x5e2, 0x5de, 0x3, 0x2, 0x2, 0x2, 0x5e3, 0x610, 0x3, 0x2, 
    0x2, 0x2, 0x5e4, 0x5e5, 0xc, 0xf, 0x2, 0x2, 0x5e5, 0x5e6, 0x9, 0xc, 
    0x2, 0x2, 0x5e6, 0x60f, 0x5, 0x104, 0x83, 0x10, 0x5e7, 0x5e8, 0xc, 0xe, 
    0x2, 0x2, 0x5e8, 0x5e9, 0x9, 0xd, 0x2, 0x2, 0x5e9, 0x60f, 0x5, 0x104, 
    0x83, 0xf, 0x5ea, 0x5ef, 0xc, 0xd, 0x2, 0x2, 0x5eb, 0x5ec, 0x7, 0x8d, 
    0x2, 0x2, 0x5ec, 0x5f0, 0x7, 0x8d, 0x2, 0x2, 0x5ed, 0x5ee, 0x7, 0x8c, 
    0x2, 0x2, 0x5ee, 0x5f0, 0x7, 0x8c, 0x2, 0x2, 0x5ef, 0x5eb, 0x3, 0x2, 
    0x2, 0x2, 0x5ef, 0x5ed, 0x3, 0x2, 0x2, 0x2, 0x5f0, 0x5f1, 0x3, 0x2, 
    0x2, 0x2, 0x5f1, 0x60f, 0x5, 0x104, 0x83, 0xe, 0x5f2, 0x5f3, 0xc, 0xc, 
    0x2, 0x2, 0x5f3, 0x5f4, 0x9, 0xe, 0x2, 0x2, 0x5f4, 0x60f, 0x5, 0x104, 
    0x83, 0xd, 0x5f5, 0x5f6, 0xc, 0xb, 0x2, 0x2, 0x5f6, 0x5f7, 0x9, 0xf, 
    0x2, 0x2, 0x5f7, 0x60f, 0x5, 0x104, 0x83, 0xc, 0x5f8, 0x5f9, 0xc, 0xa, 
    0x2, 0x2, 0x5f9, 0x5fa, 0x7, 0x9e, 0x2, 0x2, 0x5fa, 0x60f, 0x5, 0x104, 
    0x83, 0xb, 0x5fb, 0x5fc, 0xc, 0x9, 0x2, 0x2, 0x5fc, 0x5fd, 0x7, 0xa0, 
    0x2, 0x2, 0x5fd, 0x60f, 0x5, 0x104, 0x83, 0xa, 0x5fe, 0x5ff, 0xc, 0x8, 
    0x2, 0x2, 0x5ff, 0x600, 0x7, 0x9f, 0x2, 0x2, 0x600, 0x60f, 0x5, 0x104, 
    0x83, 0x9, 0x601, 0x602, 0xc, 0x7, 0x2, 0x2, 0x602, 0x603, 0x7, 0x96, 
    0x2, 0x2, 0x603, 0x60f, 0x5, 0x104, 0x83, 0x8, 0x604, 0x605, 0xc, 0x6, 
    0x2, 0x2, 0x605, 0x606, 0x7, 0x97, 0x2, 0x2, 0x606, 0x60f, 0x5, 0x104, 
    0x83, 0x7, 0x607, 0x608, 0xc, 0x5, 0x2, 0x2, 0x608, 0x60a, 0x7, 0x90, 
    0x2, 0x2, 0x609, 0x60b, 0x5, 0x104, 0x83, 0x2, 0x60a, 0x609, 0x3, 0x2, 
    0x2, 0x2, 0x60a, 0x60b, 0x3, 0x2, 0x2, 0x2, 0x60b, 0x60c, 0x3, 0x2, 
    0x2, 0x2, 0x60c, 0x60d, 0x7, 0x91, 0x2, 0x2, 0x60d, 0x60f, 0x5, 0x104, 
    0x83, 0x6, 0x60e, 0x5e4, 0x3, 0x2, 0x2, 0x2, 0x60e, 0x5e7, 0x3, 0x2, 
    0x2, 0x2, 0x60e, 0x5ea, 0x3, 0x2, 0x2, 0x2, 0x60e, 0x5f2, 0x3, 0x2, 
    0x2, 0x2, 0x60e, 0x5f5, 0x3, 0x2, 0x2, 0x2, 0x60e, 0x5f8, 0x3, 0x2, 
    0x2, 0x2, 0x60e, 0x5fb, 0x3, 0x2, 0x2, 0x2, 0x60e, 0x5fe, 0x3, 0x2, 
    0x2, 0x2, 0x60e, 0x601, 0x3, 0x2, 0x2, 0x2, 0x60e, 0x604, 0x3, 0x2, 
    0x2, 0x2, 0x60e, 0x607, 0x3, 0x2, 0x2, 0x2, 0x60f, 0x612, 0x3, 0x2, 
    0x2, 0x2, 0x610, 0x60e, 0x3, 0x2, 0x2, 0x2, 0x610, 0x611, 0x3, 0x2, 
    0x2, 0x2, 0x611, 0x105, 0x3, 0x2, 0x2, 0x2, 0x612, 0x610, 0x3, 0x2, 
    0x2, 0x2, 0x613, 0x614, 0x9, 0x10, 0x2, 0x2, 0x614, 0x107, 0x3, 0x2, 
    0x2, 0x2, 0x615, 0x61f, 0x5, 0x10e, 0x88, 0x2, 0x616, 0x617, 0x7, 0x80, 
    0x2, 0x2, 0x617, 0x618, 0x5, 0xd6, 0x6c, 0x2, 0x618, 0x619, 0x7, 0x81, 
    0x2, 0x2, 0x619, 0x61c, 0x3, 0x2, 0x2, 0x2, 0x61a, 0x61d, 0x5, 0x108, 
    0x85, 0x2, 0x61b, 0x61d, 0x5, 0x10a, 0x86, 0x2, 0x61c, 0x61a, 0x3, 0x2, 
    0x2, 0x2, 0x61c, 0x61b, 0x3, 0x2, 0x2, 0x2, 0x61d, 0x61f, 0x3, 0x2, 
    0x2, 0x2, 0x61e, 0x615, 0x3, 0x2, 0x2, 0x2, 0x61e, 0x616, 0x3, 0x2, 
    0x2, 0x2, 0x61f, 0x109, 0x3, 0x2, 0x2, 0x2, 0x620, 0x624, 0x5, 0x104, 
    0x83, 0x2, 0x621, 0x624, 0x5, 0xd0, 0x69, 0x2, 0x622, 0x624, 0x5, 0xd2, 
    0x6a, 0x2, 0x623, 0x620, 0x3, 0x2, 0x2, 0x2, 0x623, 0x621, 0x3, 0x2, 
    0x2, 0x2, 0x623, 0x622, 0x3, 0x2, 0x2, 0x2, 0x624, 0x10b, 0x3, 0x2, 
    0x2, 0x2, 0x625, 0x628, 0x5, 0x120, 0x91, 0x2, 0x626, 0x628, 0x5, 0x11c, 
    0x8f, 0x2, 0x627, 0x625, 0x3, 0x2, 0x2, 0x2, 0x627, 0x626, 0x3, 0x2, 
    0x2, 0x2, 0x628, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x629, 0x638, 0x5, 0x112, 
    0x8a, 0x2, 0x62a, 0x630, 0x7, 0x1b, 0x2, 0x2, 0x62b, 0x631, 0x5, 0x10e, 
    0x88, 0x2, 0x62c, 0x62d, 0x7, 0x80, 0x2, 0x2, 0x62d, 0x62e, 0x5, 0xb6, 
    0x5c, 0x2, 0x62e, 0x62f, 0x7, 0x81, 0x2, 0x2, 0x62f, 0x631, 0x3, 0x2, 
    0x2, 0x2, 0x630, 0x62b, 0x3, 0x2, 0x2, 0x2, 0x630, 0x62c, 0x3, 0x2, 
    0x2, 0x2, 0x631, 0x638, 0x3, 0x2, 0x2, 0x2, 0x632, 0x633, 0x9, 0x11, 
    0x2, 0x2, 0x633, 0x638, 0x5, 0x10e, 0x88, 0x2, 0x634, 0x635, 0x5, 0x110, 
    0x89, 0x2, 0x635, 0x636, 0x5, 0x108, 0x85, 0x2, 0x636, 0x638, 0x3, 0x2, 
    0x2, 0x2, 0x637, 0x629, 0x3, 0x2, 0x2, 0x2, 0x637, 0x62a, 0x3, 0x2, 
    0x2, 0x2, 0x637, 0x632, 0x3, 0x2, 0x2, 0x2, 0x637, 0x634, 0x3, 0x2, 
    0x2, 0x2, 0x638, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x639, 0x63a, 0x9, 0x12, 
    0x2, 0x2, 0x63a, 0x111, 0x3, 0x2, 0x2, 0x2, 0x63b, 0x63c, 0x8, 0x8a, 
    0x1, 0x2, 0x63c, 0x640, 0x5, 0x11a, 0x8e, 0x2, 0x63d, 0x63f, 0x5, 0x114, 
    0x8b, 0x2, 0x63e, 0x63d, 0x3, 0x2, 0x2, 0x2, 0x63f, 0x642, 0x3, 0x2, 
    0x2, 0x2, 0x640, 0x63e, 0x3, 0x2, 0x2, 0x2, 0x640, 0x641, 0x3, 0x2, 
    0x2, 0x2, 0x641, 0x64e, 0x3, 0x2, 0x2, 0x2, 0x642, 0x640, 0x3, 0x2, 
    0x2, 0x2, 0x643, 0x644, 0xc, 0x3, 0x2, 0x2, 0x644, 0x645, 0x9, 0x13, 
    0x2, 0x2, 0x645, 0x649, 0x5, 0x120, 0x91, 0x2, 0x646, 0x648, 0x5, 0x114, 
    0x8b, 0x2, 0x647, 0x646, 0x3, 0x2, 0x2, 0x2, 0x648, 0x64b, 0x3, 0x2, 
    0x2, 0x2, 0x649, 0x647, 0x3, 0x2, 0x2, 0x2, 0x649, 0x64a, 0x3, 0x2, 
    0x2, 0x2, 0x64a, 0x64d, 0x3, 0x2, 0x2, 0x2, 0x64b, 0x649, 0x3, 0x2, 
    0x2, 0x2, 0x64c, 0x643, 0x3, 0x2, 0x2, 0x2, 0x64d, 0x650, 0x3, 0x2, 
    0x2, 0x2, 0x64e, 0x64c, 0x3, 0x2, 0x2, 0x2, 0x64e, 0x64f, 0x3, 0x2, 
    0x2, 0x2, 0x64f, 0x113, 0x3, 0x2, 0x2, 0x2, 0x650, 0x64e, 0x3, 0x2, 
    0x2, 0x2, 0x651, 0x652, 0x7, 0x84, 0x2, 0x2, 0x652, 0x653, 0x5, 0x104, 
    0x83, 0x2, 0x653, 0x654, 0x7, 0x85, 0x2, 0x2, 0x654, 0x664, 0x3, 0x2, 
    0x2, 0x2, 0x655, 0x657, 0x7, 0x80, 0x2, 0x2, 0x656, 0x658, 0x5, 0x116, 
    0x8c, 0x2, 0x657, 0x656, 0x3, 0x2, 0x2, 0x2, 0x657, 0x658, 0x3, 0x2, 
    0x2, 0x2, 0x658, 0x659, 0x3, 0x2, 0x2, 0x2, 0x659, 0x664, 0x7, 0x81, 
    0x2, 0x2, 0x65a, 0x65d, 0x7, 0x80, 0x2, 0x2, 0x65b, 0x65e, 0x7, 0x87, 
    0x2, 0x2, 0x65c, 0x65e, 0xa, 0x14, 0x2, 0x2, 0x65d, 0x65b, 0x3, 0x2, 
    0x2, 0x2, 0x65d, 0x65c, 0x3, 0x2, 0x2, 0x2, 0x65e, 0x65f, 0x3, 0x2, 
    0x2, 0x2, 0x65f, 0x65d, 0x3, 0x2, 0x2, 0x2, 0x65f, 0x660, 0x3, 0x2, 
    0x2, 0x2, 0x660, 0x661, 0x3, 0x2, 0x2, 0x2, 0x661, 0x664, 0x7, 0x81, 
    0x2, 0x2, 0x662, 0x664, 0x9, 0x11, 0x2, 0x2, 0x663, 0x651, 0x3, 0x2, 
    0x2, 0x2, 0x663, 0x655, 0x3, 0x2, 0x2, 0x2, 0x663, 0x65a, 0x3, 0x2, 
    0x2, 0x2, 0x663, 0x662, 0x3, 0x2, 0x2, 0x2, 0x664, 0x115, 0x3, 0x2, 
    0x2, 0x2, 0x665, 0x66a, 0x5, 0x118, 0x8d, 0x2, 0x666, 0x667, 0x7, 0x87, 
    0x2, 0x2, 0x667, 0x669, 0x5, 0x118, 0x8d, 0x2, 0x668, 0x666, 0x3, 0x2, 
    0x2, 0x2, 0x669, 0x66c, 0x3, 0x2, 0x2, 0x2, 0x66a, 0x668, 0x3, 0x2, 
    0x2, 0x2, 0x66a, 0x66b, 0x3, 0x2, 0x2, 0x2, 0x66b, 0x117, 0x3, 0x2, 
    0x2, 0x2, 0x66c, 0x66a, 0x3, 0x2, 0x2, 0x2, 0x66d, 0x670, 0x5, 0x104, 
    0x83, 0x2, 0x66e, 0x670, 0x5, 0xb6, 0x5c, 0x2, 0x66f, 0x66d, 0x3, 0x2, 
    0x2, 0x2, 0x66f, 0x66e, 0x3, 0x2, 0x2, 0x2, 0x670, 0x119, 0x3, 0x2, 
    0x2, 0x2, 0x671, 0x681, 0x5, 0x120, 0x91, 0x2, 0x672, 0x681, 0x5, 0x11c, 
    0x8f, 0x2, 0x673, 0x681, 0x5, 0x11e, 0x90, 0x2, 0x674, 0x675, 0x7, 0x80, 
    0x2, 0x2, 0x675, 0x676, 0x5, 0x104, 0x83, 0x2, 0x676, 0x677, 0x7, 0x81, 
    0x2, 0x2, 0x677, 0x681, 0x3, 0x2, 0x2, 0x2, 0x678, 0x681, 0x5, 0x5c, 
    0x2f, 0x2, 0x679, 0x681, 0x5, 0x66, 0x34, 0x2, 0x67a, 0x681, 0x5, 0x6a, 
    0x36, 0x2, 0x67b, 0x681, 0x5, 0x6c, 0x37, 0x2, 0x67c, 0x681, 0x5, 0x4e, 
    0x28, 0x2, 0x67d, 0x681, 0x5, 0x52, 0x2a, 0x2, 0x67e, 0x681, 0x5, 0x54, 
    0x2b, 0x2, 0x67f, 0x681, 0x5, 0x5a, 0x2e, 0x2, 0x680, 0x671, 0x3, 0x2, 
    0x2, 0x2, 0x680, 0x672, 0x3, 0x2, 0x2, 0x2, 0x680, 0x673, 0x3, 0x2, 
    0x2, 0x2, 0x680, 0x674, 0x3, 0x2, 0x2, 0x2, 0x680, 0x678, 0x3, 0x2, 
    0x2, 0x2, 0x680, 0x679, 0x3, 0x2, 0x2, 0x2, 0x680, 0x67a, 0x3, 0x2, 
    0x2, 0x2, 0x680, 0x67b, 0x3, 0x2, 0x2, 0x2, 0x680, 0x67c, 0x3, 0x2, 
    0x2, 0x2, 0x680, 0x67d, 0x3, 0x2, 0x2, 0x2, 0x680, 0x67e, 0x3, 0x2, 
    0x2, 0x2, 0x680, 0x67f, 0x3, 0x2, 0x2, 0x2, 0x681, 0x11b, 0x3, 0x2, 
    0x2, 0x2, 0x682, 0x695, 0x7, 0xaf, 0x2, 0x2, 0x683, 0x695, 0x7, 0xb0, 
    0x2, 0x2, 0x684, 0x695, 0x7, 0xb1, 0x2, 0x2, 0x685, 0x687, 0x9, 0xd, 
    0x2, 0x2, 0x686, 0x685, 0x3, 0x2, 0x2, 0x2, 0x686, 0x687, 0x3, 0x2, 
    0x2, 0x2, 0x687, 0x688, 0x3, 0x2, 0x2, 0x2, 0x688, 0x695, 0x7, 0xb2, 
    0x2, 0x2, 0x689, 0x68b, 0x9, 0xd, 0x2, 0x2, 0x68a, 0x689, 0x3, 0x2, 
    0x2, 0x2, 0x68a, 0x68b, 0x3, 0x2, 0x2, 0x2, 0x68b, 0x68c, 0x3, 0x2, 
    0x2, 0x2, 0x68c, 0x695, 0x7, 0xb3, 0x2, 0x2, 0x68d, 0x695, 0x7, 0xad, 
    0x2, 0x2, 0x68e, 0x695, 0x7, 0x32, 0x2, 0x2, 0x68f, 0x695, 0x7, 0x34, 
    0x2, 0x2, 0x690, 0x695, 0x7, 0x3b, 0x2, 0x2, 0x691, 0x695, 0x7, 0x33, 
    0x2, 0x2, 0x692, 0x695, 0x7, 0x28, 0x2, 0x2, 0x693, 0x695, 0x7, 0x29, 
    0x2, 0x2, 0x694, 0x682, 0x3, 0x2, 0x2, 0x2, 0x694, 0x683, 0x3, 0x2, 
    0x2, 0x2, 0x694, 0x684, 0x3, 0x2, 0x2, 0x2, 0x694, 0x686, 0x3, 0x2, 
    0x2, 0x2, 0x694, 0x68a, 0x3, 0x2, 0x2, 0x2, 0x694, 0x68d, 0x3, 0x2, 
    0x2, 0x2, 0x694, 0x68e, 0x3, 0x2, 0x2, 0x2, 0x694, 0x68f, 0x3, 0x2, 
    0x2, 0x2, 0x694, 0x690, 0x3, 0x2, 0x2, 0x2, 0x694, 0x691, 0x3, 0x2, 
    0x2, 0x2, 0x694, 0x692, 0x3, 0x2, 0x2, 0x2, 0x694, 0x693, 0x3, 0x2, 
    0x2, 0x2, 0x695, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x696, 0x69a, 0x7, 0xae, 
    0x2, 0x2, 0x697, 0x699, 0x9, 0x15, 0x2, 0x2, 0x698, 0x697, 0x3, 0x2, 
    0x2, 0x2, 0x699, 0x69c, 0x3, 0x2, 0x2, 0x2, 0x69a, 0x698, 0x3, 0x2, 
    0x2, 0x2, 0x69a, 0x69b, 0x3, 0x2, 0x2, 0x2, 0x69b, 0x69d, 0x3, 0x2, 
    0x2, 0x2, 0x69c, 0x69a, 0x3, 0x2, 0x2, 0x2, 0x69d, 0x69f, 0x7, 0xba, 
    0x2, 0x2, 0x69e, 0x696, 0x3, 0x2, 0x2, 0x2, 0x69f, 0x6a0, 0x3, 0x2, 
    0x2, 0x2, 0x6a0, 0x69e, 0x3, 0x2, 0x2, 0x2, 0x6a0, 0x6a1, 0x3, 0x2, 
    0x2, 0x2, 0x6a1, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x6a2, 0x6a3, 0x9, 0x16, 
    0x2, 0x2, 0x6a3, 0x121, 0x3, 0x2, 0x2, 0x2, 0xe0, 0x125, 0x135, 0x13c, 
    0x142, 0x148, 0x14b, 0x14e, 0x156, 0x15d, 0x160, 0x163, 0x16b, 0x16e, 
    0x171, 0x17b, 0x185, 0x18d, 0x192, 0x19b, 0x1a1, 0x1a3, 0x1af, 0x1b9, 
    0x1c1, 0x1c4, 0x1c7, 0x1d0, 0x1e7, 0x1ee, 0x1f1, 0x1f7, 0x200, 0x206, 
    0x208, 0x211, 0x213, 0x21c, 0x220, 0x229, 0x22b, 0x234, 0x238, 0x23b, 
    0x243, 0x247, 0x249, 0x24c, 0x252, 0x256, 0x25c, 0x26a, 0x271, 0x277, 
    0x27a, 0x27e, 0x284, 0x288, 0x290, 0x293, 0x29a, 0x2a6, 0x2aa, 0x2ac, 
    0x2b8, 0x2ba, 0x2c6, 0x2c8, 0x2cd, 0x2d3, 0x2d6, 0x2dc, 0x2e0, 0x2e3, 
    0x2e6, 0x2f1, 0x2f7, 0x2f9, 0x2fc, 0x304, 0x309, 0x30f, 0x318, 0x31d, 
    0x31f, 0x335, 0x33c, 0x341, 0x359, 0x35e, 0x363, 0x367, 0x36b, 0x36f, 
    0x378, 0x37f, 0x386, 0x38c, 0x38f, 0x393, 0x39b, 0x39e, 0x3a2, 0x3aa, 
    0x3af, 0x3b6, 0x3bf, 0x3c3, 0x3cf, 0x3d1, 0x3db, 0x3e6, 0x3ec, 0x3f1, 
    0x3f7, 0x3fb, 0x400, 0x40a, 0x40c, 0x414, 0x422, 0x435, 0x437, 0x443, 
    0x448, 0x44c, 0x450, 0x454, 0x45b, 0x461, 0x46d, 0x474, 0x478, 0x47d, 
    0x481, 0x488, 0x48d, 0x493, 0x496, 0x49a, 0x49e, 0x4a5, 0x4a9, 0x4ac, 
    0x4b5, 0x4ba, 0x4bf, 0x4c1, 0x4cd, 0x4d1, 0x4d3, 0x4dc, 0x4e0, 0x4e4, 
    0x4e7, 0x4eb, 0x4ef, 0x4f5, 0x4f9, 0x4fe, 0x500, 0x504, 0x509, 0x50c, 
    0x513, 0x51a, 0x51d, 0x523, 0x527, 0x52b, 0x52f, 0x533, 0x537, 0x53b, 
    0x53f, 0x543, 0x547, 0x54a, 0x553, 0x558, 0x55a, 0x566, 0x569, 0x575, 
    0x57d, 0x582, 0x58a, 0x590, 0x596, 0x5a9, 0x5ad, 0x5b1, 0x5ba, 0x5c1, 
    0x5cc, 0x5ce, 0x5d5, 0x5e2, 0x5ef, 0x60a, 0x60e, 0x610, 0x61c, 0x61e, 
    0x623, 0x627, 0x630, 0x637, 0x640, 0x649, 0x64e, 0x657, 0x65d, 0x65f, 
    0x663, 0x66a, 0x66f, 0x680, 0x686, 0x68a, 0x694, 0x69a, 0x6a0, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ObjectiveCParser::Initializer ObjectiveCParser::_init;
