/* A Bison parser, made by GNU Bison 3.6.1.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 18 "parser.y"


#include "expression.h"
struct Array variables;
struct Array dictionary;
struct Array functions;

#line 57 "parser.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    FALSE = 258,                   /* FALSE  */
    NONE = 259,                    /* NONE  */
    TRUE = 260,                    /* TRUE  */
    AND = 261,                     /* AND  */
    AS = 262,                      /* AS  */
    ASSERT = 263,                  /* ASSERT  */
    BREAK = 264,                   /* BREAK  */
    CLASS = 265,                   /* CLASS  */
    CONTINUE = 266,                /* CONTINUE  */
    DEF = 267,                     /* DEF  */
    DEL = 268,                     /* DEL  */
    ELIF = 269,                    /* ELIF  */
    ELSE = 270,                    /* ELSE  */
    EXCEPT = 271,                  /* EXCEPT  */
    FINALLY = 272,                 /* FINALLY  */
    FOR = 273,                     /* FOR  */
    FROM = 274,                    /* FROM  */
    GLOBAL = 275,                  /* GLOBAL  */
    IF = 276,                      /* IF  */
    IMPORT = 277,                  /* IMPORT  */
    COMMA = 278,                   /* COMMA  */
    DOT = 279,                     /* DOT  */
    COL = 280,                     /* COL  */
    IN = 281,                      /* IN  */
    IS = 282,                      /* IS  */
    LAMBDA = 283,                  /* LAMBDA  */
    NOT = 284,                     /* NOT  */
    OR = 285,                      /* OR  */
    COLON = 286,                   /* COLON  */
    PASS = 287,                    /* PASS  */
    RAISE = 288,                   /* RAISE  */
    RETURN = 289,                  /* RETURN  */
    TRY = 290,                     /* TRY  */
    WHILE = 291,                   /* WHILE  */
    WITH = 292,                    /* WITH  */
    YIELD = 293,                   /* YIELD  */
    PRINT = 294,                   /* PRINT  */
    EXEC = 295,                    /* EXEC  */
    INC = 296,                     /* INC  */
    DEC = 297,                     /* DEC  */
    EQUAL = 298,                   /* EQUAL  */
    SETDEFAULT = 299,              /* SETDEFAULT  */
    LPAR = 300,                    /* LPAR  */
    RPAR = 301,                    /* RPAR  */
    LESS_THAN_OP = 302,            /* LESS_THAN_OP  */
    GREATER_THAN_OP = 303,         /* GREATER_THAN_OP  */
    AND_EXP = 304,                 /* AND_EXP  */
    NEWLINE = 305,                 /* NEWLINE  */
    LBRA = 306,                    /* LBRA  */
    RBRA = 307,                    /* RBRA  */
    PAPAKI = 308,                  /* PAPAKI  */
    QUOTATION = 309,               /* QUOTATION  */
    APOSTROPHE = 310,              /* APOSTROPHE  */
    ITEMS = 311,                   /* ITEMS  */
    ELLIPSIS = 312,                /* ELLIPSIS  */
    RIGHT_ASSIGN = 313,            /* RIGHT_ASSIGN  */
    LEFT_ASSIGN = 314,             /* LEFT_ASSIGN  */
    ADD_ASSIGN = 315,              /* ADD_ASSIGN  */
    EXA = 316,                     /* EXA  */
    SUB_ASSIGN = 317,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 318,              /* MUL_ASSIGN  */
    POW_ASSIGN = 319,              /* POW_ASSIGN  */
    DIV_ASSIGN = 320,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 321,              /* MOD_ASSIGN  */
    AND_ASSIGN = 322,              /* AND_ASSIGN  */
    PERCENT = 323,                 /* PERCENT  */
    OR_SIGN = 324,                 /* OR_SIGN  */
    XOR_ASSIGN = 325,              /* XOR_ASSIGN  */
    OR_ASSIGN = 326,               /* OR_ASSIGN  */
    RIGHT_OP = 327,                /* RIGHT_OP  */
    LEFT_OP = 328,                 /* LEFT_OP  */
    PTR_OP = 329,                  /* PTR_OP  */
    LE_OP = 330,                   /* LE_OP  */
    GE_OP = 331,                   /* GE_OP  */
    EQ_OP = 332,                   /* EQ_OP  */
    NE_OP = 333,                   /* NE_OP  */
    DOUBLESTAR = 334,              /* DOUBLESTAR  */
    DOUBLESLASH = 335,             /* DOUBLESLASH  */
    RANGE = 336,                   /* RANGE  */
    LR_OP = 337,                   /* LR_OP  */
    XOR = 338,                     /* XOR  */
    NOT_SIGN = 339,                /* NOT_SIGN  */
    PLUS = 340,                    /* PLUS  */
    MINUS = 341,                   /* MINUS  */
    STAR = 342,                    /* STAR  */
    SLASH = 343,                   /* SLASH  */
    DECINTEGER = 344,              /* DECINTEGER  */
    OCTINTEGER = 345,              /* OCTINTEGER  */
    HEXINTEGER = 346,              /* HEXINTEGER  */
    POINTFLOAT = 347,              /* POINTFLOAT  */
    EXPONENTFLOAT = 348,           /* EXPONENTFLOAT  */
    IDENTIFIER = 349,              /* IDENTIFIER  */
    SHORTSTRING = 350,             /* SHORTSTRING  */
    LONGSTRING = 351,              /* LONGSTRING  */
    IMAGNUMBER = 352               /* IMAGNUMBER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 27 "parser.y"

    struct Variable nval;
	

#line 176 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
