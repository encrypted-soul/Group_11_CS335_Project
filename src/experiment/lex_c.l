%{
#include <stdio.h>
#include "parse.tab.h"
int yylex();
extern void yyerror(char* s);
%}

%option noyywrap
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
"string" { return STRING_LIT; }


{letter}({letter}|{digit})*     { //yylval.id = strdup(yytext);
                                  return ID; }

\"(\\.|[^"\\])*\"	{ return STRING_LIT; }

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
