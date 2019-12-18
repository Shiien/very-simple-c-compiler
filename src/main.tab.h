/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_SRC_MAIN_TAB_H_INCLUDED
# define YY_YY_SRC_MAIN_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_CHAR = 258,
    T_INT = 259,
    T_DOUBLE = 260,
    T_VOID = 261,
    T_STRING = 262,
    T_BOOL = 263,
    K_BREAK = 264,
    K_CASE = 265,
    K_CONTINUE = 266,
    K_DEFAULT = 267,
    K_DO = 268,
    K_ELSE = 269,
    K_FOR = 270,
    K_GOTO = 271,
    K_IF = 272,
    K_RET = 273,
    K_SWITCH = 274,
    K_WHILE = 275,
    K_OUTPUT = 276,
    LP = 277,
    RP = 278,
    INC = 279,
    DEC = 280,
    SIZEOF = 281,
    NOT = 282,
    BREV = 283,
    LSHFT = 284,
    RSHFT = 285,
    MUL = 286,
    DIV = 287,
    MOD = 288,
    ADD = 289,
    SUB = 290,
    BAND = 291,
    BXOR = 292,
    BOR = 293,
    LESS = 294,
    LESSEQ = 295,
    MORE = 296,
    MOREEQ = 297,
    EQ = 298,
    NE = 299,
    LAND = 300,
    LOR = 301,
    QM = 302,
    COLON = 303,
    LSHFTAS = 304,
    RSHFTAS = 305,
    MULAS = 306,
    DIVAS = 307,
    MODAS = 308,
    ADDAS = 309,
    SUBAS = 310,
    BANDAS = 311,
    BXORAS = 312,
    BORAS = 313,
    ASSIGN = 314,
    COMMA = 315,
    SEMICOLON = 316,
    LABEL = 317,
    SYMBOL = 318,
    IDENTIFIER = 319,
    LB = 320,
    RB = 321,
    IFX = 322,
    UMINUS = 323,
    UADD = 324
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 10 "src/main.y" /* yacc.c:1909  */

  string *value;
  Symbol *symbol;
  TreeNode *node;

#line 130 "src/main.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_MAIN_TAB_H_INCLUDED  */
