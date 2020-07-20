
// Generated from ObjectiveCPreprocessorParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ObjectiveCPreprocessorParser.h"


namespace antlrcpptest {

/**
 * This interface defines an abstract listener for a parse tree produced by ObjectiveCPreprocessorParser.
 */
class  ObjectiveCPreprocessorParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterPreprocessorImport(ObjectiveCPreprocessorParser::PreprocessorImportContext *ctx) = 0;
  virtual void exitPreprocessorImport(ObjectiveCPreprocessorParser::PreprocessorImportContext *ctx) = 0;

  virtual void enterPreprocessorConditional(ObjectiveCPreprocessorParser::PreprocessorConditionalContext *ctx) = 0;
  virtual void exitPreprocessorConditional(ObjectiveCPreprocessorParser::PreprocessorConditionalContext *ctx) = 0;

  virtual void enterPreprocessorDef(ObjectiveCPreprocessorParser::PreprocessorDefContext *ctx) = 0;
  virtual void exitPreprocessorDef(ObjectiveCPreprocessorParser::PreprocessorDefContext *ctx) = 0;

  virtual void enterPreprocessorPragma(ObjectiveCPreprocessorParser::PreprocessorPragmaContext *ctx) = 0;
  virtual void exitPreprocessorPragma(ObjectiveCPreprocessorParser::PreprocessorPragmaContext *ctx) = 0;

  virtual void enterPreprocessorError(ObjectiveCPreprocessorParser::PreprocessorErrorContext *ctx) = 0;
  virtual void exitPreprocessorError(ObjectiveCPreprocessorParser::PreprocessorErrorContext *ctx) = 0;

  virtual void enterPreprocessorWarning(ObjectiveCPreprocessorParser::PreprocessorWarningContext *ctx) = 0;
  virtual void exitPreprocessorWarning(ObjectiveCPreprocessorParser::PreprocessorWarningContext *ctx) = 0;

  virtual void enterPreprocessorDefine(ObjectiveCPreprocessorParser::PreprocessorDefineContext *ctx) = 0;
  virtual void exitPreprocessorDefine(ObjectiveCPreprocessorParser::PreprocessorDefineContext *ctx) = 0;

  virtual void enterDirectiveText(ObjectiveCPreprocessorParser::DirectiveTextContext *ctx) = 0;
  virtual void exitDirectiveText(ObjectiveCPreprocessorParser::DirectiveTextContext *ctx) = 0;

  virtual void enterPreprocessorParenthesis(ObjectiveCPreprocessorParser::PreprocessorParenthesisContext *ctx) = 0;
  virtual void exitPreprocessorParenthesis(ObjectiveCPreprocessorParser::PreprocessorParenthesisContext *ctx) = 0;

  virtual void enterPreprocessorNot(ObjectiveCPreprocessorParser::PreprocessorNotContext *ctx) = 0;
  virtual void exitPreprocessorNot(ObjectiveCPreprocessorParser::PreprocessorNotContext *ctx) = 0;

  virtual void enterPreprocessorBinary(ObjectiveCPreprocessorParser::PreprocessorBinaryContext *ctx) = 0;
  virtual void exitPreprocessorBinary(ObjectiveCPreprocessorParser::PreprocessorBinaryContext *ctx) = 0;

  virtual void enterPreprocessorConstant(ObjectiveCPreprocessorParser::PreprocessorConstantContext *ctx) = 0;
  virtual void exitPreprocessorConstant(ObjectiveCPreprocessorParser::PreprocessorConstantContext *ctx) = 0;

  virtual void enterPreprocessorConditionalSymbol(ObjectiveCPreprocessorParser::PreprocessorConditionalSymbolContext *ctx) = 0;
  virtual void exitPreprocessorConditionalSymbol(ObjectiveCPreprocessorParser::PreprocessorConditionalSymbolContext *ctx) = 0;

  virtual void enterPreprocessorDefined(ObjectiveCPreprocessorParser::PreprocessorDefinedContext *ctx) = 0;
  virtual void exitPreprocessorDefined(ObjectiveCPreprocessorParser::PreprocessorDefinedContext *ctx) = 0;


};

}  // namespace antlrcpptest
