%{
#include "iostream.h"
%}

%token CASE BREAK FUNC VARCASE STRUCT RETURN ELSE GOTO PACKAGE CONST IF RANGE CONTINUE FOR OPERATOR IMPORT SPACE TAB NEWLINE ID VAR INT8 INT16 INT32 INT64 UINT8 UINT16 UINT32 UINT64 FLOAT32 FLOAT64 BYTE TRUE FALSE STRING_LIT BINARY_LIT HEX_LIT FLOAT_LIT DEC_LIT 

/* TODO: Specify precedence rules for all operators */
/* TODO: Observe binary_op, rel_op, add_op, ;... -> these seems to be a class of operator having same precedence and are mentioned in increasing order of precedence( top(rel_op) is lowest and bottom(unary_op) is highest) : CONFIRM
/* Associativity */
%left '+' '-'
%left '*' '/'

/************************** MAJOR WORK **************************/

/* 1. DEFINE SEMANTICS OF RULES (e.g. for "exp : exp '+' exp", define "$$ = $1 + $3")
/* 2. Conver all EBNF rules into equivalent yacc rule. 
/*    Specifically We are looking for  */
/*    |   alternation -> used as it is so nothing changes */
/*    ()  grouping    -> ditto */
/*    []  option (0 or 1 times) {} -> Two alternative rules */
/*    {}  repetition (0 to n times)  -> Define new recursive rule for this particular term only */
/*    Look for original go lexer/yacc tool for reference */
/* 3. Remove all unnecessary rules and support only what we promised initially */

/**************************            **************************/

%%
/* First non-terminal symbol defined is taken as the start symbol, so ours is SourceFile*/
/* %start SourceFile */
SourceFile  : PackageClause ";" { ImportDecl ";" } { TopLevelDecl ";" } ;

PackageClause  : "package" PackageName ;
PackageName    : identifier ;

ImportDecl       : "import" ( ImportSpec | "(" { ImportSpec ";" } ")" ) ;
ImportSpec       : [ "." | PackageName ] ImportPath ;
ImportPath       : string_lit ;


/* HERE */
TopLevelDecl  : Declaration ;
|               FunctionDecl ;
| 		MethodDecl ;



/************************** Declarations **************************/

Declaration   : ConstDecl | TypeDecl | VarDecl ;

TypeDecl : "type" ( TypeSpec | "(" { TypeSpec ";" } ")" ) ;
TypeSpec : AliasDecl | TypeDef ;
AliasDecl : identifier "=" Type ;
TypeDef : identifier Type ;

VarDecl     : "var" ( VarSpec | "(" { VarSpec ";" } ")" ) ;
VarSpec     : IdentifierList ( Type [ "=" ExpressionList ] | "=" ExpressionList ) ;
/* TODO: Remove short variable declaration if we don't support it. */
ShortVarDecl : IdentifierList ":=" ExpressionList ;

ConstDecl      : "const" ( ConstSpec | "(" { ConstSpec ";" } ")" ) ;
/* TODO: Remove types? */
ConstSpec      : IdentifierList [ [ Type ] "=" ExpressionList ] ;
IdentifierList : identifier { "," identifier } ;
ExpressionList : Expression { "," Expression } ;

/************************** Expressions **************************/

Expression : UnaryExpr | Expression binary_op Expression ;

UnaryExpr  : PrimaryExpr | unary_op UnaryExpr ;

/* TODO: Remove extra operators that we do not support */
/* TODO: Replace <= to LE and ;... */
binary_op  : "||" ;
| 	     "&&" ;
| 	     rel_op ;
|            add_op ;
| 	     mul_op ;

rel_op     : "==" ;
|     	     "!=" ;
|            "<" ;
|            "<=" ;
|            ">" ;
|            ">=" ;

add_op     : "+" ;
|            "-" ;
|            "|" ;
|            "^" ;

mul_op     : "*" ;
|            "/" ;
|            "%" ;
|            "<<" ;
|            ">>" ;
|            "&" ;
|            "&^" ;

unary_op   : "+" ;
|            "-" ;
|            "!" ;
|            "^" ;
|            "*" ;
|            "&" ;
|            "<-" ;


PrimaryExpr : Operand ;
|             Conversion ;
|             MethodExpr ;
|             PrimaryExpr Selector ;
|             PrimaryExpr Index ;
|             PrimaryExpr Slice ;
|             PrimaryExpr TypeAssertion ;
|             PrimaryExpr Arguments ;

Selector       : "." identifier ;
Index          : "[" Expression "]" ;
Slice          : "[" [ Expression ] ":" [ Expression ] "]" ;
|                "[" [ Expression ] ":" Expression ":" Expression "]" ;

/* TODO: what are conversions and do we support them */
Conversion : Type "(" Expression [ "," ] ")" ;
/* TODO: what are type assertion and do we support them */
TypeAssertion  : "." "(" Type ")" ;
Arguments      : "(" [ ( ExpressionList | Type [ "," ExpressionList ] ) [ "..." ] [ "," ] ] ")" ;

MethodExpr    : ReceiverType "." MethodName ;
ReceiverType  : Type ;

/* TODO: Literal -> token name */
Operand     : Literal ;
|             OperandName ;
|             "(" Expression ")" ;

/************************** Literals **************************/

/* TODO: Remove composite literal and what they do even mean? */
Literal     : BasicLit ;
|             CompositeLit ;
|             FunctionLit ;

/* TODO: Replace by token names  */
BasicLit    : int_lit ;
|             float_lit ;
|             imaginary_lit ;
|             rune_lit ;
|             string_lit ;

OperandName : identifier ;
|             QualifiedIdent ;

/* TODO: How are we going to use qualified identifiers */
QualifiedIdent : PackageName "." identifier ;

CompositeLit  : LiteralType LiteralValue ;
LiteralType   : StructType ;
|               ArrayType ;
|               "[" "..." "]" ElementType ;
|               SliceType ;
|               MapType ;
|               TypeName ;

LiteralValue  : "{" [ ElementList [ "," ] ] "}" ;
ElementList   : KeyedElement { "," KeyedElement } ;
KeyedElement  : [ Key ":" ] Element ;
Key           : FieldName ;
|               Expression ;
|               LiteralValue ;

FieldName     : identifier ;
Element       : Expression ;
|               LiteralValue ;

/* TODO: If we don't use function literals remove the corresponding rules */
FunctionLit : "func" Signature FunctionBody ;

/**************************Function  Declaration **************************/

FunctionDecl : "func" FunctionName Signature [ FunctionBody ] ;
FunctionName : identifier ;
FunctionBody : Block ;

Block : "{" StatementList "}" ;
StatementList : { Statement ";" } ;

/**************************Method  Declarations **************************/
MethodDecl : "func" Receiver MethodName Signature [ FunctionBody ] ;
Receiver   : Parameters ;

/************************** Statements **************************/

Statement : Declaration ;
|           LabeledStmt ;
|           SimpleStmt ;
|           GoStmt ;
|           ReturnStmt ;
|           BreakStmt ;
|           ContinueStmt ;
|           GotoStmt ;
|           FallthroughStmt ;
|           Block ;
|           IfStmt ;
|           SwitchStmt ;
|           SelectStmt ;
|           ForStmt ;
|           DeferStmt ;

LabeledStmt : Label ":" Statement ;
Label       : identifier ;


SimpleStmt : EmptyStmt ;
|            ExpressionStmt ;
|            SendStmt ;
|            IncDecStmt ;
|            Assignment ;
|            ShortVarDecl ;

EmptyStmt : ;
ExpressionStmt : Expression ;

/* TODO: Remove channel related rules  */
SendStmt : Channel "<-" Expression ;
Channel  : Expression ;

IncDecStmt : Expression ( "++" | "--" ) ;

Assignment : ExpressionList assign_op ExpressionList ;
assign_op : [ add_op | mul_op ] "=" ;

IfStmt : "if" [ SimpleStmt ";" ] Expression Block [ "else" ( IfStmt | Block ) ] ;

/* TODO: remove type switch Statement */
SwitchStmt : ExprSwitchStmt ;
|            TypeSwitchStmt ;


ExprSwitchStmt : "switch" [ SimpleStmt ";" ] [ Expression ] "{" { ExprCaseClause } "}" ;
ExprCaseClause : ExprSwitchCase ":" StatementList ;
ExprSwitchCase : "case" ExpressionList ;
|                "default" ;


/* TODO: Remove type switch statement rules */
TypeSwitchStmt  : "switch" [ SimpleStmt ";" ] TypeSwitchGuard "{" { TypeCaseClause } "}" ;
TypeSwitchGuard : [ identifier ":=" ] PrimaryExpr "." "(" "type" ")" ;
TypeCaseClause  : TypeSwitchCase ":" StatementList ;
TypeSwitchCase  : "case" TypeList ;
|                 "default" ;
TypeList        : Type { "," Type } ;


ForStmt : "for" [ Condition | ForClause | RangeClause ] Block ;
Condition : Expression ;

ForClause : [ InitStmt ] ";" [ Condition ] ";" [ PostStmt ] ;
InitStmt : SimpleStmt ;
PostStmt : SimpleStmt ;

/* TODO: Remove range clause related rules if we don't support them */
RangeClause : [ ExpressionList "=" | IdentifierList ":=" ] "range" Expression ;

/* TODO: Remove go statement related rules as we don't support them */
GoStmt : "go" Expression ;


/* TODO: Remove Select statements if we don't support them */
SelectStmt : "select" "{" { CommClause } "}" ;
CommClause : CommCase ":" StatementList ;
CommCase   : "case" ( SendStmt | RecvStmt ) 
|            "default" ;

/* TODO: remove send and recieve statements */
RecvStmt   : [ ExpressionList "=" | IdentifierList ":=" ] RecvExpr ;
RecvExpr   : Expression ;

ReturnStmt : "return" [ ExpressionList ] ;

BreakStmt : "break" [ Label ] ;

ContinueStmt : "continue" [ Label ] ;

/* TODO: goto is bad, remove if we don't support */
GotoStmt : "goto" Label ;

/* TODO: remove fallthrough if don't need it */
FallthroughStmt : "fallthrough" ;

/* TODO: We don't support concurrency, so remove every rule related to it. e.g. defer, send, recieve, go clause, ;.. */
DeferStmt : "defer" Expression ;

/************************** Types **************************/

/* TODO: How do we plan to support types */
Type      : TypeName ;
|           TypeLit ;
|           "(" Type ")" ;

TypeName  : identifier ;
|           QualifiedIdent ;

TypeLit   : ArrayType ;
|           StructType ;
|           PointerType ;
|           FunctionType ;
|           InterfaceType ;
|           SliceType ;
|           MapType ;
|           ChannelType ;

ArrayType   : "[" ArrayLength "]" ElementType ;
ArrayLength : Expression ;
ElementType : Type ;

/* TODO: Remove rules for slice and slice type */
SliceType : "[" "]" ElementType ;

StructType    : "struct" "{" { FieldDecl ";" } "}" ;
FieldDecl     : (IdentifierList Type | EmbeddedField) [ Tag ] ;
EmbeddedField : [ "*" ] TypeName ;
Tag           : string_lit 

PointerType : "*" BaseType ;
BaseType    : Type ;


FunctionType   : "func" Signature ;
Signature      : Parameters [ Result ] ;
Result         : Parameters ;
|                Type ;
Parameters     : "(" [ ParameterList [ "," ] ] ")" ;
ParameterList  : ParameterDecl { "," ParameterDecl } ;
ParameterDecl  : [ IdentifierList ] [ "..." ] Type ;



/* TODO: Remove rules related to Interface and InterfaceTypes */
InterfaceType      : "interface" "{" { ( MethodSpec | InterfaceTypeName ) ";" } "}" ;
MethodSpec         : MethodName Signature ;
MethodName         : identifier ;
InterfaceTypeName  : TypeName ;

/* TODO: If we do not support map then remove map and map type rules: */
MapType     : "map" "[" KeyType "]" ElementType ;
KeyType     : Type ;

/* TODO: Remove channel and channel type rules */
ChannelType : ( "chan" | "chan" "<-" | "<-" "chan" ) ElementType ;