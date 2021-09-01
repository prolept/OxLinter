
// copyright MALICK FALL


// Generated from D:\mfall\Dropbox\Ox_Developement\Ox_parser\Intellij\oxadvanced.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "oxadvancedListener.h"


namespace oxcode {

/**
 * This class provides an empty implementation of oxadvancedListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  oxadvancedBaseListener : public oxadvancedListener {
public:

  virtual void enterCompilationUnit(oxadvancedParser::CompilationUnitContext * /*ctx*/) override { }
  virtual void exitCompilationUnit(oxadvancedParser::CompilationUnitContext * /*ctx*/) override { }

  virtual void enterTranslationunit(oxadvancedParser::TranslationunitContext * /*ctx*/) override { }
  virtual void exitTranslationunit(oxadvancedParser::TranslationunitContext * /*ctx*/) override { }

  virtual void enterPrimaryexpression(oxadvancedParser::PrimaryexpressionContext * /*ctx*/) override { }
  virtual void exitPrimaryexpression(oxadvancedParser::PrimaryexpressionContext * /*ctx*/) override { }

  virtual void enterIdexpression(oxadvancedParser::IdexpressionContext * /*ctx*/) override { }
  virtual void exitIdexpression(oxadvancedParser::IdexpressionContext * /*ctx*/) override { }

  virtual void enterUnqualifiedid(oxadvancedParser::UnqualifiedidContext * /*ctx*/) override { }
  virtual void exitUnqualifiedid(oxadvancedParser::UnqualifiedidContext * /*ctx*/) override { }

  virtual void enterQualifiedid(oxadvancedParser::QualifiedidContext * /*ctx*/) override { }
  virtual void exitQualifiedid(oxadvancedParser::QualifiedidContext * /*ctx*/) override { }

  virtual void enterNestednamespecifier(oxadvancedParser::NestednamespecifierContext * /*ctx*/) override { }
  virtual void exitNestednamespecifier(oxadvancedParser::NestednamespecifierContext * /*ctx*/) override { }

  virtual void enterLambdaexpression(oxadvancedParser::LambdaexpressionContext * /*ctx*/) override { }
  virtual void exitLambdaexpression(oxadvancedParser::LambdaexpressionContext * /*ctx*/) override { }

  virtual void enterLambdaintroducer(oxadvancedParser::LambdaintroducerContext * /*ctx*/) override { }
  virtual void exitLambdaintroducer(oxadvancedParser::LambdaintroducerContext * /*ctx*/) override { }

  virtual void enterLambdacapture(oxadvancedParser::LambdacaptureContext * /*ctx*/) override { }
  virtual void exitLambdacapture(oxadvancedParser::LambdacaptureContext * /*ctx*/) override { }

  virtual void enterCapturedefault(oxadvancedParser::CapturedefaultContext * /*ctx*/) override { }
  virtual void exitCapturedefault(oxadvancedParser::CapturedefaultContext * /*ctx*/) override { }

  virtual void enterCapturelist(oxadvancedParser::CapturelistContext * /*ctx*/) override { }
  virtual void exitCapturelist(oxadvancedParser::CapturelistContext * /*ctx*/) override { }

  virtual void enterCapture(oxadvancedParser::CaptureContext * /*ctx*/) override { }
  virtual void exitCapture(oxadvancedParser::CaptureContext * /*ctx*/) override { }

  virtual void enterSimplecapture(oxadvancedParser::SimplecaptureContext * /*ctx*/) override { }
  virtual void exitSimplecapture(oxadvancedParser::SimplecaptureContext * /*ctx*/) override { }

  virtual void enterInitcapture(oxadvancedParser::InitcaptureContext * /*ctx*/) override { }
  virtual void exitInitcapture(oxadvancedParser::InitcaptureContext * /*ctx*/) override { }

  virtual void enterLambdadeclarator(oxadvancedParser::LambdadeclaratorContext * /*ctx*/) override { }
  virtual void exitLambdadeclarator(oxadvancedParser::LambdadeclaratorContext * /*ctx*/) override { }

  virtual void enterPostfixexpression(oxadvancedParser::PostfixexpressionContext * /*ctx*/) override { }
  virtual void exitPostfixexpression(oxadvancedParser::PostfixexpressionContext * /*ctx*/) override { }

  virtual void enterMatrixIndex(oxadvancedParser::MatrixIndexContext * /*ctx*/) override { }
  virtual void exitMatrixIndex(oxadvancedParser::MatrixIndexContext * /*ctx*/) override { }

  virtual void enterMatrixIndexSeq(oxadvancedParser::MatrixIndexSeqContext * /*ctx*/) override { }
  virtual void exitMatrixIndexSeq(oxadvancedParser::MatrixIndexSeqContext * /*ctx*/) override { }

  virtual void enterTranspose(oxadvancedParser::TransposeContext * /*ctx*/) override { }
  virtual void exitTranspose(oxadvancedParser::TransposeContext * /*ctx*/) override { }

  virtual void enterExpressionlist(oxadvancedParser::ExpressionlistContext * /*ctx*/) override { }
  virtual void exitExpressionlist(oxadvancedParser::ExpressionlistContext * /*ctx*/) override { }

  virtual void enterUnaryexpression(oxadvancedParser::UnaryexpressionContext * /*ctx*/) override { }
  virtual void exitUnaryexpression(oxadvancedParser::UnaryexpressionContext * /*ctx*/) override { }

  virtual void enterUnaryoperator(oxadvancedParser::UnaryoperatorContext * /*ctx*/) override { }
  virtual void exitUnaryoperator(oxadvancedParser::UnaryoperatorContext * /*ctx*/) override { }

  virtual void enterNewexpression(oxadvancedParser::NewexpressionContext * /*ctx*/) override { }
  virtual void exitNewexpression(oxadvancedParser::NewexpressionContext * /*ctx*/) override { }

  virtual void enterNewplacement(oxadvancedParser::NewplacementContext * /*ctx*/) override { }
  virtual void exitNewplacement(oxadvancedParser::NewplacementContext * /*ctx*/) override { }

  virtual void enterNewtypeid(oxadvancedParser::NewtypeidContext * /*ctx*/) override { }
  virtual void exitNewtypeid(oxadvancedParser::NewtypeidContext * /*ctx*/) override { }

  virtual void enterNewdeclarator(oxadvancedParser::NewdeclaratorContext * /*ctx*/) override { }
  virtual void exitNewdeclarator(oxadvancedParser::NewdeclaratorContext * /*ctx*/) override { }

  virtual void enterNoptrnewdeclarator(oxadvancedParser::NoptrnewdeclaratorContext * /*ctx*/) override { }
  virtual void exitNoptrnewdeclarator(oxadvancedParser::NoptrnewdeclaratorContext * /*ctx*/) override { }

  virtual void enterNewinitializer(oxadvancedParser::NewinitializerContext * /*ctx*/) override { }
  virtual void exitNewinitializer(oxadvancedParser::NewinitializerContext * /*ctx*/) override { }

  virtual void enterDeleteexpression(oxadvancedParser::DeleteexpressionContext * /*ctx*/) override { }
  virtual void exitDeleteexpression(oxadvancedParser::DeleteexpressionContext * /*ctx*/) override { }

  virtual void enterCastexpression(oxadvancedParser::CastexpressionContext * /*ctx*/) override { }
  virtual void exitCastexpression(oxadvancedParser::CastexpressionContext * /*ctx*/) override { }

  virtual void enterPmexpression(oxadvancedParser::PmexpressionContext * /*ctx*/) override { }
  virtual void exitPmexpression(oxadvancedParser::PmexpressionContext * /*ctx*/) override { }

  virtual void enterMultiplicativeexpression(oxadvancedParser::MultiplicativeexpressionContext * /*ctx*/) override { }
  virtual void exitMultiplicativeexpression(oxadvancedParser::MultiplicativeexpressionContext * /*ctx*/) override { }

  virtual void enterAdditiveexpression(oxadvancedParser::AdditiveexpressionContext * /*ctx*/) override { }
  virtual void exitAdditiveexpression(oxadvancedParser::AdditiveexpressionContext * /*ctx*/) override { }

  virtual void enterShiftexpression(oxadvancedParser::ShiftexpressionContext * /*ctx*/) override { }
  virtual void exitShiftexpression(oxadvancedParser::ShiftexpressionContext * /*ctx*/) override { }

  virtual void enterRelationalexpression(oxadvancedParser::RelationalexpressionContext * /*ctx*/) override { }
  virtual void exitRelationalexpression(oxadvancedParser::RelationalexpressionContext * /*ctx*/) override { }

  virtual void enterEqualityexpression(oxadvancedParser::EqualityexpressionContext * /*ctx*/) override { }
  virtual void exitEqualityexpression(oxadvancedParser::EqualityexpressionContext * /*ctx*/) override { }

  virtual void enterAndexpression(oxadvancedParser::AndexpressionContext * /*ctx*/) override { }
  virtual void exitAndexpression(oxadvancedParser::AndexpressionContext * /*ctx*/) override { }

  virtual void enterExclusiveorexpression(oxadvancedParser::ExclusiveorexpressionContext * /*ctx*/) override { }
  virtual void exitExclusiveorexpression(oxadvancedParser::ExclusiveorexpressionContext * /*ctx*/) override { }

  virtual void enterLogicalandexpression(oxadvancedParser::LogicalandexpressionContext * /*ctx*/) override { }
  virtual void exitLogicalandexpression(oxadvancedParser::LogicalandexpressionContext * /*ctx*/) override { }

  virtual void enterLogicalorexpression(oxadvancedParser::LogicalorexpressionContext * /*ctx*/) override { }
  virtual void exitLogicalorexpression(oxadvancedParser::LogicalorexpressionContext * /*ctx*/) override { }

  virtual void enterConditionalexpression(oxadvancedParser::ConditionalexpressionContext * /*ctx*/) override { }
  virtual void exitConditionalexpression(oxadvancedParser::ConditionalexpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentexpression(oxadvancedParser::AssignmentexpressionContext * /*ctx*/) override { }
  virtual void exitAssignmentexpression(oxadvancedParser::AssignmentexpressionContext * /*ctx*/) override { }

  virtual void enterMultiplereturnvalues(oxadvancedParser::MultiplereturnvaluesContext * /*ctx*/) override { }
  virtual void exitMultiplereturnvalues(oxadvancedParser::MultiplereturnvaluesContext * /*ctx*/) override { }

  virtual void enterAssignmentoperator(oxadvancedParser::AssignmentoperatorContext * /*ctx*/) override { }
  virtual void exitAssignmentoperator(oxadvancedParser::AssignmentoperatorContext * /*ctx*/) override { }

  virtual void enterExpression(oxadvancedParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(oxadvancedParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterConstantexpression(oxadvancedParser::ConstantexpressionContext * /*ctx*/) override { }
  virtual void exitConstantexpression(oxadvancedParser::ConstantexpressionContext * /*ctx*/) override { }

  virtual void enterStatement(oxadvancedParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(oxadvancedParser::StatementContext * /*ctx*/) override { }

  virtual void enterLabeledstatement(oxadvancedParser::LabeledstatementContext * /*ctx*/) override { }
  virtual void exitLabeledstatement(oxadvancedParser::LabeledstatementContext * /*ctx*/) override { }

  virtual void enterExpressionstatement(oxadvancedParser::ExpressionstatementContext * /*ctx*/) override { }
  virtual void exitExpressionstatement(oxadvancedParser::ExpressionstatementContext * /*ctx*/) override { }

  virtual void enterCompoundstatement(oxadvancedParser::CompoundstatementContext * /*ctx*/) override { }
  virtual void exitCompoundstatement(oxadvancedParser::CompoundstatementContext * /*ctx*/) override { }

  virtual void enterStatementseq(oxadvancedParser::StatementseqContext * /*ctx*/) override { }
  virtual void exitStatementseq(oxadvancedParser::StatementseqContext * /*ctx*/) override { }

  virtual void enterSelectionstatement(oxadvancedParser::SelectionstatementContext * /*ctx*/) override { }
  virtual void exitSelectionstatement(oxadvancedParser::SelectionstatementContext * /*ctx*/) override { }

  virtual void enterCondition(oxadvancedParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(oxadvancedParser::ConditionContext * /*ctx*/) override { }

  virtual void enterIterationstatement(oxadvancedParser::IterationstatementContext * /*ctx*/) override { }
  virtual void exitIterationstatement(oxadvancedParser::IterationstatementContext * /*ctx*/) override { }

  virtual void enterForinitstatement(oxadvancedParser::ForinitstatementContext * /*ctx*/) override { }
  virtual void exitForinitstatement(oxadvancedParser::ForinitstatementContext * /*ctx*/) override { }

  virtual void enterJumpstatement(oxadvancedParser::JumpstatementContext * /*ctx*/) override { }
  virtual void exitJumpstatement(oxadvancedParser::JumpstatementContext * /*ctx*/) override { }

  virtual void enterDeclarationstatement(oxadvancedParser::DeclarationstatementContext * /*ctx*/) override { }
  virtual void exitDeclarationstatement(oxadvancedParser::DeclarationstatementContext * /*ctx*/) override { }

  virtual void enterDeclarationseq(oxadvancedParser::DeclarationseqContext * /*ctx*/) override { }
  virtual void exitDeclarationseq(oxadvancedParser::DeclarationseqContext * /*ctx*/) override { }

  virtual void enterDeclaration(oxadvancedParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(oxadvancedParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterJavadoc(oxadvancedParser::JavadocContext * /*ctx*/) override { }
  virtual void exitJavadoc(oxadvancedParser::JavadocContext * /*ctx*/) override { }

  virtual void enterExternal(oxadvancedParser::ExternalContext * /*ctx*/) override { }
  virtual void exitExternal(oxadvancedParser::ExternalContext * /*ctx*/) override { }

  virtual void enterFunctionname(oxadvancedParser::FunctionnameContext * /*ctx*/) override { }
  virtual void exitFunctionname(oxadvancedParser::FunctionnameContext * /*ctx*/) override { }

  virtual void enterExternal_function(oxadvancedParser::External_functionContext * /*ctx*/) override { }
  virtual void exitExternal_function(oxadvancedParser::External_functionContext * /*ctx*/) override { }

  virtual void enterBodyclasse(oxadvancedParser::BodyclasseContext * /*ctx*/) override { }
  virtual void exitBodyclasse(oxadvancedParser::BodyclasseContext * /*ctx*/) override { }

  virtual void enterBlockdeclaration(oxadvancedParser::BlockdeclarationContext * /*ctx*/) override { }
  virtual void exitBlockdeclaration(oxadvancedParser::BlockdeclarationContext * /*ctx*/) override { }

  virtual void enterAliasdeclaration(oxadvancedParser::AliasdeclarationContext * /*ctx*/) override { }
  virtual void exitAliasdeclaration(oxadvancedParser::AliasdeclarationContext * /*ctx*/) override { }

  virtual void enterSimpledeclaration(oxadvancedParser::SimpledeclarationContext * /*ctx*/) override { }
  virtual void exitSimpledeclaration(oxadvancedParser::SimpledeclarationContext * /*ctx*/) override { }

  virtual void enterStatic_assertdeclaration(oxadvancedParser::Static_assertdeclarationContext * /*ctx*/) override { }
  virtual void exitStatic_assertdeclaration(oxadvancedParser::Static_assertdeclarationContext * /*ctx*/) override { }

  virtual void enterEmptydeclaration(oxadvancedParser::EmptydeclarationContext * /*ctx*/) override { }
  virtual void exitEmptydeclaration(oxadvancedParser::EmptydeclarationContext * /*ctx*/) override { }

  virtual void enterDeclspecifier(oxadvancedParser::DeclspecifierContext * /*ctx*/) override { }
  virtual void exitDeclspecifier(oxadvancedParser::DeclspecifierContext * /*ctx*/) override { }

  virtual void enterDeclspecifierseq(oxadvancedParser::DeclspecifierseqContext * /*ctx*/) override { }
  virtual void exitDeclspecifierseq(oxadvancedParser::DeclspecifierseqContext * /*ctx*/) override { }

  virtual void enterStorageclassspecifier(oxadvancedParser::StorageclassspecifierContext * /*ctx*/) override { }
  virtual void exitStorageclassspecifier(oxadvancedParser::StorageclassspecifierContext * /*ctx*/) override { }

  virtual void enterFunctionspecifier(oxadvancedParser::FunctionspecifierContext * /*ctx*/) override { }
  virtual void exitFunctionspecifier(oxadvancedParser::FunctionspecifierContext * /*ctx*/) override { }

  virtual void enterTypespecifier(oxadvancedParser::TypespecifierContext * /*ctx*/) override { }
  virtual void exitTypespecifier(oxadvancedParser::TypespecifierContext * /*ctx*/) override { }

  virtual void enterTrailingtypespecifier(oxadvancedParser::TrailingtypespecifierContext * /*ctx*/) override { }
  virtual void exitTrailingtypespecifier(oxadvancedParser::TrailingtypespecifierContext * /*ctx*/) override { }

  virtual void enterTypespecifierseq(oxadvancedParser::TypespecifierseqContext * /*ctx*/) override { }
  virtual void exitTypespecifierseq(oxadvancedParser::TypespecifierseqContext * /*ctx*/) override { }

  virtual void enterTrailingtypespecifierseq(oxadvancedParser::TrailingtypespecifierseqContext * /*ctx*/) override { }
  virtual void exitTrailingtypespecifierseq(oxadvancedParser::TrailingtypespecifierseqContext * /*ctx*/) override { }

  virtual void enterSimpletypespecifier(oxadvancedParser::SimpletypespecifierContext * /*ctx*/) override { }
  virtual void exitSimpletypespecifier(oxadvancedParser::SimpletypespecifierContext * /*ctx*/) override { }

  virtual void enterThetypename(oxadvancedParser::ThetypenameContext * /*ctx*/) override { }
  virtual void exitThetypename(oxadvancedParser::ThetypenameContext * /*ctx*/) override { }

  virtual void enterDecltypespecifier(oxadvancedParser::DecltypespecifierContext * /*ctx*/) override { }
  virtual void exitDecltypespecifier(oxadvancedParser::DecltypespecifierContext * /*ctx*/) override { }

  virtual void enterElaboratedtypespecifier(oxadvancedParser::ElaboratedtypespecifierContext * /*ctx*/) override { }
  virtual void exitElaboratedtypespecifier(oxadvancedParser::ElaboratedtypespecifierContext * /*ctx*/) override { }

  virtual void enterEnumspecifier(oxadvancedParser::EnumspecifierContext * /*ctx*/) override { }
  virtual void exitEnumspecifier(oxadvancedParser::EnumspecifierContext * /*ctx*/) override { }

  virtual void enterEnumhead(oxadvancedParser::EnumheadContext * /*ctx*/) override { }
  virtual void exitEnumhead(oxadvancedParser::EnumheadContext * /*ctx*/) override { }

  virtual void enterOpaqueenumdeclaration(oxadvancedParser::OpaqueenumdeclarationContext * /*ctx*/) override { }
  virtual void exitOpaqueenumdeclaration(oxadvancedParser::OpaqueenumdeclarationContext * /*ctx*/) override { }

  virtual void enterEnumkey(oxadvancedParser::EnumkeyContext * /*ctx*/) override { }
  virtual void exitEnumkey(oxadvancedParser::EnumkeyContext * /*ctx*/) override { }

  virtual void enterEnumbase(oxadvancedParser::EnumbaseContext * /*ctx*/) override { }
  virtual void exitEnumbase(oxadvancedParser::EnumbaseContext * /*ctx*/) override { }

  virtual void enterEnumeratorlist(oxadvancedParser::EnumeratorlistContext * /*ctx*/) override { }
  virtual void exitEnumeratorlist(oxadvancedParser::EnumeratorlistContext * /*ctx*/) override { }

  virtual void enterEnumeratordefinition(oxadvancedParser::EnumeratordefinitionContext * /*ctx*/) override { }
  virtual void exitEnumeratordefinition(oxadvancedParser::EnumeratordefinitionContext * /*ctx*/) override { }

  virtual void enterEnumerator(oxadvancedParser::EnumeratorContext * /*ctx*/) override { }
  virtual void exitEnumerator(oxadvancedParser::EnumeratorContext * /*ctx*/) override { }

  virtual void enterNamespacename(oxadvancedParser::NamespacenameContext * /*ctx*/) override { }
  virtual void exitNamespacename(oxadvancedParser::NamespacenameContext * /*ctx*/) override { }

  virtual void enterOriginalnamespacename(oxadvancedParser::OriginalnamespacenameContext * /*ctx*/) override { }
  virtual void exitOriginalnamespacename(oxadvancedParser::OriginalnamespacenameContext * /*ctx*/) override { }

  virtual void enterNamespacedefinition(oxadvancedParser::NamespacedefinitionContext * /*ctx*/) override { }
  virtual void exitNamespacedefinition(oxadvancedParser::NamespacedefinitionContext * /*ctx*/) override { }

  virtual void enterNamednamespacedefinition(oxadvancedParser::NamednamespacedefinitionContext * /*ctx*/) override { }
  virtual void exitNamednamespacedefinition(oxadvancedParser::NamednamespacedefinitionContext * /*ctx*/) override { }

  virtual void enterOriginalnamespacedefinition(oxadvancedParser::OriginalnamespacedefinitionContext * /*ctx*/) override { }
  virtual void exitOriginalnamespacedefinition(oxadvancedParser::OriginalnamespacedefinitionContext * /*ctx*/) override { }

  virtual void enterExtensionnamespacedefinition(oxadvancedParser::ExtensionnamespacedefinitionContext * /*ctx*/) override { }
  virtual void exitExtensionnamespacedefinition(oxadvancedParser::ExtensionnamespacedefinitionContext * /*ctx*/) override { }

  virtual void enterUnnamednamespacedefinition(oxadvancedParser::UnnamednamespacedefinitionContext * /*ctx*/) override { }
  virtual void exitUnnamednamespacedefinition(oxadvancedParser::UnnamednamespacedefinitionContext * /*ctx*/) override { }

  virtual void enterNamespacebody(oxadvancedParser::NamespacebodyContext * /*ctx*/) override { }
  virtual void exitNamespacebody(oxadvancedParser::NamespacebodyContext * /*ctx*/) override { }

  virtual void enterNamespacealias(oxadvancedParser::NamespacealiasContext * /*ctx*/) override { }
  virtual void exitNamespacealias(oxadvancedParser::NamespacealiasContext * /*ctx*/) override { }

  virtual void enterLinkagespecification(oxadvancedParser::LinkagespecificationContext * /*ctx*/) override { }
  virtual void exitLinkagespecification(oxadvancedParser::LinkagespecificationContext * /*ctx*/) override { }

  virtual void enterBalancedtokenseq(oxadvancedParser::BalancedtokenseqContext * /*ctx*/) override { }
  virtual void exitBalancedtokenseq(oxadvancedParser::BalancedtokenseqContext * /*ctx*/) override { }

  virtual void enterBalancedtoken(oxadvancedParser::BalancedtokenContext * /*ctx*/) override { }
  virtual void exitBalancedtoken(oxadvancedParser::BalancedtokenContext * /*ctx*/) override { }

  virtual void enterInitdeclaratorlist(oxadvancedParser::InitdeclaratorlistContext * /*ctx*/) override { }
  virtual void exitInitdeclaratorlist(oxadvancedParser::InitdeclaratorlistContext * /*ctx*/) override { }

  virtual void enterInitdeclarator(oxadvancedParser::InitdeclaratorContext * /*ctx*/) override { }
  virtual void exitInitdeclarator(oxadvancedParser::InitdeclaratorContext * /*ctx*/) override { }

  virtual void enterDeclarator(oxadvancedParser::DeclaratorContext * /*ctx*/) override { }
  virtual void exitDeclarator(oxadvancedParser::DeclaratorContext * /*ctx*/) override { }

  virtual void enterPtrdeclarator(oxadvancedParser::PtrdeclaratorContext * /*ctx*/) override { }
  virtual void exitPtrdeclarator(oxadvancedParser::PtrdeclaratorContext * /*ctx*/) override { }

  virtual void enterNoptrdeclarator(oxadvancedParser::NoptrdeclaratorContext * /*ctx*/) override { }
  virtual void exitNoptrdeclarator(oxadvancedParser::NoptrdeclaratorContext * /*ctx*/) override { }

  virtual void enterParametersandqualifiers(oxadvancedParser::ParametersandqualifiersContext * /*ctx*/) override { }
  virtual void exitParametersandqualifiers(oxadvancedParser::ParametersandqualifiersContext * /*ctx*/) override { }

  virtual void enterParametersWQ(oxadvancedParser::ParametersWQContext * /*ctx*/) override { }
  virtual void exitParametersWQ(oxadvancedParser::ParametersWQContext * /*ctx*/) override { }

  virtual void enterTrailingreturntype(oxadvancedParser::TrailingreturntypeContext * /*ctx*/) override { }
  virtual void exitTrailingreturntype(oxadvancedParser::TrailingreturntypeContext * /*ctx*/) override { }

  virtual void enterCvqualifierseq(oxadvancedParser::CvqualifierseqContext * /*ctx*/) override { }
  virtual void exitCvqualifierseq(oxadvancedParser::CvqualifierseqContext * /*ctx*/) override { }

  virtual void enterCvqualifier(oxadvancedParser::CvqualifierContext * /*ctx*/) override { }
  virtual void exitCvqualifier(oxadvancedParser::CvqualifierContext * /*ctx*/) override { }

  virtual void enterDeclaratorid(oxadvancedParser::DeclaratoridContext * /*ctx*/) override { }
  virtual void exitDeclaratorid(oxadvancedParser::DeclaratoridContext * /*ctx*/) override { }

  virtual void enterThetypeid(oxadvancedParser::ThetypeidContext * /*ctx*/) override { }
  virtual void exitThetypeid(oxadvancedParser::ThetypeidContext * /*ctx*/) override { }

  virtual void enterAbstractdeclarator(oxadvancedParser::AbstractdeclaratorContext * /*ctx*/) override { }
  virtual void exitAbstractdeclarator(oxadvancedParser::AbstractdeclaratorContext * /*ctx*/) override { }

  virtual void enterPtrabstractdeclarator(oxadvancedParser::PtrabstractdeclaratorContext * /*ctx*/) override { }
  virtual void exitPtrabstractdeclarator(oxadvancedParser::PtrabstractdeclaratorContext * /*ctx*/) override { }

  virtual void enterNoptrabstractdeclarator(oxadvancedParser::NoptrabstractdeclaratorContext * /*ctx*/) override { }
  virtual void exitNoptrabstractdeclarator(oxadvancedParser::NoptrabstractdeclaratorContext * /*ctx*/) override { }

  virtual void enterAbstractpackdeclarator(oxadvancedParser::AbstractpackdeclaratorContext * /*ctx*/) override { }
  virtual void exitAbstractpackdeclarator(oxadvancedParser::AbstractpackdeclaratorContext * /*ctx*/) override { }

  virtual void enterNoptrabstractpackdeclarator(oxadvancedParser::NoptrabstractpackdeclaratorContext * /*ctx*/) override { }
  virtual void exitNoptrabstractpackdeclarator(oxadvancedParser::NoptrabstractpackdeclaratorContext * /*ctx*/) override { }

  virtual void enterParameterWQdeclarationclause(oxadvancedParser::ParameterWQdeclarationclauseContext * /*ctx*/) override { }
  virtual void exitParameterWQdeclarationclause(oxadvancedParser::ParameterWQdeclarationclauseContext * /*ctx*/) override { }

  virtual void enterParameterWQdeclarationlist(oxadvancedParser::ParameterWQdeclarationlistContext * /*ctx*/) override { }
  virtual void exitParameterWQdeclarationlist(oxadvancedParser::ParameterWQdeclarationlistContext * /*ctx*/) override { }

  virtual void enterParameterWQdeclaration(oxadvancedParser::ParameterWQdeclarationContext * /*ctx*/) override { }
  virtual void exitParameterWQdeclaration(oxadvancedParser::ParameterWQdeclarationContext * /*ctx*/) override { }

  virtual void enterOptionalargument(oxadvancedParser::OptionalargumentContext * /*ctx*/) override { }
  virtual void exitOptionalargument(oxadvancedParser::OptionalargumentContext * /*ctx*/) override { }

  virtual void enterParameterdeclarationlist(oxadvancedParser::ParameterdeclarationlistContext * /*ctx*/) override { }
  virtual void exitParameterdeclarationlist(oxadvancedParser::ParameterdeclarationlistContext * /*ctx*/) override { }

  virtual void enterFunctionarguments(oxadvancedParser::FunctionargumentsContext * /*ctx*/) override { }
  virtual void exitFunctionarguments(oxadvancedParser::FunctionargumentsContext * /*ctx*/) override { }

  virtual void enterParameterdeclaration(oxadvancedParser::ParameterdeclarationContext * /*ctx*/) override { }
  virtual void exitParameterdeclaration(oxadvancedParser::ParameterdeclarationContext * /*ctx*/) override { }

  virtual void enterFunctiondefinition(oxadvancedParser::FunctiondefinitionContext * /*ctx*/) override { }
  virtual void exitFunctiondefinition(oxadvancedParser::FunctiondefinitionContext * /*ctx*/) override { }

  virtual void enterFunctionbody(oxadvancedParser::FunctionbodyContext * /*ctx*/) override { }
  virtual void exitFunctionbody(oxadvancedParser::FunctionbodyContext * /*ctx*/) override { }

  virtual void enterInitializer(oxadvancedParser::InitializerContext * /*ctx*/) override { }
  virtual void exitInitializer(oxadvancedParser::InitializerContext * /*ctx*/) override { }

  virtual void enterBraceorequalinitializer(oxadvancedParser::BraceorequalinitializerContext * /*ctx*/) override { }
  virtual void exitBraceorequalinitializer(oxadvancedParser::BraceorequalinitializerContext * /*ctx*/) override { }

  virtual void enterInitializerclause(oxadvancedParser::InitializerclauseContext * /*ctx*/) override { }
  virtual void exitInitializerclause(oxadvancedParser::InitializerclauseContext * /*ctx*/) override { }

  virtual void enterInitializerlist(oxadvancedParser::InitializerlistContext * /*ctx*/) override { }
  virtual void exitInitializerlist(oxadvancedParser::InitializerlistContext * /*ctx*/) override { }

  virtual void enterInitializerlistoxmatrix(oxadvancedParser::InitializerlistoxmatrixContext * /*ctx*/) override { }
  virtual void exitInitializerlistoxmatrix(oxadvancedParser::InitializerlistoxmatrixContext * /*ctx*/) override { }

  virtual void enterOxmatrix(oxadvancedParser::OxmatrixContext * /*ctx*/) override { }
  virtual void exitOxmatrix(oxadvancedParser::OxmatrixContext * /*ctx*/) override { }

  virtual void enterBracedinitlist(oxadvancedParser::BracedinitlistContext * /*ctx*/) override { }
  virtual void exitBracedinitlist(oxadvancedParser::BracedinitlistContext * /*ctx*/) override { }

  virtual void enterClassname(oxadvancedParser::ClassnameContext * /*ctx*/) override { }
  virtual void exitClassname(oxadvancedParser::ClassnameContext * /*ctx*/) override { }

  virtual void enterClassspecifier(oxadvancedParser::ClassspecifierContext * /*ctx*/) override { }
  virtual void exitClassspecifier(oxadvancedParser::ClassspecifierContext * /*ctx*/) override { }

  virtual void enterClasshead(oxadvancedParser::ClassheadContext * /*ctx*/) override { }
  virtual void exitClasshead(oxadvancedParser::ClassheadContext * /*ctx*/) override { }

  virtual void enterClassheadname(oxadvancedParser::ClassheadnameContext * /*ctx*/) override { }
  virtual void exitClassheadname(oxadvancedParser::ClassheadnameContext * /*ctx*/) override { }

  virtual void enterClassvirtspecifier(oxadvancedParser::ClassvirtspecifierContext * /*ctx*/) override { }
  virtual void exitClassvirtspecifier(oxadvancedParser::ClassvirtspecifierContext * /*ctx*/) override { }

  virtual void enterClasskey(oxadvancedParser::ClasskeyContext * /*ctx*/) override { }
  virtual void exitClasskey(oxadvancedParser::ClasskeyContext * /*ctx*/) override { }

  virtual void enterMemberspecification(oxadvancedParser::MemberspecificationContext * /*ctx*/) override { }
  virtual void exitMemberspecification(oxadvancedParser::MemberspecificationContext * /*ctx*/) override { }

  virtual void enterAccessmemberspecification(oxadvancedParser::AccessmemberspecificationContext * /*ctx*/) override { }
  virtual void exitAccessmemberspecification(oxadvancedParser::AccessmemberspecificationContext * /*ctx*/) override { }

  virtual void enterMemberdeclaration(oxadvancedParser::MemberdeclarationContext * /*ctx*/) override { }
  virtual void exitMemberdeclaration(oxadvancedParser::MemberdeclarationContext * /*ctx*/) override { }

  virtual void enterMemberdeclaratorlist(oxadvancedParser::MemberdeclaratorlistContext * /*ctx*/) override { }
  virtual void exitMemberdeclaratorlist(oxadvancedParser::MemberdeclaratorlistContext * /*ctx*/) override { }

  virtual void enterMemberdeclarator(oxadvancedParser::MemberdeclaratorContext * /*ctx*/) override { }
  virtual void exitMemberdeclarator(oxadvancedParser::MemberdeclaratorContext * /*ctx*/) override { }

  virtual void enterVirtspecifierseq(oxadvancedParser::VirtspecifierseqContext * /*ctx*/) override { }
  virtual void exitVirtspecifierseq(oxadvancedParser::VirtspecifierseqContext * /*ctx*/) override { }

  virtual void enterVirtspecifier(oxadvancedParser::VirtspecifierContext * /*ctx*/) override { }
  virtual void exitVirtspecifier(oxadvancedParser::VirtspecifierContext * /*ctx*/) override { }

  virtual void enterPurespecifier(oxadvancedParser::PurespecifierContext * /*ctx*/) override { }
  virtual void exitPurespecifier(oxadvancedParser::PurespecifierContext * /*ctx*/) override { }

  virtual void enterBaseclause(oxadvancedParser::BaseclauseContext * /*ctx*/) override { }
  virtual void exitBaseclause(oxadvancedParser::BaseclauseContext * /*ctx*/) override { }

  virtual void enterBasespecifierlist(oxadvancedParser::BasespecifierlistContext * /*ctx*/) override { }
  virtual void exitBasespecifierlist(oxadvancedParser::BasespecifierlistContext * /*ctx*/) override { }

  virtual void enterBasespecifier(oxadvancedParser::BasespecifierContext * /*ctx*/) override { }
  virtual void exitBasespecifier(oxadvancedParser::BasespecifierContext * /*ctx*/) override { }

  virtual void enterClassordecltype(oxadvancedParser::ClassordecltypeContext * /*ctx*/) override { }
  virtual void exitClassordecltype(oxadvancedParser::ClassordecltypeContext * /*ctx*/) override { }

  virtual void enterBasetypespecifier(oxadvancedParser::BasetypespecifierContext * /*ctx*/) override { }
  virtual void exitBasetypespecifier(oxadvancedParser::BasetypespecifierContext * /*ctx*/) override { }

  virtual void enterAccessspecifier(oxadvancedParser::AccessspecifierContext * /*ctx*/) override { }
  virtual void exitAccessspecifier(oxadvancedParser::AccessspecifierContext * /*ctx*/) override { }

  virtual void enterConversionfunctionid(oxadvancedParser::ConversionfunctionidContext * /*ctx*/) override { }
  virtual void exitConversionfunctionid(oxadvancedParser::ConversionfunctionidContext * /*ctx*/) override { }

  virtual void enterConversiontypeid(oxadvancedParser::ConversiontypeidContext * /*ctx*/) override { }
  virtual void exitConversiontypeid(oxadvancedParser::ConversiontypeidContext * /*ctx*/) override { }

  virtual void enterCtorinitializer(oxadvancedParser::CtorinitializerContext * /*ctx*/) override { }
  virtual void exitCtorinitializer(oxadvancedParser::CtorinitializerContext * /*ctx*/) override { }

  virtual void enterMeminitializerlist(oxadvancedParser::MeminitializerlistContext * /*ctx*/) override { }
  virtual void exitMeminitializerlist(oxadvancedParser::MeminitializerlistContext * /*ctx*/) override { }

  virtual void enterMeminitializer(oxadvancedParser::MeminitializerContext * /*ctx*/) override { }
  virtual void exitMeminitializer(oxadvancedParser::MeminitializerContext * /*ctx*/) override { }

  virtual void enterMeminitializerid(oxadvancedParser::MeminitializeridContext * /*ctx*/) override { }
  virtual void exitMeminitializerid(oxadvancedParser::MeminitializeridContext * /*ctx*/) override { }

  virtual void enterOperatorfunctionid(oxadvancedParser::OperatorfunctionidContext * /*ctx*/) override { }
  virtual void exitOperatorfunctionid(oxadvancedParser::OperatorfunctionidContext * /*ctx*/) override { }

  virtual void enterLiteraloperatorid(oxadvancedParser::LiteraloperatoridContext * /*ctx*/) override { }
  virtual void exitLiteraloperatorid(oxadvancedParser::LiteraloperatoridContext * /*ctx*/) override { }

  virtual void enterRightShift(oxadvancedParser::RightShiftContext * /*ctx*/) override { }
  virtual void exitRightShift(oxadvancedParser::RightShiftContext * /*ctx*/) override { }

  virtual void enterRightShiftAssign(oxadvancedParser::RightShiftAssignContext * /*ctx*/) override { }
  virtual void exitRightShiftAssign(oxadvancedParser::RightShiftAssignContext * /*ctx*/) override { }

  virtual void enterTheoperator(oxadvancedParser::TheoperatorContext * /*ctx*/) override { }
  virtual void exitTheoperator(oxadvancedParser::TheoperatorContext * /*ctx*/) override { }

  virtual void enterLiteral(oxadvancedParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(oxadvancedParser::LiteralContext * /*ctx*/) override { }

  virtual void enterBooleanliteral(oxadvancedParser::BooleanliteralContext * /*ctx*/) override { }
  virtual void exitBooleanliteral(oxadvancedParser::BooleanliteralContext * /*ctx*/) override { }

  virtual void enterPointerliteral(oxadvancedParser::PointerliteralContext * /*ctx*/) override { }
  virtual void exitPointerliteral(oxadvancedParser::PointerliteralContext * /*ctx*/) override { }

  virtual void enterUserdefinedliteral(oxadvancedParser::UserdefinedliteralContext * /*ctx*/) override { }
  virtual void exitUserdefinedliteral(oxadvancedParser::UserdefinedliteralContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace oxcode
