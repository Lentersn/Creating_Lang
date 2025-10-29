/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SEP = 258,
     PENUP = 259,
     PENDOWN = 260,
     PRINT = 261,
     CHANGE_COLOR = 262,
     COLOR = 263,
     CLEAR = 264,
     TURN = 265,
     MOVE = 266,
     END = 267,
     SAVE = 268,
     GOTO = 269,
     WHERE = 270,
     VARIABLE = 271,
     PLUS = 272,
     SUB = 273,
     MULT = 274,
     DIV = 275,
     EQUALS = 276,
     NUMBER = 277,
     STRING = 278,
     QSTRING = 279
   };
#endif
/* Tokens.  */
#define SEP 258
#define PENUP 259
#define PENDOWN 260
#define PRINT 261
#define CHANGE_COLOR 262
#define COLOR 263
#define CLEAR 264
#define TURN 265
#define MOVE 266
#define END 267
#define SAVE 268
#define GOTO 269
#define WHERE 270
#define VARIABLE 271
#define PLUS 272
#define SUB 273
#define MULT 274
#define DIV 275
#define EQUALS 276
#define NUMBER 277
#define STRING 278
#define QSTRING 279




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 54 "gvlogo.y"
{
	float f;
	char* s;
	char v;
}
/* Line 1529 of yacc.c.  */
#line 103 "gvlogo.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYLTYPE yylloc;
