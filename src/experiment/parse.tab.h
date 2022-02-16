/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
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
    IMPORT = 294                   /* IMPORT  */
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

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */
