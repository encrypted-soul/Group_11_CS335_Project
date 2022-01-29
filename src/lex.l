%{
#include <stdio.h>
#include "y.tab.h"
void yyerror (char *s);
int yylex();
%}

letter [a-zA-Z_]
digit [0-9]
ws [ ]
tab [\t]
newline [\n]

%%
"break"  { return BREAK; }
"func" { return FUNC; }
"varcase" { return VARCASE; }
"struct" { return STRUCT; }
"return" { return RETURN; }
"else" { return ELSE; }
"goto" { return GOTO; }
"package" { return PACKAGE; }
"const" { return CONST; }
"if" { return IF; }
"range" { return RANGE; }
"continue" { return CONTINUE; }
"for" { return FOR; }
"import" { return IMPORT; }


{letter} ( {letter} | {digit} )*     { return ID; }

{digit}+       { // yylval.num = atoi(yytext); 
                 return CONSTANT; }
[+\-/\*%]       { // yylval.num = atoi(yytext); 
                 return OPERATOR; }
[&|!\^]        { // yylval.num = atoi(yytext); 
                 return OPERATOR; }
[<>=]          { // yylval.num = atoi(yytext); 
                 return OPERATOR; }
[()\[\]\{\}]   { // yylval.num = atoi(yytext); 
                 return OPERATOR; }
[.]            { // yylval.num = atoi(yytext); 
                 return OPERATOR; }

{ws}           { return SPACE; }    // +1 column
{tab}          { return TAB; }      // +4 column
{newline}      { return NEWLINE; }  // +1 line 

.                        { ECHO; 
                           yyerror("...NOT RECOGNIZED...") ;
                         }

%%

void yyerror(char *s) {
    printf("ERROR %s\n", s);
}

int main() {
      int val, total = 0, n = 0;
      while ( (val = yylex()) > 0 ) {
           printf("Token %d Found\n", val);
      }
      printf("BYE\n");
}
