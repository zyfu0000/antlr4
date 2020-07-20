
// Generated from ObjectiveCPreprocessorParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpptest {


class  ObjectiveCPreprocessorParser : public antlr4::Parser {
public:
  enum {
    AUTO = 1, BREAK = 2, CASE = 3, CHAR = 4, CONST = 5, CONTINUE = 6, DEFAULT = 7, 
    DO = 8, DOUBLE = 9, ELSE = 10, ENUM = 11, EXTERN = 12, FLOAT = 13, FOR = 14, 
    GOTO = 15, IF = 16, INLINE = 17, INT = 18, LONG = 19, REGISTER = 20, 
    RESTRICT = 21, RETURN = 22, SHORT = 23, SIGNED = 24, SIZEOF = 25, STATIC = 26, 
    STRUCT = 27, SWITCH = 28, TYPEDEF = 29, UNION = 30, UNSIGNED = 31, VOID = 32, 
    VOLATILE = 33, WHILE = 34, BOOL_ = 35, COMPLEX = 36, IMAGINERY = 37, 
    TRUE = 38, FALSE = 39, BOOL = 40, Class = 41, BYCOPY = 42, BYREF = 43, 
    ID = 44, IMP = 45, IN = 46, INOUT = 47, NIL = 48, NO = 49, NULL_ = 50, 
    ONEWAY = 51, OUT = 52, PROTOCOL_ = 53, SEL = 54, SELF = 55, SUPER = 56, 
    YES = 57, AUTORELEASEPOOL = 58, CATCH = 59, CLASS = 60, DYNAMIC = 61, 
    ENCODE = 62, END = 63, FINALLY = 64, IMPLEMENTATION = 65, INTERFACE = 66, 
    IMPORT = 67, PACKAGE = 68, PROTOCOL = 69, OPTIONAL = 70, PRIVATE = 71, 
    PROPERTY = 72, PROTECTED = 73, PUBLIC = 74, REQUIRED = 75, SELECTOR = 76, 
    SYNCHRONIZED = 77, SYNTHESIZE = 78, THROW = 79, TRY = 80, ATOMIC = 81, 
    NONATOMIC = 82, RETAIN = 83, ATTRIBUTE = 84, AUTORELEASING_QUALIFIER = 85, 
    BLOCK = 86, BRIDGE = 87, BRIDGE_RETAINED = 88, BRIDGE_TRANSFER = 89, 
    COVARIANT = 90, CONTRAVARIANT = 91, DEPRECATED = 92, KINDOF = 93, STRONG_QUALIFIER = 94, 
    TYPEOF = 95, UNSAFE_UNRETAINED_QUALIFIER = 96, UNUSED = 97, WEAK_QUALIFIER = 98, 
    NULL_UNSPECIFIED = 99, NULLABLE = 100, NONNULL = 101, NULL_RESETTABLE = 102, 
    NS_INLINE = 103, NS_ENUM = 104, NS_OPTIONS = 105, ASSIGN = 106, COPY = 107, 
    GETTER = 108, SETTER = 109, STRONG = 110, READONLY = 111, READWRITE = 112, 
    WEAK = 113, UNSAFE_UNRETAINED = 114, IB_OUTLET = 115, IB_OUTLET_COLLECTION = 116, 
    IB_INSPECTABLE = 117, IB_DESIGNABLE = 118, NS_ASSUME_NONNULL_BEGIN = 119, 
    NS_ASSUME_NONNULL_END = 120, EXTERN_SUFFIX = 121, IOS_SUFFIX = 122, 
    MAC_SUFFIX = 123, TVOS_PROHIBITED = 124, IDENTIFIER = 125, LP = 126, 
    RP = 127, LBRACE = 128, RBRACE = 129, LBRACK = 130, RBRACK = 131, SEMI = 132, 
    COMMA = 133, DOT = 134, STRUCTACCESS = 135, AT = 136, ASSIGNMENT = 137, 
    GT = 138, LT = 139, BANG = 140, TILDE = 141, QUESTION = 142, COLON = 143, 
    EQUAL = 144, LE = 145, GE = 146, NOTEQUAL = 147, AND = 148, OR = 149, 
    INC = 150, DEC = 151, ADD = 152, SUB = 153, MUL = 154, DIV = 155, BITAND = 156, 
    BITOR = 157, BITXOR = 158, MOD = 159, ADD_ASSIGN = 160, SUB_ASSIGN = 161, 
    MUL_ASSIGN = 162, DIV_ASSIGN = 163, AND_ASSIGN = 164, OR_ASSIGN = 165, 
    XOR_ASSIGN = 166, MOD_ASSIGN = 167, LSHIFT_ASSIGN = 168, RSHIFT_ASSIGN = 169, 
    ELIPSIS = 170, CHARACTER_LITERAL = 171, STRING_START = 172, HEX_LITERAL = 173, 
    OCTAL_LITERAL = 174, BINARY_LITERAL = 175, DECIMAL_LITERAL = 176, FLOATING_POINT_LITERAL = 177, 
    WS = 178, MULTI_COMMENT = 179, SINGLE_COMMENT = 180, BACKSLASH = 181, 
    SHARP = 182, STRING_NEWLINE = 183, STRING_END = 184, STRING_VALUE = 185, 
    DIRECTIVE_IMPORT = 186, DIRECTIVE_INCLUDE = 187, DIRECTIVE_PRAGMA = 188, 
    DIRECTIVE_DEFINE = 189, DIRECTIVE_DEFINED = 190, DIRECTIVE_IF = 191, 
    DIRECTIVE_ELIF = 192, DIRECTIVE_ELSE = 193, DIRECTIVE_UNDEF = 194, DIRECTIVE_IFDEF = 195, 
    DIRECTIVE_IFNDEF = 196, DIRECTIVE_ENDIF = 197, DIRECTIVE_TRUE = 198, 
    DIRECTIVE_FALSE = 199, DIRECTIVE_ERROR = 200, DIRECTIVE_WARNING = 201, 
    DIRECTIVE_BANG = 202, DIRECTIVE_LP = 203, DIRECTIVE_RP = 204, DIRECTIVE_EQUAL = 205, 
    DIRECTIVE_NOTEQUAL = 206, DIRECTIVE_AND = 207, DIRECTIVE_OR = 208, DIRECTIVE_LT = 209, 
    DIRECTIVE_GT = 210, DIRECTIVE_LE = 211, DIRECTIVE_GE = 212, DIRECTIVE_STRING = 213, 
    DIRECTIVE_ID = 214, DIRECTIVE_DECIMAL_LITERAL = 215, DIRECTIVE_FLOAT = 216, 
    DIRECTIVE_NEWLINE = 217, DIRECTIVE_MULTI_COMMENT = 218, DIRECTIVE_SINGLE_COMMENT = 219, 
    DIRECTIVE_BACKSLASH_NEWLINE = 220, DIRECTIVE_TEXT_NEWLINE = 221, DIRECTIVE_TEXT = 222
  };

  enum {
    RuleDirective = 0, RuleDirectiveText = 1, RulePreprocessorExpression = 2
  };

  ObjectiveCPreprocessorParser(antlr4::TokenStream *input);
  ~ObjectiveCPreprocessorParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class DirectiveContext;
  class DirectiveTextContext;
  class PreprocessorExpressionContext; 

  class  DirectiveContext : public antlr4::ParserRuleContext {
  public:
    DirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DirectiveContext() = default;
    void copyFrom(DirectiveContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PreprocessorDefContext : public DirectiveContext {
  public:
    PreprocessorDefContext(DirectiveContext *ctx);

    antlr4::tree::TerminalNode *SHARP();
    antlr4::tree::TerminalNode *DIRECTIVE_IFDEF();
    antlr4::tree::TerminalNode *DIRECTIVE_ID();
    antlr4::tree::TerminalNode *DIRECTIVE_IFNDEF();
    antlr4::tree::TerminalNode *DIRECTIVE_UNDEF();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PreprocessorErrorContext : public DirectiveContext {
  public:
    PreprocessorErrorContext(DirectiveContext *ctx);

    antlr4::tree::TerminalNode *SHARP();
    antlr4::tree::TerminalNode *DIRECTIVE_ERROR();
    DirectiveTextContext *directiveText();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PreprocessorConditionalContext : public DirectiveContext {
  public:
    PreprocessorConditionalContext(DirectiveContext *ctx);

    antlr4::tree::TerminalNode *SHARP();
    antlr4::tree::TerminalNode *DIRECTIVE_IF();
    PreprocessorExpressionContext *preprocessorExpression();
    antlr4::tree::TerminalNode *DIRECTIVE_ELIF();
    antlr4::tree::TerminalNode *DIRECTIVE_ELSE();
    antlr4::tree::TerminalNode *DIRECTIVE_ENDIF();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PreprocessorImportContext : public DirectiveContext {
  public:
    PreprocessorImportContext(DirectiveContext *ctx);

    antlr4::tree::TerminalNode *SHARP();
    DirectiveTextContext *directiveText();
    antlr4::tree::TerminalNode *DIRECTIVE_IMPORT();
    antlr4::tree::TerminalNode *DIRECTIVE_INCLUDE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PreprocessorPragmaContext : public DirectiveContext {
  public:
    PreprocessorPragmaContext(DirectiveContext *ctx);

    antlr4::tree::TerminalNode *SHARP();
    antlr4::tree::TerminalNode *DIRECTIVE_PRAGMA();
    DirectiveTextContext *directiveText();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PreprocessorDefineContext : public DirectiveContext {
  public:
    PreprocessorDefineContext(DirectiveContext *ctx);

    antlr4::tree::TerminalNode *SHARP();
    antlr4::tree::TerminalNode *DIRECTIVE_DEFINE();
    antlr4::tree::TerminalNode *DIRECTIVE_ID();
    DirectiveTextContext *directiveText();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PreprocessorWarningContext : public DirectiveContext {
  public:
    PreprocessorWarningContext(DirectiveContext *ctx);

    antlr4::tree::TerminalNode *SHARP();
    antlr4::tree::TerminalNode *DIRECTIVE_WARNING();
    DirectiveTextContext *directiveText();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DirectiveContext* directive();

  class  DirectiveTextContext : public antlr4::ParserRuleContext {
  public:
    DirectiveTextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DIRECTIVE_TEXT();
    antlr4::tree::TerminalNode* DIRECTIVE_TEXT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIRECTIVE_TEXT_NEWLINE();
    antlr4::tree::TerminalNode* DIRECTIVE_TEXT_NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DirectiveTextContext* directiveText();

  class  PreprocessorExpressionContext : public antlr4::ParserRuleContext {
  public:
    PreprocessorExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PreprocessorExpressionContext() = default;
    void copyFrom(PreprocessorExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PreprocessorParenthesisContext : public PreprocessorExpressionContext {
  public:
    PreprocessorParenthesisContext(PreprocessorExpressionContext *ctx);

    antlr4::tree::TerminalNode *DIRECTIVE_LP();
    PreprocessorExpressionContext *preprocessorExpression();
    antlr4::tree::TerminalNode *DIRECTIVE_RP();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PreprocessorNotContext : public PreprocessorExpressionContext {
  public:
    PreprocessorNotContext(PreprocessorExpressionContext *ctx);

    antlr4::tree::TerminalNode *DIRECTIVE_BANG();
    PreprocessorExpressionContext *preprocessorExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PreprocessorBinaryContext : public PreprocessorExpressionContext {
  public:
    PreprocessorBinaryContext(PreprocessorExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<PreprocessorExpressionContext *> preprocessorExpression();
    PreprocessorExpressionContext* preprocessorExpression(size_t i);
    antlr4::tree::TerminalNode *DIRECTIVE_EQUAL();
    antlr4::tree::TerminalNode *DIRECTIVE_NOTEQUAL();
    antlr4::tree::TerminalNode *DIRECTIVE_AND();
    antlr4::tree::TerminalNode *DIRECTIVE_OR();
    antlr4::tree::TerminalNode *DIRECTIVE_LT();
    antlr4::tree::TerminalNode *DIRECTIVE_GT();
    antlr4::tree::TerminalNode *DIRECTIVE_LE();
    antlr4::tree::TerminalNode *DIRECTIVE_GE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PreprocessorConstantContext : public PreprocessorExpressionContext {
  public:
    PreprocessorConstantContext(PreprocessorExpressionContext *ctx);

    antlr4::tree::TerminalNode *DIRECTIVE_TRUE();
    antlr4::tree::TerminalNode *DIRECTIVE_FALSE();
    antlr4::tree::TerminalNode *DIRECTIVE_DECIMAL_LITERAL();
    antlr4::tree::TerminalNode *DIRECTIVE_STRING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PreprocessorConditionalSymbolContext : public PreprocessorExpressionContext {
  public:
    PreprocessorConditionalSymbolContext(PreprocessorExpressionContext *ctx);

    antlr4::tree::TerminalNode *DIRECTIVE_ID();
    antlr4::tree::TerminalNode *DIRECTIVE_LP();
    PreprocessorExpressionContext *preprocessorExpression();
    antlr4::tree::TerminalNode *DIRECTIVE_RP();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PreprocessorDefinedContext : public PreprocessorExpressionContext {
  public:
    PreprocessorDefinedContext(PreprocessorExpressionContext *ctx);

    antlr4::tree::TerminalNode *DIRECTIVE_DEFINED();
    antlr4::tree::TerminalNode *DIRECTIVE_ID();
    antlr4::tree::TerminalNode *DIRECTIVE_LP();
    antlr4::tree::TerminalNode *DIRECTIVE_RP();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PreprocessorExpressionContext* preprocessorExpression();
  PreprocessorExpressionContext* preprocessorExpression(int precedence);

  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool preprocessorExpressionSempred(PreprocessorExpressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace antlrcpptest
