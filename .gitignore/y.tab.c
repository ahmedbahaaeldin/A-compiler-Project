/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "calc3.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "calc3.h"

/* prototypes */
nodeType *opr(int oper, int nops, ...);
nodeType *id(int i);
nodeType *con(int value);
nodeType *conf(float value);
void ResetCount();

nodeType *conc(char value);
nodeType *conb(int value);
void freeNode(nodeType *p);
int ex(nodeType *p, int jmpTo , int rgid, int currentLabel);
int yylex(void);

void insert(int type1);
void look(int scopic1);
void look1(int tempvar);

void yyerror(char *s);
                  
int agdeed[26]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int isdeclared=0,i=0,type[100],j=0,error_flag=0;
int symbol[26]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int temp=0;
int scopic=0;

/* Line 371 of yacc.c  */
#line 100 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
/* Line 387 of yacc.c  */
#line 33 "calc3.y"

    int iValue;                 /* integer value */
	float fValue;
    char sIndex;                /* symbol table index */
    nodeType *nPtr;             /* node pointer */


/* Line 387 of yacc.c  */
#line 257 "y.tab.c"
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

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 285 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   504

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNRULES -- Number of states.  */
#define YYNSTATES  203

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    14,    18,    23,
      29,    35,    43,    46,    50,    54,    60,    67,    71,    77,
      84,    88,    95,    99,   105,   112,   119,   128,   137,   148,
     155,   163,   165,   167,   169,   171,   177,   183,   187,   189,
     193,   197,   201,   205,   209,   213,   217,   221,   225,   227,
     229,   232,   236,   240,   244,   248,   252,   254,   257,   259,
     261,   263,   265,   267,   271,   275,   277,   280,   284,   288,
     292,   296,   300,   304,   308,   312,   316,   320,   324,   328
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,    56,    -1,    56,    57,    -1,    -1,    17,
      -1,    67,    17,    -1,    12,    67,    17,    -1,     9,    20,
      67,    17,    -1,    10,    34,    67,    35,    57,    -1,    11,
      34,    67,    35,    57,    -1,    11,    34,    67,    35,    57,
      42,    57,    -1,    36,    37,    -1,    59,    66,    60,    -1,
      30,    68,    17,    -1,    30,     9,    20,    67,    17,    -1,
      25,    30,     9,    20,     3,    17,    -1,    31,    68,    17,
      -1,    31,     9,    20,    67,    17,    -1,    25,    31,     9,
      20,     8,    17,    -1,    33,    68,    17,    -1,    25,    33,
       9,    20,    67,    17,    -1,    23,    68,    17,    -1,    23,
       9,    20,    67,    17,    -1,    25,    23,     9,    20,     6,
      17,    -1,    25,    23,     9,    20,     7,    17,    -1,    13,
      34,    61,    63,    17,    62,    35,    57,    -1,    16,    36,
      66,    37,    10,    34,    67,    35,    -1,    14,    34,     9,
      35,    36,    58,    40,    38,    57,    37,    -1,    15,    67,
      38,    57,    39,    17,    -1,    15,    67,    38,    57,    39,
      17,    58,    -1,    36,    -1,    59,    -1,    37,    -1,    60,
      -1,    30,     9,    20,    65,    17,    -1,    31,     9,    20,
      65,    17,    -1,     9,    20,    65,    -1,    64,    -1,    63,
      22,    63,    -1,    63,    21,    63,    -1,    34,    63,    35,
      -1,    65,    43,    65,    -1,    65,    44,    65,    -1,    65,
      48,    65,    -1,    65,    47,    65,    -1,    65,    45,    65,
      -1,    65,    46,    65,    -1,     3,    -1,     9,    -1,    49,
      65,    -1,    65,    50,    65,    -1,    65,    49,    65,    -1,
      65,    52,    65,    -1,    65,    51,    65,    -1,    34,    65,
      35,    -1,    57,    -1,    66,    57,    -1,     8,    -1,     3,
      -1,     4,    -1,     6,    -1,     7,    -1,    67,    22,    67,
      -1,    67,    21,    67,    -1,     9,    -1,    49,    67,    -1,
      67,    50,    67,    -1,    67,    49,    67,    -1,    67,    52,
      67,    -1,    67,    51,    67,    -1,    67,    43,    67,    -1,
      67,    44,    67,    -1,    67,    48,    67,    -1,    67,    47,
      67,    -1,    67,    45,    67,    -1,    67,    46,    67,    -1,
      34,    67,    35,    -1,     9,    24,    68,    -1,     9,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    62,    62,    66,    67,    71,    72,    73,    74,    75,
      77,    78,    80,    81,    82,    83,    84,    86,    87,    88,
      90,    91,    93,    94,    95,    97,   100,   103,   106,   110,
     111,   116,   117,   119,   120,   125,   126,   129,   133,   134,
     135,   136,   140,   141,   142,   143,   144,   145,   149,   150,
     151,   152,   153,   154,   155,   156,   161,   162,   168,   169,
     170,   172,   173,   174,   175,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   193,   194
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "CHR", "BOOL", "FALSE",
  "TRUE", "FLT", "VARIABLE", "WHILE", "IF", "PRINT", "FOR", "SWITCH",
  "CASE", "DO", "SEMICOLON", "PRINTTHIS", "SINGLEQUOTE", "EQ", "OR", "AND",
  "BOOLEAN", "COMMA", "CONST", "CONSTi", "CONSTf", "CONSTc", "CONSTb",
  "INT", "FLOAT", "DOUBLE", "CHAR", "LBRACKET", "RBRACKET", "LBRACES",
  "RBRACES", "COLON", "BREAK", "DEFAULT", "IFX", "ELSE", "LT", "GT", "NE",
  "EQlog", "LE", "GE", "MINUS", "PLUS", "DIVIDE", "MULTIPLY", "UMINUS",
  "$accept", "program", "function", "stmt", "cases", "openB", "closeB",
  "declassign", "declassign2", "blexpr", "loexpr", "arexpr", "stmt_list",
  "expr", "Vars", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    58,
      58,    59,    59,    60,    60,    61,    61,    62,    63,    63,
      63,    63,    64,    64,    64,    64,    64,    64,    65,    65,
      65,    65,    65,    65,    65,    65,    66,    66,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    68,    68
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     2,     3,     4,     5,
       5,     7,     2,     3,     3,     5,     6,     3,     5,     6,
       3,     6,     3,     5,     6,     6,     8,     8,    10,     6,
       7,     1,     1,     1,     1,     5,     5,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       2,     3,     3,     3,     3,     3,     1,     2,     1,     1,
       1,     1,     1,     3,     3,     1,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,    59,    60,    61,    62,    58,    65,
       0,     0,     0,     0,     0,     0,     5,     0,     0,     0,
       0,     0,     0,    31,     0,     3,     0,     0,     0,     0,
       0,    65,     0,     0,     0,     0,    79,     0,     0,     0,
       0,     0,    79,     0,    79,     0,    79,     0,     0,    12,
      66,    56,     0,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       0,     0,     0,     0,     0,     0,     0,    22,     0,     0,
       0,     0,     0,    14,     0,    17,    20,    77,    33,    57,
      13,    64,    63,    71,    72,    75,    76,    74,    73,    68,
      67,    70,    69,     8,     0,     0,     0,     0,    48,    49,
       0,     0,     0,    38,     0,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,     0,
       0,     0,    50,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,     0,
       0,     0,     0,     0,    15,    18,     0,     0,     0,    41,
      55,     0,     0,     0,    40,    39,    42,    43,    46,    47,
      45,    44,    52,    51,    54,    53,     0,     0,     0,    24,
      25,    16,    19,    21,    11,    35,    36,     0,     0,     0,
       0,     0,    37,    26,     0,     0,    27,     0,     0,     0,
      28,    29,    30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    51,   177,    26,    90,    72,   163,   112,
     113,   114,    52,    27,    37
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -98
static const yytype_int16 yypact[] =
{
     -98,     2,   235,   -98,   -98,   -98,   -98,   -98,   -98,    16,
     -15,   -12,    91,     4,    15,    35,   -98,    73,    55,    84,
      87,    92,    91,    42,    91,   -98,   235,   122,    91,    91,
      91,   -98,   242,   -26,    97,   235,   -17,    99,   124,   127,
     132,   133,    53,   128,    60,   131,   125,   134,   363,   -98,
     -98,   -98,   101,   -98,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,   253,   381,   399,   -98,
     143,   144,     3,   129,   191,    91,    92,   -98,   156,   158,
     159,   160,    91,   -98,    91,   -98,   -98,   -98,   -98,   -98,
     -98,   442,   442,    78,    78,    78,    78,    78,    78,   -27,
     -27,   -98,   -98,   -98,   235,   235,   161,   162,   -98,   -98,
       3,    17,    70,   -98,   452,   147,   153,   289,   -98,    26,
     181,   177,    91,   299,   309,   -98,   145,    17,    17,    54,
     328,    17,   -98,   179,     3,     3,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,   174,   157,   -98,   173,
     189,   192,   193,   345,   -98,   -98,   235,    18,   106,   -98,
     -98,   -34,   176,   178,   -98,   -98,   110,   110,   110,   110,
     110,   110,    68,    68,   -98,   -98,    91,   171,    91,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,    17,   235,   414,
     180,   432,   110,   -98,   235,   235,   -98,   184,   175,   198,
     -98,   174,   -98
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -98,   -98,   -98,    -2,    19,   -98,   -98,   -98,   -98,    12,
     -98,   -97,   182,    -1,   -11
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      25,   160,     3,    75,    70,    71,   108,    76,    43,    45,
      47,    32,   109,   130,   132,   142,   143,   144,   145,    29,
     108,    48,    30,    50,    64,    65,   109,    66,    67,    68,
     157,   158,   149,   150,   161,   185,    28,   110,    33,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    34,
      89,   131,   111,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   118,   111,   142,   143,   144,
     145,    35,    89,    82,   117,   134,   135,    76,    38,    49,
      84,   123,    36,   124,    76,    39,    40,   133,    41,   159,
     192,   134,   135,    42,     4,     5,    44,     6,     7,     8,
      31,    46,   125,   126,     4,     5,    73,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    77,    15,    16,   144,
     145,   153,   129,   186,    17,    22,    18,    62,    63,    64,
      65,    19,    20,    78,    21,    22,    79,    23,    88,    53,
      24,    80,    81,    54,    55,    83,   164,   165,    85,    76,
      24,    86,   106,   107,   184,   142,   143,   144,   145,   142,
     143,   144,   145,   147,   115,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,   189,   119,   191,   120,   121,
     122,   127,   128,   146,   151,   152,   193,   156,   162,   176,
     179,   178,   197,   198,     4,     5,   187,     6,     7,     8,
       9,    10,    11,    12,    13,    14,   180,    15,    16,   181,
     182,   190,   200,   188,    17,   201,    18,    74,   195,     0,
     202,    19,    20,   199,    21,    22,     0,    23,   116,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     5,
      24,     6,     7,     8,     9,    10,    11,    12,    13,    14,
       0,    15,    16,     0,     0,     0,     0,     0,    17,    69,
      18,     0,     0,    54,    55,    19,    20,     0,    21,    22,
     103,    23,     0,     0,    54,    55,     0,     0,     0,     0,
       0,     0,     0,     0,    24,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,   148,     0,     0,     0,
      54,    55,     0,     0,     0,     0,   154,     0,     0,     0,
      54,    55,     0,     0,     0,     0,   155,     0,     0,     0,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,   183,   160,     0,     0,    54,    55,     0,     0,
       0,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,     0,     0,     0,    54,    55,     0,     0,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    87,     0,
       0,     0,    54,    55,     0,     0,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,   104,     0,     0,     0,
      54,    55,     0,     0,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,   105,    54,    55,     0,     0,     0,
       0,     0,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,   194,    54,    55,     0,     0,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,   196,     0,     0,
       0,     0,     0,     0,     0,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-98)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       2,    35,     0,    20,    30,    31,     3,    24,    19,    20,
      21,    12,     9,   110,   111,    49,    50,    51,    52,    34,
       3,    22,    34,    24,    51,    52,     9,    28,    29,    30,
     127,   128,     6,     7,   131,    17,    20,    34,    34,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,    34,
      52,    34,    49,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    76,    49,    49,    50,    51,
      52,    36,    74,    20,    75,    21,    22,    24,    23,    37,
      20,    82,     9,    84,    24,    30,    31,    17,    33,    35,
     187,    21,    22,     9,     3,     4,     9,     6,     7,     8,
       9,     9,   104,   105,     3,     4,     9,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    17,    16,    17,    51,
      52,   122,   110,    17,    23,    34,    25,    49,    50,    51,
      52,    30,    31,     9,    33,    34,     9,    36,    37,    17,
      49,     9,     9,    21,    22,    17,   134,   135,    17,    24,
      49,    17,     9,     9,   156,    49,    50,    51,    52,    49,
      50,    51,    52,    10,    35,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,   176,    20,   178,    20,    20,
      20,    20,    20,    36,     3,     8,   188,    42,     9,    15,
      17,    34,   194,   195,     3,     4,    20,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    17,    16,    17,    17,
      17,    40,    37,    35,    23,    17,    25,    35,    38,    -1,
     201,    30,    31,    39,    33,    34,    -1,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      49,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    -1,    -1,    -1,    -1,    -1,    23,    17,
      25,    -1,    -1,    21,    22,    30,    31,    -1,    33,    34,
      17,    36,    -1,    -1,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    17,    -1,    -1,    -1,
      21,    22,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,
      21,    22,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,
      21,    22,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    17,    35,    -1,    -1,    21,    22,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    21,    22,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    35,    -1,
      -1,    -1,    21,    22,    -1,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    35,    -1,    -1,    -1,
      21,    22,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    35,    21,    22,    -1,    -1,    -1,
      -1,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    38,    21,    22,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,    56,     0,     3,     4,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    16,    17,    23,    25,    30,
      31,    33,    34,    36,    49,    57,    59,    67,    20,    34,
      34,     9,    67,    34,    34,    36,     9,    68,    23,    30,
      31,    33,     9,    68,     9,    68,     9,    68,    67,    37,
      67,    57,    66,    17,    21,    22,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    67,    67,    67,    17,
      30,    31,    61,     9,    66,    20,    24,    17,     9,     9,
       9,     9,    20,    17,    20,    17,    17,    35,    37,    57,
      60,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    17,    35,    35,     9,     9,     3,     9,
      34,    49,    63,    64,    65,    35,    37,    67,    68,    20,
      20,    20,    20,    67,    67,    57,    57,    20,    20,    63,
      65,    34,    65,    17,    21,    22,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    36,    10,    17,     6,
       7,     3,     8,    67,    17,    17,    42,    65,    65,    35,
      35,    65,     9,    62,    63,    63,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    15,    58,    34,    17,
      17,    17,    17,    17,    57,    17,    17,    20,    35,    67,
      40,    67,    65,    57,    38,    38,    35,    57,    57,    39,
      37,    17,    58
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
      yychar = YYLEX;
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
/* Line 1792 of yacc.c  */
#line 62 "calc3.y"
    { exit(0); }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 66 "calc3.y"
    { ex((yyvsp[(2) - (2)].nPtr),0,0,0);ResetCount(); freeNode((yyvsp[(2) - (2)].nPtr)); printf("finish\n");}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 71 "calc3.y"
    { (yyval.nPtr) = opr(SEMICOLON, 2, NULL, NULL); }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 72 "calc3.y"
    { (yyval.nPtr) = (yyvsp[(1) - (2)].nPtr); }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 73 "calc3.y"
    { (yyval.nPtr) = opr(PRINT, 1, (yyvsp[(2) - (3)].nPtr)); }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 74 "calc3.y"
    { temp=(yyvsp[(1) - (4)].sIndex);look1(temp); (yyval.nPtr) = opr(EQ, 2, id((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr));  }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 75 "calc3.y"
    { (yyval.nPtr) = opr(WHILE, 2, (yyvsp[(3) - (5)].nPtr), (yyvsp[(5) - (5)].nPtr)); }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 77 "calc3.y"
    { (yyval.nPtr) = opr(IF, 2, (yyvsp[(3) - (5)].nPtr), (yyvsp[(5) - (5)].nPtr)); }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 78 "calc3.y"
    { (yyval.nPtr) = opr(IF, 3, (yyvsp[(3) - (7)].nPtr), (yyvsp[(5) - (7)].nPtr), (yyvsp[(7) - (7)].nPtr)); }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 80 "calc3.y"
    {(yyval.nPtr)=opr(SEMICOLON,2,NULL,NULL);}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 81 "calc3.y"
    { (yyval.nPtr) = (yyvsp[(2) - (3)].nPtr);  }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 82 "calc3.y"
    { (yyval.nPtr) = opr(INT, 1, (yyvsp[(2) - (3)].nPtr));insert(0);}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 83 "calc3.y"
    { printf(" declaration of type integer\n"); (yyval.nPtr) = opr(EQ, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr)); insert(0) ; }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 84 "calc3.y"
    { printf(" declaration of type const integer\n");
			(yyval.nPtr) = opr(CONSTi, 2, id((yyvsp[(3) - (6)].sIndex)),con((yyvsp[(5) - (6)].iValue))); }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 86 "calc3.y"
    { printf(" declaration of type FLOAT\n"); (yyval.nPtr) = opr(FLOAT, 1, (yyvsp[(2) - (3)].nPtr)); }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 87 "calc3.y"
    { printf(" declaration of type integer\n");temp=(yyvsp[(2) - (5)].sIndex);insert(1); (yyval.nPtr) = opr(EQ, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr)); }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 88 "calc3.y"
    { printf(" declaration of type const FLOAT\n");
			(yyval.nPtr) = opr(CONSTf, 2, id(3),con((yyvsp[(5) - (6)].fValue))); }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 90 "calc3.y"
    { printf(" declaration of type CHAR\n");(yyval.nPtr) = opr(CHAR, 1, (yyvsp[(2) - (3)].nPtr)); }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 91 "calc3.y"
    { printf(" declaration of type const CHAR\n");(yyval.nPtr) = opr(CONSTc, 2, id(3),(yyvsp[(5) - (6)].nPtr)); temp=(yyvsp[(3) - (6)].sIndex); insert(2); }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 93 "calc3.y"
    { printf(" declaration of type BOOL\n"); (yyval.nPtr) = opr(BOOLEAN, 1, (yyvsp[(2) - (3)].nPtr)); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 94 "calc3.y"
    { printf(" declaration of type BOOL\n"); (yyval.nPtr) = opr(EQ, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr));temp=(yyvsp[(2) - (5)].sIndex);insert(3); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 95 "calc3.y"
    { printf(" declaration of type const BOOL\n");
			(yyval.nPtr) = opr(CONSTb, 2, id((yyvsp[(3) - (6)].sIndex)),conb(0)); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 97 "calc3.y"
    { printf(" declaration of type const BOOL\n");
			(yyval.nPtr) = opr(CONSTb, 2, id((yyvsp[(3) - (6)].sIndex)),conb(1)); }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 100 "calc3.y"
    {(yyval.nPtr) = opr(FOR, 4, (yyvsp[(3) - (8)].nPtr), (yyvsp[(4) - (8)].nPtr), (yyvsp[(6) - (8)].nPtr), (yyvsp[(8) - (8)].nPtr));}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 103 "calc3.y"
    { (yyval.nPtr) = opr(DO, 2, (yyvsp[(3) - (8)].nPtr), (yyvsp[(7) - (8)].nPtr)); }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 106 "calc3.y"
    { printf(" SWITCH \n") ;(yyval.nPtr) = opr(SWITCH, 3, id((yyvsp[(3) - (10)].sIndex)), (yyvsp[(6) - (10)].nPtr), (yyvsp[(9) - (10)].nPtr));}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 110 "calc3.y"
    {  (yyval.nPtr) = opr(CASE, 2, (yyvsp[(2) - (6)].nPtr), (yyvsp[(4) - (6)].nPtr)); }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 111 "calc3.y"
    {  (yyval.nPtr) = opr(CASE, 3, (yyvsp[(2) - (7)].nPtr), (yyvsp[(4) - (7)].nPtr) , (yyvsp[(7) - (7)].nPtr)); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 116 "calc3.y"
    {scopic++;}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 119 "calc3.y"
    {printf("right");look(scopic);scopic--;}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 125 "calc3.y"
    {  (yyval.nPtr) = opr(EQ, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr));insert(0); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 126 "calc3.y"
    {  (yyval.nPtr) = opr(EQ, 2, id((yyvsp[(2) - (5)].sIndex)), (yyvsp[(4) - (5)].nPtr));insert(1);}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 129 "calc3.y"
    {  (yyval.nPtr) = opr(EQ, 2, id((yyvsp[(1) - (3)].sIndex)), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 134 "calc3.y"
    { (yyval.nPtr) = opr(AND, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 135 "calc3.y"
    { (yyval.nPtr) = opr(OR, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 136 "calc3.y"
    { (yyval.nPtr) = opr(RBRACKET, 1, (yyvsp[(2) - (3)].nPtr));}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 140 "calc3.y"
    { (yyval.nPtr) = opr(LT, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 141 "calc3.y"
    { (yyval.nPtr) = opr(GT, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 142 "calc3.y"
    { (yyval.nPtr) = opr(GE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 143 "calc3.y"
    { (yyval.nPtr) = opr(LE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 144 "calc3.y"
    { (yyval.nPtr) = opr(NE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 145 "calc3.y"
    { (yyval.nPtr) = opr(EQlog, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 149 "calc3.y"
    { (yyval.nPtr) = con((yyvsp[(1) - (1)].iValue)); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 150 "calc3.y"
    {(yyval.nPtr) = id((yyvsp[(1) - (1)].sIndex)); }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 151 "calc3.y"
    { (yyval.nPtr) = opr(UMINUS, 1, (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 152 "calc3.y"
    { (yyval.nPtr) = opr(PLUS, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 153 "calc3.y"
    { (yyval.nPtr) = opr(MINUS, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 154 "calc3.y"
    { (yyval.nPtr) = opr(MULTIPLY, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 155 "calc3.y"
    { (yyval.nPtr) = opr(DIVIDE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 156 "calc3.y"
    { (yyval.nPtr) = (yyvsp[(2) - (3)].nPtr); }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 161 "calc3.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 162 "calc3.y"
    { (yyval.nPtr) = opr(SEMICOLON, 2, (yyvsp[(1) - (2)].nPtr), (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 168 "calc3.y"
    { (yyval.nPtr) = conf((yyvsp[(1) - (1)].fValue)); }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 169 "calc3.y"
    { (yyval.nPtr) = con((yyvsp[(1) - (1)].iValue)); }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 170 "calc3.y"
    { (yyval.nPtr) = conc((yyvsp[(1) - (1)].iValue)); }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 172 "calc3.y"
    { (yyval.nPtr) = conb(0); }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 173 "calc3.y"
    { (yyval.nPtr) = conb(1); }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 174 "calc3.y"
    { (yyval.nPtr) = opr(AND, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 175 "calc3.y"
    { (yyval.nPtr) = opr(OR, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 177 "calc3.y"
    { (yyval.nPtr) = id((yyvsp[(1) - (1)].sIndex)); }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 178 "calc3.y"
    { (yyval.nPtr) = opr(UMINUS, 1, (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 179 "calc3.y"
    { (yyval.nPtr) = opr(PLUS, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 180 "calc3.y"
    { (yyval.nPtr) = opr(MINUS, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 181 "calc3.y"
    { (yyval.nPtr) = opr(MULTIPLY, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 182 "calc3.y"
    { (yyval.nPtr) = opr(DIVIDE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 183 "calc3.y"
    { (yyval.nPtr) = opr(LT, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 184 "calc3.y"
    { (yyval.nPtr) = opr(GT, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 185 "calc3.y"
    { (yyval.nPtr) = opr(GE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 186 "calc3.y"
    { (yyval.nPtr) = opr(LE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 187 "calc3.y"
    { (yyval.nPtr) = opr(NE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 188 "calc3.y"
    { (yyval.nPtr) = opr(EQlog, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 189 "calc3.y"
    { (yyval.nPtr) = (yyvsp[(2) - (3)].nPtr); }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 193 "calc3.y"
    { printf(",VAR"); (yyval.nPtr) = opr(COMMA, 2, id((yyvsp[(1) - (3)].sIndex)), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 194 "calc3.y"
    { printf("VAR"); (yyval.nPtr) = id((yyvsp[(1) - (1)].sIndex));temp=(yyvsp[(1) - (1)].sIndex); }
    break;


/* Line 1792 of yacc.c  */
#line 2148 "y.tab.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 197 "calc3.y"


nodeType *con(int value) {
    nodeType *p;

    /* allocate node */
    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeCon;
    p->con.value = value;
	p->con.name = -1;
	p->con.fvalue =-1;
	p->con.cvalue =-1;
	p->con.bvalue=-1;

    return p;
}
nodeType *conf(float value) {
    nodeType *p;

    /* allocate node */
    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeCon;
    p->con.fvalue = value;
	p->con.name = -1;
	p->con.value =-1;
	p->con.cvalue =-1;
	p->con.bvalue=-1;

    return p;
}
nodeType *conc(char value) {
    nodeType *p;

    /* allocate node */
    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeCon;
    p->con.cvalue = value;
	p->con.name = -1;
	p->con.fvalue =-1;
	p->con.value =-1;
	p->con.bvalue=-1;

    return p;
}
nodeType *conb(int value) {
    nodeType *p;

    /* allocate node */
    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeCon;
    p->con.cvalue = -1;
	p->con.name = -1;
	p->con.fvalue =-1;
	p->con.value =-1;
	p->con.bvalue=value;

    return p;
}
nodeType *id(int i) {
    nodeType *p;

    /* allocate node */
    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeId;
    p->id.i = i;

    return p;
}

nodeType *opr(int oper, int nops, ...) {
    va_list ap;
    nodeType *p;
    int i;

    /* allocate node, extending op array */
    if ((p = malloc(sizeof(nodeType) + (nops-1) * sizeof(nodeType *))) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeOpr;
    p->opr.oper = oper;
    p->opr.nops = nops;
    va_start(ap, nops);
    for (i = 0; i < nops; i++)
        p->opr.op[i] = va_arg(ap, nodeType*);
    va_end(ap);
    return p;
}

/*void freeNode(nodeType *p) {
    int i;

    if (!p) return;
    if (p->type == typeOpr) {
        for (i = 0; i < p->opr.nops; i++)
            freeNode(p->opr.op[i]);
    }
    free (p);
}*/

void freeNode(nodeType *p) {
    int i;
//   printf("freeing1\n");
    if (!p) return;
//	printf("freeing2\n");	
    if (p->type == typeOpr) {
	
//	printf("freeing3\n");
        for (i = 0; i < p->opr.nops-1; i++)
		{
//		    printf("freeing4\n");
            freeNode(p->opr.op[i]);
//			printf("freeing5\n");
		}
    }
//	printf("freeing6\n");

    free (p);
//	printf("freeing end\n");
}

void yyerror(char *s) {
    fprintf(stdout, "%s\n", s);
	
	error_flag=1;
}

int main(void) {
    yyparse();
	
	if(error_flag==0)
for(j=0;j<100;j++)
{
if(type[j]==0)
printf(" INT - ");
if(type[j]==1)
printf(" FLOAT - ");
if(type[j]==2)
printf(" DOUBLE - ");
if(type[j]==3)
printf(" CHAR - ");
printf(" %s\n",symbol[j]);
}

	
	
    return 0;
}
void insert(int type1)
{
isdeclared=0;
printf("%d",temp);
printf("%d",type1);
for(j=0;j<26;j++)
{
	if(temp==symbol[j])
	{
		isdeclared=1;
		
		printf("REDECLARATION OF %d\n",temp);
		return;
	
 }
	
}
if(isdeclared==0)
{
for(i=0;i<26;i++)
if(symbol[i]==-1)
{

symbol[i]=temp;
type[i]=type1;
agdeed[i]=scopic;
break;
}

}
}
void look(int scopic1)
{

for(i=0;i<26;i++)
if(agdeed[i]==scopic1)
{
symbol[i]=-1;
agdeed[i]=-1;
}


}
void look1(int tempvar)
{

for(i=0;i<26;i++)
{
	if(tempvar==symbol[i])
	{
		isdeclared=1;
		return;
		
	}
}
printf("UNDECLARED %d\n",tempvar);

}
