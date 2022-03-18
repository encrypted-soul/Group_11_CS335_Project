%{
#include <bits/stdc++.h>
#include "parser.tab.h"
using namespace std;

int yylex(void);
void yyerror (const char *s) {fprintf (stderr, "%s\n", s);}

extern int yylineno;

%}

// error-verbose
%define parse.error verbose

%token    PACKAGE IMPORT FUNC BREAK CASE CONST CONTINUE DEFAULT
%token    ELSE FOR GO IF RANGE RETURN STRUCT SWITCH TYPE VAR VAR_TYPE
%token    BOOL_CONST NIL_VAL IDENTIFIER BYTE STRING ELLIPSIS
%token    SHL SHR INC DEC
%token    INTEGER
%token     FLOAT
%left    ADD SUB MUL QUO REM
%right    ASSIGN AND NOT DEFINE AND_NOT
%left    OR XOR ARROW
%right    ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN QUO_ASSIGN REM_ASSIGN
%right    AND_ASSIGN OR_ASSIGN XOR_ASSIGN
%right    SHL_ASSIGN SHR_ASSIGN AND_NOT_ASSIGN COLON
%left    LAND LOR EQL NEQ LEQ GEQ SEMICOLON
%left    GTR LSS LPAREN RPAREN LBRACE RBRACE LBRACK RBRACK COMMA PERIOD

%%

/* START OF FILE */
StartFile:
    PackageClause SEMICOLON ImportDeclStar TopLevelDeclStar
    ;

Block:
	LBRACE OPENB StatementList CLOSEB RBRACE
	;

OPENB:
	/*empty*/
	;

CLOSEB:
	/*empty*/
	;

StatementList:
    StatementList Statement SEMICOLON
    | Statement SEMICOLON
    ;

Statement:
	Declaration
	| LabeledStmt
	| SimpleStmt
	|ReturnStmt
	| BreakStmt
	| ContinueStmt
	|Block
	| IfStmt
	|  ForStmt
	| FunctionCall
	| FunctionStmt ;

SimpleStmt:
	EmptyStmt
	|  IncDecStmt
	| Assignment
;

EmptyStmt:
	/*empty*/
	;

LabeledStmt:
	Label COLON Statement ;
Label:
	IDENTIFIER ;

IncDecStmt:
	Expression INC
	|Expression DEC ;

Assignment:
	ExpressionList assign_op ExpressionList
	;

VarDecl:
		VAR VarSpec
		;
VarSpec:
		IdentifierList Type ASSIGN ExpressionList
		| IdentifierList Type
		;

Declaration:
	ConstDecl
	| TypeDecl
	| VarDecl ;

FunctionDecl:
		FUNC FunctionName OPENB Function CLOSEB
		|FUNC FunctionName OPENB Signature CLOSEB ;
FunctionName:
		IDENTIFIER ;
Function:
		Signature FunctionBody ;
FunctionBody:
		Block ;

FunctionStmt:
		VarDecl DEFINE FunctionCall
		| IDENTIFIER DEFINE FunctionCall
		;

FunctionCall:	PrimaryExpr LPAREN ArgumentList RPAREN
		;

ArgumentList:
		ArgumentList COMMA Arguments
		| Arguments
		| /*empty*/
		;

Arguments:	PrimaryExpr
		| FunctionCall
		;

Signature:
	Parameters
	|Parameters Result ;

Result:
	LPAREN TypeList RPAREN
	| Type  ;

Parameters:
	LPAREN RPAREN
	| LPAREN ParameterDeclStar RPAREN
	|LPAREN ParameterDeclStar COMMA RPAREN
	;
ParameterDeclStar:
	ParameterDecl
	|ParameterDeclStar COMMA ParameterDecl
	;

ParameterDecl:
	IdentifierList Type
	| IdentifierList ELLIPSIS  Type
	|ELLIPSIS Type
	;

TypeList:
    TypeList COMMA Type
    | Type
    ;

IdentifierList:
		IDENTIFIER IdentifierLIST
		| IDENTIFIER
		;

IdentifierLIST:	IdentifierLIST COMMA IDENTIFIER
		| COMMA IDENTIFIER
		;

MethodDecl:
	FUNC Receiver IDENTIFIER Function
	| FUNC Receiver IDENTIFIER Signature
	;

Receiver:
	Parameters ;

TopLevelDeclStar:
    TopLevelDeclStar SEMICOLON /*here colon*/ TopLevelDecl
    | TopLevelDecl
    ;

TopLevelDecl:
	Declaration
	| FunctionDecl
	| MethodDecl
	;

TypeLit:
	ArrayType
	| StructType
	| PointerType
	| FunctionType
	;

Type:
	TypeName
	| TypeLit
	;

Operand:
	Literal
	| OperandName
	| LPAREN Expression RPAREN ;

OperandName:
	IDENTIFIER
;

ReturnStmt:
	RETURN Expression
	|RETURN ;

BreakStmt:
	BREAK Label
	| BREAK ;

ContinueStmt:
	CONTINUE Label
	|CONTINUE
	;

IfStmt:
	IF OPENB Expression Block CLOSEB
	|IF OPENB SimpleStmt SEMICOLON Expression Block CLOSEB
	|IF OPENB SimpleStmt SEMICOLON Expression Block ELSE IfStmt CLOSEB
	|IF OPENB SimpleStmt SEMICOLON Expression Block ELSE  Block CLOSEB
	|IF OPENB Expression Block ELSE IfStmt CLOSEB
	|IF OPENB Expression Block ELSE  Block CLOSEB
	;

ForStmt:
	FOR OPENB Condition Block CLOSEB
	|FOR OPENB ForClause Block CLOSEB
	;
Condition:
	Expression ;

ForClause:
	InitStmt SEMICOLON Condition SEMICOLON PostStmt
	;
InitStmt:
	SimpleStmt ;
PostStmt:
	SimpleStmt ;

int_lit:
	INTEGER
	;
float_lit:
	  FLOAT
	  ;

TypeName:
	IDENTIFIER
	| VAR_TYPE
	;

ArrayType:
	LBRACK ArrayLength RBRACK Type
	;

ArrayLength:
	Expression
	;

StructType:
    STRUCT LBRACE FieldDeclStar RBRACE
    | STRUCT LBRACE RBRACE
    ;

FieldDeclStar:
    FieldDecl SEMICOLON
    | FieldDeclStar FieldDecl SEMICOLON
    ;

FieldDecl:
	IdentifierList Type
	| IdentifierList Type Tag
	;

Tag:
	STRING
	;

PointerType:
	MUL BaseType
	;
BaseType:
	Type
	;

FunctionType:
	FUNC Signature
	;

ConstDecl:
		CONST ConstSpec
		;

ConstSpec:
		IDENTIFIER Type ASSIGN Expression
		| IDENTIFIER Type
		;

ExpressionList:
		ExpressionList COMMA Expression
		| Expression
		;

TypeDecl:
		TYPE  TypeSpec
		| TYPE LPAREN TypeSpecList RPAREN ;

TypeSpecList:
		TypeSpecList TypeSpec SEMICOLON
		| TypeSpec SEMICOLON
		;
TypeSpec:
		AliasDecl
		| TypeDef ;

AliasDecl:
		IDENTIFIER ASSIGN Type
		;

TypeDef:
		IDENTIFIER Type
		;

Literal:
	BasicLit
	| FunctionLit
	;

string_lit:
	STRING
	;

byte_lit:
	BYTE
	;

BasicLit:
	int_lit
	| float_lit
	| string_lit
	| byte_lit
	;

FunctionLit:
	FUNC Function ;

PrimaryExpr:
	Operand |
	PrimaryExpr Selector |
	PrimaryExpr Index |
	PrimaryExpr TypeAssertion |
	OperandName StructLiteral
	;

StructLiteral:
    LBRACE KeyValList RBRACE
    ;

KeyValList:
    	/* empty */
 	| Expression COLON Expression
	| KeyValList COMMA Expression COLON Expression
	;

Selector:
	PERIOD IDENTIFIER ;
Index:
	LBRACK Expression RBRACK ;


TypeAssertion:
	PERIOD LPAREN Type RPAREN
	;

// The below expression{number} is written because of the conflict between the
// expression when the binary operations are used with a single rule
Expression:
    Expression1
    ;

Expression1:
    Expression1 LOR Expression2
    | Expression2
    ;

Expression2:
    Expression2 LAND Expression3
    | Expression3
    ;

Expression3:
    Expression3 rel_op Expression4
    | Expression4
    ;

Expression4:
    Expression4 add_op Expression5
    | Expression5
    ;

Expression5:
    Expression5 mul_op PrimaryExpr
    | UnaryExpr
    ;

UnaryExpr:
	PrimaryExpr
	| unary_op PrimaryExpr
	//UnaryExpr
	;

rel_op:
	EQL
	| NEQ
	| LSS
	| LEQ
	| GTR
	| GEQ ;
add_op:
	ADD
	| SUB
	| OR
	| XOR ;
mul_op:
	MUL
	| QUO
	| REM
	| SHL
	| SHR
	| AND
	| AND_NOT ;

unary_op:
	ADD
	| SUB
	| NOT
	| XOR
	| MUL
	| AND
	;

assign_op:
	ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| MUL_ASSIGN
	| QUO_ASSIGN
	| REM_ASSIGN
	;

PackageClause:
	PACKAGE PackageName
	;
PackageName:
	IDENTIFIER
	;

ImportDeclStar:
    ImportDeclStar ImportDecl
    | ImportDecl
    | /*empty*/
    ;

ImportDecl:
	IMPORT ImportSpec SEMICOLON
	| IMPORT LPAREN ImportSpecStar  RPAREN
	;

ImportSpecStar:
	ImportSpecStar ImportSpec SEMICOLON
	| ImportSpec SEMICOLON
	;
ImportSpec:
	 PERIOD ImportPath
	| AlternatePackageName ImportPath
	| AlternatePackageName ;
ImportPath:
	string_lit
	;
AlternatePackageName:
	string_lit
	;

%%

int main (int argc, char **argv) {

	yyparse ( );

}