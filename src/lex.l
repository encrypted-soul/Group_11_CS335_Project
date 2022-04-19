%{
	#include "parser.tab.hpp"
%}
%option yylineno
UNICODE_LETTER			        [a-zA-Z]
LETTER_VARIABLE_START	                [a-zA-Z_]
DIGIT					[0-9]
UNICODE_CHAR			        [^\n]
NEW_LINE				[\n]
VAR_TYPE				"bool"|"byte"|"float32"|"float64"|"int"|"int8"|"int16"|"int32"|"int64"|"string"|"uint"|"uint8 "|"uint16"|"uint32"|"uint64"
BOOL_CONST				"true"|"false"
NIL_VAL					"nil"
%%

"="					{ yylval.data = new Data(yytext);return ASSIGN;}
"+"					{ yylval.data = new Data(yytext);return ADD;}
"-"					{ yylval.data = new Data(yytext);return SUB;}
"*"					{ yylval.data = new Data(yytext);return MUL;}
"/"					{ yylval.data = new Data(yytext);return QUO;}
"%"					{ yylval.data = new Data(yytext);return REM;}

"&"					{ yylval.data = new Data(yytext);return AND;}
"|"					{ yylval.data = new Data(yytext);return OR;}
"^"					{ yylval.data = new Data(yytext);return XOR;}
"<<"				{ yylval.data = new Data(yytext);return SHL;}
">>"				{ yylval.data = new Data(yytext);return SHR;}
"&^"				{ yylval.data = new Data(yytext);return AND_NOT;}

"+="				{ yylval.data = new Data(yytext);return ADD_ASSIGN;}
"-="				{ yylval.data = new Data(yytext);return SUB_ASSIGN;}
"*="				{ yylval.data = new Data(yytext);return MUL_ASSIGN;}
"/="				{ yylval.data = new Data(yytext);return QUO_ASSIGN;}
"%="				{ yylval.data = new Data(yytext);return REM_ASSIGN;}

"&="				{ yylval.data = new Data(yytext);return AND_ASSIGN;}
"|="				{ yylval.data = new Data(yytext);return OR_ASSIGN;}
"^="				{ yylval.data = new Data(yytext);return XOR_ASSIGN;}
"<<="				{ yylval.data = new Data(yytext);return SHL_ASSIGN;}
">>="				{ yylval.data = new Data(yytext);return SHR_ASSIGN;}
"&^="				{ yylval.data = new Data(yytext);return AND_NOT_ASSIGN;}

"&&"				{ yylval.data = new Data(yytext);return LAND;}
"||"				{ yylval.data = new Data(yytext);return LOR;}
"->"				{ yylval.data = new Data(yytext);return ARROW;}
"++"				{ yylval.data = new Data(yytext);return INC;}
"--"				{ yylval.data = new Data(yytext);return DEC;}

"=="				{ yylval.data = new Data(yytext);return EQL;}
">"				    { yylval.data = new Data(yytext);return GTR;}
"<"					{ yylval.data = new Data(yytext);return LSS;}
"!"					{ yylval.data = new Data(yytext);return NOT;}

"!="				{ yylval.data = new Data(yytext);return NEQ;}
"<="				{ yylval.data = new Data(yytext);return LEQ;}
">="				{ yylval.data = new Data(yytext);return GEQ;}
":="				{ yylval.data = new Data(yytext);return DEFINE;}
"..."				{ yylval.data = new Data(yytext);return ELLIPSIS;}

"("					{ yylval.data = new Data(yytext);return LPAREN;}
")"					{ yylval.data = new Data(yytext);return RPAREN;}
"{"					{ yylval.data = new Data(yytext);return LBRACE;}
"}"					{ yylval.data = new Data(yytext);return RBRACE;}
"["					{ yylval.data = new Data(yytext);return LBRACK;}
"]"					{ yylval.data = new Data(yytext);return RBRACK;}
","					{ yylval.data = new Data(yytext);return COMMA;}
";"					{ yylval.data = new Data(yytext);return SEMICOLON;}
":"					{ yylval.data = new Data(yytext);return COLON;}
"."					{ yylval.data = new Data(yytext);return PERIOD;}

"package"				{ yylval.data = new Data(yytext);return PACKAGE;}
"import"				{ yylval.data = new Data(yytext);return IMPORT;}
"func"					{ yylval.data = new Data(yytext);return FUNC;}
"break"					{ yylval.data = new Data(yytext);return BREAK;}
"case"					{ yylval.data = new Data(yytext);return CASE;}
"const"					{ yylval.data = new Data(yytext);return CONST;}
"continue"        		{ yylval.data = new Data(yytext);return CONTINUE;}
"default"        		{ yylval.data = new Data(yytext);return DEFAULT;}
"else"					{ yylval.data = new Data(yytext);return ELSE;}
"for"					{ yylval.data = new Data(yytext);return FOR;}
"go"        			{ yylval.data = new Data(yytext);return GO;}
"if"					{ yylval.data = new Data(yytext);return IF;}
"range"					{ yylval.data = new Data(yytext);return RANGE;}
"return"        		{ yylval.data = new Data(yytext);return RETURN;}
"struct"        		{ yylval.data = new Data(yytext);return STRUCT;}
"switch"        		{ yylval.data = new Data(yytext);return SWITCH;}
"type"       			{ yylval.data = new Data(yytext);return TYPE;}
"var"        			{ yylval.data = new Data(yytext);return VAR;}
{VAR_TYPE}				{ yylval.data = new Data(yytext); return VAR_TYPE;}
{BOOL_CONST}			        {yylval.data = new Data(to_string(yytext == "true")); return BOOL_CONST;}
{NIL_VAL}				{yylval.data = new Data(yytext); return NIL_VAL;}

{LETTER_VARIABLE_START}({LETTER_VARIABLE_START}|{DIGIT})*	{ yylval.data = new Data(yytext);
	                                                          return IDENTIFIER;}
-?{DIGIT}+							{ yylval.data = new Data(yytext);
                                                                  return INTEGER;}
-?{DIGIT}+"."{DIGIT}+						{ yylval.data = new Data(yytext);
								  return FLOAT;}
\'{UNICODE_CHAR}\'  						{ yylval.data = new Data(yytext);
                                                                  return BYTE; }
\"([^\\\n\"]|(\\.))*\"		                                { yylval.data = new Data(yytext);
                        	                                  return STRING; }

\/\/{UNICODE_CHAR}*\n		;
"\n"				;
"\t"				;
" "				;
.				printf("ERROR : unexpected character in line %d\n",yylineno);

%%
int yywrap(void)
{
	return 1;
}
