%{
#include<iostream>
using namespace std;
#include "y.tab.h"
void yyerror(string s);
int yylex();
int row = 1, column = 1;
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

{dec_digit}+ {return CONST;}
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
                           yyerror("...NOT RECOGNIZED...") ;
                         }

%%

void yyerror(string s) {
	cout<<"ERROR: "<<s<<"\n";
}

int main()
{
  FlexLexer* lexer = new yyFlexLexer;
  int val, total = 0, n = 0;
  while ((val = lexer->yylex()) > 0)
  {
    switch (val)
    {
    case 1023:
      cout<<"CASE"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case 1024:
      cout<<"BREAK"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";	
      break;
    case 1025:
      cout<<"FUNC"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case 1026:
      cout<<"VAR"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case 1027:
      cout<<"STRUCT"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case 1028:
    	cout<<"RETURN"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case 1029:
    	cout<<"ELSE"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case 1030:
    	cout<<"GOTO"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case 1031:
    	cout<<"PACKAGE"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case 1032:
    	cout<<"CONST"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case 1033:
    	cout<<"IF"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case 1034:
    	cout<<"RANGE"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case 1035:
    	cout<<"CONTINUE"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case 1036:
    	cout<<"FOR"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case 1037:
    	cout<< lexer->YYText() <<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      //printf("%s\t%s\t%d\t%d\n", lexer->YYText(), lexer->YYText(), row, column);
      break;
    case 1038:
    	cout<<"IMPORT"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case 1040: column+=3; break;
    case 1041: row++; column=0; break; //will be updated with yyleng
    case 1042:
    	cout<<"ID"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case 1043:
    	cout<<"VAR"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;

    case 1044:
    	cout<<"INT8"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;
    case 1045:
    	cout<<"INT16"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;
    case 1046:
    	cout<<"INT32"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;
    case 1047:
    	cout<<"INT64"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;

    case 1048:
    	cout<<"UINT8"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;
    case 1049:
    	cout<<"UINT16"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;
    case 1050:
    	cout<<"UINT32"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;
    case 1051:
    	cout<<"UINT64"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;

    case 1052:
    	cout<<"FLOAT32"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;
    case 1053:
    	cout<<"FLOAT64"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;

    case 1054:
    	cout<<"BYTE"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;
    case 1055:
    	cout<<"TRUE"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;
    case 1056:
    	cout<<"FALSE"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;
    case 1057:
    	cout<<"STRING_LIT"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;
    case 1058:
    	cout<<"BINARY_LIT"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;  
    case 1059:
    	cout<<"HEX_LIT"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break; 
    case 1060:
    	cout<<"FLOAT_LIT"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break; 
    }
    column+=lexer->YYLeng();
  }
  printf("BYE\n");
}
