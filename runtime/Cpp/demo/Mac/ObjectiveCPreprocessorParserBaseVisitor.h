
// Generated from ObjectiveCPreprocessorParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ObjectiveCPreprocessorParserVisitor.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of ObjectiveCPreprocessorParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ObjectiveCPreprocessorParserBaseVisitor : public ObjectiveCPreprocessorParserVisitor {
public:

  virtual antlrcpp::Any visitPreprocessorImport(ObjectiveCPreprocessorParser::PreprocessorImportContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreprocessorConditional(ObjectiveCPreprocessorParser::PreprocessorConditionalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreprocessorDef(ObjectiveCPreprocessorParser::PreprocessorDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreprocessorPragma(ObjectiveCPreprocessorParser::PreprocessorPragmaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreprocessorError(ObjectiveCPreprocessorParser::PreprocessorErrorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreprocessorWarning(ObjectiveCPreprocessorParser::PreprocessorWarningContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreprocessorDefine(ObjectiveCPreprocessorParser::PreprocessorDefineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDirectiveText(ObjectiveCPreprocessorParser::DirectiveTextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreprocessorParenthesis(ObjectiveCPreprocessorParser::PreprocessorParenthesisContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreprocessorNot(ObjectiveCPreprocessorParser::PreprocessorNotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreprocessorBinary(ObjectiveCPreprocessorParser::PreprocessorBinaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreprocessorConstant(ObjectiveCPreprocessorParser::PreprocessorConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreprocessorConditionalSymbol(ObjectiveCPreprocessorParser::PreprocessorConditionalSymbolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreprocessorDefined(ObjectiveCPreprocessorParser::PreprocessorDefinedContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace antlrcpptest
