
// Generated from ObjectiveCParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ObjectiveCParser.h"


namespace antlrcpptest {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by ObjectiveCParser.
 */
class  ObjectiveCParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ObjectiveCParser.
   */
    virtual antlrcpp::Any visitTranslationUnit(ObjectiveCParser::TranslationUnitContext *context) = 0;

    virtual antlrcpp::Any visitTopLevelDeclaration(ObjectiveCParser::TopLevelDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitImportDeclaration(ObjectiveCParser::ImportDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitClassInterface(ObjectiveCParser::ClassInterfaceContext *context) = 0;

    virtual antlrcpp::Any visitCategoryInterface(ObjectiveCParser::CategoryInterfaceContext *context) = 0;

    virtual antlrcpp::Any visitClassImplementation(ObjectiveCParser::ClassImplementationContext *context) = 0;

    virtual antlrcpp::Any visitCategoryImplementation(ObjectiveCParser::CategoryImplementationContext *context) = 0;

    virtual antlrcpp::Any visitGenericTypeSpecifier(ObjectiveCParser::GenericTypeSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitProtocolDeclaration(ObjectiveCParser::ProtocolDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitProtocolDeclarationSection(ObjectiveCParser::ProtocolDeclarationSectionContext *context) = 0;

    virtual antlrcpp::Any visitProtocolDeclarationList(ObjectiveCParser::ProtocolDeclarationListContext *context) = 0;

    virtual antlrcpp::Any visitClassDeclarationList(ObjectiveCParser::ClassDeclarationListContext *context) = 0;

    virtual antlrcpp::Any visitProtocolList(ObjectiveCParser::ProtocolListContext *context) = 0;

    virtual antlrcpp::Any visitPropertyDeclaration(ObjectiveCParser::PropertyDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitPropertyAttributesList(ObjectiveCParser::PropertyAttributesListContext *context) = 0;

    virtual antlrcpp::Any visitPropertyAttribute(ObjectiveCParser::PropertyAttributeContext *context) = 0;

    virtual antlrcpp::Any visitProtocolName(ObjectiveCParser::ProtocolNameContext *context) = 0;

    virtual antlrcpp::Any visitInstanceVariables(ObjectiveCParser::InstanceVariablesContext *context) = 0;

    virtual antlrcpp::Any visitVisibilitySection(ObjectiveCParser::VisibilitySectionContext *context) = 0;

    virtual antlrcpp::Any visitAccessModifier(ObjectiveCParser::AccessModifierContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceDeclarationList(ObjectiveCParser::InterfaceDeclarationListContext *context) = 0;

    virtual antlrcpp::Any visitClassMethodDeclaration(ObjectiveCParser::ClassMethodDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitInstanceMethodDeclaration(ObjectiveCParser::InstanceMethodDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitMethodDeclaration(ObjectiveCParser::MethodDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitImplementationDefinitionList(ObjectiveCParser::ImplementationDefinitionListContext *context) = 0;

    virtual antlrcpp::Any visitClassMethodDefinition(ObjectiveCParser::ClassMethodDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitInstanceMethodDefinition(ObjectiveCParser::InstanceMethodDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitMethodDefinition(ObjectiveCParser::MethodDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitMethodSelector(ObjectiveCParser::MethodSelectorContext *context) = 0;

    virtual antlrcpp::Any visitKeywordDeclarator(ObjectiveCParser::KeywordDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitSelector(ObjectiveCParser::SelectorContext *context) = 0;

    virtual antlrcpp::Any visitMethodType(ObjectiveCParser::MethodTypeContext *context) = 0;

    virtual antlrcpp::Any visitPropertyImplementation(ObjectiveCParser::PropertyImplementationContext *context) = 0;

    virtual antlrcpp::Any visitPropertySynthesizeList(ObjectiveCParser::PropertySynthesizeListContext *context) = 0;

    virtual antlrcpp::Any visitPropertySynthesizeItem(ObjectiveCParser::PropertySynthesizeItemContext *context) = 0;

    virtual antlrcpp::Any visitBlockType(ObjectiveCParser::BlockTypeContext *context) = 0;

    virtual antlrcpp::Any visitGenericsSpecifier(ObjectiveCParser::GenericsSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitTypeSpecifierWithPrefixes(ObjectiveCParser::TypeSpecifierWithPrefixesContext *context) = 0;

    virtual antlrcpp::Any visitDictionaryExpression(ObjectiveCParser::DictionaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitDictionaryPair(ObjectiveCParser::DictionaryPairContext *context) = 0;

    virtual antlrcpp::Any visitArrayExpression(ObjectiveCParser::ArrayExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBoxExpression(ObjectiveCParser::BoxExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBlockParameters(ObjectiveCParser::BlockParametersContext *context) = 0;

    virtual antlrcpp::Any visitTypeVariableDeclaratorOrName(ObjectiveCParser::TypeVariableDeclaratorOrNameContext *context) = 0;

    virtual antlrcpp::Any visitBlockExpression(ObjectiveCParser::BlockExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMessageExpression(ObjectiveCParser::MessageExpressionContext *context) = 0;

    virtual antlrcpp::Any visitReceiver(ObjectiveCParser::ReceiverContext *context) = 0;

    virtual antlrcpp::Any visitMessageSelector(ObjectiveCParser::MessageSelectorContext *context) = 0;

    virtual antlrcpp::Any visitKeywordArgument(ObjectiveCParser::KeywordArgumentContext *context) = 0;

    virtual antlrcpp::Any visitKeywordArgumentType(ObjectiveCParser::KeywordArgumentTypeContext *context) = 0;

    virtual antlrcpp::Any visitSelectorExpression(ObjectiveCParser::SelectorExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSelectorName(ObjectiveCParser::SelectorNameContext *context) = 0;

    virtual antlrcpp::Any visitProtocolExpression(ObjectiveCParser::ProtocolExpressionContext *context) = 0;

    virtual antlrcpp::Any visitEncodeExpression(ObjectiveCParser::EncodeExpressionContext *context) = 0;

    virtual antlrcpp::Any visitTypeVariableDeclarator(ObjectiveCParser::TypeVariableDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitThrowStatement(ObjectiveCParser::ThrowStatementContext *context) = 0;

    virtual antlrcpp::Any visitTryBlock(ObjectiveCParser::TryBlockContext *context) = 0;

    virtual antlrcpp::Any visitCatchStatement(ObjectiveCParser::CatchStatementContext *context) = 0;

    virtual antlrcpp::Any visitSynchronizedStatement(ObjectiveCParser::SynchronizedStatementContext *context) = 0;

    virtual antlrcpp::Any visitAutoreleaseStatement(ObjectiveCParser::AutoreleaseStatementContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclaration(ObjectiveCParser::FunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDefinition(ObjectiveCParser::FunctionDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionSignature(ObjectiveCParser::FunctionSignatureContext *context) = 0;

    virtual antlrcpp::Any visitAttribute(ObjectiveCParser::AttributeContext *context) = 0;

    virtual antlrcpp::Any visitAttributeName(ObjectiveCParser::AttributeNameContext *context) = 0;

    virtual antlrcpp::Any visitAttributeParameters(ObjectiveCParser::AttributeParametersContext *context) = 0;

    virtual antlrcpp::Any visitAttributeParameterList(ObjectiveCParser::AttributeParameterListContext *context) = 0;

    virtual antlrcpp::Any visitAttributeParameter(ObjectiveCParser::AttributeParameterContext *context) = 0;

    virtual antlrcpp::Any visitAttributeParameterAssignment(ObjectiveCParser::AttributeParameterAssignmentContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(ObjectiveCParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallExpression(ObjectiveCParser::FunctionCallExpressionContext *context) = 0;

    virtual antlrcpp::Any visitEnumDeclaration(ObjectiveCParser::EnumDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitVarDeclaration(ObjectiveCParser::VarDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitTypedefDeclaration(ObjectiveCParser::TypedefDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitTypeDeclaratorList(ObjectiveCParser::TypeDeclaratorListContext *context) = 0;

    virtual antlrcpp::Any visitTypeDeclarator(ObjectiveCParser::TypeDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationSpecifiers(ObjectiveCParser::DeclarationSpecifiersContext *context) = 0;

    virtual antlrcpp::Any visitAttributeSpecifier(ObjectiveCParser::AttributeSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitInitDeclaratorList(ObjectiveCParser::InitDeclaratorListContext *context) = 0;

    virtual antlrcpp::Any visitInitDeclarator(ObjectiveCParser::InitDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitStructOrUnionSpecifier(ObjectiveCParser::StructOrUnionSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitFieldDeclaration(ObjectiveCParser::FieldDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitSpecifierQualifierList(ObjectiveCParser::SpecifierQualifierListContext *context) = 0;

    virtual antlrcpp::Any visitIbOutletQualifier(ObjectiveCParser::IbOutletQualifierContext *context) = 0;

    virtual antlrcpp::Any visitArcBehaviourSpecifier(ObjectiveCParser::ArcBehaviourSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitNullabilitySpecifier(ObjectiveCParser::NullabilitySpecifierContext *context) = 0;

    virtual antlrcpp::Any visitStorageClassSpecifier(ObjectiveCParser::StorageClassSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitTypePrefix(ObjectiveCParser::TypePrefixContext *context) = 0;

    virtual antlrcpp::Any visitTypeQualifier(ObjectiveCParser::TypeQualifierContext *context) = 0;

    virtual antlrcpp::Any visitProtocolQualifier(ObjectiveCParser::ProtocolQualifierContext *context) = 0;

    virtual antlrcpp::Any visitTypeSpecifier(ObjectiveCParser::TypeSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitTypeofExpression(ObjectiveCParser::TypeofExpressionContext *context) = 0;

    virtual antlrcpp::Any visitFieldDeclaratorList(ObjectiveCParser::FieldDeclaratorListContext *context) = 0;

    virtual antlrcpp::Any visitFieldDeclarator(ObjectiveCParser::FieldDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitEnumSpecifier(ObjectiveCParser::EnumSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitEnumeratorList(ObjectiveCParser::EnumeratorListContext *context) = 0;

    virtual antlrcpp::Any visitEnumerator(ObjectiveCParser::EnumeratorContext *context) = 0;

    virtual antlrcpp::Any visitEnumeratorIdentifier(ObjectiveCParser::EnumeratorIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitDirectDeclarator(ObjectiveCParser::DirectDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitDeclaratorSuffix(ObjectiveCParser::DeclaratorSuffixContext *context) = 0;

    virtual antlrcpp::Any visitParameterList(ObjectiveCParser::ParameterListContext *context) = 0;

    virtual antlrcpp::Any visitPointer(ObjectiveCParser::PointerContext *context) = 0;

    virtual antlrcpp::Any visitMacro(ObjectiveCParser::MacroContext *context) = 0;

    virtual antlrcpp::Any visitArrayInitializer(ObjectiveCParser::ArrayInitializerContext *context) = 0;

    virtual antlrcpp::Any visitStructInitializer(ObjectiveCParser::StructInitializerContext *context) = 0;

    virtual antlrcpp::Any visitInitializerList(ObjectiveCParser::InitializerListContext *context) = 0;

    virtual antlrcpp::Any visitTypeName(ObjectiveCParser::TypeNameContext *context) = 0;

    virtual antlrcpp::Any visitAbstractDeclarator(ObjectiveCParser::AbstractDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitAbstractDeclaratorSuffix(ObjectiveCParser::AbstractDeclaratorSuffixContext *context) = 0;

    virtual antlrcpp::Any visitParameterDeclarationList(ObjectiveCParser::ParameterDeclarationListContext *context) = 0;

    virtual antlrcpp::Any visitParameterDeclaration(ObjectiveCParser::ParameterDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitDeclarator(ObjectiveCParser::DeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitStatement(ObjectiveCParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitLabeledStatement(ObjectiveCParser::LabeledStatementContext *context) = 0;

    virtual antlrcpp::Any visitRangeExpression(ObjectiveCParser::RangeExpressionContext *context) = 0;

    virtual antlrcpp::Any visitCompoundStatement(ObjectiveCParser::CompoundStatementContext *context) = 0;

    virtual antlrcpp::Any visitSelectionStatement(ObjectiveCParser::SelectionStatementContext *context) = 0;

    virtual antlrcpp::Any visitSwitchStatement(ObjectiveCParser::SwitchStatementContext *context) = 0;

    virtual antlrcpp::Any visitSwitchBlock(ObjectiveCParser::SwitchBlockContext *context) = 0;

    virtual antlrcpp::Any visitSwitchSection(ObjectiveCParser::SwitchSectionContext *context) = 0;

    virtual antlrcpp::Any visitSwitchLabel(ObjectiveCParser::SwitchLabelContext *context) = 0;

    virtual antlrcpp::Any visitIterationStatement(ObjectiveCParser::IterationStatementContext *context) = 0;

    virtual antlrcpp::Any visitWhileStatement(ObjectiveCParser::WhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitDoStatement(ObjectiveCParser::DoStatementContext *context) = 0;

    virtual antlrcpp::Any visitForStatement(ObjectiveCParser::ForStatementContext *context) = 0;

    virtual antlrcpp::Any visitForLoopInitializer(ObjectiveCParser::ForLoopInitializerContext *context) = 0;

    virtual antlrcpp::Any visitForInStatement(ObjectiveCParser::ForInStatementContext *context) = 0;

    virtual antlrcpp::Any visitJumpStatement(ObjectiveCParser::JumpStatementContext *context) = 0;

    virtual antlrcpp::Any visitExpressions(ObjectiveCParser::ExpressionsContext *context) = 0;

    virtual antlrcpp::Any visitExpression(ObjectiveCParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentOperator(ObjectiveCParser::AssignmentOperatorContext *context) = 0;

    virtual antlrcpp::Any visitCastExpression(ObjectiveCParser::CastExpressionContext *context) = 0;

    virtual antlrcpp::Any visitInitializer(ObjectiveCParser::InitializerContext *context) = 0;

    virtual antlrcpp::Any visitConstantExpression(ObjectiveCParser::ConstantExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpression(ObjectiveCParser::UnaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryOperator(ObjectiveCParser::UnaryOperatorContext *context) = 0;

    virtual antlrcpp::Any visitPostfixExpression(ObjectiveCParser::PostfixExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPostfix(ObjectiveCParser::PostfixContext *context) = 0;

    virtual antlrcpp::Any visitArgumentExpressionList(ObjectiveCParser::ArgumentExpressionListContext *context) = 0;

    virtual antlrcpp::Any visitArgumentExpression(ObjectiveCParser::ArgumentExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryExpression(ObjectiveCParser::PrimaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitConstant(ObjectiveCParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitStringLiteral(ObjectiveCParser::StringLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(ObjectiveCParser::IdentifierContext *context) = 0;


};

}  // namespace antlrcpptest
