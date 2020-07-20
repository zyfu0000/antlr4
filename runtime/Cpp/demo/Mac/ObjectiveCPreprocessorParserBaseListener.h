
// Generated from ObjectiveCPreprocessorParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ObjectiveCPreprocessorParserListener.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of ObjectiveCPreprocessorParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ObjectiveCPreprocessorParserBaseListener : public ObjectiveCPreprocessorParserListener {
public:

  virtual void enterPreprocessorImport(ObjectiveCPreprocessorParser::PreprocessorImportContext * /*ctx*/) override { }
  virtual void exitPreprocessorImport(ObjectiveCPreprocessorParser::PreprocessorImportContext * /*ctx*/) override { }

  virtual void enterPreprocessorConditional(ObjectiveCPreprocessorParser::PreprocessorConditionalContext * /*ctx*/) override { }
  virtual void exitPreprocessorConditional(ObjectiveCPreprocessorParser::PreprocessorConditionalContext * /*ctx*/) override { }

  virtual void enterPreprocessorDef(ObjectiveCPreprocessorParser::PreprocessorDefContext * /*ctx*/) override { }
  virtual void exitPreprocessorDef(ObjectiveCPreprocessorParser::PreprocessorDefContext * /*ctx*/) override { }

  virtual void enterPreprocessorPragma(ObjectiveCPreprocessorParser::PreprocessorPragmaContext * /*ctx*/) override { }
  virtual void exitPreprocessorPragma(ObjectiveCPreprocessorParser::PreprocessorPragmaContext * /*ctx*/) override { }

  virtual void enterPreprocessorError(ObjectiveCPreprocessorParser::PreprocessorErrorContext * /*ctx*/) override { }
  virtual void exitPreprocessorError(ObjectiveCPreprocessorParser::PreprocessorErrorContext * /*ctx*/) override { }

  virtual void enterPreprocessorWarning(ObjectiveCPreprocessorParser::PreprocessorWarningContext * /*ctx*/) override { }
  virtual void exitPreprocessorWarning(ObjectiveCPreprocessorParser::PreprocessorWarningContext * /*ctx*/) override { }

  virtual void enterPreprocessorDefine(ObjectiveCPreprocessorParser::PreprocessorDefineContext * /*ctx*/) override { }
  virtual void exitPreprocessorDefine(ObjectiveCPreprocessorParser::PreprocessorDefineContext * /*ctx*/) override { }

  virtual void enterDirectiveText(ObjectiveCPreprocessorParser::DirectiveTextContext * /*ctx*/) override { }
  virtual void exitDirectiveText(ObjectiveCPreprocessorParser::DirectiveTextContext * /*ctx*/) override { }

  virtual void enterPreprocessorParenthesis(ObjectiveCPreprocessorParser::PreprocessorParenthesisContext * /*ctx*/) override { }
  virtual void exitPreprocessorParenthesis(ObjectiveCPreprocessorParser::PreprocessorParenthesisContext * /*ctx*/) override { }

  virtual void enterPreprocessorNot(ObjectiveCPreprocessorParser::PreprocessorNotContext * /*ctx*/) override { }
  virtual void exitPreprocessorNot(ObjectiveCPreprocessorParser::PreprocessorNotContext * /*ctx*/) override { }

  virtual void enterPreprocessorBinary(ObjectiveCPreprocessorParser::PreprocessorBinaryContext * /*ctx*/) override { }
  virtual void exitPreprocessorBinary(ObjectiveCPreprocessorParser::PreprocessorBinaryContext * /*ctx*/) override { }

  virtual void enterPreprocessorConstant(ObjectiveCPreprocessorParser::PreprocessorConstantContext * /*ctx*/) override { }
  virtual void exitPreprocessorConstant(ObjectiveCPreprocessorParser::PreprocessorConstantContext * /*ctx*/) override { }

  virtual void enterPreprocessorConditionalSymbol(ObjectiveCPreprocessorParser::PreprocessorConditionalSymbolContext * /*ctx*/) override { }
  virtual void exitPreprocessorConditionalSymbol(ObjectiveCPreprocessorParser::PreprocessorConditionalSymbolContext * /*ctx*/) override { }

  virtual void enterPreprocessorDefined(ObjectiveCPreprocessorParser::PreprocessorDefinedContext * /*ctx*/) override { }
  virtual void exitPreprocessorDefined(ObjectiveCPreprocessorParser::PreprocessorDefinedContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace antlrcpptest
