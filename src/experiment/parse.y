%{
#include <stdio.h>
int yylex();
void yyerror(char* s);
%}

%token CASE BREAK FUNC VARCASE STRUCT RETURN ELSE GOTO PACKAGE CONST IF RANGE CONTINUE FOR OPERATOR IMPORT SPACE TAB NEWLINE ID VAR INT8 INT16 INT32 INT64 UINT8 UINT16 UINT32 UINT64 FLOAT32 FLOAT64 BYTE TRUE FALSE STRING_LIT BINARY_LIT HEX_LIT FLOAT_LIT DEC_LIT

%left '+' '-'
%left '*' '/'

%%
/* First non-terminal symbol defined is taken as the start symbol, so ours is SourceFile*/
/* %start SourceFile */
SourceFile: '+' '\n' {printf("NEWLINE");}
| ;

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