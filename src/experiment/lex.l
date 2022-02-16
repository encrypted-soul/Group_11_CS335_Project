%{
#include<iostream>
#include "parse.tab.hpp"
using namespace std;
int yylex();
extern int yylval;
%}
%option noyywrap
letter [a-zA-Z_]
dec_digit [0-9]
binary_digit [01]
hex_digit [0-9a-fA-F]
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

{letter}({letter}|{dec_digit})*     { //yylval.id = strdup(lexer->YYText());
                                  return ID; }

{dec_digit}+ {return DEC_LIT;}
(0)[bB]{binary_digit}+ {return BINARY_LIT;}
(0)[xX]{hex_digit}+ {return HEX_LIT;}
{dec_digit}*+"."{dec_digit}+|{dec_digit}*+"."{dec_digit}*+[eE][-+]?{dec_digit}*|{dec_digit}*+[eE][-+    ]?{dec_digit}*|"."{dec_digit}*+[eE][-+]?{dec_digit}*  { return FLOAT_LIT;}
\"(\\.|[^"\\])*\"	{ return STRING_LIT; }

[+\-/\*%]       { // yylval.num = atoi(lexer->YYText());
			//cout<<lexer->YYText()<<"\n";
                 return OPERATOR; }
[&|!\^]        { // yylval.num = atoi(lexer->YYText());
                 return OPERATOR; }
[<>=]          { // yylval.num = atoi(lexer->YYText());
                 return OPERATOR; }
[()\[\]\{\}]   { // yylval.num = atoi(lexer->YYText());
                 return OPERATOR; }
[\"\',;]       { // yylval.num = atoi(lexer->YYText());
                 return OPERATOR; }
[.]            { // yylval.num = atoi(lexer->YYText());
                 return OPERATOR; }

{ws}           { return SPACE; }    // +1 column
{tab}          { return TAB; }      // +4 column
{newline}      { return NEWLINE; }  // +1 line , column = 0

.                        { ECHO;
                           cout << "...NOT RECOGNIZED..." ;
                         }

%%

