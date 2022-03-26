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

#include <bits/stdc++.h>
#include "parser.tab.hpp"
#include "src/ast.h"
using namespace std;

int yylex(void);
void yyerror (const char *s) {fprintf (stderr, "%s\n", s);}

extern int yylineno;
extern char* yytext;
astnode *theprogram;


#line 86 "parser.tab.cpp"

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
#line 20 "src/parser.ypp"

        #include <bits/stdc++.h>
	#include "src/ast.h"
	using namespace std;

#line 124 "parser.tab.cpp"

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
#line 26 "src/parser.ypp"

	int intconst;
	float floatconst;
	char* stringconst;
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
  YYSYMBOL_Label = 86,                     /* Label  */
  YYSYMBOL_IncDecStmt = 87,                /* IncDecStmt  */
  YYSYMBOL_Assignment = 88,                /* Assignment  */
  YYSYMBOL_VarDecl = 89,                   /* VarDecl  */
  YYSYMBOL_VarSpec = 90,                   /* VarSpec  */
  YYSYMBOL_Declaration = 91,               /* Declaration  */
  YYSYMBOL_FunctionDecl = 92,              /* FunctionDecl  */
  YYSYMBOL_FunctionName = 93,              /* FunctionName  */
  YYSYMBOL_Function = 94,                  /* Function  */
  YYSYMBOL_FunctionBody = 95,              /* FunctionBody  */
  YYSYMBOL_FunctionStmt = 96,              /* FunctionStmt  */
  YYSYMBOL_FunctionCall = 97,              /* FunctionCall  */
  YYSYMBOL_ArgumentList = 98,              /* ArgumentList  */
  YYSYMBOL_Arguments = 99,                 /* Arguments  */
  YYSYMBOL_Signature = 100,                /* Signature  */
  YYSYMBOL_Result = 101,                   /* Result  */
  YYSYMBOL_Parameters = 102,               /* Parameters  */
  YYSYMBOL_ParameterDeclStar = 103,        /* ParameterDeclStar  */
  YYSYMBOL_ParameterDecl = 104,            /* ParameterDecl  */
  YYSYMBOL_TypeList = 105,                 /* TypeList  */
  YYSYMBOL_IdentifierList = 106,           /* IdentifierList  */
  YYSYMBOL_IdentifierLIST = 107,           /* IdentifierLIST  */
  YYSYMBOL_MethodDecl = 108,               /* MethodDecl  */
  YYSYMBOL_Receiver = 109,                 /* Receiver  */
  YYSYMBOL_TopLevelDeclStar = 110,         /* TopLevelDeclStar  */
  YYSYMBOL_TopLevelDecl = 111,             /* TopLevelDecl  */
  YYSYMBOL_TypeLit = 112,                  /* TypeLit  */
  YYSYMBOL_Type = 113,                     /* Type  */
  YYSYMBOL_Operand = 114,                  /* Operand  */
  YYSYMBOL_OperandName = 115,              /* OperandName  */
  YYSYMBOL_ReturnStmt = 116,               /* ReturnStmt  */
  YYSYMBOL_BreakStmt = 117,                /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 118,             /* ContinueStmt  */
  YYSYMBOL_IfStmt = 119,                   /* IfStmt  */
  YYSYMBOL_ForStmt = 120,                  /* ForStmt  */
  YYSYMBOL_Condition = 121,                /* Condition  */
  YYSYMBOL_ForClause = 122,                /* ForClause  */
  YYSYMBOL_InitStmt = 123,                 /* InitStmt  */
  YYSYMBOL_PostStmt = 124,                 /* PostStmt  */
  YYSYMBOL_int_lit = 125,                  /* int_lit  */
  YYSYMBOL_float_lit = 126,                /* float_lit  */
  YYSYMBOL_TypeName = 127,                 /* TypeName  */
  YYSYMBOL_ArrayType = 128,                /* ArrayType  */
  YYSYMBOL_ArrayLength = 129,              /* ArrayLength  */
  YYSYMBOL_StructType = 130,               /* StructType  */
  YYSYMBOL_FieldDeclStar = 131,            /* FieldDeclStar  */
  YYSYMBOL_FieldDecl = 132,                /* FieldDecl  */
  YYSYMBOL_Tag = 133,                      /* Tag  */
  YYSYMBOL_PointerType = 134,              /* PointerType  */
  YYSYMBOL_BaseType = 135,                 /* BaseType  */
  YYSYMBOL_FunctionType = 136,             /* FunctionType  */
  YYSYMBOL_ConstDecl = 137,                /* ConstDecl  */
  YYSYMBOL_ConstSpec = 138,                /* ConstSpec  */
  YYSYMBOL_ExpressionList = 139,           /* ExpressionList  */
  YYSYMBOL_TypeDecl = 140,                 /* TypeDecl  */
  YYSYMBOL_TypeSpecList = 141,             /* TypeSpecList  */
  YYSYMBOL_TypeSpec = 142,                 /* TypeSpec  */
  YYSYMBOL_AliasDecl = 143,                /* AliasDecl  */
  YYSYMBOL_TypeDef = 144,                  /* TypeDef  */
  YYSYMBOL_Literal = 145,                  /* Literal  */
  YYSYMBOL_string_lit = 146,               /* string_lit  */
  YYSYMBOL_byte_lit = 147,                 /* byte_lit  */
  YYSYMBOL_BasicLit = 148,                 /* BasicLit  */
  YYSYMBOL_FunctionLit = 149,              /* FunctionLit  */
  YYSYMBOL_PrimaryExpr = 150,              /* PrimaryExpr  */
  YYSYMBOL_StructLiteral = 151,            /* StructLiteral  */
  YYSYMBOL_KeyValList = 152,               /* KeyValList  */
  YYSYMBOL_Selector = 153,                 /* Selector  */
  YYSYMBOL_Index = 154,                    /* Index  */
  YYSYMBOL_TypeAssertion = 155,            /* TypeAssertion  */
  YYSYMBOL_Expression = 156,               /* Expression  */
  YYSYMBOL_Expression1 = 157,              /* Expression1  */
  YYSYMBOL_Expression2 = 158,              /* Expression2  */
  YYSYMBOL_Expression3 = 159,              /* Expression3  */
  YYSYMBOL_Expression4 = 160,              /* Expression4  */
  YYSYMBOL_Expression5 = 161,              /* Expression5  */
  YYSYMBOL_UnaryExpr = 162,                /* UnaryExpr  */
  YYSYMBOL_rel_op = 163,                   /* rel_op  */
  YYSYMBOL_add_op = 164,                   /* add_op  */
  YYSYMBOL_mul_op = 165,                   /* mul_op  */
  YYSYMBOL_unary_op = 166,                 /* unary_op  */
  YYSYMBOL_assign_op = 167,                /* assign_op  */
  YYSYMBOL_PackageClause = 168,            /* PackageClause  */
  YYSYMBOL_PackageName = 169,              /* PackageName  */
  YYSYMBOL_ImportDeclStar = 170,           /* ImportDeclStar  */
  YYSYMBOL_ImportDecl = 171,               /* ImportDecl  */
  YYSYMBOL_ImportSpecStar = 172,           /* ImportSpecStar  */
  YYSYMBOL_ImportSpec = 173,               /* ImportSpec  */
  YYSYMBOL_ImportPath = 174,               /* ImportPath  */
  YYSYMBOL_AlternatePackageName = 175      /* AlternatePackageName  */
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
#define YYLAST   332

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  100
/* YYNRULES -- Number of rules.  */
#define YYNRULES  206
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
       0,    57,    57,    61,    64,    68,    73,    74,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    91,
      92,    93,    96,   101,   103,   106,   107,   110,   114,   117,
     118,   122,   123,   124,   127,   128,   130,   132,   134,   137,
     138,   141,   145,   146,   147,   150,   151,   155,   156,   159,
     160,   163,   164,   165,   168,   169,   173,   174,   175,   179,
     180,   184,   185,   188,   189,   193,   194,   198,   201,   202,
     206,   207,   208,   212,   213,   214,   215,   219,   220,   224,
     225,   226,   229,   233,   234,   237,   238,   241,   242,   246,
     247,   248,   249,   250,   251,   255,   256,   259,   262,   265,
     267,   270,   273,   277,   278,   282,   286,   290,   291,   295,
     296,   300,   301,   305,   309,   312,   316,   320,   324,   325,
     329,   330,   334,   335,   338,   339,   342,   343,   346,   350,
     354,   355,   359,   363,   367,   368,   369,   370,   374,   377,
     378,   379,   380,   381,   385,   388,   390,   391,   395,   397,
     401,   407,   411,   412,   416,   417,   421,   422,   426,   427,
     431,   432,   436,   437,   442,   443,   444,   445,   446,   447,
     449,   450,   451,   452,   454,   455,   456,   457,   458,   459,
     460,   463,   464,   465,   466,   467,   468,   472,   473,   474,
     475,   476,   477,   481,   484,   488,   489,   490,   494,   495,
     499,   500,   503,   504,   505,   507,   510
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
  "EmptyStmt", "LabeledStmt", "Label", "IncDecStmt", "Assignment",
  "VarDecl", "VarSpec", "Declaration", "FunctionDecl", "FunctionName",
  "Function", "FunctionBody", "FunctionStmt", "FunctionCall",
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

#define YYPACT_NINF (-242)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-98)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      27,    -9,    42,    24,  -242,  -242,  -242,   107,   -13,   220,
    -242,  -242,    -5,   104,  -242,    69,   104,    -2,   114,    13,
     120,  -242,  -242,  -242,  -242,    85,  -242,  -242,  -242,  -242,
      18,   100,  -242,  -242,  -242,  -242,  -242,    36,  -242,  -242,
     149,    11,  -242,     2,   163,  -242,  -242,  -242,   119,  -242,
      11,   239,  -242,   129,  -242,    11,  -242,    73,  -242,    12,
     131,   131,   131,   132,  -242,  -242,    11,   247,  -242,   180,
    -242,  -242,  -242,  -242,  -242,    11,  -242,    30,   161,   203,
     168,   207,  -242,  -242,  -242,  -242,    58,    11,  -242,  -242,
     181,    35,  -242,   181,  -242,   -14,  -242,  -242,   131,  -242,
    -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,   247,
    -242,   186,  -242,  -242,   177,  -242,  -242,  -242,  -242,  -242,
      96,  -242,   197,   201,   250,   172,   265,  -242,    93,   247,
    -242,  -242,   202,  -242,  -242,   242,   247,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,    11,  -242,  -242,  -242,    11,
      -4,   210,  -242,   181,   199,   247,  -242,    11,   247,    29,
    -242,  -242,  -242,   247,   247,  -242,  -242,  -242,  -242,  -242,
    -242,   247,  -242,  -242,  -242,  -242,   247,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,    93,    96,  -242,  -242,  -242,   204,
    -242,   229,    79,  -242,   251,  -242,   211,  -242,  -242,    83,
     226,  -242,   212,  -242,    11,   201,   250,   172,   265,    96,
     247,   262,   262,  -242,  -242,   247,   -15,  -242,   150,   224,
    -242,  -242,  -242,   232,  -242,  -242,   254,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,   162,   223,    91,  -242,    11,
    -242,  -242,  -242,  -242,   247,   247,  -242,   231,  -242,  -242,
    -242,  -242,   247,   247,  -242,    93,   233,   241,  -242,   229,
      93,  -242,  -242,  -242,  -242,  -242,  -242,   247,    93,  -242,
    -242,  -242,   249,  -242,  -242,  -242,   181,   181,   244,    71,
     245,    82,  -242,   223,  -242,  -242,  -242,  -242,   204,  -242,
      98,  -242,   223,   247,  -242,  -242,   247,   247,   307,  -242,
      93,  -242,  -242,  -242,   255,  -242,   181,    -6,  -242,  -242,
     247,   308,  -242,  -242,  -242,  -242,    -6,  -242,  -242,  -242,
    -242,  -242,  -242,  -242
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,   194,   193,     1,   197,     0,     0,
     196,   132,     0,     0,   206,     0,   204,     0,     0,     0,
       0,    33,    70,    71,    72,     2,    69,    31,    32,   195,
       0,     0,   205,   202,   198,   203,    36,     0,     4,    67,
       0,     0,   117,     0,     0,   122,   126,   127,    62,    28,
       0,     0,   199,     0,   201,     0,    51,     0,    54,     0,
       0,     0,     0,     0,   104,   103,     0,     0,    78,   119,
      77,    73,    74,    75,    76,     0,   129,     0,     0,     0,
      61,    30,    68,   200,    58,    52,     0,     0,    56,     5,
       5,    47,    65,    66,   116,     0,   115,   114,     0,    82,
     133,   101,   102,   181,   182,   185,   186,   183,   184,     0,
     139,    80,   134,   135,     0,    79,   136,   137,   130,   131,
     162,   106,   151,   153,   155,   157,   159,   161,     0,     0,
     128,   123,     0,   125,    64,     0,     0,    53,    55,    57,
      34,     4,    38,    35,    37,     0,    48,    50,   108,     0,
       0,     0,   138,     0,     0,   145,   143,     0,     0,     0,
     140,   141,   142,     0,     0,   164,   165,   167,   169,   168,
     166,     0,   170,   171,   172,   173,     0,   177,   178,   174,
     175,   176,   179,   180,     0,   163,   118,   124,    63,    29,
     121,    22,     0,    60,   111,   107,     0,   109,    81,     0,
       0,   105,     0,   148,     0,   152,   154,   156,   158,   160,
       0,    86,    88,     4,     4,    84,    82,    14,     5,     0,
      10,    19,     9,     0,    20,    21,    33,     8,    18,    17,
      11,    12,    13,    15,    16,     0,   162,   121,    49,     0,
     113,   112,   110,   144,     0,     0,   149,     0,   120,    24,
      85,    87,    22,    22,    83,     0,     0,     0,     7,    22,
       0,   187,   188,   189,   190,   191,   192,     0,    44,    25,
      26,    59,     0,   146,   150,    99,     0,     0,     0,   121,
       0,   121,    40,     0,     3,     6,    23,    39,    27,    46,
       0,    43,    45,     0,     5,     5,     0,     0,     5,    41,
       0,   147,    95,    96,     0,    97,     0,     0,    89,    42,
      22,     5,     5,     5,   100,    98,     0,    90,    94,    93,
       5,     5,    92,    91
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -242,  -242,  -167,  -135,   -90,  -242,  -169,  -241,  -242,  -242,
     -33,  -242,  -242,    22,  -242,    49,  -242,  -242,    45,  -242,
    -242,  -180,  -242,    21,    62,  -242,   305,  -242,   237,  -242,
     -19,  -242,  -242,  -242,  -242,   273,  -242,   -41,  -242,  -242,
    -242,  -242,  -242,  -230,  -242,    31,  -242,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,  -242,   175,  -242,  -242,  -242,
    -242,  -242,  -242,  -132,  -242,  -242,    52,  -242,  -242,  -242,
     184,  -242,  -242,  -242,  -123,  -242,  -242,  -242,  -242,  -242,
     -64,  -242,   165,   166,   155,   153,  -242,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,   322,  -242,   103,   316,  -242
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,   142,    60,   140,   218,   219,   220,   221,   222,
     223,   224,   225,   226,    49,   227,    23,    38,    89,   144,
     228,   229,   290,   291,    90,   146,    91,    57,    58,   192,
      59,    80,    24,    40,    25,    26,    68,    69,   110,   111,
     230,   231,   232,   233,   234,   276,   277,   278,   315,   112,
     113,    70,    71,   114,    72,   150,   151,   241,    73,    97,
      74,    27,    42,   235,    28,    77,    45,    46,    47,   115,
     116,   117,   118,   119,   120,   156,   199,   160,   161,   162,
     237,   122,   123,   124,   125,   126,   127,   171,   176,   184,
     128,   267,     3,     5,     9,    10,    30,    15,    33,    16
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     143,    50,    76,   121,   189,   185,   191,    62,   214,    81,
      48,   275,   280,    11,    84,     4,    62,    62,    88,    63,
      48,    11,    36,    64,   217,    96,    65,   255,    63,    63,
       1,    21,    64,    64,   130,    65,    65,    43,    66,    87,
      62,    75,     6,   -24,    11,   154,   139,    66,    66,   257,
     147,   217,    63,   203,    43,    12,    64,   148,    22,    65,
      48,   209,    13,    55,   141,   186,    37,   195,   236,   314,
      13,    66,   190,    21,    67,   282,   149,   313,   252,   253,
     287,    44,    48,    67,    67,    55,   321,    52,   289,     7,
     286,   200,   217,    13,   202,   236,    78,   204,    98,   131,
      22,   269,   270,   145,   193,    56,    92,    67,   194,   294,
     295,     8,   269,   270,   298,    31,   201,    99,   100,    11,
     289,   269,   270,    93,    94,   101,   102,   137,   256,   132,
      11,   149,   283,    53,    34,   288,   236,   283,    41,   311,
     312,   -97,    85,   152,    48,   292,   248,    86,   238,   320,
      51,   254,   141,   239,   243,    98,   211,   244,    18,   212,
     153,   109,   213,   247,   214,    54,   215,   299,   158,    19,
      20,   159,   300,    61,   216,   100,    11,   292,   250,   251,
     272,   273,   101,   102,   103,   104,   105,    43,   279,   281,
     106,   107,    14,    79,    83,   108,    14,    32,   271,    37,
      32,   261,    95,   190,   302,   303,   172,   173,   308,   262,
     263,   264,   265,   266,    14,   -22,   174,   175,   109,   129,
     141,   317,   318,   319,     8,    17,   133,   134,    18,   301,
     322,   323,   305,   306,    98,   211,   210,    18,   212,    19,
      20,   213,   135,   214,    17,   215,   136,    18,    19,    20,
     157,   141,    98,   216,   100,    11,   155,   163,    19,    20,
     164,   101,   102,   103,   104,   105,   188,   187,   198,   106,
     107,    99,   100,    11,   108,   197,   242,   240,   210,   101,
     102,   103,   104,   105,   245,   246,   249,   106,   107,   258,
     259,   268,   108,   177,   178,   158,   260,   109,   159,   141,
     274,   179,   180,   181,   284,   182,   285,   293,   183,   296,
     297,   165,   166,   167,   168,   109,   169,   170,   307,   316,
     310,   309,    39,   138,    82,   196,   207,   304,   205,   208,
     206,    29,    35
};

static const yytype_int16 yycheck[] =
{
      90,    20,    43,    67,   136,   128,   141,     5,    14,    50,
      24,   252,   253,    26,    55,    24,     5,     5,    59,    17,
      24,    26,    24,    21,   191,    66,    24,    42,    17,    17,
       3,     9,    21,    21,    75,    24,    24,    24,    36,    27,
       5,    39,     0,    58,    26,   109,    87,    36,    36,   218,
      91,   218,    17,    24,    24,    68,    21,    71,     9,    24,
      24,   184,    75,    27,    70,   129,    68,    71,   191,   310,
      75,    36,   136,    51,    72,   255,    95,   307,   213,   214,
     260,    68,    24,    72,    72,    27,   316,    69,   268,    65,
     259,   155,   259,    75,   158,   218,    44,    68,     5,    69,
      51,    30,    31,    68,   145,    69,    61,    72,   149,   276,
     277,     4,    30,    31,   281,    12,   157,    24,    25,    26,
     300,    30,    31,    61,    62,    32,    33,    69,   218,    77,
      26,   150,   255,    30,    65,   267,   259,   260,    24,   306,
     307,    70,    69,    98,    24,   268,   210,    74,    69,   316,
      65,   215,    70,    74,    71,     5,     6,    74,     8,     9,
      98,    68,    12,   204,    14,    65,    16,    69,    72,    19,
      20,    75,    74,    24,    24,    25,    26,   300,   211,   212,
     244,   245,    32,    33,    34,    35,    36,    24,   252,   253,
      40,    41,     8,    74,    65,    45,    12,    13,   239,    68,
      16,    39,    70,   267,   294,   295,    34,    35,   298,    47,
      48,    49,    50,    51,    30,    65,    44,    45,    68,    39,
      70,   311,   312,   313,     4,     5,    65,    24,     8,   293,
     320,   321,   296,   297,     5,     6,    74,     8,     9,    19,
      20,    12,    74,    14,     5,    16,    39,     8,    19,    20,
      73,    70,     5,    24,    25,    26,    70,    60,    19,    20,
      59,    32,    33,    34,    35,    36,    24,    65,    69,    40,
      41,    24,    25,    26,    45,    65,    65,    26,    74,    32,
      33,    34,    35,    36,    58,    73,    24,    40,    41,    65,
      58,    68,    45,    28,    29,    72,    42,    68,    75,    70,
      69,    36,    37,    38,    71,    40,    65,    58,    43,    65,
      65,    61,    62,    63,    64,    68,    66,    67,    11,    11,
      65,   300,    17,    86,    51,   150,   171,   296,   163,   176,
     164,     9,    16
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    77,   168,    24,   169,     0,    65,     4,   170,
     171,    26,    68,    75,   146,   173,   175,     5,     8,    19,
      20,    89,    91,    92,   108,   110,   111,   137,   140,   171,
     172,   173,   146,   174,    65,   174,    24,    68,    93,   102,
     109,    24,   138,    24,    68,   142,   143,   144,    24,    90,
     106,    65,    69,   173,    65,    27,    69,   103,   104,   106,
      79,    24,     5,    17,    21,    24,    36,    72,   112,   113,
     127,   128,   130,   134,   136,    39,   113,   141,   142,    74,
     107,   113,   111,    65,   113,    69,    74,    27,   113,    94,
     100,   102,    94,   100,   100,    70,   113,   135,     5,    24,
      25,    32,    33,    34,    35,    36,    40,    41,    45,    68,
     114,   115,   125,   126,   129,   145,   146,   147,   148,   149,
     150,   156,   157,   158,   159,   160,   161,   162,   166,    39,
     113,    69,   142,    65,    24,    74,    39,    69,   104,   113,
      80,    70,    78,    80,    95,    68,   101,   113,    71,   106,
     131,   132,    94,   100,   156,    70,   151,    73,    72,    75,
     153,   154,   155,    60,    59,    61,    62,    63,    64,    66,
      67,   163,    34,    35,    44,    45,   164,    28,    29,    36,
      37,    38,    40,    43,   165,   150,   156,    65,    24,   139,
     156,    79,   105,   113,   113,    71,   132,    65,    69,   152,
     156,   113,   156,    24,    68,   158,   159,   160,   161,   150,
      74,     6,     9,    12,    14,    16,    24,    78,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    91,    96,    97,
     116,   117,   118,   119,   120,   139,   150,   156,    69,    74,
      26,   133,    65,    71,    74,    58,    73,   113,   156,    24,
      86,    86,    79,    79,   156,    42,    80,    82,    65,    58,
      42,    39,    47,    48,    49,    50,    51,   167,    68,    30,
      31,   113,   156,   156,    69,    83,   121,   122,   123,   156,
      83,   156,    97,   150,    71,    65,    82,    97,   139,    97,
      98,    99,   150,    58,    78,    78,    65,    65,    78,    69,
      74,   156,    80,    80,   121,   156,   156,    11,    80,    99,
      65,    78,    78,   119,    83,   124,    11,    80,    80,    80,
      78,   119,    80,    80
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    78,    79,    80,    81,    81,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    83,
      83,    83,    84,    85,    86,    87,    87,    88,    89,    90,
      90,    91,    91,    91,    92,    92,    93,    94,    95,    96,
      96,    97,    98,    98,    98,    99,    99,   100,   100,   101,
     101,   102,   102,   102,   103,   103,   104,   104,   104,   105,
     105,   106,   106,   107,   107,   108,   108,   109,   110,   110,
     111,   111,   111,   112,   112,   112,   112,   113,   113,   114,
     114,   114,   115,   116,   116,   117,   117,   118,   118,   119,
     119,   119,   119,   119,   119,   120,   120,   121,   122,   123,
     124,   125,   126,   127,   127,   128,   129,   130,   130,   131,
     131,   132,   132,   133,   134,   135,   136,   137,   138,   138,
     139,   139,   140,   140,   141,   141,   142,   142,   143,   144,
     145,   145,   146,   147,   148,   148,   148,   148,   149,   150,
     150,   150,   150,   150,   151,   152,   152,   152,   153,   154,
     155,   156,   157,   157,   158,   158,   159,   159,   160,   160,
     161,   161,   162,   162,   163,   163,   163,   163,   163,   163,
     164,   164,   164,   164,   165,   165,   165,   165,   165,   165,
     165,   166,   166,   166,   166,   166,   166,   167,   167,   167,
     167,   167,   167,   168,   169,   170,   170,   170,   171,   171,
     172,   172,   173,   173,   173,   174,   175
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     5,     0,     0,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     1,     2,     2,     3,     2,     4,
       2,     1,     1,     1,     5,     5,     1,     2,     1,     3,
       3,     4,     3,     1,     0,     1,     1,     1,     2,     3,
       1,     2,     3,     4,     1,     3,     2,     3,     2,     3,
       1,     2,     1,     3,     2,     4,     4,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     2,     1,     2,     1,     2,     1,     5,
       7,     9,     9,     7,     7,     5,     5,     1,     5,     1,
       1,     1,     1,     1,     1,     4,     1,     4,     3,     2,
       3,     2,     3,     1,     2,     1,     2,     2,     4,     2,
       3,     1,     2,     4,     3,     2,     1,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     2,     2,     2,     3,     0,     3,     5,     2,     3,
       4,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     0,     3,     4,
       3,     2,     2,     2,     1,     1,     1
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
#line 57 "src/parser.ypp"
                                                            { theprogram = create_astnode("StartFile", "int",{(yyvsp[-3].node),(yyvsp[-1].node),(yyvsp[0].node)});}
#line 1922 "parser.tab.cpp"
    break;


#line 1926 "parser.tab.cpp"

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

#line 513 "src/parser.ypp"


int main (int argc, char **argv) {

	yyparse ( );
}
