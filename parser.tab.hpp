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

#ifndef YY_YY_PARSER_TAB_HPP_INCLUDED
# define YY_YY_PARSER_TAB_HPP_INCLUDED
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

#line 56 "parser.tab.hpp"

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

#line 153 "parser.tab.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_HPP_INCLUDED  */
