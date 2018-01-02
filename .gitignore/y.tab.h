/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INTEGER = 258,
     CHR = 259,
     BOOL = 260,
     FALSE = 261,
     TRUE = 262,
     FLT = 263,
     VARIABLE = 264,
     WHILE = 265,
     IF = 266,
     PRINT = 267,
     FOR = 268,
     SWITCH = 269,
     CASE = 270,
     DO = 271,
     SEMICOLON = 272,
     PRINTTHIS = 273,
     SINGLEQUOTE = 274,
     EQ = 275,
     OR = 276,
     AND = 277,
     BOOLEAN = 278,
     COMMA = 279,
     CONST = 280,
     CONSTi = 281,
     CONSTf = 282,
     CONSTc = 283,
     CONSTb = 284,
     INT = 285,
     FLOAT = 286,
     DOUBLE = 287,
     CHAR = 288,
     LBRACKET = 289,
     RBRACKET = 290,
     LBRACES = 291,
     RBRACES = 292,
     COLON = 293,
     BREAK = 294,
     DEFAULT = 295,
     IFX = 296,
     ELSE = 297,
     LT = 298,
     GT = 299,
     NE = 300,
     EQlog = 301,
     LE = 302,
     GE = 303,
     MINUS = 304,
     PLUS = 305,
     DIVIDE = 306,
     MULTIPLY = 307,
     UMINUS = 308
   };
#endif
/* Tokens.  */
#define INTEGER 258
#define CHR 259
#define BOOL 260
#define FALSE 261
#define TRUE 262
#define FLT 263
#define VARIABLE 264
#define WHILE 265
#define IF 266
#define PRINT 267
#define FOR 268
#define SWITCH 269
#define CASE 270
#define DO 271
#define SEMICOLON 272
#define PRINTTHIS 273
#define SINGLEQUOTE 274
#define EQ 275
#define OR 276
#define AND 277
#define BOOLEAN 278
#define COMMA 279
#define CONST 280
#define CONSTi 281
#define CONSTf 282
#define CONSTc 283
#define CONSTb 284
#define INT 285
#define FLOAT 286
#define DOUBLE 287
#define CHAR 288
#define LBRACKET 289
#define RBRACKET 290
#define LBRACES 291
#define RBRACES 292
#define COLON 293
#define BREAK 294
#define DEFAULT 295
#define IFX 296
#define ELSE 297
#define LT 298
#define GT 299
#define NE 300
#define EQlog 301
#define LE 302
#define GE 303
#define MINUS 304
#define PLUS 305
#define DIVIDE 306
#define MULTIPLY 307
#define UMINUS 308



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 33 "calc3.y"

    int iValue;                 /* integer value */
	float fValue;
    char sIndex;                /* symbol table index */
    nodeType *nPtr;             /* node pointer */


/* Line 2058 of yacc.c  */
#line 171 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
