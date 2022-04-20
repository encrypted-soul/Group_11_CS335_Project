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

#line 93 "parser.tab.cpp"

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
#line 27 "src/parser.ypp"

    #include <bits/stdc++.h>
	#include "src/ast.h"
	#include "src/symtab.h"
	using namespace std;

#line 132 "parser.tab.cpp"

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
#line 34 "src/parser.ypp"

	Data* data;
	astnode *node;

#line 229 "parser.tab.cpp"

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
  YYSYMBOL_IncDecStmt = 88,                /* IncDecStmt  */
  YYSYMBOL_Assignment = 89,                /* Assignment  */
  YYSYMBOL_VarDecl = 90,                   /* VarDecl  */
  YYSYMBOL_VarSpec = 91,                   /* VarSpec  */
  YYSYMBOL_Declaration = 92,               /* Declaration  */
  YYSYMBOL_FunctionDecl = 93,              /* FunctionDecl  */
  YYSYMBOL_Function = 94,                  /* Function  */
  YYSYMBOL_95_1 = 95,                      /* $@1  */
  YYSYMBOL_FunctionBody = 96,              /* FunctionBody  */
  YYSYMBOL_FunctionStmt = 97,              /* FunctionStmt  */
  YYSYMBOL_FunctionCall = 98,              /* FunctionCall  */
  YYSYMBOL_ArgumentList = 99,              /* ArgumentList  */
  YYSYMBOL_Arguments = 100,                /* Arguments  */
  YYSYMBOL_Signature = 101,                /* Signature  */
  YYSYMBOL_Result = 102,                   /* Result  */
  YYSYMBOL_Parameters = 103,               /* Parameters  */
  YYSYMBOL_ParameterDeclStar = 104,        /* ParameterDeclStar  */
  YYSYMBOL_ParameterDecl = 105,            /* ParameterDecl  */
  YYSYMBOL_TypeList = 106,                 /* TypeList  */
  YYSYMBOL_IdentifierList = 107,           /* IdentifierList  */
  YYSYMBOL_IdentifierLIST = 108,           /* IdentifierLIST  */
  YYSYMBOL_MethodDecl = 109,               /* MethodDecl  */
  YYSYMBOL_Receiver = 110,                 /* Receiver  */
  YYSYMBOL_TopLevelDeclStar = 111,         /* TopLevelDeclStar  */
  YYSYMBOL_TopLevelDecl = 112,             /* TopLevelDecl  */
  YYSYMBOL_TypeLit = 113,                  /* TypeLit  */
  YYSYMBOL_Type = 114,                     /* Type  */
  YYSYMBOL_Operand = 115,                  /* Operand  */
  YYSYMBOL_OperandName = 116,              /* OperandName  */
  YYSYMBOL_ReturnStmt = 117,               /* ReturnStmt  */
  YYSYMBOL_BreakStmt = 118,                /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 119,             /* ContinueStmt  */
  YYSYMBOL_IfStmt = 120,                   /* IfStmt  */
  YYSYMBOL_ForStmt = 121,                  /* ForStmt  */
  YYSYMBOL_Condition = 122,                /* Condition  */
  YYSYMBOL_ForClause = 123,                /* ForClause  */
  YYSYMBOL_InitStmt = 124,                 /* InitStmt  */
  YYSYMBOL_PostStmt = 125,                 /* PostStmt  */
  YYSYMBOL_int_lit = 126,                  /* int_lit  */
  YYSYMBOL_float_lit = 127,                /* float_lit  */
  YYSYMBOL_TypeName = 128,                 /* TypeName  */
  YYSYMBOL_ArrayType = 129,                /* ArrayType  */
  YYSYMBOL_ArrayLength = 130,              /* ArrayLength  */
  YYSYMBOL_StructType = 131,               /* StructType  */
  YYSYMBOL_FieldDeclStar = 132,            /* FieldDeclStar  */
  YYSYMBOL_FieldDecl = 133,                /* FieldDecl  */
  YYSYMBOL_Tag = 134,                      /* Tag  */
  YYSYMBOL_PointerType = 135,              /* PointerType  */
  YYSYMBOL_BaseType = 136,                 /* BaseType  */
  YYSYMBOL_FunctionType = 137,             /* FunctionType  */
  YYSYMBOL_ConstDecl = 138,                /* ConstDecl  */
  YYSYMBOL_ConstSpec = 139,                /* ConstSpec  */
  YYSYMBOL_ExpressionList = 140,           /* ExpressionList  */
  YYSYMBOL_TypeDecl = 141,                 /* TypeDecl  */
  YYSYMBOL_TypeSpecList = 142,             /* TypeSpecList  */
  YYSYMBOL_TypeSpec = 143,                 /* TypeSpec  */
  YYSYMBOL_AliasDecl = 144,                /* AliasDecl  */
  YYSYMBOL_TypeDef = 145,                  /* TypeDef  */
  YYSYMBOL_Literal = 146,                  /* Literal  */
  YYSYMBOL_string_lit = 147,               /* string_lit  */
  YYSYMBOL_byte_lit = 148,                 /* byte_lit  */
  YYSYMBOL_BasicLit = 149,                 /* BasicLit  */
  YYSYMBOL_FunctionLit = 150,              /* FunctionLit  */
  YYSYMBOL_PrimaryExpr = 151,              /* PrimaryExpr  */
  YYSYMBOL_StructLiteral = 152,            /* StructLiteral  */
  YYSYMBOL_KeyValList = 153,               /* KeyValList  */
  YYSYMBOL_Selector = 154,                 /* Selector  */
  YYSYMBOL_Index = 155,                    /* Index  */
  YYSYMBOL_TypeAssertion = 156,            /* TypeAssertion  */
  YYSYMBOL_Expression = 157,               /* Expression  */
  YYSYMBOL_Expression1 = 158,              /* Expression1  */
  YYSYMBOL_Expression2 = 159,              /* Expression2  */
  YYSYMBOL_Expression3 = 160,              /* Expression3  */
  YYSYMBOL_Expression4 = 161,              /* Expression4  */
  YYSYMBOL_Expression5 = 162,              /* Expression5  */
  YYSYMBOL_UnaryExpr = 163,                /* UnaryExpr  */
  YYSYMBOL_rel_op = 164,                   /* rel_op  */
  YYSYMBOL_add_op = 165,                   /* add_op  */
  YYSYMBOL_mul_op = 166,                   /* mul_op  */
  YYSYMBOL_unary_op = 167,                 /* unary_op  */
  YYSYMBOL_assign_op = 168,                /* assign_op  */
  YYSYMBOL_PackageClause = 169,            /* PackageClause  */
  YYSYMBOL_PackageName = 170,              /* PackageName  */
  YYSYMBOL_ImportDeclStar = 171,           /* ImportDeclStar  */
  YYSYMBOL_ImportDecl = 172,               /* ImportDecl  */
  YYSYMBOL_ImportSpecStar = 173,           /* ImportSpecStar  */
  YYSYMBOL_ImportSpec = 174,               /* ImportSpec  */
  YYSYMBOL_ImportPath = 175,               /* ImportPath  */
  YYSYMBOL_AlternatePackageName = 176      /* AlternatePackageName  */
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
#define YYLAST   327

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  101
/* YYNRULES -- Number of rules.  */
#define YYNRULES  207
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  322

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
       0,    79,    79,    85,    89,    98,   106,   116,   125,   126,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   144,   145,   146,   150,   154,   158,   174,   193,   268,
     272,   302,   330,   334,   338,   346,   349,   360,   360,   367,
     371,   372,   375,   379,   380,   381,   384,   385,   389,   390,
     394,   395,   399,   400,   401,   405,   406,   410,   414,   415,
     419,   420,   424,   425,   428,   429,   433,   434,   438,   442,
     443,   447,   448,   449,   453,   454,   455,   456,   460,   461,
     465,   466,   467,   471,   475,   476,   480,   481,   485,   486,
     490,   491,   492,   493,   494,   495,   499,   500,   504,   508,
     512,   516,   520,   524,   528,   529,   533,   537,   541,   542,
     546,   547,   551,   552,   556,   560,   563,   568,   572,   576,
     580,   587,   588,   592,   593,   597,   598,   601,   602,   606,
     610,   614,   615,   619,   625,   629,   630,   631,   632,   636,
     640,   641,   642,   643,   644,   648,   652,   653,   654,   658,
     661,   666,   675,   679,   680,   684,   685,   689,   690,   694,
     695,   699,   700,   704,   705,   711,   712,   713,   714,   715,
     716,   720,   721,   722,   723,   727,   728,   729,   730,   731,
     732,   733,   737,   738,   739,   740,   741,   742,   746,   747,
     748,   749,   750,   751,   755,   759,   763,   764,   765,   769,
     772,   776,   777,   781,   782,   783,   789,   793
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
  "Statement", "SimpleStmt", "EmptyStmt", "LabeledStmt", "IncDecStmt",
  "Assignment", "VarDecl", "VarSpec", "Declaration", "FunctionDecl",
  "Function", "$@1", "FunctionBody", "FunctionStmt", "FunctionCall",
  "ArgumentList", "Arguments", "Signature", "Result", "Parameters",
  "ParameterDeclStar", "ParameterDecl", "TypeList", "IdentifierList",
  "IdentifierLIST", "MethodDecl", "Receiver", "TopLevelDeclStar",
  "TopLevelDecl", "TypeLit", "Type", "Operand", "OperandName",
  "ReturnStmt", "BreakStmt", "ContinueStmt", "IfStmt", "ForStmt",
  "Condition", "ForClause", "InitStmt", "PostStmt", "int_lit", "float_lit",
  "TypeName", "ArrayType", "ArrayLength", "StructType", "FieldDeclStar",
  "FieldDecl", "Tag", "PointerType", "BaseType", "FunctionType",
  "ConstDecl", "ConstSpec", "ExpressionList", "TypeDecl", "TypeSpecList",
  "TypeSpec", "AliasDecl", "TypeDef", "Literal", "string_lit", "byte_lit",
  "BasicLit", "FunctionLit", "PrimaryExpr", "StructLiteral", "KeyValList",
  "Selector", "Index", "TypeAssertion", "Expression", "Expression1",
  "Expression2", "Expression3", "Expression4", "Expression5", "UnaryExpr",
  "rel_op", "add_op", "mul_op", "unary_op", "assign_op", "PackageClause",
  "PackageName", "ImportDeclStar", "ImportDecl", "ImportSpecStar",
  "ImportSpec", "ImportPath", "AlternatePackageName", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-250)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-99)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      27,    13,    41,   -16,  -250,  -250,  -250,   131,    28,   272,
    -250,  -250,     6,   103,  -250,    81,   103,   -12,   124,    -5,
     143,  -250,  -250,  -250,  -250,    90,  -250,  -250,  -250,  -250,
      46,   105,  -250,  -250,  -250,  -250,  -250,    55,  -250,   157,
      34,  -250,    -1,   169,  -250,  -250,  -250,   127,  -250,    34,
     274,  -250,   112,  -250,   140,    34,  -250,    89,  -250,     4,
     140,   140,   139,  -250,  -250,    34,    59,  -250,   176,  -250,
    -250,  -250,  -250,  -250,    34,  -250,    19,   151,   193,   154,
     194,  -250,  -250,  -250,   155,    29,  -250,  -250,    84,    34,
    -250,  -250,   155,  -250,   -14,  -250,  -250,   140,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,    59,  -250,
     162,  -250,  -250,   161,  -250,  -250,  -250,  -250,  -250,    61,
    -250,   175,   177,   253,   179,   270,  -250,    42,    59,  -250,
    -250,   172,  -250,  -250,   216,    59,  -250,  -250,   173,    34,
    -250,  -250,  -250,  -250,  -250,  -250,    34,   -11,   181,  -250,
    -250,   191,    59,  -250,    34,    59,    12,  -250,  -250,  -250,
      59,    59,  -250,  -250,  -250,  -250,  -250,  -250,    59,  -250,
    -250,  -250,  -250,    59,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,    42,    61,  -250,  -250,  -250,   170,  -250,  -250,  -250,
    -250,    92,  -250,   222,  -250,   185,  -250,  -250,    83,   197,
    -250,   188,  -250,    34,   177,   253,   179,   270,    61,    59,
     233,  -250,    34,  -250,  -250,  -250,  -250,    59,    59,  -250,
     195,  -250,   238,   239,  -250,  -250,    59,    76,  -250,   186,
     205,  -250,  -250,  -250,  -250,  -250,   241,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,   125,   -46,   153,  -250,   223,
    -250,  -250,  -250,  -250,    59,    59,  -250,    42,   233,   213,
     220,  -250,    42,  -250,  -250,  -250,  -250,  -250,  -250,    59,
      42,  -250,  -250,    59,  -250,   173,   173,   221,    86,   225,
      95,  -250,   -46,  -250,  -250,  -250,  -250,   170,  -250,   111,
    -250,   -46,  -250,  -250,  -250,    59,    59,   284,  -250,    42,
    -250,  -250,   235,  -250,   173,     3,  -250,  -250,    59,   291,
    -250,  -250,  -250,  -250,     3,  -250,  -250,  -250,  -250,  -250,
    -250,  -250
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,   195,   194,     1,   198,     0,     0,
     197,   133,     0,     0,   207,     0,   205,     0,     0,     0,
       0,    34,    71,    72,    73,     2,    70,    32,    33,   196,
       0,     0,   206,   203,   199,   204,     6,     0,    68,     0,
       0,   118,     0,     0,   123,   127,   128,    63,    29,     0,
       0,   200,     0,   202,     0,     0,    52,     0,    55,     0,
       0,     0,     0,   105,   104,     0,     0,    79,   120,    78,
      74,    75,    76,    77,     0,   130,     0,     0,     0,    62,
      31,    69,   201,     7,     7,    48,    59,    53,     0,     0,
      57,    66,    67,   117,     0,   116,   115,     0,    83,   134,
     102,   103,   182,   183,   186,   187,   184,   185,     0,   140,
      81,   135,   136,     0,    80,   137,   138,   131,   132,   163,
     107,   152,   154,   156,   158,   160,   162,     0,     0,   129,
     124,     0,   126,    65,     0,     0,    35,    36,     0,     0,
      49,    51,    54,    56,    58,   109,     0,     0,     0,   139,
      37,     0,   146,   144,     0,     0,     0,   141,   142,   143,
       0,     0,   165,   166,   168,   170,   169,   167,     0,   171,
     172,   173,   174,     0,   178,   179,   175,   176,   177,   180,
     181,     0,   164,   119,   125,    64,    30,   122,     4,    39,
      38,     0,    61,   112,   108,     0,   110,    82,     0,     0,
     106,     0,   149,     0,   153,   155,   157,   159,   161,     0,
      24,    50,     0,   114,   113,   111,   145,     0,     0,   150,
       0,   121,    87,    89,     4,     4,    85,    83,    16,     5,
       0,    12,    21,    11,    22,    23,    34,    10,    20,    19,
      13,    14,    15,    17,    18,     0,   163,   122,    60,     0,
     147,   151,    86,    88,    24,    24,    84,     0,    24,     0,
       0,     9,     0,   188,   189,   190,   191,   192,   193,     0,
      45,    26,    27,     0,   100,     0,     0,     0,   122,     0,
     122,    41,     0,    25,     3,     8,    40,    28,    47,     0,
      44,    46,   148,     5,     5,     0,     0,     5,    42,     0,
      96,    97,     0,    98,     0,     0,    90,    43,    24,     5,
       5,     5,   101,    99,     0,    91,    95,    94,     5,     5,
      93,    92
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -250,  -250,  -136,   -28,   -22,  -250,   227,  -250,  -127,  -249,
    -250,  -250,  -250,  -250,    69,  -250,    78,  -250,   -45,  -250,
    -250,  -250,  -150,  -250,     5,    62,  -250,   288,  -250,   224,
    -250,   -17,  -250,  -250,  -250,  -250,   259,  -250,   -41,  -250,
    -250,  -250,  -250,  -250,  -173,  -250,    23,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,   178,  -250,  -250,
    -250,  -250,  -250,  -250,  -124,  -250,  -250,    71,  -250,  -250,
    -250,   174,  -250,  -250,  -250,  -120,  -250,  -250,  -250,  -250,
    -250,   -66,  -250,   163,   160,   156,   149,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,   317,  -250,    15,   311,
    -250
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,   228,   210,   259,    54,   136,   229,   230,   231,
     232,   233,   234,   235,   236,    48,   237,    23,    83,   138,
     190,   238,   239,   289,   290,    84,   140,    85,    57,    58,
     191,    59,    79,    24,    39,    25,    26,    67,    68,   109,
     110,   240,   241,   242,   243,   244,   275,   276,   277,   313,
     111,   112,    69,    70,   113,    71,   147,   148,   214,    72,
      96,    73,    27,    41,   245,    28,    76,    44,    45,    46,
     114,   115,   116,   117,   118,   119,   153,   198,   157,   158,
     159,   247,   121,   122,   123,   124,   125,   126,   168,   173,
     181,   127,   269,     3,     5,     9,    10,    30,    15,    33,
      16
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     120,    75,   189,    49,    61,   274,   279,   182,    80,    61,
      47,   186,    36,    47,    86,    91,    62,   225,    90,    42,
      63,    62,   270,    64,    95,    63,   155,    31,    64,   156,
       1,    89,    11,   129,    61,    65,   202,     4,    74,    61,
      65,     6,   151,    42,   141,    52,    62,    97,   144,     7,
      63,    62,   149,    64,    11,    63,    37,   145,    64,   312,
     194,   208,   183,    43,    97,    65,    98,    99,    11,   187,
      65,    66,    11,   188,   100,   101,    66,   146,    21,    47,
     203,    13,    55,    98,    99,    11,   199,    22,   130,   201,
     246,   100,   101,   102,   103,   104,    12,   139,   192,   105,
     106,    66,   260,    13,   107,   193,    66,   281,    47,   246,
     108,    55,   286,   200,    77,    51,   271,   272,   257,    21,
     288,    13,    92,    93,    56,   271,   272,   108,    22,    11,
     146,   283,   311,   155,   258,     8,   156,   282,   246,   293,
     294,   319,   282,   221,   297,   287,    34,   131,    40,   288,
     291,   249,   250,   142,   216,    50,   -98,   217,    87,   150,
     256,   211,   220,    88,   263,   188,   212,    47,   309,   310,
      53,   248,   264,   265,   266,   267,   268,    82,   318,   291,
     298,    60,    14,   271,   272,   299,    14,    32,   278,   280,
      32,    97,   222,    42,    18,   223,   254,   255,   224,   209,
     225,    78,   226,   187,    14,    19,    20,   292,    37,    94,
     227,    99,    11,   169,   170,   128,   132,   133,   100,   101,
     102,   103,   104,   171,   172,   -37,   105,   106,   134,   303,
     304,   107,   152,   135,   154,   160,   161,   184,    97,   222,
     185,    18,   223,   188,   209,   224,   196,   225,   213,   226,
     215,   -24,    19,    20,   108,   218,   188,   227,    99,    11,
     197,   219,   252,   253,   251,   100,   101,   102,   103,   104,
     261,   300,   301,   105,   106,   306,     8,    17,   107,    17,
      18,   273,    18,   262,   284,   285,   295,   315,   316,   317,
     296,    19,    20,    19,    20,   305,   320,   321,   174,   175,
     308,   108,   314,   188,   307,    38,   176,   177,   178,    81,
     179,   137,   143,   180,   162,   163,   164,   165,   302,   166,
     167,   205,   207,   204,   206,   195,    29,    35
};

static const yytype_int16 yycheck[] =
{
      66,    42,   138,    20,     5,   254,   255,   127,    49,     5,
      24,   135,    24,    24,    55,    60,    17,    14,    59,    24,
      21,    17,    68,    24,    65,    21,    72,    12,    24,    75,
       3,    27,    26,    74,     5,    36,    24,    24,    39,     5,
      36,     0,   108,    24,    85,    30,    17,     5,    89,    65,
      21,    17,    97,    24,    26,    21,    68,    71,    24,   308,
      71,   181,   128,    68,     5,    36,    24,    25,    26,   135,
      36,    72,    26,    70,    32,    33,    72,    94,     9,    24,
      68,    75,    27,    24,    25,    26,   152,     9,    69,   155,
     210,    32,    33,    34,    35,    36,    68,    68,   139,    40,
      41,    72,   229,    75,    45,   146,    72,   257,    24,   229,
      68,    27,   262,   154,    43,    69,    30,    31,    42,    50,
     270,    75,    60,    61,    69,    30,    31,    68,    50,    26,
     147,   258,   305,    72,    58,     4,    75,   257,   258,   275,
     276,   314,   262,   209,   280,   269,    65,    76,    24,   299,
     270,   217,   218,    69,    71,    65,    70,    74,    69,    97,
     226,    69,   203,    74,    39,    70,    74,    24,   304,   305,
      65,   212,    47,    48,    49,    50,    51,    65,   314,   299,
      69,    24,     8,    30,    31,    74,    12,    13,   254,   255,
      16,     5,     6,    24,     8,     9,   224,   225,    12,    74,
      14,    74,    16,   269,    30,    19,    20,   273,    68,    70,
      24,    25,    26,    34,    35,    39,    65,    24,    32,    33,
      34,    35,    36,    44,    45,    70,    40,    41,    74,   295,
     296,    45,    70,    39,    73,    60,    59,    65,     5,     6,
      24,     8,     9,    70,    74,    12,    65,    14,    26,    16,
      65,    65,    19,    20,    68,    58,    70,    24,    25,    26,
      69,    73,    24,    24,    69,    32,    33,    34,    35,    36,
      65,   293,   294,    40,    41,   297,     4,     5,    45,     5,
       8,    58,     8,    42,    71,    65,    65,   309,   310,   311,
      65,    19,    20,    19,    20,    11,   318,   319,    28,    29,
      65,    68,    11,    70,   299,    17,    36,    37,    38,    50,
      40,    84,    88,    43,    61,    62,    63,    64,   295,    66,
      67,   161,   173,   160,   168,   147,     9,    16
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    77,   169,    24,   170,     0,    65,     4,   171,
     172,    26,    68,    75,   147,   174,   176,     5,     8,    19,
      20,    90,    92,    93,   109,   111,   112,   138,   141,   172,
     173,   174,   147,   175,    65,   175,    24,    68,   103,   110,
      24,   139,    24,    68,   143,   144,   145,    24,    91,   107,
      65,    69,   174,    65,    81,    27,    69,   104,   105,   107,
      24,     5,    17,    21,    24,    36,    72,   113,   114,   128,
     129,   131,   135,   137,    39,   114,   142,   143,    74,   108,
     114,   112,    65,    94,   101,   103,   114,    69,    74,    27,
     114,    94,   101,   101,    70,   114,   136,     5,    24,    25,
      32,    33,    34,    35,    36,    40,    41,    45,    68,   115,
     116,   126,   127,   130,   146,   147,   148,   149,   150,   151,
     157,   158,   159,   160,   161,   162,   163,   167,    39,   114,
      69,   143,    65,    24,    74,    39,    82,    82,    95,    68,
     102,   114,    69,   105,   114,    71,   107,   132,   133,    94,
     101,   157,    70,   152,    73,    72,    75,   154,   155,   156,
      60,    59,    61,    62,    63,    64,    66,    67,   164,    34,
      35,    44,    45,   165,    28,    29,    36,    37,    38,    40,
      43,   166,   151,   157,    65,    24,   140,   157,    70,    78,
      96,   106,   114,   114,    71,   133,    65,    69,   153,   157,
     114,   157,    24,    68,   159,   160,   161,   162,   151,    74,
      79,    69,    74,    26,   134,    65,    71,    74,    58,    73,
     114,   157,     6,     9,    12,    14,    16,    24,    78,    83,
      84,    85,    86,    87,    88,    89,    90,    92,    97,    98,
     117,   118,   119,   120,   121,   140,   151,   157,   114,   157,
     157,    69,    24,    24,    79,    79,   157,    42,    58,    80,
      84,    65,    42,    39,    47,    48,    49,    50,    51,   168,
      68,    30,    31,    58,    85,   122,   123,   124,   157,    85,
     157,    98,   151,    84,    71,    65,    98,   140,    98,    99,
     100,   151,   157,    78,    78,    65,    65,    78,    69,    74,
      80,    80,   122,   157,   157,    11,    80,   100,    65,    78,
      78,   120,    85,   125,    11,    80,    80,    80,    78,   120,
      80,    80
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    78,    79,    80,    81,    82,    83,    83,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    85,    85,    85,    86,    87,    88,    88,    89,    90,
      91,    91,    92,    92,    92,    93,    93,    95,    94,    96,
      97,    97,    98,    99,    99,    99,   100,   100,   101,   101,
     102,   102,   103,   103,   103,   104,   104,   105,   105,   105,
     106,   106,   107,   107,   108,   108,   109,   109,   110,   111,
     111,   112,   112,   112,   113,   113,   113,   113,   114,   114,
     115,   115,   115,   116,   117,   117,   118,   118,   119,   119,
     120,   120,   120,   120,   120,   120,   121,   121,   122,   123,
     124,   125,   126,   127,   128,   128,   129,   130,   131,   131,
     132,   132,   133,   133,   134,   135,   136,   137,   138,   139,
     139,   140,   140,   141,   141,   142,   142,   143,   143,   144,
     145,   146,   146,   147,   148,   149,   149,   149,   149,   150,
     151,   151,   151,   151,   151,   152,   153,   153,   153,   154,
     155,   156,   157,   158,   158,   159,   159,   160,   160,   161,
     161,   162,   162,   163,   163,   164,   164,   164,   164,   164,
     164,   165,   165,   165,   165,   166,   166,   166,   166,   166,
     166,   166,   167,   167,   167,   167,   167,   167,   168,   168,
     168,   168,   168,   168,   169,   170,   171,   171,   171,   172,
     172,   173,   173,   174,   174,   174,   175,   176
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     5,     0,     0,     0,     0,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     3,     2,     2,     3,     2,
       4,     2,     1,     1,     1,     5,     5,     0,     3,     1,
       3,     3,     4,     3,     1,     0,     1,     1,     1,     2,
       3,     1,     2,     3,     4,     1,     3,     2,     3,     2,
       3,     1,     2,     1,     3,     2,     4,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     2,     1,     2,     1,     2,     1,
       5,     7,     9,     9,     7,     7,     5,     5,     1,     5,
       1,     1,     1,     1,     1,     1,     4,     1,     4,     3,
       2,     3,     2,     3,     1,     2,     1,     2,     2,     4,
       2,     3,     1,     2,     4,     3,     2,     1,     1,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     2,     2,     2,     3,     0,     3,     5,     2,
       3,     4,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     1,     0,     3,
       4,     3,     2,     2,     2,     1,     1,     1
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
#line 79 "src/parser.ypp"
                                                            {
		cout << "I am inside the program" << endl;
		theprogram = new astnode("StartFile",false, {(yyvsp[-3].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 1919 "parser.tab.cpp"
    break;

  case 3: /* Block: LBRACE OPENB StatementList CLOSEB RBRACE  */
#line 85 "src/parser.ypp"
                                                 { (yyval.node) = newId((yyvsp[-2].node), "Block"); }
#line 1925 "parser.tab.cpp"
    break;

  case 4: /* OPENB: %empty  */
#line 89 "src/parser.ypp"
                  {
		(yyval.node) = new astnode();
		 currscope++;
		 fullscope = fullscope + "/" + to_string(currscope);
		 //cout<<fullscope<<endl;
	}
#line 1936 "parser.tab.cpp"
    break;

  case 5: /* CLOSEB: %empty  */
#line 98 "src/parser.ypp"
                  {
		(yyval.node) = new astnode();
		 fullscope = fullscope.substr(0, fullscope.find_last_of("/") );
		 //cout<<fullscope<<endl;
	}
#line 1946 "parser.tab.cpp"
    break;

  case 6: /* SYMTABS: %empty  */
#line 106 "src/parser.ypp"
                  {
		currscope++;
		fullscope = fullscope + "/" + to_string(currscope);
		symtab = new symtab_t;
		symtab_top[fullscope] = symtab;
		//cout<<fullscope<<endl;
	}
#line 1958 "parser.tab.cpp"
    break;

  case 7: /* SYMTABE: %empty  */
#line 116 "src/parser.ypp"
                  {
		print_symtab();
		delete symtab;
		symtab = symtab_top["0"];
		fullscope = "0";
	}
#line 1969 "parser.tab.cpp"
    break;

  case 8: /* StatementList: StatementList Statement SEMICOLON  */
#line 125 "src/parser.ypp"
                                      { (yyval.node) = new astnode("StatementList", false, {(yyvsp[-2].node), (yyvsp[-1].node)});}
#line 1975 "parser.tab.cpp"
    break;

  case 9: /* StatementList: Statement SEMICOLON  */
#line 126 "src/parser.ypp"
                          { (yyval.node) = newId((yyvsp[-1].node), "StatementList"); }
#line 1981 "parser.tab.cpp"
    break;

  case 10: /* Statement: Declaration  */
#line 130 "src/parser.ypp"
                    {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 1987 "parser.tab.cpp"
    break;

  case 11: /* Statement: LabeledStmt  */
#line 131 "src/parser.ypp"
                      {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 1993 "parser.tab.cpp"
    break;

  case 12: /* Statement: SimpleStmt  */
#line 132 "src/parser.ypp"
                     {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 1999 "parser.tab.cpp"
    break;

  case 13: /* Statement: ReturnStmt  */
#line 133 "src/parser.ypp"
                     {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2005 "parser.tab.cpp"
    break;

  case 14: /* Statement: BreakStmt  */
#line 134 "src/parser.ypp"
                    {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2011 "parser.tab.cpp"
    break;

  case 15: /* Statement: ContinueStmt  */
#line 135 "src/parser.ypp"
                       {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2017 "parser.tab.cpp"
    break;

  case 16: /* Statement: Block  */
#line 136 "src/parser.ypp"
                {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2023 "parser.tab.cpp"
    break;

  case 17: /* Statement: IfStmt  */
#line 137 "src/parser.ypp"
                 {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2029 "parser.tab.cpp"
    break;

  case 18: /* Statement: ForStmt  */
#line 138 "src/parser.ypp"
                  {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2035 "parser.tab.cpp"
    break;

  case 19: /* Statement: FunctionCall  */
#line 139 "src/parser.ypp"
                       {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2041 "parser.tab.cpp"
    break;

  case 20: /* Statement: FunctionStmt  */
#line 140 "src/parser.ypp"
                       {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2047 "parser.tab.cpp"
    break;

  case 21: /* SimpleStmt: EmptyStmt  */
#line 144 "src/parser.ypp"
                  {(yyval.node) = newId((yyvsp[0].node), "SimpleStmt");}
#line 2053 "parser.tab.cpp"
    break;

  case 22: /* SimpleStmt: IncDecStmt  */
#line 145 "src/parser.ypp"
                     {(yyval.node) = newId((yyvsp[0].node), "SimpleStmt");}
#line 2059 "parser.tab.cpp"
    break;

  case 23: /* SimpleStmt: Assignment  */
#line 146 "src/parser.ypp"
                     {(yyval.node) = newId((yyvsp[0].node), "SimpleStmt");}
#line 2065 "parser.tab.cpp"
    break;

  case 24: /* EmptyStmt: %empty  */
#line 150 "src/parser.ypp"
                  { (yyval.node) = new astnode(); }
#line 2071 "parser.tab.cpp"
    break;

  case 25: /* LabeledStmt: IDENTIFIER COLON Statement  */
#line 154 "src/parser.ypp"
                                   {(yyval.node) = new astnode("LabeledStmt", false, {new astnode(IDENTIFIER, (yyvsp[-2].data)), new astnode(COLON), (yyvsp[0].node)});}
#line 2077 "parser.tab.cpp"
    break;

  case 26: /* IncDecStmt: Expression INC  */
#line 158 "src/parser.ypp"
                       {
		(yyval.node) = new astnode("IncDecStmt", false, {(yyvsp[-1].node), new astnode(INC, (yyvsp[0].data))});
			string tac;
			tac.append(to_string(lineno));
			tac.append(",");
			tac.append("+");
			tac.append(",");
			tac.append((yyvsp[-1].node)->id);
			tac.append(",");
			tac.append((yyvsp[-1].node)->id);
			tac.append(",");
			tac.append("1");
			tac.append("\n");
			prog.push_back(tac);
			lineno++;
		}
#line 2098 "parser.tab.cpp"
    break;

  case 27: /* IncDecStmt: Expression DEC  */
#line 174 "src/parser.ypp"
                         {
		(yyval.node) = new astnode("IncDecStmt", false, {(yyvsp[-1].node), new astnode(INC, (yyvsp[0].data))});
		string tac;
		tac.append(to_string(lineno));
		tac.append(",");
		tac.append("-");
		tac.append(",");
		tac.append((yyvsp[-1].node)->id);
		tac.append(",");
		tac.append((yyvsp[-1].node)->id);
		tac.append(",");
		tac.append("1");
		tac.append("\n");
		prog.push_back(tac);
		lineno++;
	}
#line 2119 "parser.tab.cpp"
    break;

  case 28: /* Assignment: ExpressionList assign_op ExpressionList  */
#line 193 "src/parser.ypp"
                                                {
		(yyval.node) = new astnode("Assignment", false, {(yyvsp[-2].node),(yyvsp[-1].node), (yyvsp[0].node)});
		/*
		string temp1 = $1;
		string temp2 = $3;
		vector <string> expr1 = split(temp, ',');
		vector <string> expr2 = split(temp1, ',');

		// if there are unequal number of elements in either side of the assignment
		if(expr1.size() != expr2.size()){
			cout<<"Error: Incompatible assignment"<<endl;
			// probably shouldn't be putting exit(0) here not sure though
			exit(0);
		}

		// if it is a valid assignment
		else {
			string operator = $2->value;

			if (operator == "+=") {
				operator = "+";
			}
			else if (operator == "-=") {
				operator = "-";
			}
			else if (operator == "*=") {
				operator = "*";
			}
			else if (operator == "/=") {
				operator = "/";
			}
			else if (operator == "%=") {
				operator = "%";
			}

			if (operator == "=") {
				for (int i = 0; i < expr1.size(); i++) {
					string tac;
					tac.append(to_string(lineno));
					tac.append(",");
					tac.append("=");
					tac.append(",");
					tac.append(expr1[i]);
					tac.append(",");
					tac.append(expr2[i]);
					tac.append(",");
					tac.append("1");
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
					tac.append(operator);
					tac.append(",");
					tac.append(expr1[i]);
					tac.append(",");
					tac.append(expr2[i]);
					tac.append(",");
					tac.append("1");
					tac.append("\n");
					prog.push_back(tac);
					lineno++;
				}
			}
		}
		*/
	}
#line 2196 "parser.tab.cpp"
    break;

  case 29: /* VarDecl: VAR VarSpec  */
#line 268 "src/parser.ypp"
                            {(yyval.node) = new astnode("VarDecl", false, {new astnode(VAR, (yyvsp[-1].data)), (yyvsp[0].node)});}
#line 2202 "parser.tab.cpp"
    break;

  case 30: /* VarSpec: IdentifierList Type ASSIGN ExpressionList  */
#line 272 "src/parser.ypp"
                                                          {(yyval.node) = new astnode("VarSpec", false, {(yyvsp[-3].node), (yyvsp[-2].node), new astnode(ASSIGN, (yyvsp[-1].data)),  (yyvsp[0].node)});
			symadd_list((yyvsp[-3].node), (yyvsp[-2].node)->type, IDENTIFIER);
			/*
			string temp1 = $1->id;
			string temp2 = $4->id;
			vector <string> expr1 = temp1.split(temp1, ',');
			vector <string> expr2 = temp2.split(temp2, ',');

			if (expr1.size() != expr2.size()) {
				cout<<"Error: Incompatible assignment"<<endl;
				exit(0);
			}

			else {
				for (int i = 0; i < expr1.size(); i++) {
					string tac;
					tac.append(to_string(lineno));
					tac.append(",");
					tac.append($3->id);
					tac.append(",");
					tac.append(expr1[i]);
					tac.append(",");
					tac.append(expr2[i]);
					tac.append("\n");
					prog.push_back(tac);
					lineno++;
				}
			}
			*/
		}
#line 2237 "parser.tab.cpp"
    break;

  case 31: /* VarSpec: IdentifierList Type  */
#line 302 "src/parser.ypp"
                                      {(yyval.node) = new astnode("VarSpec", false, {(yyvsp[-1].node), (yyvsp[0].node)});
			// symadd_list($1, $2->type, IDENTIFIER);
			/*
			string temp1 = $1->id;
			string temp2 = $2->id;

			char temp_char = temp2[0];

			if (temp_char == '[') {
				int index = 1;
				while (temp2[index] != ']') {
					index++;
				}
				string length = temp2.substr(1, index-1);
				string tac = to_string(lineno);
				tac.append(",array,");
				tac.append(temp1);
				tac.append(",");
				tac.append(length);
				tac.append("\n");
				prog.push_back(tac);
				lineno++;
			}
			*/
		}
#line 2267 "parser.tab.cpp"
    break;

  case 32: /* Declaration: ConstDecl  */
#line 330 "src/parser.ypp"
                  {
		(yyval.node) = newId((yyvsp[0].node), "Declaration");
		// nahi kr rha abhi toh
	}
#line 2276 "parser.tab.cpp"
    break;

  case 33: /* Declaration: TypeDecl  */
#line 334 "src/parser.ypp"
                   {
		(yyval.node) = newId((yyvsp[0].node), "Declaration");
		// nahi kr rha abhi toh
	}
#line 2285 "parser.tab.cpp"
    break;

  case 34: /* Declaration: VarDecl  */
#line 338 "src/parser.ypp"
                  {
		(yyval.node) = newId((yyvsp[0].node), "Declaration");
		// nahi kr rha abhi toh
	}
#line 2294 "parser.tab.cpp"
    break;

  case 35: /* FunctionDecl: FUNC IDENTIFIER SYMTABS Function SYMTABE  */
#line 346 "src/parser.ypp"
                                                         { (yyval.node) = new astnode("FunctionDecl", false, {new astnode(IDENTIFIER, (yyvsp[-3].data)), (yyvsp[-1].node)});
			// symadd($2->value, $4->type);
		}
#line 2302 "parser.tab.cpp"
    break;

  case 36: /* FunctionDecl: FUNC IDENTIFIER SYMTABS Signature SYMTABE  */
#line 349 "src/parser.ypp"
                                                            { (yyval.node) = new astnode("FunctionDecl", false, {new astnode(IDENTIFIER, (yyvsp[-3].data)), (yyvsp[-1].node)});
			// symadd($2->value, $4->type);
		}
#line 2310 "parser.tab.cpp"
    break;

  case 37: /* $@1: %empty  */
#line 360 "src/parser.ypp"
                          {fullscope=fullscope.substr(0,fullscope.find_last_of("/"));currscope--;}
#line 2316 "parser.tab.cpp"
    break;

  case 38: /* Function: Signature $@1 FunctionBody  */
#line 360 "src/parser.ypp"
                                                                                                                {
			fullscope = fullscope +"/"+ to_string(currscope);
			(yyval.node) = new astnode("Function", false, {(yyvsp[-2].node), (yyvsp[0].node)});
		}
#line 2325 "parser.tab.cpp"
    break;

  case 39: /* FunctionBody: Block  */
#line 367 "src/parser.ypp"
                      {(yyval.node) = newId((yyvsp[0].node), "FunctionBody");}
#line 2331 "parser.tab.cpp"
    break;

  case 40: /* FunctionStmt: VarDecl DEFINE FunctionCall  */
#line 371 "src/parser.ypp"
                                            {(yyval.node) = new astnode("FunctionStmt", false, {(yyvsp[-2].node), (yyvsp[0].node)});}
#line 2337 "parser.tab.cpp"
    break;

  case 41: /* FunctionStmt: IDENTIFIER DEFINE FunctionCall  */
#line 372 "src/parser.ypp"
                                                 {(yyval.node) = new astnode("FunctionStmt", false, {new astnode(IDENTIFIER, (yyvsp[-2].data)), (yyvsp[0].node)});}
#line 2343 "parser.tab.cpp"
    break;

  case 42: /* FunctionCall: PrimaryExpr LPAREN ArgumentList RPAREN  */
#line 375 "src/parser.ypp"
                                                       {(yyval.node) = new astnode("FunctionCall", false, {(yyvsp[-3].node), (yyvsp[-1].node)});}
#line 2349 "parser.tab.cpp"
    break;

  case 43: /* ArgumentList: ArgumentList COMMA Arguments  */
#line 379 "src/parser.ypp"
                                             {(yyval.node) = new astnode("ArgumentList", false, {(yyvsp[-2].node), (yyvsp[0].node)});}
#line 2355 "parser.tab.cpp"
    break;

  case 44: /* ArgumentList: Arguments  */
#line 380 "src/parser.ypp"
                            {(yyval.node) = newId((yyvsp[0].node), "ArgumentList");}
#line 2361 "parser.tab.cpp"
    break;

  case 45: /* ArgumentList: %empty  */
#line 381 "src/parser.ypp"
                            { (yyval.node) = new astnode();}
#line 2367 "parser.tab.cpp"
    break;

  case 46: /* Arguments: PrimaryExpr  */
#line 384 "src/parser.ypp"
                            {(yyval.node) = newId((yyvsp[0].node), "Arguments");}
#line 2373 "parser.tab.cpp"
    break;

  case 47: /* Arguments: FunctionCall  */
#line 385 "src/parser.ypp"
                               {(yyval.node) = newId((yyvsp[0].node), "Arguments");}
#line 2379 "parser.tab.cpp"
    break;

  case 48: /* Signature: Parameters  */
#line 389 "src/parser.ypp"
                   {(yyval.node) = newId((yyvsp[0].node), "Signature"); }
#line 2385 "parser.tab.cpp"
    break;

  case 49: /* Signature: Parameters Result  */
#line 390 "src/parser.ypp"
                            {(yyval.node) = new astnode("Signature", false, {(yyvsp[-1].node), (yyvsp[0].node)});}
#line 2391 "parser.tab.cpp"
    break;

  case 50: /* Result: LPAREN TypeList RPAREN  */
#line 394 "src/parser.ypp"
                               {(yyval.node) = newId((yyvsp[-1].node), "Result");}
#line 2397 "parser.tab.cpp"
    break;

  case 51: /* Result: Type  */
#line 395 "src/parser.ypp"
               {(yyval.node) = newId((yyvsp[0].node), "Result");}
#line 2403 "parser.tab.cpp"
    break;

  case 52: /* Parameters: LPAREN RPAREN  */
#line 399 "src/parser.ypp"
                      {(yyval.node) = new astnode(LPAREN);}
#line 2409 "parser.tab.cpp"
    break;

  case 53: /* Parameters: LPAREN ParameterDeclStar RPAREN  */
#line 400 "src/parser.ypp"
                                          {(yyval.node) = newId((yyvsp[-1].node), "Parameters");}
#line 2415 "parser.tab.cpp"
    break;

  case 54: /* Parameters: LPAREN ParameterDeclStar COMMA RPAREN  */
#line 401 "src/parser.ypp"
                                                {(yyval.node) = newId((yyvsp[-2].node), "Parameters");}
#line 2421 "parser.tab.cpp"
    break;

  case 55: /* ParameterDeclStar: ParameterDecl  */
#line 405 "src/parser.ypp"
                      {(yyval.node) = newId((yyvsp[0].node), "ParameterDeclStar");}
#line 2427 "parser.tab.cpp"
    break;

  case 56: /* ParameterDeclStar: ParameterDeclStar COMMA ParameterDecl  */
#line 406 "src/parser.ypp"
                                                {(yyval.node) = new astnode("ParameterDeclStar", false, {(yyvsp[-2].node), (yyvsp[0].node)});}
#line 2433 "parser.tab.cpp"
    break;

  case 57: /* ParameterDecl: IdentifierList Type  */
#line 410 "src/parser.ypp"
                            {
		// symadd_list($1, $2->type, IDENTIFIER);
		(yyval.node) = new astnode("ParameterDecl", false, {(yyvsp[-1].node), (yyvsp[0].node)});
	}
#line 2442 "parser.tab.cpp"
    break;

  case 58: /* ParameterDecl: IdentifierList ELLIPSIS Type  */
#line 414 "src/parser.ypp"
                                        {(yyval.node) = new astnode("ParameterDecl", false, {(yyvsp[-2].node), new astnode(ELLIPSIS,(yyvsp[-1].data)), (yyvsp[0].node)});}
#line 2448 "parser.tab.cpp"
    break;

  case 59: /* ParameterDecl: ELLIPSIS Type  */
#line 415 "src/parser.ypp"
                        {(yyval.node) = new astnode("ParameterDecl", false, {new astnode(ELLIPSIS, (yyvsp[-1].data)), (yyvsp[0].node)});}
#line 2454 "parser.tab.cpp"
    break;

  case 60: /* TypeList: TypeList COMMA Type  */
#line 419 "src/parser.ypp"
                        {(yyval.node) = new astnode("TypeList", false, {(yyvsp[-2].node), (yyvsp[0].node)});}
#line 2460 "parser.tab.cpp"
    break;

  case 61: /* TypeList: Type  */
#line 420 "src/parser.ypp"
           {(yyval.node) = new astnode("TypeList", false, {(yyvsp[0].node)});}
#line 2466 "parser.tab.cpp"
    break;

  case 62: /* IdentifierList: IDENTIFIER IdentifierLIST  */
#line 424 "src/parser.ypp"
                                          {(yyval.node) = new astnode("IdentifierList", false, {new astnode(IDENTIFIER, (yyvsp[-1].data)), (yyvsp[0].node)});}
#line 2472 "parser.tab.cpp"
    break;

  case 63: /* IdentifierList: IDENTIFIER  */
#line 425 "src/parser.ypp"
                             {(yyval.node) = new astnode(IDENTIFIER, (yyvsp[0].data));}
#line 2478 "parser.tab.cpp"
    break;

  case 64: /* IdentifierLIST: IdentifierLIST COMMA IDENTIFIER  */
#line 428 "src/parser.ypp"
                                                { (yyval.node) = new astnode("IdentifierLIST", false, {(yyvsp[-2].node), new astnode(IDENTIFIER, (yyvsp[0].data))});}
#line 2484 "parser.tab.cpp"
    break;

  case 65: /* IdentifierLIST: COMMA IDENTIFIER  */
#line 429 "src/parser.ypp"
                                   {(yyval.node) = new astnode(IDENTIFIER, (yyvsp[0].data));}
#line 2490 "parser.tab.cpp"
    break;

  case 66: /* MethodDecl: FUNC Receiver IDENTIFIER Function  */
#line 433 "src/parser.ypp"
                                          {(yyval.node) = new astnode("MethodDecl", false, {(yyvsp[-2].node), (yyvsp[0].node)});}
#line 2496 "parser.tab.cpp"
    break;

  case 67: /* MethodDecl: FUNC Receiver IDENTIFIER Signature  */
#line 434 "src/parser.ypp"
                                             {(yyval.node) = new astnode("MethodDecl", false, {(yyvsp[-2].node), (yyvsp[0].node)});}
#line 2502 "parser.tab.cpp"
    break;

  case 68: /* Receiver: Parameters  */
#line 438 "src/parser.ypp"
                   {(yyval.node) = newId((yyvsp[0].node), "Receiver");}
#line 2508 "parser.tab.cpp"
    break;

  case 69: /* TopLevelDeclStar: TopLevelDeclStar SEMICOLON TopLevelDecl  */
#line 442 "src/parser.ypp"
                                                          {(yyval.node) = new astnode("TopLevelDeclStar", false, {(yyvsp[-2].node), (yyvsp[0].node)});}
#line 2514 "parser.tab.cpp"
    break;

  case 70: /* TopLevelDeclStar: TopLevelDecl  */
#line 443 "src/parser.ypp"
                   {(yyval.node) = newId((yyvsp[0].node), "TopLevelDeclStar");}
#line 2520 "parser.tab.cpp"
    break;

  case 71: /* TopLevelDecl: Declaration  */
#line 447 "src/parser.ypp"
                    {(yyval.node) = newId((yyvsp[0].node), "TopLevelDecl");}
#line 2526 "parser.tab.cpp"
    break;

  case 72: /* TopLevelDecl: FunctionDecl  */
#line 448 "src/parser.ypp"
                       {(yyval.node) = newId((yyvsp[0].node), "TopLevelDecl");}
#line 2532 "parser.tab.cpp"
    break;

  case 73: /* TopLevelDecl: MethodDecl  */
#line 449 "src/parser.ypp"
                     {(yyval.node) = newId((yyvsp[0].node), "TopLevelDecl");}
#line 2538 "parser.tab.cpp"
    break;

  case 74: /* TypeLit: ArrayType  */
#line 453 "src/parser.ypp"
                  {(yyval.node) = newId((yyvsp[0].node), "TypeLit");}
#line 2544 "parser.tab.cpp"
    break;

  case 75: /* TypeLit: StructType  */
#line 454 "src/parser.ypp"
                     {(yyval.node) = newId((yyvsp[0].node), "TypeLit");}
#line 2550 "parser.tab.cpp"
    break;

  case 76: /* TypeLit: PointerType  */
#line 455 "src/parser.ypp"
                      {(yyval.node) = newId((yyvsp[0].node), "TypeLit");}
#line 2556 "parser.tab.cpp"
    break;

  case 77: /* TypeLit: FunctionType  */
#line 456 "src/parser.ypp"
                       {(yyval.node) = newId((yyvsp[0].node), "TypeLit");}
#line 2562 "parser.tab.cpp"
    break;

  case 78: /* Type: TypeName  */
#line 460 "src/parser.ypp"
                 {(yyval.node) = newId((yyvsp[0].node), "Type");}
#line 2568 "parser.tab.cpp"
    break;

  case 79: /* Type: TypeLit  */
#line 461 "src/parser.ypp"
                  {(yyval.node) = newId((yyvsp[0].node), "Type");}
#line 2574 "parser.tab.cpp"
    break;

  case 80: /* Operand: Literal  */
#line 465 "src/parser.ypp"
                {(yyval.node) = newId((yyvsp[0].node), "Operand");}
#line 2580 "parser.tab.cpp"
    break;

  case 81: /* Operand: OperandName  */
#line 466 "src/parser.ypp"
                      {(yyval.node) = newId((yyvsp[0].node), "Operand");}
#line 2586 "parser.tab.cpp"
    break;

  case 82: /* Operand: LPAREN Expression RPAREN  */
#line 467 "src/parser.ypp"
                                   {(yyval.node) = newId((yyvsp[-1].node), "Operand");}
#line 2592 "parser.tab.cpp"
    break;

  case 83: /* OperandName: IDENTIFIER  */
#line 471 "src/parser.ypp"
                   {(yyval.node) = new astnode(IDENTIFIER);}
#line 2598 "parser.tab.cpp"
    break;

  case 84: /* ReturnStmt: RETURN Expression  */
#line 475 "src/parser.ypp"
                          {(yyval.node) = newId((yyvsp[0].node), "ReturnStmt");}
#line 2604 "parser.tab.cpp"
    break;

  case 85: /* ReturnStmt: RETURN  */
#line 476 "src/parser.ypp"
                 {(yyval.node) = new astnode(RETURN);}
#line 2610 "parser.tab.cpp"
    break;

  case 86: /* BreakStmt: BREAK IDENTIFIER  */
#line 480 "src/parser.ypp"
                         {(yyval.node) = new astnode("BreakStmt", false, {new astnode(BREAK, (yyvsp[-1].data)), new astnode(IDENTIFIER, (yyvsp[0].data))});}
#line 2616 "parser.tab.cpp"
    break;

  case 87: /* BreakStmt: BREAK  */
#line 481 "src/parser.ypp"
                {(yyval.node) = new astnode(BREAK);}
#line 2622 "parser.tab.cpp"
    break;

  case 88: /* ContinueStmt: CONTINUE IDENTIFIER  */
#line 485 "src/parser.ypp"
                            {(yyval.node) = new astnode("ContinueStmt", false, {new astnode(BREAK, (yyvsp[-1].data)), new astnode(IDENTIFIER, (yyvsp[0].data))});}
#line 2628 "parser.tab.cpp"
    break;

  case 89: /* ContinueStmt: CONTINUE  */
#line 486 "src/parser.ypp"
                   {(yyval.node) = new astnode(CONTINUE);}
#line 2634 "parser.tab.cpp"
    break;

  case 90: /* IfStmt: IF OPENB Expression Block CLOSEB  */
#line 490 "src/parser.ypp"
                                         {(yyval.node) = new astnode("IfStmt", false, {(yyvsp[-2].node), (yyvsp[-1].node)});}
#line 2640 "parser.tab.cpp"
    break;

  case 91: /* IfStmt: IF OPENB SimpleStmt SEMICOLON Expression Block CLOSEB  */
#line 491 "src/parser.ypp"
                                                               {(yyval.node) = new astnode("IfStmt", false, {(yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[-1].node)});}
#line 2646 "parser.tab.cpp"
    break;

  case 92: /* IfStmt: IF OPENB SimpleStmt SEMICOLON Expression Block ELSE IfStmt CLOSEB  */
#line 492 "src/parser.ypp"
                                                                           {(yyval.node) = new astnode("IfStmt", false, {(yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node)});}
#line 2652 "parser.tab.cpp"
    break;

  case 93: /* IfStmt: IF OPENB SimpleStmt SEMICOLON Expression Block ELSE Block CLOSEB  */
#line 493 "src/parser.ypp"
                                                                           {(yyval.node) = new astnode("IfStmt", false, {(yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node)});}
#line 2658 "parser.tab.cpp"
    break;

  case 94: /* IfStmt: IF OPENB Expression Block ELSE IfStmt CLOSEB  */
#line 494 "src/parser.ypp"
                                                      {(yyval.node) = new astnode("IfStmt", false, {(yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node)});}
#line 2664 "parser.tab.cpp"
    break;

  case 95: /* IfStmt: IF OPENB Expression Block ELSE Block CLOSEB  */
#line 495 "src/parser.ypp"
                                                      {(yyval.node) = new astnode("IfStmt", false, {(yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node)});}
#line 2670 "parser.tab.cpp"
    break;

  case 96: /* ForStmt: FOR OPENB Condition Block CLOSEB  */
#line 499 "src/parser.ypp"
                                         {(yyval.node) = new astnode("ForStmt", false, {(yyvsp[-2].node), (yyvsp[-1].node)});}
#line 2676 "parser.tab.cpp"
    break;

  case 97: /* ForStmt: FOR OPENB ForClause Block CLOSEB  */
#line 500 "src/parser.ypp"
                                          {(yyval.node) = new astnode("ForStmt", false, {(yyvsp[-2].node), (yyvsp[-1].node)});}
#line 2682 "parser.tab.cpp"
    break;

  case 98: /* Condition: Expression  */
#line 504 "src/parser.ypp"
                   {(yyval.node) = newId((yyvsp[0].node), "Condition");}
#line 2688 "parser.tab.cpp"
    break;

  case 99: /* ForClause: InitStmt SEMICOLON Condition SEMICOLON PostStmt  */
#line 508 "src/parser.ypp"
                                                        {(yyval.node) = new astnode("ForClause", false, {(yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)});}
#line 2694 "parser.tab.cpp"
    break;

  case 100: /* InitStmt: SimpleStmt  */
#line 512 "src/parser.ypp"
                   {(yyval.node) = newId((yyvsp[0].node), "InitStmt");}
#line 2700 "parser.tab.cpp"
    break;

  case 101: /* PostStmt: SimpleStmt  */
#line 516 "src/parser.ypp"
                   {(yyval.node) = newId((yyvsp[0].node), "InitStmt");}
#line 2706 "parser.tab.cpp"
    break;

  case 102: /* int_lit: INTEGER  */
#line 520 "src/parser.ypp"
                 { (yyval.node) = new astnode(INTEGER,(yyvsp[0].data));}
#line 2712 "parser.tab.cpp"
    break;

  case 103: /* float_lit: FLOAT  */
#line 524 "src/parser.ypp"
                { (yyval.node) = new astnode(FLOAT,(yyvsp[0].data));}
#line 2718 "parser.tab.cpp"
    break;

  case 104: /* TypeName: IDENTIFIER  */
#line 528 "src/parser.ypp"
                   { (yyval.node) = new astnode(IDENTIFIER,(yyvsp[0].data));}
#line 2724 "parser.tab.cpp"
    break;

  case 105: /* TypeName: VAR_TYPE  */
#line 529 "src/parser.ypp"
                   { (yyval.node) = new astnode(VAR_TYPE,(yyvsp[0].data));}
#line 2730 "parser.tab.cpp"
    break;

  case 106: /* ArrayType: LBRACK ArrayLength RBRACK Type  */
#line 533 "src/parser.ypp"
                                       { (yyval.node) = new astnode("",false,{(yyvsp[-2].node),(yyvsp[0].node)}); }
#line 2736 "parser.tab.cpp"
    break;

  case 107: /* ArrayLength: Expression  */
#line 537 "src/parser.ypp"
                   { (yyval.node) = newId((yyvsp[0].node), "ArrayLength"); }
#line 2742 "parser.tab.cpp"
    break;

  case 108: /* StructType: STRUCT LBRACE FieldDeclStar RBRACE  */
#line 541 "src/parser.ypp"
                                       { (yyval.node) = newId((yyvsp[-1].node), "StructType"); }
#line 2748 "parser.tab.cpp"
    break;

  case 109: /* StructType: STRUCT LBRACE RBRACE  */
#line 542 "src/parser.ypp"
                           { (yyval.node) = new astnode(STRUCT, (yyvsp[-2].data)); }
#line 2754 "parser.tab.cpp"
    break;

  case 110: /* FieldDeclStar: FieldDecl SEMICOLON  */
#line 546 "src/parser.ypp"
                        { (yyval.node) = newId((yyvsp[-1].node), "FieldDeclStar"); }
#line 2760 "parser.tab.cpp"
    break;

  case 111: /* FieldDeclStar: FieldDeclStar FieldDecl SEMICOLON  */
#line 547 "src/parser.ypp"
                                        { (yyval.node) = new astnode("FieldDeclStar",false,{(yyvsp[-2].node),(yyvsp[-1].node)}); }
#line 2766 "parser.tab.cpp"
    break;

  case 112: /* FieldDecl: IdentifierList Type  */
#line 551 "src/parser.ypp"
                            { (yyval.node) = new astnode("FieldDecl",false,{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2772 "parser.tab.cpp"
    break;

  case 113: /* FieldDecl: IdentifierList Type Tag  */
#line 552 "src/parser.ypp"
                                  { (yyval.node) = new astnode("FieldDecl",false,{(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2778 "parser.tab.cpp"
    break;

  case 114: /* Tag: STRING  */
#line 556 "src/parser.ypp"
               { (yyval.node) = new astnode(new DefinedType("string"), STRING, (yyvsp[0].data));}
#line 2784 "parser.tab.cpp"
    break;

  case 115: /* PointerType: MUL BaseType  */
#line 560 "src/parser.ypp"
                     { (yyval.node) = new astnode(new PntrType((yyvsp[0].node)->type),"PointerType",false,{(yyvsp[0].node)}); }
#line 2790 "parser.tab.cpp"
    break;

  case 116: /* BaseType: Type  */
#line 563 "src/parser.ypp"
             { (yyval.node) = new astnode((yyvsp[0].node)->type, "BaseType",false,{(yyvsp[0].node)}); }
#line 2796 "parser.tab.cpp"
    break;

  case 117: /* FunctionType: FUNC Signature  */
#line 568 "src/parser.ypp"
                       { (yyval.node) = newId((yyvsp[0].node), "FunctionType"); }
#line 2802 "parser.tab.cpp"
    break;

  case 118: /* ConstDecl: CONST ConstSpec  */
#line 572 "src/parser.ypp"
                                { (yyval.node) = newId((yyvsp[0].node), "ConstDecl"); }
#line 2808 "parser.tab.cpp"
    break;

  case 119: /* ConstSpec: IDENTIFIER Type ASSIGN Expression  */
#line 576 "src/parser.ypp"
                                                  { (yyval.node) = new astnode("ConstSpec",false,{(yyvsp[-2].node),(yyvsp[0].node)});
			// symadd($1->value, $2->type);
			//cout<<"SCOPE"<<any_scope("test")<<endl;
		}
#line 2817 "parser.tab.cpp"
    break;

  case 120: /* ConstSpec: IDENTIFIER Type  */
#line 580 "src/parser.ypp"
                                  { (yyval.node) = newId((yyvsp[0].node), "ConstSpec");
			// symadd($1->value, $2->type);
			//cout<<"SCOPE"<<any_scope("test")<<endl;
		}
#line 2826 "parser.tab.cpp"
    break;

  case 121: /* ExpressionList: ExpressionList COMMA Expression  */
#line 587 "src/parser.ypp"
                                                { (yyval.node) = new astnode("ExpressionList",false,{(yyvsp[-2].node),(yyvsp[0].node)}); }
#line 2832 "parser.tab.cpp"
    break;

  case 122: /* ExpressionList: Expression  */
#line 588 "src/parser.ypp"
                             { (yyval.node) = newId((yyvsp[0].node), "ExpressionList"); }
#line 2838 "parser.tab.cpp"
    break;

  case 123: /* TypeDecl: TYPE TypeSpec  */
#line 592 "src/parser.ypp"
                               { (yyval.node) = new astnode("TypeDecl",false,{new astnode(TYPE,(yyvsp[-1].data)),(yyvsp[0].node)}); }
#line 2844 "parser.tab.cpp"
    break;

  case 124: /* TypeDecl: TYPE LPAREN TypeSpecList RPAREN  */
#line 593 "src/parser.ypp"
                                                  { (yyval.node) = new astnode("TypeDecl",false,{new astnode(TYPE,(yyvsp[-3].data)), (yyvsp[-1].node)}); }
#line 2850 "parser.tab.cpp"
    break;

  case 125: /* TypeSpecList: TypeSpecList TypeSpec SEMICOLON  */
#line 597 "src/parser.ypp"
                                                { (yyval.node) = new astnode("TypeSpecList",false,{(yyvsp[-2].node),(yyvsp[-1].node)}); }
#line 2856 "parser.tab.cpp"
    break;

  case 126: /* TypeSpecList: TypeSpec SEMICOLON  */
#line 598 "src/parser.ypp"
                                     { (yyval.node) = newId((yyvsp[-1].node), "TypeSpecList"); }
#line 2862 "parser.tab.cpp"
    break;

  case 127: /* TypeSpec: AliasDecl  */
#line 601 "src/parser.ypp"
                          { (yyval.node) = newId((yyvsp[0].node), "TypeSpec"); }
#line 2868 "parser.tab.cpp"
    break;

  case 128: /* TypeSpec: TypeDef  */
#line 602 "src/parser.ypp"
                          { (yyval.node) = newId((yyvsp[0].node), "TypeSpec"); }
#line 2874 "parser.tab.cpp"
    break;

  case 129: /* AliasDecl: IDENTIFIER ASSIGN Type  */
#line 606 "src/parser.ypp"
                                       { (yyval.node) = new astnode("AliasDecl",false,{new astnode(IDENTIFIER,(yyvsp[-2].data)), new astnode(ASSIGN,(yyvsp[-1].data)), (yyvsp[0].node)}); }
#line 2880 "parser.tab.cpp"
    break;

  case 130: /* TypeDef: IDENTIFIER Type  */
#line 610 "src/parser.ypp"
                                { (yyval.node) = new astnode("TypeDef",false,{new astnode(IDENTIFIER,(yyvsp[-1].data)), (yyvsp[0].node)}); }
#line 2886 "parser.tab.cpp"
    break;

  case 131: /* Literal: BasicLit  */
#line 614 "src/parser.ypp"
                 { (yyval.node) = newId((yyvsp[0].node), "Literal"); }
#line 2892 "parser.tab.cpp"
    break;

  case 132: /* Literal: FunctionLit  */
#line 615 "src/parser.ypp"
                      { (yyval.node) = newId((yyvsp[0].node), "Literal"); }
#line 2898 "parser.tab.cpp"
    break;

  case 133: /* string_lit: STRING  */
#line 619 "src/parser.ypp"
               {
		cout << "I am a string lite" << endl;
		(yyval.node) = new astnode(new PntrType(new DefinedType("string")) , STRING, (yyvsp[0].data));}
#line 2906 "parser.tab.cpp"
    break;

  case 134: /* byte_lit: BYTE  */
#line 625 "src/parser.ypp"
              { (yyval.node) = new astnode(new DefinedType("byte") , BYTE, (yyvsp[0].data));}
#line 2912 "parser.tab.cpp"
    break;

  case 135: /* BasicLit: int_lit  */
#line 629 "src/parser.ypp"
                { (yyval.node) = newId((yyvsp[0].node), "BasicLit"); }
#line 2918 "parser.tab.cpp"
    break;

  case 136: /* BasicLit: float_lit  */
#line 630 "src/parser.ypp"
                    { (yyval.node) = newId((yyvsp[0].node), "BasicLit"); }
#line 2924 "parser.tab.cpp"
    break;

  case 137: /* BasicLit: string_lit  */
#line 631 "src/parser.ypp"
                     { (yyval.node) = newId((yyvsp[0].node), "BasicLit"); }
#line 2930 "parser.tab.cpp"
    break;

  case 138: /* BasicLit: byte_lit  */
#line 632 "src/parser.ypp"
                   { (yyval.node) = newId((yyvsp[0].node), "BasicLit"); }
#line 2936 "parser.tab.cpp"
    break;

  case 139: /* FunctionLit: FUNC Function  */
#line 636 "src/parser.ypp"
                      { (yyval.node) = new astnode("FunctionLit",false,{new astnode(FUNC,(yyvsp[-1].data)), (yyvsp[0].node)}); }
#line 2942 "parser.tab.cpp"
    break;

  case 140: /* PrimaryExpr: Operand  */
#line 640 "src/parser.ypp"
                { (yyval.node) = newId((yyvsp[0].node), "PrimaryExpr"); }
#line 2948 "parser.tab.cpp"
    break;

  case 141: /* PrimaryExpr: PrimaryExpr Selector  */
#line 641 "src/parser.ypp"
                               { (yyval.node) = new astnode("PrimaryExpr",false,{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2954 "parser.tab.cpp"
    break;

  case 142: /* PrimaryExpr: PrimaryExpr Index  */
#line 642 "src/parser.ypp"
                            { (yyval.node) = new astnode("PrimaryExpr",false,{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2960 "parser.tab.cpp"
    break;

  case 143: /* PrimaryExpr: PrimaryExpr TypeAssertion  */
#line 643 "src/parser.ypp"
                                    { (yyval.node) = new astnode("PrimaryExpr",false,{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2966 "parser.tab.cpp"
    break;

  case 144: /* PrimaryExpr: OperandName StructLiteral  */
#line 644 "src/parser.ypp"
                                    { (yyval.node) = new astnode("PrimaryExpr",false,{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2972 "parser.tab.cpp"
    break;

  case 145: /* StructLiteral: LBRACE KeyValList RBRACE  */
#line 648 "src/parser.ypp"
                             { (yyval.node) = newId((yyvsp[-1].node), "StructLiteral"); }
#line 2978 "parser.tab.cpp"
    break;

  case 146: /* KeyValList: %empty  */
#line 652 "src/parser.ypp"
                    { (yyval.node) = new astnode(); }
#line 2984 "parser.tab.cpp"
    break;

  case 147: /* KeyValList: Expression COLON Expression  */
#line 653 "src/parser.ypp"
                                      { (yyval.node) = new astnode("",false,{(yyvsp[-2].node),(yyvsp[0].node)}); }
#line 2990 "parser.tab.cpp"
    break;

  case 148: /* KeyValList: KeyValList COMMA Expression COLON Expression  */
#line 654 "src/parser.ypp"
                                                       { (yyval.node) = new astnode("",false,{(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)}); }
#line 2996 "parser.tab.cpp"
    break;

  case 149: /* Selector: PERIOD IDENTIFIER  */
#line 658 "src/parser.ypp"
                          { (yyval.node) = new astnode("Selector",false,{new astnode(PERIOD,(yyvsp[-1].data)), new astnode(IDENTIFIER,(yyvsp[0].data))}); }
#line 3002 "parser.tab.cpp"
    break;

  case 150: /* Index: LBRACK Expression RBRACK  */
#line 661 "src/parser.ypp"
                                 { (yyval.node) = newId((yyvsp[-1].node), "Index"); }
#line 3008 "parser.tab.cpp"
    break;

  case 151: /* TypeAssertion: PERIOD LPAREN Type RPAREN  */
#line 666 "src/parser.ypp"
                                  { (yyval.node) = new astnode("TypeAssertion",false,{new astnode(PERIOD, (yyvsp[-3].data)), (yyvsp[-1].node)}); }
#line 3014 "parser.tab.cpp"
    break;

  case 152: /* Expression: Expression1  */
#line 675 "src/parser.ypp"
                { (yyval.node) = newId((yyvsp[0].node),"Expression");}
#line 3020 "parser.tab.cpp"
    break;

  case 153: /* Expression1: Expression1 LOR Expression2  */
#line 679 "src/parser.ypp"
                                { (yyval.node) = new astnode("Expression1",false,{(yyvsp[-2].node),new astnode(LOR),(yyvsp[0].node)}); }
#line 3026 "parser.tab.cpp"
    break;

  case 154: /* Expression1: Expression2  */
#line 680 "src/parser.ypp"
                  { newId((yyvsp[0].node),"Expression1"); }
#line 3032 "parser.tab.cpp"
    break;

  case 155: /* Expression2: Expression2 LAND Expression3  */
#line 684 "src/parser.ypp"
                                 { (yyval.node) = new astnode("Expression2",false,{(yyvsp[-2].node),new astnode(LAND),(yyvsp[0].node)}); }
#line 3038 "parser.tab.cpp"
    break;

  case 156: /* Expression2: Expression3  */
#line 685 "src/parser.ypp"
                  { newId((yyvsp[0].node),"Expression2"); }
#line 3044 "parser.tab.cpp"
    break;

  case 157: /* Expression3: Expression3 rel_op Expression4  */
#line 689 "src/parser.ypp"
                                   { (yyval.node) = new astnode("Expression3",false,{(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 3050 "parser.tab.cpp"
    break;

  case 158: /* Expression3: Expression4  */
#line 690 "src/parser.ypp"
                  { newId((yyvsp[0].node),"Expression3"); }
#line 3056 "parser.tab.cpp"
    break;

  case 159: /* Expression4: Expression4 add_op Expression5  */
#line 694 "src/parser.ypp"
                                   { (yyval.node) = new astnode("Expression4",false,{(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 3062 "parser.tab.cpp"
    break;

  case 160: /* Expression4: Expression5  */
#line 695 "src/parser.ypp"
                  { newId((yyvsp[0].node),"Expression4"); }
#line 3068 "parser.tab.cpp"
    break;

  case 161: /* Expression5: Expression5 mul_op PrimaryExpr  */
#line 699 "src/parser.ypp"
                                   { (yyval.node) = new astnode("Expression5",false,{(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 3074 "parser.tab.cpp"
    break;

  case 162: /* Expression5: UnaryExpr  */
#line 700 "src/parser.ypp"
                { (yyval.node) = newId((yyvsp[0].node), "Expression5"); }
#line 3080 "parser.tab.cpp"
    break;

  case 163: /* UnaryExpr: PrimaryExpr  */
#line 704 "src/parser.ypp"
                    { (yyval.node) = newId((yyvsp[0].node),"UnaryExpr"); }
#line 3086 "parser.tab.cpp"
    break;

  case 164: /* UnaryExpr: unary_op PrimaryExpr  */
#line 705 "src/parser.ypp"
                               { (yyval.node) = new astnode("UnaryExpr",false,{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 3092 "parser.tab.cpp"
    break;

  case 165: /* rel_op: EQL  */
#line 711 "src/parser.ypp"
              { (yyval.node) = new astnode(EQL);}
#line 3098 "parser.tab.cpp"
    break;

  case 166: /* rel_op: NEQ  */
#line 712 "src/parser.ypp"
              { (yyval.node) = new astnode(NEQ);}
#line 3104 "parser.tab.cpp"
    break;

  case 167: /* rel_op: LSS  */
#line 713 "src/parser.ypp"
              { (yyval.node) = new astnode(LSS);}
#line 3110 "parser.tab.cpp"
    break;

  case 168: /* rel_op: LEQ  */
#line 714 "src/parser.ypp"
              { (yyval.node) = new astnode(LEQ);}
#line 3116 "parser.tab.cpp"
    break;

  case 169: /* rel_op: GTR  */
#line 715 "src/parser.ypp"
              { (yyval.node) = new astnode(GTR);}
#line 3122 "parser.tab.cpp"
    break;

  case 170: /* rel_op: GEQ  */
#line 716 "src/parser.ypp"
              { (yyval.node) = new astnode(GEQ);}
#line 3128 "parser.tab.cpp"
    break;

  case 171: /* add_op: ADD  */
#line 720 "src/parser.ypp"
            { (yyval.node) = new astnode(ADD);}
#line 3134 "parser.tab.cpp"
    break;

  case 172: /* add_op: SUB  */
#line 721 "src/parser.ypp"
              { (yyval.node) = new astnode(SUB);}
#line 3140 "parser.tab.cpp"
    break;

  case 173: /* add_op: OR  */
#line 722 "src/parser.ypp"
              { (yyval.node) = new astnode(OR);}
#line 3146 "parser.tab.cpp"
    break;

  case 174: /* add_op: XOR  */
#line 723 "src/parser.ypp"
              { (yyval.node) = new astnode(XOR);}
#line 3152 "parser.tab.cpp"
    break;

  case 175: /* mul_op: MUL  */
#line 727 "src/parser.ypp"
              { (yyval.node) = new astnode(MUL);}
#line 3158 "parser.tab.cpp"
    break;

  case 176: /* mul_op: QUO  */
#line 728 "src/parser.ypp"
              { (yyval.node) = new astnode(QUO);}
#line 3164 "parser.tab.cpp"
    break;

  case 177: /* mul_op: REM  */
#line 729 "src/parser.ypp"
              { (yyval.node) = new astnode(REM);}
#line 3170 "parser.tab.cpp"
    break;

  case 178: /* mul_op: SHL  */
#line 730 "src/parser.ypp"
              { (yyval.node) = new astnode(SHL);}
#line 3176 "parser.tab.cpp"
    break;

  case 179: /* mul_op: SHR  */
#line 731 "src/parser.ypp"
              { (yyval.node) = new astnode(SHR);}
#line 3182 "parser.tab.cpp"
    break;

  case 180: /* mul_op: AND  */
#line 732 "src/parser.ypp"
              { (yyval.node) = new astnode(AND);}
#line 3188 "parser.tab.cpp"
    break;

  case 181: /* mul_op: AND_NOT  */
#line 733 "src/parser.ypp"
                   { (yyval.node) = new astnode(AND_NOT);}
#line 3194 "parser.tab.cpp"
    break;

  case 182: /* unary_op: ADD  */
#line 737 "src/parser.ypp"
             { (yyval.node) = new astnode(ADD);}
#line 3200 "parser.tab.cpp"
    break;

  case 183: /* unary_op: SUB  */
#line 738 "src/parser.ypp"
              { (yyval.node) = new astnode(SUB);}
#line 3206 "parser.tab.cpp"
    break;

  case 184: /* unary_op: NOT  */
#line 739 "src/parser.ypp"
              { (yyval.node) = new astnode(NOT);}
#line 3212 "parser.tab.cpp"
    break;

  case 185: /* unary_op: XOR  */
#line 740 "src/parser.ypp"
              { (yyval.node) = new astnode(XOR);}
#line 3218 "parser.tab.cpp"
    break;

  case 186: /* unary_op: MUL  */
#line 741 "src/parser.ypp"
              { (yyval.node) = new astnode(MUL);}
#line 3224 "parser.tab.cpp"
    break;

  case 187: /* unary_op: AND  */
#line 742 "src/parser.ypp"
              { (yyval.node) = new astnode(AND);}
#line 3230 "parser.tab.cpp"
    break;

  case 188: /* assign_op: ASSIGN  */
#line 746 "src/parser.ypp"
               { (yyval.node) = new astnode(ASSIGN);}
#line 3236 "parser.tab.cpp"
    break;

  case 189: /* assign_op: ADD_ASSIGN  */
#line 747 "src/parser.ypp"
                     { (yyval.node) = new astnode(ADD_ASSIGN);}
#line 3242 "parser.tab.cpp"
    break;

  case 190: /* assign_op: SUB_ASSIGN  */
#line 748 "src/parser.ypp"
                     { (yyval.node) = new astnode(SUB_ASSIGN);}
#line 3248 "parser.tab.cpp"
    break;

  case 191: /* assign_op: MUL_ASSIGN  */
#line 749 "src/parser.ypp"
                     { (yyval.node) = new astnode(MUL_ASSIGN);}
#line 3254 "parser.tab.cpp"
    break;

  case 192: /* assign_op: QUO_ASSIGN  */
#line 750 "src/parser.ypp"
                     { (yyval.node) = new astnode(QUO_ASSIGN);}
#line 3260 "parser.tab.cpp"
    break;

  case 193: /* assign_op: REM_ASSIGN  */
#line 751 "src/parser.ypp"
                     { (yyval.node) = new astnode(REM_ASSIGN);}
#line 3266 "parser.tab.cpp"
    break;

  case 194: /* PackageClause: PACKAGE PackageName  */
#line 755 "src/parser.ypp"
                            { (yyval.node) = new astnode("PackageClause", false, {new astnode(PACKAGE), (yyvsp[0].node)});}
#line 3272 "parser.tab.cpp"
    break;

  case 195: /* PackageName: IDENTIFIER  */
#line 759 "src/parser.ypp"
                   { (yyval.node) = new astnode(new DefinedType("fillTypeUsingSymbolTable"),IDENTIFIER);}
#line 3278 "parser.tab.cpp"
    break;

  case 196: /* ImportDeclStar: ImportDeclStar ImportDecl  */
#line 763 "src/parser.ypp"
                              { (yyval.node) = new astnode("ImportDeclStar", false,{(yyvsp[-1].node),(yyvsp[0].node)});}
#line 3284 "parser.tab.cpp"
    break;

  case 197: /* ImportDeclStar: ImportDecl  */
#line 764 "src/parser.ypp"
                 { (yyval.node) = newId((yyvsp[0].node), "ImportDeclStar"); }
#line 3290 "parser.tab.cpp"
    break;

  case 198: /* ImportDeclStar: %empty  */
#line 765 "src/parser.ypp"
                { (yyval.node) = new astnode(); }
#line 3296 "parser.tab.cpp"
    break;

  case 199: /* ImportDecl: IMPORT ImportSpec SEMICOLON  */
#line 769 "src/parser.ypp"
                                    {
		cout << "I am inside import decl" << endl;
		(yyval.node) = new astnode("ImportDecl", false, {new astnode(IMPORT),(yyvsp[-1].node)}); }
#line 3304 "parser.tab.cpp"
    break;

  case 200: /* ImportDecl: IMPORT LPAREN ImportSpecStar RPAREN  */
#line 772 "src/parser.ypp"
                                              { (yyval.node) = new astnode("ImportDecl", false, {new astnode(IMPORT), (yyvsp[-1].node)}); }
#line 3310 "parser.tab.cpp"
    break;

  case 201: /* ImportSpecStar: ImportSpecStar ImportSpec SEMICOLON  */
#line 776 "src/parser.ypp"
                                            { (yyval.node) = new astnode("ImportSpecStar", false, {(yyvsp[-2].node),(yyvsp[-1].node)}); }
#line 3316 "parser.tab.cpp"
    break;

  case 202: /* ImportSpecStar: ImportSpec SEMICOLON  */
#line 777 "src/parser.ypp"
                               { (yyval.node) = newId((yyvsp[-1].node), "ImportSpecStar"); }
#line 3322 "parser.tab.cpp"
    break;

  case 203: /* ImportSpec: PERIOD ImportPath  */
#line 781 "src/parser.ypp"
                           { (yyval.node) = new astnode("ImportSpec", false, {new astnode(PERIOD), (yyvsp[0].node)}); }
#line 3328 "parser.tab.cpp"
    break;

  case 204: /* ImportSpec: AlternatePackageName ImportPath  */
#line 782 "src/parser.ypp"
                                          { (yyval.node) = new astnode("ImportSpec", false, {(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 3334 "parser.tab.cpp"
    break;

  case 205: /* ImportSpec: AlternatePackageName  */
#line 783 "src/parser.ypp"
                               {
		cout << "I am inside import spec" << endl;
		(yyval.node) = newId((yyvsp[0].node),"ImportSpec"); }
#line 3342 "parser.tab.cpp"
    break;

  case 206: /* ImportPath: string_lit  */
#line 789 "src/parser.ypp"
                    { (yyval.node) = newId((yyvsp[0].node),"ImportPath");}
#line 3348 "parser.tab.cpp"
    break;

  case 207: /* AlternatePackageName: string_lit  */
#line 793 "src/parser.ypp"
                   {
		cout << (yyvsp[0].node)->data->value << endl;
		cout << "I am insdiee the alternatepackagename" << endl;
		(yyval.node) = newId((yyvsp[0].node), "AlternatePackageName");
		cout << "hello world" <<endl;
		}
#line 3359 "parser.tab.cpp"
    break;


#line 3363 "parser.tab.cpp"

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

#line 801 "src/parser.ypp"



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
}
