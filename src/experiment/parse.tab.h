/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
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

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */
