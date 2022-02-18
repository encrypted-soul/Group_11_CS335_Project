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
#define YYLAST   885

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  106
/* YYNRULES -- Number of rules.  */
#define YYNRULES  223
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  325

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
     228,   229,   233,   236,   237,   239,   240,   241,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     263,   264,   266,   267,   268,   269,   273,   274,   275,   276,
     278,   279,   280,   282,   283,   284,   285,   288,   289,   293,
     294,   295,   298,   300,   302,   303,   306,   307,   310,   311,
     314,   315,   320,   321,   325,   327,   328,   331,   332,   335,
     336,   340,   343,   347,   348,   349,   351,   352,   354,   355,
     356,   357,   366,   367,   368,   377,   378,   379,   380,   386,
     387,   396,   397,   398,   399,   400,   402,   403,   404,   406,
     407,   408,   409,   410
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
  "Key", "Element", "FunctionLit", "FunctionDecl", "FunctionName",
  "FunctionBody", "Block", "Statement", "LabeledStmt", "Label",
  "SimpleStmt", "EmptyStmt", "ExpressionStmt", "IncDecStmt", "Assignment",
  "assign_op", "IfStmt", "ForStmt", "ForStmtAfter", "Condition",
  "ForClause", "OPT_InitStmt", "OPT_Condition", "OPT_PostStmt", "InitStmt",
  "PostStmt", "RangeClause", "GoStmt", "ReturnStmt", "BreakStmt",
  "ContinueStmt", "GotoStmt", "FallthroughStmt", "Type", "TypeName",
  "TypeLit", "ArrayType", "ArrayLength", "ElementType", "StructType",
  "FieldDecl", "Tag", "PointerType", "BaseType", "FunctionType",
  "Signature", "Result", "Parameters", "ParameterList", "ParameterDecl", YY_NULLPTR
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

#define YYPACT_NINF (-193)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-197)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,    -2,    25,    -8,  -193,  -193,  -193,  -193,     7,     2,
      34,     6,  -193,  -193,    -5,    -5,  -193,  -193,  -193,    73,
      36,    45,    92,    61,  -193,  -193,  -193,  -193,  -193,   127,
    -193,  -193,  -193,    49,  -193,  -193,  -193,  -193,  -193,    59,
    -193,    79,  -193,  -193,  -193,  -193,  -193,  -193,    68,   138,
      52,   226,    66,    56,    57,   622,    49,    76,    72,   430,
     430,   430,   622,    84,  -193,  -193,  -193,  -193,  -193,  -193,
    -193,  -193,   -19,  -193,    50,   430,  -193,   338,  -193,   -18,
    -193,  -193,  -193,  -193,   138,  -193,  -193,  -193,   143,  -193,
     115,  -193,   117,    49,    72,  -193,  -193,  -193,  -193,  -193,
    -193,  -193,  -193,  -193,  -193,  -193,   577,   622,  -193,   814,
    -193,   622,   102,  -193,  -193,  -193,  -193,  -193,  -193,  -193,
      94,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,   119,
    -193,   814,   103,   157,  -193,  -193,  -193,   430,  -193,  -193,
     129,   130,   257,   119,  -193,  -193,  -193,    52,   110,   761,
    -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,
    -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,   134,   622,
    -193,  -193,  -193,  -193,   528,   174,   622,  -193,  -193,  -193,
     348,  -193,   -16,  -193,   430,  -193,  -193,  -193,   398,   175,
     622,   175,   622,   175,   393,    29,   622,  -193,  -193,  -193,
     475,   711,  -193,   146,  -193,   120,  -193,  -193,  -193,  -193,
    -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,
     430,  -193,   622,   814,    49,     8,  -193,  -193,   150,   -22,
     149,   128,   132,   135,  -193,   786,    40,  -193,   617,   137,
      44,  -193,   139,  -193,  -193,   430,   155,  -193,  -193,  -193,
    -193,  -193,  -193,  -193,   651,   163,  -193,   622,   522,   676,
    -193,  -193,    52,  -193,  -193,   169,  -193,  -193,   814,   165,
     166,   622,  -193,  -193,  -193,   303,  -193,   814,    52,  -193,
     168,  -193,  -193,   622,  -193,   147,  -193,   172,   438,   190,
    -193,  -193,   622,   814,   214,  -193,   622,  -193,  -193,  -193,
    -193,  -193,  -193,  -193,   483,   814,  -193,  -193,  -193,  -193,
     736,   622,   814,  -193,   185,  -193,   230,   814,   622,    -7,
    -193,  -193,  -193,  -193,  -193
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     4,     3,     1,    16,    14,     0,
       0,     2,    10,    18,     0,     0,     5,     7,    15,     0,
       0,     0,     0,     0,    11,    35,    36,    37,    12,     0,
       8,     9,   135,     0,    20,    22,    38,    40,    24,     0,
      48,     0,    28,    42,    44,    45,    13,     6,     0,     0,
     134,   212,    41,     0,     0,     0,     0,     0,   196,     0,
       0,     0,     0,     0,   197,    47,   193,   194,   198,   199,
     200,   201,     0,    17,    20,     0,   216,     0,   220,     0,
      32,    30,   133,   136,     0,   215,   213,   214,     0,    39,
       0,    49,     0,     0,   111,   110,   106,   107,   109,   105,
      77,    78,    81,    80,    82,    79,     0,     0,    50,    26,
      52,     0,    54,    83,    99,   108,   102,   100,   112,   103,
       0,   104,   118,   116,   115,   211,    34,   210,   209,     0,
      46,   203,     0,     0,    27,    43,   223,     0,   221,   217,
       0,   219,   156,   220,    19,    21,    23,     0,     0,     0,
      67,    68,    71,    72,    56,    57,    61,    62,    63,    64,
      65,    66,    69,    70,    73,    74,    75,    76,    51,     0,
      58,    59,    60,    55,     0,     0,     0,    85,    84,    86,
       0,   114,     0,   195,     0,   113,   222,   218,     0,   188,
     186,     0,   156,   190,   156,   111,     0,   192,   137,   138,
       0,   157,   147,     0,   139,     0,   140,   152,   153,   154,
     155,   148,   149,   141,   142,   143,   144,   145,   146,   132,
       0,   101,     0,    53,     0,    81,    89,    92,     0,    98,
      93,   193,   198,   199,    87,     0,   111,   119,   130,   131,
       0,   124,     0,   126,   205,     0,     0,   204,   202,    31,
     151,   187,   185,   191,    26,     0,   189,     0,     0,    26,
     167,   180,     0,   169,   170,     0,   174,   171,   184,     0,
       0,     0,   158,   159,    29,   156,   117,    25,   211,    90,
      96,    97,    91,     0,    88,     0,   120,   122,     0,   207,
      33,   163,     0,   182,     0,   168,   177,   161,   162,   160,
     150,    95,    94,   121,     0,   130,   131,   125,   208,   206,
       0,     0,   172,   176,     0,   123,   164,   183,   156,     0,
     181,   173,   178,   165,   166
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -193,  -193,  -193,    19,  -193,   211,   144,  -193,  -193,  -193,
    -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,   233,
    -193,   188,    37,  -193,  -193,  -193,  -193,  -193,   192,   -54,
     -62,   136,  -193,  -193,  -192,  -190,  -193,  -193,  -193,  -193,
    -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,    64,
    -193,  -193,  -118,  -193,  -193,   -53,  -193,   -38,  -193,  -193,
    -193,   203,  -112,   -21,  -193,   -24,  -185,  -193,  -193,  -193,
    -193,  -193,   -64,  -193,  -193,   -36,  -193,  -193,  -193,  -193,
    -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,    18,
     -37,  -193,   -10,  -193,    38,    12,  -193,  -193,  -193,  -193,
    -193,   -51,  -193,   208,  -193,    78
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    63,    10,    16,    17,    23,    11,     8,
      29,    52,    53,    54,   168,    72,   142,   141,   182,   199,
      25,    36,    77,    26,    43,    44,    45,    27,    40,   200,
     109,   110,   169,   170,   171,   172,   111,   112,   177,   178,
     179,   228,   229,   282,   113,   114,   115,   116,   117,   118,
     119,   120,   239,   240,   287,   241,   242,   243,   121,    28,
      33,   219,    83,   203,   204,   205,   206,   207,   208,   209,
     210,   271,   211,   212,   262,   263,   264,   265,   314,   321,
     266,   322,   267,   213,   214,   215,   216,   217,   218,    78,
     122,    67,   123,   132,   248,   124,   246,   309,    70,   128,
      71,    50,    86,    51,    79,    80
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     131,   108,   181,    34,    66,   125,   192,   255,   269,   261,
     270,    19,    66,    56,    66,    57,     1,     4,    20,   280,
       5,     4,    66,    66,    66,     6,    21,    58,    15,    12,
     202,    68,   134,   281,   135,   139,    12,   140,    66,    68,
      66,    68,   147,     7,   131,   149,     9,    66,    15,    68,
      68,    68,    22,    69,    13,    34,    14,    37,    39,    65,
      60,    69,   244,    69,    34,    68,   269,    68,   270,    85,
      81,    69,    69,    69,    68,    34,    34,   127,   129,   130,
     201,    62,   260,    -4,    56,    18,    57,    69,    35,    69,
      37,    39,    32,   136,    -4,   138,    69,    38,    58,   285,
      66,    49,   143,  -196,    -4,    64,  -196,   223,  -151,    89,
      91,    41,    46,    64,   235,    64,    55,  -196,   238,    73,
     227,    88,   286,    64,    64,    64,    -4,    68,    59,    81,
     254,    60,   259,   320,   268,    61,   252,   231,   133,    64,
     258,    64,   291,    56,    42,    57,     4,    66,    64,    69,
     295,    66,    62,   126,   174,   186,   175,    74,    30,    31,
     277,    12,   144,   202,   232,   251,   145,   253,   146,   256,
     306,   180,   183,   278,    68,   176,   185,   184,    68,    75,
      47,    14,   187,    66,   220,   188,   233,    59,    66,   222,
      60,    76,   230,   234,   250,   293,    69,   274,   316,   275,
      69,    64,   247,   279,   283,  -118,   290,   323,    66,  -116,
      68,    62,  -115,   201,   292,    68,  -129,   299,   288,   245,
     296,   297,   298,   301,   308,   303,   305,   304,   311,   302,
     310,    56,    69,    57,   312,    68,   318,    69,   247,   319,
      48,    90,   238,   127,    24,    58,    92,   173,    64,   317,
     307,   315,    64,    82,   300,   324,   201,    69,   276,    87,
     313,   189,    93,   289,    57,   190,   249,   191,     0,    20,
     192,     0,   193,   194,     0,    59,   195,    21,    84,     0,
       0,     0,     0,     0,    64,     0,     0,     0,     0,    64,
       0,    95,    96,    97,    98,    99,     0,     0,     0,    62,
     196,   197,     0,    22,   100,   101,   102,   189,    93,    64,
      57,   190,     0,   191,     0,    20,   192,     0,   193,   194,
       0,     0,   195,    21,   103,     0,     0,     0,   104,   105,
     106,     0,   107,     0,    81,   198,     0,    95,    96,    97,
      98,    99,     0,    56,     0,    57,   196,   197,     0,    22,
     100,   101,   102,    93,     0,    57,     0,    58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   236,     0,     0,
     103,     0,     0,     0,   104,   105,   106,     0,   107,   137,
      81,     0,    95,    96,    97,    98,    99,    59,     0,     0,
      60,     0,     0,     0,     0,   100,   101,   102,    93,     0,
      57,     0,     0,    56,     0,    57,     0,   257,     0,     0,
       0,    62,    94,     0,     0,   103,     0,    74,     0,   104,
     105,   106,     0,   107,     0,   180,   237,    95,    96,    97,
      98,    99,     0,     0,     0,    56,     0,    57,     0,    75,
     100,   101,   102,    93,     0,    57,     0,    59,     0,    58,
      60,     0,     0,     0,     0,     0,     0,    94,     0,     0,
     103,     0,     0,     0,   104,   105,   106,     0,   107,     0,
      81,    62,    95,    96,    97,    98,    99,     0,     0,    59,
       0,     0,    60,     0,     0,   100,   101,   102,    93,     0,
      57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   236,    62,     0,   103,     0,     0,     0,   104,
     105,   106,     0,   107,     0,   180,     0,    95,    96,    97,
      98,    99,   150,   151,   152,   153,     0,     0,     0,     0,
     100,   101,   102,   224,     0,    57,     0,     0,     0,     0,
       0,   162,   163,   164,   165,   166,   167,    94,     0,     0,
     103,     0,     0,     0,   104,   105,   106,     0,   107,     0,
     180,     0,    95,    96,    97,    98,    99,     0,     0,   150,
     151,   152,   153,     0,     0,   100,   101,   225,   294,     0,
      60,   226,    93,     0,    57,     0,     0,     0,   162,   163,
     164,   165,   166,   167,     0,   103,    94,     0,     0,   104,
     105,   106,     0,   107,     0,     0,     0,     0,     0,     0,
       0,    95,    96,    97,    98,    99,     0,     0,   148,     0,
       0,     0,     0,     0,   100,   101,   102,    93,     0,    57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0,   103,     0,     0,     0,   104,   105,
     106,     0,   107,     0,     0,     0,    95,    96,    97,    98,
      99,     0,     0,     0,   150,   151,   152,   153,     0,   100,
     101,   102,     0,     0,     0,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   103,
       0,     0,     0,   104,   105,   106,  -128,   107,   150,   151,
     152,   153,  -157,     0,     0,     0,     0,     0,     0,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   150,   151,   152,   153,  -157,    81,     0,
       0,   272,   273,     0,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,     0,     0,
       0,     0,     0,  -172,     0,     0,   272,   273,   150,   151,
     152,   153,     0,     0,     0,     0,   -26,     0,     0,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   150,   151,   152,   153,     0,     0,     0,
       0,   272,   273,     0,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   150,   151,
     152,   153,     0,    81,     0,     0,     0,     0,     0,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   150,   151,   152,   153,   221,     0,     0,
       0,     0,     0,     0,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,     0,     0,
     284,   150,   151,   152,   153,     0,     0,     0,     0,     0,
       0,     0,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167
};

static const yytype_int16 yycheck[] =
{
      62,    55,   120,    19,    41,    56,    13,   192,   200,   194,
     200,     5,    49,     5,    51,     7,    11,    19,    12,    41,
       1,    19,    59,    60,    61,     0,    20,    19,     9,    34,
     142,    41,    51,    55,    53,    53,    34,    55,    75,    49,
      77,    51,    93,    51,   106,   107,    39,    84,    29,    59,
      60,    61,    46,    41,    52,    19,    54,    20,    21,    41,
      52,    49,    78,    51,    19,    75,   258,    77,   258,    51,
      77,    59,    60,    61,    84,    19,    19,    59,    60,    61,
     142,    73,   194,    54,     5,    51,     7,    75,    52,    77,
      53,    54,    19,    75,    54,    77,    84,    52,    19,    55,
     137,    52,    84,    53,    54,    41,    77,   169,    79,    53,
      53,    19,    51,    49,   176,    51,    57,    77,   180,    51,
     174,    55,    78,    59,    60,    61,    54,   137,    49,    77,
     192,    52,   194,   318,   196,    56,   190,   174,    54,    75,
     194,    77,   254,     5,    52,     7,    19,   184,    84,   137,
     262,   188,    73,    77,    52,   137,    54,    19,    14,    15,
     222,    34,    19,   275,   174,   189,    51,   191,    51,   193,
     288,    77,    53,   224,   184,    73,    19,    74,   188,    41,
      53,    54,    53,   220,    74,    55,   174,    49,   225,    55,
      52,    53,   174,    19,    19,   257,   184,    51,   310,    79,
     188,   137,   184,    53,    55,    77,    51,   319,   245,    77,
     220,    73,    77,   275,    51,   225,    79,   271,    79,   182,
      51,    56,    56,    55,    34,    78,   288,    55,    14,   283,
     292,     5,   220,     7,   296,   245,    51,   225,   220,     9,
      29,    53,   304,   225,    11,    19,    54,   111,   184,   311,
     288,   304,   188,    50,   275,   319,   318,   245,   220,    51,
     296,     4,     5,   245,     7,     8,   188,    10,    -1,    12,
      13,    -1,    15,    16,    -1,    49,    19,    20,    52,    -1,
      -1,    -1,    -1,    -1,   220,    -1,    -1,    -1,    -1,   225,
      -1,    34,    35,    36,    37,    38,    -1,    -1,    -1,    73,
      43,    44,    -1,    46,    47,    48,    49,     4,     5,   245,
       7,     8,    -1,    10,    -1,    12,    13,    -1,    15,    16,
      -1,    -1,    19,    20,    67,    -1,    -1,    -1,    71,    72,
      73,    -1,    75,    -1,    77,    78,    -1,    34,    35,    36,
      37,    38,    -1,     5,    -1,     7,    43,    44,    -1,    46,
      47,    48,    49,     5,    -1,     7,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      67,    -1,    -1,    -1,    71,    72,    73,    -1,    75,    41,
      77,    -1,    34,    35,    36,    37,    38,    49,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    47,    48,    49,     5,    -1,
       7,    -1,    -1,     5,    -1,     7,    -1,    14,    -1,    -1,
      -1,    73,    19,    -1,    -1,    67,    -1,    19,    -1,    71,
      72,    73,    -1,    75,    -1,    77,    78,    34,    35,    36,
      37,    38,    -1,    -1,    -1,     5,    -1,     7,    -1,    41,
      47,    48,    49,     5,    -1,     7,    -1,    49,    -1,    19,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      67,    -1,    -1,    -1,    71,    72,    73,    -1,    75,    -1,
      77,    73,    34,    35,    36,    37,    38,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    47,    48,    49,     5,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    73,    -1,    67,    -1,    -1,    -1,    71,
      72,    73,    -1,    75,    -1,    77,    -1,    34,    35,    36,
      37,    38,    47,    48,    49,    50,    -1,    -1,    -1,    -1,
      47,    48,    49,     5,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    66,    67,    68,    69,    70,    71,    19,    -1,    -1,
      67,    -1,    -1,    -1,    71,    72,    73,    -1,    75,    -1,
      77,    -1,    34,    35,    36,    37,    38,    -1,    -1,    47,
      48,    49,    50,    -1,    -1,    47,    48,    49,    56,    -1,
      52,    53,     5,    -1,     7,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    -1,    67,    19,    -1,    -1,    71,
      72,    73,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    47,    48,    49,     5,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    67,    -1,    -1,    -1,    71,    72,
      73,    -1,    75,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    47,    48,    49,    50,    -1,    47,
      48,    49,    -1,    -1,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    67,
      -1,    -1,    -1,    71,    72,    73,    79,    75,    47,    48,
      49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    47,    48,    49,    50,    51,    77,    -1,
      -1,    80,    81,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    80,    81,    47,    48,
      49,    50,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    47,    48,    49,    50,    -1,    -1,    -1,
      -1,    80,    81,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    47,    48,
      49,    50,    -1,    77,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    47,    48,    49,    50,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      74,    47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    83,    84,    19,    85,     0,    51,    91,    39,
      86,    90,    34,    52,    54,    85,    87,    88,    51,     5,
      12,    20,    46,    89,   101,   102,   105,   109,   141,    92,
      88,    88,    19,   142,    19,    52,   103,   104,    52,   104,
     110,    19,    52,   106,   107,   108,    51,    53,    87,    52,
     183,   185,    93,    94,    95,    57,     5,     7,    19,    49,
      52,    56,    73,    85,   131,   171,   172,   173,   174,   177,
     180,   182,    97,    51,    19,    41,    53,   104,   171,   186,
     187,    77,   143,   144,    52,   171,   184,   185,    55,    53,
     103,    53,   110,     5,    19,    34,    35,    36,    37,    38,
      47,    48,    49,    67,    71,    72,    73,    75,   111,   112,
     113,   118,   119,   126,   127,   128,   129,   130,   131,   132,
     133,   140,   172,   174,   177,   183,    77,   171,   181,   171,
     171,   112,   175,    54,    51,    53,   171,    41,   171,    53,
      55,    99,    98,   171,    19,    51,    51,   183,    41,   112,
      47,    48,    49,    50,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    96,   114,
     115,   116,   117,   113,    52,    54,    73,   120,   121,   122,
      77,   134,   100,    53,    74,    19,   171,    53,    55,     4,
       8,    10,    13,    15,    16,    19,    43,    44,    78,   101,
     111,   112,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   154,   155,   165,   166,   167,   168,   169,   170,   143,
      74,    76,    55,   112,     5,    49,    53,   111,   123,   124,
     171,   172,   174,   177,    19,   112,    19,    78,   112,   134,
     135,   137,   138,   139,    78,   104,   178,   171,   176,   187,
      19,   147,   111,   147,   112,   148,   147,    14,   111,   112,
     144,   148,   156,   157,   158,   159,   162,   164,   112,   116,
     117,   153,    80,    81,    51,    79,   176,   112,   183,    53,
      41,    55,   125,    55,    74,    55,    78,   136,    79,   171,
      51,   144,    51,   112,    56,   144,    51,    56,    56,   111,
     145,    55,   111,    78,    55,   112,   134,   139,    34,   179,
     112,    14,   112,   157,   160,   137,   144,   112,    51,     9,
     148,   161,   163,   144,   154
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
     139,   139,   140,   141,   141,   142,   143,   144,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     146,   147,   148,   148,   148,   148,   149,   150,   151,   151,
     152,   153,   153,   154,   154,   154,   154,   155,   155,   156,
     156,   156,   157,   158,   159,   159,   160,   160,   161,   161,
     162,   163,   164,   164,   165,   166,   166,   167,   167,   168,
     168,   169,   170,   171,   171,   171,   172,   172,   173,   173,
     173,   173,   174,   175,   176,   177,   178,   178,   179,   180,
     181,   182,   183,   183,   184,   184,   185,   185,   185,   186,
     187,   187,   187,   187
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
       1,     1,     3,     4,     3,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     0,     1,     2,     2,
       3,     2,     2,     3,     5,     7,     7,     2,     3,     1,
       1,     1,     1,     5,     1,     0,     1,     0,     1,     0,
       1,     1,     2,     4,     2,     2,     1,     2,     1,     2,
       1,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     4,     1,     1,     4,     3,     2,     1,     2,
       1,     2,     1,     2,     1,     1,     2,     3,     4,     2,
       1,     2,     3,     2
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

#line 1732 "parse.tab.c"

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
#line 413 "parse.y"

void yyerror(char* s){
    printf("ERROR: %s\n", s);
}

int main(){
    while(1){
        yyparse();
    }
    return 0;
}
