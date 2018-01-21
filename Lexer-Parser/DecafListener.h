
// Generated from Decaf.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "DecafParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by DecafParser.
 */
class  DecafListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(DecafParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(DecafParser::ProgramContext *ctx) = 0;

  virtual void enterDeclaration(DecafParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(DecafParser::DeclarationContext *ctx) = 0;

  virtual void enterVarDeclaration(DecafParser::VarDeclarationContext *ctx) = 0;
  virtual void exitVarDeclaration(DecafParser::VarDeclarationContext *ctx) = 0;

  virtual void enterStructDeclaration(DecafParser::StructDeclarationContext *ctx) = 0;
  virtual void exitStructDeclaration(DecafParser::StructDeclarationContext *ctx) = 0;

  virtual void enterVarType(DecafParser::VarTypeContext *ctx) = 0;
  virtual void exitVarType(DecafParser::VarTypeContext *ctx) = 0;

  virtual void enterMethodDeclaration(DecafParser::MethodDeclarationContext *ctx) = 0;
  virtual void exitMethodDeclaration(DecafParser::MethodDeclarationContext *ctx) = 0;

  virtual void enterMethodType(DecafParser::MethodTypeContext *ctx) = 0;
  virtual void exitMethodType(DecafParser::MethodTypeContext *ctx) = 0;

  virtual void enterParameter(DecafParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(DecafParser::ParameterContext *ctx) = 0;

  virtual void enterParameterType(DecafParser::ParameterTypeContext *ctx) = 0;
  virtual void exitParameterType(DecafParser::ParameterTypeContext *ctx) = 0;

  virtual void enterBlock(DecafParser::BlockContext *ctx) = 0;
  virtual void exitBlock(DecafParser::BlockContext *ctx) = 0;

  virtual void enterStatement(DecafParser::StatementContext *ctx) = 0;
  virtual void exitStatement(DecafParser::StatementContext *ctx) = 0;

  virtual void enterLocation(DecafParser::LocationContext *ctx) = 0;
  virtual void exitLocation(DecafParser::LocationContext *ctx) = 0;

  virtual void enterExpression(DecafParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(DecafParser::ExpressionContext *ctx) = 0;

  virtual void enterMethodCall(DecafParser::MethodCallContext *ctx) = 0;
  virtual void exitMethodCall(DecafParser::MethodCallContext *ctx) = 0;

  virtual void enterArg(DecafParser::ArgContext *ctx) = 0;
  virtual void exitArg(DecafParser::ArgContext *ctx) = 0;

  virtual void enterOp(DecafParser::OpContext *ctx) = 0;
  virtual void exitOp(DecafParser::OpContext *ctx) = 0;

  virtual void enterArith_op(DecafParser::Arith_opContext *ctx) = 0;
  virtual void exitArith_op(DecafParser::Arith_opContext *ctx) = 0;

  virtual void enterRel_op(DecafParser::Rel_opContext *ctx) = 0;
  virtual void exitRel_op(DecafParser::Rel_opContext *ctx) = 0;

  virtual void enterEq_op(DecafParser::Eq_opContext *ctx) = 0;
  virtual void exitEq_op(DecafParser::Eq_opContext *ctx) = 0;

  virtual void enterCond_op(DecafParser::Cond_opContext *ctx) = 0;
  virtual void exitCond_op(DecafParser::Cond_opContext *ctx) = 0;

  virtual void enterLiteral(DecafParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(DecafParser::LiteralContext *ctx) = 0;

  virtual void enterInt_literal(DecafParser::Int_literalContext *ctx) = 0;
  virtual void exitInt_literal(DecafParser::Int_literalContext *ctx) = 0;

  virtual void enterChar_literal(DecafParser::Char_literalContext *ctx) = 0;
  virtual void exitChar_literal(DecafParser::Char_literalContext *ctx) = 0;

  virtual void enterBool_literal(DecafParser::Bool_literalContext *ctx) = 0;
  virtual void exitBool_literal(DecafParser::Bool_literalContext *ctx) = 0;


};

