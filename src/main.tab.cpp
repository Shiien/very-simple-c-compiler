/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "src/main.y" /* yacc.c:339  */

  #include "common.h"
  Symbol::ValueType currentType = Symbol::VALUE_NONE;

  int yylex();
  int yyerror( char const* );

#line 74 "src/main.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "main.tab.h".  */
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
#line 10 "src/main.y" /* yacc.c:355  */

  string *value;
  Symbol *symbol;
  TreeNode *node;

#line 190 "src/main.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_MAIN_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 207 "src/main.tab.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  64
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   372

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  176

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   324

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    83,    83,    88,    92,    97,   100,   105,   110,   113,
     116,   121,   124,   127,   130,   133,   136,   139,   142,   147,
     155,   161,   166,   171,   176,   181,   187,   192,   197,   198,
     199,   200,   201,   202,   205,   208,   214,   218,   223,   234,
     238,   241,   244,   248,   253,   256,   259,   262,   265,   268,
     271,   274,   277,   280,   283,   286,   291,   294,   297,   302,
     305,   308,   311,   314,   317,   320,   325,   328,   331,   334,
     337,   340,   343,   346,   351,   354,   357,   360,   365,   368,
     371,   376,   379,   382,   387,   390,   393,   396,   401,   404,
     409,   417
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_CHAR", "T_INT", "T_DOUBLE", "T_VOID",
  "T_STRING", "T_BOOL", "K_BREAK", "K_CASE", "K_CONTINUE", "K_DEFAULT",
  "K_DO", "K_ELSE", "K_FOR", "K_GOTO", "K_IF", "K_RET", "K_SWITCH",
  "K_WHILE", "K_OUTPUT", "LP", "RP", "INC", "DEC", "SIZEOF", "NOT", "BREV",
  "LSHFT", "RSHFT", "MUL", "DIV", "MOD", "ADD", "SUB", "BAND", "BXOR",
  "BOR", "LESS", "LESSEQ", "MORE", "MOREEQ", "EQ", "NE", "LAND", "LOR",
  "QM", "COLON", "LSHFTAS", "RSHFTAS", "MULAS", "DIVAS", "MODAS", "ADDAS",
  "SUBAS", "BANDAS", "BXORAS", "BORAS", "ASSIGN", "COMMA", "SEMICOLON",
  "LABEL", "SYMBOL", "IDENTIFIER", "LB", "RB", "IFX", "UMINUS", "UADD",
  "$accept", "start", "program", "program_empty", "lb_scope", "statement",
  "function_declaration_statement", "output_statement", "if_condition",
  "if_else_condition", "for_statement", "while_statement",
  "do_while_statement", "return_statement", "declaration", "type",
  "id_list", "id_pair", "id_prefix", "bool_expression", "expression",
  "assignment", "logical", "comparative", "additive", "multiplicative",
  "bitshift", "bitbinary", "postfix", "cast", "node", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324
};
# endif

#define YYPACT_NINF -60

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-60)))

#define YYTABLE_NINF -7

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     307,   -60,   -60,   -60,   -60,   -60,   -60,   -59,     1,    15,
      33,    18,    26,    33,    63,    63,    11,    11,    11,    11,
     -33,   -60,   -60,   -60,    17,   171,   307,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,    25,    28,    10,   -60,
      59,    68,   122,   -17,   111,   -60,   -60,   -60,   295,   307,
      33,    33,    21,    33,    33,    -4,   -60,   -60,   -60,   -60,
     -60,   -17,   -17,   -60,   -60,   -60,   205,   -60,    67,    35,
     -60,    69,    33,    33,   -60,    33,    33,    33,    33,    33,
      33,    33,    33,    11,    11,    11,    11,    11,    11,    11,
      11,    11,    11,    33,    33,    33,    33,    33,    33,    33,
      33,    33,    33,    33,    48,    30,   115,     2,   -60,   119,
      -1,   -60,   -60,   121,    97,    33,     5,   -60,    68,    68,
     122,   122,   122,   122,   122,   122,   -17,   -17,   -17,   -17,
     -17,   111,   111,   111,   -60,   -60,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,   -60,   149,    33,   307,
     307,   109,   -59,   -60,   -60,   150,   -60,   158,   120,   168,
     -60,   -60,   239,    33,    33,   307,   273,   117,   162,    71,
     -60,   -60,   126,   307,   -60,   -60
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      43,    30,    28,    32,    33,    31,    29,     0,     0,     0,
      43,     0,     0,    43,     0,     0,     0,     0,     0,     0,
       0,    91,    90,     7,     0,    43,    43,     4,    17,    18,
      13,    12,    14,    15,    16,    11,     0,     0,     0,    40,
      44,    56,    59,    66,    74,    78,    81,    84,    89,    43,
      43,    43,     0,    43,    43,     0,    85,    89,    86,    82,
      83,    72,    73,    87,     1,     3,    43,     9,    38,    27,
      34,    37,    43,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,    26,     0,
       0,    88,    10,     0,     0,    43,     0,    42,    57,    58,
      60,    61,    62,    63,    64,    65,    67,    68,    69,    70,
      71,    75,    76,    77,    79,    80,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     0,    43,    43,
      43,     0,     0,    38,    35,    36,    41,     0,     0,    21,
      24,    20,    43,    43,    43,    43,    43,     0,     0,     0,
      22,    19,     0,    43,    25,    23
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -60,   -60,   -19,   -60,    -5,   -20,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,    80,   -60,   -50,
      -9,   -39,    23,    76,    55,    -7,    12,    -8,   153,   -60,
       0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,   167,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    69,    70,    71,   106,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      57
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,    52,    49,   109,    55,    65,    23,    66,    59,    60,
      48,    61,    62,    48,    88,    89,    90,    64,    72,   111,
      63,    72,   151,    50,    72,    48,    48,    72,   156,   104,
      21,    22,    72,    13,   117,    14,    15,    51,    16,    17,
      53,   105,   107,    72,   107,   110,    65,    20,    54,    48,
      48,    48,    72,    48,    48,    13,    73,    14,    15,    73,
      16,    17,    73,   116,   146,    73,    48,    18,    19,    20,
      73,    74,    48,    48,    21,    22,   126,   127,   128,   129,
     130,    73,   108,   134,   135,    13,    67,    14,    15,   113,
      73,   148,    68,    72,   173,   114,    21,    22,   158,    20,
     131,   132,   133,    48,    75,    76,   155,    77,    78,    79,
      80,    81,    82,   168,   147,    48,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,    21,    22,   115,   159,
     160,    73,   120,   121,   122,   123,   124,   125,   149,   107,
      91,    92,   150,   166,   152,   170,    65,   162,    48,    48,
      48,   118,   119,   175,   107,   169,    83,    84,    85,    86,
      87,   153,    48,    48,    48,    48,    48,    56,    58,   157,
     161,    -2,    72,    48,     1,     2,     3,     4,     5,     6,
     163,   164,   165,   171,     7,   172,     8,   174,     9,    10,
       0,    11,    12,    13,   154,    14,    15,     0,    16,    17,
       0,     0,     0,     0,     0,    18,    19,    20,     1,     2,
       3,     4,     5,     6,     0,     0,     0,     0,     7,     0,
       8,     0,     9,    10,     0,    11,    12,    13,     0,    14,
      15,     0,    16,    17,    21,    22,    23,     0,     0,    18,
      19,    20,     1,     2,     3,     4,     5,     6,     0,     0,
       0,     0,     7,     0,     8,     0,     9,    10,     0,    11,
      12,    13,     0,    14,    15,     0,    16,    17,    21,    22,
      23,   112,     0,    18,    19,    20,     1,     2,     3,     4,
       5,     6,     0,     0,     0,     0,     7,     0,     8,     0,
       9,    10,     0,    11,    12,    13,     0,    14,    15,     0,
      16,    17,    21,    22,    23,    -6,     0,    18,    19,    20,
       1,     2,     3,     4,     5,     6,     0,     0,     0,     0,
       7,     0,     8,     0,     9,    10,     0,    11,    12,    13,
       0,    14,    15,     0,    16,    17,    21,    22,    23,    -5,
       0,    18,    19,    20,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,    22,    23
};

static const yytype_int16 yycheck[] =
{
       0,    10,     7,    53,    13,    25,    65,    26,    16,    17,
      10,    18,    19,    13,    31,    32,    33,     0,    22,    23,
      20,    22,    23,    22,    22,    25,    26,    22,    23,    49,
      63,    64,    22,    22,    73,    24,    25,    22,    27,    28,
      22,    50,    51,    22,    53,    54,    66,    36,    22,    49,
      50,    51,    22,    53,    54,    22,    60,    24,    25,    60,
      27,    28,    60,    72,   103,    60,    66,    34,    35,    36,
      60,    61,    72,    73,    63,    64,    83,    84,    85,    86,
      87,    60,    61,    91,    92,    22,    61,    24,    25,    22,
      60,    61,    64,    22,    23,    60,    63,    64,   148,    36,
      88,    89,    90,   103,    45,    46,   115,    39,    40,    41,
      42,    43,    44,   163,    66,   115,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,    63,    64,    59,   149,
     150,    60,    77,    78,    79,    80,    81,    82,    23,   148,
      29,    30,    23,   162,    23,   165,   166,   152,   148,   149,
     150,    75,    76,   173,   163,   164,    34,    35,    36,    37,
      38,    64,   162,   163,   164,   165,   166,    14,    15,    20,
      61,     0,    22,   173,     3,     4,     5,     6,     7,     8,
      22,    61,    14,    66,    13,    23,    15,    61,    17,    18,
      -1,    20,    21,    22,   114,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    -1,
      15,    -1,    17,    18,    -1,    20,    21,    22,    -1,    24,
      25,    -1,    27,    28,    63,    64,    65,    -1,    -1,    34,
      35,    36,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    13,    -1,    15,    -1,    17,    18,    -1,    20,
      21,    22,    -1,    24,    25,    -1,    27,    28,    63,    64,
      65,    66,    -1,    34,    35,    36,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    -1,    15,    -1,
      17,    18,    -1,    20,    21,    22,    -1,    24,    25,    -1,
      27,    28,    63,    64,    65,    66,    -1,    34,    35,    36,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      13,    -1,    15,    -1,    17,    18,    -1,    20,    21,    22,
      -1,    24,    25,    -1,    27,    28,    63,    64,    65,    66,
      -1,    34,    35,    36,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    13,    15,    17,
      18,    20,    21,    22,    24,    25,    27,    28,    34,    35,
      36,    63,    64,    65,    71,    72,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    74,
      22,    22,    90,    22,    22,    90,    98,   100,    98,    97,
      97,    95,    95,   100,     0,    75,    72,    61,    64,    86,
      87,    88,    22,    60,    61,    45,    46,    39,    40,    41,
      42,    43,    44,    34,    35,    36,    37,    38,    31,    32,
      33,    29,    30,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    75,    90,    89,    90,    61,    89,
      90,    23,    66,    22,    60,    59,    90,    91,    93,    93,
      94,    94,    94,    94,    94,    94,    95,    95,    95,    95,
      95,    96,    96,    96,    97,    97,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    91,    66,    61,    23,
      23,    23,    23,    64,    87,    90,    23,    20,    89,    75,
      75,    61,    74,    22,    61,    14,    72,    73,    89,    90,
      75,    66,    23,    23,    61,    75
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    72,    72,    73,    73,    74,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    85,
      85,    85,    85,    85,    86,    86,    87,    87,    88,    89,
      90,    90,    90,    90,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    92,    92,    92,    93,
      93,    93,    93,    93,    93,    93,    94,    94,    94,    94,
      94,    94,    94,    94,    95,    95,    95,    95,    96,    96,
      96,    97,    97,    97,    98,    98,    98,    98,    99,    99,
     100,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     0,     1,     2,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     7,
       5,     5,     7,     9,     5,     9,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     4,     3,     0,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     3,     2,     2,     1,     3,     3,     3,     1,     3,
       3,     1,     2,     2,     1,     2,     2,     2,     3,     1,
       1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
        case 2:
#line 83 "src/main.y" /* yacc.c:1646  */
    {
    root = (yyvsp[0].node);
  }
#line 1459 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 88 "src/main.y" /* yacc.c:1646  */
    {
    ((yyvsp[-1].node)) -> addSibling((yyvsp[0].node));
    (yyval.node) = (yyvsp[-1].node);
  }
#line 1468 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 92 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
  }
#line 1476 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 97 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
  }
#line 1484 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 100 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new EmptyNode(lineno);
  }
#line 1492 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 105 "src/main.y" /* yacc.c:1646  */
    {
    scope->pushScope(); 
  }
#line 1500 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 110 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
  }
#line 1508 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 113 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
  }
#line 1516 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 116 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new StatementNode(lineno, StatementNode::ST_SCOPE);
    (yyval.node) -> addChild((yyvsp[-1].node));
    scope->popScope();
  }
#line 1526 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 121 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
  }
#line 1534 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 124 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
  }
#line 1542 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 127 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
  }
#line 1550 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 130 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
  }
#line 1558 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 133 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
  }
#line 1566 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 136 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
  }
#line 1574 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 139 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
  }
#line 1582 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 142 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
  }
#line 1590 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 147 "src/main.y" /* yacc.c:1646  */
    {
    Callable* symbol = new Callable(currentType, *(yyvsp[-5].value));
    scope->insertSymbol(*(yyvsp[-5].value), lineno, symbol);
    currFunc = symbol;
    (yyval.node) = new FuncStatementNode(lineno, symbol, {(yyvsp[-1].node)});
  }
#line 1601 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 155 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new StatementNode(lineno, StatementNode::ST_OUTPUT, {(yyvsp[-2].node)});
  }
#line 1609 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 161 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new StatementNode(lineno, StatementNode::ST_IF, {(yyvsp[-2].node), (yyvsp[0].node)});
  }
#line 1617 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 166 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new StatementNode(lineno, StatementNode::ST_IF_ELSE, {(yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)});
  }
#line 1625 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 171 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new StatementNode(lineno, StatementNode::ST_FOR, {(yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)});
  }
#line 1633 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 176 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new StatementNode(lineno, StatementNode::ST_WHILE, {(yyvsp[-2].node), (yyvsp[0].node)});
  }
#line 1641 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 181 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new StatementNode(lineno, StatementNode::ST_DO_WHILE, {(yyvsp[-6].node), (yyvsp[-2].node)});
    scope->popScope();
  }
#line 1650 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 187 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new StatementNode(lineno, StatementNode::ST_RET, {(yyvsp[-1].node)});
  }
#line 1658 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 192 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
  }
#line 1666 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 197 "src/main.y" /* yacc.c:1646  */
    { currentType = Symbol::VALUE_INT; }
#line 1672 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 198 "src/main.y" /* yacc.c:1646  */
    {currentType = Symbol::VALUE_BOOL;}
#line 1678 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 199 "src/main.y" /* yacc.c:1646  */
    { currentType = Symbol::VALUE_CHAR; }
#line 1684 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 200 "src/main.y" /* yacc.c:1646  */
    { currentType = Symbol::VALUE_STRING; }
#line 1690 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 201 "src/main.y" /* yacc.c:1646  */
    { currentType = Symbol::VALUE_DOUBLE; }
#line 1696 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 202 "src/main.y" /* yacc.c:1646  */
    { currentType = Symbol::VALUE_VOID; }
#line 1702 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 205 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
  }
#line 1710 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 208 "src/main.y" /* yacc.c:1646  */
    {
    (yyvsp[-2].node) -> addSibling((yyvsp[0].node));
    (yyval.node) = (yyvsp[-2].node);
  }
#line 1719 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 214 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new DeclarationNode(lineno, (yyvsp[-2].symbol));
    (yyval.node) -> addChild((yyvsp[0].node));
  }
#line 1728 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 218 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new DeclarationNode(lineno, (yyvsp[0].symbol));
  }
#line 1736 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 223 "src/main.y" /* yacc.c:1646  */
    {
    Symbol* symbol = new Variable(currentType, *(yyvsp[0].value));
    bool ok = scope->insertSymbol(*(yyvsp[0].value), lineno, symbol);
    if (!ok)  {
      cerr << "Line " << lineno << ": symbol " << *(yyvsp[0].value) << " has already been declared." << endl;
      return -1;
    }
    (yyval.symbol) = symbol;
  }
#line 1750 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 234 "src/main.y" /* yacc.c:1646  */
    {
      (yyval.node) = new OperatorNode(lineno,OperatorNode::OP_BOOL,{(yyvsp[0].node)});
  }
#line 1758 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 238 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
  }
#line 1766 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 241 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new FuncCallNode(lineno, (yyvsp[-3].node)->symbol, {(yyvsp[-1].node)});
  }
#line 1774 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 244 "src/main.y" /* yacc.c:1646  */
    {
    (yyvsp[-2].node) -> addSibling((yyvsp[0].node));
    (yyval.node) = (yyvsp[-2].node);
  }
#line 1783 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 248 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new EmptyNode(lineno);
  }
#line 1791 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 253 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
  }
#line 1799 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 256 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_LSHFTAS, {(yyvsp[0].node), (yyvsp[-2].node)});
  }
#line 1807 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 259 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_RSHFTAS, {(yyvsp[0].node), (yyvsp[-2].node)});
  }
#line 1815 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 262 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_MULAS, {(yyvsp[0].node), (yyvsp[-2].node)});
  }
#line 1823 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 265 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_DIVAS, {(yyvsp[0].node), (yyvsp[-2].node)});
  }
#line 1831 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 268 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_MODAS, {(yyvsp[0].node), (yyvsp[-2].node)});
  }
#line 1839 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 271 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_ADDAS, {(yyvsp[0].node), (yyvsp[-2].node)});
  }
#line 1847 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 274 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_ADDAS, {(yyvsp[0].node), (yyvsp[-2].node)});
  }
#line 1855 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 277 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_BANDAS, {(yyvsp[0].node), (yyvsp[-2].node)});
  }
#line 1863 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 280 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_BXORAS, {(yyvsp[0].node), (yyvsp[-2].node)});
  }
#line 1871 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 283 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_BORAS, {(yyvsp[0].node), (yyvsp[-2].node)});
  }
#line 1879 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 286 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_ASSIGN, {(yyvsp[0].node), (yyvsp[-2].node)});
  }
#line 1887 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 291 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
  }
#line 1895 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 294 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_LAND, {(yyvsp[-2].node), (yyvsp[0].node)});
  }
#line 1903 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 297 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_LOR, {(yyvsp[-2].node), (yyvsp[0].node)});
  }
#line 1911 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 302 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
  }
#line 1919 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 305 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_LESS, {(yyvsp[-2].node), (yyvsp[0].node)});
  }
#line 1927 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 308 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_LESSEQ, {(yyvsp[-2].node), (yyvsp[0].node)});
  }
#line 1935 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 311 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_MORE, {(yyvsp[-2].node), (yyvsp[0].node)});
  }
#line 1943 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 314 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_MOREEQ, {(yyvsp[-2].node), (yyvsp[0].node)});
  }
#line 1951 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 317 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_EQ, {(yyvsp[-2].node), (yyvsp[0].node)});
  }
#line 1959 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 320 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_NE, {(yyvsp[-2].node), (yyvsp[0].node)});
  }
#line 1967 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 325 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
  }
#line 1975 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 328 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_ADD, {(yyvsp[-2].node), (yyvsp[0].node)});
  }
#line 1983 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 331 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_SUB, {(yyvsp[-2].node), (yyvsp[0].node)});
  }
#line 1991 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 334 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_BAND, {(yyvsp[-2].node), (yyvsp[0].node)});
  }
#line 1999 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 337 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_BXOR, {(yyvsp[-2].node), (yyvsp[0].node)});
  }
#line 2007 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 340 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_BOR, {(yyvsp[-2].node), (yyvsp[0].node)});
  }
#line 2015 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 343 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_ADD, {(yyvsp[0].node)});
  }
#line 2023 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 346 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_SUB, {(yyvsp[0].node)});
  }
#line 2031 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 351 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
  }
#line 2039 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 354 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_MUL, {(yyvsp[-2].node), (yyvsp[0].node)});
  }
#line 2047 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 357 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_DIV, {(yyvsp[-2].node), (yyvsp[0].node)});
  }
#line 2055 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 360 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_MOD, {(yyvsp[-2].node), (yyvsp[0].node)});
  }
#line 2063 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 365 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
  }
#line 2071 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 368 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_LSHFT, {(yyvsp[-2].node), (yyvsp[0].node)});
  }
#line 2079 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 371 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_RSHFT, {(yyvsp[-2].node), (yyvsp[0].node)});
  }
#line 2087 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 376 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
  }
#line 2095 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 379 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_NOT, {(yyvsp[0].node)});
  }
#line 2103 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 382 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_BREV, {(yyvsp[0].node)});
  }
#line 2111 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 387 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
  }
#line 2119 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 390 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_INC, {(yyvsp[0].node)});
  }
#line 2127 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 393 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_DEC, {(yyvsp[0].node)});
  }
#line 2135 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 396 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new OperatorNode(lineno, OperatorNode::OP_TADDR, {(yyvsp[0].node)});
  }
#line 2143 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 401 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
  }
#line 2151 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 404 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
  }
#line 2159 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 409 "src/main.y" /* yacc.c:1646  */
    {
    auto symbol = scope->findSymbol(*(yyvsp[0].value));
    if (symbol == nullptr) {
      std::cerr << "Line " << lineno << ": symbol " << *(yyvsp[0].value) << " is not defined." << endl;
      return -1;
    }
    (yyval.node) = new ExprNode(lineno, symbol);
  }
#line 2172 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 417 "src/main.y" /* yacc.c:1646  */
    {
    (yyval.node) = new ExprNode(lineno, (yyvsp[0].symbol));
  }
#line 2180 "src/main.tab.cpp" /* yacc.c:1646  */
    break;


#line 2184 "src/main.tab.cpp" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
  return yyresult;
}
#line 422 "src/main.y" /* yacc.c:1906  */


int yyerror(char const* message)
{
  cout << message << " at line " << lineno << endl;
  return -1;
}
