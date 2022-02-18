%{
#include <stdio.h>
#include "parse.tab.h"
int yylex();
extern void yyerror(char* s);
%}

%option noyywrap
letter [a-zA-Z_]
digit [[:digit:]]
hexdigit [[:xdigit:]]
bindigit [01]
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
"select" {return SELECT;}
"default" {return DEFAULT;}
"fallthrough" { return FALLTHROUGH;}
"go" { return GO;}
"type" {return TYPE_TOK; }
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
"..." { return ELIPSIS;}

">=" {return GE;}
"<=" {return LE;}
"||" { return DOUBLE_OR;}
"&&" {return DOUBLE_AND;}
"==" {return EQ;}
"!=" {return NE;}
"<<" {return LEFT_SHIFT;}
">>" { return RIGHT_SHIFT;}
"++" { return INCMNT;}
"--" { return DECMNT;}
"+="  {return PLUS_EQ;}
"-=" {return MINUS_EQ;}
"|="  { return OR_EQ;}
"^=" { return XOR_EQ;}
"*=" { return MUL_EQ;}
"/=" { return DIV_EQ;}
"%=" { return MOD_EQ;}
"<<=" { return LS_EQ;}
">>=" { return RS_EQ;}
"&=" { return AND_EQ;}

{letter}({letter}|{digit})*     { return ID; }
{digit}+ {return DEC_LIT;}
(0)[bB]{bindigit}+ {return BINARY_LIT;}
(0)[xX]{hexdigit}+ {return HEX_LIT;}
{digit}*+"."{digit}+|{digit}*+"."{digit}*+[eE][-+]?{digit}*|{digit}*+[eE][-+    ]?{digit}*|"."{digit}*+[eE][-+]?{digit}*  { return FLOAT_LIT;}
\"(\\.|[^"\\])*\"	{ return STRING_LIT; }

[-+/\*%]      { return *yytext; }
[&|!\^]        { return *yytext; }
[<>=]          { return *yytext; }
[\(\)\[\]\{\}]   { return *yytext; }
["',;:]       { return *yytext; }
[.]            { return *yytext; }

{ws}          ;
{tab}         ;
{newline}     ;

.                        { ECHO;
                           yyerror("...NOT RECOGNIZED...") ;
                         }

%%