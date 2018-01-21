
// Generated from Decaf.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "DecafListener.h"


/**
 * This class provides an empty implementation of DecafListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  DecafBaseListener : public DecafListener {
public:

  virtual void enterProgram(DecafParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(DecafParser::ProgramContext * /*ctx*/) override { }

  virtual void enterDeclaration(DecafParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(DecafParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterVarDeclaration(DecafParser::VarDeclarationContext * /*ctx*/) override { }
  virtual void exitVarDeclaration(DecafParser::VarDeclarationContext * /*ctx*/) override { }

  virtual void enterStructDeclaration(DecafParser::StructDeclarationContext * /*ctx*/) override { }
  virtual void exitStructDeclaration(DecafParser::StructDeclarationContext * /*ctx*/) override { }

  virtual void enterVarType(DecafParser::VarTypeContext * /*ctx*/) override { }
  virtual void exitVarType(DecafParser::VarTypeContext * /*ctx*/) override { }

  virtual void enterMethodDeclaration(DecafParser::MethodDeclarationContext * /*ctx*/) override { }
  virtual void exitMethodDeclaration(DecafParser::MethodDeclarationContext * /*ctx*/) override { }

  virtual void enterMethodType(DecafParser::MethodTypeContext * /*ctx*/) override { }
  virtual void exitMethodType(DecafParser::MethodTypeContext * /*ctx*/) override { }

  virtual void enterParameter(DecafParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(DecafParser::ParameterContext * /*ctx*/) override { }

  virtual void enterParameterType(DecafParser::ParameterTypeContext * /*ctx*/) override { }
  virtual void exitParameterType(DecafParser::ParameterTypeContext * /*ctx*/) override { }

  virtual void enterBlock(DecafParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(DecafParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatement(DecafParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(DecafParser::StatementContext * /*ctx*/) override { }

  virtual void enterLocation(DecafParser::LocationContext * /*ctx*/) override { }
  virtual void exitLocation(DecafParser::LocationContext * /*ctx*/) override { }

  virtual void enterExpression(DecafParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(DecafParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterMethodCall(DecafParser::MethodCallContext * /*ctx*/) override { }
  virtual void exitMethodCall(DecafParser::MethodCallContext * /*ctx*/) override { }

  virtual void enterArg(DecafParser::ArgContext * /*ctx*/) override { }
  virtual void exitArg(DecafParser::ArgContext * /*ctx*/) override { }

  virtual void enterOp(DecafParser::OpContext * /*ctx*/) override { }
  virtual void exitOp(DecafParser::OpContext * /*ctx*/) override { }

  virtual void enterArith_op(DecafParser::Arith_opContext * /*ctx*/) override { }
  virtual void exitArith_op(DecafParser::Arith_opContext * /*ctx*/) override { }

  virtual void enterRel_op(DecafParser::Rel_opContext * /*ctx*/) override { }
  virtual void exitRel_op(DecafParser::Rel_opContext * /*ctx*/) override { }

  virtual void enterEq_op(DecafParser::Eq_opContext * /*ctx*/) override { }
  virtual void exitEq_op(DecafParser::Eq_opContext * /*ctx*/) override { }

  virtual void enterCond_op(DecafParser::Cond_opContext * /*ctx*/) override { }
  virtual void exitCond_op(DecafParser::Cond_opContext * /*ctx*/) override { }

  virtual void enterLiteral(DecafParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(DecafParser::LiteralContext * /*ctx*/) override { }

  virtual void enterInt_literal(DecafParser::Int_literalContext * /*ctx*/) override { }
  virtual void exitInt_literal(DecafParser::Int_literalContext * /*ctx*/) override { }

  virtual void enterChar_literal(DecafParser::Char_literalContext * /*ctx*/) override { }
  virtual void exitChar_literal(DecafParser::Char_literalContext * /*ctx*/) override { }

  virtual void enterBool_literal(DecafParser::Bool_literalContext * /*ctx*/) override { }
  virtual void exitBool_literal(DecafParser::Bool_literalContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

