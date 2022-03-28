/* A Bison parser, made by GNU Bison 3.7.5.  */

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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

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
astnode *theprogram;
umap<string, Type*> symtab;
int currscope = 0;
string fullscope = "0";


#line 87 "parser.tab.cpp"

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
#line 21 "src/parser.ypp"

        #include <bits/stdc++.h>
	#include "src/ast.h"
	#include "src/symtab.h"
	using namespace std;

#line 126 "parser.tab.cpp"

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
#line 28 "src/parser.ypp"

	Data* data;
	astnode *node;

#line 223 "parser.tab.cpp"

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
  YYSYMBOL_StatementList = 81,             /* StatementList  */
  YYSYMBOL_Statement = 82,                 /* Statement  */
  YYSYMBOL_SimpleStmt = 83,                /* SimpleStmt  */
  YYSYMBOL_EmptyStmt = 84,                 /* EmptyStmt  */
  YYSYMBOL_LabeledStmt = 85,               /* LabeledStmt  */
  YYSYMBOL_IncDecStmt = 86,                /* IncDecStmt  */
  YYSYMBOL_Assignment = 87,                /* Assignment  */
  YYSYMBOL_VarDecl = 88,                   /* VarDecl  */
  YYSYMBOL_VarSpec = 89,                   /* VarSpec  */
  YYSYMBOL_Declaration = 90,               /* Declaration  */
  YYSYMBOL_FunctionDecl = 91,              /* FunctionDecl  */
  YYSYMBOL_Function = 92,                  /* Function  */
  YYSYMBOL_FunctionBody = 93,              /* FunctionBody  */
  YYSYMBOL_FunctionStmt = 94,              /* FunctionStmt  */
  YYSYMBOL_FunctionCall = 95,              /* FunctionCall  */
  YYSYMBOL_ArgumentList = 96,              /* ArgumentList  */
  YYSYMBOL_Arguments = 97,                 /* Arguments  */
  YYSYMBOL_Signature = 98,                 /* Signature  */
  YYSYMBOL_Result = 99,                    /* Result  */
  YYSYMBOL_Parameters = 100,               /* Parameters  */
  YYSYMBOL_ParameterDeclStar = 101,        /* ParameterDeclStar  */
  YYSYMBOL_ParameterDecl = 102,            /* ParameterDecl  */
  YYSYMBOL_TypeList = 103,                 /* TypeList  */
  YYSYMBOL_IdentifierList = 104,           /* IdentifierList  */
  YYSYMBOL_IdentifierLIST = 105,           /* IdentifierLIST  */
  YYSYMBOL_MethodDecl = 106,               /* MethodDecl  */
  YYSYMBOL_Receiver = 107,                 /* Receiver  */
  YYSYMBOL_TopLevelDeclStar = 108,         /* TopLevelDeclStar  */
  YYSYMBOL_TopLevelDecl = 109,             /* TopLevelDecl  */
  YYSYMBOL_TypeLit = 110,                  /* TypeLit  */
  YYSYMBOL_Type = 111,                     /* Type  */
  YYSYMBOL_Operand = 112,                  /* Operand  */
  YYSYMBOL_OperandName = 113,              /* OperandName  */
  YYSYMBOL_ReturnStmt = 114,               /* ReturnStmt  */
  YYSYMBOL_BreakStmt = 115,                /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 116,             /* ContinueStmt  */
  YYSYMBOL_IfStmt = 117,                   /* IfStmt  */
  YYSYMBOL_ForStmt = 118,                  /* ForStmt  */
  YYSYMBOL_Condition = 119,                /* Condition  */
  YYSYMBOL_ForClause = 120,                /* ForClause  */
  YYSYMBOL_InitStmt = 121,                 /* InitStmt  */
  YYSYMBOL_PostStmt = 122,                 /* PostStmt  */
  YYSYMBOL_int_lit = 123,                  /* int_lit  */
  YYSYMBOL_float_lit = 124,                /* float_lit  */
  YYSYMBOL_TypeName = 125,                 /* TypeName  */
  YYSYMBOL_ArrayType = 126,                /* ArrayType  */
  YYSYMBOL_ArrayLength = 127,              /* ArrayLength  */
  YYSYMBOL_StructType = 128,               /* StructType  */
  YYSYMBOL_FieldDeclStar = 129,            /* FieldDeclStar  */
  YYSYMBOL_FieldDecl = 130,                /* FieldDecl  */
  YYSYMBOL_Tag = 131,                      /* Tag  */
  YYSYMBOL_PointerType = 132,              /* PointerType  */
  YYSYMBOL_BaseType = 133,                 /* BaseType  */
  YYSYMBOL_FunctionType = 134,             /* FunctionType  */
  YYSYMBOL_ConstDecl = 135,                /* ConstDecl  */
  YYSYMBOL_ConstSpec = 136,                /* ConstSpec  */
  YYSYMBOL_ExpressionList = 137,           /* ExpressionList  */
  YYSYMBOL_TypeDecl = 138,                 /* TypeDecl  */
  YYSYMBOL_TypeSpecList = 139,             /* TypeSpecList  */
  YYSYMBOL_TypeSpec = 140,                 /* TypeSpec  */
  YYSYMBOL_AliasDecl = 141,                /* AliasDecl  */
  YYSYMBOL_TypeDef = 142,                  /* TypeDef  */
  YYSYMBOL_Literal = 143,                  /* Literal  */
  YYSYMBOL_string_lit = 144,               /* string_lit  */
  YYSYMBOL_byte_lit = 145,                 /* byte_lit  */
  YYSYMBOL_BasicLit = 146,                 /* BasicLit  */
  YYSYMBOL_FunctionLit = 147,              /* FunctionLit  */
  YYSYMBOL_PrimaryExpr = 148,              /* PrimaryExpr  */
  YYSYMBOL_StructLiteral = 149,            /* StructLiteral  */
  YYSYMBOL_KeyValList = 150,               /* KeyValList  */
  YYSYMBOL_Selector = 151,                 /* Selector  */
  YYSYMBOL_Index = 152,                    /* Index  */
  YYSYMBOL_TypeAssertion = 153,            /* TypeAssertion  */
  YYSYMBOL_Expression = 154,               /* Expression  */
  YYSYMBOL_Expression1 = 155,              /* Expression1  */
  YYSYMBOL_Expression2 = 156,              /* Expression2  */
  YYSYMBOL_Expression3 = 157,              /* Expression3  */
  YYSYMBOL_Expression4 = 158,              /* Expression4  */
  YYSYMBOL_Expression5 = 159,              /* Expression5  */
  YYSYMBOL_UnaryExpr = 160,                /* UnaryExpr  */
  YYSYMBOL_rel_op = 161,                   /* rel_op  */
  YYSYMBOL_add_op = 162,                   /* add_op  */
  YYSYMBOL_mul_op = 163,                   /* mul_op  */
  YYSYMBOL_unary_op = 164,                 /* unary_op  */
  YYSYMBOL_assign_op = 165,                /* assign_op  */
  YYSYMBOL_PackageClause = 166,            /* PackageClause  */
  YYSYMBOL_PackageName = 167,              /* PackageName  */
  YYSYMBOL_ImportDeclStar = 168,           /* ImportDeclStar  */
  YYSYMBOL_ImportDecl = 169,               /* ImportDecl  */
  YYSYMBOL_ImportSpecStar = 170,           /* ImportSpecStar  */
  YYSYMBOL_ImportSpec = 171,               /* ImportSpec  */
  YYSYMBOL_ImportPath = 172,               /* ImportPath  */
  YYSYMBOL_AlternatePackageName = 173      /* AlternatePackageName  */
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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYLAST   347

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  98
/* YYNRULES -- Number of rules.  */
#define YYNRULES  204
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  321

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
       0,    73,    73,    77,    81,    88,    95,    96,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   113,
     114,   115,   118,   123,   126,   127,   130,   134,   137,   138,
     142,   143,   144,   147,   149,   153,   156,   159,   160,   163,
     167,   168,   169,   172,   173,   177,   178,   181,   182,   185,
     186,   187,   190,   191,   195,   196,   197,   201,   202,   206,
     207,   210,   211,   215,   216,   220,   223,   224,   228,   229,
     230,   234,   235,   236,   237,   241,   242,   246,   247,   248,
     251,   255,   256,   259,   260,   263,   264,   268,   269,   270,
     271,   272,   273,   277,   278,   281,   284,   287,   289,   292,
     295,   299,   300,   304,   308,   312,   313,   317,   318,   322,
     323,   327,   331,   334,   339,   343,   347,   348,   352,   353,
     357,   358,   362,   363,   366,   367,   371,   375,   379,   380,
     384,   388,   392,   393,   394,   395,   399,   403,   404,   405,
     406,   407,   411,   414,   416,   417,   421,   424,   429,   438,
     442,   443,   447,   448,   452,   453,   457,   458,   462,   463,
     467,   468,   473,   474,   475,   476,   477,   478,   481,   482,
     483,   484,   487,   488,   489,   490,   491,   492,   493,   496,
     497,   498,   499,   500,   501,   505,   506,   507,   508,   509,
     510,   514,   517,   521,   522,   523,   527,   528,   532,   533,
     536,   537,   538,   541,   544
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
  "Block", "OPENB", "CLOSEB", "StatementList", "Statement", "SimpleStmt",
  "EmptyStmt", "LabeledStmt", "IncDecStmt", "Assignment", "VarDecl",
  "VarSpec", "Declaration", "FunctionDecl", "Function", "FunctionBody",
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

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330
};
#endif

#define YYPACT_NINF (-285)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-96)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      94,    62,    25,    46,  -285,  -285,  -285,   121,    30,   180,
    -285,  -285,     0,   114,  -285,    80,   114,    -5,   128,    12,
     130,  -285,  -285,  -285,  -285,   100,  -285,  -285,  -285,  -285,
      34,   102,  -285,  -285,  -285,  -285,  -285,    13,  -285,   150,
      17,  -285,    11,   152,  -285,  -285,  -285,   107,  -285,    17,
     232,  -285,   125,  -285,   127,    17,  -285,    65,  -285,    49,
     127,   127,   139,  -285,  -285,    17,   123,  -285,   154,  -285,
    -285,  -285,  -285,  -285,    17,  -285,   -18,   147,   192,   143,
     181,  -285,  -285,  -285,   149,    38,  -285,  -285,    15,    17,
    -285,  -285,   149,  -285,   -14,  -285,  -285,   127,  -285,  -285,
    -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,   123,  -285,
     151,  -285,  -285,   168,  -285,  -285,  -285,  -285,  -285,    47,
    -285,   162,   164,   270,   138,   287,  -285,   145,   123,  -285,
    -285,   163,  -285,  -285,   219,   123,  -285,  -285,  -285,  -285,
    -285,    17,  -285,  -285,  -285,  -285,  -285,  -285,    17,    -7,
     182,  -285,   149,   176,   123,  -285,    17,   123,    22,  -285,
    -285,  -285,   123,   123,  -285,  -285,  -285,  -285,  -285,  -285,
     123,  -285,  -285,  -285,  -285,   123,  -285,  -285,  -285,  -285,
    -285,  -285,  -285,   145,    47,  -285,  -285,  -285,   174,  -285,
     277,    68,  -285,   227,  -285,   193,  -285,  -285,   118,   199,
    -285,   186,  -285,    17,   164,   270,   138,   287,    47,   123,
     236,   237,  -285,  -285,   123,    74,  -285,   230,   203,  -285,
    -285,  -285,  -285,  -285,   225,  -285,  -285,  -285,  -285,  -285,
    -285,  -285,  -285,   155,   -45,   167,  -285,    17,  -285,  -285,
    -285,  -285,   123,   123,  -285,   200,  -285,  -285,  -285,   123,
     123,  -285,   145,   277,   201,   208,  -285,   145,  -285,  -285,
    -285,  -285,  -285,  -285,   123,   145,  -285,  -285,  -285,   216,
    -285,  -285,  -285,   149,   149,   211,    71,   212,    83,  -285,
     -45,  -285,  -285,  -285,  -285,   174,  -285,    92,  -285,   -45,
     123,  -285,  -285,   123,   123,   267,  -285,   145,  -285,  -285,
    -285,   214,  -285,   149,     1,  -285,  -285,   123,   269,  -285,
    -285,  -285,  -285,     1,  -285,  -285,  -285,  -285,  -285,  -285,
    -285
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,   192,   191,     1,   195,     0,     0,
     194,   130,     0,     0,   204,     0,   202,     0,     0,     0,
       0,    32,    68,    69,    70,     2,    67,    30,    31,   193,
       0,     0,   203,   200,   196,   201,     4,     0,    65,     0,
       0,   115,     0,     0,   120,   124,   125,    60,    27,     0,
       0,   197,     0,   199,     0,     0,    49,     0,    52,     0,
       0,     0,     0,   102,   101,     0,     0,    76,   117,    75,
      71,    72,    73,    74,     0,   127,     0,     0,     0,    59,
      29,    66,   198,     5,     5,    45,    56,    50,     0,     0,
      54,    63,    64,   114,     0,   113,   112,     0,    80,   131,
      99,   100,   179,   180,   183,   184,   181,   182,     0,   137,
      78,   132,   133,     0,    77,   134,   135,   128,   129,   160,
     104,   149,   151,   153,   155,   157,   159,     0,     0,   126,
     121,     0,   123,    62,     0,     0,    33,     4,    36,    34,
      35,     0,    46,    48,    51,    53,    55,   106,     0,     0,
       0,   136,     0,     0,   143,   141,     0,     0,     0,   138,
     139,   140,     0,     0,   162,   163,   165,   167,   166,   164,
       0,   168,   169,   170,   171,     0,   175,   176,   172,   173,
     174,   177,   178,     0,   161,   116,   122,    61,    28,   119,
      22,     0,    58,   109,   105,     0,   107,    79,     0,     0,
     103,     0,   146,     0,   150,   152,   154,   156,   158,     0,
      84,    86,     4,     4,    82,    80,    14,     5,     0,    10,
      19,     9,    20,    21,    32,     8,    18,    17,    11,    12,
      13,    15,    16,     0,   160,   119,    47,     0,   111,   110,
     108,   142,     0,     0,   147,     0,   118,    83,    85,    22,
      22,    81,     0,    22,     0,     0,     7,     0,   185,   186,
     187,   188,   189,   190,     0,    42,    24,    25,    57,     0,
     144,   148,    97,     0,     0,     0,   119,     0,   119,    38,
       0,    23,     3,     6,    37,    26,    44,     0,    41,    43,
       0,     5,     5,     0,     0,     5,    39,     0,   145,    93,
      94,     0,    95,     0,     0,    87,    40,    22,     5,     5,
       5,    98,    96,     0,    88,    92,    91,     5,     5,    90,
      89
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -285,  -285,  -186,  -135,   -84,  -285,  -204,  -238,  -285,  -285,
    -285,  -285,    43,  -285,    70,  -285,   -39,  -285,  -285,  -153,
    -285,   -16,    63,  -285,   271,  -285,   196,  -285,   -13,  -285,
    -285,  -285,  -285,   240,  -285,   -41,  -285,  -285,  -285,  -285,
    -285,  -284,  -285,    -6,  -285,  -285,  -285,  -285,  -285,  -285,
    -285,  -285,  -285,  -285,   156,  -285,  -285,  -285,  -285,  -285,
    -285,  -126,  -285,  -285,    53,  -285,  -285,  -285,   202,  -285,
    -285,  -285,  -122,  -285,  -285,  -285,  -285,  -285,   -63,  -285,
     132,   129,   134,   124,  -285,  -285,  -285,  -285,  -285,  -285,
    -285,  -285,  -285,   297,  -285,    96,   291,  -285
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,   138,    54,   136,   217,   218,   219,   220,   221,
     222,   223,   224,    48,   225,    23,    83,   140,   226,   227,
     287,   288,    84,   142,    85,    57,    58,   191,    59,    79,
      24,    39,    25,    26,    67,    68,   109,   110,   228,   229,
     230,   231,   232,   273,   274,   275,   312,   111,   112,    69,
      70,   113,    71,   149,   150,   239,    72,    96,    73,    27,
      41,   233,    28,    76,    44,    45,    46,   114,   115,   116,
     117,   118,   119,   155,   198,   159,   160,   161,   235,   121,
     122,   123,   124,   125,   126,   170,   175,   183,   127,   264,
       3,     5,     9,    10,    30,    15,    33,    16
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     139,    75,   190,   120,   216,   184,    42,    49,    80,   188,
      47,   272,   277,   255,    86,   213,    61,    47,    90,    36,
     310,    91,    61,   265,    95,     6,    11,   157,    62,   318,
     158,   216,    63,   129,    62,    64,    42,    47,    63,    47,
      55,    64,    55,    61,   143,   153,   202,    65,   146,   281,
      74,   130,    21,    65,    61,    62,    11,   147,   151,    63,
      11,   208,    64,    37,   194,   185,    62,   216,   234,   311,
      63,   137,   189,    64,    65,    13,    89,   249,   250,    22,
      43,   148,    56,    66,   144,    65,     4,   291,   292,    66,
     203,   199,   295,    21,   201,   234,    77,     1,    12,   279,
     192,   266,   267,    51,   284,    13,   141,   193,    31,    13,
      66,     7,   286,   266,   267,   200,   252,   308,   309,   157,
      22,    66,   158,    92,    93,     8,    52,   317,    97,   131,
     280,   234,   253,   254,    87,   280,   148,   236,   285,    88,
      11,   -95,   237,   289,   286,    34,   246,    98,    99,    11,
      97,   251,    40,   137,    47,   100,   101,   102,   103,   104,
     152,   296,   245,   105,   106,    50,   297,    53,   107,    98,
      99,    11,   171,   172,    60,   289,    42,   100,   101,   269,
     270,    78,   173,   174,     8,    17,   276,   278,    18,   241,
      82,   108,   242,   128,   258,    37,   268,   266,   267,    19,
      20,   189,   259,   260,   261,   262,   263,   299,   300,    94,
      14,   305,   132,   108,    14,    32,   133,   134,    32,   137,
     135,   154,   162,   163,   314,   315,   316,   298,   186,   209,
     302,   303,    14,   319,   320,    97,   210,    17,    18,   211,
      18,   156,   212,   187,   213,   197,   214,   196,   209,    19,
      20,    19,    20,   238,   215,    99,    11,   243,   240,   244,
     247,   248,   100,   101,   102,   103,   104,   257,   256,   271,
     105,   106,   282,   283,   290,   107,   293,   294,   304,   307,
     313,   306,    97,   210,   145,    18,   211,   301,    38,   212,
      81,   213,   205,   214,   204,   -22,    19,    20,   108,   207,
     137,   215,    99,    11,   206,   195,    29,    35,     0,   100,
     101,   102,   103,   104,     0,   176,   177,   105,   106,     0,
       0,     0,   107,   178,   179,   180,     0,   181,     0,     0,
     182,   164,   165,   166,   167,     0,   168,   169,     0,     0,
       0,     0,     0,     0,     0,   108,     0,   137
};

static const yytype_int16 yycheck[] =
{
      84,    42,   137,    66,   190,   127,    24,    20,    49,   135,
      24,   249,   250,   217,    55,    14,     5,    24,    59,    24,
     304,    60,     5,    68,    65,     0,    26,    72,    17,   313,
      75,   217,    21,    74,    17,    24,    24,    24,    21,    24,
      27,    24,    27,     5,    85,   108,    24,    36,    89,   253,
      39,    69,     9,    36,     5,    17,    26,    71,    97,    21,
      26,   183,    24,    68,    71,   128,    17,   253,   190,   307,
      21,    70,   135,    24,    36,    75,    27,   212,   213,     9,
      68,    94,    69,    72,    69,    36,    24,   273,   274,    72,
      68,   154,   278,    50,   157,   217,    43,     3,    68,   252,
     141,    30,    31,    69,   257,    75,    68,   148,    12,    75,
      72,    65,   265,    30,    31,   156,    42,   303,   304,    72,
      50,    72,    75,    60,    61,     4,    30,   313,     5,    76,
     252,   253,    58,   217,    69,   257,   149,    69,   264,    74,
      26,    70,    74,   265,   297,    65,   209,    24,    25,    26,
       5,   214,    24,    70,    24,    32,    33,    34,    35,    36,
      97,    69,   203,    40,    41,    65,    74,    65,    45,    24,
      25,    26,    34,    35,    24,   297,    24,    32,    33,   242,
     243,    74,    44,    45,     4,     5,   249,   250,     8,    71,
      65,    68,    74,    39,    39,    68,   237,    30,    31,    19,
      20,   264,    47,    48,    49,    50,    51,   291,   292,    70,
       8,   295,    65,    68,    12,    13,    24,    74,    16,    70,
      39,    70,    60,    59,   308,   309,   310,   290,    65,    74,
     293,   294,    30,   317,   318,     5,     6,     5,     8,     9,
       8,    73,    12,    24,    14,    69,    16,    65,    74,    19,
      20,    19,    20,    26,    24,    25,    26,    58,    65,    73,
      24,    24,    32,    33,    34,    35,    36,    42,    65,    69,
      40,    41,    71,    65,    58,    45,    65,    65,    11,    65,
      11,   297,     5,     6,    88,     8,     9,   293,    17,    12,
      50,    14,   163,    16,   162,    65,    19,    20,    68,   175,
      70,    24,    25,    26,   170,   149,     9,    16,    -1,    32,
      33,    34,    35,    36,    -1,    28,    29,    40,    41,    -1,
      -1,    -1,    45,    36,    37,    38,    -1,    40,    -1,    -1,
      43,    61,    62,    63,    64,    -1,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    70
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    77,   166,    24,   167,     0,    65,     4,   168,
     169,    26,    68,    75,   144,   171,   173,     5,     8,    19,
      20,    88,    90,    91,   106,   108,   109,   135,   138,   169,
     170,   171,   144,   172,    65,   172,    24,    68,   100,   107,
      24,   136,    24,    68,   140,   141,   142,    24,    89,   104,
      65,    69,   171,    65,    79,    27,    69,   101,   102,   104,
      24,     5,    17,    21,    24,    36,    72,   110,   111,   125,
     126,   128,   132,   134,    39,   111,   139,   140,    74,   105,
     111,   109,    65,    92,    98,   100,   111,    69,    74,    27,
     111,    92,    98,    98,    70,   111,   133,     5,    24,    25,
      32,    33,    34,    35,    36,    40,    41,    45,    68,   112,
     113,   123,   124,   127,   143,   144,   145,   146,   147,   148,
     154,   155,   156,   157,   158,   159,   160,   164,    39,   111,
      69,   140,    65,    24,    74,    39,    80,    70,    78,    80,
      93,    68,    99,   111,    69,   102,   111,    71,   104,   129,
     130,    92,    98,   154,    70,   149,    73,    72,    75,   151,
     152,   153,    60,    59,    61,    62,    63,    64,    66,    67,
     161,    34,    35,    44,    45,   162,    28,    29,    36,    37,
      38,    40,    43,   163,   148,   154,    65,    24,   137,   154,
      79,   103,   111,   111,    71,   130,    65,    69,   150,   154,
     111,   154,    24,    68,   156,   157,   158,   159,   148,    74,
       6,     9,    12,    14,    16,    24,    78,    81,    82,    83,
      84,    85,    86,    87,    88,    90,    94,    95,   114,   115,
     116,   117,   118,   137,   148,   154,    69,    74,    26,   131,
      65,    71,    74,    58,    73,   111,   154,    24,    24,    79,
      79,   154,    42,    58,    80,    82,    65,    42,    39,    47,
      48,    49,    50,    51,   165,    68,    30,    31,   111,   154,
     154,    69,    83,   119,   120,   121,   154,    83,   154,    95,
     148,    82,    71,    65,    95,   137,    95,    96,    97,   148,
      58,    78,    78,    65,    65,    78,    69,    74,   154,    80,
      80,   119,   154,   154,    11,    80,    97,    65,    78,    78,
     117,    83,   122,    11,    80,    80,    80,    78,   117,    80,
      80
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    78,    79,    80,    81,    81,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    83,
      83,    83,    84,    85,    86,    86,    87,    88,    89,    89,
      90,    90,    90,    91,    91,    92,    93,    94,    94,    95,
      96,    96,    96,    97,    97,    98,    98,    99,    99,   100,
     100,   100,   101,   101,   102,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   107,   108,   108,   109,   109,
     109,   110,   110,   110,   110,   111,   111,   112,   112,   112,
     113,   114,   114,   115,   115,   116,   116,   117,   117,   117,
     117,   117,   117,   118,   118,   119,   120,   121,   122,   123,
     124,   125,   125,   126,   127,   128,   128,   129,   129,   130,
     130,   131,   132,   133,   134,   135,   136,   136,   137,   137,
     138,   138,   139,   139,   140,   140,   141,   142,   143,   143,
     144,   145,   146,   146,   146,   146,   147,   148,   148,   148,
     148,   148,   149,   150,   150,   150,   151,   152,   153,   154,
     155,   155,   156,   156,   157,   157,   158,   158,   159,   159,
     160,   160,   161,   161,   161,   161,   161,   161,   162,   162,
     162,   162,   163,   163,   163,   163,   163,   163,   163,   164,
     164,   164,   164,   164,   164,   165,   165,   165,   165,   165,
     165,   166,   167,   168,   168,   168,   169,   169,   170,   170,
     171,   171,   171,   172,   173
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     5,     0,     0,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     2,     2,     3,     2,     4,     2,
       1,     1,     1,     5,     5,     2,     1,     3,     3,     4,
       3,     1,     0,     1,     1,     1,     2,     3,     1,     2,
       3,     4,     1,     3,     2,     3,     2,     3,     1,     2,
       1,     3,     2,     4,     4,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     1,     2,     1,     2,     1,     5,     7,     9,
       9,     7,     7,     5,     5,     1,     5,     1,     1,     1,
       1,     1,     1,     4,     1,     4,     3,     2,     3,     2,
       3,     1,     2,     1,     2,     2,     4,     2,     3,     1,
       2,     4,     3,     2,     1,     1,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     2,
       2,     2,     3,     0,     3,     5,     2,     3,     4,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     1,     0,     3,     4,     3,     2,
       2,     2,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
#line 73 "src/parser.ypp"
                                                            { theprogram = new astnode("StartFile",false, {(yyvsp[-3].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 1922 "parser.tab.cpp"
    break;

  case 3: /* Block: LBRACE OPENB StatementList CLOSEB RBRACE  */
#line 77 "src/parser.ypp"
                                                 { (yyval.node) = newId((yyvsp[-2].node), "Block"); }
#line 1928 "parser.tab.cpp"
    break;

  case 4: /* OPENB: %empty  */
#line 81 "src/parser.ypp"
                  {
		currscope++;
		fullscope = fullscope + "/" + to_string(currscope);
	}
#line 1937 "parser.tab.cpp"
    break;

  case 5: /* CLOSEB: %empty  */
#line 88 "src/parser.ypp"
                  {
		currscope--;
		fullscope = fullscope.substr(0, fullscope.find_last_of("/") );
	}
#line 1946 "parser.tab.cpp"
    break;

  case 6: /* StatementList: StatementList Statement SEMICOLON  */
#line 95 "src/parser.ypp"
                                      { (yyval.node) = new astnode("StatementList", false, {(yyvsp[-2].node), (yyvsp[-1].node)});}
#line 1952 "parser.tab.cpp"
    break;

  case 7: /* StatementList: Statement SEMICOLON  */
#line 96 "src/parser.ypp"
                          { (yyval.node) = newId((yyvsp[-1].node), "StatementList"); }
#line 1958 "parser.tab.cpp"
    break;

  case 8: /* Statement: Declaration  */
#line 100 "src/parser.ypp"
                    {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 1964 "parser.tab.cpp"
    break;

  case 9: /* Statement: LabeledStmt  */
#line 101 "src/parser.ypp"
                      {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 1970 "parser.tab.cpp"
    break;

  case 10: /* Statement: SimpleStmt  */
#line 102 "src/parser.ypp"
                     {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 1976 "parser.tab.cpp"
    break;

  case 11: /* Statement: ReturnStmt  */
#line 103 "src/parser.ypp"
                     {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 1982 "parser.tab.cpp"
    break;

  case 12: /* Statement: BreakStmt  */
#line 104 "src/parser.ypp"
                    {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 1988 "parser.tab.cpp"
    break;

  case 13: /* Statement: ContinueStmt  */
#line 105 "src/parser.ypp"
                       {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 1994 "parser.tab.cpp"
    break;

  case 14: /* Statement: Block  */
#line 106 "src/parser.ypp"
                {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2000 "parser.tab.cpp"
    break;

  case 15: /* Statement: IfStmt  */
#line 107 "src/parser.ypp"
                 {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2006 "parser.tab.cpp"
    break;

  case 16: /* Statement: ForStmt  */
#line 108 "src/parser.ypp"
                  {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2012 "parser.tab.cpp"
    break;

  case 17: /* Statement: FunctionCall  */
#line 109 "src/parser.ypp"
                       {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2018 "parser.tab.cpp"
    break;

  case 18: /* Statement: FunctionStmt  */
#line 110 "src/parser.ypp"
                       {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2024 "parser.tab.cpp"
    break;

  case 19: /* SimpleStmt: EmptyStmt  */
#line 113 "src/parser.ypp"
                  {(yyval.node) = newId((yyvsp[0].node), "SimpleStmt");}
#line 2030 "parser.tab.cpp"
    break;

  case 20: /* SimpleStmt: IncDecStmt  */
#line 114 "src/parser.ypp"
                     {(yyval.node) = newId((yyvsp[0].node), "SimpleStmt");}
#line 2036 "parser.tab.cpp"
    break;

  case 21: /* SimpleStmt: Assignment  */
#line 115 "src/parser.ypp"
                     {(yyval.node) = newId((yyvsp[0].node), "SimpleStmt");}
#line 2042 "parser.tab.cpp"
    break;

  case 23: /* LabeledStmt: IDENTIFIER COLON Statement  */
#line 123 "src/parser.ypp"
                                   {(yyval.node) = new astnode("LabeledStmt", false, {new astnode(IDENTIFIER, (yyvsp[-2].data)), new astnode(COLON), (yyvsp[0].node)});}
#line 2048 "parser.tab.cpp"
    break;

  case 24: /* IncDecStmt: Expression INC  */
#line 126 "src/parser.ypp"
                       {(yyval.node) = new astnode("IncDecStmt", false, {(yyvsp[-1].node), new astnode(INC, (yyvsp[0].data))});}
#line 2054 "parser.tab.cpp"
    break;

  case 25: /* IncDecStmt: Expression DEC  */
#line 127 "src/parser.ypp"
                         {(yyval.node) = new astnode("IncDecStmt", false, {(yyvsp[-1].node), new astnode(INC, (yyvsp[0].data))});}
#line 2060 "parser.tab.cpp"
    break;

  case 26: /* Assignment: ExpressionList assign_op ExpressionList  */
#line 130 "src/parser.ypp"
                                                {(yyval.node) = new astnode("Assignment", false, {(yyvsp[-2].node),(yyvsp[-1].node), (yyvsp[0].node)});}
#line 2066 "parser.tab.cpp"
    break;

  case 27: /* VarDecl: VAR VarSpec  */
#line 134 "src/parser.ypp"
                            {(yyval.node) = new astnode("VarDecl", false, {new astnode(VAR, (yyvsp[-1].data)), (yyvsp[0].node)});}
#line 2072 "parser.tab.cpp"
    break;

  case 28: /* VarSpec: IdentifierList Type ASSIGN ExpressionList  */
#line 137 "src/parser.ypp"
                                                          {(yyval.node) = new astnode("VarSpec", false, {(yyvsp[-3].node), (yyvsp[-2].node), new astnode(ASSIGN, (yyvsp[-1].data)),  (yyvsp[0].node)});}
#line 2078 "parser.tab.cpp"
    break;

  case 29: /* VarSpec: IdentifierList Type  */
#line 138 "src/parser.ypp"
                                      {(yyval.node) = new astnode("VarSpec", false, {(yyvsp[-1].node), (yyvsp[0].node)});}
#line 2084 "parser.tab.cpp"
    break;

  case 30: /* Declaration: ConstDecl  */
#line 142 "src/parser.ypp"
                  {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2090 "parser.tab.cpp"
    break;

  case 31: /* Declaration: TypeDecl  */
#line 143 "src/parser.ypp"
                   {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2096 "parser.tab.cpp"
    break;

  case 32: /* Declaration: VarDecl  */
#line 144 "src/parser.ypp"
                  {(yyval.node) = newId((yyvsp[0].node), "Declaration");}
#line 2102 "parser.tab.cpp"
    break;

  case 33: /* FunctionDecl: FUNC IDENTIFIER OPENB Function CLOSEB  */
#line 147 "src/parser.ypp"
                                                      { (yyval.node) = new astnode("FunctionDecl", false, {new astnode(IDENTIFIER, (yyvsp[-3].data)), (yyvsp[-1].node)});
			symadd( fullscope + " " + (yyvsp[-3].data)->v_str, (yyvsp[-1].node)->type);  }
#line 2109 "parser.tab.cpp"
    break;

  case 34: /* FunctionDecl: FUNC IDENTIFIER OPENB Signature CLOSEB  */
#line 149 "src/parser.ypp"
                                                         { (yyval.node) = new astnode("FunctionDecl", false, {new astnode(IDENTIFIER, (yyvsp[-3].data)), (yyvsp[-1].node)});
		        symadd( fullscope + " " + (yyvsp[-3].data)->v_str, (yyvsp[-1].node)->type); }
#line 2116 "parser.tab.cpp"
    break;

  case 35: /* Function: Signature FunctionBody  */
#line 153 "src/parser.ypp"
                                       {(yyval.node) = new astnode("Function", false, {(yyvsp[-1].node), (yyvsp[0].node)});}
#line 2122 "parser.tab.cpp"
    break;

  case 36: /* FunctionBody: Block  */
#line 156 "src/parser.ypp"
                      {(yyval.node) = newId((yyvsp[0].node), "FunctionBody");}
#line 2128 "parser.tab.cpp"
    break;

  case 37: /* FunctionStmt: VarDecl DEFINE FunctionCall  */
#line 159 "src/parser.ypp"
                                            {(yyval.node) = new astnode("FunctionStmt", false, {(yyvsp[-2].node), (yyvsp[0].node)});}
#line 2134 "parser.tab.cpp"
    break;

  case 38: /* FunctionStmt: IDENTIFIER DEFINE FunctionCall  */
#line 160 "src/parser.ypp"
                                                 {(yyval.node) = new astnode("FunctionStmt", false, {new astnode(IDENTIFIER, (yyvsp[-2].data)), (yyvsp[0].node)});}
#line 2140 "parser.tab.cpp"
    break;

  case 39: /* FunctionCall: PrimaryExpr LPAREN ArgumentList RPAREN  */
#line 163 "src/parser.ypp"
                                                       {(yyval.node) = new astnode("FunctionCall", false, {(yyvsp[-3].node), (yyvsp[-1].node)});}
#line 2146 "parser.tab.cpp"
    break;

  case 40: /* ArgumentList: ArgumentList COMMA Arguments  */
#line 167 "src/parser.ypp"
                                             {(yyval.node) = new astnode("ArgumentList", false, {(yyvsp[-2].node), (yyvsp[0].node)});}
#line 2152 "parser.tab.cpp"
    break;

  case 41: /* ArgumentList: Arguments  */
#line 168 "src/parser.ypp"
                            {(yyval.node) = newId((yyvsp[0].node), "ArgumentList");}
#line 2158 "parser.tab.cpp"
    break;

  case 42: /* ArgumentList: %empty  */
#line 169 "src/parser.ypp"
                            { (yyval.node) = new astnode();}
#line 2164 "parser.tab.cpp"
    break;

  case 43: /* Arguments: PrimaryExpr  */
#line 172 "src/parser.ypp"
                            {(yyval.node) = newId((yyvsp[0].node), "Arguments");}
#line 2170 "parser.tab.cpp"
    break;

  case 44: /* Arguments: FunctionCall  */
#line 173 "src/parser.ypp"
                               {(yyval.node) = newId((yyvsp[0].node), "Arguments");}
#line 2176 "parser.tab.cpp"
    break;

  case 45: /* Signature: Parameters  */
#line 177 "src/parser.ypp"
                   {(yyval.node) = newId((yyvsp[0].node), "Signature");}
#line 2182 "parser.tab.cpp"
    break;

  case 46: /* Signature: Parameters Result  */
#line 178 "src/parser.ypp"
                            {(yyval.node) = new astnode("Signature", false, {(yyvsp[-1].node), (yyvsp[0].node)});}
#line 2188 "parser.tab.cpp"
    break;

  case 47: /* Result: LPAREN TypeList RPAREN  */
#line 181 "src/parser.ypp"
                               {(yyval.node) = newId((yyvsp[-1].node), "Result");}
#line 2194 "parser.tab.cpp"
    break;

  case 48: /* Result: Type  */
#line 182 "src/parser.ypp"
               {(yyval.node) = newId((yyvsp[0].node), "Result");}
#line 2200 "parser.tab.cpp"
    break;

  case 49: /* Parameters: LPAREN RPAREN  */
#line 185 "src/parser.ypp"
                      {(yyval.node) = new astnode(LPAREN);}
#line 2206 "parser.tab.cpp"
    break;

  case 50: /* Parameters: LPAREN ParameterDeclStar RPAREN  */
#line 186 "src/parser.ypp"
                                          {(yyval.node) = newId((yyvsp[-1].node), "Parameters");}
#line 2212 "parser.tab.cpp"
    break;

  case 51: /* Parameters: LPAREN ParameterDeclStar COMMA RPAREN  */
#line 187 "src/parser.ypp"
                                                {(yyval.node) = newId((yyvsp[-2].node), "Parameters");}
#line 2218 "parser.tab.cpp"
    break;

  case 52: /* ParameterDeclStar: ParameterDecl  */
#line 190 "src/parser.ypp"
                      {(yyval.node) = newId((yyvsp[0].node), "ParameterDeclStar");}
#line 2224 "parser.tab.cpp"
    break;

  case 53: /* ParameterDeclStar: ParameterDeclStar COMMA ParameterDecl  */
#line 191 "src/parser.ypp"
                                                {(yyval.node) = new astnode("ParameterDeclStar", false, {(yyvsp[-2].node), (yyvsp[0].node)});}
#line 2230 "parser.tab.cpp"
    break;

  case 54: /* ParameterDecl: IdentifierList Type  */
#line 195 "src/parser.ypp"
                            {(yyval.node) = new astnode("ParameterDecl", false, {(yyvsp[-1].node), (yyvsp[0].node)});}
#line 2236 "parser.tab.cpp"
    break;

  case 55: /* ParameterDecl: IdentifierList ELLIPSIS Type  */
#line 196 "src/parser.ypp"
                                        {(yyval.node) = new astnode("ParameterDecl", false, {(yyvsp[-2].node), new astnode(ELLIPSIS,(yyvsp[-1].data)), (yyvsp[0].node)});}
#line 2242 "parser.tab.cpp"
    break;

  case 56: /* ParameterDecl: ELLIPSIS Type  */
#line 197 "src/parser.ypp"
                        {(yyval.node) = new astnode("ParameterDecl", false, {new astnode(ELLIPSIS, (yyvsp[-1].data)), (yyvsp[0].node)});}
#line 2248 "parser.tab.cpp"
    break;

  case 57: /* TypeList: TypeList COMMA Type  */
#line 201 "src/parser.ypp"
                        {(yyval.node) = new astnode("TypeList", false, {(yyvsp[-2].node), (yyvsp[0].node)});}
#line 2254 "parser.tab.cpp"
    break;

  case 58: /* TypeList: Type  */
#line 202 "src/parser.ypp"
           {(yyval.node) = new astnode("TypeList", false, {(yyvsp[0].node)});}
#line 2260 "parser.tab.cpp"
    break;

  case 59: /* IdentifierList: IDENTIFIER IdentifierLIST  */
#line 206 "src/parser.ypp"
                                          {(yyval.node) = new astnode("IdentifierList", false, {new astnode(IDENTIFIER, (yyvsp[-1].data)), (yyvsp[0].node)});}
#line 2266 "parser.tab.cpp"
    break;

  case 60: /* IdentifierList: IDENTIFIER  */
#line 207 "src/parser.ypp"
                             {(yyval.node) = new astnode(IDENTIFIER, (yyvsp[0].data));}
#line 2272 "parser.tab.cpp"
    break;

  case 61: /* IdentifierLIST: IdentifierLIST COMMA IDENTIFIER  */
#line 210 "src/parser.ypp"
                                                {(yyval.node) = newId((yyvsp[-2].node), "IdentifierLIST");}
#line 2278 "parser.tab.cpp"
    break;

  case 62: /* IdentifierLIST: COMMA IDENTIFIER  */
#line 211 "src/parser.ypp"
                                   {(yyval.node) = new astnode(IDENTIFIER, (yyvsp[0].data));}
#line 2284 "parser.tab.cpp"
    break;

  case 63: /* MethodDecl: FUNC Receiver IDENTIFIER Function  */
#line 215 "src/parser.ypp"
                                          {(yyval.node) = new astnode("MethodDecl", false, {(yyvsp[-2].node), (yyvsp[0].node)});}
#line 2290 "parser.tab.cpp"
    break;

  case 64: /* MethodDecl: FUNC Receiver IDENTIFIER Signature  */
#line 216 "src/parser.ypp"
                                             {(yyval.node) = new astnode("MethodDecl", false, {(yyvsp[-2].node), (yyvsp[0].node)});}
#line 2296 "parser.tab.cpp"
    break;

  case 65: /* Receiver: Parameters  */
#line 220 "src/parser.ypp"
                   {(yyval.node) = newId((yyvsp[0].node), "Receiver");}
#line 2302 "parser.tab.cpp"
    break;

  case 66: /* TopLevelDeclStar: TopLevelDeclStar SEMICOLON TopLevelDecl  */
#line 223 "src/parser.ypp"
                                                           {(yyval.node) = new astnode("TopLevelDeclStar", false, {(yyvsp[-2].node), (yyvsp[0].node)});}
#line 2308 "parser.tab.cpp"
    break;

  case 67: /* TopLevelDeclStar: TopLevelDecl  */
#line 224 "src/parser.ypp"
                   {(yyval.node) = newId((yyvsp[0].node), "TopLevelDeclStar");}
#line 2314 "parser.tab.cpp"
    break;

  case 68: /* TopLevelDecl: Declaration  */
#line 228 "src/parser.ypp"
                    {(yyval.node) = newId((yyvsp[0].node), "TopLevelDecl");}
#line 2320 "parser.tab.cpp"
    break;

  case 69: /* TopLevelDecl: FunctionDecl  */
#line 229 "src/parser.ypp"
                       {(yyval.node) = newId((yyvsp[0].node), "TopLevelDecl");}
#line 2326 "parser.tab.cpp"
    break;

  case 70: /* TopLevelDecl: MethodDecl  */
#line 230 "src/parser.ypp"
                     {(yyval.node) = newId((yyvsp[0].node), "TopLevelDecl");}
#line 2332 "parser.tab.cpp"
    break;

  case 71: /* TypeLit: ArrayType  */
#line 234 "src/parser.ypp"
                  {(yyval.node) = newId((yyvsp[0].node), "TypeLit");}
#line 2338 "parser.tab.cpp"
    break;

  case 72: /* TypeLit: StructType  */
#line 235 "src/parser.ypp"
                     {(yyval.node) = newId((yyvsp[0].node), "TypeLit");}
#line 2344 "parser.tab.cpp"
    break;

  case 73: /* TypeLit: PointerType  */
#line 236 "src/parser.ypp"
                      {(yyval.node) = newId((yyvsp[0].node), "TypeLit");}
#line 2350 "parser.tab.cpp"
    break;

  case 74: /* TypeLit: FunctionType  */
#line 237 "src/parser.ypp"
                       {(yyval.node) = newId((yyvsp[0].node), "TypeLit");}
#line 2356 "parser.tab.cpp"
    break;

  case 75: /* Type: TypeName  */
#line 241 "src/parser.ypp"
                 {(yyval.node) = newId((yyvsp[0].node), "Type");}
#line 2362 "parser.tab.cpp"
    break;

  case 76: /* Type: TypeLit  */
#line 242 "src/parser.ypp"
                  {(yyval.node) = newId((yyvsp[0].node), "Type");}
#line 2368 "parser.tab.cpp"
    break;

  case 77: /* Operand: Literal  */
#line 246 "src/parser.ypp"
                {(yyval.node) = newId((yyvsp[0].node), "Operand");}
#line 2374 "parser.tab.cpp"
    break;

  case 78: /* Operand: OperandName  */
#line 247 "src/parser.ypp"
                      {(yyval.node) = newId((yyvsp[0].node), "Operand");}
#line 2380 "parser.tab.cpp"
    break;

  case 79: /* Operand: LPAREN Expression RPAREN  */
#line 248 "src/parser.ypp"
                                   {(yyval.node) = newId((yyvsp[-1].node), "Operand");}
#line 2386 "parser.tab.cpp"
    break;

  case 80: /* OperandName: IDENTIFIER  */
#line 251 "src/parser.ypp"
                   {(yyval.node) = new astnode(IDENTIFIER);}
#line 2392 "parser.tab.cpp"
    break;

  case 81: /* ReturnStmt: RETURN Expression  */
#line 255 "src/parser.ypp"
                          {(yyval.node) = newId((yyvsp[0].node), "ReturnStmt");}
#line 2398 "parser.tab.cpp"
    break;

  case 82: /* ReturnStmt: RETURN  */
#line 256 "src/parser.ypp"
                 {(yyval.node) = new astnode(RETURN);}
#line 2404 "parser.tab.cpp"
    break;

  case 83: /* BreakStmt: BREAK IDENTIFIER  */
#line 259 "src/parser.ypp"
                         {(yyval.node) = new astnode("BreakStmt", false, {new astnode(BREAK, (yyvsp[-1].data)), new astnode(IDENTIFIER, (yyvsp[0].data))});}
#line 2410 "parser.tab.cpp"
    break;

  case 84: /* BreakStmt: BREAK  */
#line 260 "src/parser.ypp"
                {(yyval.node) = new astnode(BREAK);}
#line 2416 "parser.tab.cpp"
    break;

  case 85: /* ContinueStmt: CONTINUE IDENTIFIER  */
#line 263 "src/parser.ypp"
                            {(yyval.node) = new astnode("ContinueStmt", false, {new astnode(BREAK, (yyvsp[-1].data)), new astnode(IDENTIFIER, (yyvsp[0].data))});}
#line 2422 "parser.tab.cpp"
    break;

  case 86: /* ContinueStmt: CONTINUE  */
#line 264 "src/parser.ypp"
                   {(yyval.node) = new astnode(CONTINUE);}
#line 2428 "parser.tab.cpp"
    break;

  case 87: /* IfStmt: IF OPENB Expression Block CLOSEB  */
#line 268 "src/parser.ypp"
                                         {(yyval.node) = new astnode("IfStmt", false, {(yyvsp[-2].node), (yyvsp[-1].node)});}
#line 2434 "parser.tab.cpp"
    break;

  case 88: /* IfStmt: IF OPENB SimpleStmt SEMICOLON Expression Block CLOSEB  */
#line 269 "src/parser.ypp"
                                                               {(yyval.node) = new astnode("IfStmt", false, {(yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[-1].node)});}
#line 2440 "parser.tab.cpp"
    break;

  case 89: /* IfStmt: IF OPENB SimpleStmt SEMICOLON Expression Block ELSE IfStmt CLOSEB  */
#line 270 "src/parser.ypp"
                                                                           {(yyval.node) = new astnode("IfStmt", false, {(yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node)});}
#line 2446 "parser.tab.cpp"
    break;

  case 90: /* IfStmt: IF OPENB SimpleStmt SEMICOLON Expression Block ELSE Block CLOSEB  */
#line 271 "src/parser.ypp"
                                                                           {(yyval.node) = new astnode("IfStmt", false, {(yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node)});}
#line 2452 "parser.tab.cpp"
    break;

  case 91: /* IfStmt: IF OPENB Expression Block ELSE IfStmt CLOSEB  */
#line 272 "src/parser.ypp"
                                                      {(yyval.node) = new astnode("IfStmt", false, {(yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node)});}
#line 2458 "parser.tab.cpp"
    break;

  case 92: /* IfStmt: IF OPENB Expression Block ELSE Block CLOSEB  */
#line 273 "src/parser.ypp"
                                                      {(yyval.node) = new astnode("IfStmt", false, {(yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-1].node)});}
#line 2464 "parser.tab.cpp"
    break;

  case 93: /* ForStmt: FOR OPENB Condition Block CLOSEB  */
#line 277 "src/parser.ypp"
                                         {(yyval.node) = new astnode("ForStmt", false, {(yyvsp[-2].node), (yyvsp[-1].node)});}
#line 2470 "parser.tab.cpp"
    break;

  case 94: /* ForStmt: FOR OPENB ForClause Block CLOSEB  */
#line 278 "src/parser.ypp"
                                          {(yyval.node) = new astnode("ForStmt", false, {(yyvsp[-2].node), (yyvsp[-1].node)});}
#line 2476 "parser.tab.cpp"
    break;

  case 95: /* Condition: Expression  */
#line 281 "src/parser.ypp"
                   {(yyval.node) = newId((yyvsp[0].node), "Condition");}
#line 2482 "parser.tab.cpp"
    break;

  case 96: /* ForClause: InitStmt SEMICOLON Condition SEMICOLON PostStmt  */
#line 284 "src/parser.ypp"
                                                        {(yyval.node) = new astnode("ForClause", false, {(yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)});}
#line 2488 "parser.tab.cpp"
    break;

  case 97: /* InitStmt: SimpleStmt  */
#line 287 "src/parser.ypp"
                   {(yyval.node) = newId((yyvsp[0].node), "InitStmt");}
#line 2494 "parser.tab.cpp"
    break;

  case 98: /* PostStmt: SimpleStmt  */
#line 289 "src/parser.ypp"
                   {(yyval.node) = newId((yyvsp[0].node), "InitStmt");}
#line 2500 "parser.tab.cpp"
    break;

  case 99: /* int_lit: INTEGER  */
#line 292 "src/parser.ypp"
                 { (yyval.node) = new astnode(INTEGER,(yyvsp[0].data));}
#line 2506 "parser.tab.cpp"
    break;

  case 100: /* float_lit: FLOAT  */
#line 295 "src/parser.ypp"
                { (yyval.node) = new astnode(FLOAT,(yyvsp[0].data));}
#line 2512 "parser.tab.cpp"
    break;

  case 101: /* TypeName: IDENTIFIER  */
#line 299 "src/parser.ypp"
                   { (yyval.node) = new astnode(IDENTIFIER,(yyvsp[0].data));}
#line 2518 "parser.tab.cpp"
    break;

  case 102: /* TypeName: VAR_TYPE  */
#line 300 "src/parser.ypp"
                   { (yyval.node) = new astnode(VAR_TYPE,(yyvsp[0].data));}
#line 2524 "parser.tab.cpp"
    break;

  case 103: /* ArrayType: LBRACK ArrayLength RBRACK Type  */
#line 304 "src/parser.ypp"
                                       { (yyval.node) = new astnode("",false,{(yyvsp[-2].node),(yyvsp[0].node)}); }
#line 2530 "parser.tab.cpp"
    break;

  case 104: /* ArrayLength: Expression  */
#line 308 "src/parser.ypp"
                   { (yyval.node) = newId((yyvsp[0].node), "ArrayLength"); }
#line 2536 "parser.tab.cpp"
    break;

  case 105: /* StructType: STRUCT LBRACE FieldDeclStar RBRACE  */
#line 312 "src/parser.ypp"
                                       { (yyval.node) = newId((yyvsp[-1].node), "StructType"); }
#line 2542 "parser.tab.cpp"
    break;

  case 106: /* StructType: STRUCT LBRACE RBRACE  */
#line 313 "src/parser.ypp"
                           { (yyval.node) = new astnode(STRUCT, (yyvsp[-2].data)); }
#line 2548 "parser.tab.cpp"
    break;

  case 107: /* FieldDeclStar: FieldDecl SEMICOLON  */
#line 317 "src/parser.ypp"
                        { (yyval.node) = newId((yyvsp[-1].node), "FieldDeclStar"); }
#line 2554 "parser.tab.cpp"
    break;

  case 108: /* FieldDeclStar: FieldDeclStar FieldDecl SEMICOLON  */
#line 318 "src/parser.ypp"
                                        { (yyval.node) = new astnode("FieldDeclStar",false,{(yyvsp[-2].node),(yyvsp[-1].node)}); }
#line 2560 "parser.tab.cpp"
    break;

  case 109: /* FieldDecl: IdentifierList Type  */
#line 322 "src/parser.ypp"
                            { (yyval.node) = new astnode("FieldDecl",false,{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2566 "parser.tab.cpp"
    break;

  case 110: /* FieldDecl: IdentifierList Type Tag  */
#line 323 "src/parser.ypp"
                                  { (yyval.node) = new astnode("FieldDecl",false,{(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2572 "parser.tab.cpp"
    break;

  case 111: /* Tag: STRING  */
#line 327 "src/parser.ypp"
               { (yyval.node) = new astnode(new DefinedType("string"), STRING, (yyvsp[0].data));}
#line 2578 "parser.tab.cpp"
    break;

  case 112: /* PointerType: MUL BaseType  */
#line 331 "src/parser.ypp"
                     { (yyval.node) = new astnode(new PointerType((yyvsp[0].node)->type),"PointerType",false,{(yyvsp[0].node)}); }
#line 2584 "parser.tab.cpp"
    break;

  case 113: /* BaseType: Type  */
#line 334 "src/parser.ypp"
             { (yyval.node) = new astnode((yyvsp[0].node)->type, "BaseType",false,{(yyvsp[0].node)}); }
#line 2590 "parser.tab.cpp"
    break;

  case 114: /* FunctionType: FUNC Signature  */
#line 339 "src/parser.ypp"
                       { (yyval.node) = newId((yyvsp[0].node), "FunctionType"); }
#line 2596 "parser.tab.cpp"
    break;

  case 115: /* ConstDecl: CONST ConstSpec  */
#line 343 "src/parser.ypp"
                                { (yyval.node) = newId((yyvsp[0].node), "ConstDecl"); }
#line 2602 "parser.tab.cpp"
    break;

  case 116: /* ConstSpec: IDENTIFIER Type ASSIGN Expression  */
#line 347 "src/parser.ypp"
                                                  { (yyval.node) = new astnode("ConstSpec",false,{(yyvsp[-2].node),(yyvsp[0].node)}); }
#line 2608 "parser.tab.cpp"
    break;

  case 117: /* ConstSpec: IDENTIFIER Type  */
#line 348 "src/parser.ypp"
                                  { (yyval.node) = newId((yyvsp[0].node), "ConstSpec"); }
#line 2614 "parser.tab.cpp"
    break;

  case 118: /* ExpressionList: ExpressionList COMMA Expression  */
#line 352 "src/parser.ypp"
                                                { (yyval.node) = new astnode("ExpressionList",false,{(yyvsp[-2].node),(yyvsp[0].node)}); }
#line 2620 "parser.tab.cpp"
    break;

  case 119: /* ExpressionList: Expression  */
#line 353 "src/parser.ypp"
                             { (yyval.node) = newId((yyvsp[0].node), "ExpressionList"); }
#line 2626 "parser.tab.cpp"
    break;

  case 120: /* TypeDecl: TYPE TypeSpec  */
#line 357 "src/parser.ypp"
                               { (yyval.node) = new astnode("TypeDecl",false,{new astnode(TYPE,(yyvsp[-1].data)),(yyvsp[0].node)}); }
#line 2632 "parser.tab.cpp"
    break;

  case 121: /* TypeDecl: TYPE LPAREN TypeSpecList RPAREN  */
#line 358 "src/parser.ypp"
                                                  { (yyval.node) = new astnode("TypeDecl",false,{new astnode(TYPE,(yyvsp[-3].data)), (yyvsp[-1].node)}); }
#line 2638 "parser.tab.cpp"
    break;

  case 122: /* TypeSpecList: TypeSpecList TypeSpec SEMICOLON  */
#line 362 "src/parser.ypp"
                                                { (yyval.node) = new astnode("TypeSpecList",false,{(yyvsp[-2].node),(yyvsp[-1].node)}); }
#line 2644 "parser.tab.cpp"
    break;

  case 123: /* TypeSpecList: TypeSpec SEMICOLON  */
#line 363 "src/parser.ypp"
                                     { (yyval.node) = newId((yyvsp[-1].node), "TypeSpecList"); }
#line 2650 "parser.tab.cpp"
    break;

  case 124: /* TypeSpec: AliasDecl  */
#line 366 "src/parser.ypp"
                          { (yyval.node) = newId((yyvsp[0].node), "TypeSpec"); }
#line 2656 "parser.tab.cpp"
    break;

  case 125: /* TypeSpec: TypeDef  */
#line 367 "src/parser.ypp"
                          { (yyval.node) = newId((yyvsp[0].node), "TypeSpec"); }
#line 2662 "parser.tab.cpp"
    break;

  case 126: /* AliasDecl: IDENTIFIER ASSIGN Type  */
#line 371 "src/parser.ypp"
                                       { (yyval.node) = new astnode("AliasDecl",false,{new astnode(IDENTIFIER,(yyvsp[-2].data)), new astnode(ASSIGN,(yyvsp[-1].data)), (yyvsp[0].node)}); }
#line 2668 "parser.tab.cpp"
    break;

  case 127: /* TypeDef: IDENTIFIER Type  */
#line 375 "src/parser.ypp"
                                { (yyval.node) = new astnode("TypeDef",false,{new astnode(IDENTIFIER,(yyvsp[-1].data)), (yyvsp[0].node)}); }
#line 2674 "parser.tab.cpp"
    break;

  case 128: /* Literal: BasicLit  */
#line 379 "src/parser.ypp"
                 { (yyval.node) = newId((yyvsp[0].node), "Literal"); }
#line 2680 "parser.tab.cpp"
    break;

  case 129: /* Literal: FunctionLit  */
#line 380 "src/parser.ypp"
                      { (yyval.node) = newId((yyvsp[0].node), "Literal"); }
#line 2686 "parser.tab.cpp"
    break;

  case 130: /* string_lit: STRING  */
#line 384 "src/parser.ypp"
               { new astnode(new PointerType(new DefinedType("string")) , STRING, (yyvsp[0].data));}
#line 2692 "parser.tab.cpp"
    break;

  case 131: /* byte_lit: BYTE  */
#line 388 "src/parser.ypp"
              { (yyval.node) = new astnode(new DefinedType("byte") , BYTE, (yyvsp[0].data));}
#line 2698 "parser.tab.cpp"
    break;

  case 132: /* BasicLit: int_lit  */
#line 392 "src/parser.ypp"
                { (yyval.node) = newId((yyvsp[0].node), "BasicLit"); }
#line 2704 "parser.tab.cpp"
    break;

  case 133: /* BasicLit: float_lit  */
#line 393 "src/parser.ypp"
                    { (yyval.node) = newId((yyvsp[0].node), "BasicLit"); }
#line 2710 "parser.tab.cpp"
    break;

  case 134: /* BasicLit: string_lit  */
#line 394 "src/parser.ypp"
                     { (yyval.node) = newId((yyvsp[0].node), "BasicLit"); }
#line 2716 "parser.tab.cpp"
    break;

  case 135: /* BasicLit: byte_lit  */
#line 395 "src/parser.ypp"
                   { (yyval.node) = newId((yyvsp[0].node), "BasicLit"); }
#line 2722 "parser.tab.cpp"
    break;

  case 136: /* FunctionLit: FUNC Function  */
#line 399 "src/parser.ypp"
                      { (yyval.node) = new astnode("FunctionLit",false,{new astnode(FUNC,(yyvsp[-1].data)), (yyvsp[0].node)}); }
#line 2728 "parser.tab.cpp"
    break;

  case 137: /* PrimaryExpr: Operand  */
#line 403 "src/parser.ypp"
                { (yyval.node) = newId((yyvsp[0].node), "PrimaryExpr"); }
#line 2734 "parser.tab.cpp"
    break;

  case 138: /* PrimaryExpr: PrimaryExpr Selector  */
#line 404 "src/parser.ypp"
                               { (yyval.node) = new astnode("PrimaryExpr",false,{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2740 "parser.tab.cpp"
    break;

  case 139: /* PrimaryExpr: PrimaryExpr Index  */
#line 405 "src/parser.ypp"
                            { (yyval.node) = new astnode("PrimaryExpr",false,{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2746 "parser.tab.cpp"
    break;

  case 140: /* PrimaryExpr: PrimaryExpr TypeAssertion  */
#line 406 "src/parser.ypp"
                                    { (yyval.node) = new astnode("PrimaryExpr",false,{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2752 "parser.tab.cpp"
    break;

  case 141: /* PrimaryExpr: OperandName StructLiteral  */
#line 407 "src/parser.ypp"
                                    { (yyval.node) = new astnode("PrimaryExpr",false,{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2758 "parser.tab.cpp"
    break;

  case 142: /* StructLiteral: LBRACE KeyValList RBRACE  */
#line 411 "src/parser.ypp"
                             { (yyval.node) = newId((yyvsp[-1].node), "StructLiteral"); }
#line 2764 "parser.tab.cpp"
    break;

  case 144: /* KeyValList: Expression COLON Expression  */
#line 416 "src/parser.ypp"
                                      { (yyval.node) = new astnode("",false,{(yyvsp[-2].node),(yyvsp[0].node)}); }
#line 2770 "parser.tab.cpp"
    break;

  case 145: /* KeyValList: KeyValList COMMA Expression COLON Expression  */
#line 417 "src/parser.ypp"
                                                       { (yyval.node) = new astnode("",false,{(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)}); }
#line 2776 "parser.tab.cpp"
    break;

  case 146: /* Selector: PERIOD IDENTIFIER  */
#line 421 "src/parser.ypp"
                          { (yyval.node) = new astnode("Selector",false,{new astnode(PERIOD,(yyvsp[-1].data)), new astnode(IDENTIFIER,(yyvsp[0].data))}); }
#line 2782 "parser.tab.cpp"
    break;

  case 147: /* Index: LBRACK Expression RBRACK  */
#line 424 "src/parser.ypp"
                                 { (yyval.node) = newId((yyvsp[-1].node), "Index"); }
#line 2788 "parser.tab.cpp"
    break;

  case 148: /* TypeAssertion: PERIOD LPAREN Type RPAREN  */
#line 429 "src/parser.ypp"
                                  { (yyval.node) = new astnode("TypeAssertion",false,{new astnode(PERIOD, (yyvsp[-3].data)), (yyvsp[-1].node)}); }
#line 2794 "parser.tab.cpp"
    break;

  case 149: /* Expression: Expression1  */
#line 438 "src/parser.ypp"
                { (yyval.node) = newId((yyvsp[0].node),"Expression");}
#line 2800 "parser.tab.cpp"
    break;

  case 150: /* Expression1: Expression1 LOR Expression2  */
#line 442 "src/parser.ypp"
                                { (yyval.node) = new astnode("Expression1",false,{(yyvsp[-2].node),new astnode(LOR),(yyvsp[0].node)}); }
#line 2806 "parser.tab.cpp"
    break;

  case 151: /* Expression1: Expression2  */
#line 443 "src/parser.ypp"
                  { newId((yyvsp[0].node),"Expression1"); }
#line 2812 "parser.tab.cpp"
    break;

  case 152: /* Expression2: Expression2 LAND Expression3  */
#line 447 "src/parser.ypp"
                                 { (yyval.node) = new astnode("Expression2",false,{(yyvsp[-2].node),new astnode(LAND),(yyvsp[0].node)}); }
#line 2818 "parser.tab.cpp"
    break;

  case 153: /* Expression2: Expression3  */
#line 448 "src/parser.ypp"
                  { newId((yyvsp[0].node),"Expression2"); }
#line 2824 "parser.tab.cpp"
    break;

  case 154: /* Expression3: Expression3 rel_op Expression4  */
#line 452 "src/parser.ypp"
                                   { (yyval.node) = new astnode("Expression3",false,{(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2830 "parser.tab.cpp"
    break;

  case 155: /* Expression3: Expression4  */
#line 453 "src/parser.ypp"
                  { newId((yyvsp[0].node),"Expression3"); }
#line 2836 "parser.tab.cpp"
    break;

  case 156: /* Expression4: Expression4 add_op Expression5  */
#line 457 "src/parser.ypp"
                                   { (yyval.node) = new astnode("Expression4",false,{(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2842 "parser.tab.cpp"
    break;

  case 157: /* Expression4: Expression5  */
#line 458 "src/parser.ypp"
                  { newId((yyvsp[0].node),"Expression4"); }
#line 2848 "parser.tab.cpp"
    break;

  case 158: /* Expression5: Expression5 mul_op PrimaryExpr  */
#line 462 "src/parser.ypp"
                                   { (yyval.node) = new astnode("Expression5",false,{(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2854 "parser.tab.cpp"
    break;

  case 159: /* Expression5: UnaryExpr  */
#line 463 "src/parser.ypp"
                { (yyval.node) = newId((yyvsp[0].node), "Expression5"); }
#line 2860 "parser.tab.cpp"
    break;

  case 160: /* UnaryExpr: PrimaryExpr  */
#line 467 "src/parser.ypp"
                    { (yyval.node) = newId((yyvsp[0].node),"UnaryExpr"); }
#line 2866 "parser.tab.cpp"
    break;

  case 161: /* UnaryExpr: unary_op PrimaryExpr  */
#line 468 "src/parser.ypp"
                               { (yyval.node) = new astnode("UnaryExpr",false,{(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 2872 "parser.tab.cpp"
    break;

  case 162: /* rel_op: EQL  */
#line 473 "src/parser.ypp"
              { (yyval.node) = new astnode(EQL);}
#line 2878 "parser.tab.cpp"
    break;

  case 163: /* rel_op: NEQ  */
#line 474 "src/parser.ypp"
              { (yyval.node) = new astnode(NEQ);}
#line 2884 "parser.tab.cpp"
    break;

  case 164: /* rel_op: LSS  */
#line 475 "src/parser.ypp"
              { (yyval.node) = new astnode(LSS);}
#line 2890 "parser.tab.cpp"
    break;

  case 165: /* rel_op: LEQ  */
#line 476 "src/parser.ypp"
              { (yyval.node) = new astnode(LEQ);}
#line 2896 "parser.tab.cpp"
    break;

  case 166: /* rel_op: GTR  */
#line 477 "src/parser.ypp"
              { (yyval.node) = new astnode(GTR);}
#line 2902 "parser.tab.cpp"
    break;

  case 167: /* rel_op: GEQ  */
#line 478 "src/parser.ypp"
              { (yyval.node) = new astnode(GEQ);}
#line 2908 "parser.tab.cpp"
    break;

  case 168: /* add_op: ADD  */
#line 481 "src/parser.ypp"
            { (yyval.node) = new astnode(ADD);}
#line 2914 "parser.tab.cpp"
    break;

  case 169: /* add_op: SUB  */
#line 482 "src/parser.ypp"
              { (yyval.node) = new astnode(SUB);}
#line 2920 "parser.tab.cpp"
    break;

  case 170: /* add_op: OR  */
#line 483 "src/parser.ypp"
              { (yyval.node) = new astnode(OR);}
#line 2926 "parser.tab.cpp"
    break;

  case 171: /* add_op: XOR  */
#line 484 "src/parser.ypp"
              { (yyval.node) = new astnode(XOR);}
#line 2932 "parser.tab.cpp"
    break;

  case 172: /* mul_op: MUL  */
#line 487 "src/parser.ypp"
              { (yyval.node) = new astnode(MUL);}
#line 2938 "parser.tab.cpp"
    break;

  case 173: /* mul_op: QUO  */
#line 488 "src/parser.ypp"
              { (yyval.node) = new astnode(QUO);}
#line 2944 "parser.tab.cpp"
    break;

  case 174: /* mul_op: REM  */
#line 489 "src/parser.ypp"
              { (yyval.node) = new astnode(REM);}
#line 2950 "parser.tab.cpp"
    break;

  case 175: /* mul_op: SHL  */
#line 490 "src/parser.ypp"
              { (yyval.node) = new astnode(SHL);}
#line 2956 "parser.tab.cpp"
    break;

  case 176: /* mul_op: SHR  */
#line 491 "src/parser.ypp"
              { (yyval.node) = new astnode(SHR);}
#line 2962 "parser.tab.cpp"
    break;

  case 177: /* mul_op: AND  */
#line 492 "src/parser.ypp"
              { (yyval.node) = new astnode(AND);}
#line 2968 "parser.tab.cpp"
    break;

  case 178: /* mul_op: AND_NOT  */
#line 493 "src/parser.ypp"
                   { (yyval.node) = new astnode(AND_NOT);}
#line 2974 "parser.tab.cpp"
    break;

  case 179: /* unary_op: ADD  */
#line 496 "src/parser.ypp"
             { (yyval.node) = new astnode(ADD);}
#line 2980 "parser.tab.cpp"
    break;

  case 180: /* unary_op: SUB  */
#line 497 "src/parser.ypp"
              { (yyval.node) = new astnode(SUB);}
#line 2986 "parser.tab.cpp"
    break;

  case 181: /* unary_op: NOT  */
#line 498 "src/parser.ypp"
              { (yyval.node) = new astnode(NOT);}
#line 2992 "parser.tab.cpp"
    break;

  case 182: /* unary_op: XOR  */
#line 499 "src/parser.ypp"
              { (yyval.node) = new astnode(XOR);}
#line 2998 "parser.tab.cpp"
    break;

  case 183: /* unary_op: MUL  */
#line 500 "src/parser.ypp"
              { (yyval.node) = new astnode(MUL);}
#line 3004 "parser.tab.cpp"
    break;

  case 184: /* unary_op: AND  */
#line 501 "src/parser.ypp"
              { (yyval.node) = new astnode(AND);}
#line 3010 "parser.tab.cpp"
    break;

  case 185: /* assign_op: ASSIGN  */
#line 505 "src/parser.ypp"
               { (yyval.node) = new astnode(ASSIGN);}
#line 3016 "parser.tab.cpp"
    break;

  case 186: /* assign_op: ADD_ASSIGN  */
#line 506 "src/parser.ypp"
                     { (yyval.node) = new astnode(ADD_ASSIGN);}
#line 3022 "parser.tab.cpp"
    break;

  case 187: /* assign_op: SUB_ASSIGN  */
#line 507 "src/parser.ypp"
                     { (yyval.node) = new astnode(SUB_ASSIGN);}
#line 3028 "parser.tab.cpp"
    break;

  case 188: /* assign_op: MUL_ASSIGN  */
#line 508 "src/parser.ypp"
                     { (yyval.node) = new astnode(MUL_ASSIGN);}
#line 3034 "parser.tab.cpp"
    break;

  case 189: /* assign_op: QUO_ASSIGN  */
#line 509 "src/parser.ypp"
                     { (yyval.node) = new astnode(QUO_ASSIGN);}
#line 3040 "parser.tab.cpp"
    break;

  case 190: /* assign_op: REM_ASSIGN  */
#line 510 "src/parser.ypp"
                     { (yyval.node) = new astnode(REM_ASSIGN);}
#line 3046 "parser.tab.cpp"
    break;

  case 191: /* PackageClause: PACKAGE PackageName  */
#line 514 "src/parser.ypp"
                            { (yyval.node) = new astnode("PackageClause", false, {new astnode(PACKAGE), (yyvsp[0].node)});}
#line 3052 "parser.tab.cpp"
    break;

  case 192: /* PackageName: IDENTIFIER  */
#line 517 "src/parser.ypp"
                   { (yyval.node) = new astnode(new DefinedType("fillTypeUsingSymbolTable"),IDENTIFIER);}
#line 3058 "parser.tab.cpp"
    break;

  case 193: /* ImportDeclStar: ImportDeclStar ImportDecl  */
#line 521 "src/parser.ypp"
                              { (yyval.node) = new astnode("ImportDeclStar", false,{(yyvsp[-1].node),(yyvsp[0].node)});}
#line 3064 "parser.tab.cpp"
    break;

  case 194: /* ImportDeclStar: ImportDecl  */
#line 522 "src/parser.ypp"
                 { (yyval.node) = newId((yyvsp[0].node), "ImportDeclStar"); }
#line 3070 "parser.tab.cpp"
    break;

  case 195: /* ImportDeclStar: %empty  */
#line 523 "src/parser.ypp"
                { (yyval.node) = new astnode(); }
#line 3076 "parser.tab.cpp"
    break;

  case 196: /* ImportDecl: IMPORT ImportSpec SEMICOLON  */
#line 527 "src/parser.ypp"
                                    { (yyval.node) = new astnode("ImportDecl", false, {new astnode(IMPORT),(yyvsp[-1].node)}); }
#line 3082 "parser.tab.cpp"
    break;

  case 197: /* ImportDecl: IMPORT LPAREN ImportSpecStar RPAREN  */
#line 528 "src/parser.ypp"
                                              { (yyval.node) = new astnode("ImportDecl", false, {new astnode(IMPORT), (yyvsp[-1].node)}); }
#line 3088 "parser.tab.cpp"
    break;

  case 198: /* ImportSpecStar: ImportSpecStar ImportSpec SEMICOLON  */
#line 532 "src/parser.ypp"
                                            { (yyval.node) = new astnode("ImportSpecStar", false, {(yyvsp[-2].node),(yyvsp[-1].node)}); }
#line 3094 "parser.tab.cpp"
    break;

  case 199: /* ImportSpecStar: ImportSpec SEMICOLON  */
#line 533 "src/parser.ypp"
                               { (yyval.node) = newId((yyvsp[-1].node), "ImportSpecStar"); }
#line 3100 "parser.tab.cpp"
    break;

  case 200: /* ImportSpec: PERIOD ImportPath  */
#line 536 "src/parser.ypp"
                           { (yyval.node) = new astnode("ImportSpec", false, {new astnode(PERIOD), (yyvsp[0].node)}); }
#line 3106 "parser.tab.cpp"
    break;

  case 201: /* ImportSpec: AlternatePackageName ImportPath  */
#line 537 "src/parser.ypp"
                                          { (yyval.node) = new astnode("ImportSpec", false, {(yyvsp[-1].node),(yyvsp[0].node)}); }
#line 3112 "parser.tab.cpp"
    break;

  case 202: /* ImportSpec: AlternatePackageName  */
#line 538 "src/parser.ypp"
                               { (yyval.node) = newId((yyvsp[0].node),"ImportSpec"); }
#line 3118 "parser.tab.cpp"
    break;

  case 203: /* ImportPath: string_lit  */
#line 541 "src/parser.ypp"
                    { (yyval.node) = newId((yyvsp[0].node),"ImportPath");}
#line 3124 "parser.tab.cpp"
    break;

  case 204: /* AlternatePackageName: string_lit  */
#line 544 "src/parser.ypp"
                   { (yyval.node) = newId((yyvsp[0].node), "AlternatePackageName");}
#line 3130 "parser.tab.cpp"
    break;


#line 3134 "parser.tab.cpp"

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
          goto yyexhaustedlab;
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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
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

#line 547 "src/parser.ypp"


int main (int argc, char **argv) {

	yyparse ( );
	print_symtab();
}
