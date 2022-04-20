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
astnode *theprogram;

ofstream symbolTable;					//for symtab_print
std::ostream* fp = &cout;

umap< string, symtab_t* > symtab_top;
symtab_t *symtab =  init_symtab_top();	//universal block + symtab "0" aka global
int currscope = 0;
string fullscope = "0";

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

#line 122 "parser.tab.cpp"

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
#line 56 "src/parser.ypp"

    #include <bits/stdc++.h>
	#include "src/ast.h"
	#include "src/symtab.h"
	using namespace std;

#line 161 "parser.tab.cpp"

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
#line 63 "src/parser.ypp"

	Data* data;
	astnode *node;

#line 258 "parser.tab.cpp"

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
  YYSYMBOL_ForStmt = 123,                  /* ForStmt  */
  YYSYMBOL_Condition = 124,                /* Condition  */
  YYSYMBOL_ForClause = 125,                /* ForClause  */
  YYSYMBOL_InitStmt = 126,                 /* InitStmt  */
  YYSYMBOL_PostStmt = 127,                 /* PostStmt  */
  YYSYMBOL_int_lit = 128,                  /* int_lit  */
  YYSYMBOL_float_lit = 129,                /* float_lit  */
  YYSYMBOL_TypeName = 130,                 /* TypeName  */
  YYSYMBOL_ArrayType = 131,                /* ArrayType  */
  YYSYMBOL_ArrayLength = 132,              /* ArrayLength  */
  YYSYMBOL_StructType = 133,               /* StructType  */
  YYSYMBOL_FieldDeclStar = 134,            /* FieldDeclStar  */
  YYSYMBOL_FieldDecl = 135,                /* FieldDecl  */
  YYSYMBOL_Tag = 136,                      /* Tag  */
  YYSYMBOL_PointerType = 137,              /* PointerType  */
  YYSYMBOL_BaseType = 138,                 /* BaseType  */
  YYSYMBOL_FunctionType = 139,             /* FunctionType  */
  YYSYMBOL_ConstDecl = 140,                /* ConstDecl  */
  YYSYMBOL_ConstSpec = 141,                /* ConstSpec  */
  YYSYMBOL_ExpressionList = 142,           /* ExpressionList  */
  YYSYMBOL_TypeDecl = 143,                 /* TypeDecl  */
  YYSYMBOL_TypeSpecList = 144,             /* TypeSpecList  */
  YYSYMBOL_TypeSpec = 145,                 /* TypeSpec  */
  YYSYMBOL_AliasDecl = 146,                /* AliasDecl  */
  YYSYMBOL_TypeDef = 147,                  /* TypeDef  */
  YYSYMBOL_Literal = 148,                  /* Literal  */
  YYSYMBOL_string_lit = 149,               /* string_lit  */
  YYSYMBOL_byte_lit = 150,                 /* byte_lit  */
  YYSYMBOL_BasicLit = 151,                 /* BasicLit  */
  YYSYMBOL_FunctionLit = 152,              /* FunctionLit  */
  YYSYMBOL_PrimaryExpr = 153,              /* PrimaryExpr  */
  YYSYMBOL_StructLiteral = 154,            /* StructLiteral  */
  YYSYMBOL_KeyValList = 155,               /* KeyValList  */
  YYSYMBOL_Selector = 156,                 /* Selector  */
  YYSYMBOL_Index = 157,                    /* Index  */
  YYSYMBOL_TypeAssertion = 158,            /* TypeAssertion  */
  YYSYMBOL_Expression = 159,               /* Expression  */
  YYSYMBOL_Expression1 = 160,              /* Expression1  */
  YYSYMBOL_Expression2 = 161,              /* Expression2  */
  YYSYMBOL_Expression3 = 162,              /* Expression3  */
  YYSYMBOL_Expression4 = 163,              /* Expression4  */
  YYSYMBOL_Expression5 = 164,              /* Expression5  */
  YYSYMBOL_UnaryExpr = 165,                /* UnaryExpr  */
  YYSYMBOL_rel_op = 166,                   /* rel_op  */
  YYSYMBOL_add_op = 167,                   /* add_op  */
  YYSYMBOL_mul_op = 168,                   /* mul_op  */
  YYSYMBOL_unary_op = 169,                 /* unary_op  */
  YYSYMBOL_assign_op = 170,                /* assign_op  */
  YYSYMBOL_PackageClause = 171,            /* PackageClause  */
  YYSYMBOL_PackageName = 172,              /* PackageName  */
  YYSYMBOL_ImportDeclStar = 173,           /* ImportDeclStar  */
  YYSYMBOL_ImportDecl = 174,               /* ImportDecl  */
  YYSYMBOL_ImportSpecStar = 175,           /* ImportSpecStar  */
  YYSYMBOL_ImportSpec = 176,               /* ImportSpec  */
  YYSYMBOL_ImportPath = 177,               /* ImportPath  */
  YYSYMBOL_AlternatePackageName = 178      /* AlternatePackageName  */
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
#define YYLAST   328

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  103
/* YYNRULES -- Number of rules.  */
#define YYNRULES  209
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  324

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
       0,   108,   108,   114,   118,   127,   135,   145,   154,   155,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   173,   174,   175,   179,   183,   187,   194,   210,   229,
     301,   305,   333,   356,   360,   364,   372,   375,   382,   393,
     393,   400,   404,   410,   419,   460,   464,   465,   470,   471,
     475,   476,   480,   481,   485,   488,   497,   501,   502,   509,
     513,   514,   518,   519,   523,   527,   532,   536,   543,   544,
     548,   552,   553,   557,   558,   559,   563,   564,   565,   566,
     570,   571,   575,   576,   577,   581,   587,   591,   600,   601,
     609,   610,   614,   615,   616,   617,   618,   619,   623,   624,
     628,   632,   636,   640,   644,   648,   652,   653,   657,   661,
     665,   666,   670,   671,   675,   676,   680,   684,   687,   692,
     696,   700,   704,   711,   714,   718,   719,   723,   724,   727,
     728,   732,   736,   740,   741,   745,   751,   755,   756,   757,
     758,   762,   766,   767,   770,   773,   774,   778,   782,   783,
     784,   788,   791,   796,   805,   809,   826,   830,   847,   851,
     870,   874,   891,   895,   912,   916,   917,   923,   924,   925,
     926,   927,   928,   932,   933,   934,   935,   939,   940,   941,
     942,   943,   944,   945,   949,   950,   951,   952,   953,   954,
     958,   959,   960,   961,   962,   963,   967,   971,   975,   976,
     977,   981,   984,   988,   989,   993,   994,   995,  1001,  1005
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
  "ForStmt", "Condition", "ForClause", "InitStmt", "PostStmt", "int_lit",
  "float_lit", "TypeName", "ArrayType", "ArrayLength", "StructType",
  "FieldDeclStar", "FieldDecl", "Tag", "PointerType", "BaseType",
  "FunctionType", "ConstDecl", "ConstSpec", "ExpressionList", "TypeDecl",
  "TypeSpecList", "TypeSpec", "AliasDecl", "TypeDef", "Literal",
  "string_lit", "byte_lit", "BasicLit", "FunctionLit", "PrimaryExpr",
  "StructLiteral", "KeyValList", "Selector", "Index", "TypeAssertion",
  "Expression", "Expression1", "Expression2", "Expression3", "Expression4",
  "Expression5", "UnaryExpr", "rel_op", "add_op", "mul_op", "unary_op",
  "assign_op", "PackageClause", "PackageName", "ImportDeclStar",
  "ImportDecl", "ImportSpecStar", "ImportSpec", "ImportPath",
  "AlternatePackageName", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-245)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-101)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,     9,    44,    17,  -245,  -245,  -245,    55,   -12,   166,
    -245,  -245,     4,    35,  -245,    23,    35,   -13,    54,     3,
      71,  -245,  -245,  -245,  -245,    40,  -245,  -245,  -245,  -245,
       5,    67,  -245,  -245,  -245,  -245,  -245,    16,  -245,  -245,
     114,    29,  -245,     0,   137,  -245,  -245,  -245,    89,  -245,
      29,   257,  -245,   118,  -245,    29,  -245,    75,  -245,     1,
     120,   120,   120,   132,  -245,  -245,    29,    86,  -245,   170,
    -245,  -245,  -245,  -245,  -245,    29,  -245,   -15,   140,   186,
     142,   179,  -245,  -245,  -245,  -245,    25,    29,  -245,  -245,
     156,    24,  -245,   156,  -245,    -4,  -245,  -245,   120,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,    86,
    -245,   159,  -245,  -245,   160,  -245,  -245,  -245,  -245,  -245,
      97,  -245,   174,   176,   225,   180,   272,  -245,   212,    86,
    -245,  -245,   182,  -245,  -245,   217,    86,  -245,  -245,  -245,
    -245,  -245,   181,    29,  -245,  -245,  -245,    29,    -1,   184,
    -245,  -245,   192,    86,  -245,    29,    86,     8,  -245,  -245,
    -245,    86,    86,  -245,  -245,  -245,  -245,  -245,  -245,    86,
    -245,  -245,  -245,  -245,    86,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,   212,    97,  -245,  -245,  -245,   189,  -245,  -245,
    -245,  -245,    76,  -245,   230,  -245,   199,  -245,  -245,   126,
     213,  -245,   200,  -245,    29,   176,   225,   180,   272,    97,
      86,   234,  -245,    29,  -245,  -245,  -245,  -245,    86,    86,
    -245,   203,  -245,   254,   259,  -245,  -245,    86,    26,  -245,
     187,   219,  -245,  -245,  -245,   232,  -245,  -245,   251,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,   108,   119,    94,
    -245,   236,  -245,  -245,  -245,  -245,    86,    86,  -245,   212,
     224,   231,  -245,   234,   212,  -245,  -245,  -245,  -245,  -245,
    -245,    86,   212,  -245,  -245,    86,  -245,   181,   181,   238,
      83,   240,    98,  -245,   119,  -245,  -245,  -245,  -245,   189,
    -245,    93,  -245,   119,  -245,  -245,  -245,    86,    86,   300,
    -245,   212,  -245,  -245,   248,  -245,   181,    -6,  -245,  -245,
      86,   303,  -245,  -245,  -245,  -245,    -6,  -245,  -245,  -245,
    -245,  -245,  -245,  -245
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,   197,   196,     1,   200,     0,     0,
     199,   135,     0,     0,   209,     0,   207,     0,     0,     0,
       0,    35,    73,    74,    75,     2,    72,    33,    34,   198,
       0,     0,   208,   205,   201,   206,    38,     0,     6,    70,
       0,     0,   120,     0,     0,   125,   129,   130,    65,    30,
       0,     0,   202,     0,   204,     0,    54,     0,    57,     0,
       0,     0,     0,     0,   107,   106,     0,     0,    81,   122,
      80,    76,    77,    78,    79,     0,   132,     0,     0,     0,
      64,    32,    71,   203,    61,    55,     0,     0,    59,     7,
       7,    50,    68,    69,   119,     0,   118,   117,     0,    85,
     136,   104,   105,   184,   185,   188,   189,   186,   187,     0,
     142,    83,   137,   138,     0,    82,   139,   140,   133,   134,
     165,   109,   154,   156,   158,   160,   162,   164,     0,     0,
     131,   126,     0,   128,    67,     0,     0,    56,    58,    60,
      36,    37,     0,     0,    51,    53,   111,     0,     0,     0,
     141,    39,     0,   148,   146,     0,     0,     0,   143,   144,
     145,     0,     0,   167,   168,   170,   172,   171,   169,     0,
     173,   174,   175,   176,     0,   180,   181,   177,   178,   179,
     182,   183,     0,   166,   121,   127,    66,    31,   124,     4,
      41,    40,     0,    63,   114,   110,     0,   112,    84,     0,
       0,   108,     0,   151,     0,   155,   157,   159,   161,   163,
       0,    24,    52,     0,   116,   115,   113,   147,     0,     0,
     152,     0,   123,    89,    91,     4,     4,    87,    85,    16,
       5,     0,    12,    21,    11,     0,    22,    23,    35,    10,
      20,    19,    13,    14,    15,    17,    18,     0,   165,   124,
      62,     0,   149,   153,    88,    90,    24,    24,    86,     0,
       0,     0,     9,    24,     0,   190,   191,   192,   193,   194,
     195,     0,    47,    27,    28,     0,   102,     0,     0,     0,
     124,     0,   124,    43,     0,     3,     8,    25,    42,    29,
      49,     0,    46,    48,   150,     5,     5,     0,     0,     5,
      44,     0,    98,    99,     0,   100,     0,     0,    92,    45,
      24,     5,     5,     5,   103,   101,     0,    93,    97,    96,
       5,     5,    95,    94
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -245,  -245,  -141,   -47,   -14,  -245,   226,  -245,  -147,  -244,
    -245,  -245,  -245,  -245,  -245,    48,  -245,    72,  -245,  -245,
     -23,  -245,  -245,  -245,  -155,  -245,    18,    36,  -245,   301,
    -245,   235,  -245,   -18,  -245,  -245,  -245,  -245,   266,  -245,
     -40,  -245,  -245,  -245,  -245,  -245,  -214,  -245,    27,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,   172,
    -245,  -245,  -245,  -245,  -245,  -245,  -129,  -245,  -245,    56,
    -245,  -245,  -245,   168,  -245,  -245,  -245,  -124,  -245,  -245,
    -245,  -245,  -245,   -67,  -245,   161,   163,   154,   152,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,   318,  -245,
      78,   312,  -245
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,   229,   211,   260,    60,   140,   230,   231,   232,
     233,   234,   235,   236,   237,   238,    49,   239,    23,    38,
      89,   142,   191,   240,   241,   291,   292,    90,   144,    91,
      57,    58,   192,    59,    80,    24,    40,    25,    26,    68,
      69,   110,   111,   242,   243,   244,   245,   246,   277,   278,
     279,   315,   112,   113,    70,    71,   114,    72,   148,   149,
     215,    73,    97,    74,    27,    42,   247,    28,    77,    45,
      46,    47,   115,   116,   117,   118,   119,   120,   154,   199,
     158,   159,   160,   249,   122,   123,   124,   125,   126,   127,
     169,   174,   182,   128,   271,     3,     5,     9,    10,    30,
      15,    33,    16
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     121,   190,    50,    76,   183,    62,    62,   187,   226,    43,
      81,    36,   276,   281,    11,    84,     1,    63,    63,    88,
      48,    64,    64,    48,    65,    65,    96,    43,    87,    62,
      11,    11,   203,     4,    62,   130,    66,    66,    92,    75,
      48,    63,   152,    55,     6,    64,    63,   139,    65,    48,
      64,   145,    55,    65,   131,    37,    12,    21,   209,     8,
      66,    11,   184,    13,   189,    66,   314,   146,   259,   188,
     195,    44,    67,    67,    52,   150,   204,   147,    41,    13,
      13,    22,     7,   261,   -26,    56,   200,   248,    34,   202,
      31,    98,   143,   313,   137,    48,    67,    93,    94,    21,
      78,    67,   321,   193,   283,    51,   248,   194,    53,   288,
      99,   100,    11,   273,   274,   201,   287,   290,   101,   102,
     103,   104,   105,    22,   273,   274,   106,   107,   273,   274,
     147,   108,    54,   132,   151,   284,   295,   296,    61,   248,
     284,   299,   289,   222,    85,   212,   290,   265,   293,    86,
     213,   251,   252,  -100,   109,   266,   267,   268,   269,   270,
     258,    43,   300,    79,   221,   311,   312,   301,   189,   156,
       8,    17,   157,   250,    18,   320,    14,   293,   256,   257,
      14,    32,   210,    83,    32,    19,    20,   272,    37,   280,
     282,   156,    98,   223,   157,    18,   224,   217,    14,   225,
     218,   226,    95,   227,   188,   133,    19,    20,   294,   129,
     134,   228,   100,    11,   170,   171,   135,    98,   136,   101,
     102,   103,   104,   105,   172,   173,   -39,   106,   107,   153,
     305,   306,   108,   155,   161,   162,    99,   100,    11,    98,
     223,   186,    18,   224,   101,   102,   225,   185,   226,   197,
     227,   189,   -24,    19,    20,   109,   214,   189,   228,   100,
      11,   198,    17,   210,   216,    18,   101,   102,   103,   104,
     105,   219,   253,   220,   106,   107,    19,    20,   254,   108,
     109,   302,   303,   255,   262,   308,   163,   164,   165,   166,
     263,   167,   168,   264,   275,   285,   286,   317,   318,   319,
     175,   176,   109,   297,   189,   298,   322,   323,   177,   178,
     179,   307,   180,   310,   316,   181,   141,    82,    39,   309,
     196,   138,   205,   207,   304,   206,   208,    29,    35
};

static const yytype_int16 yycheck[] =
{
      67,   142,    20,    43,   128,     5,     5,   136,    14,    24,
      50,    24,   256,   257,    26,    55,     3,    17,    17,    59,
      24,    21,    21,    24,    24,    24,    66,    24,    27,     5,
      26,    26,    24,    24,     5,    75,    36,    36,    61,    39,
      24,    17,   109,    27,     0,    21,    17,    87,    24,    24,
      21,    91,    27,    24,    69,    68,    68,     9,   182,     4,
      36,    26,   129,    75,    70,    36,   310,    71,    42,   136,
      71,    68,    72,    72,    69,    98,    68,    95,    24,    75,
      75,     9,    65,   230,    58,    69,   153,   211,    65,   156,
      12,     5,    68,   307,    69,    24,    72,    61,    62,    51,
      44,    72,   316,   143,   259,    65,   230,   147,    30,   264,
      24,    25,    26,    30,    31,   155,   263,   272,    32,    33,
      34,    35,    36,    51,    30,    31,    40,    41,    30,    31,
     148,    45,    65,    77,    98,   259,   277,   278,    24,   263,
     264,   282,   271,   210,    69,    69,   301,    39,   272,    74,
      74,   218,   219,    70,    68,    47,    48,    49,    50,    51,
     227,    24,    69,    74,   204,   306,   307,    74,    70,    72,
       4,     5,    75,   213,     8,   316,     8,   301,   225,   226,
      12,    13,    74,    65,    16,    19,    20,    68,    68,   256,
     257,    72,     5,     6,    75,     8,     9,    71,    30,    12,
      74,    14,    70,    16,   271,    65,    19,    20,   275,    39,
      24,    24,    25,    26,    34,    35,    74,     5,    39,    32,
      33,    34,    35,    36,    44,    45,    70,    40,    41,    70,
     297,   298,    45,    73,    60,    59,    24,    25,    26,     5,
       6,    24,     8,     9,    32,    33,    12,    65,    14,    65,
      16,    70,    65,    19,    20,    68,    26,    70,    24,    25,
      26,    69,     5,    74,    65,     8,    32,    33,    34,    35,
      36,    58,    69,    73,    40,    41,    19,    20,    24,    45,
      68,   295,   296,    24,    65,   299,    61,    62,    63,    64,
      58,    66,    67,    42,    58,    71,    65,   311,   312,   313,
      28,    29,    68,    65,    70,    65,   320,   321,    36,    37,
      38,    11,    40,    65,    11,    43,    90,    51,    17,   301,
     148,    86,   161,   169,   297,   162,   174,     9,    16
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    77,   171,    24,   172,     0,    65,     4,   173,
     174,    26,    68,    75,   149,   176,   178,     5,     8,    19,
      20,    91,    93,    94,   111,   113,   114,   140,   143,   174,
     175,   176,   149,   177,    65,   177,    24,    68,    95,   105,
     112,    24,   141,    24,    68,   145,   146,   147,    24,    92,
     109,    65,    69,   176,    65,    27,    69,   106,   107,   109,
      81,    24,     5,    17,    21,    24,    36,    72,   115,   116,
     130,   131,   133,   137,   139,    39,   116,   144,   145,    74,
     110,   116,   114,    65,   116,    69,    74,    27,   116,    96,
     103,   105,    96,   103,   103,    70,   116,   138,     5,    24,
      25,    32,    33,    34,    35,    36,    40,    41,    45,    68,
     117,   118,   128,   129,   132,   148,   149,   150,   151,   152,
     153,   159,   160,   161,   162,   163,   164,   165,   169,    39,
     116,    69,   145,    65,    24,    74,    39,    69,   107,   116,
      82,    82,    97,    68,   104,   116,    71,   109,   134,   135,
      96,   103,   159,    70,   154,    73,    72,    75,   156,   157,
     158,    60,    59,    61,    62,    63,    64,    66,    67,   166,
      34,    35,    44,    45,   167,    28,    29,    36,    37,    38,
      40,    43,   168,   153,   159,    65,    24,   142,   159,    70,
      78,    98,   108,   116,   116,    71,   135,    65,    69,   155,
     159,   116,   159,    24,    68,   161,   162,   163,   164,   153,
      74,    79,    69,    74,    26,   136,    65,    71,    74,    58,
      73,   116,   159,     6,     9,    12,    14,    16,    24,    78,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    93,
      99,   100,   119,   120,   121,   122,   123,   142,   153,   159,
     116,   159,   159,    69,    24,    24,    79,    79,   159,    42,
      80,    84,    65,    58,    42,    39,    47,    48,    49,    50,
      51,   170,    68,    30,    31,    58,    85,   124,   125,   126,
     159,    85,   159,   100,   153,    71,    65,    84,   100,   142,
     100,   101,   102,   153,   159,    78,    78,    65,    65,    78,
      69,    74,    80,    80,   124,   159,   159,    11,    80,   102,
      65,    78,    78,   122,    85,   127,    11,    80,    80,    80,
      78,   122,    80,    80
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
     121,   121,   122,   122,   122,   122,   122,   122,   123,   123,
     124,   125,   126,   127,   128,   129,   130,   130,   131,   132,
     133,   133,   134,   134,   135,   135,   136,   137,   138,   139,
     140,   141,   141,   142,   142,   143,   143,   144,   144,   145,
     145,   146,   147,   148,   148,   149,   150,   151,   151,   151,
     151,   152,   153,   153,   153,   153,   153,   154,   155,   155,
     155,   156,   157,   158,   159,   160,   160,   161,   161,   162,
     162,   163,   163,   164,   164,   165,   165,   166,   166,   166,
     166,   166,   166,   167,   167,   167,   167,   168,   168,   168,
     168,   168,   168,   168,   169,   169,   169,   169,   169,   169,
     170,   170,   170,   170,   170,   170,   171,   172,   173,   173,
     173,   174,   174,   175,   175,   176,   176,   176,   177,   178
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
       2,     1,     5,     7,     9,     9,     7,     7,     5,     5,
       1,     5,     1,     1,     1,     1,     1,     1,     4,     1,
       4,     3,     2,     3,     2,     3,     1,     2,     1,     2,
       2,     4,     2,     3,     1,     2,     4,     3,     2,     1,
       1,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     2,     2,     2,     3,     0,     3,
       5,     2,     3,     4,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     1,
       0,     3,     4,     3,     2,     2,     2,     1,     1,     1
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
#line 108 "src/parser.ypp"
                                                            {
		// cout << "I am inside the program" << endl;
		theprogram = new astnode("StartFile",false, {(yyvsp[-3].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 1951 "parser.tab.cpp"
    break;

  case 3: /* Block: LBRACE OPENB StatementList CLOSEB RBRACE  */
#line 114 "src/parser.ypp"
                                                 { (yyval.node) = newId((yyvsp[-2].node), "Block"); }
#line 1957 "parser.tab.cpp"
    break;

  case 4: /* OPENB: %empty  */
#line 118 "src/parser.ypp"
                  {
		(yyval.node) = new astnode();
		 currscope++;
		 fullscope = fullscope + "/" + to_string(currscope);
		 //cout<<fullscope<<endl;
	}
#line 1968 "parser.tab.cpp"
    break;

  case 5: /* CLOSEB: %empty  */
#line 127 "src/parser.ypp"
                  {
		(yyval.node) = new astnode();
		 fullscope = fullscope.substr(0, fullscope.find_last_of("/") );
		 //cout<<fullscope<<endl;
	}
#line 1978 "parser.tab.cpp"
    break;

  case 6: /* SYMTABS: %empty  */
#line 135 "src/parser.ypp"
                  {
		currscope++;
		fullscope = fullscope + "/" + to_string(currscope);
		symtab = new symtab_t;
		symtab_top[fullscope] = symtab;
		//cout<<fullscope<<endl;
	}
#line 1990 "parser.tab.cpp"
    break;

  case 7: /* SYMTABE: %empty  */
#line 145 "src/parser.ypp"
                  {
		print_symtab();
		delete symtab;
		symtab = symtab_top["0"];
		fullscope = "0";
	}
#line 2001 "parser.tab.cpp"
    break;

  case 8: /* StatementList: StatementList Statement SEMICOLON  */
#line 154 "src/parser.ypp"
                                      { (yyval.node) = new astnode("StatementList", false, {(yyvsp[-2].node), (yyvsp[-1].node)});}
#line 2007 "parser.tab.cpp"
    break;

  case 9: /* StatementList: Statement SEMICOLON  */
#line 155 "src/parser.ypp"
                          { (yyval.node) = newId((yyvsp[-1].node), "StatementList"); }
#line 2013 "parser.tab.cpp"
    break;

  case 10: /* Statement: Declaration  */
#line 159 "src/parser.ypp"
                    {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2019 "parser.tab.cpp"
    break;

  case 11: /* Statement: LabeledStmt  */
#line 160 "src/parser.ypp"
                      {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2025 "parser.tab.cpp"
    break;

  case 12: /* Statement: SimpleStmt  */
#line 161 "src/parser.ypp"
                     {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2031 "parser.tab.cpp"
    break;

  case 13: /* Statement: ReturnStmt  */
#line 162 "src/parser.ypp"
                     {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2037 "parser.tab.cpp"
    break;

  case 14: /* Statement: BreakStmt  */
#line 163 "src/parser.ypp"
                    {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2043 "parser.tab.cpp"
    break;

  case 15: /* Statement: ContinueStmt  */
#line 164 "src/parser.ypp"
                       {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2049 "parser.tab.cpp"
    break;

  case 16: /* Statement: Block  */
#line 165 "src/parser.ypp"
                {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2055 "parser.tab.cpp"
    break;

  case 17: /* Statement: IfStmt  */
#line 166 "src/parser.ypp"
                 {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2061 "parser.tab.cpp"
    break;

  case 18: /* Statement: ForStmt  */
#line 167 "src/parser.ypp"
                  {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2067 "parser.tab.cpp"
    break;

  case 19: /* Statement: FunctionCall  */
#line 168 "src/parser.ypp"
                       {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2073 "parser.tab.cpp"
    break;

  case 20: /* Statement: FunctionStmt  */
#line 169 "src/parser.ypp"
                       {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2079 "parser.tab.cpp"
    break;

  case 21: /* SimpleStmt: EmptyStmt  */
#line 173 "src/parser.ypp"
                  {(yyval.node) = newId((yyvsp[0].node), "SimpleStmt");}
#line 2085 "parser.tab.cpp"
    break;

  case 22: /* SimpleStmt: IncDecStmt  */
#line 174 "src/parser.ypp"
                     {(yyval.node) = newId((yyvsp[0].node), "SimpleStmt");}
#line 2091 "parser.tab.cpp"
    break;

  case 23: /* SimpleStmt: Assignment  */
#line 175 "src/parser.ypp"
                     {(yyval.node) = newId((yyvsp[0].node), "SimpleStmt");}
#line 2097 "parser.tab.cpp"
    break;

  case 24: /* EmptyStmt: %empty  */
#line 179 "src/parser.ypp"
                  { (yyval.node) = new astnode(); }
#line 2103 "parser.tab.cpp"
    break;

  case 25: /* LabeledStmt: Label COLON Statement  */
#line 183 "src/parser.ypp"
                              {(yyval.node) = new astnode("LabeledStmt", false, {(yyvsp[-2].node), new astnode(COLON), (yyvsp[0].node)});}
#line 2109 "parser.tab.cpp"
    break;

  case 26: /* Label: IDENTIFIER  */
#line 187 "src/parser.ypp"
                   {
		(yyval.node) = new astnode(IDENTIFIER, (yyvsp[0].data));
		(yyval.node)->data=(yyvsp[0].data);
	}
#line 2118 "parser.tab.cpp"
    break;

  case 27: /* IncDecStmt: Expression INC  */
#line 194 "src/parser.ypp"
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
#line 2139 "parser.tab.cpp"
    break;

  case 28: /* IncDecStmt: Expression DEC  */
#line 210 "src/parser.ypp"
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
#line 2160 "parser.tab.cpp"
    break;

  case 29: /* Assignment: ExpressionList assign_op ExpressionList  */
#line 229 "src/parser.ypp"
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
#line 2234 "parser.tab.cpp"
    break;

  case 30: /* VarDecl: VAR VarSpec  */
#line 301 "src/parser.ypp"
                            {(yyval.node) = new astnode("VarDecl", false, {new astnode(VAR, (yyvsp[-1].data)), (yyvsp[0].node)});}
#line 2240 "parser.tab.cpp"
    break;

  case 31: /* VarSpec: IdentifierList Type ASSIGN ExpressionList  */
#line 305 "src/parser.ypp"
                                                          {(yyval.node) = new astnode("VarSpec", false, {(yyvsp[-3].node), (yyvsp[-2].node), new astnode(ASSIGN, (yyvsp[-1].data)),  (yyvsp[0].node)});
			symadd_list((yyvsp[-3].node), (yyvsp[-2].node)->type, IDENTIFIER);
			string temp1 = (yyvsp[-3].node)->data->value;
			string temp2 = (yyvsp[0].node)->data->value;
			vector <string> expr1 = split(temp1, ',');
			vector <string> expr2 = split(temp2, ',');

			if (expr1.size() != expr2.size()) {
				cout<<"Error: Incompatible assignment"<<endl;
				exit(0);
			}

			else {
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
#line 2273 "parser.tab.cpp"
    break;

  case 32: /* VarSpec: IdentifierList Type  */
#line 333 "src/parser.ypp"
                                      {(yyval.node) = new astnode("VarSpec", false, {(yyvsp[-1].node), (yyvsp[0].node)});
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
#line 2298 "parser.tab.cpp"
    break;

  case 33: /* Declaration: ConstDecl  */
#line 356 "src/parser.ypp"
                  {
		(yyval.node) = newId((yyvsp[0].node), "Declaration");
		// nahi kr rha abhi toh
	}
#line 2307 "parser.tab.cpp"
    break;

  case 34: /* Declaration: TypeDecl  */
#line 360 "src/parser.ypp"
                   {
		(yyval.node) = newId((yyvsp[0].node), "Declaration");
		// nahi kr rha abhi toh
	}
#line 2316 "parser.tab.cpp"
    break;

  case 35: /* Declaration: VarDecl  */
#line 364 "src/parser.ypp"
                  {
		(yyval.node) = newId((yyvsp[0].node), "Declaration");
		// nahi kr rha abhi toh
	}
#line 2325 "parser.tab.cpp"
    break;

  case 36: /* FunctionDecl: FUNC FunctionName SYMTABS Function SYMTABE  */
#line 372 "src/parser.ypp"
                                                           { (yyval.node) = new astnode("FunctionDecl", false, {(yyvsp[-3].node), (yyvsp[-1].node)});
			// symadd($2->value, $4->type);
		}
#line 2333 "parser.tab.cpp"
    break;

  case 37: /* FunctionDecl: FUNC FunctionName SYMTABS Signature SYMTABE  */
#line 375 "src/parser.ypp"
                                                              { (yyval.node) = new astnode("FunctionDecl", false, {(yyvsp[-3].node), (yyvsp[-1].node)});
			// symadd($2->value, $4->type);
		}
#line 2341 "parser.tab.cpp"
    break;

  case 38: /* FunctionName: IDENTIFIER  */
#line 382 "src/parser.ypp"
                           {(yyval.node) = new astnode(IDENTIFIER, (yyvsp[0].data));
			// TODO:: Ashutosh
			(yyval.node)->data=(yyvsp[0].data);
			string temp_str = (yyvsp[0].data)->value;
			string tac = to_string(lineno) + ",function," + (yyvsp[0].data)->value + "\n";
			prog.push_back(tac);
			lineno++;
		}
#line 2354 "parser.tab.cpp"
    break;

  case 39: /* $@1: %empty  */
#line 393 "src/parser.ypp"
                          {fullscope=fullscope.substr(0,fullscope.find_last_of("/"));currscope--;}
#line 2360 "parser.tab.cpp"
    break;

  case 40: /* Function: Signature $@1 FunctionBody  */
#line 393 "src/parser.ypp"
                                                                                                                {
			fullscope = fullscope +"/"+ to_string(currscope);
			(yyval.node) = new astnode("Function", false, {(yyvsp[-2].node), (yyvsp[0].node)});
		}
#line 2369 "parser.tab.cpp"
    break;

  case 41: /* FunctionBody: Block  */
#line 400 "src/parser.ypp"
                      {(yyval.node) = newId((yyvsp[0].node), "FunctionBody");}
#line 2375 "parser.tab.cpp"
    break;

  case 42: /* FunctionStmt: VarDecl DEFINE FunctionCall  */
#line 404 "src/parser.ypp"
                                            {(yyval.node) = new astnode("FunctionStmt", false, {(yyvsp[-2].node), (yyvsp[0].node)});
			string tac;
			tac = to_string(lineno) + "," + "getreturn," + (yyvsp[-2].node)->data->value + "\n";
			prog.push_back(tac);
			lineno++;
		}
#line 2386 "parser.tab.cpp"
    break;

  case 43: /* FunctionStmt: IDENTIFIER DEFINE FunctionCall  */
#line 410 "src/parser.ypp"
                                                 {(yyval.node) = new astnode("FunctionStmt", false, {new astnode(IDENTIFIER, (yyvsp[-2].data)), (yyvsp[0].node)});
			string tac;
			tac = to_string(lineno) + "," + "getreturn," + (yyvsp[-2].data)->value + "\n";
			prog.push_back(tac);
			lineno++;
		}
#line 2397 "parser.tab.cpp"
    break;

  case 44: /* FunctionCall: PrimaryExpr LPAREN ArgumentList RPAREN  */
#line 419 "src/parser.ypp"
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
#line 2440 "parser.tab.cpp"
    break;

  case 45: /* ArgumentList: ArgumentList COMMA Arguments  */
#line 460 "src/parser.ypp"
                                             {(yyval.node) = new astnode("ArgumentList", false, {(yyvsp[-2].node), (yyvsp[0].node)});
			argumentlist_str = (yyvsp[-2].node)->data->value + "," + (yyvsp[0].node)->data->value;
			(yyval.node)->data->value = argumentlist_str;
		}
#line 2449 "parser.tab.cpp"
    break;

  case 46: /* ArgumentList: Arguments  */
#line 464 "src/parser.ypp"
                            {(yyval.node) = newId((yyvsp[0].node), "ArgumentList");}
#line 2455 "parser.tab.cpp"
    break;

  case 47: /* ArgumentList: %empty  */
#line 465 "src/parser.ypp"
                            { (yyval.node) = new astnode();
			is_argument_list_empty.push(1);
		}
#line 2463 "parser.tab.cpp"
    break;

  case 48: /* Arguments: PrimaryExpr  */
#line 470 "src/parser.ypp"
                            {(yyval.node) = newId((yyvsp[0].node), "Arguments");}
#line 2469 "parser.tab.cpp"
    break;

  case 49: /* Arguments: FunctionCall  */
#line 471 "src/parser.ypp"
                               {(yyval.node) = newId((yyvsp[0].node), "Arguments");}
#line 2475 "parser.tab.cpp"
    break;

  case 50: /* Signature: Parameters  */
#line 475 "src/parser.ypp"
                   {(yyval.node) = newId((yyvsp[0].node), "Signature"); }
#line 2481 "parser.tab.cpp"
    break;

  case 51: /* Signature: Parameters Result  */
#line 476 "src/parser.ypp"
                            {(yyval.node) = new astnode("Signature", false, {(yyvsp[-1].node), (yyvsp[0].node)});}
#line 2487 "parser.tab.cpp"
    break;

  case 52: /* Result: LPAREN TypeList RPAREN  */
#line 480 "src/parser.ypp"
                               {(yyval.node) = newId((yyvsp[-1].node), "Result");}
#line 2493 "parser.tab.cpp"
    break;

  case 53: /* Result: Type  */
#line 481 "src/parser.ypp"
               {(yyval.node) = newId((yyvsp[0].node), "Result");}
#line 2499 "parser.tab.cpp"
    break;

  case 54: /* Parameters: LPAREN RPAREN  */
#line 485 "src/parser.ypp"
                      {(yyval.node) = new astnode(LPAREN);
		(yyval.node)->data->value = "";
	}
#line 2507 "parser.tab.cpp"
    break;

  case 55: /* Parameters: LPAREN ParameterDeclStar RPAREN  */
#line 488 "src/parser.ypp"
                                          {(yyval.node) = newId((yyvsp[-1].node), "Parameters");
		string temp_str = (yyvsp[-1].node)->data->value;
		vector <string> vec_params = split(temp_str, ',');
		for(int i= vec_params.size()-1;i>=0;i--){
			string tac = to_string(lineno) + ",pop," + vec_params[i] + "\n";
			prog.push_back(tac);
			lineno++;
		}
	}
#line 2521 "parser.tab.cpp"
    break;

  case 56: /* Parameters: LPAREN ParameterDeclStar COMMA RPAREN  */
#line 497 "src/parser.ypp"
                                                {(yyval.node) = newId((yyvsp[-2].node), "Parameters");}
#line 2527 "parser.tab.cpp"
    break;

  case 57: /* ParameterDeclStar: ParameterDecl  */
#line 501 "src/parser.ypp"
                      {(yyval.node) = newId((yyvsp[0].node), "ParameterDeclStar");}
#line 2533 "parser.tab.cpp"
    break;

  case 58: /* ParameterDeclStar: ParameterDeclStar COMMA ParameterDecl  */
#line 502 "src/parser.ypp"
                                                {(yyval.node) = new astnode("ParameterDeclStar", false, {(yyvsp[-2].node), (yyvsp[0].node)});
		string temp_str = (yyvsp[-2].node)->data->value + "," + (yyvsp[0].node)->data->value;
		(yyval.node)->data->value = temp_str;
	}
#line 2542 "parser.tab.cpp"
    break;

  case 59: /* ParameterDecl: IdentifierList Type  */
#line 509 "src/parser.ypp"
                            {
		// symadd_list($1, $2->type, IDENTIFIER);
		// TODO:: Ashutosh
	}
#line 2551 "parser.tab.cpp"
    break;

  case 60: /* ParameterDecl: IdentifierList ELLIPSIS Type  */
#line 513 "src/parser.ypp"
                                        {(yyval.node) = new astnode("ParameterDecl", false, {(yyvsp[-2].node), new astnode(ELLIPSIS,(yyvsp[-1].data)), (yyvsp[0].node)});}
#line 2557 "parser.tab.cpp"
    break;

  case 61: /* ParameterDecl: ELLIPSIS Type  */
#line 514 "src/parser.ypp"
                        {(yyval.node) = new astnode("ParameterDecl", false, {new astnode(ELLIPSIS, (yyvsp[-1].data)), (yyvsp[0].node)});}
#line 2563 "parser.tab.cpp"
    break;

  case 62: /* TypeList: TypeList COMMA Type  */
#line 518 "src/parser.ypp"
                        {(yyval.node) = new astnode("TypeList", false, {(yyvsp[-2].node), (yyvsp[0].node)});}
#line 2569 "parser.tab.cpp"
    break;

  case 63: /* TypeList: Type  */
#line 519 "src/parser.ypp"
           {(yyval.node) = new astnode("TypeList", false, {(yyvsp[0].node)});}
#line 2575 "parser.tab.cpp"
    break;

  case 64: /* IdentifierList: IDENTIFIER IdentifierLIST  */
#line 523 "src/parser.ypp"
                                          {(yyval.node) = new astnode("IdentifierList", false, {new astnode(IDENTIFIER, (yyvsp[-1].data)), (yyvsp[0].node)});
			string temp_str = (yyvsp[-1].data)->value + (yyvsp[0].node)->data->value;
			(yyval.node)->data->value = temp_str;
		}
#line 2584 "parser.tab.cpp"
    break;

  case 65: /* IdentifierList: IDENTIFIER  */
#line 527 "src/parser.ypp"
                             {(yyval.node) = new astnode(IDENTIFIER, (yyvsp[0].data));
			(yyval.node)->data = (yyvsp[0].data);
		}
#line 2592 "parser.tab.cpp"
    break;

  case 66: /* IdentifierLIST: IdentifierLIST COMMA IDENTIFIER  */
#line 532 "src/parser.ypp"
                                                { (yyval.node) = new astnode("IdentifierLIST", false, {(yyvsp[-2].node), new astnode(IDENTIFIER, (yyvsp[0].data))});
			string temp_str = (yyvsp[-2].node)->data->value + "," + (yyvsp[0].data)->value;
			(yyval.node)->data->value = temp_str;
		}
#line 2601 "parser.tab.cpp"
    break;

  case 67: /* IdentifierLIST: COMMA IDENTIFIER  */
#line 536 "src/parser.ypp"
                                   {(yyval.node) = new astnode(IDENTIFIER, (yyvsp[0].data));
			string temp_str = "," + (yyvsp[0].data)->value;
			(yyval.node)->data->value = temp_str;
		}
#line 2610 "parser.tab.cpp"
    break;

  case 68: /* MethodDecl: FUNC Receiver IDENTIFIER Function  */
#line 543 "src/parser.ypp"
                                          {(yyval.node) = new astnode("MethodDecl", false, {(yyvsp[-2].node), (yyvsp[0].node)});}
#line 2616 "parser.tab.cpp"
    break;

  case 69: /* MethodDecl: FUNC Receiver IDENTIFIER Signature  */
#line 544 "src/parser.ypp"
                                             {(yyval.node) = new astnode("MethodDecl", false, {(yyvsp[-2].node), (yyvsp[0].node)});}
#line 2622 "parser.tab.cpp"
    break;

  case 70: /* Receiver: Parameters  */
#line 548 "src/parser.ypp"
                   {(yyval.node) = newId((yyvsp[0].node), "Receiver");}
#line 2628 "parser.tab.cpp"
    break;

  case 71: /* TopLevelDeclStar: TopLevelDeclStar SEMICOLON TopLevelDecl  */
#line 552 "src/parser.ypp"
                                                          {(yyval.node) = new astnode("TopLevelDeclStar", false, {(yyvsp[-2].node), (yyvsp[0].node)});}
#line 2634 "parser.tab.cpp"
    break;

  case 72: /* TopLevelDeclStar: TopLevelDecl  */
#line 553 "src/parser.ypp"
                   {(yyval.node) = newId((yyvsp[0].node), "TopLevelDeclStar");}
#line 2640 "parser.tab.cpp"
    break;

  case 73: /* TopLevelDecl: Declaration  */
#line 557 "src/parser.ypp"
                    {(yyval.node) = newId((yyvsp[0].node), "TopLevelDecl");}
#line 2646 "parser.tab.cpp"
    break;

  case 74: /* TopLevelDecl: FunctionDecl  */
#line 558 "src/parser.ypp"
                       {(yyval.node) = newId((yyvsp[0].node), "TopLevelDecl");}
#line 2652 "parser.tab.cpp"
    break;

  case 75: /* TopLevelDecl: MethodDecl  */
#line 559 "src/parser.ypp"
                     {(yyval.node) = newId((yyvsp[0].node), "TopLevelDecl");}
#line 2658 "parser.tab.cpp"
    break;

  case 76: /* TypeLit: ArrayType  */
#line 563 "src/parser.ypp"
                  {(yyval.node) = newId((yyvsp[0].node), "TypeLit");}
#line 2664 "parser.tab.cpp"
    break;

  case 77: /* TypeLit: StructType  */
#line 564 "src/parser.ypp"
                     {(yyval.node) = newId((yyvsp[0].node), "TypeLit");}
#line 2670 "parser.tab.cpp"
    break;

  case 78: /* TypeLit: PointerType  */
#line 565 "src/parser.ypp"
                      {(yyval.node) = newId((yyvsp[0].node), "TypeLit");}
#line 2676 "parser.tab.cpp"
    break;

  case 79: /* TypeLit: FunctionType  */
#line 566 "src/parser.ypp"
                       {(yyval.node) = newId((yyvsp[0].node), "TypeLit");}
#line 2682 "parser.tab.cpp"
    break;

  case 80: /* Type: TypeName  */
#line 570 "src/parser.ypp"
                 {(yyval.node) = newId((yyvsp[0].node), "Type");}
#line 2688 "parser.tab.cpp"
    break;

  case 81: /* Type: TypeLit  */
#line 571 "src/parser.ypp"
                  {(yyval.node) = newId((yyvsp[0].node), "Type");}
#line 2694 "parser.tab.cpp"
    break;

  case 82: /* Operand: Literal  */
#line 575 "src/parser.ypp"
                {(yyval.node) = newId((yyvsp[0].node), "Operand");}
#line 2700 "parser.tab.cpp"
    break;

  case 83: /* Operand: OperandName  */
#line 576 "src/parser.ypp"
                      {(yyval.node) = newId((yyvsp[0].node), "Operand");}
#line 2706 "parser.tab.cpp"
    break;

  case 84: /* Operand: LPAREN Expression RPAREN  */
#line 577 "src/parser.ypp"
                                   {(yyval.node) = newId((yyvsp[-1].node), "Operand");}
#line 2712 "parser.tab.cpp"
    break;

  case 85: /* OperandName: IDENTIFIER  */
#line 581 "src/parser.ypp"
                   {(yyval.node) = new astnode(IDENTIFIER);
		(yyval.node)->data = (yyvsp[0].data);
	}
#line 2720 "parser.tab.cpp"
    break;

  case 86: /* ReturnStmt: RETURN Expression  */
#line 587 "src/parser.ypp"
                          {(yyval.node) = newId((yyvsp[0].node), "ReturnStmt");
		string tac = to_string(lineno) + ",return," + (yyvsp[0].node)->data->value + "\n";
		prog.push_back(tac);
	}
#line 2729 "parser.tab.cpp"
    break;

  case 87: /* ReturnStmt: RETURN  */
#line 591 "src/parser.ypp"
                 {(yyval.node) = new astnode(RETURN);
		string tac = to_string(lineno) + ",exit" + "\n";
		prog.push_back(tac);
		lineno++;
		(yyval.node)->data->value = "";
	}
#line 2740 "parser.tab.cpp"
    break;

  case 88: /* BreakStmt: BREAK IDENTIFIER  */
#line 600 "src/parser.ypp"
                         {(yyval.node) = new astnode("BreakStmt", false, {new astnode(BREAK, (yyvsp[-1].data)), new astnode(IDENTIFIER, (yyvsp[0].data))});}
#line 2746 "parser.tab.cpp"
    break;

  case 89: /* BreakStmt: BREAK  */
#line 601 "src/parser.ypp"
                {(yyval.node) = new astnode(BREAK);
		string tac = to_string(lineno) + ",goto," + for_endlabels.top() + "\n";
		prog.push_back(tac);
		lineno++;
	}
#line 2756 "parser.tab.cpp"
    break;

  case 90: /* ContinueStmt: CONTINUE IDENTIFIER  */
#line 609 "src/parser.ypp"
                            {(yyval.node) = new astnode("ContinueStmt", false, {new astnode(BREAK, (yyvsp[-1].data)), new astnode(IDENTIFIER, (yyvsp[0].data))});}
#line 2762 "parser.tab.cpp"
    break;

  case 91: /* ContinueStmt: CONTINUE  */
#line 610 "src/parser.ypp"
                   {(yyval.node) = new astnode(CONTINUE);}
#line 2768 "parser.tab.cpp"
    break;

  case 92: /* IfStmt: IF OPENB Expression Block CLOSEB  */
#line 614 "src/parser.ypp"
                                         {(yyval.node) = new astnode("IfStmt", false, {(yyvsp[-2].node), (yyvsp[-1].node)});}
#line 2774 "parser.tab.cpp"
    break;

  case 93: /* IfStmt: IF OPENB SimpleStmt SEMICOLON Expression Block CLOSEB  */
#line 615 "src/parser.ypp"
                                                               {(yyval.node) = new astnode("IfStmt", false, {(yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[-1].node)});}
#line 2780 "parser.tab.cpp"
    break;

  case 94: /* IfStmt: IF OPENB SimpleStmt SEMICOLON Expression Block ELSE IfStmt CLOSEB  */
#line 616 "src/parser.ypp"
                                                                           {(yyval.node) = new astnode("IfStmt", false, {(yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node)});}
#line 2786 "parser.tab.cpp"
    break;

  case 95: /* IfStmt: IF OPENB SimpleStmt SEMICOLON Expression Block ELSE Block CLOSEB  */
#line 617 "src/parser.ypp"
                                                                           {(yyval.node) = new astnode("IfStmt", false, {(yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node)});}
#line 2792 "parser.tab.cpp"
    break;

  case 96: /* IfStmt: IF OPENB Expression Block ELSE IfStmt CLOSEB  */
#line 618 "src/parser.ypp"
                                                      {(yyval.node) = new astnode("IfStmt", false, {(yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node)});}
#line 2798 "parser.tab.cpp"
    break;

  case 97: /* IfStmt: IF OPENB Expression Block ELSE Block CLOSEB  */
#line 619 "src/parser.ypp"
                                                      {(yyval.node) = new astnode("IfStmt", false, {(yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node)});}
#line 2804 "parser.tab.cpp"
    break;

  case 98: /* ForStmt: FOR OPENB Condition Block CLOSEB  */
#line 623 "src/parser.ypp"
                                         {(yyval.node) = new astnode("ForStmt", false, {(yyvsp[-2].node), (yyvsp[-1].node)});}
#line 2810 "parser.tab.cpp"
    break;

  case 99: /* ForStmt: FOR OPENB ForClause Block CLOSEB  */
#line 624 "src/parser.ypp"
                                          {(yyval.node) = new astnode("ForStmt", false, {(yyvsp[-2].node), (yyvsp[-1].node)});}
#line 2816 "parser.tab.cpp"
    break;

  case 100: /* Condition: Expression  */
#line 628 "src/parser.ypp"
                   {(yyval.node) = newId((yyvsp[0].node), "Condition");}
#line 2822 "parser.tab.cpp"
    break;

  case 101: /* ForClause: InitStmt SEMICOLON Condition SEMICOLON PostStmt  */
#line 632 "src/parser.ypp"
                                                        {(yyval.node) = new astnode("ForClause", false, {(yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)});}
#line 2828 "parser.tab.cpp"
    break;

  case 102: /* InitStmt: SimpleStmt  */
#line 636 "src/parser.ypp"
                   {(yyval.node) = newId((yyvsp[0].node), "InitStmt");}
#line 2834 "parser.tab.cpp"
    break;

  case 103: /* PostStmt: SimpleStmt  */
#line 640 "src/parser.ypp"
                   {(yyval.node) = newId((yyvsp[0].node), "InitStmt");}
#line 2840 "parser.tab.cpp"
    break;

  case 104: /* int_lit: INTEGER  */
#line 644 "src/parser.ypp"
                 { (yyval.node) = new astnode(INTEGER,(yyvsp[0].data));}
#line 2846 "parser.tab.cpp"
    break;

  case 105: /* float_lit: FLOAT  */
#line 648 "src/parser.ypp"
                { (yyval.node) = new astnode(FLOAT,(yyvsp[0].data));}
#line 2852 "parser.tab.cpp"
    break;

  case 106: /* TypeName: IDENTIFIER  */
#line 652 "src/parser.ypp"
                   { (yyval.node) = new astnode(IDENTIFIER,(yyvsp[0].data));}
#line 2858 "parser.tab.cpp"
    break;

  case 107: /* TypeName: VAR_TYPE  */
#line 653 "src/parser.ypp"
                   { (yyval.node) = new astnode(VAR_TYPE,(yyvsp[0].data));}
#line 2864 "parser.tab.cpp"
    break;

  case 108: /* ArrayType: LBRACK ArrayLength RBRACK Type  */
#line 657 "src/parser.ypp"
                                       { (yyval.node) = new astnode("",false,{(yyvsp[-2].node),(yyvsp[0].node)}); }
#line 2870 "parser.tab.cpp"
    break;

  case 109: /* ArrayLength: Expression  */
#line 661 "src/parser.ypp"
                   { (yyval.node) = newId((yyvsp[0].node), "ArrayLength"); }
#line 2876 "parser.tab.cpp"
    break;

  case 110: /* StructType: STRUCT LBRACE FieldDeclStar RBRACE  */
#line 665 "src/parser.ypp"
                                       { (yyval.node) = newId((yyvsp[-1].node), "StructType"); }
#line 2882 "parser.tab.cpp"
    break;

  case 111: /* StructType: STRUCT LBRACE RBRACE  */
#line 666 "src/parser.ypp"
                           { (yyval.node) = new astnode(STRUCT, (yyvsp[-2].data)); }
#line 2888 "parser.tab.cpp"
    break;

  case 112: /* FieldDeclStar: FieldDecl SEMICOLON  */
#line 670 "src/parser.ypp"
                        { (yyval.node) = newId((yyvsp[-1].node), "FieldDeclStar"); }
#line 2894 "parser.tab.cpp"
    break;

  case 113: /* FieldDeclStar: FieldDeclStar FieldDecl SEMICOLON  */
#line 671 "src/parser.ypp"
                                        { (yyval.node) = new astnode("FieldDeclStar",false,{(yyvsp[-2].node),(yyvsp[-1].node)}); }
#line 2900 "parser.tab.cpp"
    break;

  case 114: /* FieldDecl: IdentifierList Type  */
#line 675 "src/parser.ypp"
                            { (yyval.node) = new astnode("FieldDecl",false,{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2906 "parser.tab.cpp"
    break;

  case 115: /* FieldDecl: IdentifierList Type Tag  */
#line 676 "src/parser.ypp"
                                  { (yyval.node) = new astnode("FieldDecl",false,{(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2912 "parser.tab.cpp"
    break;

  case 116: /* Tag: STRING  */
#line 680 "src/parser.ypp"
               { (yyval.node) = new astnode(new DefinedType("string"), STRING, (yyvsp[0].data));}
#line 2918 "parser.tab.cpp"
    break;

  case 117: /* PointerType: MUL BaseType  */
#line 684 "src/parser.ypp"
                     { (yyval.node) = new astnode(new PntrType((yyvsp[0].node)->type),"PointerType",false,{(yyvsp[0].node)}); }
#line 2924 "parser.tab.cpp"
    break;

  case 118: /* BaseType: Type  */
#line 687 "src/parser.ypp"
             { (yyval.node) = new astnode((yyvsp[0].node)->type, "BaseType",false,{(yyvsp[0].node)}); }
#line 2930 "parser.tab.cpp"
    break;

  case 119: /* FunctionType: FUNC Signature  */
#line 692 "src/parser.ypp"
                       { (yyval.node) = newId((yyvsp[0].node), "FunctionType"); }
#line 2936 "parser.tab.cpp"
    break;

  case 120: /* ConstDecl: CONST ConstSpec  */
#line 696 "src/parser.ypp"
                                { (yyval.node) = newId((yyvsp[0].node), "ConstDecl"); }
#line 2942 "parser.tab.cpp"
    break;

  case 121: /* ConstSpec: IDENTIFIER Type ASSIGN Expression  */
#line 700 "src/parser.ypp"
                                                  { (yyval.node) = new astnode("ConstSpec",false,{(yyvsp[-2].node),(yyvsp[0].node)});
			// symadd($1->value, $2->type);
			//cout<<"SCOPE"<<any_scope("test")<<endl;
		}
#line 2951 "parser.tab.cpp"
    break;

  case 122: /* ConstSpec: IDENTIFIER Type  */
#line 704 "src/parser.ypp"
                                  { (yyval.node) = newId((yyvsp[0].node), "ConstSpec");
			// symadd($1->value, $2->type);
			//cout<<"SCOPE"<<any_scope("test")<<endl;
		}
#line 2960 "parser.tab.cpp"
    break;

  case 123: /* ExpressionList: ExpressionList COMMA Expression  */
#line 711 "src/parser.ypp"
                                                { (yyval.node) = new astnode("ExpressionList",false,{(yyvsp[-2].node),(yyvsp[0].node)});
			(yyval.node)->data->value = (yyvsp[-2].node)->data->value + "," + (yyvsp[0].node)->data->value;
		}
#line 2968 "parser.tab.cpp"
    break;

  case 124: /* ExpressionList: Expression  */
#line 714 "src/parser.ypp"
                             { (yyval.node) = newId((yyvsp[0].node), "ExpressionList"); }
#line 2974 "parser.tab.cpp"
    break;

  case 125: /* TypeDecl: TYPE TypeSpec  */
#line 718 "src/parser.ypp"
                               { (yyval.node) = new astnode("TypeDecl",false,{new astnode(TYPE,(yyvsp[-1].data)),(yyvsp[0].node)}); }
#line 2980 "parser.tab.cpp"
    break;

  case 126: /* TypeDecl: TYPE LPAREN TypeSpecList RPAREN  */
#line 719 "src/parser.ypp"
                                                  { (yyval.node) = new astnode("TypeDecl",false,{new astnode(TYPE,(yyvsp[-3].data)), (yyvsp[-1].node)}); }
#line 2986 "parser.tab.cpp"
    break;

  case 127: /* TypeSpecList: TypeSpecList TypeSpec SEMICOLON  */
#line 723 "src/parser.ypp"
                                                { (yyval.node) = new astnode("TypeSpecList",false,{(yyvsp[-2].node),(yyvsp[-1].node)}); }
#line 2992 "parser.tab.cpp"
    break;

  case 128: /* TypeSpecList: TypeSpec SEMICOLON  */
#line 724 "src/parser.ypp"
                                     { (yyval.node) = newId((yyvsp[-1].node), "TypeSpecList"); }
#line 2998 "parser.tab.cpp"
    break;

  case 129: /* TypeSpec: AliasDecl  */
#line 727 "src/parser.ypp"
                          { (yyval.node) = newId((yyvsp[0].node), "TypeSpec"); }
#line 3004 "parser.tab.cpp"
    break;

  case 130: /* TypeSpec: TypeDef  */
#line 728 "src/parser.ypp"
                          { (yyval.node) = newId((yyvsp[0].node), "TypeSpec"); }
#line 3010 "parser.tab.cpp"
    break;

  case 131: /* AliasDecl: IDENTIFIER ASSIGN Type  */
#line 732 "src/parser.ypp"
                                       { (yyval.node) = new astnode("AliasDecl",false,{new astnode(IDENTIFIER,(yyvsp[-2].data)), new astnode(ASSIGN,(yyvsp[-1].data)), (yyvsp[0].node)}); }
#line 3016 "parser.tab.cpp"
    break;

  case 132: /* TypeDef: IDENTIFIER Type  */
#line 736 "src/parser.ypp"
                                { (yyval.node) = new astnode("TypeDef",false,{new astnode(IDENTIFIER,(yyvsp[-1].data)), (yyvsp[0].node)}); }
#line 3022 "parser.tab.cpp"
    break;

  case 133: /* Literal: BasicLit  */
#line 740 "src/parser.ypp"
                 { (yyval.node) = newId((yyvsp[0].node), "Literal"); }
#line 3028 "parser.tab.cpp"
    break;

  case 134: /* Literal: FunctionLit  */
#line 741 "src/parser.ypp"
                      { (yyval.node) = newId((yyvsp[0].node), "Literal"); }
#line 3034 "parser.tab.cpp"
    break;

  case 135: /* string_lit: STRING  */
#line 745 "src/parser.ypp"
               {
		// cout << "I am a string lite" << endl;
		(yyval.node) = new astnode(new PntrType(new DefinedType("string")) , STRING, (yyvsp[0].data));}
#line 3042 "parser.tab.cpp"
    break;

  case 136: /* byte_lit: BYTE  */
#line 751 "src/parser.ypp"
              { (yyval.node) = new astnode(new DefinedType("byte") , BYTE, (yyvsp[0].data));}
#line 3048 "parser.tab.cpp"
    break;

  case 137: /* BasicLit: int_lit  */
#line 755 "src/parser.ypp"
                { (yyval.node) = newId((yyvsp[0].node), "BasicLit"); }
#line 3054 "parser.tab.cpp"
    break;

  case 138: /* BasicLit: float_lit  */
#line 756 "src/parser.ypp"
                    { (yyval.node) = newId((yyvsp[0].node), "BasicLit"); }
#line 3060 "parser.tab.cpp"
    break;

  case 139: /* BasicLit: string_lit  */
#line 757 "src/parser.ypp"
                     { (yyval.node) = newId((yyvsp[0].node), "BasicLit"); }
#line 3066 "parser.tab.cpp"
    break;

  case 140: /* BasicLit: byte_lit  */
#line 758 "src/parser.ypp"
                   { (yyval.node) = newId((yyvsp[0].node), "BasicLit"); }
#line 3072 "parser.tab.cpp"
    break;

  case 141: /* FunctionLit: FUNC Function  */
#line 762 "src/parser.ypp"
                      { (yyval.node) = new astnode("FunctionLit",false,{new astnode(FUNC,(yyvsp[-1].data)), (yyvsp[0].node)}); }
#line 3078 "parser.tab.cpp"
    break;

  case 142: /* PrimaryExpr: Operand  */
#line 766 "src/parser.ypp"
                { (yyval.node) = newId((yyvsp[0].node), "PrimaryExpr"); }
#line 3084 "parser.tab.cpp"
    break;

  case 143: /* PrimaryExpr: PrimaryExpr Selector  */
#line 767 "src/parser.ypp"
                               { (yyval.node) = new astnode("PrimaryExpr",false,{(yyvsp[-1].node),(yyvsp[0].node)});
		(yyval.node)->data->value = (yyvsp[-1].node)->data->value + (yyvsp[0].node)->data->value;
	}
#line 3092 "parser.tab.cpp"
    break;

  case 144: /* PrimaryExpr: PrimaryExpr Index  */
#line 770 "src/parser.ypp"
                            { (yyval.node) = new astnode("PrimaryExpr",false,{(yyvsp[-1].node),(yyvsp[0].node)});
		(yyval.node)->data->value = (yyvsp[-1].node)->data->value + (yyvsp[0].node)->data->value;
	}
#line 3100 "parser.tab.cpp"
    break;

  case 145: /* PrimaryExpr: PrimaryExpr TypeAssertion  */
#line 773 "src/parser.ypp"
                                    { (yyval.node) = new astnode("PrimaryExpr",false,{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 3106 "parser.tab.cpp"
    break;

  case 146: /* PrimaryExpr: OperandName StructLiteral  */
#line 774 "src/parser.ypp"
                                    { (yyval.node) = new astnode("PrimaryExpr",false,{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 3112 "parser.tab.cpp"
    break;

  case 147: /* StructLiteral: LBRACE KeyValList RBRACE  */
#line 778 "src/parser.ypp"
                             { (yyval.node) = newId((yyvsp[-1].node), "StructLiteral"); }
#line 3118 "parser.tab.cpp"
    break;

  case 148: /* KeyValList: %empty  */
#line 782 "src/parser.ypp"
                    { (yyval.node) = new astnode(); }
#line 3124 "parser.tab.cpp"
    break;

  case 149: /* KeyValList: Expression COLON Expression  */
#line 783 "src/parser.ypp"
                                      { (yyval.node) = new astnode("",false,{(yyvsp[-2].node),(yyvsp[0].node)}); }
#line 3130 "parser.tab.cpp"
    break;

  case 150: /* KeyValList: KeyValList COMMA Expression COLON Expression  */
#line 784 "src/parser.ypp"
                                                       { (yyval.node) = new astnode("",false,{(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)}); }
#line 3136 "parser.tab.cpp"
    break;

  case 151: /* Selector: PERIOD IDENTIFIER  */
#line 788 "src/parser.ypp"
                          { (yyval.node) = new astnode("Selector",false,{new astnode(PERIOD,(yyvsp[-1].data)), new astnode(IDENTIFIER,(yyvsp[0].data))}); }
#line 3142 "parser.tab.cpp"
    break;

  case 152: /* Index: LBRACK Expression RBRACK  */
#line 791 "src/parser.ypp"
                                 { (yyval.node) = newId((yyvsp[-1].node), "Index"); }
#line 3148 "parser.tab.cpp"
    break;

  case 153: /* TypeAssertion: PERIOD LPAREN Type RPAREN  */
#line 796 "src/parser.ypp"
                                  { (yyval.node) = new astnode("TypeAssertion",false,{new astnode(PERIOD, (yyvsp[-3].data)), (yyvsp[-1].node)}); }
#line 3154 "parser.tab.cpp"
    break;

  case 154: /* Expression: Expression1  */
#line 805 "src/parser.ypp"
                { (yyval.node) = newId((yyvsp[0].node),"Expression");}
#line 3160 "parser.tab.cpp"
    break;

  case 155: /* Expression1: Expression1 LOR Expression2  */
#line 809 "src/parser.ypp"
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
#line 3182 "parser.tab.cpp"
    break;

  case 156: /* Expression1: Expression2  */
#line 826 "src/parser.ypp"
                  { newId((yyvsp[0].node),"Expression1"); }
#line 3188 "parser.tab.cpp"
    break;

  case 157: /* Expression2: Expression2 LAND Expression3  */
#line 830 "src/parser.ypp"
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
#line 3210 "parser.tab.cpp"
    break;

  case 158: /* Expression2: Expression3  */
#line 847 "src/parser.ypp"
                  { newId((yyvsp[0].node),"Expression2"); }
#line 3216 "parser.tab.cpp"
    break;

  case 159: /* Expression3: Expression3 rel_op Expression4  */
#line 851 "src/parser.ypp"
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
#line 3240 "parser.tab.cpp"
    break;

  case 160: /* Expression3: Expression4  */
#line 870 "src/parser.ypp"
                  { newId((yyvsp[0].node),"Expression3"); }
#line 3246 "parser.tab.cpp"
    break;

  case 161: /* Expression4: Expression4 add_op Expression5  */
#line 874 "src/parser.ypp"
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
#line 3268 "parser.tab.cpp"
    break;

  case 162: /* Expression4: Expression5  */
#line 891 "src/parser.ypp"
                  { newId((yyvsp[0].node),"Expression4"); }
#line 3274 "parser.tab.cpp"
    break;

  case 163: /* Expression5: Expression5 mul_op PrimaryExpr  */
#line 895 "src/parser.ypp"
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
#line 3296 "parser.tab.cpp"
    break;

  case 164: /* Expression5: UnaryExpr  */
#line 912 "src/parser.ypp"
                { (yyval.node) = newId((yyvsp[0].node), "Expression5"); }
#line 3302 "parser.tab.cpp"
    break;

  case 165: /* UnaryExpr: PrimaryExpr  */
#line 916 "src/parser.ypp"
                    { (yyval.node) = newId((yyvsp[0].node),"UnaryExpr"); }
#line 3308 "parser.tab.cpp"
    break;

  case 166: /* UnaryExpr: unary_op PrimaryExpr  */
#line 917 "src/parser.ypp"
                               { (yyval.node) = new astnode("UnaryExpr",false,{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 3314 "parser.tab.cpp"
    break;

  case 167: /* rel_op: EQL  */
#line 923 "src/parser.ypp"
              { (yyval.node) = new astnode(EQL, (yyvsp[0].data));}
#line 3320 "parser.tab.cpp"
    break;

  case 168: /* rel_op: NEQ  */
#line 924 "src/parser.ypp"
              { (yyval.node) = new astnode(NEQ, (yyvsp[0].data));}
#line 3326 "parser.tab.cpp"
    break;

  case 169: /* rel_op: LSS  */
#line 925 "src/parser.ypp"
              { (yyval.node) = new astnode(LSS, (yyvsp[0].data));}
#line 3332 "parser.tab.cpp"
    break;

  case 170: /* rel_op: LEQ  */
#line 926 "src/parser.ypp"
              { (yyval.node) = new astnode(LEQ, (yyvsp[0].data));}
#line 3338 "parser.tab.cpp"
    break;

  case 171: /* rel_op: GTR  */
#line 927 "src/parser.ypp"
              { (yyval.node) = new astnode(GTR, (yyvsp[0].data));}
#line 3344 "parser.tab.cpp"
    break;

  case 172: /* rel_op: GEQ  */
#line 928 "src/parser.ypp"
              { (yyval.node) = new astnode(GEQ, (yyvsp[0].data));}
#line 3350 "parser.tab.cpp"
    break;

  case 173: /* add_op: ADD  */
#line 932 "src/parser.ypp"
            { (yyval.node) = new astnode(ADD, (yyvsp[0].data));}
#line 3356 "parser.tab.cpp"
    break;

  case 174: /* add_op: SUB  */
#line 933 "src/parser.ypp"
              { (yyval.node) = new astnode(SUB, (yyvsp[0].data));}
#line 3362 "parser.tab.cpp"
    break;

  case 175: /* add_op: OR  */
#line 934 "src/parser.ypp"
              { (yyval.node) = new astnode(OR, (yyvsp[0].data));}
#line 3368 "parser.tab.cpp"
    break;

  case 176: /* add_op: XOR  */
#line 935 "src/parser.ypp"
              { (yyval.node) = new astnode(XOR, (yyvsp[0].data));}
#line 3374 "parser.tab.cpp"
    break;

  case 177: /* mul_op: MUL  */
#line 939 "src/parser.ypp"
              { (yyval.node) = new astnode(MUL, (yyvsp[0].data));}
#line 3380 "parser.tab.cpp"
    break;

  case 178: /* mul_op: QUO  */
#line 940 "src/parser.ypp"
              { (yyval.node) = new astnode(QUO, (yyvsp[0].data));}
#line 3386 "parser.tab.cpp"
    break;

  case 179: /* mul_op: REM  */
#line 941 "src/parser.ypp"
              { (yyval.node) = new astnode(REM, (yyvsp[0].data));}
#line 3392 "parser.tab.cpp"
    break;

  case 180: /* mul_op: SHL  */
#line 942 "src/parser.ypp"
              { (yyval.node) = new astnode(SHL, (yyvsp[0].data));}
#line 3398 "parser.tab.cpp"
    break;

  case 181: /* mul_op: SHR  */
#line 943 "src/parser.ypp"
              { (yyval.node) = new astnode(SHR, (yyvsp[0].data));}
#line 3404 "parser.tab.cpp"
    break;

  case 182: /* mul_op: AND  */
#line 944 "src/parser.ypp"
              { (yyval.node) = new astnode(AND, (yyvsp[0].data));}
#line 3410 "parser.tab.cpp"
    break;

  case 183: /* mul_op: AND_NOT  */
#line 945 "src/parser.ypp"
                   { (yyval.node) = new astnode(AND_NOT, (yyvsp[0].data));}
#line 3416 "parser.tab.cpp"
    break;

  case 184: /* unary_op: ADD  */
#line 949 "src/parser.ypp"
             { (yyval.node) = new astnode(ADD, (yyvsp[0].data));}
#line 3422 "parser.tab.cpp"
    break;

  case 185: /* unary_op: SUB  */
#line 950 "src/parser.ypp"
              { (yyval.node) = new astnode(SUB, (yyvsp[0].data));}
#line 3428 "parser.tab.cpp"
    break;

  case 186: /* unary_op: NOT  */
#line 951 "src/parser.ypp"
              { (yyval.node) = new astnode(NOT, (yyvsp[0].data));}
#line 3434 "parser.tab.cpp"
    break;

  case 187: /* unary_op: XOR  */
#line 952 "src/parser.ypp"
              { (yyval.node) = new astnode(XOR, (yyvsp[0].data));}
#line 3440 "parser.tab.cpp"
    break;

  case 188: /* unary_op: MUL  */
#line 953 "src/parser.ypp"
              { (yyval.node) = new astnode(MUL, (yyvsp[0].data));}
#line 3446 "parser.tab.cpp"
    break;

  case 189: /* unary_op: AND  */
#line 954 "src/parser.ypp"
              { (yyval.node) = new astnode(AND, (yyvsp[0].data));}
#line 3452 "parser.tab.cpp"
    break;

  case 190: /* assign_op: ASSIGN  */
#line 958 "src/parser.ypp"
               { (yyval.node) = new astnode(ASSIGN, (yyvsp[0].data));}
#line 3458 "parser.tab.cpp"
    break;

  case 191: /* assign_op: ADD_ASSIGN  */
#line 959 "src/parser.ypp"
                     { (yyval.node) = new astnode(ADD_ASSIGN, (yyvsp[0].data));}
#line 3464 "parser.tab.cpp"
    break;

  case 192: /* assign_op: SUB_ASSIGN  */
#line 960 "src/parser.ypp"
                     { (yyval.node) = new astnode(SUB_ASSIGN, (yyvsp[0].data));}
#line 3470 "parser.tab.cpp"
    break;

  case 193: /* assign_op: MUL_ASSIGN  */
#line 961 "src/parser.ypp"
                     { (yyval.node) = new astnode(MUL_ASSIGN, (yyvsp[0].data));}
#line 3476 "parser.tab.cpp"
    break;

  case 194: /* assign_op: QUO_ASSIGN  */
#line 962 "src/parser.ypp"
                     { (yyval.node) = new astnode(QUO_ASSIGN, (yyvsp[0].data));}
#line 3482 "parser.tab.cpp"
    break;

  case 195: /* assign_op: REM_ASSIGN  */
#line 963 "src/parser.ypp"
                     { (yyval.node) = new astnode(REM_ASSIGN, (yyvsp[0].data));}
#line 3488 "parser.tab.cpp"
    break;

  case 196: /* PackageClause: PACKAGE PackageName  */
#line 967 "src/parser.ypp"
                            { (yyval.node) = new astnode("PackageClause", false, {new astnode(PACKAGE), (yyvsp[0].node)});}
#line 3494 "parser.tab.cpp"
    break;

  case 197: /* PackageName: IDENTIFIER  */
#line 971 "src/parser.ypp"
                   { (yyval.node) = new astnode(new DefinedType("fillTypeUsingSymbolTable"),IDENTIFIER);}
#line 3500 "parser.tab.cpp"
    break;

  case 198: /* ImportDeclStar: ImportDeclStar ImportDecl  */
#line 975 "src/parser.ypp"
                              { (yyval.node) = new astnode("ImportDeclStar", false,{(yyvsp[-1].node),(yyvsp[0].node)});}
#line 3506 "parser.tab.cpp"
    break;

  case 199: /* ImportDeclStar: ImportDecl  */
#line 976 "src/parser.ypp"
                 { (yyval.node) = newId((yyvsp[0].node), "ImportDeclStar"); }
#line 3512 "parser.tab.cpp"
    break;

  case 200: /* ImportDeclStar: %empty  */
#line 977 "src/parser.ypp"
                { (yyval.node) = new astnode(); }
#line 3518 "parser.tab.cpp"
    break;

  case 201: /* ImportDecl: IMPORT ImportSpec SEMICOLON  */
#line 981 "src/parser.ypp"
                                    {
		// cout << "I am inside import decl" << endl;
		(yyval.node) = new astnode("ImportDecl", false, {new astnode(IMPORT),(yyvsp[-1].node)}); }
#line 3526 "parser.tab.cpp"
    break;

  case 202: /* ImportDecl: IMPORT LPAREN ImportSpecStar RPAREN  */
#line 984 "src/parser.ypp"
                                              { (yyval.node) = new astnode("ImportDecl", false, {new astnode(IMPORT), (yyvsp[-1].node)}); }
#line 3532 "parser.tab.cpp"
    break;

  case 203: /* ImportSpecStar: ImportSpecStar ImportSpec SEMICOLON  */
#line 988 "src/parser.ypp"
                                            { (yyval.node) = new astnode("ImportSpecStar", false, {(yyvsp[-2].node),(yyvsp[-1].node)}); }
#line 3538 "parser.tab.cpp"
    break;

  case 204: /* ImportSpecStar: ImportSpec SEMICOLON  */
#line 989 "src/parser.ypp"
                               { (yyval.node) = newId((yyvsp[-1].node), "ImportSpecStar"); }
#line 3544 "parser.tab.cpp"
    break;

  case 205: /* ImportSpec: PERIOD ImportPath  */
#line 993 "src/parser.ypp"
                           { (yyval.node) = new astnode("ImportSpec", false, {new astnode(PERIOD), (yyvsp[0].node)}); }
#line 3550 "parser.tab.cpp"
    break;

  case 206: /* ImportSpec: AlternatePackageName ImportPath  */
#line 994 "src/parser.ypp"
                                          { (yyval.node) = new astnode("ImportSpec", false, {(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 3556 "parser.tab.cpp"
    break;

  case 207: /* ImportSpec: AlternatePackageName  */
#line 995 "src/parser.ypp"
                               {
		// cout << "I am inside import spec" << endl;
		(yyval.node) = newId((yyvsp[0].node),"ImportSpec"); }
#line 3564 "parser.tab.cpp"
    break;

  case 208: /* ImportPath: string_lit  */
#line 1001 "src/parser.ypp"
                    { (yyval.node) = newId((yyvsp[0].node),"ImportPath");}
#line 3570 "parser.tab.cpp"
    break;

  case 209: /* AlternatePackageName: string_lit  */
#line 1005 "src/parser.ypp"
                   {
		// cout << "I am insdiee the alternatepackagename" << endl;
		(yyval.node) = newId((yyvsp[0].node), "AlternatePackageName");
		// cout << "hello world" <<endl;
		}
#line 3580 "parser.tab.cpp"
    break;


#line 3584 "parser.tab.cpp"

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

#line 1012 "src/parser.ypp"



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
