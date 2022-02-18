%{
#include <stdio.h>
int yylex();
void yyerror(char* s);
int yydebug = 1;
%}
%define parse.trace
%token CASE BREAK FUNC VARCASE STRUCT RETURN ELSE GOTO PACKAGE CONST IF RANGE CONTINUE FOR SPACE TAB ID VAR INT8 INT16 INT32 INT64 UINT8 UINT16 UINT32 UINT64 FLOAT32 FLOAT64 BYTE TRUE FALSE STRING_LIT BINARY_LIT HEX_LIT FLOAT_LIT DEC_LIT IMPORT STRING ELIPSIS SELECT GO FALLTHROUGH DEFAULT TYPE_TOK

%left '+' '-'
%left '*' '/'

%%
/* First non-terminal symbol defined is taken as the start symbol, so ours is SourceFile*/
/* %start SourceFile */
/* DON'T USE SC -> Semi Colon  recursively */
/* CM -> Comma */
/* Name in order : {IMPORT ';'} -> STAR_Import_SC */
/* { ',' ID} -> STAR_CM_ID */

SourceFile: PackageClause ';' STAR_ImportDecl_SC STAR_TopLevelDecl_SC;

PackageClause  : PACKAGE PackageName ; /* package math */
PackageName    : ID ; /* math */


/* CHANGE: Use comma in place of Semi colon */
ImportDecl       : IMPORT ImportSpec /* import "fmt" */
|                  IMPORT '(' STAR_ImportSpec_SC')' ; /* import ( "fmt", "mth",) ; */

ImportSpec       : ImportPath /* "llvm/dir" */
|                  '.' ImportPath /* . "llvm/dir" */
|                  PackageName ImportPath ; /* math "llvm/dir" ;  cmd "llvm/cmd" ; "llvm" "dir" */

ImportPath       : STRING_LIT ; /* "fmt" */

TopLevelDecl     : Declaration
|                  FunctionDecl;

/******************* FUCK YOU BISON ********************/

STAR_TopLevelDecl_SC : STAR_TopLevelDecl_SC TopLevelDecl ';'
|                   %empty ;

STAR_ImportDecl_SC : STAR_ImportDecl_SC ImportDecl ';'
|                 %empty ;

STAR_ImportSpec_SC : STAR_ImportSpec_SC ImportSpec ';'
|                 %empty ;

STAR_CM_ID: STAR_CM_ID ',' ID
|                 %empty ;

STAR_ConstSpec_SC : STAR_ConstSpec_SC ConstSpec ';'
|                 %empty ;
STAR_VarSpec_SC   : STAR_VarSpec_SC VarSpec ';'
|                 %empty ;
STAR_CM_EXP: STAR_CM_EXP ',' Expression
|                 %empty ;
STAR_TypeSpec_SC   : STAR_TypeSpec_SC ';'
|                 %empty ;

/* this same as if StatementList */
STAR_Statement_SC	: STAR_Statement_SC Statement ';'
|					%empty;


STAR_CM_ParameterDecl	: STAR_CM_ParameterDecl ',' ParameterDecl
|					%empty;

STAR_FieldDecl_SC : STAR_FieldDecl_SC FieldDecl ';'
|                 %empty ;
/************************** Declarations **************************/

Declaration      : ConstDecl
|                  TypeDecl
|                  VarDecl ; /* const ... */

/************** Constant Declaration ******************/

ConstDecl        : CONST ConstSpec /* const a, b, c, d ; */
|                  CONST '(' STAR_ConstSpec_SC ')' ; /* const  ( a, b, c , d ; e, f, g, h); */
ConstSpec        : IdentifierList ;
IdentifierList   : ID STAR_CM_ID  ; /* a, b, c */

/************** Type Declaration ******************/
TypeDecl         : TYPE_TOK TypeSpec
|                  TYPE_TOK '(' STAR_TypeSpec_SC ')';
TypeSpec         : AliasDecl
|                  TypeDef ;
AliasDecl        : ID '=' Type ;
TypeDef          : ID Type ;

/************* Variable Declaration ******************/

VarDecl          : VAR VarSpec
|                  VAR '(' STAR_VarSpec_SC ')' ;
VarSpec          : IdentifierList "=" ExpressionList ;

/************* Expressions ******************/

ExpressionList : Expression STAR_CM_EXP ;

Expression : UnaryExpr
|            Expression binary_op Expression ;

UnaryExpr  : PrimaryExpr
|            unary_op UnaryExpr ;

/* TODO: Remove extra operators that we do not support */
/* TODO: Replace <= to LE and ;... */
binary_op  : "||" ;
| 	     "&&" ;
| 	     rel_op ;
|            add_op ;
| 	     mul_op ;

rel_op     : "==" ;
|     	     "!=" ;
|            '<' ;
|            "<=" ;
|            '>' ;
|            ">=" ;

add_op     : '+' ;
|            '-' ;
|            '|' ;
|            '^' ;

mul_op     : '*' ;
|            '/' ;
|            '%' ;
|            "<<" ;
|            ">>" ;
|            '&' ;

unary_op   : '+' ;
|            '-' ;
|            '!' ;
|            '^' ;
|            '*' ;
|            '&' ;

PrimaryExpr : Operand ;
|             PrimaryExpr Index;
|             PrimaryExpr Selector ;
|             PrimaryExpr Arguments ;

Selector       : '.' ID ;
Index          : '[' Expression ']' ;

Arguments      : '(' ')'
|                '(' ArgumentInBracket ')'
;

ArgumentInBracket : ArgumentInBracketFirst ArgumentInBracketEnd ;

ArgumentInBracketFirst :  ExpressionList
|                         Type
|                         Type ',' ExpressionList
;

ArgumentInBracketEnd : ELIPSIS ','
|                      ELIPSIS
|                      ','
|                      %empty
;

/* TODO: Literal -> token name */
Operand     : Literal ;
|             OperandName ;
|             "(" Expression ")" ;

/************************** Literals **************************/

/* TODO: Remove composite literal and what they do even mean? */
Literal     : BasicLit
|             CompositeLit
|             FunctionLit
;

/* TODO: Replace by token names  */
/* TODO: get integer value using strtol() function by giving appropriate base in lexer */
INT_LIT : DEC_LIT
|         BINARY_LIT
|         HEX_LIT
;

BasicLit    : INT_LIT;
|             FLOAT_LIT
|             STRING_LIT
;

OperandName : ID
|             QualifiedIdent
;
/* TODO: How are we going to use qualified IDs */
QualifiedIdent : PackageName '.' ID ;


CompositeLit  : LiteralType LiteralValue ;
LiteralType   : StructType
|               ArrayType
|               '[' ELIPSIS ']' ElementType
|               TypeName
;

LiteralValue  : '{' '}'
|               '{' ElementList '}'
|               '{' ElementList ',' '}'
;

ElementList   : KeyedElement STAR_CM_KeyedElement ;
STAR_CM_KeyedElement : STAR_CM_KeyedElement ',' KeyedElement
|                      %empty
;

/* add colon as token */
KeyedElement  : Key ':' Element
|               Element
;

Key           : ID
|               Expression
|               LiteralValue
;

Element       : Expression
|               LiteralValue
;

/* TODO: If we don't use function literals remove the corresponding rules */
FunctionLit : FUNC Signature FunctionBody ;

/************************** Function Declaration **************************/
FunctionDecl	:	FUNC FunctionName Signature  FunctionBody
|					FUNC FunctionName Signature	;

FunctionName 	:	ID;
FunctionBody	:	Block ;
Block			:	'{' STAR_Statement_SC '}' ;
/* no ... operator */



/************** Statement ***************/

Statement 		: 	Declaration
|           		LabeledStmt
|           		SimpleStmt
|           		GoStmt
|           		ReturnStmt
|           		BreakStmt
|           		ContinueStmt
|           		GotoStmt
|           		FallthroughStmt
|           		Block
|           		IfStmt
|           		ForStmt ;

/* removed switchstmt, SelectStmt */

LabeledStmt		: 	Label ':' Statement ;
Label			:	ID ;

SimpleStmt		:	EmptyStmt
|					ExpressionStmt
|					IncDecStmt
|					Assignment ;
/*|					ShortVarDecl ;	*/

/* Create new tokens for ++ and -- */
EmptyStmt		: 	%empty ;
ExpressionStmt	:	Expression ;
IncDecStmt		:	Expression "++"
|					Expression "--" ;

Assignment		:	ExpressionList assign_op ExpressionList ;
assign_op		:	add_op '='
|					mul_op '=' ;

IfStmt			:	IF Expression Block
|					IF SimpleStmt ';' Expression Block
|					IF SimpleStmt ';' Expression Block ELSE Block
|					IF SimpleStmt ';' Expression Block ELSE IfStmt ;

/* TOKEN: FOR */
ForStmt : FOR Block
|         FOR ForStmtAfter Block
;

/* statement that comes after a for statement */
ForStmtAfter : Condition
|              ForClause
|              RangeClause
;

Condition : Expression ;

ForClause : OPT_InitStmt ';' OPT_Condition ';' OPT_PostStmt;

OPT_InitStmt : InitStmt
|              %empty
;

OPT_Condition : Condition
|              %empty
;

OPT_PostStmt : PostStmt
|              %empty
;

InitStmt : SimpleStmt ;
PostStmt : SimpleStmt ;


/* TODO: Remove range clause related rules if we don't support them */
/* NOTE: Removed short variable declaration */
RangeClause : RANGE Expression
|             ExpressionList '=' RANGE Expression
;

/* TOKEN: GO */
GoStmt : GO Expression ;

ReturnStmt : RETURN ExpressionList
|            RETURN
;

BreakStmt : BREAK Label
|           BREAK
;

ContinueStmt : CONTINUE Label
|              CONTINUE
;

/* TODO: goto is bad, remove if we don't support */
GotoStmt : GOTO Label ;

/* TODO: remove fallthrough if don't need it */
FallthroughStmt : FALLTHROUGH;

/************************Types******************************/

Type : TypeName
|      TypeLit
|      '(' Type ')' ;

TypeName  : ID
|          QualifiedIdent  ;

TypeLit   : ArrayType
|           StructType
|           PointerType
|           FunctionType ;

/*
[32]byte
[2*N] struct { x, y int32 }
[1000]*float64
[3][5]int
[2][2][2]float64  // same as [2]([2]([2]float64))
*/
ArrayType   : '[' ArrayLength ']' ElementType ;
ArrayLength : Expression ;
ElementType : Type ;

/* struct {
	x, y int
	u float32
	_ float32  // padding
	A *[]int
	F func()
}*/
StructType    : STRUCT '{' STAR_FieldDecl_SC '}' ;
FieldDecl     : IdentifierList Type Tag
|               IdentifierList Type ;
Tag           : STRING_LIT

/*
*Point
*[4]int
*/
PointerType : '*' BaseType ;
BaseType    : Type ;

/*
func()
func(x int) int
func(a, _ int, z float32) bool
func(a, b int, z float32) (bool)
*/

FunctionType   : FUNC Signature ;
Signature		: 	Parameters
|					Parameters Result ;
Result			: 	Parameters
|					Type ;

Parameters		: 	'(' ')'
|					'(' ParameterList  ')'
|					'(' ParameterList ',' ')' ; 	/*what is up with last , ?? */

ParameterList	:	ParameterDecl STAR_CM_ParameterDecl ;
ParameterDecl	:	Type
|					IdentifierList Type ;
|                   IdentifierList ELIPSIS Type
|                   ELIPSIS Type;
/* no ... operator */

%%
void yyerror(char* s){
    printf("ERROR: %s\n", s);
}

int main(){
    while(1){
        yyparse();
    }
    return 0;
}
