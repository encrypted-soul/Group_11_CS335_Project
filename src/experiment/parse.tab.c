/* A Bison parser, made by GNU Bison 3.8.2.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parse.y"

#include <stdio.h>
int yylex();
void yyerror(char* s);
int yydebug = 1;

#line 78 "parse.tab.c"

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
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    CASE = 258,                    /* CASE  */
    BREAK = 259,                   /* BREAK  */
    FUNC = 260,                    /* FUNC  */
    VARCASE = 261,                 /* VARCASE  */
    STRUCT = 262,                  /* STRUCT  */
    RETURN = 263,                  /* RETURN  */
    ELSE = 264,                    /* ELSE  */
    GOTO = 265,                    /* GOTO  */
    PACKAGE = 266,                 /* PACKAGE  */
    CONST = 267,                   /* CONST  */
    IF = 268,                      /* IF  */
    RANGE = 269,                   /* RANGE  */
    CONTINUE = 270,                /* CONTINUE  */
    FOR = 271,                     /* FOR  */
    SPACE = 272,                   /* SPACE  */
    TAB = 273,                     /* TAB  */
    ID = 274,                      /* ID  */
    VAR = 275,                     /* VAR  */
    INT8 = 276,                    /* INT8  */
    INT16 = 277,                   /* INT16  */
    INT32 = 278,                   /* INT32  */
    INT64 = 279,                   /* INT64  */
    UINT8 = 280,                   /* UINT8  */
    UINT16 = 281,                  /* UINT16  */
    UINT32 = 282,                  /* UINT32  */
    UINT64 = 283,                  /* UINT64  */
    FLOAT32 = 284,                 /* FLOAT32  */
    FLOAT64 = 285,                 /* FLOAT64  */
    BYTE = 286,                    /* BYTE  */
    TRUE = 287,                    /* TRUE  */
    FALSE = 288,                   /* FALSE  */
    STRING_LIT = 289,              /* STRING_LIT  */
    BINARY_LIT = 290,              /* BINARY_LIT  */
    HEX_LIT = 291,                 /* HEX_LIT  */
    FLOAT_LIT = 292,               /* FLOAT_LIT  */
    DEC_LIT = 293,                 /* DEC_LIT  */
    IMPORT = 294,                  /* IMPORT  */
    STRING = 295,                  /* STRING  */
    ELIPSIS = 296,                 /* ELIPSIS  */
    SELECT = 297,                  /* SELECT  */
    GO = 298,                      /* GO  */
    FALLTHROUGH = 299,             /* FALLTHROUGH  */
    DEFAULT = 300,                 /* DEFAULT  */
    TYPE_TOK = 301,                /* TYPE_TOK  */
    IMPORT_NAME = 302,             /* IMPORT_NAME  */
    EXPR = 321,                    /* EXPR  */
    UNARY = 322                    /* UNARY  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
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
  YYSYMBOL_CASE = 3,                       /* CASE  */
  YYSYMBOL_BREAK = 4,                      /* BREAK  */
  YYSYMBOL_FUNC = 5,                       /* FUNC  */
  YYSYMBOL_VARCASE = 6,                    /* VARCASE  */
  YYSYMBOL_STRUCT = 7,                     /* STRUCT  */
  YYSYMBOL_RETURN = 8,                     /* RETURN  */
  YYSYMBOL_ELSE = 9,                       /* ELSE  */
  YYSYMBOL_GOTO = 10,                      /* GOTO  */
  YYSYMBOL_PACKAGE = 11,                   /* PACKAGE  */
  YYSYMBOL_CONST = 12,                     /* CONST  */
  YYSYMBOL_IF = 13,                        /* IF  */
  YYSYMBOL_RANGE = 14,                     /* RANGE  */
  YYSYMBOL_CONTINUE = 15,                  /* CONTINUE  */
  YYSYMBOL_FOR = 16,                       /* FOR  */
  YYSYMBOL_SPACE = 17,                     /* SPACE  */
  YYSYMBOL_TAB = 18,                       /* TAB  */
  YYSYMBOL_ID = 19,                        /* ID  */
  YYSYMBOL_VAR = 20,                       /* VAR  */
  YYSYMBOL_INT8 = 21,                      /* INT8  */
  YYSYMBOL_INT16 = 22,                     /* INT16  */
  YYSYMBOL_INT32 = 23,                     /* INT32  */
  YYSYMBOL_INT64 = 24,                     /* INT64  */
  YYSYMBOL_UINT8 = 25,                     /* UINT8  */
  YYSYMBOL_UINT16 = 26,                    /* UINT16  */
  YYSYMBOL_UINT32 = 27,                    /* UINT32  */
  YYSYMBOL_UINT64 = 28,                    /* UINT64  */
  YYSYMBOL_FLOAT32 = 29,                   /* FLOAT32  */
  YYSYMBOL_FLOAT64 = 30,                   /* FLOAT64  */
  YYSYMBOL_BYTE = 31,                      /* BYTE  */
  YYSYMBOL_TRUE = 32,                      /* TRUE  */
  YYSYMBOL_FALSE = 33,                     /* FALSE  */
  YYSYMBOL_STRING_LIT = 34,                /* STRING_LIT  */
  YYSYMBOL_BINARY_LIT = 35,                /* BINARY_LIT  */
  YYSYMBOL_HEX_LIT = 36,                   /* HEX_LIT  */
  YYSYMBOL_FLOAT_LIT = 37,                 /* FLOAT_LIT  */
  YYSYMBOL_DEC_LIT = 38,                   /* DEC_LIT  */
  YYSYMBOL_IMPORT = 39,                    /* IMPORT  */
  YYSYMBOL_STRING = 40,                    /* STRING  */
  YYSYMBOL_ELIPSIS = 41,                   /* ELIPSIS  */
  YYSYMBOL_SELECT = 42,                    /* SELECT  */
  YYSYMBOL_GO = 43,                        /* GO  */
  YYSYMBOL_FALLTHROUGH = 44,               /* FALLTHROUGH  */
  YYSYMBOL_DEFAULT = 45,                   /* DEFAULT  */
  YYSYMBOL_TYPE_TOK = 46,                  /* TYPE_TOK  */
  YYSYMBOL_IMPORT_NAME = 47,               /* IMPORT_NAME  */
  YYSYMBOL_48_ = 48,                       /* ','  */
  YYSYMBOL_49_ = 49,                       /* '='  */
  YYSYMBOL_50_ = 50,                       /* "+="  */
  YYSYMBOL_51_ = 51,                       /* "-="  */
  YYSYMBOL_52_ = 52,                       /* "|="  */
  YYSYMBOL_53_ = 53,                       /* "^="  */
  YYSYMBOL_54_ = 54,                       /* "*="  */
  YYSYMBOL_55_ = 55,                       /* "/="  */
  YYSYMBOL_56_ = 56,                       /* "%="  */
  YYSYMBOL_57_ = 57,                       /* "<<="  */
  YYSYMBOL_58_ = 58,                       /* ">>="  */
  YYSYMBOL_59_ = 59,                       /* "&="  */
  YYSYMBOL_60_ = 60,                       /* "||"  */
  YYSYMBOL_61_ = 61,                       /* "&&"  */
  YYSYMBOL_62_ = 62,                       /* '|'  */
  YYSYMBOL_63_ = 63,                       /* '^'  */
  YYSYMBOL_64_ = 64,                       /* '&'  */
  YYSYMBOL_65_ = 65,                       /* "=="  */
  YYSYMBOL_66_ = 66,                       /* "!="  */
  YYSYMBOL_67_ = 67,                       /* '>'  */
  YYSYMBOL_68_ = 68,                       /* '<'  */
  YYSYMBOL_69_ = 69,                       /* ">="  */
  YYSYMBOL_70_ = 70,                       /* "<="  */
  YYSYMBOL_71_ = 71,                       /* ">>"  */
  YYSYMBOL_72_ = 72,                       /* "<<"  */
  YYSYMBOL_73_ = 73,                       /* '+'  */
  YYSYMBOL_74_ = 74,                       /* '-'  */
  YYSYMBOL_75_ = 75,                       /* '*'  */
  YYSYMBOL_76_ = 76,                       /* '/'  */
  YYSYMBOL_77_ = 77,                       /* '%'  */
  YYSYMBOL_78_ = 78,                       /* '!'  */
  YYSYMBOL_EXPR = 79,                      /* EXPR  */
  YYSYMBOL_UNARY = 80,                     /* UNARY  */
  YYSYMBOL_81_ = 81,                       /* ';'  */
  YYSYMBOL_82_ = 82,                       /* '('  */
  YYSYMBOL_83_ = 83,                       /* ')'  */
  YYSYMBOL_84_ = 84,                       /* '.'  */
  YYSYMBOL_85_ = 85,                       /* "="  */
  YYSYMBOL_86_ = 86,                       /* '['  */
  YYSYMBOL_87_ = 87,                       /* ']'  */
  YYSYMBOL_88_ = 88,                       /* "("  */
  YYSYMBOL_89_ = 89,                       /* ")"  */
  YYSYMBOL_90_ = 90,                       /* '{'  */
  YYSYMBOL_91_ = 91,                       /* '}'  */
  YYSYMBOL_92_ = 92,                       /* ':'  */
  YYSYMBOL_93_ = 93,                       /* "++"  */
  YYSYMBOL_94_ = 94,                       /* "--"  */
  YYSYMBOL_YYACCEPT = 95,                  /* $accept  */
  YYSYMBOL_SourceFile = 96,                /* SourceFile  */
  YYSYMBOL_PackageClause = 97,             /* PackageClause  */
  YYSYMBOL_PackageName = 98,               /* PackageName  */
  YYSYMBOL_ImportDecl = 99,                /* ImportDecl  */
  YYSYMBOL_ImportSpec = 100,               /* ImportSpec  */
  YYSYMBOL_ImportPath = 101,               /* ImportPath  */
  YYSYMBOL_TopLevelDecl = 102,             /* TopLevelDecl  */
  YYSYMBOL_STAR_TopLevelDecl_SC = 103,     /* STAR_TopLevelDecl_SC  */
  YYSYMBOL_STAR_ImportDecl_SC = 104,       /* STAR_ImportDecl_SC  */
  YYSYMBOL_STAR_ImportSpec_SC = 105,       /* STAR_ImportSpec_SC  */
  YYSYMBOL_STAR_CM_ID = 106,               /* STAR_CM_ID  */
  YYSYMBOL_STAR_ConstSpec_SC = 107,        /* STAR_ConstSpec_SC  */
  YYSYMBOL_STAR_VarSpec_SC = 108,          /* STAR_VarSpec_SC  */
  YYSYMBOL_STAR_CM_EXP = 109,              /* STAR_CM_EXP  */
  YYSYMBOL_STAR_TypeSpec_SC = 110,         /* STAR_TypeSpec_SC  */
  YYSYMBOL_STAR_Statement_SC = 111,        /* STAR_Statement_SC  */
  YYSYMBOL_STAR_CM_ParameterDecl = 112,    /* STAR_CM_ParameterDecl  */
  YYSYMBOL_STAR_FieldDecl_SC = 113,        /* STAR_FieldDecl_SC  */
  YYSYMBOL_Declaration = 114,              /* Declaration  */
  YYSYMBOL_ConstDecl = 115,                /* ConstDecl  */
  YYSYMBOL_ConstSpec = 116,                /* ConstSpec  */
  YYSYMBOL_IdentifierList = 117,           /* IdentifierList  */
  YYSYMBOL_TypeDecl = 118,                 /* TypeDecl  */
  YYSYMBOL_TypeSpec = 119,                 /* TypeSpec  */
  YYSYMBOL_AliasDecl = 120,                /* AliasDecl  */
  YYSYMBOL_TypeDef = 121,                  /* TypeDef  */
  YYSYMBOL_VarDecl = 122,                  /* VarDecl  */
  YYSYMBOL_VarSpec = 123,                  /* VarSpec  */
  YYSYMBOL_ExpressionList = 124,           /* ExpressionList  */
  YYSYMBOL_Expression = 125,               /* Expression  */
  YYSYMBOL_UnaryExpr = 126,                /* UnaryExpr  */
  YYSYMBOL_binary_op = 127,                /* binary_op  */
  YYSYMBOL_rel_op = 128,                   /* rel_op  */
  YYSYMBOL_add_op = 129,                   /* add_op  */
  YYSYMBOL_assign_op = 130,                /* assign_op  */
  YYSYMBOL_mul_op = 131,                   /* mul_op  */
  YYSYMBOL_unary_op = 132,                 /* unary_op  */
  YYSYMBOL_PrimaryExpr = 133,              /* PrimaryExpr  */
  YYSYMBOL_Selector = 134,                 /* Selector  */
  YYSYMBOL_Index = 135,                    /* Index  */
  YYSYMBOL_Arguments = 136,                /* Arguments  */
  YYSYMBOL_ArgumentInBracket = 137,        /* ArgumentInBracket  */
  YYSYMBOL_ArgumentInBracketFirst = 138,   /* ArgumentInBracketFirst  */
  YYSYMBOL_ArgumentInBracketEnd = 139,     /* ArgumentInBracketEnd  */
  YYSYMBOL_Operand = 140,                  /* Operand  */
  YYSYMBOL_Literal = 141,                  /* Literal  */
  YYSYMBOL_INT_LIT = 142,                  /* INT_LIT  */
  YYSYMBOL_BasicLit = 143,                 /* BasicLit  */
  YYSYMBOL_OperandName = 144,              /* OperandName  */
  YYSYMBOL_QualifiedIdent = 145,           /* QualifiedIdent  */
  YYSYMBOL_CompositeLit = 146,             /* CompositeLit  */
  YYSYMBOL_LiteralType = 147,              /* LiteralType  */
  YYSYMBOL_LiteralValue = 148,             /* LiteralValue  */
  YYSYMBOL_ElementList = 149,              /* ElementList  */
  YYSYMBOL_STAR_CM_KeyedElement = 150,     /* STAR_CM_KeyedElement  */
  YYSYMBOL_KeyedElement = 151,             /* KeyedElement  */
  YYSYMBOL_Key = 152,                      /* Key  */
  YYSYMBOL_Element = 153,                  /* Element  */
  YYSYMBOL_FunctionLit = 154,              /* FunctionLit  */
  YYSYMBOL_FunctionDecl = 155,             /* FunctionDecl  */
  YYSYMBOL_FunctionName = 156,             /* FunctionName  */
  YYSYMBOL_FunctionBody = 157,             /* FunctionBody  */
  YYSYMBOL_Block = 158,                    /* Block  */
  YYSYMBOL_Statement = 159,                /* Statement  */
  YYSYMBOL_LabeledStmt = 160,              /* LabeledStmt  */
  YYSYMBOL_Label = 161,                    /* Label  */
  YYSYMBOL_SimpleStmt = 162,               /* SimpleStmt  */
  YYSYMBOL_EmptyStmt = 163,                /* EmptyStmt  */
  YYSYMBOL_ExpressionStmt = 164,           /* ExpressionStmt  */
  YYSYMBOL_IncDecStmt = 165,               /* IncDecStmt  */
  YYSYMBOL_Assignment = 166,               /* Assignment  */
  YYSYMBOL_IfStmt = 167,                   /* IfStmt  */
  YYSYMBOL_ForStmt = 168,                  /* ForStmt  */
  YYSYMBOL_ForStmtAfter = 169,             /* ForStmtAfter  */
  YYSYMBOL_Condition = 170,                /* Condition  */
  YYSYMBOL_ForClause = 171,                /* ForClause  */
  YYSYMBOL_OPT_InitStmt = 172,             /* OPT_InitStmt  */
  YYSYMBOL_OPT_Condition = 173,            /* OPT_Condition  */
  YYSYMBOL_OPT_PostStmt = 174,             /* OPT_PostStmt  */
  YYSYMBOL_InitStmt = 175,                 /* InitStmt  */
  YYSYMBOL_PostStmt = 176,                 /* PostStmt  */
  YYSYMBOL_RangeClause = 177,              /* RangeClause  */
  YYSYMBOL_GoStmt = 178,                   /* GoStmt  */
  YYSYMBOL_ReturnStmt = 179,               /* ReturnStmt  */
  YYSYMBOL_BreakStmt = 180,                /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 181,             /* ContinueStmt  */
  YYSYMBOL_GotoStmt = 182,                 /* GotoStmt  */
  YYSYMBOL_FallthroughStmt = 183,          /* FallthroughStmt  */
  YYSYMBOL_Type = 184,                     /* Type  */
  YYSYMBOL_TypeName = 185,                 /* TypeName  */
  YYSYMBOL_TypeLit = 186,                  /* TypeLit  */
  YYSYMBOL_ArrayType = 187,                /* ArrayType  */
  YYSYMBOL_ArrayLength = 188,              /* ArrayLength  */
  YYSYMBOL_ElementType = 189,              /* ElementType  */
  YYSYMBOL_StructType = 190,               /* StructType  */
  YYSYMBOL_FieldDecl = 191,                /* FieldDecl  */
  YYSYMBOL_Tag = 192,                      /* Tag  */
  YYSYMBOL_PointerType = 193,              /* PointerType  */
  YYSYMBOL_BaseType = 194,                 /* BaseType  */
  YYSYMBOL_FunctionType = 195,             /* FunctionType  */
  YYSYMBOL_Signature = 196,                /* Signature  */
  YYSYMBOL_Result = 197,                   /* Result  */
  YYSYMBOL_Parameters = 198,               /* Parameters  */
  YYSYMBOL_ParameterList = 199,            /* ParameterList  */
  YYSYMBOL_ParameterDecl = 200             /* ParameterDecl  */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYLAST   847

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  106
/* YYNRULES -- Number of rules.  */
#define YYNRULES  224
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  315

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   327


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
       2,     2,     2,    78,     2,     2,     2,    77,    64,     2,
      82,    83,    75,    73,    48,    74,    84,    76,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    92,    81,
      68,    49,    67,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    86,     2,    87,    63,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,    62,    91,     2,     2,     2,     2,
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
      45,    46,    47,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    65,    66,    69,    70,    71,
      72,    79,    80,    85,    88,    89,    93,    94
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    35,    35,    37,    38,    42,    43,    45,    46,    47,
      49,    51,    52,    56,    57,    59,    60,    62,    63,    65,
      66,    68,    69,    70,    71,    72,    73,    74,    75,    78,
      79,    82,    83,    85,    86,    89,    90,    91,    95,    96,
      97,    98,   101,   102,   103,   104,   105,   106,   110,   111,
     112,   116,   118,   119,   121,   122,   126,   127,   128,   129,
     130,   132,   133,   134,   135,   136,   137,   139,   140,   141,
     142,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   155,   156,   157,   158,   159,   160,   162,   163,   164,
     165,   166,   167,   188,   189,   190,   191,   193,   194,   196,
     197,   225,   227,   228,   231,   232,   233,   237,   238,   239,
     244,   245,   246,   251,   252,   253,   256,   257,   258,   261,
     262,   265,   268,   269,   270,   271,   272,   275,   276,   279,
     280,   281,   285,   286,   289,   290,   293,   294,   298,   301,
     302,   304,   305,   306,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   328,   329,   331,   332,
     333,   334,   358,   359,   360,   361,   363,   366,   367,   368,
     369,   372,   373,   377,   378,   379,   382,   384,   386,   389,
     390,   407,   410,   411,   416,   417,   421,   423,   424,   427,
     428,   431,   432,   436,   439,   443,   444,   445,   447,   448,
     450,   451,   452,   453,   462,   463,   464,   473,   474,   475,
     476,   482,   483,   492,   493,   494,   495,   496,   497,   499,
     500,   502,   503,   504,   505
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "CASE", "BREAK",
  "FUNC", "VARCASE", "STRUCT", "RETURN", "ELSE", "GOTO", "PACKAGE",
  "CONST", "IF", "RANGE", "CONTINUE", "FOR", "SPACE", "TAB", "ID", "VAR",
  "INT8", "INT16", "INT32", "INT64", "UINT8", "UINT16", "UINT32", "UINT64",
  "FLOAT32", "FLOAT64", "BYTE", "TRUE", "FALSE", "STRING_LIT",
  "BINARY_LIT", "HEX_LIT", "FLOAT_LIT", "DEC_LIT", "IMPORT", "STRING",
  "ELIPSIS", "SELECT", "GO", "FALLTHROUGH", "DEFAULT", "TYPE_TOK",
  "IMPORT_NAME", "','", "'='", "\"+=\"", "\"-=\"", "\"|=\"", "\"^=\"",
  "\"*=\"", "\"/=\"", "\"%=\"", "\"<<=\"", "\">>=\"", "\"&=\"", "\"||\"",
  "\"&&\"", "'|'", "'^'", "'&'", "\"==\"", "\"!=\"", "'>'", "'<'",
  "\">=\"", "\"<=\"", "\">>\"", "\"<<\"", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'!'", "EXPR", "UNARY", "';'", "'('", "')'", "'.'", "\"=\"",
  "'['", "']'", "\"(\"", "\")\"", "'{'", "'}'", "':'", "\"++\"", "\"--\"",
  "$accept", "SourceFile", "PackageClause", "PackageName", "ImportDecl",
  "ImportSpec", "ImportPath", "TopLevelDecl", "STAR_TopLevelDecl_SC",
  "STAR_ImportDecl_SC", "STAR_ImportSpec_SC", "STAR_CM_ID",
  "STAR_ConstSpec_SC", "STAR_VarSpec_SC", "STAR_CM_EXP",
  "STAR_TypeSpec_SC", "STAR_Statement_SC", "STAR_CM_ParameterDecl",
  "STAR_FieldDecl_SC", "Declaration", "ConstDecl", "ConstSpec",
  "IdentifierList", "TypeDecl", "TypeSpec", "AliasDecl", "TypeDef",
  "VarDecl", "VarSpec", "ExpressionList", "Expression", "UnaryExpr",
  "binary_op", "rel_op", "add_op", "assign_op", "mul_op", "unary_op",
  "PrimaryExpr", "Selector", "Index", "Arguments", "ArgumentInBracket",
  "ArgumentInBracketFirst", "ArgumentInBracketEnd", "Operand", "Literal",
  "INT_LIT", "BasicLit", "OperandName", "QualifiedIdent", "CompositeLit",
  "LiteralType", "LiteralValue", "ElementList", "STAR_CM_KeyedElement",
  "KeyedElement", "Key", "Element", "FunctionLit", "FunctionDecl",
  "FunctionName", "FunctionBody", "Block", "Statement", "LabeledStmt",
  "Label", "SimpleStmt", "EmptyStmt", "ExpressionStmt", "IncDecStmt",
  "Assignment", "IfStmt", "ForStmt", "ForStmtAfter", "Condition",
  "ForClause", "OPT_InitStmt", "OPT_Condition", "OPT_PostStmt", "InitStmt",
  "PostStmt", "RangeClause", "GoStmt", "ReturnStmt", "BreakStmt",
  "ContinueStmt", "GotoStmt", "FallthroughStmt", "Type", "TypeName",
  "TypeLit", "ArrayType", "ArrayLength", "ElementType", "StructType",
  "FieldDecl", "Tag", "PointerType", "BaseType", "FunctionType",
  "Signature", "Result", "Parameters", "ParameterList", "ParameterDecl", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-178)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-199)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      15,    25,     5,   -51,  -178,  -178,  -178,  -178,    10,    31,
     -48,    46,  -178,  -178,    30,    30,  -178,  -178,  -178,    37,
      -6,    -4,    12,   -21,  -178,  -178,  -178,  -178,  -178,    67,
    -178,  -178,  -178,    24,  -178,  -178,  -178,  -178,  -178,   -17,
    -178,    62,  -178,  -178,  -178,  -178,  -178,  -178,    35,    38,
       3,   119,    59,     6,    26,   514,    24,    27,    39,   155,
     155,   155,   514,    44,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,    19,  -178,   155,  -178,    77,    51,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,   116,  -178,    61,  -178,
      80,    24,    39,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,   494,   514,  -178,   770,  -178,   514,
      72,  -178,  -178,  -178,  -178,  -178,  -178,  -178,    63,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,    82,   770,
      81,   152,  -178,  -178,  -178,   155,  -178,  -178,   124,   244,
    -178,  -178,  -178,     3,    86,   712,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,   128,   514,  -178,  -178,  -178,  -178,
      22,   158,   514,  -178,  -178,  -178,   352,  -178,   -11,  -178,
     155,  -178,  -178,    13,   161,   514,   161,   514,   161,   414,
      55,   514,  -178,  -178,  -178,   241,   543,  -178,   101,  -178,
      94,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,   155,  -178,   514,  -178,  -178,
     105,   149,   144,  -178,   742,  -178,   648,   103,   106,  -178,
     107,  -178,  -178,   155,   117,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,   578,   122,  -178,   514,   216,   613,  -178,  -178,
       3,  -178,  -178,   123,  -178,  -178,   770,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,   514,  -178,  -178,
    -178,   332,  -178,   770,  -178,   159,  -178,   514,  -178,  -178,
     160,   434,   166,  -178,  -178,   514,   770,   192,  -178,   514,
    -178,  -178,  -178,  -178,   434,   770,  -178,  -178,  -178,  -178,
     681,   514,   770,  -178,   129,  -178,   202,   770,   514,    -7,
    -178,  -178,  -178,  -178,  -178
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     4,     3,     1,    16,    14,     0,
       0,     2,    10,    18,     0,     0,     5,     7,    15,     0,
       0,     0,     0,     0,    11,    35,    36,    37,    12,     0,
       8,     9,   141,     0,    20,    22,    38,    40,    24,     0,
      48,     0,    28,    42,    44,    45,    13,     6,     0,     0,
     140,   214,    41,     0,     0,     0,     0,     0,   198,     0,
       0,     0,     0,     0,   199,    47,   195,   196,   200,   201,
     202,   203,     0,    17,     0,   219,     0,     0,    32,    30,
     139,   142,   217,   218,   215,   216,     0,    39,     0,    49,
       0,     0,   119,   118,   114,   115,   117,   113,    90,    92,
      87,    88,    91,    89,     0,     0,    50,    26,    52,     0,
      54,    93,   107,   116,   110,   108,   120,   111,     0,   112,
     126,   124,   123,   213,    34,    46,   212,   211,     0,   205,
       0,     0,    27,    43,   224,     0,   222,   220,   221,   162,
      19,    21,    23,     0,     0,     0,    56,    57,    69,    70,
      86,    61,    62,    65,    63,    66,    64,    85,    84,    67,
      68,    81,    82,    83,    51,     0,    58,    59,    60,    55,
       0,     0,     0,    95,    94,    96,     0,   122,     0,   197,
       0,   121,   223,     0,   190,   188,     0,   162,   192,   162,
     119,     0,   194,   143,   144,     0,    26,   153,     0,   145,
       0,   146,   158,   159,   160,   161,   154,   155,   147,   148,
     149,   150,   151,   152,   138,     0,   109,     0,    53,    99,
       0,   106,   102,    97,     0,   127,   136,   137,     0,   131,
       0,   133,   207,     0,     0,   206,   204,    31,   157,   189,
     187,   193,    26,     0,   191,     0,     0,    26,   171,   182,
       0,   173,   174,     0,   178,   175,   186,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,     0,   164,   165,
      29,   162,   125,    25,   100,   105,   101,     0,    98,   128,
     129,     0,   209,    33,   167,     0,   184,     0,   172,   180,
     166,   156,   104,   103,     0,   136,   137,   132,   210,   208,
       0,     0,   176,   179,     0,   130,   168,   185,   162,     0,
     183,   177,   181,   169,   170
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -178,  -178,  -178,    90,  -178,   183,     2,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,   204,
    -178,   163,   -14,  -178,  -178,  -178,  -178,  -178,   164,   -53,
     -62,   104,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
     -40,  -178,  -178,  -115,  -178,  -178,   -77,  -178,   -60,  -178,
    -178,  -178,    79,  -130,   -46,  -178,     1,  -177,  -178,  -178,
    -178,  -178,   -81,  -178,  -178,   -58,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,    14,
     -37,   178,   -13,  -178,    18,    11,  -178,  -178,  -178,  -178,
    -178,   -38,  -178,   184,  -178,    53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,    63,    10,    16,    17,    23,    11,     8,
      29,    52,    53,    54,   164,    72,   139,   138,   178,   194,
      25,    36,    37,    26,    43,    44,    45,    27,    40,   195,
     107,   108,   165,   166,   167,   267,   168,   109,   110,   173,
     174,   175,   220,   221,   276,   111,   112,   113,   114,   115,
     116,   117,   118,   227,   228,   280,   229,   230,   231,   119,
      28,    33,    80,    81,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   250,   251,   252,   253,   304,   311,
     254,   312,   255,   208,   209,   210,   211,   212,   213,   235,
     120,    67,   121,   130,   236,   122,   234,   299,    70,   127,
      71,    50,    84,    51,    77,    78
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     129,    64,   106,   177,    66,     6,   187,    39,    34,   197,
     243,    64,   249,    34,    82,    34,    30,    31,   123,    64,
      64,    64,    66,    66,    66,    34,     1,    56,    68,    57,
       7,    41,    34,    18,    64,    76,    64,    66,    68,    66,
      39,    58,   129,   145,     4,    34,    68,    68,    68,     9,
       4,    19,    69,   143,    74,    65,    32,    34,    20,   248,
      46,    68,    69,    68,    12,    12,    21,    56,    55,    57,
      69,    69,    69,   125,   126,   128,    35,   196,    38,    74,
     232,    58,    56,    79,    57,    69,     4,    69,   134,    87,
     136,     5,    22,    79,    42,    64,    58,    60,    66,    15,
     132,    12,   133,   218,    61,   219,    49,    86,    62,    89,
     224,    59,   284,    13,   226,    14,    73,   124,   135,    15,
     288,    75,    68,    -4,    56,   242,    57,   247,   131,   256,
      64,   310,   240,    66,   137,   140,   246,    60,    58,    -4,
      64,   197,   141,    66,    61,  -198,    69,  -157,    62,   182,
      47,    14,    60,   176,   170,   273,   171,    68,   172,    61,
      56,   142,    57,    62,   233,   179,   296,    68,   180,    76,
     306,   181,   183,   215,    58,    64,   217,   223,    66,   313,
     238,    69,   270,   286,   222,   239,   271,   241,   274,   244,
     275,    69,   277,    64,    60,  -135,    66,   279,   283,   281,
     298,    49,    68,   285,   289,    62,   301,   292,   294,   196,
     308,   309,    48,   169,   290,    24,    88,   305,    90,   295,
      68,   297,   214,   300,   293,   291,    69,   302,   314,    83,
      60,   303,   226,   272,     0,    85,   237,    61,     0,   307,
       0,    62,     0,     0,    69,     0,   196,   282,   184,    91,
       0,    57,   185,     0,   186,     0,    20,   187,     0,   188,
     189,     0,     0,   190,    21,   287,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,     0,     0,    93,    94,
      95,    96,    97,     0,     0,     0,     0,   191,   192,     0,
      22,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,     0,     0,     0,     0,     0,     0,    98,    99,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   101,   102,
       0,     0,   103,     0,     0,     0,     0,     0,     0,     0,
     104,     0,   105,     0,    79,   193,   184,    91,     0,    57,
     185,     0,   186,     0,    20,   187,     0,   188,   189,     0,
       0,   190,    21,     0,     0,     0,     0,    91,     0,    57,
       0,     0,     0,     0,     0,     0,    93,    94,    95,    96,
      97,    92,     0,     0,     0,   191,   192,     0,    22,     0,
       0,     0,     0,     0,     0,     0,    93,    94,    95,    96,
      97,     0,     0,     0,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   101,   102,     0,     0,
     103,     0,     0,     0,     0,    98,    99,     0,   104,    91,
     105,    57,    79,     0,     0,   100,   101,   102,   245,     0,
     103,     0,     0,    92,     0,     0,     0,     0,   104,    91,
     105,    57,   176,   225,     0,     0,     0,     0,    93,    94,
      95,    96,    97,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,    94,
      95,    96,    97,     0,     0,     0,     0,    98,    99,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   101,   102,
       0,     0,   103,     0,     0,     0,     0,    98,    99,    91,
     104,    57,   105,     0,    79,     0,     0,   100,   101,   102,
       0,     0,   103,    92,     0,     0,     0,     0,     0,    91,
     104,    57,   105,     0,   176,     0,     0,     0,    93,    94,
      95,    96,    97,    92,     0,   144,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,    94,
      95,    96,    97,     0,     0,     0,     0,    98,    99,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   101,   102,
       0,     0,   103,     0,     0,     0,     0,    98,    99,     0,
     104,     0,   105,     0,     0,     0,     0,   100,   101,   102,
       0,     0,   103,     0,     0,     0,     0,     0,     0,     0,
     104,     0,   105,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,     0,     0,     0,  -163,     0,     0,     0,     0,     0,
       0,     0,     0,  -163,     0,     0,   268,   269,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,     0,     0,     0,  -163,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,   268,   269,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,     0,     0,     0,  -163,     0,     0,     0,     0,     0,
       0,     0,     0,  -176,     0,     0,   268,   269,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -134,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   216,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   278,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163
};

static const yytype_int16 yycheck[] =
{
      62,    41,    55,   118,    41,     0,    13,    21,    19,   139,
     187,    51,   189,    19,    51,    19,    14,    15,    56,    59,
      60,    61,    59,    60,    61,    19,    11,     5,    41,     7,
      81,    19,    19,    81,    74,    49,    76,    74,    51,    76,
      54,    19,   104,   105,    19,    19,    59,    60,    61,    39,
      19,     5,    41,    91,    41,    41,    19,    19,    12,   189,
      81,    74,    51,    76,    34,    34,    20,     5,    85,     7,
      59,    60,    61,    59,    60,    61,    82,   139,    82,    41,
      91,    19,     5,    90,     7,    74,    19,    76,    74,    83,
      76,     1,    46,    90,    82,   135,    19,    75,   135,     9,
      81,    34,    83,   165,    82,    83,    82,    48,    86,    83,
     172,    49,   242,    82,   176,    84,    81,    90,    41,    29,
     250,    83,   135,    84,     5,   187,     7,   189,    84,   191,
     170,   308,   185,   170,    83,    19,   189,    75,    19,    84,
     180,   271,    81,   180,    82,    90,   135,    92,    86,   135,
      83,    84,    75,    90,    82,   217,    84,   170,    86,    82,
       5,    81,     7,    86,   178,    83,   281,   180,    87,   183,
     300,    19,    48,    87,    19,   215,    48,    19,   215,   309,
      19,   170,    81,   245,   170,   184,    92,   186,    83,   188,
      41,   180,    48,   233,    75,    92,   233,    91,    81,    92,
      34,    82,   215,    81,    81,    86,    14,    48,    48,   271,
      81,     9,    29,   109,   267,    11,    53,   294,    54,   281,
     233,   281,   143,   285,   277,   271,   215,   289,   309,    51,
      75,   289,   294,   215,    -1,    51,   183,    82,    -1,   301,
      -1,    86,    -1,    -1,   233,    -1,   308,   233,     4,     5,
      -1,     7,     8,    -1,    10,    -1,    12,    13,    -1,    15,
      16,    -1,    -1,    19,    20,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    -1,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    -1,    43,    44,    -1,
      46,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    88,    -1,    90,    91,     4,     5,    -1,     7,
       8,    -1,    10,    -1,    12,    13,    -1,    15,    16,    -1,
      -1,    19,    20,    -1,    -1,    -1,    -1,     5,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    19,    -1,    -1,    -1,    43,    44,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    63,    64,    -1,    86,     5,
      88,     7,    90,    -1,    -1,    73,    74,    75,    14,    -1,
      78,    -1,    -1,    19,    -1,    -1,    -1,    -1,    86,     5,
      88,     7,    90,    91,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    -1,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    63,    64,     5,
      86,     7,    88,    -1,    90,    -1,    -1,    73,    74,    75,
      -1,    -1,    78,    19,    -1,    -1,    -1,    -1,    -1,     5,
      86,     7,    88,    -1,    90,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    19,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    -1,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    63,    64,    -1,
      86,    -1,    88,    -1,    -1,    -1,    -1,    73,    74,    75,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    88,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    -1,    93,    94,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,
      -1,    93,    94,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    -1,    93,    94,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    96,    97,    19,    98,     0,    81,   104,    39,
      99,   103,    34,    82,    84,    98,   100,   101,    81,     5,
      12,    20,    46,   102,   114,   115,   118,   122,   155,   105,
     101,   101,    19,   156,    19,    82,   116,   117,    82,   117,
     123,    19,    82,   119,   120,   121,    81,    83,   100,    82,
     196,   198,   106,   107,   108,    85,     5,     7,    19,    49,
      75,    82,    86,    98,   145,   184,   185,   186,   187,   190,
     193,   195,   110,    81,    41,    83,   117,   199,   200,    90,
     157,   158,   185,   186,   197,   198,    48,    83,   116,    83,
     123,     5,    19,    34,    35,    36,    37,    38,    63,    64,
      73,    74,    75,    78,    86,    88,   124,   125,   126,   132,
     133,   140,   141,   142,   143,   144,   145,   146,   147,   154,
     185,   187,   190,   196,    90,   184,   184,   194,   184,   125,
     188,    84,    81,    83,   184,    41,   184,    83,   112,   111,
      19,    81,    81,   196,    41,   125,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,   109,   127,   128,   129,   131,   126,
      82,    84,    86,   134,   135,   136,    90,   148,   113,    83,
      87,    19,   184,    48,     4,     8,    10,    13,    15,    16,
      19,    43,    44,    91,   114,   124,   125,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   178,   179,
     180,   181,   182,   183,   157,    87,    89,    48,   125,    83,
     137,   138,   184,    19,   125,    91,   125,   148,   149,   151,
     152,   153,    91,   117,   191,   184,   189,   200,    19,   161,
     124,   161,   125,   162,   161,    14,   124,   125,   158,   162,
     169,   170,   171,   172,   175,   177,   125,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,   130,    93,    94,
      81,    92,   189,   125,    83,    41,   139,    48,    87,    91,
     150,    92,   184,    81,   158,    81,   125,    49,   158,    81,
     124,   159,    48,   124,    48,   125,   148,   153,    34,   192,
     125,    14,   125,   170,   173,   151,   158,   125,    81,     9,
     162,   174,   176,   158,   167
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    97,    98,    99,    99,   100,   100,   100,
     101,   102,   102,   103,   103,   104,   104,   105,   105,   106,
     106,   107,   107,   108,   108,   109,   109,   110,   110,   111,
     111,   112,   112,   113,   113,   114,   114,   114,   115,   115,
     116,   117,   118,   118,   119,   119,   120,   121,   122,   122,
     123,   124,   125,   125,   126,   126,   127,   127,   127,   127,
     127,   128,   128,   128,   128,   128,   128,   129,   129,   129,
     129,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   131,   131,   131,   131,   131,   131,   132,   132,   132,
     132,   132,   132,   133,   133,   133,   133,   134,   135,   136,
     136,   137,   138,   138,   139,   139,   139,   140,   140,   140,
     141,   141,   141,   142,   142,   142,   143,   143,   143,   144,
     144,   145,   146,   147,   147,   147,   147,   148,   148,   149,
     150,   150,   151,   151,   152,   152,   153,   153,   154,   155,
     155,   156,   157,   158,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   160,   161,   162,   162,
     162,   162,   163,   164,   165,   165,   166,   167,   167,   167,
     167,   168,   168,   169,   169,   169,   170,   171,   172,   173,
     173,   174,   175,   176,   177,   177,   178,   179,   179,   180,
     180,   181,   181,   182,   183,   184,   184,   184,   185,   185,
     186,   186,   186,   186,   187,   188,   189,   190,   191,   191,
     192,   193,   194,   195,   196,   196,   197,   197,   197,   198,
     198,   199,   200,   200,   200
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     2,     1,     2,     4,     1,     2,     2,
       1,     1,     1,     3,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     3,     0,     3,     0,     2,     0,     3,
       0,     3,     0,     3,     0,     1,     1,     1,     2,     4,
       1,     2,     2,     4,     1,     1,     3,     2,     2,     4,
       3,     2,     1,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     3,     2,
       3,     2,     1,     3,     2,     1,     0,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     1,     1,     4,     1,     2,     3,     2,
       3,     0,     3,     1,     1,     1,     1,     1,     3,     4,
       3,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     0,     1,     2,     2,     3,     3,     5,     7,
       7,     2,     3,     1,     1,     1,     1,     5,     1,     1,
       0,     1,     1,     1,     2,     4,     2,     2,     1,     2,
       1,     2,     1,     2,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     4,     1,     1,     4,     3,     2,
       1,     2,     1,     2,     1,     2,     1,     1,     1,     2,
       3,     2,     2,     3,     2
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

#line 1720 "parse.tab.c"

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
      yyerror (YY_("syntax error"));
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

  return yyresult;
}

#line 508 "parse.y"

void yyerror(char* s){
    printf("ERROR: %s\n", s);
}

int main(){
    while(1){
        yyparse();
    }
    return 0;
}
