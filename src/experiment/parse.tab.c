/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

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

#line 77 "parse.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    CASE = 258,
    BREAK = 259,
    FUNC = 260,
    VARCASE = 261,
    STRUCT = 262,
    RETURN = 263,
    ELSE = 264,
    GOTO = 265,
    PACKAGE = 266,
    CONST = 267,
    IF = 268,
    RANGE = 269,
    CONTINUE = 270,
    FOR = 271,
    SPACE = 272,
    TAB = 273,
    ID = 274,
    VAR = 275,
    INT8 = 276,
    INT16 = 277,
    INT32 = 278,
    INT64 = 279,
    UINT8 = 280,
    UINT16 = 281,
    UINT32 = 282,
    UINT64 = 283,
    FLOAT32 = 284,
    FLOAT64 = 285,
    BYTE = 286,
    TRUE = 287,
    FALSE = 288,
    STRING_LIT = 289,
    BINARY_LIT = 290,
    HEX_LIT = 291,
    FLOAT_LIT = 292,
    DEC_LIT = 293,
    IMPORT = 294,
    STRING = 295,
    ELIPSIS = 296,
    SELECT = 297,
    GO = 298,
    FALLTHROUGH = 299,
    DEFAULT = 300,
    TYPE_TOK = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);





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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYLAST   972

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  107
/* YYNRULES -- Number of rules.  */
#define YYNRULES  234
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  327

#define YYUNDEFTOK  2
#define YYMAXUTOK   314


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    72,     2,     2,     2,    68,    71,     2,
      52,    53,    49,    47,    55,    48,    54,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    79,    51,
      62,    56,    64,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    73,     2,    74,    67,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    77,    66,    78,     2,     2,     2,     2,
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
      45,    46,    57,    58,    59,    60,    61,    63,    65,    69,
      70,    75,    76,    80,    81
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    21,    21,    23,    24,    28,    29,    31,    32,    33,
      35,    37,    38,    42,    43,    45,    46,    48,    49,    51,
      52,    54,    55,    56,    57,    58,    59,    60,    61,    64,
      65,    68,    69,    71,    72,    75,    76,    77,    81,    82,
      83,    84,    87,    88,    89,    90,    91,    92,    96,    97,
      98,   102,   104,   105,   107,   108,   112,   113,   114,   115,
     116,   118,   119,   120,   121,   122,   123,   125,   126,   127,
     128,   130,   131,   132,   133,   134,   135,   137,   138,   139,
     140,   141,   142,   144,   145,   146,   147,   149,   150,   152,
     153,   156,   158,   159,   160,   163,   164,   165,   166,   170,
     171,   172,   177,   178,   179,   184,   185,   186,   189,   190,
     191,   194,   195,   198,   201,   202,   203,   204,   205,   208,
     209,   210,   213,   214,   215,   219,   220,   223,   224,   225,
     228,   229,   230,   234,   237,   238,   240,   241,   242,   244,
     245,   246,   247,   249,   250,   251,   253,   254,   255,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   277,   278,   280,   281,   282,   283,   287,   288,   289,
     290,   292,   293,   294,   296,   297,   298,   299,   302,   303,
     307,   308,   309,   312,   314,   316,   317,   320,   321,   324,
     325,   328,   329,   334,   335,   339,   341,   342,   345,   346,
     349,   350,   354,   357,   361,   362,   363,   365,   366,   368,
     369,   370,   371,   380,   381,   382,   391,   392,   393,   394,
     400,   401,   410,   411,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CASE", "BREAK", "FUNC", "VARCASE",
  "STRUCT", "RETURN", "ELSE", "GOTO", "PACKAGE", "CONST", "IF", "RANGE",
  "CONTINUE", "FOR", "SPACE", "TAB", "ID", "VAR", "INT8", "INT16", "INT32",
  "INT64", "UINT8", "UINT16", "UINT32", "UINT64", "FLOAT32", "FLOAT64",
  "BYTE", "TRUE", "FALSE", "STRING_LIT", "BINARY_LIT", "HEX_LIT",
  "FLOAT_LIT", "DEC_LIT", "IMPORT", "STRING", "ELIPSIS", "SELECT", "GO",
  "FALLTHROUGH", "DEFAULT", "TYPE_TOK", "'+'", "'-'", "'*'", "'/'", "';'",
  "'('", "')'", "'.'", "','", "'='", "\"=\"", "\"||\"", "\"&&\"", "\"==\"",
  "\"!=\"", "'<'", "\"<=\"", "'>'", "\">=\"", "'|'", "'^'", "'%'",
  "\"<<\"", "\">>\"", "'&'", "'!'", "'['", "']'", "\"(\"", "\")\"", "'{'",
  "'}'", "':'", "\"++\"", "\"--\"", "$accept", "SourceFile",
  "PackageClause", "PackageName", "ImportDecl", "ImportSpec", "ImportPath",
  "TopLevelDecl", "STAR_TopLevelDecl_SC", "STAR_ImportDecl_SC",
  "STAR_ImportSpec_SC", "STAR_CM_ID", "STAR_ConstSpec_SC",
  "STAR_VarSpec_SC", "STAR_CM_EXP", "STAR_TypeSpec_SC",
  "STAR_Statement_SC", "STAR_CM_ParameterDecl", "STAR_FieldDecl_SC",
  "Declaration", "ConstDecl", "ConstSpec", "IdentifierList", "TypeDecl",
  "TypeSpec", "AliasDecl", "TypeDef", "VarDecl", "VarSpec",
  "ExpressionList", "Expression", "UnaryExpr", "binary_op", "rel_op",
  "add_op", "mul_op", "unary_op", "PrimaryExpr", "Selector", "Index",
  "Arguments", "ArgumentInBracket", "ArgumentInBracketFirst",
  "ArgumentInBracketEnd", "Operand", "Literal", "INT_LIT", "BasicLit",
  "OperandName", "QualifiedIdent", "CompositeLit", "LiteralType",
  "LiteralValue", "ElementList", "STAR_CM_KeyedElement", "KeyedElement",
  "Key", "FieldName", "Element", "FunctionLit", "FunctionDecl",
  "FunctionName", "FunctionBody", "Block", "Signature", "Result",
  "Parameters", "ParameterList", "ParameterDecl", "Statement",
  "LabeledStmt", "Label", "SimpleStmt", "EmptyStmt", "ExpressionStmt",
  "IncDecStmt", "Assignment", "assign_op", "IfStmt", "ForStmt",
  "ForStmtAfter", "Condition", "ForClause", "OPT_InitStmt",
  "OPT_Condition", "OPT_PostStmt", "InitStmt", "PostStmt", "RangeClause",
  "GoStmt", "ReturnStmt", "BreakStmt", "ContinueStmt", "GotoStmt",
  "FallthroughStmt", "Type", "TypeName", "TypeLit", "ArrayType",
  "ArrayLength", "ElementType", "StructType", "FieldDecl", "Tag",
  "PointerType", "BaseType", "FunctionType", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,    43,    45,    42,
      47,    59,    40,    41,    46,    44,    61,   302,   303,   304,
     305,   306,    60,   307,    62,   308,   124,    94,    37,   309,
     310,    38,    33,    91,    93,   311,   312,   123,   125,    58,
     313,   314
};
# endif

#define YYPACT_NINF (-220)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-208)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,     6,    93,    19,  -220,  -220,  -220,  -220,    63,    73,
      54,     9,  -220,  -220,    72,    72,  -220,  -220,  -220,    96,
      31,    69,    79,    84,  -220,  -220,  -220,  -220,  -220,    60,
    -220,  -220,  -220,   152,  -220,  -220,  -220,  -220,  -220,    88,
    -220,   221,  -220,  -220,  -220,  -220,  -220,  -220,    97,   152,
      43,     0,     8,     8,    77,   709,    98,   234,  -220,    74,
     152,    92,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,
     106,   -14,    55,   709,   111,     8,     8,  -220,   -23,  -220,
    -220,  -220,  -220,  -220,  -220,  -220,    89,   109,   152,   111,
    -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,
    -220,   664,   709,   901,  -220,   709,    70,  -220,  -220,  -220,
    -220,  -220,  -220,  -220,   102,  -220,  -220,  -220,    95,  -220,
     147,     8,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,
     120,   163,  -220,   132,  -220,   133,  -220,   901,   109,  -220,
    -220,  -220,    -2,  -220,   136,  -220,    74,   112,   848,  -220,
    -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,
    -220,  -220,  -220,  -220,  -220,  -220,  -220,   709,  -220,  -220,
    -220,  -220,   615,   166,   709,  -220,  -220,  -220,   430,  -220,
       8,  -220,  -220,   309,   257,  -220,  -220,  -220,   135,  -220,
       8,   140,  -220,  -220,     8,  -220,   901,   152,    26,  -220,
    -220,   139,    25,   142,   117,   121,   123,  -220,   873,   -16,
    -220,   704,   127,    56,  -220,   128,  -220,  -220,  -220,  -220,
     183,   709,   183,   709,   183,   480,    62,   709,  -220,  -220,
    -220,   422,   798,  -220,   157,  -220,   137,  -220,  -220,  -220,
    -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,
    -220,   709,   180,  -220,  -220,    74,  -220,   162,  -220,  -220,
     709,  -220,   143,  -220,   165,   525,  -220,  -220,  -220,  -220,
     738,   178,  -220,   709,   322,   763,  -220,  -220,    74,  -220,
    -220,   181,  -220,  -220,   901,   175,   177,   709,  -220,  -220,
    -220,   409,   901,  -220,  -220,  -220,  -220,  -220,   570,   901,
    -220,  -220,  -220,   709,   901,   220,  -220,   709,  -220,  -220,
    -220,  -220,  -220,   823,   709,   901,  -220,   184,   228,   901,
     709,    -4,  -220,  -220,  -220,  -220,  -220
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     4,     3,     1,    16,    14,     0,
       0,     2,    10,    18,     0,     0,     5,     7,    15,     0,
       0,     0,     0,     0,    11,    35,    36,    37,    12,     0,
       8,     9,   136,     0,    20,    22,    38,    40,    24,     0,
      48,     0,    28,    42,    44,    45,    13,     6,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,   208,   135,
     139,   229,    32,   147,   204,   205,   209,   210,   211,   212,
      41,     0,     0,     0,   207,     0,     0,    47,     0,    17,
     222,    34,   234,   221,   220,   143,     0,   147,     0,   111,
     110,   106,   107,   109,   105,    77,    78,    81,    80,    82,
      79,     0,     0,   214,    52,     0,    54,    83,    99,   108,
     102,   100,   112,   103,     0,   104,   118,   116,     0,   115,
       0,     0,   148,    30,   134,   137,   140,   141,   142,   228,
     146,     0,    39,     0,    49,     0,    50,    26,     0,    46,
      27,    43,     0,   144,     0,   206,     0,     0,     0,    67,
      68,    71,    72,    56,    57,    61,    62,    63,    64,    65,
      66,    69,    70,    73,    74,    75,    76,     0,    58,    59,
      60,    55,     0,     0,     0,    85,    84,    86,     0,   114,
       0,   113,   233,   167,     0,    19,    21,    23,    51,   216,
       0,     0,   145,   133,     0,   101,    53,     0,    81,    89,
      92,     0,    98,    93,   204,   209,   210,    87,     0,   111,
     119,   131,   132,     0,   124,     0,   127,   126,   215,   213,
     199,   197,     0,   167,   201,   167,   111,     0,   203,   138,
     149,     0,   168,   158,     0,   150,     0,   151,   163,   164,
     165,   166,   159,   160,   152,   153,   154,   155,   156,   157,
      31,     0,   218,    33,   117,   222,    90,    96,    97,    91,
       0,    88,     0,   120,   122,     0,   162,   198,   196,   202,
      26,     0,   200,     0,     0,    26,   178,   191,     0,   180,
     181,     0,   185,   182,   195,     0,     0,     0,   169,   170,
      29,   167,    25,   219,   217,    95,    94,   121,     0,   131,
     132,   125,   174,     0,   193,     0,   179,   188,   172,   173,
     171,   161,   123,     0,     0,   183,   187,     0,   175,   194,
     167,     0,   192,   184,   189,   176,   177
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -220,  -220,  -220,   108,  -220,   209,    71,  -220,  -220,  -220,
    -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,   231,
    -220,   173,    -9,  -220,  -220,  -220,  -220,  -220,   179,   -72,
     -55,   144,  -220,  -220,  -209,  -179,  -220,  -220,  -220,  -220,
    -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,   214,
    -220,  -220,  -111,  -220,  -220,   -48,  -220,  -220,   -11,  -220,
    -220,  -220,   197,  -181,   -39,  -220,   200,   203,    85,   -30,
    -220,   -46,  -219,  -220,  -220,  -220,  -220,  -220,   -49,  -220,
    -220,   -29,  -220,  -220,  -220,  -220,  -220,  -220,  -220,  -220,
    -220,  -220,  -220,  -220,  -220,   -34,   -17,  -220,    15,  -220,
      86,   170,  -220,  -220,  -220,  -220,  -220
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    56,    10,    16,    17,    23,    11,     8,
      29,    70,    71,    72,   188,    78,   183,   130,   142,   230,
      25,    36,    57,    26,    43,    44,    45,    27,    40,   231,
     137,   104,   167,   168,   169,   170,   105,   106,   175,   176,
     177,   201,   202,   259,   107,   108,   109,   110,   111,   112,
     113,   114,   212,   213,   264,   214,   215,   216,   217,   115,
      28,    33,   193,   125,    59,   126,    60,    61,    62,   234,
     235,   236,   237,   238,   239,   240,   241,   287,   242,   243,
     278,   279,   280,   281,   317,   323,   282,   324,   283,   244,
     245,   246,   247,   248,   249,    63,   116,    65,   117,   118,
     219,   119,   191,   294,    68,    84,    69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     103,   136,   233,   179,   271,    34,   277,    77,     1,   223,
      80,    37,    39,    49,    19,    50,    64,    34,    82,    83,
      87,    20,   285,   122,    64,     4,   128,    74,   140,    21,
     141,    49,    64,    50,  -207,    64,    64,    64,    -4,   132,
      64,   138,   139,    64,   276,    74,   103,   148,    66,   146,
      34,  -207,   286,  -207,    -4,    22,    66,    53,    64,    64,
      75,  -207,    37,    39,    66,   285,   257,    66,    66,    66,
       7,    64,    66,   123,    34,    66,   189,  -207,    75,     4,
     258,    55,    49,    35,    50,    30,    31,   182,    34,   302,
      66,    66,     4,     6,    12,   286,    51,   306,    41,    55,
     200,   322,     9,    66,    64,    18,    12,    12,   134,     5,
     233,   262,   196,    47,    14,    32,    -4,    15,    52,   208,
      81,    38,   172,   211,   173,    13,    53,    14,   232,    75,
      85,    42,   318,   190,   263,    46,    66,    15,   203,  -207,
     325,  -162,   143,   174,   144,    73,   218,   129,    79,   268,
      55,   123,   120,   274,   300,   204,   252,    49,   255,    50,
     218,   131,   145,    64,    83,    -4,   181,    64,   270,   180,
     275,    51,   284,    64,   267,   184,   269,    64,   272,   178,
      64,    64,   185,   186,   187,   207,   194,   205,   296,   192,
     251,   253,   256,    52,  -118,    66,   292,   260,  -116,    66,
    -115,    53,   266,    67,    54,    66,  -129,   265,   290,    66,
     299,    67,    66,    66,   293,   310,   291,   295,   304,    67,
     298,   297,    67,    67,    67,    55,    49,    67,    50,   303,
      67,   308,   307,   309,   314,   320,   232,   321,    48,    49,
      74,    50,    24,   211,   133,    67,    67,    58,   313,   171,
     312,   135,   315,    74,   301,    58,   124,    86,    67,   319,
     127,   311,    49,    58,    50,   232,    58,    58,    58,   250,
      53,    58,   326,    75,    58,   121,    51,    76,   316,     0,
     254,     0,     0,    53,     0,     0,    75,     0,     0,    58,
      58,    67,     0,     0,    55,     0,     0,     0,    52,     0,
       0,     0,    58,     0,     0,     0,    53,    55,     0,    75,
       0,     0,     0,   220,    88,     0,    50,   221,     0,   222,
       0,    20,   223,     0,   224,   225,     0,     0,   226,    21,
      55,     0,     0,     0,     0,    58,     0,     0,     0,     0,
       0,     0,   206,    90,    91,    92,    93,    94,     0,     0,
      67,     0,   227,   228,    67,    22,    95,    96,    97,     0,
      67,     0,     0,     0,    67,     0,     0,    67,    67,   149,
     150,   151,   152,     0,     0,     0,    98,     0,   305,     0,
      99,   100,   101,     0,   102,     0,   123,   229,   161,   162,
     163,   164,   165,   166,    58,     0,     0,     0,    58,     0,
       0,     0,     0,     0,    58,     0,     0,     0,    58,     0,
       0,    58,    58,   220,    88,     0,    50,   221,     0,   222,
       0,    20,   223,     0,   224,   225,     0,     0,   226,    21,
       0,     0,     0,     0,     0,    88,     0,    50,     0,     0,
       0,     0,     0,    90,    91,    92,    93,    94,     0,   209,
       0,     0,   227,   228,     0,    22,    95,    96,    97,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,   149,
     150,   151,   152,     0,     0,     0,    98,    95,    96,    97,
      99,   100,   101,     0,   102,    88,   123,    50,   161,   162,
     163,   164,   165,   166,   273,     0,     0,    98,     0,    89,
       0,    99,   100,   101,     0,   102,     0,   178,   210,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,     0,
       0,     0,     0,     0,     0,     0,     0,    95,    96,    97,
      88,     0,    50,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    89,     0,     0,    98,     0,     0,
       0,    99,   100,   101,     0,   102,     0,   123,     0,    90,
      91,    92,    93,    94,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    96,    97,    88,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   209,
       0,     0,    98,     0,     0,     0,    99,   100,   101,     0,
     102,     0,   178,     0,    90,    91,    92,    93,    94,     0,
       0,     0,     0,     0,     0,     0,     0,    95,    96,    97,
     197,     0,    50,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    89,     0,     0,    98,     0,     0,
       0,    99,   100,   101,     0,   102,     0,   178,     0,    90,
      91,    92,    93,    94,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    96,   198,     0,     0,    75,   199,    88,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,    89,     0,     0,    99,   100,   101,     0,
     102,     0,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,    94,     0,     0,   147,     0,     0,     0,     0,
       0,    95,    96,    97,    88,     0,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,     0,
       0,    98,     0,     0,     0,    99,   100,   101,     0,   102,
       0,     0,     0,    90,    91,    92,    93,    94,     0,     0,
       0,   149,   150,   151,   152,     0,    95,    96,    97,     0,
       0,     0,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,    98,     0,     0,     0,
      99,   100,   101,  -128,   102,   149,   150,   151,   152,  -168,
       0,     0,     0,     0,     0,     0,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     149,   150,   151,   152,  -168,   123,     0,     0,   288,   289,
       0,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,     0,     0,     0,     0,     0,
    -183,     0,     0,   288,   289,   149,   150,   151,   152,     0,
       0,     0,     0,   -26,     0,     0,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     149,   150,   151,   152,     0,     0,     0,     0,   288,   289,
       0,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   149,   150,   151,   152,     0,
     123,     0,     0,     0,     0,     0,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     149,   150,   151,   152,   195,     0,     0,     0,     0,     0,
       0,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,     0,     0,   261,   149,   150,
     151,   152,     0,     0,     0,     0,     0,     0,     0,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166
};

static const yytype_int16 yycheck[] =
{
      55,    73,   183,   114,   223,    19,   225,    41,    11,    13,
      49,    20,    21,     5,     5,     7,    33,    19,    52,    53,
      54,    12,   231,    57,    41,    19,    60,    19,    51,    20,
      53,     5,    49,     7,    34,    52,    53,    54,    54,    53,
      57,    75,    76,    60,   225,    19,   101,   102,    33,    88,
      19,    51,   231,    53,    54,    46,    41,    49,    75,    76,
      52,    77,    71,    72,    49,   274,    41,    52,    53,    54,
      51,    88,    57,    77,    19,    60,    78,    77,    52,    19,
      55,    73,     5,    52,     7,    14,    15,   121,    19,   270,
      75,    76,    19,     0,    34,   274,    19,   278,    19,    73,
     172,   320,    39,    88,   121,    51,    34,    34,    53,     1,
     291,    55,   167,    53,    54,    19,    54,     9,    41,   174,
      77,    52,    52,   178,    54,    52,    49,    54,   183,    52,
      53,    52,   313,   142,    78,    51,   121,    29,   172,    77,
     321,    79,    53,    73,    55,    57,   180,    55,    51,   221,
      73,    77,    54,   225,   265,   172,   190,     5,   197,     7,
     194,    55,    53,   180,   198,    54,    19,   184,   223,    74,
     225,    19,   227,   190,   220,    55,   222,   194,   224,    77,
     197,   198,    19,    51,    51,    19,    74,   172,   260,    53,
      55,    51,    53,    41,    77,   180,   251,    55,    77,   184,
      77,    49,    19,    33,    52,   190,    79,    79,    51,   194,
     265,    41,   197,   198,    34,   287,    79,    55,   273,    49,
      55,    78,    52,    53,    54,    73,     5,    57,     7,    51,
      60,    56,    51,    56,    14,    51,   291,     9,    29,     5,
      19,     7,    11,   298,    71,    75,    76,    33,   303,   105,
     298,    72,   307,    19,   265,    41,    59,    54,    88,   314,
      60,   291,     5,    49,     7,   320,    52,    53,    54,   184,
      49,    57,   321,    52,    60,    41,    19,    56,   307,    -1,
     194,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    75,
      76,   121,    -1,    -1,    73,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    88,    -1,    -1,    -1,    49,    73,    -1,    52,
      -1,    -1,    -1,     4,     5,    -1,     7,     8,    -1,    10,
      -1,    12,    13,    -1,    15,    16,    -1,    -1,    19,    20,
      73,    -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,
      -1,    -1,   172,    34,    35,    36,    37,    38,    -1,    -1,
     180,    -1,    43,    44,   184,    46,    47,    48,    49,    -1,
     190,    -1,    -1,    -1,   194,    -1,    -1,   197,   198,    47,
      48,    49,    50,    -1,    -1,    -1,    67,    -1,    56,    -1,
      71,    72,    73,    -1,    75,    -1,    77,    78,    66,    67,
      68,    69,    70,    71,   180,    -1,    -1,    -1,   184,    -1,
      -1,    -1,    -1,    -1,   190,    -1,    -1,    -1,   194,    -1,
      -1,   197,   198,     4,     5,    -1,     7,     8,    -1,    10,
      -1,    12,    13,    -1,    15,    16,    -1,    -1,    19,    20,
      -1,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,    19,
      -1,    -1,    43,    44,    -1,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    47,
      48,    49,    50,    -1,    -1,    -1,    67,    47,    48,    49,
      71,    72,    73,    -1,    75,     5,    77,     7,    66,    67,
      68,    69,    70,    71,    14,    -1,    -1,    67,    -1,    19,
      -1,    71,    72,    73,    -1,    75,    -1,    77,    78,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
       5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    67,    -1,    -1,
      -1,    71,    72,    73,    -1,    75,    -1,    77,    -1,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    49,     5,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    67,    -1,    -1,    -1,    71,    72,    73,    -1,
      75,    -1,    77,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
       5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    67,    -1,    -1,
      -1,    71,    72,    73,    -1,    75,    -1,    77,    -1,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    49,    -1,    -1,    52,    53,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    19,    -1,    -1,    71,    72,    73,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,     5,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    67,    -1,    -1,    -1,    71,    72,    73,    -1,    75,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    47,    48,    49,    50,    -1,    47,    48,    49,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    67,    -1,    -1,    -1,
      71,    72,    73,    79,    75,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      47,    48,    49,    50,    51,    77,    -1,    -1,    80,    81,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    80,    81,    47,    48,    49,    50,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    80,    81,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    47,    48,    49,    50,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      47,    48,    49,    50,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    74,    47,    48,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    83,    84,    19,    85,     0,    51,    91,    39,
      86,    90,    34,    52,    54,    85,    87,    88,    51,     5,
      12,    20,    46,    89,   101,   102,   105,   109,   142,    92,
      88,    88,    19,   143,    19,    52,   103,   104,    52,   104,
     110,    19,    52,   106,   107,   108,    51,    53,    87,     5,
       7,    19,    41,    49,    52,    73,    85,   104,   131,   146,
     148,   149,   150,   177,   178,   179,   180,   183,   186,   188,
      93,    94,    95,    57,    19,    52,    56,   177,    97,    51,
     146,    77,   177,   177,   187,    53,   149,   177,     5,    19,
      34,    35,    36,    37,    38,    47,    48,    49,    67,    71,
      72,    73,    75,   112,   113,   118,   119,   126,   127,   128,
     129,   130,   131,   132,   133,   141,   178,   180,   181,   183,
      54,    41,   177,    77,   144,   145,   147,   148,   177,    55,
      99,    55,    53,   103,    53,   110,   111,   112,   177,   177,
      51,    53,   100,    53,    55,    53,   146,    41,   112,    47,
      48,    49,    50,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,   114,   115,   116,
     117,   113,    52,    54,    73,   120,   121,   122,    77,   134,
      74,    19,   177,    98,    55,    19,    51,    51,    96,    78,
     104,   184,    53,   144,    74,    76,   112,     5,    49,    53,
     111,   123,   124,   177,   178,   180,   183,    19,   112,    19,
      78,   112,   134,   135,   137,   138,   139,   140,   177,   182,
       4,     8,    10,    13,    15,    16,    19,    43,    44,    78,
     101,   111,   112,   145,   151,   152,   153,   154,   155,   156,
     157,   158,   160,   161,   171,   172,   173,   174,   175,   176,
     150,    55,   177,    51,   182,   146,    53,    41,    55,   125,
      55,    74,    55,    78,   136,    79,    19,   153,   111,   153,
     112,   154,   153,    14,   111,   112,   145,   154,   162,   163,
     164,   165,   168,   170,   112,   116,   117,   159,    80,    81,
      51,    79,   112,    34,   185,    55,   111,    78,    55,   112,
     134,   140,   145,    51,   112,    56,   145,    51,    56,    56,
     111,   151,   137,   112,    14,   112,   163,   166,   145,   112,
      51,     9,   154,   167,   169,   145,   160
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    82,    83,    84,    85,    86,    86,    87,    87,    87,
      88,    89,    89,    90,    90,    91,    91,    92,    92,    93,
      93,    94,    94,    95,    95,    96,    96,    97,    97,    98,
      98,    99,    99,   100,   100,   101,   101,   101,   102,   102,
     103,   104,   105,   105,   106,   106,   107,   108,   109,   109,
     110,   111,   112,   112,   113,   113,   114,   114,   114,   114,
     114,   115,   115,   115,   115,   115,   115,   116,   116,   116,
     116,   117,   117,   117,   117,   117,   117,   118,   118,   118,
     118,   118,   118,   119,   119,   119,   119,   120,   121,   122,
     122,   123,   124,   124,   124,   125,   125,   125,   125,   126,
     126,   126,   127,   127,   127,   128,   128,   128,   129,   129,
     129,   130,   130,   131,   132,   133,   133,   133,   133,   134,
     134,   134,   135,   136,   136,   137,   137,   138,   138,   138,
     139,   140,   140,   141,   142,   142,   143,   144,   145,   146,
     146,   147,   147,   148,   148,   148,   149,   150,   150,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   152,   153,   154,   154,   154,   154,   155,   156,   157,
     157,   158,   159,   159,   160,   160,   160,   160,   161,   161,
     162,   162,   162,   163,   164,   165,   165,   166,   166,   167,
     167,   168,   169,   170,   170,   171,   172,   172,   173,   173,
     174,   174,   175,   176,   177,   177,   177,   178,   178,   179,
     179,   179,   179,   180,   181,   182,   183,   184,   184,   185,
     186,   187,   188,   146,   146,   147,   147,   148,   148,   148,
     149,   150,   150,   150,   150
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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
       1,     1,     1,     1,     2,     2,     2,     2,     3,     2,
       3,     2,     1,     1,     3,     2,     1,     1,     0,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     1,     1,     4,     1,     2,
       3,     4,     2,     3,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     1,     1,     3,     1,
       2,     1,     1,     2,     3,     4,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     0,     1,     2,
       2,     3,     2,     2,     3,     5,     7,     7,     2,     3,
       1,     1,     1,     1,     5,     1,     0,     1,     0,     1,
       0,     1,     1,     2,     4,     2,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     4,     1,     1,     4,     3,     2,     1,
       2,     1,     2,     1,     2,     1,     1,     2,     2,     1,
       2,     1,     2,     3,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
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
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
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
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
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
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

#line 1754 "parse.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 424 "parse.y"

void yyerror(char* s){
    printf("ERROR: %s\n", s);
}

int main(){
    while(1){
        yyparse();
    }
    return 0;
}
