
// Generated from ObjectiveCPreprocessorParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ObjectiveCPreprocessorParser.h"


namespace antlrcpptest {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by ObjectiveCPreprocessorParser.
 */
class  ObjectiveCPreprocessorParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ObjectiveCPreprocessorParser.
   */
    virtual antlrcpp::Any visitPreprocessorImport(ObjectiveCPreprocessorParser::PreprocessorImportContext *context) = 0;

    virtual antlrcpp::Any visitPreprocessorConditional(ObjectiveCPreprocessorParser::PreprocessorConditionalContext *context) = 0;

    virtual antlrcpp::Any visitPreprocessorDef(ObjectiveCPreprocessorParser::PreprocessorDefContext *context) = 0;

    virtual antlrcpp::Any visitPreprocessorPragma(ObjectiveCPreprocessorParser::PreprocessorPragmaContext *context) = 0;

    virtual antlrcpp::Any visitPreprocessorError(ObjectiveCPreprocessorParser::PreprocessorErrorContext *context) = 0;

    virtual antlrcpp::Any visitPreprocessorWarning(ObjectiveCPreprocessorParser::PreprocessorWarningContext *context) = 0;

    virtual antlrcpp::Any visitPreprocessorDefine(ObjectiveCPreprocessorParser::PreprocessorDefineContext *context) = 0;

    virtual antlrcpp::Any visitDirectiveText(ObjectiveCPreprocessorParser::DirectiveTextContext *context) = 0;

    virtual antlrcpp::Any visitPreprocessorParenthesis(ObjectiveCPreprocessorParser::PreprocessorParenthesisContext *context) = 0;

    virtual antlrcpp::Any visitPreprocessorNot(ObjectiveCPreprocessorParser::PreprocessorNotContext *context) = 0;

    virtual antlrcpp::Any visitPreprocessorBinary(ObjectiveCPreprocessorParser::PreprocessorBinaryContext *context) = 0;

    virtual antlrcpp::Any visitPreprocessorConstant(ObjectiveCPreprocessorParser::PreprocessorConstantContext *context) = 0;

    virtual antlrcpp::Any visitPreprocessorConditionalSymbol(ObjectiveCPreprocessorParser::PreprocessorConditionalSymbolContext *context) = 0;

    virtual antlrcpp::Any visitPreprocessorDefined(ObjectiveCPreprocessorParser::PreprocessorDefinedContext *context) = 0;


};

}  // namespace antlrcpptest
