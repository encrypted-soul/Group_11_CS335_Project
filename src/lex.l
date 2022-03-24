%{
	#include<bits/stdc++.h>
	#include "parser.tab.h"
        #include "src/ast.hpp"

%}
%option yylineno
UNICODE_LETTER			[a-zA-Z]
LETTER_VARIABLE_START	[a-zA-Z_]
DIGIT					[0-9]
UNICODE_CHAR			[^\n]
NEW_LINE				[\n]
VAR_TYPE				"bool"|"byte"|"float32"|"float64"|"int"|"int8"|"int16"|"int32"|"int64"|"string"|"uint"|"uint8 "|"uint16"|"uint32"|"uint64"
BOOL_CONST				"true"|"false"
NIL_VAL					"nil"
%%

"="					{return ASSIGN;}
"+"					{return ADD;}
"-"					{return SUB;}
"*"					{return MUL;}
"/"					{return QUO;}
"%"					{return REM;}

"&"					{return AND;}
"|"					{return OR;}
"^"					{return XOR;}
"<<"				{return SHL;}
">>"				{return SHR;}
"&^"				{return AND_NOT;}

"+="				{return ADD_ASSIGN;}
"-="				{return SUB_ASSIGN;}
"*="				{return MUL_ASSIGN;}
"/="				{return QUO_ASSIGN;}
"%="				{return REM_ASSIGN;}

"&="				{return AND_ASSIGN;}
"|="				{return OR_ASSIGN;}
"^="				{return XOR_ASSIGN;}
"<<="				{return SHL_ASSIGN;}
">>="				{return SHR_ASSIGN;}
"&^="				{return AND_NOT_ASSIGN;}

"&&"				{return LAND;}
"||"				{return LOR;}
"->"				{return ARROW;}
"++"				{return INC;}
"--"				{return DEC;}

"=="				{return EQL;}
">"					{return GTR;}
"<"					{return LSS;}
"!"					{return NOT;}

"!="				{return NEQ;}
"<="				{return LEQ;}
">="				{return GEQ;}
":="				{return DEFINE;}
"..."				{return ELLIPSIS;}

"("					{return LPAREN;}
")"					{return RPAREN;}
"{"					{return LBRACE;}
"}"					{return RBRACE;}
"["					{return LBRACK;}
"]"					{return RBRACK;}
","					{return COMMA;}
";"					{return SEMICOLON;}
":"					{return COLON;}
"."					{return PERIOD;}

"package"				{return PACKAGE;}
"import"				{return IMPORT;}
"func"					{return FUNC;}
"break"					{return BREAK;}
"case"					{return CASE;}
"const"					{return CONST;}
"continue"        		{return CONTINUE;}
"default"        		{return DEFAULT;}
"else"					{return ELSE;}
"for"					{return FOR;}
"go"        			{return GO;}
"if"					{return IF;}
"range"					{return RANGE;}
"return"        		{return RETURN;}
"struct"        		{return STRUCT;}
"switch"        		{return SWITCH;}
"type"       			{return TYPE;}
"var"        			{return VAR;}
{VAR_TYPE}				{return VAR_TYPE;}
{BOOL_CONST}			{return BOOL_CONST;}
{NIL_VAL}				{return NIL_VAL;}

{LETTER_VARIABLE_START}({LETTER_VARIABLE_START}|{DIGIT})*	{return IDENTIFIER;}
-?{DIGIT}+													{return INTEGER;}
{DIGIT}+"."{DIGIT}+											{return FLOAT;}
\'{UNICODE_CHAR}\'  										{return BYTE;}


\"([^\\\n\"]|(\\.))*\"		{return STRING;}
\/\/{UNICODE_CHAR}*\n		;
"\n"						;
"\t"						;
" "							;
.							printf("ERROR : unexpected character in line %d\n",yylineno);

%%
int yywrap(void)
{
	return 1;
}
