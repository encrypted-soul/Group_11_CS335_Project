%{
#include<iostream>
using namespace std;
#include "y.tab.h"
void yyerror(string s);
int yylex();
int row = 1, column = 1;
//char ** a[256] = ["FLOAT", "HEX", ] // Commented WIP
%}

%option noyywrap 
letter [a-zA-Z_]
dec_digit [0-9]
binary_digit [01]
hex_digit [[:xdigit:]]
ws [ ]
tab [\t]
newline [\n]

/* TODO: define GE, LE, NE, EQ*/

/* TODO: Define YYLTYPE as union and Assign relevant values to yylval*/
/* For integer values use strtol() function with relevant base*/

/* TODO: Use BEGIN for recognizing string*/
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
                           yyerror("...NOT RECOGNIZED...") ;
                         }

%%

void yyerror(string s) {
	cout<<"ERROR: "<<s<<"\n";
}

/* TODO: Use macro in place of macro values e.g. 1059 -> HEX_LIT because we are going to use --- done
   TODO: yacc generated y.tab.h file so we should not depend on the numbers assigned to macros
   TODO: Find Alternative way to print information about token rather than using switch-case 
   TODO: Fix MACRO VAR/VARCASE error */
int main()
{
  FlexLexer* lexer = new yyFlexLexer;
  int val, total = 0, n = 0;
  while ((val = lexer->yylex()) > 0)
  {
    switch (val)
    {
    case CASE:
      cout<<"CASE"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case BREAK:
      cout<<"BREAK"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";	
      break;
    case FUNC:
      cout<<"FUNC"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    //case VARCASE:
      //cout<<"VARCASE"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      //break;
    case STRUCT:
      cout<<"STRUCT"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case RETURN:
    	cout<<"RETURN"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case ELSE:
    	cout<<"ELSE"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case GOTO:
    	cout<<"GOTO"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case PACKAGE:
    	cout<<"PACKAGE"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case CONST:
    	cout<<"CONST"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case IF:
    	cout<<"IF"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case RANGE:
    	cout<<"RANGE"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case CONTINUE:
    	cout<<"CONTINUE"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case FOR:
    	cout<<"FOR"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case OPERATOR:
    	cout<< lexer->YYText() <<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      //printf("%s\t%s\t%d\t%d\n", lexer->YYText(), lexer->YYText(), row, column);
      break;
    case IMPORT:
    	cout<<"IMPORT"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case TAB: column+=3; break;
    case NEWLINE: row++; column=0; break; //will be updated with yyleng
    case ID:
    	cout<<"ID"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n";
      break;
    case VAR: //***VARCASE REPEAT ERROR see line 117***
    	cout<<"VAR"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;

    case INT8:
    	cout<<"INT8"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;
    case INT16:
    	cout<<"INT16"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;
    case INT32:
    	cout<<"INT32"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;
    case INT64:
    	cout<<"INT64"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;

    case UINT8:
    	cout<<"UINT8"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;
    case UINT16:
    	cout<<"UINT16"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;
    case UINT32:
    	cout<<"UINT32"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;
    case UINT64:
    	cout<<"UINT64"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;

    case FLOAT32:
    	cout<<"FLOAT32"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;
    case FLOAT64:
    	cout<<"FLOAT64"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;

    case BYTE:
    	cout<<"BYTE"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;
    case TRUE:
    	cout<<"TRUE"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;
    case FALSE:
    	cout<<"FALSE"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;
    case STRING_LIT:
    	cout<<"STRING_LIT"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;
    case BINARY_LIT:
    	cout<<"BINARY_LIT"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;  
    case HEX_LIT:
    	cout<<"HEX_LIT"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break; 
    case FLOAT_LIT:
    	cout<<"FLOAT_LIT"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break; 
    case DEC_LIT:
      cout<<"DEC_LIT"<<"\t"<<lexer->YYText() <<"\t"<<row << "\t" << column<<"\n"; 
      break;
    }
    column+=lexer->YYLeng();
  }
}
