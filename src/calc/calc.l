%{
#include <stdio.h>
#include "calc.tab.h"
int yylex();
extern int yylval;
void yyerror(char *s) {
    printf("ERROR %s\n", s);
}
%}
%option noyywrap
%%

[[:digit:]]+    {
                yylval = atoi(yytext);
                return INTEGER;
        }

[-+/*\n]        return *yytext;

[ \t]+          ;
