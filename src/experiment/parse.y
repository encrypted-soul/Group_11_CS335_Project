%{
#include <stdio.h>
int yylex();
void yyerror(char* s);
int yydebug = 1;
%}
%define parse.trace
%token CASE BREAK FUNC VARCASE STRUCT RETURN ELSE GOTO PACKAGE CONST IF RANGE CONTINUE FOR SPACE TAB ID VAR INT8 INT16 INT32 INT64 UINT8 UINT16 UINT32 UINT64 FLOAT32 FLOAT64 BYTE TRUE FALSE STRING_LIT BINARY_LIT HEX_LIT FLOAT_LIT DEC_LIT IMPORT

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

TopLevelDecl     : Declaration ;

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

/************************** Declarations **************************/

Declaration      : ConstDecl ; /* const ... */
ConstDecl        : CONST ConstSpec /* const a, b, c, d ; */
|                  CONST '(' STAR_ConstSpec_SC ')' ; /* const  ( a, b, c , d ; e, f, g, h); */
ConstSpec        : IdentifierList ;
IdentifierList   : ID STAR_CM_ID  ; /* a, b, c */
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
