%{
#include <stdio.h>
#include "y.tab.h"
void yyerror(char *s);
int yylex();
int row = 1, column = 1;
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


{letter}({letter}|{digit})*     { //yylval.id = strdup(yytext);
                                  return ID; }

{digit}+       { //yylval.num = atoi(yytext); 
                 return CONST; }
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
           switch(val){
             case 1042: printf("ID\t%s\t%d\t%d\n", yytext , row , column);column+=yyleng;break;
             case 1024: printf("BREAK\t%s\t%d\t%d\n", yytext , row , column);column+=yyleng;break;
             case 1041: printf("NEWLINE\t\\n\t%d\t%d\n" , row , column);row++ ; column+=yyleng;break;
           }
           
      }
      printf("BYE\n");
}
