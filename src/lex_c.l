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
"var" { return VAR; }
"case" {return CASE;}
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

"int8" { return INT8; }
"int16" { return INT16; }
"int32" { return INT32; }
"int64" { return INT64; }
"uint8" { return UINT8; }
"uint16" { return UINT16; }
"uint32" { return UINT32; }
"uint64" { return UINT64; }
"float32" { return FLOAT32; }
"float64" { return FLOAT64; }
"byte" { return BYTE; }
"true" { return TRUE; }
"false" { return FALSE; }
"string" { return STRING; }


{letter}({letter}|{digit})*     { //yylval.id = strdup(yytext);
                                  return ID; }

\"(\\.|[^"\\])*\"	{ return STRING; }

[+\-/\*%]       { // yylval.num = atoi(yytext); 
                 return OPERATOR; }
[&|!\^]        { // yylval.num = atoi(yytext); 
                 return OPERATOR; }
[<>=]          { // yylval.num = atoi(yytext); 
                 return OPERATOR; }
[()\[\]\{\}]   { // yylval.num = atoi(yytext); 
                 return OPERATOR; }
[\"\',;]       { // yylval.num = atoi(yytext); 
                 return OPERATOR; }
[.]            { // yylval.num = atoi(yytext); 
                 return OPERATOR; }

{ws}           { return SPACE; }    // +1 column
{tab}          { return TAB; }      // +4 column
{newline}      { return NEWLINE; }  // +1 line , column = 0

.                        { ECHO; 
                           yyerror("...NOT RECOGNIZED...") ;
                         }

%%

void yyerror(char *s) {
    printf("ERROR %s\n", s);
}

int main()
{
  int val, total = 0, n = 0;
  while ((val = yylex()) > 0)
  {
    switch (val)
    {
    case 1023:
      printf("CASE\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1024:
      printf("BREAK\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1025:
      printf("FUNC\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1026:
      printf("VAR\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1027:
      printf("STRUCT\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1028:
      printf("RETURN\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1029:
      printf("ELSE\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1030:
      printf("GOTO\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1031:
      printf("PACKAGE\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1032:
      printf("CONST\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1033:
      printf("IF\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1034:
      printf("RANGE\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1035:
      printf("CONTINUE\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1036:
      printf("FOR\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1037:
      printf("%s\t%s\t%d\t%d\n", yytext, yytext, row, column);
      break;
    case 1038:
      printf("IMPORT\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1040: column+=3; break;
    case 1041: row++; column=0; break; //will be updated with yyleng
    case 1042:
      printf("ID\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1043: 
      printf("VAR\t%s\t%d\t%d\n", yytext, row, column);
      break;

    case 1044: 
      printf("INT8\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1045: 
      printf("INT16\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1046: 
      printf("INT32\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1047: 
      printf("INT64\t%s\t%d\t%d\n", yytext, row, column);
      break;

    case 1048: 
      printf("UINT8\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1049: 
      printf("UINT16\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1050: 
      printf("UINT32\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1051: 
      printf("UINT64\t%s\t%d\t%d\n", yytext, row, column);
      break;

    case 1052: 
      printf("FLOAT32\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1053: 
      printf("FLOAT64\t%s\t%d\t%d\n", yytext, row, column);
      break;

    case 1054: 
      printf("BYTE\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1055: 
      printf("TRUE\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1056: 
      printf("FALSE\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1057: 
      printf("STRING\t%s\t%d\t%d\n", yytext, row, column);
      break;
    case 1058: 
      printf("STRUCT\t%s\t%d\t%d\n", yytext, row, column);
      break;    
    }
    column+=yyleng;
  }
  printf("BYE\n");
}
