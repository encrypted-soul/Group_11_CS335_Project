/* A Bison parser, made by GNU Bison 3.8.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30800

/* Bison version string.  */
#define YYBISON_VERSION "3.8"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/parser.ypp"

#include "parser.tab.hpp"
using namespace std;

int yylex(void);
void yyerror (const char *s) {fprintf (stderr, "%s\n", s);}

extern int yylineno;
extern char* yytext;
vector <string> prog;
int lineno = 1;
int tempno = 1;
int temp_str_no = 0;
int labelno = 1;
astnode *theprogram;

ofstream symbolTable;					//for symtab_print
std::ostream* fp = &cout;

umap< string, symtab_t* > symtab_top;
symtab_t *symtab =  init_symtab_top();	//universal block + symtab "0" aka global
int currscope = 0;
string fullscope = "0";

stack <string> if_endlabels;
stack <string> if_bwlabels;

stack <string> for_initlabels;
stack <string> for_endlabels;
stack <string> for_blocklabels;
stack <string> for_postlabels;
stack <string> for_breaklabels;	//not used
stack <string> for_continuelabels;

string argumentlist_str;
stack <int> is_argument_list_empty;
int temp_var_counter = 0;

//splitting strings separated by comma
vector<string> split(const string &s, char delim) {
    stringstream ss(s);
    string item;
    vector<string> tokens;
    while (getline(ss, item, delim)) {
        tokens.push_back(item);
    }
    return tokens;
}

string get_temp_var() {

	string v = "temp_" + to_string(temp_var_counter);
	temp_var_counter++;
	return v;
}

string get_label(){
	string str_l = "label";
	string ans =  str_l.append(to_string(labelno));
	labelno++;
	return ans;
}

string get_temp_strvar(){
	string str_t = "t_str";
	string ans =  str_t.append(to_string(temp_str_no));
	temp_str_no++;
	return ans;
}

#line 142 "parser.tab.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 76 "src/parser.ypp"

    #include <bits/stdc++.h>
	#include "src/ast.h"
	#include "src/symtab.h"
	using namespace std;

#line 181 "parser.tab.cpp"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    PACKAGE = 258,                 /* PACKAGE  */
    IMPORT = 259,                  /* IMPORT  */
    FUNC = 260,                    /* FUNC  */
    BREAK = 261,                   /* BREAK  */
    CASE = 262,                    /* CASE  */
    CONST = 263,                   /* CONST  */
    CONTINUE = 264,                /* CONTINUE  */
    DEFAULT = 265,                 /* DEFAULT  */
    ELSE = 266,                    /* ELSE  */
    FOR = 267,                     /* FOR  */
    GO = 268,                      /* GO  */
    IF = 269,                      /* IF  */
    RANGE = 270,                   /* RANGE  */
    RETURN = 271,                  /* RETURN  */
    STRUCT = 272,                  /* STRUCT  */
    SWITCH = 273,                  /* SWITCH  */
    TYPE = 274,                    /* TYPE  */
    VAR = 275,                     /* VAR  */
    VAR_TYPE = 276,                /* VAR_TYPE  */
    BOOL_CONST = 277,              /* BOOL_CONST  */
    NIL_VAL = 278,                 /* NIL_VAL  */
    IDENTIFIER = 279,              /* IDENTIFIER  */
    BYTE = 280,                    /* BYTE  */
    STRING = 281,                  /* STRING  */
    ELLIPSIS = 282,                /* ELLIPSIS  */
    SHL = 283,                     /* SHL  */
    SHR = 284,                     /* SHR  */
    INC = 285,                     /* INC  */
    DEC = 286,                     /* DEC  */
    INTEGER = 287,                 /* INTEGER  */
    FLOAT = 288,                   /* FLOAT  */
    ADD = 289,                     /* ADD  */
    SUB = 290,                     /* SUB  */
    MUL = 291,                     /* MUL  */
    QUO = 292,                     /* QUO  */
    REM = 293,                     /* REM  */
    ASSIGN = 294,                  /* ASSIGN  */
    AND = 295,                     /* AND  */
    NOT = 296,                     /* NOT  */
    DEFINE = 297,                  /* DEFINE  */
    AND_NOT = 298,                 /* AND_NOT  */
    OR = 299,                      /* OR  */
    XOR = 300,                     /* XOR  */
    ARROW = 301,                   /* ARROW  */
    ADD_ASSIGN = 302,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 303,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 304,              /* MUL_ASSIGN  */
    QUO_ASSIGN = 305,              /* QUO_ASSIGN  */
    REM_ASSIGN = 306,              /* REM_ASSIGN  */
    AND_ASSIGN = 307,              /* AND_ASSIGN  */
    OR_ASSIGN = 308,               /* OR_ASSIGN  */
    XOR_ASSIGN = 309,              /* XOR_ASSIGN  */
    SHL_ASSIGN = 310,              /* SHL_ASSIGN  */
    SHR_ASSIGN = 311,              /* SHR_ASSIGN  */
    AND_NOT_ASSIGN = 312,          /* AND_NOT_ASSIGN  */
    COLON = 313,                   /* COLON  */
    LAND = 314,                    /* LAND  */
    LOR = 315,                     /* LOR  */
    EQL = 316,                     /* EQL  */
    NEQ = 317,                     /* NEQ  */
    LEQ = 318,                     /* LEQ  */
    GEQ = 319,                     /* GEQ  */
    SEMICOLON = 320,               /* SEMICOLON  */
    GTR = 321,                     /* GTR  */
    LSS = 322,                     /* LSS  */
    LPAREN = 323,                  /* LPAREN  */
    RPAREN = 324,                  /* RPAREN  */
    LBRACE = 325,                  /* LBRACE  */
    RBRACE = 326,                  /* RBRACE  */
    LBRACK = 327,                  /* LBRACK  */
    RBRACK = 328,                  /* RBRACK  */
    COMMA = 329,                   /* COMMA  */
    PERIOD = 330                   /* PERIOD  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 83 "src/parser.ypp"

	Data* data;
	astnode *node;

#line 278 "parser.tab.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PACKAGE = 3,                    /* PACKAGE  */
  YYSYMBOL_IMPORT = 4,                     /* IMPORT  */
  YYSYMBOL_FUNC = 5,                       /* FUNC  */
  YYSYMBOL_BREAK = 6,                      /* BREAK  */
  YYSYMBOL_CASE = 7,                       /* CASE  */
  YYSYMBOL_CONST = 8,                      /* CONST  */
  YYSYMBOL_CONTINUE = 9,                   /* CONTINUE  */
  YYSYMBOL_DEFAULT = 10,                   /* DEFAULT  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_FOR = 12,                       /* FOR  */
  YYSYMBOL_GO = 13,                        /* GO  */
  YYSYMBOL_IF = 14,                        /* IF  */
  YYSYMBOL_RANGE = 15,                     /* RANGE  */
  YYSYMBOL_RETURN = 16,                    /* RETURN  */
  YYSYMBOL_STRUCT = 17,                    /* STRUCT  */
  YYSYMBOL_SWITCH = 18,                    /* SWITCH  */
  YYSYMBOL_TYPE = 19,                      /* TYPE  */
  YYSYMBOL_VAR = 20,                       /* VAR  */
  YYSYMBOL_VAR_TYPE = 21,                  /* VAR_TYPE  */
  YYSYMBOL_BOOL_CONST = 22,                /* BOOL_CONST  */
  YYSYMBOL_NIL_VAL = 23,                   /* NIL_VAL  */
  YYSYMBOL_IDENTIFIER = 24,                /* IDENTIFIER  */
  YYSYMBOL_BYTE = 25,                      /* BYTE  */
  YYSYMBOL_STRING = 26,                    /* STRING  */
  YYSYMBOL_ELLIPSIS = 27,                  /* ELLIPSIS  */
  YYSYMBOL_SHL = 28,                       /* SHL  */
  YYSYMBOL_SHR = 29,                       /* SHR  */
  YYSYMBOL_INC = 30,                       /* INC  */
  YYSYMBOL_DEC = 31,                       /* DEC  */
  YYSYMBOL_INTEGER = 32,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 33,                     /* FLOAT  */
  YYSYMBOL_ADD = 34,                       /* ADD  */
  YYSYMBOL_SUB = 35,                       /* SUB  */
  YYSYMBOL_MUL = 36,                       /* MUL  */
  YYSYMBOL_QUO = 37,                       /* QUO  */
  YYSYMBOL_REM = 38,                       /* REM  */
  YYSYMBOL_ASSIGN = 39,                    /* ASSIGN  */
  YYSYMBOL_AND = 40,                       /* AND  */
  YYSYMBOL_NOT = 41,                       /* NOT  */
  YYSYMBOL_DEFINE = 42,                    /* DEFINE  */
  YYSYMBOL_AND_NOT = 43,                   /* AND_NOT  */
  YYSYMBOL_OR = 44,                        /* OR  */
  YYSYMBOL_XOR = 45,                       /* XOR  */
  YYSYMBOL_ARROW = 46,                     /* ARROW  */
  YYSYMBOL_ADD_ASSIGN = 47,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 48,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 49,                /* MUL_ASSIGN  */
  YYSYMBOL_QUO_ASSIGN = 50,                /* QUO_ASSIGN  */
  YYSYMBOL_REM_ASSIGN = 51,                /* REM_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 52,                /* AND_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 53,                 /* OR_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 54,                /* XOR_ASSIGN  */
  YYSYMBOL_SHL_ASSIGN = 55,                /* SHL_ASSIGN  */
  YYSYMBOL_SHR_ASSIGN = 56,                /* SHR_ASSIGN  */
  YYSYMBOL_AND_NOT_ASSIGN = 57,            /* AND_NOT_ASSIGN  */
  YYSYMBOL_COLON = 58,                     /* COLON  */
  YYSYMBOL_LAND = 59,                      /* LAND  */
  YYSYMBOL_LOR = 60,                       /* LOR  */
  YYSYMBOL_EQL = 61,                       /* EQL  */
  YYSYMBOL_NEQ = 62,                       /* NEQ  */
  YYSYMBOL_LEQ = 63,                       /* LEQ  */
  YYSYMBOL_GEQ = 64,                       /* GEQ  */
  YYSYMBOL_SEMICOLON = 65,                 /* SEMICOLON  */
  YYSYMBOL_GTR = 66,                       /* GTR  */
  YYSYMBOL_LSS = 67,                       /* LSS  */
  YYSYMBOL_LPAREN = 68,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 69,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 70,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 71,                    /* RBRACE  */
  YYSYMBOL_LBRACK = 72,                    /* LBRACK  */
  YYSYMBOL_RBRACK = 73,                    /* RBRACK  */
  YYSYMBOL_COMMA = 74,                     /* COMMA  */
  YYSYMBOL_PERIOD = 75,                    /* PERIOD  */
  YYSYMBOL_YYACCEPT = 76,                  /* $accept  */
  YYSYMBOL_StartFile = 77,                 /* StartFile  */
  YYSYMBOL_Block = 78,                     /* Block  */
  YYSYMBOL_OPENB = 79,                     /* OPENB  */
  YYSYMBOL_CLOSEB = 80,                    /* CLOSEB  */
  YYSYMBOL_SYMTABS = 81,                   /* SYMTABS  */
  YYSYMBOL_SYMTABE = 82,                   /* SYMTABE  */
  YYSYMBOL_StatementList = 83,             /* StatementList  */
  YYSYMBOL_Statement = 84,                 /* Statement  */
  YYSYMBOL_SimpleStmt = 85,                /* SimpleStmt  */
  YYSYMBOL_EmptyStmt = 86,                 /* EmptyStmt  */
  YYSYMBOL_LabeledStmt = 87,               /* LabeledStmt  */
  YYSYMBOL_Label = 88,                     /* Label  */
  YYSYMBOL_IncDecStmt = 89,                /* IncDecStmt  */
  YYSYMBOL_Assignment = 90,                /* Assignment  */
  YYSYMBOL_VarDecl = 91,                   /* VarDecl  */
  YYSYMBOL_VarSpec = 92,                   /* VarSpec  */
  YYSYMBOL_Declaration = 93,               /* Declaration  */
  YYSYMBOL_FunctionDecl = 94,              /* FunctionDecl  */
  YYSYMBOL_FunctionName = 95,              /* FunctionName  */
  YYSYMBOL_Function = 96,                  /* Function  */
  YYSYMBOL_97_1 = 97,                      /* $@1  */
  YYSYMBOL_FunctionBody = 98,              /* FunctionBody  */
  YYSYMBOL_FunctionStmt = 99,              /* FunctionStmt  */
  YYSYMBOL_FunctionCall = 100,             /* FunctionCall  */
  YYSYMBOL_ArgumentList = 101,             /* ArgumentList  */
  YYSYMBOL_Arguments = 102,                /* Arguments  */
  YYSYMBOL_Signature = 103,                /* Signature  */
  YYSYMBOL_Result = 104,                   /* Result  */
  YYSYMBOL_Parameters = 105,               /* Parameters  */
  YYSYMBOL_ParameterDeclStar = 106,        /* ParameterDeclStar  */
  YYSYMBOL_ParameterDecl = 107,            /* ParameterDecl  */
  YYSYMBOL_TypeList = 108,                 /* TypeList  */
  YYSYMBOL_IdentifierList = 109,           /* IdentifierList  */
  YYSYMBOL_IdentifierLIST = 110,           /* IdentifierLIST  */
  YYSYMBOL_MethodDecl = 111,               /* MethodDecl  */
  YYSYMBOL_Receiver = 112,                 /* Receiver  */
  YYSYMBOL_TopLevelDeclStar = 113,         /* TopLevelDeclStar  */
  YYSYMBOL_TopLevelDecl = 114,             /* TopLevelDecl  */
  YYSYMBOL_TypeLit = 115,                  /* TypeLit  */
  YYSYMBOL_Type = 116,                     /* Type  */
  YYSYMBOL_Operand = 117,                  /* Operand  */
  YYSYMBOL_OperandName = 118,              /* OperandName  */
  YYSYMBOL_ReturnStmt = 119,               /* ReturnStmt  */
  YYSYMBOL_BreakStmt = 120,                /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 121,             /* ContinueStmt  */
  YYSYMBOL_IfStmt = 122,                   /* IfStmt  */
  YYSYMBOL_if_mark1 = 123,                 /* if_mark1  */
  YYSYMBOL_if_mark2 = 124,                 /* if_mark2  */
  YYSYMBOL_if_markend1 = 125,              /* if_markend1  */
  YYSYMBOL_if_mark22 = 126,                /* if_mark22  */
  YYSYMBOL_if_markend2 = 127,              /* if_markend2  */
  YYSYMBOL_if_markend = 128,               /* if_markend  */
  YYSYMBOL_ForStmt = 129,                  /* ForStmt  */
  YYSYMBOL_Condition = 130,                /* Condition  */
  YYSYMBOL_ForClause = 131,                /* ForClause  */
  YYSYMBOL_InitStmt = 132,                 /* InitStmt  */
  YYSYMBOL_PostStmt = 133,                 /* PostStmt  */
  YYSYMBOL_for_clause_mark1 = 134,         /* for_clause_mark1  */
  YYSYMBOL_for_clause_mark2 = 135,         /* for_clause_mark2  */
  YYSYMBOL_for_clause_mark3 = 136,         /* for_clause_mark3  */
  YYSYMBOL_for_mark22 = 137,               /* for_mark22  */
  YYSYMBOL_for_initmark = 138,             /* for_initmark  */
  YYSYMBOL_for_mark1 = 139,                /* for_mark1  */
  YYSYMBOL_for_mark2 = 140,                /* for_mark2  */
  YYSYMBOL_for_markend1 = 141,             /* for_markend1  */
  YYSYMBOL_int_lit = 142,                  /* int_lit  */
  YYSYMBOL_float_lit = 143,                /* float_lit  */
  YYSYMBOL_TypeName = 144,                 /* TypeName  */
  YYSYMBOL_ArrayType = 145,                /* ArrayType  */
  YYSYMBOL_ArrayLength = 146,              /* ArrayLength  */
  YYSYMBOL_StructType = 147,               /* StructType  */
  YYSYMBOL_FieldDeclStar = 148,            /* FieldDeclStar  */
  YYSYMBOL_FieldDecl = 149,                /* FieldDecl  */
  YYSYMBOL_Tag = 150,                      /* Tag  */
  YYSYMBOL_PointerType = 151,              /* PointerType  */
  YYSYMBOL_BaseType = 152,                 /* BaseType  */
  YYSYMBOL_FunctionType = 153,             /* FunctionType  */
  YYSYMBOL_ConstDecl = 154,                /* ConstDecl  */
  YYSYMBOL_ConstSpec = 155,                /* ConstSpec  */
  YYSYMBOL_ExpressionList = 156,           /* ExpressionList  */
  YYSYMBOL_TypeDecl = 157,                 /* TypeDecl  */
  YYSYMBOL_TypeSpecList = 158,             /* TypeSpecList  */
  YYSYMBOL_TypeSpec = 159,                 /* TypeSpec  */
  YYSYMBOL_AliasDecl = 160,                /* AliasDecl  */
  YYSYMBOL_TypeDef = 161,                  /* TypeDef  */
  YYSYMBOL_Literal = 162,                  /* Literal  */
  YYSYMBOL_string_lit = 163,               /* string_lit  */
  YYSYMBOL_byte_lit = 164,                 /* byte_lit  */
  YYSYMBOL_BasicLit = 165,                 /* BasicLit  */
  YYSYMBOL_FunctionLit = 166,              /* FunctionLit  */
  YYSYMBOL_PrimaryExpr = 167,              /* PrimaryExpr  */
  YYSYMBOL_StructLiteral = 168,            /* StructLiteral  */
  YYSYMBOL_KeyValList = 169,               /* KeyValList  */
  YYSYMBOL_Selector = 170,                 /* Selector  */
  YYSYMBOL_Index = 171,                    /* Index  */
  YYSYMBOL_TypeAssertion = 172,            /* TypeAssertion  */
  YYSYMBOL_Expression = 173,               /* Expression  */
  YYSYMBOL_Expression1 = 174,              /* Expression1  */
  YYSYMBOL_Expression2 = 175,              /* Expression2  */
  YYSYMBOL_Expression3 = 176,              /* Expression3  */
  YYSYMBOL_Expression4 = 177,              /* Expression4  */
  YYSYMBOL_Expression5 = 178,              /* Expression5  */
  YYSYMBOL_UnaryExpr = 179,                /* UnaryExpr  */
  YYSYMBOL_rel_op = 180,                   /* rel_op  */
  YYSYMBOL_add_op = 181,                   /* add_op  */
  YYSYMBOL_mul_op = 182,                   /* mul_op  */
  YYSYMBOL_unary_op = 183,                 /* unary_op  */
  YYSYMBOL_assign_op = 184,                /* assign_op  */
  YYSYMBOL_PackageClause = 185,            /* PackageClause  */
  YYSYMBOL_PackageName = 186,              /* PackageName  */
  YYSYMBOL_ImportDeclStar = 187,           /* ImportDeclStar  */
  YYSYMBOL_ImportDecl = 188,               /* ImportDecl  */
  YYSYMBOL_ImportSpecStar = 189,           /* ImportSpecStar  */
  YYSYMBOL_ImportSpec = 190,               /* ImportSpec  */
  YYSYMBOL_ImportPath = 191,               /* ImportPath  */
  YYSYMBOL_AlternatePackageName = 192      /* AlternatePackageName  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   334

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  117
/* YYNRULES -- Number of rules.  */
#define YYNRULES  223
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  343

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   330


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   128,   128,   134,   138,   147,   155,   165,   174,   175,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   193,   194,   195,   199,   203,   207,   214,   230,   249,
     321,   327,   354,   377,   381,   385,   393,   396,   403,   414,
     414,   421,   425,   431,   440,   481,   485,   486,   491,   492,
     496,   500,   504,   505,   509,   512,   521,   525,   526,   533,
     537,   538,   542,   543,   547,   551,   556,   560,   567,   568,
     572,   576,   577,   581,   582,   583,   587,   588,   589,   590,
     594,   595,   599,   600,   601,   605,   611,   615,   624,   625,
     633,   634,   638,   639,   640,   641,   642,   643,   646,   666,
     676,   688,   698,   706,   717,   718,   722,   726,   730,   734,
     737,   751,   789,   808,   819,   830,   851,   862,   874,   880,
     886,   889,   895,   902,   906,   907,   911,   912,   916,   917,
     921,   927,   933,   938,   942,   946,   959,   967,   970,   974,
     975,   979,   980,   983,   984,   988,   992,   996,   997,  1001,
    1009,  1016,  1017,  1018,  1027,  1031,  1035,  1036,  1039,  1042,
    1043,  1047,  1051,  1052,  1053,  1057,  1063,  1071,  1080,  1084,
    1101,  1105,  1122,  1126,  1145,  1149,  1166,  1170,  1187,  1191,
    1192,  1203,  1206,  1209,  1212,  1215,  1218,  1224,  1227,  1230,
    1233,  1239,  1242,  1245,  1248,  1251,  1254,  1257,  1263,  1266,
    1269,  1272,  1275,  1278,  1284,  1287,  1290,  1293,  1296,  1299,
    1305,  1316,  1322,  1323,  1324,  1328,  1331,  1335,  1336,  1340,
    1341,  1342,  1348,  1352
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "PACKAGE", "IMPORT",
  "FUNC", "BREAK", "CASE", "CONST", "CONTINUE", "DEFAULT", "ELSE", "FOR",
  "GO", "IF", "RANGE", "RETURN", "STRUCT", "SWITCH", "TYPE", "VAR",
  "VAR_TYPE", "BOOL_CONST", "NIL_VAL", "IDENTIFIER", "BYTE", "STRING",
  "ELLIPSIS", "SHL", "SHR", "INC", "DEC", "INTEGER", "FLOAT", "ADD", "SUB",
  "MUL", "QUO", "REM", "ASSIGN", "AND", "NOT", "DEFINE", "AND_NOT", "OR",
  "XOR", "ARROW", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "QUO_ASSIGN",
  "REM_ASSIGN", "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", "SHL_ASSIGN",
  "SHR_ASSIGN", "AND_NOT_ASSIGN", "COLON", "LAND", "LOR", "EQL", "NEQ",
  "LEQ", "GEQ", "SEMICOLON", "GTR", "LSS", "LPAREN", "RPAREN", "LBRACE",
  "RBRACE", "LBRACK", "RBRACK", "COMMA", "PERIOD", "$accept", "StartFile",
  "Block", "OPENB", "CLOSEB", "SYMTABS", "SYMTABE", "StatementList",
  "Statement", "SimpleStmt", "EmptyStmt", "LabeledStmt", "Label",
  "IncDecStmt", "Assignment", "VarDecl", "VarSpec", "Declaration",
  "FunctionDecl", "FunctionName", "Function", "$@1", "FunctionBody",
  "FunctionStmt", "FunctionCall", "ArgumentList", "Arguments", "Signature",
  "Result", "Parameters", "ParameterDeclStar", "ParameterDecl", "TypeList",
  "IdentifierList", "IdentifierLIST", "MethodDecl", "Receiver",
  "TopLevelDeclStar", "TopLevelDecl", "TypeLit", "Type", "Operand",
  "OperandName", "ReturnStmt", "BreakStmt", "ContinueStmt", "IfStmt",
  "if_mark1", "if_mark2", "if_markend1", "if_mark22", "if_markend2",
  "if_markend", "ForStmt", "Condition", "ForClause", "InitStmt",
  "PostStmt", "for_clause_mark1", "for_clause_mark2", "for_clause_mark3",
  "for_mark22", "for_initmark", "for_mark1", "for_mark2", "for_markend1",
  "int_lit", "float_lit", "TypeName", "ArrayType", "ArrayLength",
  "StructType", "FieldDeclStar", "FieldDecl", "Tag", "PointerType",
  "BaseType", "FunctionType", "ConstDecl", "ConstSpec", "ExpressionList",
  "TypeDecl", "TypeSpecList", "TypeSpec", "AliasDecl", "TypeDef",
  "Literal", "string_lit", "byte_lit", "BasicLit", "FunctionLit",
  "PrimaryExpr", "StructLiteral", "KeyValList", "Selector", "Index",
  "TypeAssertion", "Expression", "Expression1", "Expression2",
  "Expression3", "Expression4", "Expression5", "UnaryExpr", "rel_op",
  "add_op", "mul_op", "unary_op", "assign_op", "PackageClause",
  "PackageName", "ImportDeclStar", "ImportDecl", "ImportSpecStar",
  "ImportSpec", "ImportPath", "AlternatePackageName", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-252)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-107)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,     6,    49,    -7,  -252,  -252,  -252,   103,   -12,   220,
    -252,  -252,    -8,    85,  -252,    54,    85,    15,    97,    20,
     101,  -252,  -252,  -252,  -252,    66,  -252,  -252,  -252,  -252,
     -16,    88,  -252,  -252,  -252,  -252,  -252,    13,  -252,  -252,
     131,    40,  -252,     2,   133,  -252,  -252,  -252,    92,  -252,
      40,   225,  -252,   106,  -252,    40,  -252,   -52,  -252,     7,
      94,    94,    94,   123,  -252,  -252,    40,   259,  -252,   160,
    -252,  -252,  -252,  -252,  -252,    40,  -252,     9,   136,   179,
     139,   168,  -252,  -252,  -252,  -252,    46,    40,  -252,  -252,
     144,    30,  -252,   144,  -252,   -11,  -252,  -252,    94,  -252,
    -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,   259,
    -252,   147,  -252,  -252,   150,  -252,  -252,  -252,  -252,  -252,
     -43,  -252,   172,   175,   251,    83,   140,  -252,    67,   259,
    -252,  -252,   170,  -252,  -252,   212,   259,  -252,  -252,  -252,
    -252,  -252,   167,    40,  -252,  -252,  -252,    40,    -3,   173,
    -252,  -252,   174,   259,  -252,    40,   259,    22,  -252,  -252,
    -252,   259,   259,  -252,  -252,  -252,  -252,  -252,  -252,   259,
    -252,  -252,  -252,  -252,   259,  -252,  -252,  -252,  -252,  -252,
    -252,  -252,    67,   -43,  -252,  -252,  -252,   178,  -252,  -252,
    -252,  -252,    55,  -252,   216,  -252,   183,  -252,  -252,   113,
     200,  -252,   189,  -252,    40,   175,   251,    83,   140,   -43,
     259,   241,  -252,    40,  -252,  -252,  -252,  -252,   259,   259,
    -252,   190,  -252,   239,   244,  -252,  -252,   259,    68,  -252,
     186,   204,  -252,  -252,  -252,   213,  -252,  -252,   228,  -252,
    -252,  -252,  -252,  -252,  -252,  -252,  -252,    99,   107,   166,
    -252,   214,  -252,  -252,  -252,  -252,  -252,   259,  -252,    67,
     207,   215,  -252,   241,    67,  -252,  -252,  -252,  -252,  -252,
    -252,   259,    67,  -252,  -252,   259,   259,   222,    50,  -252,
     107,  -252,  -252,  -252,  -252,   178,  -252,    70,  -252,   107,
    -252,  -252,  -252,   167,  -252,    64,   259,   167,  -252,    67,
     167,  -252,   223,  -252,   268,  -252,  -252,  -252,   259,   167,
    -252,   278,  -252,  -252,  -252,  -252,   268,  -252,  -252,  -252,
    -252,   231,  -252,   279,    -5,  -252,   259,    -5,  -252,  -252,
    -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,
    -252,  -252,  -252
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,   211,   210,     1,   214,     0,     0,
     213,   149,     0,     0,   223,     0,   221,     0,     0,     0,
       0,    35,    73,    74,    75,     2,    72,    33,    34,   212,
       0,     0,   222,   219,   215,   220,    38,     0,     6,    70,
       0,     0,   134,     0,     0,   139,   143,   144,    65,    30,
       0,     0,   216,     0,   218,     0,    54,     0,    57,     0,
       0,     0,     0,     0,   121,   120,     0,     0,    81,   136,
      80,    76,    77,    78,    79,     0,   146,     0,     0,     0,
      64,    32,    71,   217,    61,    55,     0,     0,    59,     7,
       7,    50,    68,    69,   133,     0,   132,   131,     0,    85,
     150,   118,   119,   198,   199,   202,   203,   200,   201,     0,
     156,    83,   151,   152,     0,    82,   153,   154,   147,   148,
     179,   123,   168,   170,   172,   174,   176,   178,     0,     0,
     145,   140,     0,   142,    67,     0,     0,    56,    58,    60,
      36,    37,     0,     0,    51,    53,   125,     0,     0,     0,
     155,    39,     0,   162,   160,     0,     0,     0,   157,   158,
     159,     0,     0,   181,   182,   184,   186,   185,   183,     0,
     187,   188,   189,   190,     0,   194,   195,   191,   192,   193,
     196,   197,     0,   180,   135,   141,    66,    31,   138,     4,
      41,    40,     0,    63,   128,   124,     0,   126,    84,     0,
       0,   122,     0,   165,     0,   169,   171,   173,   175,   177,
       0,    24,    52,     0,   130,   129,   127,   161,     0,     0,
     166,     0,   137,    89,    91,     4,     4,    87,    85,    16,
       5,     0,    12,    21,    11,     0,    22,    23,    35,    10,
      20,    19,    13,    14,    15,    17,    18,     0,   179,   138,
      62,     0,   163,   167,    88,    90,   114,    24,    86,     0,
       0,     0,     9,    24,     0,   204,   205,   206,   207,   208,
     209,     0,    47,    27,    28,     0,    24,     0,   138,    43,
       0,     3,     8,    25,    42,    29,    49,     0,    46,    48,
     164,   108,   115,     0,   110,   138,     0,     0,    44,     0,
       0,   113,     0,    98,    99,    45,   116,     5,     0,     0,
       5,     0,     5,   117,   111,   106,     5,    92,   101,   117,
     105,     0,    93,     0,     0,   104,    24,     0,   102,   102,
     109,   112,     5,     5,     5,     5,   107,    95,    94,   103,
     103,    97,    96
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -252,  -252,  -139,   -10,    -9,  -252,   218,  -252,  -121,  -251,
    -252,  -252,  -252,  -252,  -252,    -1,  -252,    62,  -252,  -252,
      24,  -252,  -252,  -252,  -158,  -252,    -2,    35,  -252,   285,
    -252,   219,  -252,   -18,  -252,  -252,  -252,  -252,   255,  -252,
     -39,  -252,  -252,  -252,  -252,  -252,  -138,    16,  -252,    -6,
    -252,   -13,   -20,  -252,    14,  -252,  -252,  -252,  -252,  -252,
    -252,  -252,  -252,  -252,  -252,    10,  -252,  -252,  -252,  -252,
    -252,  -252,  -252,   180,  -252,  -252,  -252,  -252,  -252,  -252,
    -131,  -252,  -252,    79,  -252,  -252,  -252,   151,  -252,  -252,
    -252,  -127,  -252,  -252,  -252,  -252,  -252,   -67,  -252,   169,
     159,   162,   158,  -252,  -252,  -252,  -252,  -252,  -252,  -252,
    -252,  -252,   324,  -252,    75,   318,  -252
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,   229,   211,   260,    60,   140,   230,   231,   232,
     233,   234,   235,   236,   237,   238,    49,   239,    23,    38,
      89,   142,   191,   240,   241,   287,   288,    90,   144,    91,
      57,    58,   192,    59,    80,    24,    40,    25,    26,    68,
      69,   110,   111,   242,   243,   244,   245,   297,   310,   311,
     324,   334,   341,   246,   292,   293,   294,   331,   302,   321,
     336,   307,   276,   300,   312,   320,   112,   113,    70,    71,
     114,    72,   148,   149,   215,    73,    97,    74,    27,    42,
     247,    28,    77,    45,    46,    47,   115,   116,   117,   118,
     119,   120,   154,   199,   158,   159,   160,   249,   122,   123,
     124,   125,   126,   127,   169,   174,   182,   128,   271,     3,
       5,     9,    10,    30,    15,    33,    16
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     121,   183,    50,   190,    76,   187,   277,    62,    21,   226,
      11,    81,    62,    48,    11,     1,    84,    85,    11,    63,
      88,    48,    86,    64,    63,   291,    65,    96,    64,   156,
       4,    65,   157,    43,    87,    62,   130,    48,    66,    36,
      55,    75,   152,    66,    43,    62,   203,    63,   139,     6,
      21,    64,   145,    52,    65,   209,    12,    63,     7,    13,
     146,    64,   184,    13,    65,   189,    66,    13,   195,   188,
      48,    22,    98,    55,    67,   330,    66,   147,   131,    67,
     273,   274,    56,    37,   248,    92,   200,    31,    44,   202,
     204,    99,   100,    11,   273,   274,    93,    94,   143,   101,
     102,   279,    67,   248,   193,    53,   284,     8,   194,   261,
     259,    11,    67,    22,   286,   137,   201,   170,   171,    34,
     -98,    41,   150,    78,   212,    48,   -26,   172,   173,   213,
     147,    51,   280,   151,  -106,   109,   248,   280,   265,   298,
     285,   286,   283,   222,   299,   289,   266,   267,   268,   269,
     270,   251,   252,    54,   301,    61,   132,    43,   304,    14,
     258,   306,    37,    14,    32,   221,    79,    32,   175,   176,
     316,    83,   289,   210,   250,   272,   177,   178,   179,   156,
     180,    14,   157,   181,   217,   328,   329,   218,   332,   333,
     278,    98,   223,    95,    18,   224,   273,   274,   225,   129,
     226,   133,   227,   134,   188,    19,    20,   136,   290,   295,
     228,   100,    11,   135,   -39,   256,   257,   153,   101,   102,
     103,   104,   105,   155,     8,    17,   106,   107,    18,   303,
      17,   108,   161,    18,   162,   185,   186,   189,   197,    19,
      20,   315,   214,   198,    19,    20,    98,   223,   216,    18,
     224,   -24,   210,   225,   109,   226,   189,   227,   219,   253,
      19,    20,   220,   254,    98,   228,   100,    11,   255,   262,
     264,   263,   275,   101,   102,   103,   104,   105,   281,  -100,
     282,   106,   107,    99,   100,    11,   108,   296,   308,   318,
     327,   101,   102,   103,   104,   105,   326,   305,   313,   106,
     107,   317,    39,   319,   108,   138,    82,   322,   141,   109,
     323,   189,   163,   164,   165,   166,   335,   167,   168,   309,
     342,   206,   314,   337,   338,   339,   340,   109,   196,   325,
     205,   207,   208,    29,    35
};

static const yytype_int16 yycheck[] =
{
      67,   128,    20,   142,    43,   136,   257,     5,     9,    14,
      26,    50,     5,    24,    26,     3,    55,    69,    26,    17,
      59,    24,    74,    21,    17,   276,    24,    66,    21,    72,
      24,    24,    75,    24,    27,     5,    75,    24,    36,    24,
      27,    39,   109,    36,    24,     5,    24,    17,    87,     0,
      51,    21,    91,    69,    24,   182,    68,    17,    65,    75,
      71,    21,   129,    75,    24,    70,    36,    75,    71,   136,
      24,     9,     5,    27,    72,   326,    36,    95,    69,    72,
      30,    31,    69,    68,   211,    61,   153,    12,    68,   156,
      68,    24,    25,    26,    30,    31,    61,    62,    68,    32,
      33,   259,    72,   230,   143,    30,   264,     4,   147,   230,
      42,    26,    72,    51,   272,    69,   155,    34,    35,    65,
      70,    24,    98,    44,    69,    24,    58,    44,    45,    74,
     148,    65,   259,    98,    70,    68,   263,   264,    39,    69,
     271,   299,   263,   210,    74,   272,    47,    48,    49,    50,
      51,   218,   219,    65,   293,    24,    77,    24,   297,     8,
     227,   300,    68,    12,    13,   204,    74,    16,    28,    29,
     309,    65,   299,    74,   213,    68,    36,    37,    38,    72,
      40,    30,    75,    43,    71,   324,   324,    74,   327,   327,
     257,     5,     6,    70,     8,     9,    30,    31,    12,    39,
      14,    65,    16,    24,   271,    19,    20,    39,   275,   276,
      24,    25,    26,    74,    70,   225,   226,    70,    32,    33,
      34,    35,    36,    73,     4,     5,    40,    41,     8,   296,
       5,    45,    60,     8,    59,    65,    24,    70,    65,    19,
      20,   308,    26,    69,    19,    20,     5,     6,    65,     8,
       9,    65,    74,    12,    68,    14,    70,    16,    58,    69,
      19,    20,    73,    24,     5,    24,    25,    26,    24,    65,
      42,    58,    58,    32,    33,    34,    35,    36,    71,    11,
      65,    40,    41,    24,    25,    26,    45,    65,    65,    11,
      11,    32,    33,    34,    35,    36,    65,   299,   307,    40,
      41,   310,    17,   312,    45,    86,    51,   316,    90,    68,
     316,    70,    61,    62,    63,    64,   329,    66,    67,   303,
     340,   162,   308,   332,   333,   334,   335,    68,   148,   319,
     161,   169,   174,     9,    16
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    77,   185,    24,   186,     0,    65,     4,   187,
     188,    26,    68,    75,   163,   190,   192,     5,     8,    19,
      20,    91,    93,    94,   111,   113,   114,   154,   157,   188,
     189,   190,   163,   191,    65,   191,    24,    68,    95,   105,
     112,    24,   155,    24,    68,   159,   160,   161,    24,    92,
     109,    65,    69,   190,    65,    27,    69,   106,   107,   109,
      81,    24,     5,    17,    21,    24,    36,    72,   115,   116,
     144,   145,   147,   151,   153,    39,   116,   158,   159,    74,
     110,   116,   114,    65,   116,    69,    74,    27,   116,    96,
     103,   105,    96,   103,   103,    70,   116,   152,     5,    24,
      25,    32,    33,    34,    35,    36,    40,    41,    45,    68,
     117,   118,   142,   143,   146,   162,   163,   164,   165,   166,
     167,   173,   174,   175,   176,   177,   178,   179,   183,    39,
     116,    69,   159,    65,    24,    74,    39,    69,   107,   116,
      82,    82,    97,    68,   104,   116,    71,   109,   148,   149,
      96,   103,   173,    70,   168,    73,    72,    75,   170,   171,
     172,    60,    59,    61,    62,    63,    64,    66,    67,   180,
      34,    35,    44,    45,   181,    28,    29,    36,    37,    38,
      40,    43,   182,   167,   173,    65,    24,   156,   173,    70,
      78,    98,   108,   116,   116,    71,   149,    65,    69,   169,
     173,   116,   173,    24,    68,   175,   176,   177,   178,   167,
      74,    79,    69,    74,    26,   150,    65,    71,    74,    58,
      73,   116,   173,     6,     9,    12,    14,    16,    24,    78,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    93,
      99,   100,   119,   120,   121,   122,   129,   156,   167,   173,
     116,   173,   173,    69,    24,    24,    79,    79,   173,    42,
      80,    84,    65,    58,    42,    39,    47,    48,    49,    50,
      51,   184,    68,    30,    31,    58,   138,    85,   173,   100,
     167,    71,    65,    84,   100,   156,   100,   101,   102,   167,
     173,    85,   130,   131,   132,   173,    65,   123,    69,    74,
     139,    78,   134,   173,    78,   102,    78,   137,    65,   123,
     124,   125,   140,    80,   130,   173,    78,    80,    11,    80,
     141,   135,    80,   125,   126,   141,    65,    11,    78,   122,
      85,   133,    78,   122,   127,   127,   136,    80,    80,    80,
      80,   128,   128
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    78,    79,    80,    81,    82,    83,    83,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    85,    85,    85,    86,    87,    88,    89,    89,    90,
      91,    92,    92,    93,    93,    93,    94,    94,    95,    97,
      96,    98,    99,    99,   100,   101,   101,   101,   102,   102,
     103,   103,   104,   104,   105,   105,   105,   106,   106,   107,
     107,   107,   108,   108,   109,   109,   110,   110,   111,   111,
     112,   113,   113,   114,   114,   114,   115,   115,   115,   115,
     116,   116,   117,   117,   117,   118,   119,   119,   120,   120,
     121,   121,   122,   122,   122,   122,   122,   122,   123,   124,
     125,   126,   127,   128,   129,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   144,   145,   146,   147,   147,   148,   148,   149,   149,
     150,   151,   152,   153,   154,   155,   155,   156,   156,   157,
     157,   158,   158,   159,   159,   160,   161,   162,   162,   163,
     164,   165,   165,   165,   165,   166,   167,   167,   167,   167,
     167,   168,   169,   169,   169,   170,   171,   172,   173,   174,
     174,   175,   175,   176,   176,   177,   177,   178,   178,   179,
     179,   180,   180,   180,   180,   180,   180,   181,   181,   181,
     181,   182,   182,   182,   182,   182,   182,   182,   183,   183,
     183,   183,   183,   183,   184,   184,   184,   184,   184,   184,
     185,   186,   187,   187,   187,   188,   188,   189,   189,   190,
     190,   190,   191,   192
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     5,     0,     0,     0,     0,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     3,     1,     2,     2,     3,
       2,     4,     2,     1,     1,     1,     5,     5,     1,     0,
       3,     1,     3,     3,     4,     3,     1,     0,     1,     1,
       1,     2,     3,     1,     2,     3,     4,     1,     3,     2,
       3,     2,     3,     1,     2,     1,     3,     2,     4,     4,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     1,     2,     1,
       2,     1,     7,     8,    11,    11,    12,    12,     0,     0,
       0,     0,     0,     0,     9,     8,     1,     8,     1,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     1,
       1,     1,     4,     1,     4,     3,     2,     3,     2,     3,
       1,     2,     1,     2,     2,     4,     2,     3,     1,     2,
       4,     3,     2,     1,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     2,     2,
       2,     3,     0,     3,     5,     2,     3,     4,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     1,     0,     3,     4,     3,     2,     2,
       2,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* StartFile: PackageClause SEMICOLON ImportDeclStar TopLevelDeclStar  */
#line 128 "src/parser.ypp"
                                                            {
		// cout << "I am inside the program" << endl;
		theprogram = new astnode("StartFile",false, {(yyvsp[-3].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 2004 "parser.tab.cpp"
    break;

  case 3: /* Block: LBRACE OPENB StatementList CLOSEB RBRACE  */
#line 134 "src/parser.ypp"
                                                 { (yyval.node) = newId((yyvsp[-2].node), "Block"); }
#line 2010 "parser.tab.cpp"
    break;

  case 4: /* OPENB: %empty  */
#line 138 "src/parser.ypp"
                  {
		(yyval.node) = new astnode();
		 currscope++;
		 fullscope = fullscope + "/" + to_string(currscope);
		 //cout<<fullscope<<endl;
	}
#line 2021 "parser.tab.cpp"
    break;

  case 5: /* CLOSEB: %empty  */
#line 147 "src/parser.ypp"
                  {
		(yyval.node) = new astnode();
		 fullscope = fullscope.substr(0, fullscope.find_last_of("/") );
		 //cout<<fullscope<<endl;
	}
#line 2031 "parser.tab.cpp"
    break;

  case 6: /* SYMTABS: %empty  */
#line 155 "src/parser.ypp"
                  {
		currscope++;
		fullscope = fullscope + "/" + to_string(currscope);
		symtab = new symtab_t;
		symtab_top[fullscope] = symtab;
		//cout<<fullscope<<endl;
	}
#line 2043 "parser.tab.cpp"
    break;

  case 7: /* SYMTABE: %empty  */
#line 165 "src/parser.ypp"
                  {
		print_symtab();
		delete symtab;
		symtab = symtab_top["0"];
		fullscope = "0";
	}
#line 2054 "parser.tab.cpp"
    break;

  case 8: /* StatementList: StatementList Statement SEMICOLON  */
#line 174 "src/parser.ypp"
                                      { (yyval.node) = new astnode("StatementList", false, {(yyvsp[-2].node), (yyvsp[-1].node)});}
#line 2060 "parser.tab.cpp"
    break;

  case 9: /* StatementList: Statement SEMICOLON  */
#line 175 "src/parser.ypp"
                          { (yyval.node) = newId((yyvsp[-1].node), "StatementList"); }
#line 2066 "parser.tab.cpp"
    break;

  case 10: /* Statement: Declaration  */
#line 179 "src/parser.ypp"
                    {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2072 "parser.tab.cpp"
    break;

  case 11: /* Statement: LabeledStmt  */
#line 180 "src/parser.ypp"
                      {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2078 "parser.tab.cpp"
    break;

  case 12: /* Statement: SimpleStmt  */
#line 181 "src/parser.ypp"
                     {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2084 "parser.tab.cpp"
    break;

  case 13: /* Statement: ReturnStmt  */
#line 182 "src/parser.ypp"
                     {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2090 "parser.tab.cpp"
    break;

  case 14: /* Statement: BreakStmt  */
#line 183 "src/parser.ypp"
                    {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2096 "parser.tab.cpp"
    break;

  case 15: /* Statement: ContinueStmt  */
#line 184 "src/parser.ypp"
                       {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2102 "parser.tab.cpp"
    break;

  case 16: /* Statement: Block  */
#line 185 "src/parser.ypp"
                {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2108 "parser.tab.cpp"
    break;

  case 17: /* Statement: IfStmt  */
#line 186 "src/parser.ypp"
                 {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2114 "parser.tab.cpp"
    break;

  case 18: /* Statement: ForStmt  */
#line 187 "src/parser.ypp"
                  {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2120 "parser.tab.cpp"
    break;

  case 19: /* Statement: FunctionCall  */
#line 188 "src/parser.ypp"
                       {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2126 "parser.tab.cpp"
    break;

  case 20: /* Statement: FunctionStmt  */
#line 189 "src/parser.ypp"
                       {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2132 "parser.tab.cpp"
    break;

  case 21: /* SimpleStmt: EmptyStmt  */
#line 193 "src/parser.ypp"
                  {(yyval.node) = newId((yyvsp[0].node), "SimpleStmt");}
#line 2138 "parser.tab.cpp"
    break;

  case 22: /* SimpleStmt: IncDecStmt  */
#line 194 "src/parser.ypp"
                     {(yyval.node) = newId((yyvsp[0].node), "SimpleStmt");}
#line 2144 "parser.tab.cpp"
    break;

  case 23: /* SimpleStmt: Assignment  */
#line 195 "src/parser.ypp"
                     {(yyval.node) = newId((yyvsp[0].node), "SimpleStmt");}
#line 2150 "parser.tab.cpp"
    break;

  case 24: /* EmptyStmt: %empty  */
#line 199 "src/parser.ypp"
                  { (yyval.node) = new astnode(); }
#line 2156 "parser.tab.cpp"
    break;

  case 25: /* LabeledStmt: Label COLON Statement  */
#line 203 "src/parser.ypp"
                              {(yyval.node) = new astnode("LabeledStmt", false, {(yyvsp[-2].node), new astnode(COLON), (yyvsp[0].node)});}
#line 2162 "parser.tab.cpp"
    break;

  case 26: /* Label: IDENTIFIER  */
#line 207 "src/parser.ypp"
                   {
		(yyval.node) = new astnode(IDENTIFIER, (yyvsp[0].data));
		(yyval.node)->data=(yyvsp[0].data);
	}
#line 2171 "parser.tab.cpp"
    break;

  case 27: /* IncDecStmt: Expression INC  */
#line 214 "src/parser.ypp"
                       {
		(yyval.node) = new astnode("IncDecStmt", false, {(yyvsp[-1].node), new astnode(INC, (yyvsp[0].data))});
			string tac;
			tac.append(to_string(lineno));
			tac.append(",");
			tac.append("+");
			tac.append(",");
			tac.append((yyvsp[-1].node)->data->value);
			tac.append(",");
			tac.append((yyvsp[-1].node)->data->value);
			tac.append(",");
			tac.append("1");
			tac.append("\n");
			prog.push_back(tac);
			lineno++;
		}
#line 2192 "parser.tab.cpp"
    break;

  case 28: /* IncDecStmt: Expression DEC  */
#line 230 "src/parser.ypp"
                         {
		(yyval.node) = new astnode("IncDecStmt", false, {(yyvsp[-1].node), new astnode(DEC, (yyvsp[0].data))});
		string tac;
		tac.append(to_string(lineno));
		tac.append(",");
		tac.append("-");
		tac.append(",");
		tac.append((yyvsp[-1].node)->data->value);
		tac.append(",");
		tac.append((yyvsp[-1].node)->data->value);
		tac.append(",");
		tac.append("1");
		tac.append("\n");
		prog.push_back(tac);
		lineno++;
	}
#line 2213 "parser.tab.cpp"
    break;

  case 29: /* Assignment: ExpressionList assign_op ExpressionList  */
#line 249 "src/parser.ypp"
                                                {
		(yyval.node) = new astnode("Assignment", false, {(yyvsp[-2].node),(yyvsp[-1].node), (yyvsp[0].node)});
		string temp1 = (yyvsp[-2].node)->data->value;
		string temp2 = (yyvsp[0].node)->data->value;
		vector <string> expr1 = split(temp1, ',');
		vector <string> expr2 = split(temp2, ',');

		// if there are unequal number of elements in either side of the assignment
		cout << temp1 << " " << temp2 << endl;
		if(expr1.size() != expr2.size()){
			cout<<"Error: Incompatible assignment"<<endl;
			// probably shouldn't be putting exit(0) here not sure though
			exit(0);
		}

		// if it is a valid assignment
		else {
			string op = (yyvsp[-1].node)->data->value;

			if (op == "+=") {
				op = "+";
			}
			else if (op == "-=") {
				op = "-";
			}
			else if (op == "*=") {
				op = "*";
			}
			else if (op == "/=") {
				op = "/";
			}
			else if (op == "%=") {
				op = "%";
			}

			if (op == "=") {
				for (int i = 0; i < expr1.size(); i++) {
					string tac;
					tac.append(to_string(lineno));
					tac.append(",");
					tac.append("=");
					tac.append(",");
					tac.append(expr1[i]);
					tac.append(",");
					tac.append(expr2[i]);
					tac.append("\n");
					prog.push_back(tac);
					lineno++;
				}
			}
			else {
				for (int i = 0; i< expr1.size(); i++) {
					string tac;
					tac.append(to_string(lineno));
					tac.append(",");
					tac.append(op );
					tac.append(",");
					tac.append(expr1[i]);
					tac.append(",");
					tac.append(expr1[i]);
					tac.append(",");
					tac.append(expr2[i]);
					tac.append("\n");
					prog.push_back(tac);
					lineno++;
				}
			}
		}
	}
#line 2287 "parser.tab.cpp"
    break;

  case 30: /* VarDecl: VAR VarSpec  */
#line 321 "src/parser.ypp"
                            {(yyval.node) = new astnode("VarDecl", false, {new astnode(VAR, (yyvsp[-1].data)), (yyvsp[0].node)});}
#line 2293 "parser.tab.cpp"
    break;

  case 31: /* VarSpec: IdentifierList Type ASSIGN ExpressionList  */
#line 327 "src/parser.ypp"
                                          { (yyval.node) = new astnode((yyvsp[-2].node)->type,"VarSpec", false, {(yyvsp[-3].node), (yyvsp[-2].node), new astnode(ASSIGN, (yyvsp[-1].data)),  (yyvsp[0].node)});
			string temp1 = (yyvsp[-3].node)->data->value;
			string temp2 = (yyvsp[0].node)->data->value;
			vector <string> expr1 = split(temp1, ',');
			vector <string> expr2 = split(temp2, ',');

			if (expr1.size() != expr2.size()) {
				cout<<"Error: Incompatible assignment"<<endl;
				exit(0);
			}
			else {
				symadd_list((yyvsp[-3].node), (yyvsp[-2].node)->type, IDENTIFIER);
				for (int i = 0; i < expr1.size(); i++) {
					string tac;
					tac.append(to_string(lineno));
					tac.append(",");
					tac.append((yyvsp[-1].data)->value);
					tac.append(",");
					tac.append(expr1[i]);
					tac.append(",");
					tac.append(expr2[i]);
					tac.append("\n");
					prog.push_back(tac);
					lineno++;
				}
			}
		}
#line 2325 "parser.tab.cpp"
    break;

  case 32: /* VarSpec: IdentifierList Type  */
#line 354 "src/parser.ypp"
                                      {(yyval.node) = new astnode((yyvsp[0].node)->type,"VarSpec", false, {(yyvsp[-1].node), (yyvsp[0].node)});
			symadd_list((yyvsp[-1].node), (yyvsp[0].node)->type, IDENTIFIER);
			string temp1 = (yyvsp[-1].node)->data->value;
			string temp2 = (yyvsp[0].node)->data->value;
			
			Type* typeInfo = (yyvsp[0].node)->type;
			
			if (typeInfo->typeClass == ARRAY_TYPE) {
				ArrayType* arrayTypeInfo = (ArrayType*) typeInfo;
				string length = to_string(arrayTypeInfo->arrayLength);
				string tac = to_string(lineno);
				tac.append(",array,");
				tac.append(temp1);
				tac.append(",");
				tac.append(length);
				tac.append("\n");
				prog.push_back(tac);
				lineno++;
			}
		}
#line 2350 "parser.tab.cpp"
    break;

  case 33: /* Declaration: ConstDecl  */
#line 377 "src/parser.ypp"
                  {
		(yyval.node) = newId((yyvsp[0].node), "Declaration");
		// nahi kr rha abhi toh
	}
#line 2359 "parser.tab.cpp"
    break;

  case 34: /* Declaration: TypeDecl  */
#line 381 "src/parser.ypp"
                   {
		(yyval.node) = newId((yyvsp[0].node), "Declaration");
		// nahi kr rha abhi toh
	}
#line 2368 "parser.tab.cpp"
    break;

  case 35: /* Declaration: VarDecl  */
#line 385 "src/parser.ypp"
                  {
		(yyval.node) = newId((yyvsp[0].node), "Declaration");
		// nahi kr rha abhi toh
	}
#line 2377 "parser.tab.cpp"
    break;

  case 36: /* FunctionDecl: FUNC FunctionName SYMTABS Function SYMTABE  */
#line 393 "src/parser.ypp"
                                                           { (yyval.node) = new astnode("FunctionDecl", false, {(yyvsp[-3].node), (yyvsp[-1].node)});
			symadd((yyvsp[-3].node)->data->value, (yyvsp[-1].node)->type);
		}
#line 2385 "parser.tab.cpp"
    break;

  case 37: /* FunctionDecl: FUNC FunctionName SYMTABS Signature SYMTABE  */
#line 396 "src/parser.ypp"
                                                              { (yyval.node) = new astnode("FunctionDecl", false, {(yyvsp[-3].node), (yyvsp[-1].node)});
			symadd((yyvsp[-3].node)->data->value, (yyvsp[-1].node)->type);
		}
#line 2393 "parser.tab.cpp"
    break;

  case 38: /* FunctionName: IDENTIFIER  */
#line 403 "src/parser.ypp"
                           {(yyval.node) = new astnode(IDENTIFIER, (yyvsp[0].data));
			// TODO:: Ashutosh
			(yyval.node)->data=(yyvsp[0].data);
			string temp_str = (yyvsp[0].data)->value;
			string tac = to_string(lineno) + ",function," + (yyvsp[0].data)->value + "\n";
			prog.push_back(tac);
			lineno++;
		}
#line 2406 "parser.tab.cpp"
    break;

  case 39: /* $@1: %empty  */
#line 414 "src/parser.ypp"
                          {fullscope=fullscope.substr(0,fullscope.find_last_of("/"));currscope--;}
#line 2412 "parser.tab.cpp"
    break;

  case 40: /* Function: Signature $@1 FunctionBody  */
#line 414 "src/parser.ypp"
                                                                                                                {
			fullscope = fullscope +"/"+ to_string(currscope);
			(yyval.node) = new astnode((yyvsp[-2].node)->type,"Function", false, {(yyvsp[-2].node), (yyvsp[0].node)});
		}
#line 2421 "parser.tab.cpp"
    break;

  case 41: /* FunctionBody: Block  */
#line 421 "src/parser.ypp"
                      {(yyval.node) = newId((yyvsp[0].node), "FunctionBody");}
#line 2427 "parser.tab.cpp"
    break;

  case 42: /* FunctionStmt: VarDecl DEFINE FunctionCall  */
#line 425 "src/parser.ypp"
                                            {(yyval.node) = new astnode("FunctionStmt", false, {(yyvsp[-2].node), (yyvsp[0].node)});
			string tac;
			tac = to_string(lineno) + "," + "getreturn," + (yyvsp[-2].node)->data->value + "\n";
			prog.push_back(tac);
			lineno++;
		}
#line 2438 "parser.tab.cpp"
    break;

  case 43: /* FunctionStmt: IDENTIFIER DEFINE FunctionCall  */
#line 431 "src/parser.ypp"
                                                 {(yyval.node) = new astnode("FunctionStmt", false, {new astnode(IDENTIFIER, (yyvsp[-2].data)), (yyvsp[0].node)});
			string tac;
			tac = to_string(lineno) + "," + "getreturn," + (yyvsp[-2].data)->value + "\n";
			prog.push_back(tac);
			lineno++;
		}
#line 2449 "parser.tab.cpp"
    break;

  case 44: /* FunctionCall: PrimaryExpr LPAREN ArgumentList RPAREN  */
#line 440 "src/parser.ypp"
                                                       {(yyval.node) = new astnode("FunctionCall", false, {(yyvsp[-3].node), (yyvsp[-1].node)});
			string str1 = (yyvsp[-3].node)->data->value;
			string str2 = "print";
			string str3 = "fmt.Println";
			if(is_argument_list_empty.top() != 1) {
				string temp_str = (yyvsp[-1].node)->data->value;
				vector <string> vec_arguments = split(temp_str, ',');
					if(str1 != str2 && str1 !=str3){
						//param here
						for(int i=0;i<vec_arguments.size();i++){
							string tac;
							tac = to_string(lineno) + ",param," + vec_arguments[i] + "\n";
							prog.push_back(tac);
							lineno++;
						}
						string tac;
						tac = to_string(lineno) + ",call," + (yyvsp[-3].node)->data->value + "," + to_string(vec_arguments.size()) + "\n";
						prog.push_back(tac);
						lineno++;
					} else {
						//printing part
						for(int i=0;i<vec_arguments.size();i++){
							string tac;
							tac = to_string(lineno) + ",print," + vec_arguments[i] + "\n";
							prog.push_back(tac);
							lineno++;
						}
				}
			}
			else {
				is_argument_list_empty.pop();
				string tac;
				tac = to_string(lineno) + ",call," + (yyvsp[-3].node)->data->value + ",0" + "\n";
				prog.push_back(tac);
				lineno++;

			}
		}
#line 2492 "parser.tab.cpp"
    break;

  case 45: /* ArgumentList: ArgumentList COMMA Arguments  */
#line 481 "src/parser.ypp"
                                             {(yyval.node) = new astnode("ArgumentList", false, {(yyvsp[-2].node), (yyvsp[0].node)});
			argumentlist_str = (yyvsp[-2].node)->data->value + "," + (yyvsp[0].node)->data->value;
			(yyval.node)->data->value = argumentlist_str;
		}
#line 2501 "parser.tab.cpp"
    break;

  case 46: /* ArgumentList: Arguments  */
#line 485 "src/parser.ypp"
                            {(yyval.node) = newId((yyvsp[0].node), "ArgumentList");}
#line 2507 "parser.tab.cpp"
    break;

  case 47: /* ArgumentList: %empty  */
#line 486 "src/parser.ypp"
                            { (yyval.node) = new astnode();
			is_argument_list_empty.push(1);
		}
#line 2515 "parser.tab.cpp"
    break;

  case 48: /* Arguments: PrimaryExpr  */
#line 491 "src/parser.ypp"
                            {(yyval.node) = newId((yyvsp[0].node), "Arguments");}
#line 2521 "parser.tab.cpp"
    break;

  case 49: /* Arguments: FunctionCall  */
#line 492 "src/parser.ypp"
                               {(yyval.node) = newId((yyvsp[0].node), "Arguments");}
#line 2527 "parser.tab.cpp"
    break;

  case 50: /* Signature: Parameters  */
#line 496 "src/parser.ypp"
                   {
		(yyval.node) = newId((yyvsp[0].node), "Signature");
		 
	}
#line 2536 "parser.tab.cpp"
    break;

  case 51: /* Signature: Parameters Result  */
#line 500 "src/parser.ypp"
                            {(yyval.node) = new astnode(new FunctionType((yyvsp[-1].node)->type->getType(), (yyvsp[0].node)->type->getType()) ,"Signature", false, {(yyvsp[-1].node), (yyvsp[0].node)});}
#line 2542 "parser.tab.cpp"
    break;

  case 52: /* Result: LPAREN TypeList RPAREN  */
#line 504 "src/parser.ypp"
                               {(yyval.node) = newId((yyvsp[-1].node), "Result");}
#line 2548 "parser.tab.cpp"
    break;

  case 53: /* Result: Type  */
#line 505 "src/parser.ypp"
               {(yyval.node) = newId((yyvsp[0].node), "Result");}
#line 2554 "parser.tab.cpp"
    break;

  case 54: /* Parameters: LPAREN RPAREN  */
#line 509 "src/parser.ypp"
                      {(yyval.node) = new astnode(new FunctionType("",""), LPAREN);
		(yyval.node)->data->value = "";
	}
#line 2562 "parser.tab.cpp"
    break;

  case 55: /* Parameters: LPAREN ParameterDeclStar RPAREN  */
#line 512 "src/parser.ypp"
                                          {(yyval.node) = newId((yyvsp[-1].node), "Parameters");
		string temp_str = (yyvsp[-1].node)->data->value;
		vector <string> vec_params = split(temp_str, ',');
		for(int i= vec_params.size()-1;i>=0;i--){
			string tac = to_string(lineno) + ",pop," + vec_params[i] + "\n";
			prog.push_back(tac);
			lineno++;
		}
	}
#line 2576 "parser.tab.cpp"
    break;

  case 56: /* Parameters: LPAREN ParameterDeclStar COMMA RPAREN  */
#line 521 "src/parser.ypp"
                                                {(yyval.node) = newId((yyvsp[-2].node), "Parameters");}
#line 2582 "parser.tab.cpp"
    break;

  case 57: /* ParameterDeclStar: ParameterDecl  */
#line 525 "src/parser.ypp"
                      {(yyval.node) = newId((yyvsp[0].node), "ParameterDeclStar");}
#line 2588 "parser.tab.cpp"
    break;

  case 58: /* ParameterDeclStar: ParameterDeclStar COMMA ParameterDecl  */
#line 526 "src/parser.ypp"
                                                {(yyval.node) = new astnode(new FunctionType((yyvsp[-2].node)->type->getType() + " " +(yyvsp[0].node)->type->getType(), ""), "ParameterDeclStar", false, {(yyvsp[-2].node), (yyvsp[0].node)});
		string temp_str = (yyvsp[-2].node)->data->value + "," + (yyvsp[0].node)->data->value;
		(yyval.node)->data->value = temp_str;
	}
#line 2597 "parser.tab.cpp"
    break;

  case 59: /* ParameterDecl: IdentifierList Type  */
#line 533 "src/parser.ypp"
                            {
		int num_ele = symadd_list((yyvsp[-1].node), (yyvsp[0].node)->type, IDENTIFIER);
		(yyval.node) = new astnode(new FunctionType( to_string(num_ele)+"."+(yyvsp[0].node)->type->getType(), "") ,"ParameterDecl", false, {(yyvsp[-1].node), (yyvsp[0].node)});
	}
#line 2606 "parser.tab.cpp"
    break;

  case 60: /* ParameterDecl: IdentifierList ELLIPSIS Type  */
#line 537 "src/parser.ypp"
                                        {(yyval.node) = new astnode("ParameterDecl", false, {(yyvsp[-2].node), new astnode(ELLIPSIS,(yyvsp[-1].data)), (yyvsp[0].node)});}
#line 2612 "parser.tab.cpp"
    break;

  case 61: /* ParameterDecl: ELLIPSIS Type  */
#line 538 "src/parser.ypp"
                        {(yyval.node) = new astnode("ParameterDecl", false, {new astnode(ELLIPSIS, (yyvsp[-1].data)), (yyvsp[0].node)});}
#line 2618 "parser.tab.cpp"
    break;

  case 62: /* TypeList: TypeList COMMA Type  */
#line 542 "src/parser.ypp"
                        {(yyval.node) = new astnode("TypeList", false, {(yyvsp[-2].node), (yyvsp[0].node)});}
#line 2624 "parser.tab.cpp"
    break;

  case 63: /* TypeList: Type  */
#line 543 "src/parser.ypp"
           {(yyval.node) = new astnode("TypeList", false, {(yyvsp[0].node)});}
#line 2630 "parser.tab.cpp"
    break;

  case 64: /* IdentifierList: IDENTIFIER IdentifierLIST  */
#line 547 "src/parser.ypp"
                                          {(yyval.node) = new astnode("IdentifierList", false, {new astnode(IDENTIFIER, (yyvsp[-1].data)), (yyvsp[0].node)});
			string temp_str = (yyvsp[-1].data)->value + (yyvsp[0].node)->data->value;
			(yyval.node)->data->value = temp_str;
		}
#line 2639 "parser.tab.cpp"
    break;

  case 65: /* IdentifierList: IDENTIFIER  */
#line 551 "src/parser.ypp"
                             {(yyval.node) = new astnode(IDENTIFIER, (yyvsp[0].data));
			(yyval.node)->data = (yyvsp[0].data);
		}
#line 2647 "parser.tab.cpp"
    break;

  case 66: /* IdentifierLIST: IdentifierLIST COMMA IDENTIFIER  */
#line 556 "src/parser.ypp"
                                                { (yyval.node) = new astnode("IdentifierLIST", false, {(yyvsp[-2].node), new astnode(IDENTIFIER, (yyvsp[0].data))});
			string temp_str = (yyvsp[-2].node)->data->value + "," + (yyvsp[0].data)->value;
			(yyval.node)->data->value = temp_str;
		}
#line 2656 "parser.tab.cpp"
    break;

  case 67: /* IdentifierLIST: COMMA IDENTIFIER  */
#line 560 "src/parser.ypp"
                                   {(yyval.node) = new astnode(IDENTIFIER, (yyvsp[0].data));
			string temp_str = "," + (yyvsp[0].data)->value;
			(yyval.node)->data->value = temp_str;
		}
#line 2665 "parser.tab.cpp"
    break;

  case 68: /* MethodDecl: FUNC Receiver IDENTIFIER Function  */
#line 567 "src/parser.ypp"
                                          {(yyval.node) = new astnode("MethodDecl", false, {(yyvsp[-2].node), (yyvsp[0].node)});}
#line 2671 "parser.tab.cpp"
    break;

  case 69: /* MethodDecl: FUNC Receiver IDENTIFIER Signature  */
#line 568 "src/parser.ypp"
                                             {(yyval.node) = new astnode("MethodDecl", false, {(yyvsp[-2].node), (yyvsp[0].node)});}
#line 2677 "parser.tab.cpp"
    break;

  case 70: /* Receiver: Parameters  */
#line 572 "src/parser.ypp"
                   {(yyval.node) = newId((yyvsp[0].node), "Receiver");}
#line 2683 "parser.tab.cpp"
    break;

  case 71: /* TopLevelDeclStar: TopLevelDeclStar SEMICOLON TopLevelDecl  */
#line 576 "src/parser.ypp"
                                                          {(yyval.node) = new astnode("TopLevelDeclStar", false, {(yyvsp[-2].node), (yyvsp[0].node)});}
#line 2689 "parser.tab.cpp"
    break;

  case 72: /* TopLevelDeclStar: TopLevelDecl  */
#line 577 "src/parser.ypp"
                   {(yyval.node) = newId((yyvsp[0].node), "TopLevelDeclStar");}
#line 2695 "parser.tab.cpp"
    break;

  case 73: /* TopLevelDecl: Declaration  */
#line 581 "src/parser.ypp"
                    {(yyval.node) = newId((yyvsp[0].node), "TopLevelDecl");}
#line 2701 "parser.tab.cpp"
    break;

  case 74: /* TopLevelDecl: FunctionDecl  */
#line 582 "src/parser.ypp"
                       {(yyval.node) = newId((yyvsp[0].node), "TopLevelDecl");}
#line 2707 "parser.tab.cpp"
    break;

  case 75: /* TopLevelDecl: MethodDecl  */
#line 583 "src/parser.ypp"
                     {(yyval.node) = newId((yyvsp[0].node), "TopLevelDecl");}
#line 2713 "parser.tab.cpp"
    break;

  case 76: /* TypeLit: ArrayType  */
#line 587 "src/parser.ypp"
                  {(yyval.node) = newId((yyvsp[0].node), "TypeLit");}
#line 2719 "parser.tab.cpp"
    break;

  case 77: /* TypeLit: StructType  */
#line 588 "src/parser.ypp"
                     {(yyval.node) = newId((yyvsp[0].node), "TypeLit");}
#line 2725 "parser.tab.cpp"
    break;

  case 78: /* TypeLit: PointerType  */
#line 589 "src/parser.ypp"
                      {(yyval.node) = newId((yyvsp[0].node), "TypeLit");}
#line 2731 "parser.tab.cpp"
    break;

  case 79: /* TypeLit: FunctionType  */
#line 590 "src/parser.ypp"
                       {(yyval.node) = newId((yyvsp[0].node), "TypeLit");}
#line 2737 "parser.tab.cpp"
    break;

  case 80: /* Type: TypeName  */
#line 594 "src/parser.ypp"
                 {(yyval.node) = newId((yyvsp[0].node), "Type");}
#line 2743 "parser.tab.cpp"
    break;

  case 81: /* Type: TypeLit  */
#line 595 "src/parser.ypp"
                  {(yyval.node) = newId((yyvsp[0].node), "Type");}
#line 2749 "parser.tab.cpp"
    break;

  case 82: /* Operand: Literal  */
#line 599 "src/parser.ypp"
                {(yyval.node) = newId((yyvsp[0].node), "Operand");}
#line 2755 "parser.tab.cpp"
    break;

  case 83: /* Operand: OperandName  */
#line 600 "src/parser.ypp"
                      {(yyval.node) = newId((yyvsp[0].node), "Operand");}
#line 2761 "parser.tab.cpp"
    break;

  case 84: /* Operand: LPAREN Expression RPAREN  */
#line 601 "src/parser.ypp"
                                   {(yyval.node) = newId((yyvsp[-1].node), "Operand");}
#line 2767 "parser.tab.cpp"
    break;

  case 85: /* OperandName: IDENTIFIER  */
#line 605 "src/parser.ypp"
                   {(yyval.node) = new astnode(IDENTIFIER);
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 2775 "parser.tab.cpp"
    break;

  case 86: /* ReturnStmt: RETURN Expression  */
#line 611 "src/parser.ypp"
                          {(yyval.node) = newId((yyvsp[0].node), "ReturnStmt");
		string tac = to_string(lineno) + ",return," + (yyvsp[0].node)->data->value + "\n";
		prog.push_back(tac);
	}
#line 2784 "parser.tab.cpp"
    break;

  case 87: /* ReturnStmt: RETURN  */
#line 615 "src/parser.ypp"
                 {(yyval.node) = new astnode(RETURN);
		string tac = to_string(lineno) + ",exit" + "\n";
		prog.push_back(tac);
		lineno++;
		(yyval.node)->data->value = "";
	}
#line 2795 "parser.tab.cpp"
    break;

  case 88: /* BreakStmt: BREAK IDENTIFIER  */
#line 624 "src/parser.ypp"
                         {(yyval.node) = new astnode("BreakStmt", false, {new astnode(BREAK, (yyvsp[-1].data)), new astnode(IDENTIFIER, (yyvsp[0].data))});}
#line 2801 "parser.tab.cpp"
    break;

  case 89: /* BreakStmt: BREAK  */
#line 625 "src/parser.ypp"
                {(yyval.node) = new astnode(BREAK);
		string tac = to_string(lineno) + ",goto," + for_endlabels.top() + "\n";
		prog.push_back(tac);
		lineno++;
	}
#line 2811 "parser.tab.cpp"
    break;

  case 90: /* ContinueStmt: CONTINUE IDENTIFIER  */
#line 633 "src/parser.ypp"
                            {(yyval.node) = new astnode("ContinueStmt", false, {new astnode(BREAK, (yyvsp[-1].data)), new astnode(IDENTIFIER, (yyvsp[0].data))});}
#line 2817 "parser.tab.cpp"
    break;

  case 91: /* ContinueStmt: CONTINUE  */
#line 634 "src/parser.ypp"
                   {(yyval.node) = new astnode(CONTINUE);}
#line 2823 "parser.tab.cpp"
    break;

  case 92: /* IfStmt: IF OPENB Expression if_mark1 Block if_mark2 CLOSEB  */
#line 638 "src/parser.ypp"
                                                           {(yyval.node) = new astnode("IfStmt", false, {(yyvsp[-4].node), (yyvsp[-2].node)});}
#line 2829 "parser.tab.cpp"
    break;

  case 93: /* IfStmt: IF OPENB SimpleStmt SEMICOLON Expression if_mark1 Block CLOSEB  */
#line 639 "src/parser.ypp"
                                                                        {(yyval.node) = new astnode("IfStmt", false, {(yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node)});}
#line 2835 "parser.tab.cpp"
    break;

  case 94: /* IfStmt: IF OPENB SimpleStmt SEMICOLON Expression if_mark1 Block if_markend1 ELSE IfStmt CLOSEB  */
#line 640 "src/parser.ypp"
                                                                                                {(yyval.node) = new astnode("IfStmt", false, {(yyvsp[-8].node), (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-1].node)});}
#line 2841 "parser.tab.cpp"
    break;

  case 95: /* IfStmt: IF OPENB SimpleStmt SEMICOLON Expression if_mark1 Block if_markend1 ELSE Block CLOSEB  */
#line 641 "src/parser.ypp"
                                                                                                {(yyval.node) = new astnode("IfStmt", false, {(yyvsp[-8].node), (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-1].node)});}
#line 2847 "parser.tab.cpp"
    break;

  case 96: /* IfStmt: IF OPENB Expression if_mark1 Block if_markend1 ELSE if_mark22 IfStmt if_markend2 CLOSEB if_markend  */
#line 642 "src/parser.ypp"
                                                                                                            {(yyval.node) = new astnode("IfStmt", false, {(yyvsp[-9].node), (yyvsp[-7].node), (yyvsp[-3].node)});}
#line 2853 "parser.tab.cpp"
    break;

  case 97: /* IfStmt: IF OPENB Expression if_mark1 Block if_markend1 ELSE if_mark22 Block if_markend2 CLOSEB if_markend  */
#line 643 "src/parser.ypp"
                                                                                                            {(yyval.node) = new astnode("IfStmt", false, {(yyvsp[-9].node), (yyvsp[-7].node), (yyvsp[-3].node)});}
#line 2859 "parser.tab.cpp"
    break;

  case 98: /* if_mark1: %empty  */
#line 646 "src/parser.ypp"
          {
	string tac;
	tac = to_string(lineno) + ",ifgoto,=,";
	string togo_label = get_label();
	tac = "t"+to_string(tempno-1)+",1,"+togo_label+"\n";
	prog.push_back(tac);
	lineno++;
	//
	tac=to_string(lineno) + "," + "goto," ;
	string topush_label = get_label();
	if_bwlabels.push(topush_label);
	tac = tac + topush_label+"\n";//TO correct
	prog.push_back(tac);
	lineno++;
	//
	tac=to_string(lineno) + ",label," + togo_label + "\n";
	prog.push_back(tac);
	lineno++;
}
#line 2883 "parser.tab.cpp"
    break;

  case 99: /* if_mark2: %empty  */
#line 666 "src/parser.ypp"
          {
	string tac;
	tac=to_string(lineno) + ",label,";
	string toget_label = if_bwlabels.top();
	if_bwlabels.pop();
	tac = tac + toget_label+"\n";//TO correct
	prog.push_back(tac);
	lineno++;
}
#line 2897 "parser.tab.cpp"
    break;

  case 100: /* if_markend1: %empty  */
#line 676 "src/parser.ypp"
             {
		string tac;
		//
		tac=to_string(lineno) + ",goto,";
		string topush_label = get_label();
		if_endlabels.push(topush_label);
		tac = tac + topush_label+"\n";//TO correct
		prog.push_back(tac);
		lineno++;
		//
	}
#line 2913 "parser.tab.cpp"
    break;

  case 101: /* if_mark22: %empty  */
#line 688 "src/parser.ypp"
           {
		string tac;
		tac=to_string(lineno) + ",label,";
		string toget_label = if_bwlabels.top();
		if_bwlabels.pop();
		tac = tac + toget_label+"\n";//TO correct
		prog.push_back(tac);
		lineno++;
	}
#line 2927 "parser.tab.cpp"
    break;

  case 102: /* if_markend2: %empty  */
#line 698 "src/parser.ypp"
             {
		string tac;
		tac=to_string(lineno) + ",goto,";
		string toget_label = if_endlabels.top();
		tac = tac + toget_label+"\n";//TO correct
		prog.push_back(tac);
		lineno++;
	}
#line 2940 "parser.tab.cpp"
    break;

  case 103: /* if_markend: %empty  */
#line 706 "src/parser.ypp"
            {
		string tac;
		tac=to_string(lineno) + ",label,";
		string togo_label = if_endlabels.top();	//top of second stack
		if_endlabels.pop();				//pop here
		tac = tac + togo_label+"\n";//TO correct
		prog.push_back(tac);
		lineno++;
	}
#line 2954 "parser.tab.cpp"
    break;

  case 104: /* ForStmt: FOR OPENB for_initmark Condition for_mark1 Block for_mark2 CLOSEB for_markend1  */
#line 717 "src/parser.ypp"
                                                                                       {(yyval.node) = new astnode("ForStmt", false, {(yyvsp[-5].node), (yyvsp[-3].node)});}
#line 2960 "parser.tab.cpp"
    break;

  case 105: /* ForStmt: FOR OPENB for_initmark ForClause Block for_mark22 CLOSEB for_markend1  */
#line 718 "src/parser.ypp"
                                                                               {(yyval.node) = new astnode("ForStmt", false, {(yyvsp[-4].node), (yyvsp[-3].node)});}
#line 2966 "parser.tab.cpp"
    break;

  case 106: /* Condition: Expression  */
#line 722 "src/parser.ypp"
                   {(yyval.node) = newId((yyvsp[0].node), "Condition");}
#line 2972 "parser.tab.cpp"
    break;

  case 107: /* ForClause: InitStmt for_clause_mark1 SEMICOLON Condition for_clause_mark2 SEMICOLON PostStmt for_clause_mark3  */
#line 726 "src/parser.ypp"
                                                                                                           {(yyval.node) = new astnode("ForClause", false, {(yyvsp[-7].node), (yyvsp[-4].node), (yyvsp[-1].node)});}
#line 2978 "parser.tab.cpp"
    break;

  case 108: /* InitStmt: SimpleStmt  */
#line 730 "src/parser.ypp"
                   {(yyval.node) = newId((yyvsp[0].node), "InitStmt");}
#line 2984 "parser.tab.cpp"
    break;

  case 109: /* PostStmt: SimpleStmt  */
#line 734 "src/parser.ypp"
                   {(yyval.node) = newId((yyvsp[0].node), "InitStmt");}
#line 2990 "parser.tab.cpp"
    break;

  case 110: /* for_clause_mark1: %empty  */
#line 737 "src/parser.ypp"
                 {
		for_initlabels.pop();
		for_continuelabels.pop();
		string tac;
		tac = to_string(lineno);
		string for_initlabel = get_label();
		tac = tac + ",label,"+for_initlabel+"\n";
		for_initlabels.push(for_initlabel);
		for_continuelabels.push(for_initlabel);
		prog.push_back(tac);
		lineno++;

	}
#line 3008 "parser.tab.cpp"
    break;

  case 111: /* for_clause_mark2: %empty  */
#line 751 "src/parser.ypp"
                  {
		//
		string tac;
		tac=to_string(lineno) + ",ifgoto,=,";
		string togo_label = get_label();
		tac = tac + "t"+to_string(tempno-1)+",1,"+togo_label+"\n";
		prog.push_back(tac);
		lineno++;
		//
		tac=to_string(lineno) + ",goto,";
		string for_endlabel = get_label();
		tac = tac + for_endlabel+"\n";
		for_endlabels.push(for_endlabel);
		prog.push_back(tac);
		lineno++;
		//
		tac=to_string(lineno) + ",label," + togo_label+"\n";
		prog.push_back(tac);
		lineno++;
		//
		//
		tac=to_string(lineno) + ",goto,";
		string for_blocklabel = get_label();
		tac = tac + for_blocklabel+"\n";
		for_blocklabels.push(for_blocklabel);
		prog.push_back(tac);
		lineno++;
		//
		tac=to_string(lineno) + ",label,";
		string for_postlabel = get_label();
		tac = tac + for_postlabel+"\n";
		for_postlabels.push(for_postlabel);
		prog.push_back(tac);
		lineno++;

	}
#line 3049 "parser.tab.cpp"
    break;

  case 112: /* for_clause_mark3: %empty  */
#line 789 "src/parser.ypp"
                {
		//
		string tac;
		tac=to_string(lineno) + ",goto,";
		string togo_label = for_initlabels.top();
		for_initlabels.pop();
		//for_continuelabels.pop();
		tac = tac + togo_label+"\n";
		prog.push_back(tac);
		lineno++;
		//
		tac=to_string(lineno) + ",label,";
		string for_blocklabel = for_blocklabels.top();
		tac = tac + for_blocklabel+"\n";
		for_blocklabels.pop();
		prog.push_back(tac);
		lineno++;
	}
#line 3072 "parser.tab.cpp"
    break;

  case 113: /* for_mark22: %empty  */
#line 808 "src/parser.ypp"
            {
		string tac;
		tac=to_string(lineno) + ",goto,";
		string togo_postlabel = for_postlabels.top();
		for_postlabels.pop();
		tac = tac + togo_postlabel+"\n";
		prog.push_back(tac);
		lineno++;
	}
#line 3086 "parser.tab.cpp"
    break;

  case 114: /* for_initmark: %empty  */
#line 819 "src/parser.ypp"
             {
		string tac;
		tac = to_string(lineno);
		string for_initlabel = get_label();
		tac = tac + ",label,"+for_initlabel+"\n";
		for_initlabels.push(for_initlabel);
		for_continuelabels.push(for_initlabel);
		prog.push_back(tac);
		lineno++;
	}
#line 3101 "parser.tab.cpp"
    break;

  case 115: /* for_mark1: %empty  */
#line 830 "src/parser.ypp"
           {
		//
		string tac;
		tac=to_string(lineno) + ",ifgoto,=,";
		string togo_label = get_label();
		tac = tac + "t"+to_string(tempno-1)+",1,"+togo_label+"\n";
		prog.push_back(tac);
		lineno++;
		//
		tac=to_string(lineno) + ",goto,";
		string for_endlabel = get_label();
		tac = tac + for_endlabel+"\n";
		for_endlabels.push(for_endlabel);
		prog.push_back(tac);
		lineno++;
		//
		tac=to_string(lineno) + ",label," + togo_label + "\n";
		prog.push_back(tac);
		lineno++;
	}
#line 3126 "parser.tab.cpp"
    break;

  case 116: /* for_mark2: %empty  */
#line 851 "src/parser.ypp"
           {
		string tac;
		tac=to_string(lineno) + ",goto,";
		string togo_label = for_initlabels.top();
		for_initlabels.pop();
		//for_continuelabels.pop();
		tac = tac + togo_label+"\n";
		prog.push_back(tac);
		lineno++;
	}
#line 3141 "parser.tab.cpp"
    break;

  case 117: /* for_markend1: %empty  */
#line 862 "src/parser.ypp"
              {
		string tac;
		tac=to_string(lineno) + ",label,";
		string for_endlabel = for_endlabels.top();
		for_endlabels.pop();
		for_continuelabels.pop();
		tac = tac + for_endlabel+"\n";
		prog.push_back(tac);
		lineno++;
	}
#line 3156 "parser.tab.cpp"
    break;

  case 118: /* int_lit: INTEGER  */
#line 874 "src/parser.ypp"
                 { (yyval.node) = new astnode(INTEGER,(yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3164 "parser.tab.cpp"
    break;

  case 119: /* float_lit: FLOAT  */
#line 880 "src/parser.ypp"
                { (yyval.node) = new astnode(FLOAT,(yyvsp[0].data));
	  	(yyval.node)->data = (yyvsp[0].data);
	  }
#line 3172 "parser.tab.cpp"
    break;

  case 120: /* TypeName: IDENTIFIER  */
#line 886 "src/parser.ypp"
                   { (yyval.node) = new astnode(IDENTIFIER,(yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3180 "parser.tab.cpp"
    break;

  case 121: /* TypeName: VAR_TYPE  */
#line 889 "src/parser.ypp"
                   { (yyval.node) = new astnode(new DefinedType((yyvsp[0].data)->value), VAR_TYPE);
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3188 "parser.tab.cpp"
    break;

  case 122: /* ArrayType: LBRACK ArrayLength RBRACK Type  */
#line 895 "src/parser.ypp"
                                       { (yyval.node) = new astnode("",false,{(yyvsp[-2].node),(yyvsp[0].node)});
		string temp_str = (yyvsp[-3].data)->value + (yyvsp[-2].node)->data->value + (yyvsp[-1].data)->value + (yyvsp[0].node)->data->value;
		(yyval.node)->data->value = temp_str;
	}
#line 3197 "parser.tab.cpp"
    break;

  case 123: /* ArrayLength: Expression  */
#line 902 "src/parser.ypp"
                   { (yyval.node) = newId((yyvsp[0].node), "ArrayLength"); }
#line 3203 "parser.tab.cpp"
    break;

  case 124: /* StructType: STRUCT LBRACE FieldDeclStar RBRACE  */
#line 906 "src/parser.ypp"
                                       { (yyval.node) = newId((yyvsp[-1].node), "StructType"); }
#line 3209 "parser.tab.cpp"
    break;

  case 125: /* StructType: STRUCT LBRACE RBRACE  */
#line 907 "src/parser.ypp"
                           { (yyval.node) = new astnode(STRUCT, (yyvsp[-2].data)); }
#line 3215 "parser.tab.cpp"
    break;

  case 126: /* FieldDeclStar: FieldDecl SEMICOLON  */
#line 911 "src/parser.ypp"
                        { (yyval.node) = newId((yyvsp[-1].node), "FieldDeclStar"); }
#line 3221 "parser.tab.cpp"
    break;

  case 127: /* FieldDeclStar: FieldDeclStar FieldDecl SEMICOLON  */
#line 912 "src/parser.ypp"
                                        { (yyval.node) = new astnode("FieldDeclStar",false,{(yyvsp[-2].node),(yyvsp[-1].node)}); }
#line 3227 "parser.tab.cpp"
    break;

  case 128: /* FieldDecl: IdentifierList Type  */
#line 916 "src/parser.ypp"
                            { (yyval.node) = new astnode("FieldDecl",false,{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 3233 "parser.tab.cpp"
    break;

  case 129: /* FieldDecl: IdentifierList Type Tag  */
#line 917 "src/parser.ypp"
                                  { (yyval.node) = new astnode("FieldDecl",false,{(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 3239 "parser.tab.cpp"
    break;

  case 130: /* Tag: STRING  */
#line 921 "src/parser.ypp"
               { (yyval.node) = new astnode(new DefinedType("string"), STRING, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3247 "parser.tab.cpp"
    break;

  case 131: /* PointerType: MUL BaseType  */
#line 927 "src/parser.ypp"
                     { (yyval.node) = new astnode(new PntrType((yyvsp[0].node)->type),"PointerType",false,{(yyvsp[0].node)});
		string temp_str = (yyvsp[-1].data)->value + (yyvsp[0].node)->data->value;
		(yyval.node)->data->value = temp_str;
	}
#line 3256 "parser.tab.cpp"
    break;

  case 132: /* BaseType: Type  */
#line 933 "src/parser.ypp"
             { (yyval.node) = new astnode((yyvsp[0].node)->type, "BaseType",false,{(yyvsp[0].node)}); }
#line 3262 "parser.tab.cpp"
    break;

  case 133: /* FunctionType: FUNC Signature  */
#line 938 "src/parser.ypp"
                       { (yyval.node) = newId((yyvsp[0].node), "FunctionType"); }
#line 3268 "parser.tab.cpp"
    break;

  case 134: /* ConstDecl: CONST ConstSpec  */
#line 942 "src/parser.ypp"
                                { (yyval.node) = newId((yyvsp[0].node), "ConstDecl"); (yyval.node)->type->cons=true; }
#line 3274 "parser.tab.cpp"
    break;

  case 135: /* ConstSpec: IDENTIFIER Type ASSIGN Expression  */
#line 946 "src/parser.ypp"
                                                  { (yyval.node) = new astnode( (yyvsp[-2].node)->type ,"ConstSpec",false,{(yyvsp[-2].node),(yyvsp[0].node)});
			symadd((yyvsp[-3].data)->value, (yyvsp[-2].node)->type);
			//cout<<"SCOPE"<<any_scope("test")<<endl;
			(yyval.node)->data = (yyvsp[-3].data);
			string tac = to_string(lineno);
			tac.append(",=,");
			tac.append((yyvsp[-3].data)->value);
			tac.append(",");
			tac.append((yyvsp[0].node)->data->value);
			tac.append("\n");
			prog.push_back(tac);
			lineno++;
		}
#line 3292 "parser.tab.cpp"
    break;

  case 136: /* ConstSpec: IDENTIFIER Type  */
#line 959 "src/parser.ypp"
                                  { (yyval.node) = newId((yyvsp[0].node), "ConstSpec");
			symadd((yyvsp[-1].data)->value, (yyvsp[0].node)->type);
			//cout<<"SCOPE"<<any_scope("test")<<endl;
			(yyval.node)->data = (yyvsp[-1].data);
		}
#line 3302 "parser.tab.cpp"
    break;

  case 137: /* ExpressionList: ExpressionList COMMA Expression  */
#line 967 "src/parser.ypp"
                                                { (yyval.node) = new astnode("ExpressionList",false,{(yyvsp[-2].node),(yyvsp[0].node)});
			(yyval.node)->data->value = (yyvsp[-2].node)->data->value + "," + (yyvsp[0].node)->data->value;
		}
#line 3310 "parser.tab.cpp"
    break;

  case 138: /* ExpressionList: Expression  */
#line 970 "src/parser.ypp"
                             { (yyval.node) = newId((yyvsp[0].node), "ExpressionList"); }
#line 3316 "parser.tab.cpp"
    break;

  case 139: /* TypeDecl: TYPE TypeSpec  */
#line 974 "src/parser.ypp"
                               { (yyval.node) = new astnode("TypeDecl",false,{new astnode(TYPE,(yyvsp[-1].data)),(yyvsp[0].node)}); }
#line 3322 "parser.tab.cpp"
    break;

  case 140: /* TypeDecl: TYPE LPAREN TypeSpecList RPAREN  */
#line 975 "src/parser.ypp"
                                                  { (yyval.node) = new astnode("TypeDecl",false,{new astnode(TYPE,(yyvsp[-3].data)), (yyvsp[-1].node)}); }
#line 3328 "parser.tab.cpp"
    break;

  case 141: /* TypeSpecList: TypeSpecList TypeSpec SEMICOLON  */
#line 979 "src/parser.ypp"
                                                { (yyval.node) = new astnode("TypeSpecList",false,{(yyvsp[-2].node),(yyvsp[-1].node)}); }
#line 3334 "parser.tab.cpp"
    break;

  case 142: /* TypeSpecList: TypeSpec SEMICOLON  */
#line 980 "src/parser.ypp"
                                     { (yyval.node) = newId((yyvsp[-1].node), "TypeSpecList"); }
#line 3340 "parser.tab.cpp"
    break;

  case 143: /* TypeSpec: AliasDecl  */
#line 983 "src/parser.ypp"
                          { (yyval.node) = newId((yyvsp[0].node), "TypeSpec"); }
#line 3346 "parser.tab.cpp"
    break;

  case 144: /* TypeSpec: TypeDef  */
#line 984 "src/parser.ypp"
                          { (yyval.node) = newId((yyvsp[0].node), "TypeSpec"); }
#line 3352 "parser.tab.cpp"
    break;

  case 145: /* AliasDecl: IDENTIFIER ASSIGN Type  */
#line 988 "src/parser.ypp"
                                       { (yyval.node) = new astnode("AliasDecl",false,{new astnode(IDENTIFIER,(yyvsp[-2].data)), new astnode(ASSIGN,(yyvsp[-1].data)), (yyvsp[0].node)}); }
#line 3358 "parser.tab.cpp"
    break;

  case 146: /* TypeDef: IDENTIFIER Type  */
#line 992 "src/parser.ypp"
                                { (yyval.node) = new astnode("TypeDef",false,{new astnode(IDENTIFIER,(yyvsp[-1].data)), (yyvsp[0].node)}); }
#line 3364 "parser.tab.cpp"
    break;

  case 147: /* Literal: BasicLit  */
#line 996 "src/parser.ypp"
                 { (yyval.node) = newId((yyvsp[0].node), "Literal"); }
#line 3370 "parser.tab.cpp"
    break;

  case 148: /* Literal: FunctionLit  */
#line 997 "src/parser.ypp"
                      { (yyval.node) = newId((yyvsp[0].node), "Literal"); }
#line 3376 "parser.tab.cpp"
    break;

  case 149: /* string_lit: STRING  */
#line 1001 "src/parser.ypp"
               {
		// cout << "I am a string lite" << endl;
		(yyval.node) = new astnode(new PntrType(new DefinedType("string")) , STRING, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3386 "parser.tab.cpp"
    break;

  case 150: /* byte_lit: BYTE  */
#line 1009 "src/parser.ypp"
              {
		(yyval.node) = new astnode(new DefinedType("byte") , BYTE, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3395 "parser.tab.cpp"
    break;

  case 151: /* BasicLit: int_lit  */
#line 1016 "src/parser.ypp"
                { (yyval.node) = newId((yyvsp[0].node), "BasicLit"); }
#line 3401 "parser.tab.cpp"
    break;

  case 152: /* BasicLit: float_lit  */
#line 1017 "src/parser.ypp"
                    { (yyval.node) = newId((yyvsp[0].node), "BasicLit"); }
#line 3407 "parser.tab.cpp"
    break;

  case 153: /* BasicLit: string_lit  */
#line 1018 "src/parser.ypp"
                     {
		(yyval.node) = newId((yyvsp[0].node), "BasicLit");
		string temp_str = (yyvsp[0].node)->data->value;
		string temp_var = get_temp_strvar();
		string tac = to_string(lineno) + ",string," + temp_var + "," + temp_str + "\n";
		prog.push_back(tac);
		lineno++;
		(yyval.node)->data->value = temp_var;
	}
#line 3421 "parser.tab.cpp"
    break;

  case 154: /* BasicLit: byte_lit  */
#line 1027 "src/parser.ypp"
                   { (yyval.node) = newId((yyvsp[0].node), "BasicLit"); }
#line 3427 "parser.tab.cpp"
    break;

  case 155: /* FunctionLit: FUNC Function  */
#line 1031 "src/parser.ypp"
                      { (yyval.node) = new astnode("FunctionLit",false,{new astnode(FUNC,(yyvsp[-1].data)), (yyvsp[0].node)}); }
#line 3433 "parser.tab.cpp"
    break;

  case 156: /* PrimaryExpr: Operand  */
#line 1035 "src/parser.ypp"
                { (yyval.node) = newId((yyvsp[0].node), "PrimaryExpr"); }
#line 3439 "parser.tab.cpp"
    break;

  case 157: /* PrimaryExpr: PrimaryExpr Selector  */
#line 1036 "src/parser.ypp"
                               { (yyval.node) = new astnode("PrimaryExpr",false,{(yyvsp[-1].node),(yyvsp[0].node)});
		(yyval.node)->data->value = (yyvsp[-1].node)->data->value + (yyvsp[0].node)->data->value;
	}
#line 3447 "parser.tab.cpp"
    break;

  case 158: /* PrimaryExpr: PrimaryExpr Index  */
#line 1039 "src/parser.ypp"
                            { (yyval.node) = new astnode("PrimaryExpr",false,{(yyvsp[-1].node),(yyvsp[0].node)});
		(yyval.node)->data->value = (yyvsp[-1].node)->data->value + (yyvsp[0].node)->data->value;
	}
#line 3455 "parser.tab.cpp"
    break;

  case 159: /* PrimaryExpr: PrimaryExpr TypeAssertion  */
#line 1042 "src/parser.ypp"
                                    { (yyval.node) = new astnode("PrimaryExpr",false,{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 3461 "parser.tab.cpp"
    break;

  case 160: /* PrimaryExpr: OperandName StructLiteral  */
#line 1043 "src/parser.ypp"
                                    { (yyval.node) = new astnode("PrimaryExpr",false,{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 3467 "parser.tab.cpp"
    break;

  case 161: /* StructLiteral: LBRACE KeyValList RBRACE  */
#line 1047 "src/parser.ypp"
                             { (yyval.node) = newId((yyvsp[-1].node), "StructLiteral"); }
#line 3473 "parser.tab.cpp"
    break;

  case 162: /* KeyValList: %empty  */
#line 1051 "src/parser.ypp"
                    { (yyval.node) = new astnode(); }
#line 3479 "parser.tab.cpp"
    break;

  case 163: /* KeyValList: Expression COLON Expression  */
#line 1052 "src/parser.ypp"
                                      { (yyval.node) = new astnode("",false,{(yyvsp[-2].node),(yyvsp[0].node)}); }
#line 3485 "parser.tab.cpp"
    break;

  case 164: /* KeyValList: KeyValList COMMA Expression COLON Expression  */
#line 1053 "src/parser.ypp"
                                                       { (yyval.node) = new astnode("",false,{(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)}); }
#line 3491 "parser.tab.cpp"
    break;

  case 165: /* Selector: PERIOD IDENTIFIER  */
#line 1057 "src/parser.ypp"
                          { (yyval.node) = new astnode("Selector",false,{new astnode(PERIOD,(yyvsp[-1].data)), new astnode(IDENTIFIER,(yyvsp[0].data))});
		string temp_str = (yyvsp[-1].data)->value + (yyvsp[0].data)->value;
		(yyval.node)->data->value = temp_str;
	}
#line 3500 "parser.tab.cpp"
    break;

  case 166: /* Index: LBRACK Expression RBRACK  */
#line 1063 "src/parser.ypp"
                                 { (yyval.node) = newId((yyvsp[-1].node), "Index");
		string temp_str = "[" + (yyvsp[-1].node)->data->value + "]";
		(yyval.node)->data->value = temp_str;
	}
#line 3509 "parser.tab.cpp"
    break;

  case 167: /* TypeAssertion: PERIOD LPAREN Type RPAREN  */
#line 1071 "src/parser.ypp"
                                  { (yyval.node) = new astnode("TypeAssertion",false,{new astnode(PERIOD, (yyvsp[-3].data)), (yyvsp[-1].node)}); }
#line 3515 "parser.tab.cpp"
    break;

  case 168: /* Expression: Expression1  */
#line 1080 "src/parser.ypp"
                { (yyval.node) = newId((yyvsp[0].node),"Expression");}
#line 3521 "parser.tab.cpp"
    break;

  case 169: /* Expression1: Expression1 LOR Expression2  */
#line 1084 "src/parser.ypp"
                                { (yyval.node) = new astnode("Expression1",false,{(yyvsp[-2].node),new astnode(LOR),(yyvsp[0].node)});
	    string temp_var = get_temp_var();
		string tac;
		tac.append(to_string(lineno));
		tac.append(",");
		tac.append((yyvsp[-1].data)->value);
		tac.append(",");
		tac.append(temp_var);
		tac.append(",");
		tac.append((yyvsp[-2].node)->data->value);
		tac.append(",");
		tac.append((yyvsp[0].node)->data->value);
		tac.append("\n");
		prog.push_back(tac);
		lineno++;
		(yyval.node)->data->value = temp_var;
	}
#line 3543 "parser.tab.cpp"
    break;

  case 170: /* Expression1: Expression2  */
#line 1101 "src/parser.ypp"
                  { newId((yyvsp[0].node),"Expression1"); }
#line 3549 "parser.tab.cpp"
    break;

  case 171: /* Expression2: Expression2 LAND Expression3  */
#line 1105 "src/parser.ypp"
                                 { (yyval.node) = new astnode("Expression2",false,{(yyvsp[-2].node),new astnode(LAND),(yyvsp[0].node)});
		string temp_var = get_temp_var();
		string tac;
		tac.append(to_string(lineno));
		tac.append(",");
		tac.append((yyvsp[-1].data)->value);
		tac.append(",");
		tac.append(temp_var);
		tac.append(",");
		tac.append((yyvsp[-2].node)->data->value);
		tac.append(",");
		tac.append((yyvsp[0].node)->data->value);
		tac.append("\n");
		prog.push_back(tac);
		lineno++;
		(yyval.node)->data->value = temp_var;
	}
#line 3571 "parser.tab.cpp"
    break;

  case 172: /* Expression2: Expression3  */
#line 1122 "src/parser.ypp"
                  { newId((yyvsp[0].node),"Expression2"); }
#line 3577 "parser.tab.cpp"
    break;

  case 173: /* Expression3: Expression3 rel_op Expression4  */
#line 1126 "src/parser.ypp"
                                   { (yyval.node) = new astnode("Expression3",false,{(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});

		string temp_var = get_temp_var();
		string tac;
		tac.append(to_string(lineno));
		tac.append(",");
		tac.append((yyvsp[-1].node)->data->value);
		tac.append(",");
		tac.append(temp_var);
		tac.append(",");
		tac.append((yyvsp[-2].node)->data->value);
		tac.append(",");
		tac.append((yyvsp[0].node)->data->value);
		tac.append("\n");
		prog.push_back(tac);
		lineno++;
		(yyval.node)->data->value = temp_var;

	}
#line 3601 "parser.tab.cpp"
    break;

  case 174: /* Expression3: Expression4  */
#line 1145 "src/parser.ypp"
                  { newId((yyvsp[0].node),"Expression3"); }
#line 3607 "parser.tab.cpp"
    break;

  case 175: /* Expression4: Expression4 add_op Expression5  */
#line 1149 "src/parser.ypp"
                                   { (yyval.node) = new astnode("Expression4",false,{(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});
		string temp_var = get_temp_var();
		string tac;
		tac.append(to_string(lineno));
		tac.append(",");
		tac.append((yyvsp[-1].node)->data->value);
		tac.append(",");
		tac.append(temp_var);
		tac.append(",");
		tac.append((yyvsp[-2].node)->data->value);
		tac.append(",");
		tac.append((yyvsp[0].node)->data->value);
		tac.append("\n");
		prog.push_back(tac);
		lineno++;
		(yyval.node)->data->value = temp_var;
	}
#line 3629 "parser.tab.cpp"
    break;

  case 176: /* Expression4: Expression5  */
#line 1166 "src/parser.ypp"
                  { newId((yyvsp[0].node),"Expression4"); }
#line 3635 "parser.tab.cpp"
    break;

  case 177: /* Expression5: Expression5 mul_op PrimaryExpr  */
#line 1170 "src/parser.ypp"
                                   { (yyval.node) = new astnode("Expression5",false,{(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)});
		string temp_var = get_temp_var();
		string tac;
		tac.append(to_string(lineno));
		tac.append(",");
		tac.append((yyvsp[-1].node)->data->value);
		tac.append(",");
		tac.append(temp_var);
		tac.append(",");
		tac.append((yyvsp[-2].node)->data->value);
		tac.append(",");
		tac.append((yyvsp[0].node)->data->value);
		tac.append("\n");
		prog.push_back(tac);
		lineno++;
		(yyval.node)->data->value = temp_var;
	}
#line 3657 "parser.tab.cpp"
    break;

  case 178: /* Expression5: UnaryExpr  */
#line 1187 "src/parser.ypp"
                { (yyval.node) = newId((yyvsp[0].node), "Expression5"); }
#line 3663 "parser.tab.cpp"
    break;

  case 179: /* UnaryExpr: PrimaryExpr  */
#line 1191 "src/parser.ypp"
                    { (yyval.node) = newId((yyvsp[0].node),"UnaryExpr"); }
#line 3669 "parser.tab.cpp"
    break;

  case 180: /* UnaryExpr: unary_op PrimaryExpr  */
#line 1192 "src/parser.ypp"
                               { (yyval.node) = new astnode("UnaryExpr",false,{(yyvsp[-1].node),(yyvsp[0].node)});
		//TODO
		string temp_str = (yyvsp[-1].node)->data->value + (yyvsp[0].node)->data->value;
		(yyval.node)->data->value = temp_str;
		//for now its pushing -5, *6 sort of things
	}
#line 3680 "parser.tab.cpp"
    break;

  case 181: /* rel_op: EQL  */
#line 1203 "src/parser.ypp"
              { (yyval.node) = new astnode(EQL, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3688 "parser.tab.cpp"
    break;

  case 182: /* rel_op: NEQ  */
#line 1206 "src/parser.ypp"
              { (yyval.node) = new astnode(NEQ, (yyvsp[0].data));
	 	(yyval.node)->data = (yyvsp[0].data);
	}
#line 3696 "parser.tab.cpp"
    break;

  case 183: /* rel_op: LSS  */
#line 1209 "src/parser.ypp"
              { (yyval.node) = new astnode(LSS, (yyvsp[0].data));
	 	(yyval.node)->data = (yyvsp[0].data);
	}
#line 3704 "parser.tab.cpp"
    break;

  case 184: /* rel_op: LEQ  */
#line 1212 "src/parser.ypp"
              { (yyval.node) = new astnode(LEQ, (yyvsp[0].data));
	 	(yyval.node)->data = (yyvsp[0].data);
	}
#line 3712 "parser.tab.cpp"
    break;

  case 185: /* rel_op: GTR  */
#line 1215 "src/parser.ypp"
              { (yyval.node) = new astnode(GTR, (yyvsp[0].data));
	 	(yyval.node)->data = (yyvsp[0].data);
	}
#line 3720 "parser.tab.cpp"
    break;

  case 186: /* rel_op: GEQ  */
#line 1218 "src/parser.ypp"
              { (yyval.node) = new astnode(GEQ, (yyvsp[0].data));
	 	(yyval.node)->data = (yyvsp[0].data);
	}
#line 3728 "parser.tab.cpp"
    break;

  case 187: /* add_op: ADD  */
#line 1224 "src/parser.ypp"
            { (yyval.node) = new astnode(ADD, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3736 "parser.tab.cpp"
    break;

  case 188: /* add_op: SUB  */
#line 1227 "src/parser.ypp"
              { (yyval.node) = new astnode(SUB, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3744 "parser.tab.cpp"
    break;

  case 189: /* add_op: OR  */
#line 1230 "src/parser.ypp"
              { (yyval.node) = new astnode(OR, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3752 "parser.tab.cpp"
    break;

  case 190: /* add_op: XOR  */
#line 1233 "src/parser.ypp"
              { (yyval.node) = new astnode(XOR, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3760 "parser.tab.cpp"
    break;

  case 191: /* mul_op: MUL  */
#line 1239 "src/parser.ypp"
              { (yyval.node) = new astnode(MUL, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3768 "parser.tab.cpp"
    break;

  case 192: /* mul_op: QUO  */
#line 1242 "src/parser.ypp"
              { (yyval.node) = new astnode(QUO, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3776 "parser.tab.cpp"
    break;

  case 193: /* mul_op: REM  */
#line 1245 "src/parser.ypp"
              { (yyval.node) = new astnode(REM, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3784 "parser.tab.cpp"
    break;

  case 194: /* mul_op: SHL  */
#line 1248 "src/parser.ypp"
              { (yyval.node) = new astnode(SHL, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3792 "parser.tab.cpp"
    break;

  case 195: /* mul_op: SHR  */
#line 1251 "src/parser.ypp"
              { (yyval.node) = new astnode(SHR, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3800 "parser.tab.cpp"
    break;

  case 196: /* mul_op: AND  */
#line 1254 "src/parser.ypp"
              { (yyval.node) = new astnode(AND, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3808 "parser.tab.cpp"
    break;

  case 197: /* mul_op: AND_NOT  */
#line 1257 "src/parser.ypp"
                   { (yyval.node) = new astnode(AND_NOT, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3816 "parser.tab.cpp"
    break;

  case 198: /* unary_op: ADD  */
#line 1263 "src/parser.ypp"
             { (yyval.node) = new astnode(ADD, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3824 "parser.tab.cpp"
    break;

  case 199: /* unary_op: SUB  */
#line 1266 "src/parser.ypp"
              { (yyval.node) = new astnode(SUB, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3832 "parser.tab.cpp"
    break;

  case 200: /* unary_op: NOT  */
#line 1269 "src/parser.ypp"
              { (yyval.node) = new astnode(NOT, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3840 "parser.tab.cpp"
    break;

  case 201: /* unary_op: XOR  */
#line 1272 "src/parser.ypp"
              { (yyval.node) = new astnode(XOR, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3848 "parser.tab.cpp"
    break;

  case 202: /* unary_op: MUL  */
#line 1275 "src/parser.ypp"
              { (yyval.node) = new astnode(MUL, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3856 "parser.tab.cpp"
    break;

  case 203: /* unary_op: AND  */
#line 1278 "src/parser.ypp"
              { (yyval.node) = new astnode(AND, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3864 "parser.tab.cpp"
    break;

  case 204: /* assign_op: ASSIGN  */
#line 1284 "src/parser.ypp"
               { (yyval.node) = new astnode(ASSIGN, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3872 "parser.tab.cpp"
    break;

  case 205: /* assign_op: ADD_ASSIGN  */
#line 1287 "src/parser.ypp"
                     { (yyval.node) = new astnode(ADD_ASSIGN, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3880 "parser.tab.cpp"
    break;

  case 206: /* assign_op: SUB_ASSIGN  */
#line 1290 "src/parser.ypp"
                     { (yyval.node) = new astnode(SUB_ASSIGN, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3888 "parser.tab.cpp"
    break;

  case 207: /* assign_op: MUL_ASSIGN  */
#line 1293 "src/parser.ypp"
                     { (yyval.node) = new astnode(MUL_ASSIGN, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3896 "parser.tab.cpp"
    break;

  case 208: /* assign_op: QUO_ASSIGN  */
#line 1296 "src/parser.ypp"
                     { (yyval.node) = new astnode(QUO_ASSIGN, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3904 "parser.tab.cpp"
    break;

  case 209: /* assign_op: REM_ASSIGN  */
#line 1299 "src/parser.ypp"
                     { (yyval.node) = new astnode(REM_ASSIGN, (yyvsp[0].data));
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3912 "parser.tab.cpp"
    break;

  case 210: /* PackageClause: PACKAGE PackageName  */
#line 1305 "src/parser.ypp"
                            { (yyval.node) = new astnode("PackageClause", false, {new astnode(PACKAGE), (yyvsp[0].node)});
		string tac = to_string(lineno) + ",call," + (yyvsp[0].node)->data->value + ",0\n";
		prog.push_back(tac);
		lineno++;
		tac = to_string(lineno) + ",exit\n";
		prog.push_back(tac);
		lineno++;
	}
#line 3925 "parser.tab.cpp"
    break;

  case 211: /* PackageName: IDENTIFIER  */
#line 1316 "src/parser.ypp"
                   { (yyval.node) = new astnode(new DefinedType("fillTypeUsingSymbolTable"),IDENTIFIER);
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 3933 "parser.tab.cpp"
    break;

  case 212: /* ImportDeclStar: ImportDeclStar ImportDecl  */
#line 1322 "src/parser.ypp"
                              { (yyval.node) = new astnode("ImportDeclStar", false,{(yyvsp[-1].node),(yyvsp[0].node)});}
#line 3939 "parser.tab.cpp"
    break;

  case 213: /* ImportDeclStar: ImportDecl  */
#line 1323 "src/parser.ypp"
                 { (yyval.node) = newId((yyvsp[0].node), "ImportDeclStar"); }
#line 3945 "parser.tab.cpp"
    break;

  case 214: /* ImportDeclStar: %empty  */
#line 1324 "src/parser.ypp"
                { (yyval.node) = new astnode(); }
#line 3951 "parser.tab.cpp"
    break;

  case 215: /* ImportDecl: IMPORT ImportSpec SEMICOLON  */
#line 1328 "src/parser.ypp"
                                    {
		// cout << "I am inside import decl" << endl;
		(yyval.node) = new astnode("ImportDecl", false, {new astnode(IMPORT),(yyvsp[-1].node)}); }
#line 3959 "parser.tab.cpp"
    break;

  case 216: /* ImportDecl: IMPORT LPAREN ImportSpecStar RPAREN  */
#line 1331 "src/parser.ypp"
                                              { (yyval.node) = new astnode("ImportDecl", false, {new astnode(IMPORT), (yyvsp[-1].node)}); }
#line 3965 "parser.tab.cpp"
    break;

  case 217: /* ImportSpecStar: ImportSpecStar ImportSpec SEMICOLON  */
#line 1335 "src/parser.ypp"
                                            { (yyval.node) = new astnode("ImportSpecStar", false, {(yyvsp[-2].node),(yyvsp[-1].node)}); }
#line 3971 "parser.tab.cpp"
    break;

  case 218: /* ImportSpecStar: ImportSpec SEMICOLON  */
#line 1336 "src/parser.ypp"
                               { (yyval.node) = newId((yyvsp[-1].node), "ImportSpecStar"); }
#line 3977 "parser.tab.cpp"
    break;

  case 219: /* ImportSpec: PERIOD ImportPath  */
#line 1340 "src/parser.ypp"
                           { (yyval.node) = new astnode("ImportSpec", false, {new astnode(PERIOD), (yyvsp[0].node)}); }
#line 3983 "parser.tab.cpp"
    break;

  case 220: /* ImportSpec: AlternatePackageName ImportPath  */
#line 1341 "src/parser.ypp"
                                          { (yyval.node) = new astnode("ImportSpec", false, {(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 3989 "parser.tab.cpp"
    break;

  case 221: /* ImportSpec: AlternatePackageName  */
#line 1342 "src/parser.ypp"
                               {
		// cout << "I am inside import spec" << endl;
		(yyval.node) = newId((yyvsp[0].node),"ImportSpec"); }
#line 3997 "parser.tab.cpp"
    break;

  case 222: /* ImportPath: string_lit  */
#line 1348 "src/parser.ypp"
                    { (yyval.node) = newId((yyvsp[0].node),"ImportPath");}
#line 4003 "parser.tab.cpp"
    break;

  case 223: /* AlternatePackageName: string_lit  */
#line 1352 "src/parser.ypp"
                   {
		// cout << "I am insdiee the alternatepackagename" << endl;
		(yyval.node) = newId((yyvsp[0].node), "AlternatePackageName");
		// cout << "hello world" <<endl;
		}
#line 4013 "parser.tab.cpp"
    break;


#line 4017 "parser.tab.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 1359 "src/parser.ypp"



int nodeId = 0;
void prettyPrint(ofstream& astFile, astnode* root){
	astFile << nodeId << " [label=\"" << root->id << "\"]" << endl;
	int parentId = nodeId;
	for(auto child : root->children){
		astFile << parentId << "->" << ++nodeId << endl;
		prettyPrint(astFile , child);
	}
}

int main (int argc, char **argv) {

	is_argument_list_empty.push(0);

	int fileNo = atoi(argv[1]);
	symbolTable.open("symbolTable" + to_string(fileNo) + ".txt");
	fp =  & symbolTable;

	yyparse ( );

	print_symtab();
	symbolTable.close();

	ofstream astFile;
	astFile.open("ast" + to_string(fileNo) + ".dot" );
	if(!astFile) {
		cout << "couldn't open file" << endl;
		exit(1);
	}
	astFile << "digraph \"src/parser.ypp\" \n { \n node [fontname = courier, shape = box, colorscheme = paired6] \n edge [fontname = courier]" << endl;
	prettyPrint(astFile, theprogram);
	astFile << "}" << endl;
	astFile.close();

	for (auto it : prog) {
		cout << it << endl;
	}
}
