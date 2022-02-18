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
    EXPR = 320,                    /* EXPR  */
    UNARY = 321                    /* UNARY  */
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
  YYSYMBOL_47_ = 47,                       /* ','  */
  YYSYMBOL_48_ = 48,                       /* '='  */
  YYSYMBOL_49_ = 49,                       /* "+="  */
  YYSYMBOL_50_ = 50,                       /* "-="  */
  YYSYMBOL_51_ = 51,                       /* "|="  */
  YYSYMBOL_52_ = 52,                       /* "^="  */
  YYSYMBOL_53_ = 53,                       /* "*="  */
  YYSYMBOL_54_ = 54,                       /* "/="  */
  YYSYMBOL_55_ = 55,                       /* "%="  */
  YYSYMBOL_56_ = 56,                       /* "<<="  */
  YYSYMBOL_57_ = 57,                       /* ">>="  */
  YYSYMBOL_58_ = 58,                       /* "&="  */
  YYSYMBOL_59_ = 59,                       /* "||"  */
  YYSYMBOL_60_ = 60,                       /* "&&"  */
  YYSYMBOL_61_ = 61,                       /* '|'  */
  YYSYMBOL_62_ = 62,                       /* '^'  */
  YYSYMBOL_63_ = 63,                       /* '&'  */
  YYSYMBOL_64_ = 64,                       /* "=="  */
  YYSYMBOL_65_ = 65,                       /* "!="  */
  YYSYMBOL_66_ = 66,                       /* '>'  */
  YYSYMBOL_67_ = 67,                       /* '<'  */
  YYSYMBOL_68_ = 68,                       /* ">="  */
  YYSYMBOL_69_ = 69,                       /* "<="  */
  YYSYMBOL_70_ = 70,                       /* ">>"  */
  YYSYMBOL_71_ = 71,                       /* "<<"  */
  YYSYMBOL_72_ = 72,                       /* '+'  */
  YYSYMBOL_73_ = 73,                       /* '-'  */
  YYSYMBOL_74_ = 74,                       /* '*'  */
  YYSYMBOL_75_ = 75,                       /* '/'  */
  YYSYMBOL_76_ = 76,                       /* '%'  */
  YYSYMBOL_77_ = 77,                       /* '!'  */
  YYSYMBOL_EXPR = 78,                      /* EXPR  */
  YYSYMBOL_UNARY = 79,                     /* UNARY  */
  YYSYMBOL_80_ = 80,                       /* ';'  */
  YYSYMBOL_81_ = 81,                       /* '('  */
  YYSYMBOL_82_ = 82,                       /* ')'  */
  YYSYMBOL_83_ = 83,                       /* '.'  */
  YYSYMBOL_84_ = 84,                       /* "="  */
  YYSYMBOL_85_ = 85,                       /* '['  */
  YYSYMBOL_86_ = 86,                       /* ']'  */
  YYSYMBOL_87_ = 87,                       /* "("  */
  YYSYMBOL_88_ = 88,                       /* ")"  */
  YYSYMBOL_89_ = 89,                       /* '{'  */
  YYSYMBOL_90_ = 90,                       /* '}'  */
  YYSYMBOL_91_ = 91,                       /* ':'  */
  YYSYMBOL_92_ = 92,                       /* "++"  */
  YYSYMBOL_93_ = 93,                       /* "--"  */
  YYSYMBOL_YYACCEPT = 94,                  /* $accept  */
  YYSYMBOL_SourceFile = 95,                /* SourceFile  */
  YYSYMBOL_PackageClause = 96,             /* PackageClause  */
  YYSYMBOL_PackageName = 97,               /* PackageName  */
  YYSYMBOL_ImportDecl = 98,                /* ImportDecl  */
  YYSYMBOL_ImportSpec = 99,                /* ImportSpec  */
  YYSYMBOL_ImportPath = 100,               /* ImportPath  */
  YYSYMBOL_TopLevelDecl = 101,             /* TopLevelDecl  */
  YYSYMBOL_STAR_TopLevelDecl_SC = 102,     /* STAR_TopLevelDecl_SC  */
  YYSYMBOL_STAR_ImportDecl_SC = 103,       /* STAR_ImportDecl_SC  */
  YYSYMBOL_STAR_ImportSpec_SC = 104,       /* STAR_ImportSpec_SC  */
  YYSYMBOL_STAR_CM_ID = 105,               /* STAR_CM_ID  */
  YYSYMBOL_STAR_ConstSpec_SC = 106,        /* STAR_ConstSpec_SC  */
  YYSYMBOL_STAR_VarSpec_SC = 107,          /* STAR_VarSpec_SC  */
  YYSYMBOL_STAR_CM_EXP = 108,              /* STAR_CM_EXP  */
  YYSYMBOL_STAR_TypeSpec_SC = 109,         /* STAR_TypeSpec_SC  */
  YYSYMBOL_STAR_Statement_SC = 110,        /* STAR_Statement_SC  */
  YYSYMBOL_STAR_CM_ParameterDecl = 111,    /* STAR_CM_ParameterDecl  */
  YYSYMBOL_STAR_FieldDecl_SC = 112,        /* STAR_FieldDecl_SC  */
  YYSYMBOL_Declaration = 113,              /* Declaration  */
  YYSYMBOL_ConstDecl = 114,                /* ConstDecl  */
  YYSYMBOL_ConstSpec = 115,                /* ConstSpec  */
  YYSYMBOL_IdentifierList = 116,           /* IdentifierList  */
  YYSYMBOL_TypeDecl = 117,                 /* TypeDecl  */
  YYSYMBOL_TypeSpec = 118,                 /* TypeSpec  */
  YYSYMBOL_AliasDecl = 119,                /* AliasDecl  */
  YYSYMBOL_TypeDef = 120,                  /* TypeDef  */
  YYSYMBOL_VarDecl = 121,                  /* VarDecl  */
  YYSYMBOL_VarSpec = 122,                  /* VarSpec  */
  YYSYMBOL_ExpressionList = 123,           /* ExpressionList  */
  YYSYMBOL_Expression = 124,               /* Expression  */
  YYSYMBOL_UnaryExpr = 125,                /* UnaryExpr  */
  YYSYMBOL_binary_op = 126,                /* binary_op  */
  YYSYMBOL_rel_op = 127,                   /* rel_op  */
  YYSYMBOL_add_op = 128,                   /* add_op  */
  YYSYMBOL_assign_op = 129,                /* assign_op  */
  YYSYMBOL_mul_op = 130,                   /* mul_op  */
  YYSYMBOL_unary_op = 131,                 /* unary_op  */
  YYSYMBOL_PrimaryExpr = 132,              /* PrimaryExpr  */
  YYSYMBOL_Selector = 133,                 /* Selector  */
  YYSYMBOL_Index = 134,                    /* Index  */
  YYSYMBOL_Arguments = 135,                /* Arguments  */
  YYSYMBOL_ArgumentInBracket = 136,        /* ArgumentInBracket  */
  YYSYMBOL_ArgumentInBracketFirst = 137,   /* ArgumentInBracketFirst  */
  YYSYMBOL_ArgumentInBracketEnd = 138,     /* ArgumentInBracketEnd  */
  YYSYMBOL_Operand = 139,                  /* Operand  */
  YYSYMBOL_Literal = 140,                  /* Literal  */
  YYSYMBOL_INT_LIT = 141,                  /* INT_LIT  */
  YYSYMBOL_BasicLit = 142,                 /* BasicLit  */
  YYSYMBOL_OperandName = 143,              /* OperandName  */
  YYSYMBOL_QualifiedIdent = 144,           /* QualifiedIdent  */
  YYSYMBOL_CompositeLit = 145,             /* CompositeLit  */
  YYSYMBOL_LiteralType = 146,              /* LiteralType  */
  YYSYMBOL_LiteralValue = 147,             /* LiteralValue  */
  YYSYMBOL_ElementList = 148,              /* ElementList  */
  YYSYMBOL_STAR_CM_KeyedElement = 149,     /* STAR_CM_KeyedElement  */
  YYSYMBOL_KeyedElement = 150,             /* KeyedElement  */
  YYSYMBOL_Key = 151,                      /* Key  */
  YYSYMBOL_Element = 152,                  /* Element  */
  YYSYMBOL_FunctionLit = 153,              /* FunctionLit  */
  YYSYMBOL_FunctionDecl = 154,             /* FunctionDecl  */
  YYSYMBOL_FunctionName = 155,             /* FunctionName  */
  YYSYMBOL_FunctionBody = 156,             /* FunctionBody  */
  YYSYMBOL_Block = 157,                    /* Block  */
  YYSYMBOL_Statement = 158,                /* Statement  */
  YYSYMBOL_LabeledStmt = 159,              /* LabeledStmt  */
  YYSYMBOL_Label = 160,                    /* Label  */
  YYSYMBOL_SimpleStmt = 161,               /* SimpleStmt  */
  YYSYMBOL_EmptyStmt = 162,                /* EmptyStmt  */
  YYSYMBOL_ExpressionStmt = 163,           /* ExpressionStmt  */
  YYSYMBOL_IncDecStmt = 164,               /* IncDecStmt  */
  YYSYMBOL_Assignment = 165,               /* Assignment  */
  YYSYMBOL_IfStmt = 166,                   /* IfStmt  */
  YYSYMBOL_ForStmt = 167,                  /* ForStmt  */
  YYSYMBOL_ForStmtAfter = 168,             /* ForStmtAfter  */
  YYSYMBOL_Condition = 169,                /* Condition  */
  YYSYMBOL_ForClause = 170,                /* ForClause  */
  YYSYMBOL_OPT_InitStmt = 171,             /* OPT_InitStmt  */
  YYSYMBOL_OPT_Condition = 172,            /* OPT_Condition  */
  YYSYMBOL_OPT_PostStmt = 173,             /* OPT_PostStmt  */
  YYSYMBOL_InitStmt = 174,                 /* InitStmt  */
  YYSYMBOL_PostStmt = 175,                 /* PostStmt  */
  YYSYMBOL_RangeClause = 176,              /* RangeClause  */
  YYSYMBOL_GoStmt = 177,                   /* GoStmt  */
  YYSYMBOL_ReturnStmt = 178,               /* ReturnStmt  */
  YYSYMBOL_BreakStmt = 179,                /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 180,             /* ContinueStmt  */
  YYSYMBOL_GotoStmt = 181,                 /* GotoStmt  */
  YYSYMBOL_FallthroughStmt = 182,          /* FallthroughStmt  */
  YYSYMBOL_Type = 183,                     /* Type  */
  YYSYMBOL_TypeName = 184,                 /* TypeName  */
  YYSYMBOL_TypeLit = 185,                  /* TypeLit  */
  YYSYMBOL_ArrayType = 186,                /* ArrayType  */
  YYSYMBOL_ArrayLength = 187,              /* ArrayLength  */
  YYSYMBOL_ElementType = 188,              /* ElementType  */
  YYSYMBOL_StructType = 189,               /* StructType  */
  YYSYMBOL_FieldDecl = 190,                /* FieldDecl  */
  YYSYMBOL_Tag = 191,                      /* Tag  */
  YYSYMBOL_PointerType = 192,              /* PointerType  */
  YYSYMBOL_BaseType = 193,                 /* BaseType  */
  YYSYMBOL_FunctionType = 194,             /* FunctionType  */
  YYSYMBOL_Signature = 195,                /* Signature  */
  YYSYMBOL_Result = 196,                   /* Result  */
  YYSYMBOL_Parameters = 197,               /* Parameters  */
  YYSYMBOL_ParameterList = 198,            /* ParameterList  */
  YYSYMBOL_ParameterDecl = 199             /* ParameterDecl  */
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
#define YYLAST   846

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  106
/* YYNRULES -- Number of rules.  */
#define YYNRULES  228
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  322

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   326


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
       2,     2,     2,    77,     2,     2,     2,    76,    63,     2,
      81,    82,    74,    72,    47,    73,    83,    75,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    91,    80,
      67,    48,    66,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    85,     2,    86,    62,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    89,    61,    90,     2,     2,     2,     2,
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
      45,    46,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    64,    65,    68,    69,    70,    71,
      78,    79,    84,    87,    88,    92,    93
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
     197,   225,   227,   228,   231,   232,   233,   234,   238,   239,
     240,   245,   246,   247,   252,   253,   254,   257,   258,   259,
     262,   263,   266,   269,   270,   271,   272,   273,   276,   277,
     278,   281,   282,   283,   287,   288,   291,   292,   295,   296,
     300,   303,   304,   306,   307,   308,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   330,   331,
     333,   334,   335,   336,   340,   341,   342,   343,   345,   348,
     349,   350,   351,   354,   355,   359,   360,   361,   364,   366,
     368,   371,   372,   389,   392,   393,   398,   399,   403,   405,
     406,   409,   410,   413,   414,   418,   421,   425,   426,   427,
     429,   430,   432,   433,   434,   435,   444,   445,   446,   455,
     456,   457,   458,   464,   465,   474,   475,   476,   477,   478,
     479,   481,   482,   483,   485,   486,   487,   488,   489
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
  "ELIPSIS", "SELECT", "GO", "FALLTHROUGH", "DEFAULT", "TYPE_TOK", "','",
  "'='", "\"+=\"", "\"-=\"", "\"|=\"", "\"^=\"", "\"*=\"", "\"/=\"",
  "\"%=\"", "\"<<=\"", "\">>=\"", "\"&=\"", "\"||\"", "\"&&\"", "'|'",
  "'^'", "'&'", "\"==\"", "\"!=\"", "'>'", "'<'", "\">=\"", "\"<=\"",
  "\">>\"", "\"<<\"", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "EXPR",
  "UNARY", "';'", "'('", "')'", "'.'", "\"=\"", "'['", "']'", "\"(\"",
  "\")\"", "'{'", "'}'", "':'", "\"++\"", "\"--\"", "$accept",
  "SourceFile", "PackageClause", "PackageName", "ImportDecl", "ImportSpec",
  "ImportPath", "TopLevelDecl", "STAR_TopLevelDecl_SC",
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

#define YYPACT_NINF (-188)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-201)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,    24,    35,   -34,  -188,  -188,  -188,  -188,    25,    13,
     -15,   104,  -188,  -188,    41,    41,  -188,  -188,  -188,    58,
      -3,     0,    14,    23,  -188,  -188,  -188,  -188,  -188,    32,
    -188,  -188,  -188,    18,  -188,  -188,  -188,  -188,  -188,    20,
    -188,   149,  -188,  -188,  -188,  -188,  -188,  -188,    27,    81,
      22,   281,    73,    10,    15,   514,    18,    36,    43,   282,
     282,   282,   514,    47,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,   -26,  -188,   -56,   282,  -188,    86,  -188,   -30,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,   119,  -188,
      62,  -188,    63,    18,    43,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,   494,   514,  -188,   770,
    -188,   514,    38,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
      52,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
      64,   770,    66,   134,  -188,  -188,  -188,   282,  -188,    75,
    -188,   111,   247,  -188,  -188,  -188,    22,    78,   712,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,   118,   514,  -188,
    -188,  -188,  -188,   187,   154,   514,  -188,  -188,  -188,   354,
    -188,    -8,  -188,   282,  -188,  -188,  -188,   237,   158,   514,
     158,   514,   158,   415,    19,   514,  -188,  -188,  -188,   487,
     543,  -188,    99,  -188,    93,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,   282,
    -188,   514,  -188,  -188,   106,    71,   142,  -188,   742,  -188,
     648,   105,   -33,  -188,   109,  -188,  -188,   282,   110,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,   578,   123,  -188,   514,
     407,   613,  -188,  -188,    22,  -188,  -188,   124,  -188,  -188,
     770,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,   514,  -188,  -188,  -188,   334,  -188,   770,  -188,   160,
    -188,  -188,   514,  -188,   115,  -188,   161,   435,   175,  -188,
    -188,   514,   770,   196,  -188,   514,  -188,  -188,  -188,  -188,
    -188,   435,   770,  -188,  -188,  -188,  -188,   681,   514,   770,
    -188,   131,  -188,   203,   770,   514,    -5,  -188,  -188,  -188,
    -188,  -188
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     4,     3,     1,    16,    14,     0,
       0,     2,    10,    18,     0,     0,     5,     7,    15,     0,
       0,     0,     0,     0,    11,    35,    36,    37,    12,     0,
       8,     9,   143,     0,    20,    22,    38,    40,    24,     0,
      48,     0,    28,    42,    44,    45,    13,     6,     0,     0,
     142,   216,    41,     0,     0,     0,     0,     0,   200,     0,
       0,     0,     0,     0,   201,    47,   197,   198,   202,   203,
     204,   205,     0,    17,    20,     0,   221,     0,   225,     0,
      32,    30,   141,   144,   219,   220,   217,   218,     0,    39,
       0,    49,     0,     0,   120,   119,   115,   116,   118,   114,
      90,    92,    87,    88,    91,    89,     0,     0,    50,    26,
      52,     0,    54,    93,   108,   117,   111,   109,   121,   112,
       0,   113,   127,   125,   124,   215,    34,    46,   214,   213,
       0,   207,     0,     0,    27,    43,   228,     0,   226,     0,
     222,   224,   164,    19,    21,    23,     0,     0,     0,    56,
      57,    69,    70,    86,    61,    62,    65,    63,    66,    64,
      85,    84,    67,    68,    81,    82,    83,    51,     0,    58,
      59,    60,    55,     0,     0,     0,    95,    94,    96,     0,
     123,     0,   199,     0,   122,   227,   223,     0,   192,   190,
       0,   164,   194,   164,   120,     0,   196,   145,   146,     0,
      26,   155,     0,   147,     0,   148,   160,   161,   162,   163,
     156,   157,   149,   150,   151,   152,   153,   154,   140,     0,
     110,     0,    53,    99,     0,   107,   102,    97,     0,   128,
     138,   139,     0,   133,     0,   135,   209,     0,     0,   208,
     206,    31,   159,   191,   189,   195,    26,     0,   193,     0,
       0,    26,   173,   184,     0,   175,   176,     0,   180,   177,
     188,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,     0,   166,   167,    29,   164,   126,    25,   100,   105,
     106,   101,     0,    98,     0,   129,   131,     0,   211,    33,
     169,     0,   186,     0,   174,   182,   168,   158,   104,   103,
     130,     0,   138,   139,   134,   212,   210,     0,     0,   178,
     181,     0,   132,   170,   187,   164,     0,   185,   179,   183,
     171,   172
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -188,  -188,  -188,    61,  -188,   185,    16,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,   204,
    -188,   163,   -12,  -188,  -188,  -188,  -188,  -188,   165,   -54,
     -62,   113,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,
     -39,  -188,  -188,  -117,  -188,  -188,   -81,  -188,   -66,  -188,
    -188,  -188,    76,  -114,   -49,  -188,   -14,  -187,  -188,  -188,
    -188,  -188,   -84,  -188,  -188,   -60,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,     8,
     -36,   186,    -1,  -188,    21,    12,  -188,  -188,  -188,  -188,
    -188,   -38,  -188,   190,  -188,    51
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,    63,    10,    16,    17,    23,    11,     8,
      29,    52,    53,    54,   167,    72,   142,   141,   181,   198,
      25,    36,    37,    26,    43,    44,    45,    27,    40,   199,
     109,   110,   168,   169,   170,   271,   171,   111,   112,   176,
     177,   178,   224,   225,   281,   113,   114,   115,   116,   117,
     118,   119,   120,   231,   232,   286,   233,   234,   235,   121,
      28,    33,    82,    83,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   254,   255,   256,   257,   311,   318,
     258,   319,   259,   212,   213,   214,   215,   216,   217,    78,
     122,    67,   123,   132,   240,   124,   238,   306,    70,   129,
      71,    50,    86,    51,    79,    80
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     131,   108,    64,   180,   247,    66,   253,     1,   191,    39,
      64,    34,    64,    66,   284,    84,    34,   139,   125,    34,
      64,    64,    64,    66,    66,    66,  -200,    -4,   201,    34,
      30,    31,     4,    41,    34,     6,    64,    77,    64,    66,
      68,    66,    39,     4,   131,   148,     7,    12,    68,    65,
      68,     4,   140,    69,   134,   146,   135,   285,    68,    68,
      68,    69,     5,    69,     9,    18,    12,   127,   128,   130,
      15,    69,    69,    69,    68,    12,    68,    32,    35,   252,
     200,    38,   236,   136,    81,   138,    56,    69,    57,    69,
      15,    56,    89,    57,    13,    42,    14,    91,    64,    49,
      74,    66,    -4,    46,    55,    58,   222,    73,  -200,    19,
    -159,    81,   279,   228,    47,    14,    20,   230,   280,   173,
      88,   174,    75,   175,    21,   126,    -4,   137,   317,   246,
     133,   251,   290,   260,    64,   244,    68,    66,   143,   250,
     294,   179,   144,   145,    64,   185,   182,    66,    64,    69,
      22,    66,   183,   184,    56,    60,    57,   186,   187,   277,
      60,   201,    61,    76,   219,   221,    62,    61,    58,   237,
     303,    62,    68,   227,   243,    77,   245,   242,   248,   274,
      64,   226,    68,    66,   275,    69,    68,   292,   278,   282,
     289,   239,    56,   313,    57,    69,  -137,    59,    64,    69,
     287,    66,   320,   291,   295,   300,    58,   298,   301,   305,
     308,   315,   316,   200,    48,    24,    90,   296,    68,    92,
     312,   304,   218,    60,   172,   302,   297,   239,   299,   307,
      61,    69,   321,   309,    62,   310,    68,    85,   241,   230,
     276,    87,    56,     0,    57,   288,   314,     0,     0,    69,
       0,   188,    93,   200,    57,   189,    74,   190,     0,    20,
     191,    60,   192,   193,     0,     0,   194,    21,    61,   223,
       0,     0,    62,     0,     0,     0,     0,     0,    75,     0,
       0,    95,    96,    97,    98,    99,    56,    56,    57,    57,
     195,   196,     0,    22,     0,     0,     0,     0,     0,     0,
      58,    58,     0,     0,     0,     0,     0,     0,     0,   100,
     101,    60,     0,     0,     0,     0,     0,     0,    61,   102,
     103,   104,    62,     0,   105,     0,     0,     0,     0,     0,
       0,     0,   106,     0,   107,     0,    81,   197,   188,    93,
       0,    57,   189,     0,   190,     0,    20,   191,     0,   192,
     193,     0,     0,   194,    21,    60,    60,     0,     0,    93,
       0,    57,    49,    61,     0,     0,    62,    62,    95,    96,
      97,    98,    99,    94,     0,     0,     0,   195,   196,     0,
      22,     0,     0,     0,     0,     0,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,   100,   101,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,     0,
       0,   105,     0,     0,     0,     0,   100,   101,     0,   106,
      93,   107,    57,    81,     0,     0,   102,   103,   104,   249,
       0,   105,     0,     0,    94,     0,     0,     0,     0,   106,
      93,   107,    57,   179,   229,     0,     0,     0,     0,    95,
      96,    97,    98,    99,    94,   293,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,     0,     0,     0,    95,
      96,    97,    98,    99,     0,     0,     0,   100,   101,     0,
       0,     0,     0,     0,     0,     0,     0,   102,   103,   104,
       0,     0,   105,     0,     0,     0,     0,   100,   101,    93,
     106,    57,   107,     0,    81,     0,     0,   102,   103,   104,
       0,     0,   105,    94,     0,     0,     0,     0,     0,    93,
     106,    57,   107,     0,   179,     0,     0,     0,    95,    96,
      97,    98,    99,    94,     0,   147,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,     0,     0,    95,    96,
      97,    98,    99,     0,     0,     0,   100,   101,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,     0,
       0,   105,     0,     0,     0,     0,   100,   101,     0,   106,
       0,   107,     0,     0,     0,     0,   102,   103,   104,     0,
       0,   105,     0,     0,     0,     0,     0,     0,     0,   106,
       0,   107,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
       0,     0,     0,  -165,     0,     0,     0,     0,     0,     0,
       0,     0,  -165,     0,     0,   272,   273,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,     0,     0,     0,  -165,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
     272,   273,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
       0,     0,     0,  -165,     0,     0,     0,     0,     0,     0,
       0,     0,  -178,     0,     0,   272,   273,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -136,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     220,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   283,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166
};

static const yytype_int16 yycheck[] =
{
      62,    55,    41,   120,   191,    41,   193,    11,    13,    21,
      49,    19,    51,    49,    47,    51,    19,    47,    56,    19,
      59,    60,    61,    59,    60,    61,    82,    83,   142,    19,
      14,    15,    19,    19,    19,     0,    75,    49,    77,    75,
      41,    77,    54,    19,   106,   107,    80,    34,    49,    41,
      51,    19,    82,    41,    80,    93,    82,    90,    59,    60,
      61,    49,     1,    51,    39,    80,    34,    59,    60,    61,
       9,    59,    60,    61,    75,    34,    77,    19,    81,   193,
     142,    81,    90,    75,    89,    77,     5,    75,     7,    77,
      29,     5,    82,     7,    81,    81,    83,    82,   137,    81,
      19,   137,    83,    80,    84,    19,   168,    80,    89,     5,
      91,    89,    41,   175,    82,    83,    12,   179,    47,    81,
      47,    83,    41,    85,    20,    89,    83,    41,   315,   191,
      83,   193,   246,   195,   173,   189,   137,   173,    19,   193,
     254,    89,    80,    80,   183,   137,    82,   183,   187,   137,
      46,   187,    86,    19,     5,    74,     7,    82,    47,   221,
      74,   275,    81,    82,    86,    47,    85,    81,    19,   181,
     287,    85,   173,    19,   188,   187,   190,    19,   192,    80,
     219,   173,   183,   219,    91,   173,   187,   249,    82,    47,
      80,   183,     5,   307,     7,   183,    91,    48,   237,   187,
      91,   237,   316,    80,    80,    90,    19,    47,    47,    34,
      14,    80,     9,   275,    29,    11,    53,   271,   219,    54,
     301,   287,   146,    74,   111,   287,   275,   219,   282,   291,
      81,   219,   316,   295,    85,   295,   237,    51,   187,   301,
     219,    51,     5,    -1,     7,   237,   308,    -1,    -1,   237,
      -1,     4,     5,   315,     7,     8,    19,    10,    -1,    12,
      13,    74,    15,    16,    -1,    -1,    19,    20,    81,    82,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    34,    35,    36,    37,    38,     5,     5,     7,     7,
      43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    74,    -1,    -1,    -1,    -1,    -1,    -1,    81,    72,
      73,    74,    85,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    87,    -1,    89,    90,     4,     5,
      -1,     7,     8,    -1,    10,    -1,    12,    13,    -1,    15,
      16,    -1,    -1,    19,    20,    74,    74,    -1,    -1,     5,
      -1,     7,    81,    81,    -1,    -1,    85,    85,    34,    35,
      36,    37,    38,    19,    -1,    -1,    -1,    43,    44,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    62,    63,    -1,    85,
       5,    87,     7,    89,    -1,    -1,    72,    73,    74,    14,
      -1,    77,    -1,    -1,    19,    -1,    -1,    -1,    -1,    85,
       5,    87,     7,    89,    90,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    19,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    62,    63,     5,
      85,     7,    87,    -1,    89,    -1,    -1,    72,    73,    74,
      -1,    -1,    77,    19,    -1,    -1,    -1,    -1,    -1,     5,
      85,     7,    87,    -1,    89,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    19,    -1,    41,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    62,    63,    -1,    85,
      -1,    87,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    87,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    92,    93,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      92,    93,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    92,    93,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    95,    96,    19,    97,     0,    80,   103,    39,
      98,   102,    34,    81,    83,    97,    99,   100,    80,     5,
      12,    20,    46,   101,   113,   114,   117,   121,   154,   104,
     100,   100,    19,   155,    19,    81,   115,   116,    81,   116,
     122,    19,    81,   118,   119,   120,    80,    82,    99,    81,
     195,   197,   105,   106,   107,    84,     5,     7,    19,    48,
      74,    81,    85,    97,   144,   183,   184,   185,   186,   189,
     192,   194,   109,    80,    19,    41,    82,   116,   183,   198,
     199,    89,   156,   157,   184,   185,   196,   197,    47,    82,
     115,    82,   122,     5,    19,    34,    35,    36,    37,    38,
      62,    63,    72,    73,    74,    77,    85,    87,   123,   124,
     125,   131,   132,   139,   140,   141,   142,   143,   144,   145,
     146,   153,   184,   186,   189,   195,    89,   183,   183,   193,
     183,   124,   187,    83,    80,    82,   183,    41,   183,    47,
      82,   111,   110,    19,    80,    80,   195,    41,   124,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,   108,   126,   127,
     128,   130,   125,    81,    83,    85,   133,   134,   135,    89,
     147,   112,    82,    86,    19,   183,    82,    47,     4,     8,
      10,    13,    15,    16,    19,    43,    44,    90,   113,   123,
     124,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   177,   178,   179,   180,   181,   182,   156,    86,
      88,    47,   124,    82,   136,   137,   183,    19,   124,    90,
     124,   147,   148,   150,   151,   152,    90,   116,   190,   183,
     188,   199,    19,   160,   123,   160,   124,   161,   160,    14,
     123,   124,   157,   161,   168,   169,   170,   171,   174,   176,
     124,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,   129,    92,    93,    80,    91,   188,   124,    82,    41,
      47,   138,    47,    86,    47,    90,   149,    91,   183,    80,
     157,    80,   124,    48,   157,    80,   123,   158,    47,   123,
      90,    47,   124,   147,   152,    34,   191,   124,    14,   124,
     169,   172,   150,   157,   124,    80,     9,   161,   173,   175,
     157,   166
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    96,    97,    98,    98,    99,    99,    99,
     100,   101,   101,   102,   102,   103,   103,   104,   104,   105,
     105,   106,   106,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   111,   112,   112,   113,   113,   113,   114,   114,
     115,   116,   117,   117,   118,   118,   119,   120,   121,   121,
     122,   123,   124,   124,   125,   125,   126,   126,   126,   126,
     126,   127,   127,   127,   127,   127,   127,   128,   128,   128,
     128,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   130,   130,   130,   130,   130,   130,   131,   131,   131,
     131,   131,   131,   132,   132,   132,   132,   133,   134,   135,
     135,   136,   137,   137,   138,   138,   138,   138,   139,   139,
     139,   140,   140,   140,   141,   141,   141,   142,   142,   142,
     143,   143,   144,   145,   146,   146,   146,   146,   147,   147,
     147,   148,   149,   149,   150,   150,   151,   151,   152,   152,
     153,   154,   154,   155,   156,   157,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   159,   160,
     161,   161,   161,   161,   162,   163,   164,   164,   165,   166,
     166,   166,   166,   167,   167,   168,   168,   168,   169,   170,
     171,   172,   172,   173,   174,   175,   176,   176,   177,   178,
     178,   179,   179,   180,   180,   181,   182,   183,   183,   183,
     184,   184,   185,   185,   185,   185,   186,   187,   188,   189,
     190,   190,   191,   192,   193,   194,   195,   195,   196,   196,
     196,   197,   197,   197,   198,   199,   199,   199,   199
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
       3,     2,     1,     3,     2,     1,     1,     0,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     1,     1,     4,     1,     2,     3,
       4,     2,     3,     0,     3,     1,     1,     1,     1,     1,
       3,     4,     3,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     0,     1,     2,     2,     3,     3,
       5,     7,     7,     2,     3,     1,     1,     1,     1,     5,
       1,     1,     0,     1,     1,     1,     2,     4,     2,     2,
       1,     2,     1,     2,     1,     2,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     4,     1,     1,     4,
       3,     2,     1,     2,     1,     2,     1,     2,     1,     1,
       1,     2,     3,     4,     2,     1,     2,     3,     2
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

#line 1721 "parse.tab.c"

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

#line 492 "parse.y"

void yyerror(char* s){
    printf("ERROR: %s\n", s);
}

int main(){
    while(1){
        yyparse();
    }
    return 0;
}
