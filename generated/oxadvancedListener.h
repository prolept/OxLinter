
// copyright MALICK FALL


// Generated from D:\mfall\Dropbox\Ox_Developement\Ox_parser\Intellij\oxadvanced.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "oxadvancedParser.h"


namespace oxcode {

/**
 * This interface defines an abstract listener for a parse tree produced by oxadvancedParser.
 */
class  oxadvancedListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCompilationUnit(oxadvancedParser::CompilationUnitContext *ctx) = 0;
  virtual void exitCompilationUnit(oxadvancedParser::CompilationUnitContext *ctx) = 0;

  virtual void enterTranslationunit(oxadvancedParser::TranslationunitContext *ctx) = 0;
  virtual void exitTranslationunit(oxadvancedParser::TranslationunitContext *ctx) = 0;

  virtual void enterPrimaryexpression(oxadvancedParser::PrimaryexpressionContext *ctx) = 0;
  virtual void exitPrimaryexpression(oxadvancedParser::PrimaryexpressionContext *ctx) = 0;

  virtual void enterIdexpression(oxadvancedParser::IdexpressionContext *ctx) = 0;
  virtual void exitIdexpression(oxadvancedParser::IdexpressionContext *ctx) = 0;

  virtual void enterUnqualifiedid(oxadvancedParser::UnqualifiedidContext *ctx) = 0;
  virtual void exitUnqualifiedid(oxadvancedParser::UnqualifiedidContext *ctx) = 0;

  virtual void enterQualifiedid(oxadvancedParser::QualifiedidContext *ctx) = 0;
  virtual void exitQualifiedid(oxadvancedParser::QualifiedidContext *ctx) = 0;

  virtual void enterNestednamespecifier(oxadvancedParser::NestednamespecifierContext *ctx) = 0;
  virtual void exitNestednamespecifier(oxadvancedParser::NestednamespecifierContext *ctx) = 0;

  virtual void enterLambdaexpression(oxadvancedParser::LambdaexpressionContext *ctx) = 0;
  virtual void exitLambdaexpression(oxadvancedParser::LambdaexpressionContext *ctx) = 0;

  virtual void enterLambdaintroducer(oxadvancedParser::LambdaintroducerContext *ctx) = 0;
  virtual void exitLambdaintroducer(oxadvancedParser::LambdaintroducerContext *ctx) = 0;

  virtual void enterLambdacapture(oxadvancedParser::LambdacaptureContext *ctx) = 0;
  virtual void exitLambdacapture(oxadvancedParser::LambdacaptureContext *ctx) = 0;

  virtual void enterCapturedefault(oxadvancedParser::CapturedefaultContext *ctx) = 0;
  virtual void exitCapturedefault(oxadvancedParser::CapturedefaultContext *ctx) = 0;

  virtual void enterCapturelist(oxadvancedParser::CapturelistContext *ctx) = 0;
  virtual void exitCapturelist(oxadvancedParser::CapturelistContext *ctx) = 0;

  virtual void enterCapture(oxadvancedParser::CaptureContext *ctx) = 0;
  virtual void exitCapture(oxadvancedParser::CaptureContext *ctx) = 0;

  virtual void enterSimplecapture(oxadvancedParser::SimplecaptureContext *ctx) = 0;
  virtual void exitSimplecapture(oxadvancedParser::SimplecaptureContext *ctx) = 0;

  virtual void enterInitcapture(oxadvancedParser::InitcaptureContext *ctx) = 0;
  virtual void exitInitcapture(oxadvancedParser::InitcaptureContext *ctx) = 0;

  virtual void enterLambdadeclarator(oxadvancedParser::LambdadeclaratorContext *ctx) = 0;
  virtual void exitLambdadeclarator(oxadvancedParser::LambdadeclaratorContext *ctx) = 0;

  virtual void enterPostfixexpression(oxadvancedParser::PostfixexpressionContext *ctx) = 0;
  virtual void exitPostfixexpression(oxadvancedParser::PostfixexpressionContext *ctx) = 0;

  virtual void enterMatrixIndex(oxadvancedParser::MatrixIndexContext *ctx) = 0;
  virtual void exitMatrixIndex(oxadvancedParser::MatrixIndexContext *ctx) = 0;

  virtual void enterMatrixIndexSeq(oxadvancedParser::MatrixIndexSeqContext *ctx) = 0;
  virtual void exitMatrixIndexSeq(oxadvancedParser::MatrixIndexSeqContext *ctx) = 0;

  virtual void enterTranspose(oxadvancedParser::TransposeContext *ctx) = 0;
  virtual void exitTranspose(oxadvancedParser::TransposeContext *ctx) = 0;

  virtual void enterExpressionlist(oxadvancedParser::ExpressionlistContext *ctx) = 0;
  virtual void exitExpressionlist(oxadvancedParser::ExpressionlistContext *ctx) = 0;

  virtual void enterUnaryexpression(oxadvancedParser::UnaryexpressionContext *ctx) = 0;
  virtual void exitUnaryexpression(oxadvancedParser::UnaryexpressionContext *ctx) = 0;

  virtual void enterUnaryoperator(oxadvancedParser::UnaryoperatorContext *ctx) = 0;
  virtual void exitUnaryoperator(oxadvancedParser::UnaryoperatorContext *ctx) = 0;

  virtual void enterNewexpression(oxadvancedParser::NewexpressionContext *ctx) = 0;
  virtual void exitNewexpression(oxadvancedParser::NewexpressionContext *ctx) = 0;

  virtual void enterNewplacement(oxadvancedParser::NewplacementContext *ctx) = 0;
  virtual void exitNewplacement(oxadvancedParser::NewplacementContext *ctx) = 0;

  virtual void enterNewtypeid(oxadvancedParser::NewtypeidContext *ctx) = 0;
  virtual void exitNewtypeid(oxadvancedParser::NewtypeidContext *ctx) = 0;

  virtual void enterNewdeclarator(oxadvancedParser::NewdeclaratorContext *ctx) = 0;
  virtual void exitNewdeclarator(oxadvancedParser::NewdeclaratorContext *ctx) = 0;

  virtual void enterNoptrnewdeclarator(oxadvancedParser::NoptrnewdeclaratorContext *ctx) = 0;
  virtual void exitNoptrnewdeclarator(oxadvancedParser::NoptrnewdeclaratorContext *ctx) = 0;

  virtual void enterNewinitializer(oxadvancedParser::NewinitializerContext *ctx) = 0;
  virtual void exitNewinitializer(oxadvancedParser::NewinitializerContext *ctx) = 0;

  virtual void enterDeleteexpression(oxadvancedParser::DeleteexpressionContext *ctx) = 0;
  virtual void exitDeleteexpression(oxadvancedParser::DeleteexpressionContext *ctx) = 0;

  virtual void enterCastexpression(oxadvancedParser::CastexpressionContext *ctx) = 0;
  virtual void exitCastexpression(oxadvancedParser::CastexpressionContext *ctx) = 0;

  virtual void enterPmexpression(oxadvancedParser::PmexpressionContext *ctx) = 0;
  virtual void exitPmexpression(oxadvancedParser::PmexpressionContext *ctx) = 0;

  virtual void enterMultiplicativeexpression(oxadvancedParser::MultiplicativeexpressionContext *ctx) = 0;
  virtual void exitMultiplicativeexpression(oxadvancedParser::MultiplicativeexpressionContext *ctx) = 0;

  virtual void enterAdditiveexpression(oxadvancedParser::AdditiveexpressionContext *ctx) = 0;
  virtual void exitAdditiveexpression(oxadvancedParser::AdditiveexpressionContext *ctx) = 0;

  virtual void enterShiftexpression(oxadvancedParser::ShiftexpressionContext *ctx) = 0;
  virtual void exitShiftexpression(oxadvancedParser::ShiftexpressionContext *ctx) = 0;

  virtual void enterRelationalexpression(oxadvancedParser::RelationalexpressionContext *ctx) = 0;
  virtual void exitRelationalexpression(oxadvancedParser::RelationalexpressionContext *ctx) = 0;

  virtual void enterEqualityexpression(oxadvancedParser::EqualityexpressionContext *ctx) = 0;
  virtual void exitEqualityexpression(oxadvancedParser::EqualityexpressionContext *ctx) = 0;

  virtual void enterAndexpression(oxadvancedParser::AndexpressionContext *ctx) = 0;
  virtual void exitAndexpression(oxadvancedParser::AndexpressionContext *ctx) = 0;

  virtual void enterExclusiveorexpression(oxadvancedParser::ExclusiveorexpressionContext *ctx) = 0;
  virtual void exitExclusiveorexpression(oxadvancedParser::ExclusiveorexpressionContext *ctx) = 0;

  virtual void enterLogicalandexpression(oxadvancedParser::LogicalandexpressionContext *ctx) = 0;
  virtual void exitLogicalandexpression(oxadvancedParser::LogicalandexpressionContext *ctx) = 0;

  virtual void enterLogicalorexpression(oxadvancedParser::LogicalorexpressionContext *ctx) = 0;
  virtual void exitLogicalorexpression(oxadvancedParser::LogicalorexpressionContext *ctx) = 0;

  virtual void enterConditionalexpression(oxadvancedParser::ConditionalexpressionContext *ctx) = 0;
  virtual void exitConditionalexpression(oxadvancedParser::ConditionalexpressionContext *ctx) = 0;

  virtual void enterAssignmentexpression(oxadvancedParser::AssignmentexpressionContext *ctx) = 0;
  virtual void exitAssignmentexpression(oxadvancedParser::AssignmentexpressionContext *ctx) = 0;

  virtual void enterMultiplereturnvalues(oxadvancedParser::MultiplereturnvaluesContext *ctx) = 0;
  virtual void exitMultiplereturnvalues(oxadvancedParser::MultiplereturnvaluesContext *ctx) = 0;

  virtual void enterAssignmentoperator(oxadvancedParser::AssignmentoperatorContext *ctx) = 0;
  virtual void exitAssignmentoperator(oxadvancedParser::AssignmentoperatorContext *ctx) = 0;

  virtual void enterExpression(oxadvancedParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(oxadvancedParser::ExpressionContext *ctx) = 0;

  virtual void enterConstantexpression(oxadvancedParser::ConstantexpressionContext *ctx) = 0;
  virtual void exitConstantexpression(oxadvancedParser::ConstantexpressionContext *ctx) = 0;

  virtual void enterStatement(oxadvancedParser::StatementContext *ctx) = 0;
  virtual void exitStatement(oxadvancedParser::StatementContext *ctx) = 0;

  virtual void enterLabeledstatement(oxadvancedParser::LabeledstatementContext *ctx) = 0;
  virtual void exitLabeledstatement(oxadvancedParser::LabeledstatementContext *ctx) = 0;

  virtual void enterExpressionstatement(oxadvancedParser::ExpressionstatementContext *ctx) = 0;
  virtual void exitExpressionstatement(oxadvancedParser::ExpressionstatementContext *ctx) = 0;

  virtual void enterCompoundstatement(oxadvancedParser::CompoundstatementContext *ctx) = 0;
  virtual void exitCompoundstatement(oxadvancedParser::CompoundstatementContext *ctx) = 0;

  virtual void enterStatementseq(oxadvancedParser::StatementseqContext *ctx) = 0;
  virtual void exitStatementseq(oxadvancedParser::StatementseqContext *ctx) = 0;

  virtual void enterSelectionstatement(oxadvancedParser::SelectionstatementContext *ctx) = 0;
  virtual void exitSelectionstatement(oxadvancedParser::SelectionstatementContext *ctx) = 0;

  virtual void enterCondition(oxadvancedParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(oxadvancedParser::ConditionContext *ctx) = 0;

  virtual void enterIterationstatement(oxadvancedParser::IterationstatementContext *ctx) = 0;
  virtual void exitIterationstatement(oxadvancedParser::IterationstatementContext *ctx) = 0;

  virtual void enterForinitstatement(oxadvancedParser::ForinitstatementContext *ctx) = 0;
  virtual void exitForinitstatement(oxadvancedParser::ForinitstatementContext *ctx) = 0;

  virtual void enterJumpstatement(oxadvancedParser::JumpstatementContext *ctx) = 0;
  virtual void exitJumpstatement(oxadvancedParser::JumpstatementContext *ctx) = 0;

  virtual void enterDeclarationstatement(oxadvancedParser::DeclarationstatementContext *ctx) = 0;
  virtual void exitDeclarationstatement(oxadvancedParser::DeclarationstatementContext *ctx) = 0;

  virtual void enterDeclarationseq(oxadvancedParser::DeclarationseqContext *ctx) = 0;
  virtual void exitDeclarationseq(oxadvancedParser::DeclarationseqContext *ctx) = 0;

  virtual void enterDeclaration(oxadvancedParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(oxadvancedParser::DeclarationContext *ctx) = 0;

  virtual void enterJavadoc(oxadvancedParser::JavadocContext *ctx) = 0;
  virtual void exitJavadoc(oxadvancedParser::JavadocContext *ctx) = 0;

  virtual void enterExternal(oxadvancedParser::ExternalContext *ctx) = 0;
  virtual void exitExternal(oxadvancedParser::ExternalContext *ctx) = 0;

  virtual void enterFunctionname(oxadvancedParser::FunctionnameContext *ctx) = 0;
  virtual void exitFunctionname(oxadvancedParser::FunctionnameContext *ctx) = 0;

  virtual void enterExternal_function(oxadvancedParser::External_functionContext *ctx) = 0;
  virtual void exitExternal_function(oxadvancedParser::External_functionContext *ctx) = 0;

  virtual void enterBodyclasse(oxadvancedParser::BodyclasseContext *ctx) = 0;
  virtual void exitBodyclasse(oxadvancedParser::BodyclasseContext *ctx) = 0;

  virtual void enterBlockdeclaration(oxadvancedParser::BlockdeclarationContext *ctx) = 0;
  virtual void exitBlockdeclaration(oxadvancedParser::BlockdeclarationContext *ctx) = 0;

  virtual void enterAliasdeclaration(oxadvancedParser::AliasdeclarationContext *ctx) = 0;
  virtual void exitAliasdeclaration(oxadvancedParser::AliasdeclarationContext *ctx) = 0;

  virtual void enterSimpledeclaration(oxadvancedParser::SimpledeclarationContext *ctx) = 0;
  virtual void exitSimpledeclaration(oxadvancedParser::SimpledeclarationContext *ctx) = 0;

  virtual void enterStatic_assertdeclaration(oxadvancedParser::Static_assertdeclarationContext *ctx) = 0;
  virtual void exitStatic_assertdeclaration(oxadvancedParser::Static_assertdeclarationContext *ctx) = 0;

  virtual void enterEmptydeclaration(oxadvancedParser::EmptydeclarationContext *ctx) = 0;
  virtual void exitEmptydeclaration(oxadvancedParser::EmptydeclarationContext *ctx) = 0;

  virtual void enterDeclspecifier(oxadvancedParser::DeclspecifierContext *ctx) = 0;
  virtual void exitDeclspecifier(oxadvancedParser::DeclspecifierContext *ctx) = 0;

  virtual void enterDeclspecifierseq(oxadvancedParser::DeclspecifierseqContext *ctx) = 0;
  virtual void exitDeclspecifierseq(oxadvancedParser::DeclspecifierseqContext *ctx) = 0;

  virtual void enterStorageclassspecifier(oxadvancedParser::StorageclassspecifierContext *ctx) = 0;
  virtual void exitStorageclassspecifier(oxadvancedParser::StorageclassspecifierContext *ctx) = 0;

  virtual void enterFunctionspecifier(oxadvancedParser::FunctionspecifierContext *ctx) = 0;
  virtual void exitFunctionspecifier(oxadvancedParser::FunctionspecifierContext *ctx) = 0;

  virtual void enterTypespecifier(oxadvancedParser::TypespecifierContext *ctx) = 0;
  virtual void exitTypespecifier(oxadvancedParser::TypespecifierContext *ctx) = 0;

  virtual void enterTrailingtypespecifier(oxadvancedParser::TrailingtypespecifierContext *ctx) = 0;
  virtual void exitTrailingtypespecifier(oxadvancedParser::TrailingtypespecifierContext *ctx) = 0;

  virtual void enterTypespecifierseq(oxadvancedParser::TypespecifierseqContext *ctx) = 0;
  virtual void exitTypespecifierseq(oxadvancedParser::TypespecifierseqContext *ctx) = 0;

  virtual void enterTrailingtypespecifierseq(oxadvancedParser::TrailingtypespecifierseqContext *ctx) = 0;
  virtual void exitTrailingtypespecifierseq(oxadvancedParser::TrailingtypespecifierseqContext *ctx) = 0;

  virtual void enterSimpletypespecifier(oxadvancedParser::SimpletypespecifierContext *ctx) = 0;
  virtual void exitSimpletypespecifier(oxadvancedParser::SimpletypespecifierContext *ctx) = 0;

  virtual void enterThetypename(oxadvancedParser::ThetypenameContext *ctx) = 0;
  virtual void exitThetypename(oxadvancedParser::ThetypenameContext *ctx) = 0;

  virtual void enterDecltypespecifier(oxadvancedParser::DecltypespecifierContext *ctx) = 0;
  virtual void exitDecltypespecifier(oxadvancedParser::DecltypespecifierContext *ctx) = 0;

  virtual void enterElaboratedtypespecifier(oxadvancedParser::ElaboratedtypespecifierContext *ctx) = 0;
  virtual void exitElaboratedtypespecifier(oxadvancedParser::ElaboratedtypespecifierContext *ctx) = 0;

  virtual void enterEnumspecifier(oxadvancedParser::EnumspecifierContext *ctx) = 0;
  virtual void exitEnumspecifier(oxadvancedParser::EnumspecifierContext *ctx) = 0;

  virtual void enterEnumhead(oxadvancedParser::EnumheadContext *ctx) = 0;
  virtual void exitEnumhead(oxadvancedParser::EnumheadContext *ctx) = 0;

  virtual void enterOpaqueenumdeclaration(oxadvancedParser::OpaqueenumdeclarationContext *ctx) = 0;
  virtual void exitOpaqueenumdeclaration(oxadvancedParser::OpaqueenumdeclarationContext *ctx) = 0;

  virtual void enterEnumkey(oxadvancedParser::EnumkeyContext *ctx) = 0;
  virtual void exitEnumkey(oxadvancedParser::EnumkeyContext *ctx) = 0;

  virtual void enterEnumbase(oxadvancedParser::EnumbaseContext *ctx) = 0;
  virtual void exitEnumbase(oxadvancedParser::EnumbaseContext *ctx) = 0;

  virtual void enterEnumeratorlist(oxadvancedParser::EnumeratorlistContext *ctx) = 0;
  virtual void exitEnumeratorlist(oxadvancedParser::EnumeratorlistContext *ctx) = 0;

  virtual void enterEnumeratordefinition(oxadvancedParser::EnumeratordefinitionContext *ctx) = 0;
  virtual void exitEnumeratordefinition(oxadvancedParser::EnumeratordefinitionContext *ctx) = 0;

  virtual void enterEnumerator(oxadvancedParser::EnumeratorContext *ctx) = 0;
  virtual void exitEnumerator(oxadvancedParser::EnumeratorContext *ctx) = 0;

  virtual void enterNamespacename(oxadvancedParser::NamespacenameContext *ctx) = 0;
  virtual void exitNamespacename(oxadvancedParser::NamespacenameContext *ctx) = 0;

  virtual void enterOriginalnamespacename(oxadvancedParser::OriginalnamespacenameContext *ctx) = 0;
  virtual void exitOriginalnamespacename(oxadvancedParser::OriginalnamespacenameContext *ctx) = 0;

  virtual void enterNamespacedefinition(oxadvancedParser::NamespacedefinitionContext *ctx) = 0;
  virtual void exitNamespacedefinition(oxadvancedParser::NamespacedefinitionContext *ctx) = 0;

  virtual void enterNamednamespacedefinition(oxadvancedParser::NamednamespacedefinitionContext *ctx) = 0;
  virtual void exitNamednamespacedefinition(oxadvancedParser::NamednamespacedefinitionContext *ctx) = 0;

  virtual void enterOriginalnamespacedefinition(oxadvancedParser::OriginalnamespacedefinitionContext *ctx) = 0;
  virtual void exitOriginalnamespacedefinition(oxadvancedParser::OriginalnamespacedefinitionContext *ctx) = 0;

  virtual void enterExtensionnamespacedefinition(oxadvancedParser::ExtensionnamespacedefinitionContext *ctx) = 0;
  virtual void exitExtensionnamespacedefinition(oxadvancedParser::ExtensionnamespacedefinitionContext *ctx) = 0;

  virtual void enterUnnamednamespacedefinition(oxadvancedParser::UnnamednamespacedefinitionContext *ctx) = 0;
  virtual void exitUnnamednamespacedefinition(oxadvancedParser::UnnamednamespacedefinitionContext *ctx) = 0;

  virtual void enterNamespacebody(oxadvancedParser::NamespacebodyContext *ctx) = 0;
  virtual void exitNamespacebody(oxadvancedParser::NamespacebodyContext *ctx) = 0;

  virtual void enterNamespacealias(oxadvancedParser::NamespacealiasContext *ctx) = 0;
  virtual void exitNamespacealias(oxadvancedParser::NamespacealiasContext *ctx) = 0;

  virtual void enterLinkagespecification(oxadvancedParser::LinkagespecificationContext *ctx) = 0;
  virtual void exitLinkagespecification(oxadvancedParser::LinkagespecificationContext *ctx) = 0;

  virtual void enterBalancedtokenseq(oxadvancedParser::BalancedtokenseqContext *ctx) = 0;
  virtual void exitBalancedtokenseq(oxadvancedParser::BalancedtokenseqContext *ctx) = 0;

  virtual void enterBalancedtoken(oxadvancedParser::BalancedtokenContext *ctx) = 0;
  virtual void exitBalancedtoken(oxadvancedParser::BalancedtokenContext *ctx) = 0;

  virtual void enterInitdeclaratorlist(oxadvancedParser::InitdeclaratorlistContext *ctx) = 0;
  virtual void exitInitdeclaratorlist(oxadvancedParser::InitdeclaratorlistContext *ctx) = 0;

  virtual void enterInitdeclarator(oxadvancedParser::InitdeclaratorContext *ctx) = 0;
  virtual void exitInitdeclarator(oxadvancedParser::InitdeclaratorContext *ctx) = 0;

  virtual void enterDeclarator(oxadvancedParser::DeclaratorContext *ctx) = 0;
  virtual void exitDeclarator(oxadvancedParser::DeclaratorContext *ctx) = 0;

  virtual void enterPtrdeclarator(oxadvancedParser::PtrdeclaratorContext *ctx) = 0;
  virtual void exitPtrdeclarator(oxadvancedParser::PtrdeclaratorContext *ctx) = 0;

  virtual void enterNoptrdeclarator(oxadvancedParser::NoptrdeclaratorContext *ctx) = 0;
  virtual void exitNoptrdeclarator(oxadvancedParser::NoptrdeclaratorContext *ctx) = 0;

  virtual void enterParametersandqualifiers(oxadvancedParser::ParametersandqualifiersContext *ctx) = 0;
  virtual void exitParametersandqualifiers(oxadvancedParser::ParametersandqualifiersContext *ctx) = 0;

  virtual void enterParametersWQ(oxadvancedParser::ParametersWQContext *ctx) = 0;
  virtual void exitParametersWQ(oxadvancedParser::ParametersWQContext *ctx) = 0;

  virtual void enterTrailingreturntype(oxadvancedParser::TrailingreturntypeContext *ctx) = 0;
  virtual void exitTrailingreturntype(oxadvancedParser::TrailingreturntypeContext *ctx) = 0;

  virtual void enterCvqualifierseq(oxadvancedParser::CvqualifierseqContext *ctx) = 0;
  virtual void exitCvqualifierseq(oxadvancedParser::CvqualifierseqContext *ctx) = 0;

  virtual void enterCvqualifier(oxadvancedParser::CvqualifierContext *ctx) = 0;
  virtual void exitCvqualifier(oxadvancedParser::CvqualifierContext *ctx) = 0;

  virtual void enterDeclaratorid(oxadvancedParser::DeclaratoridContext *ctx) = 0;
  virtual void exitDeclaratorid(oxadvancedParser::DeclaratoridContext *ctx) = 0;

  virtual void enterThetypeid(oxadvancedParser::ThetypeidContext *ctx) = 0;
  virtual void exitThetypeid(oxadvancedParser::ThetypeidContext *ctx) = 0;

  virtual void enterAbstractdeclarator(oxadvancedParser::AbstractdeclaratorContext *ctx) = 0;
  virtual void exitAbstractdeclarator(oxadvancedParser::AbstractdeclaratorContext *ctx) = 0;

  virtual void enterPtrabstractdeclarator(oxadvancedParser::PtrabstractdeclaratorContext *ctx) = 0;
  virtual void exitPtrabstractdeclarator(oxadvancedParser::PtrabstractdeclaratorContext *ctx) = 0;

  virtual void enterNoptrabstractdeclarator(oxadvancedParser::NoptrabstractdeclaratorContext *ctx) = 0;
  virtual void exitNoptrabstractdeclarator(oxadvancedParser::NoptrabstractdeclaratorContext *ctx) = 0;

  virtual void enterAbstractpackdeclarator(oxadvancedParser::AbstractpackdeclaratorContext *ctx) = 0;
  virtual void exitAbstractpackdeclarator(oxadvancedParser::AbstractpackdeclaratorContext *ctx) = 0;

  virtual void enterNoptrabstractpackdeclarator(oxadvancedParser::NoptrabstractpackdeclaratorContext *ctx) = 0;
  virtual void exitNoptrabstractpackdeclarator(oxadvancedParser::NoptrabstractpackdeclaratorContext *ctx) = 0;

  virtual void enterParameterWQdeclarationclause(oxadvancedParser::ParameterWQdeclarationclauseContext *ctx) = 0;
  virtual void exitParameterWQdeclarationclause(oxadvancedParser::ParameterWQdeclarationclauseContext *ctx) = 0;

  virtual void enterParameterWQdeclarationlist(oxadvancedParser::ParameterWQdeclarationlistContext *ctx) = 0;
  virtual void exitParameterWQdeclarationlist(oxadvancedParser::ParameterWQdeclarationlistContext *ctx) = 0;

  virtual void enterParameterWQdeclaration(oxadvancedParser::ParameterWQdeclarationContext *ctx) = 0;
  virtual void exitParameterWQdeclaration(oxadvancedParser::ParameterWQdeclarationContext *ctx) = 0;

  virtual void enterOptionalargument(oxadvancedParser::OptionalargumentContext *ctx) = 0;
  virtual void exitOptionalargument(oxadvancedParser::OptionalargumentContext *ctx) = 0;

  virtual void enterParameterdeclarationlist(oxadvancedParser::ParameterdeclarationlistContext *ctx) = 0;
  virtual void exitParameterdeclarationlist(oxadvancedParser::ParameterdeclarationlistContext *ctx) = 0;

  virtual void enterFunctionarguments(oxadvancedParser::FunctionargumentsContext *ctx) = 0;
  virtual void exitFunctionarguments(oxadvancedParser::FunctionargumentsContext *ctx) = 0;

  virtual void enterParameterdeclaration(oxadvancedParser::ParameterdeclarationContext *ctx) = 0;
  virtual void exitParameterdeclaration(oxadvancedParser::ParameterdeclarationContext *ctx) = 0;

  virtual void enterFunctiondefinition(oxadvancedParser::FunctiondefinitionContext *ctx) = 0;
  virtual void exitFunctiondefinition(oxadvancedParser::FunctiondefinitionContext *ctx) = 0;

  virtual void enterFunctionbody(oxadvancedParser::FunctionbodyContext *ctx) = 0;
  virtual void exitFunctionbody(oxadvancedParser::FunctionbodyContext *ctx) = 0;

  virtual void enterInitializer(oxadvancedParser::InitializerContext *ctx) = 0;
  virtual void exitInitializer(oxadvancedParser::InitializerContext *ctx) = 0;

  virtual void enterBraceorequalinitializer(oxadvancedParser::BraceorequalinitializerContext *ctx) = 0;
  virtual void exitBraceorequalinitializer(oxadvancedParser::BraceorequalinitializerContext *ctx) = 0;

  virtual void enterInitializerclause(oxadvancedParser::InitializerclauseContext *ctx) = 0;
  virtual void exitInitializerclause(oxadvancedParser::InitializerclauseContext *ctx) = 0;

  virtual void enterInitializerlist(oxadvancedParser::InitializerlistContext *ctx) = 0;
  virtual void exitInitializerlist(oxadvancedParser::InitializerlistContext *ctx) = 0;

  virtual void enterInitializerlistoxmatrix(oxadvancedParser::InitializerlistoxmatrixContext *ctx) = 0;
  virtual void exitInitializerlistoxmatrix(oxadvancedParser::InitializerlistoxmatrixContext *ctx) = 0;

  virtual void enterOxmatrix(oxadvancedParser::OxmatrixContext *ctx) = 0;
  virtual void exitOxmatrix(oxadvancedParser::OxmatrixContext *ctx) = 0;

  virtual void enterBracedinitlist(oxadvancedParser::BracedinitlistContext *ctx) = 0;
  virtual void exitBracedinitlist(oxadvancedParser::BracedinitlistContext *ctx) = 0;

  virtual void enterClassname(oxadvancedParser::ClassnameContext *ctx) = 0;
  virtual void exitClassname(oxadvancedParser::ClassnameContext *ctx) = 0;

  virtual void enterClassspecifier(oxadvancedParser::ClassspecifierContext *ctx) = 0;
  virtual void exitClassspecifier(oxadvancedParser::ClassspecifierContext *ctx) = 0;

  virtual void enterClasshead(oxadvancedParser::ClassheadContext *ctx) = 0;
  virtual void exitClasshead(oxadvancedParser::ClassheadContext *ctx) = 0;

  virtual void enterClassheadname(oxadvancedParser::ClassheadnameContext *ctx) = 0;
  virtual void exitClassheadname(oxadvancedParser::ClassheadnameContext *ctx) = 0;

  virtual void enterClassvirtspecifier(oxadvancedParser::ClassvirtspecifierContext *ctx) = 0;
  virtual void exitClassvirtspecifier(oxadvancedParser::ClassvirtspecifierContext *ctx) = 0;

  virtual void enterClasskey(oxadvancedParser::ClasskeyContext *ctx) = 0;
  virtual void exitClasskey(oxadvancedParser::ClasskeyContext *ctx) = 0;

  virtual void enterMemberspecification(oxadvancedParser::MemberspecificationContext *ctx) = 0;
  virtual void exitMemberspecification(oxadvancedParser::MemberspecificationContext *ctx) = 0;

  virtual void enterAccessmemberspecification(oxadvancedParser::AccessmemberspecificationContext *ctx) = 0;
  virtual void exitAccessmemberspecification(oxadvancedParser::AccessmemberspecificationContext *ctx) = 0;

  virtual void enterMemberdeclaration(oxadvancedParser::MemberdeclarationContext *ctx) = 0;
  virtual void exitMemberdeclaration(oxadvancedParser::MemberdeclarationContext *ctx) = 0;

  virtual void enterMemberdeclaratorlist(oxadvancedParser::MemberdeclaratorlistContext *ctx) = 0;
  virtual void exitMemberdeclaratorlist(oxadvancedParser::MemberdeclaratorlistContext *ctx) = 0;

  virtual void enterMemberdeclarator(oxadvancedParser::MemberdeclaratorContext *ctx) = 0;
  virtual void exitMemberdeclarator(oxadvancedParser::MemberdeclaratorContext *ctx) = 0;

  virtual void enterVirtspecifierseq(oxadvancedParser::VirtspecifierseqContext *ctx) = 0;
  virtual void exitVirtspecifierseq(oxadvancedParser::VirtspecifierseqContext *ctx) = 0;

  virtual void enterVirtspecifier(oxadvancedParser::VirtspecifierContext *ctx) = 0;
  virtual void exitVirtspecifier(oxadvancedParser::VirtspecifierContext *ctx) = 0;

  virtual void enterPurespecifier(oxadvancedParser::PurespecifierContext *ctx) = 0;
  virtual void exitPurespecifier(oxadvancedParser::PurespecifierContext *ctx) = 0;

  virtual void enterBaseclause(oxadvancedParser::BaseclauseContext *ctx) = 0;
  virtual void exitBaseclause(oxadvancedParser::BaseclauseContext *ctx) = 0;

  virtual void enterBasespecifierlist(oxadvancedParser::BasespecifierlistContext *ctx) = 0;
  virtual void exitBasespecifierlist(oxadvancedParser::BasespecifierlistContext *ctx) = 0;

  virtual void enterBasespecifier(oxadvancedParser::BasespecifierContext *ctx) = 0;
  virtual void exitBasespecifier(oxadvancedParser::BasespecifierContext *ctx) = 0;

  virtual void enterClassordecltype(oxadvancedParser::ClassordecltypeContext *ctx) = 0;
  virtual void exitClassordecltype(oxadvancedParser::ClassordecltypeContext *ctx) = 0;

  virtual void enterBasetypespecifier(oxadvancedParser::BasetypespecifierContext *ctx) = 0;
  virtual void exitBasetypespecifier(oxadvancedParser::BasetypespecifierContext *ctx) = 0;

  virtual void enterAccessspecifier(oxadvancedParser::AccessspecifierContext *ctx) = 0;
  virtual void exitAccessspecifier(oxadvancedParser::AccessspecifierContext *ctx) = 0;

  virtual void enterConversionfunctionid(oxadvancedParser::ConversionfunctionidContext *ctx) = 0;
  virtual void exitConversionfunctionid(oxadvancedParser::ConversionfunctionidContext *ctx) = 0;

  virtual void enterConversiontypeid(oxadvancedParser::ConversiontypeidContext *ctx) = 0;
  virtual void exitConversiontypeid(oxadvancedParser::ConversiontypeidContext *ctx) = 0;

  virtual void enterCtorinitializer(oxadvancedParser::CtorinitializerContext *ctx) = 0;
  virtual void exitCtorinitializer(oxadvancedParser::CtorinitializerContext *ctx) = 0;

  virtual void enterMeminitializerlist(oxadvancedParser::MeminitializerlistContext *ctx) = 0;
  virtual void exitMeminitializerlist(oxadvancedParser::MeminitializerlistContext *ctx) = 0;

  virtual void enterMeminitializer(oxadvancedParser::MeminitializerContext *ctx) = 0;
  virtual void exitMeminitializer(oxadvancedParser::MeminitializerContext *ctx) = 0;

  virtual void enterMeminitializerid(oxadvancedParser::MeminitializeridContext *ctx) = 0;
  virtual void exitMeminitializerid(oxadvancedParser::MeminitializeridContext *ctx) = 0;

  virtual void enterOperatorfunctionid(oxadvancedParser::OperatorfunctionidContext *ctx) = 0;
  virtual void exitOperatorfunctionid(oxadvancedParser::OperatorfunctionidContext *ctx) = 0;

  virtual void enterLiteraloperatorid(oxadvancedParser::LiteraloperatoridContext *ctx) = 0;
  virtual void exitLiteraloperatorid(oxadvancedParser::LiteraloperatoridContext *ctx) = 0;

  virtual void enterRightShift(oxadvancedParser::RightShiftContext *ctx) = 0;
  virtual void exitRightShift(oxadvancedParser::RightShiftContext *ctx) = 0;

  virtual void enterRightShiftAssign(oxadvancedParser::RightShiftAssignContext *ctx) = 0;
  virtual void exitRightShiftAssign(oxadvancedParser::RightShiftAssignContext *ctx) = 0;

  virtual void enterTheoperator(oxadvancedParser::TheoperatorContext *ctx) = 0;
  virtual void exitTheoperator(oxadvancedParser::TheoperatorContext *ctx) = 0;

  virtual void enterLiteral(oxadvancedParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(oxadvancedParser::LiteralContext *ctx) = 0;

  virtual void enterBooleanliteral(oxadvancedParser::BooleanliteralContext *ctx) = 0;
  virtual void exitBooleanliteral(oxadvancedParser::BooleanliteralContext *ctx) = 0;

  virtual void enterPointerliteral(oxadvancedParser::PointerliteralContext *ctx) = 0;
  virtual void exitPointerliteral(oxadvancedParser::PointerliteralContext *ctx) = 0;

  virtual void enterUserdefinedliteral(oxadvancedParser::UserdefinedliteralContext *ctx) = 0;
  virtual void exitUserdefinedliteral(oxadvancedParser::UserdefinedliteralContext *ctx) = 0;


};

}  // namespace oxcode
