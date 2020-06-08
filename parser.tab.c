/* A Bison parser, made by GNU Bison 3.5.3.  */

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
#define YYBISON_VERSION "3.5.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  // Declare stuff from Flex that Bison needs to know about:
  extern int yylex();
  extern int yyparse();
  extern FILE *yyin;
 
  void yyerror(const char *s);




#line 86 "parser.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 18 "parser.y"


#include "expression.h"
struct Array variables;

#line 135 "parser.tab.c"

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FALSE = 258,
    NONE = 259,
    TRUE = 260,
    AND = 261,
    AS = 262,
    ASSERT = 263,
    BREAK = 264,
    CLASS = 265,
    CONTINUE = 266,
    DEF = 267,
    DEL = 268,
    ELIF = 269,
    ELSE = 270,
    EXCEPT = 271,
    FINALLY = 272,
    FOR = 273,
    FROM = 274,
    GLOBAL = 275,
    IF = 276,
    IMPORT = 277,
    COMMA = 278,
    DOT = 279,
    COL = 280,
    IN = 281,
    IS = 282,
    LAMBDA = 283,
    NOT = 284,
    OR = 285,
    COLON = 286,
    PASS = 287,
    RAISE = 288,
    RETURN = 289,
    TRY = 290,
    WHILE = 291,
    WITH = 292,
    YIELD = 293,
    PRINT = 294,
    EXEC = 295,
    INC = 296,
    DEC = 297,
    EQUAL = 298,
    LPAR = 299,
    RPAR = 300,
    LESS_THAN_OP = 301,
    GREATER_THAN_OP = 302,
    MINUS = 303,
    AND_EXP = 304,
    NEWLINE = 305,
    LBRA = 306,
    RBRA = 307,
    PAPAKI = 308,
    QUOTATION = 309,
    APOSTROPHE = 310,
    ELLIPSIS = 311,
    RIGHT_ASSIGN = 312,
    LEFT_ASSIGN = 313,
    ADD_ASSIGN = 314,
    EXA = 315,
    SUB_ASSIGN = 316,
    MUL_ASSIGN = 317,
    POW_ASSIGN = 318,
    DIV_ASSIGN = 319,
    MOD_ASSIGN = 320,
    AND_ASSIGN = 321,
    PERCENT = 322,
    OR_SIGN = 323,
    IMAGNUMBER = 324,
    XOR_ASSIGN = 325,
    OR_ASSIGN = 326,
    RIGHT_OP = 327,
    LEFT_OP = 328,
    PTR_OP = 329,
    LE_OP = 330,
    GE_OP = 331,
    EQ_OP = 332,
    NE_OP = 333,
    STAR = 334,
    DOUBLESTAR = 335,
    SLASH = 336,
    DOUBLESLASH = 337,
    RANGE = 338,
    LR_OP = 339,
    PLUS = 340,
    XOR = 341,
    NOT_SIGN = 342,
    DECINTEGER = 343,
    OCTINTEGER = 344,
    HEXINTEGER = 345,
    POINTFLOAT = 346,
    EXPONENTFLOAT = 347,
    IDENTIFIER = 348,
    SHORTSTRING = 349,
    LONGSTRING = 350
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "parser.y"

    struct Variable nval;
   

#line 247 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */



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
#define YYFINAL  94
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1271

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  207
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  355

#define YYUNDEFTOK  2
#define YYMAXUTOK   350


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    97,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    96,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    75,    75,    79,    81,    84,    85,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,   102,   103,   105,
     106,   107,   108,   112,   113,   118,   119,   124,   125,   127,
     128,   129,   130,   140,   142,   143,   148,   150,   152,   154,
     156,   158,   161,   162,   163,   164,   165,   168,   170,   172,
     174,   175,   181,   183,   187,   189,   191,   193,   194,   197,
     199,   200,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   221,   222,   223,   226,   227,   228,   229,
     230,   231,   234,   235,   236,   237,   238,   239,   240,   243,
     244,   245,   246,   247,   248,   254,   256,   258,   259,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   287,   288,   291,   292,
     293,   296,   297,   299,   300,   301,   302,   306,   307,   308,
     309,   311,   318,   319,   320,   321,   324,   325,   329,   330,
     331,   334,   335,   336,   339,   340,   345,   346,   347,   348,
     351,   352,   355,   356,   359,   360,   363,   364,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   379,   380,
     383,   384,   387,   388,   389,   390,   393,   394,   397,   398,
     401,   406,   407,   410,   411,   414,   419,   420,   423,   424,
     425,   426,   429,   430,   433,   437,   441,   443,   448,   450,
     455,   457,   463,   465,   467,   472,   474,   478
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FALSE", "NONE", "TRUE", "AND", "AS",
  "ASSERT", "BREAK", "CLASS", "CONTINUE", "DEF", "DEL", "ELIF", "ELSE",
  "EXCEPT", "FINALLY", "FOR", "FROM", "GLOBAL", "IF", "IMPORT", "COMMA",
  "DOT", "COL", "IN", "IS", "LAMBDA", "NOT", "OR", "COLON", "PASS",
  "RAISE", "RETURN", "TRY", "WHILE", "WITH", "YIELD", "PRINT", "EXEC",
  "INC", "DEC", "EQUAL", "LPAR", "RPAR", "LESS_THAN_OP", "GREATER_THAN_OP",
  "MINUS", "AND_EXP", "NEWLINE", "LBRA", "RBRA", "PAPAKI", "QUOTATION",
  "APOSTROPHE", "ELLIPSIS", "RIGHT_ASSIGN", "LEFT_ASSIGN", "ADD_ASSIGN",
  "EXA", "SUB_ASSIGN", "MUL_ASSIGN", "POW_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "AND_ASSIGN", "PERCENT", "OR_SIGN", "IMAGNUMBER",
  "XOR_ASSIGN", "OR_ASSIGN", "RIGHT_OP", "LEFT_OP", "PTR_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "STAR", "DOUBLESTAR", "SLASH", "DOUBLESLASH",
  "RANGE", "LR_OP", "PLUS", "XOR", "NOT_SIGN", "DECINTEGER", "OCTINTEGER",
  "HEXINTEGER", "POINTFLOAT", "EXPONENTFLOAT", "IDENTIFIER", "SHORTSTRING",
  "LONGSTRING", "'l'", "'L'", "$accept", "start", "program",
  "statement_list", "statement", "return_stmt", "call", "primary",
  "lambda_form", "print_stmt", "expression_list", "expression", "atom",
  "assignment_stmt", "assignment_stmt_targer_list", "target_list",
  "target", "assignment_op", "arithmetic_op", "comparison_op",
  "logical_op", "bitwise_op", "literal", "import_stmt", "module",
  "relative_module", "dots", "modules", "import_stmt_identifiers", "name",
  "if_stmt", "elif_stmt", "for_stmt", "for_target_list", "for_target",
  "funcdef", "decorators", "decorator", "dotted_name", "dot_identifiers",
  "parameter_list", "defparameter", "defparameters", "sublist",
  "parameter", "parameters", "funcname", "classdef", "inheritance",
  "classname", "dict_display", "key_datum_list", "key_datums", "key_datum",
  "identifier", "attr_identifier", "stringliteral", "longinteger",
  "integer", "floatnumber", "imagnumber", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   108,    76
};
# endif

#define YYPACT_NINF (-237)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-197)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     486,   -57,   -57,   -12,    -6,  1116,    -7,    49,  1124,    96,
      28,   -57,   129,   162,  -237,   486,  -237,  -237,  -237,   175,
    -237,  -237,  -237,  1176,     1,  -237,  -237,  -237,  -237,  -237,
      13,  -237,  -237,    75,    -2,  -237,   192,  -237,   182,  -237,
     -12,   141,  -237,  -237,  -237,   173,   218,    -5,  -237,  1116,
    1039,  -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,   538,
    -237,  -237,  -237,   209,   224,  -237,  -237,   149,  -237,  -237,
     -57,   126,    22,  1116,    33,   -57,   -57,   216,   228,    58,
     213,  -237,  1124,   229,  1000,  1124,  1124,   229,   622,     3,
    -237,   224,   178,   230,  -237,  -237,  1048,  1176,  -237,   229,
     170,   159,   168,    28,  -237,   -57,  -237,   -57,   -57,   486,
    1056,   227,    18,    10,    28,   298,   -57,    52,  -237,   173,
     685,  -237,   748,   212,   238,  -237,  -237,   239,   241,  -237,
     486,  -237,  -237,  1116,  -237,  -237,  -237,  -237,  -237,  -237,
    -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,
    -237,  -237,  -237,  -237,  1116,  -237,  1116,  -237,  1116,  -237,
    -237,  1116,  1116,  1116,  1116,  1116,  -237,  -237,   151,   180,
     180,   -57,   248,  1000,   232,   249,   251,  -237,  1116,    79,
     -57,   -57,   252,  1116,   255,   685,  1116,   235,    -2,   229,
     622,  -237,   236,  -237,   -57,   260,  -237,    11,   224,  -237,
    -237,   242,   243,   209,   224,  -237,   486,  -237,    14,   486,
     257,   244,  -237,  -237,   246,    12,  -237,   -57,  -237,   116,
    -237,  1116,  -237,  1116,   268,  -237,  -237,    39,  1000,  1000,
    1000,  1000,  1000,  1000,  1000,  1000,  1000,   180,  -237,  -237,
     271,   211,   -57,  -237,    33,   273,   219,  1000,   275,  -237,
     179,  1000,  1116,  1000,  -237,   253,  -237,   -57,  -237,    55,
    1108,  -237,   486,   486,   270,  1124,   486,    45,   180,   -57,
     281,  1000,  -237,  1116,  1116,   276,   223,  -237,   248,   180,
     208,  -237,    33,   -57,   226,   811,  -237,  -237,   277,   264,
    -237,    99,   486,   486,   104,   186,   180,    -4,  -237,   118,
     287,   304,   -57,  -237,   874,   486,  1116,   282,   153,   180,
    -237,  -237,   -57,  -237,   486,   285,  -237,   486,   288,   289,
     134,  -237,    20,  -237,   281,   180,   314,   486,   486,   937,
     486,  -237,  -237,   486,   486,   486,   486,    50,  -237,   150,
    -237,  -237,   180,   486,   486,   486,   486,   486,   486,  -237,
      61,  -237,  -237,   486,  -237
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     0,     0,     0,     0,    17,    27,
       0,     0,   195,     0,     2,     4,     6,    15,    14,     0,
      16,    11,     8,     0,     0,    56,     7,     9,    10,    12,
       0,   150,    13,   196,    60,   195,     0,   185,     0,   180,
       0,     0,   141,   144,   121,   118,     0,   120,   117,     0,
       0,   207,   202,   203,   204,   205,   206,   198,   199,     0,
      36,    47,    51,    48,    50,    96,    97,    49,    95,    98,
       0,    99,     0,     0,     0,     0,     0,     0,   161,     0,
     168,   176,     0,    18,    35,     0,     0,    29,    28,     0,
     196,    60,     0,   154,     1,     5,     0,     0,    53,    52,
       0,    48,    50,    58,    54,     0,   151,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,   122,   119,
       0,   186,     0,     0,   188,    82,    86,    85,    83,    84,
       0,    79,    78,     0,    89,    71,    72,    62,    63,    64,
      65,    66,    67,    68,    73,    90,    69,    70,    94,    93,
      80,    81,    76,    77,     0,    74,     0,    75,     0,    91,
      92,     0,     0,     0,     0,     0,   200,   201,   125,     0,
       0,     0,   101,    25,     0,   172,   158,   160,     0,   170,
       0,     0,   166,     0,     0,    35,     0,     0,    50,    31,
      30,    61,     0,   152,     0,   155,    19,     0,    50,    55,
      57,     0,     0,    23,    24,   197,   181,   183,     0,     0,
       0,     0,   145,   142,     0,     0,   116,     0,   115,   103,
      37,     0,   187,   189,   190,    87,    88,   132,    39,    41,
      40,    38,    42,    43,    44,    45,    46,     0,   131,   100,
       0,   125,     0,   177,   173,   174,     0,    26,   163,   165,
     171,   169,     0,    33,    32,     0,   156,     0,    20,     0,
       0,   184,   182,     0,     0,     0,     0,     0,     0,     0,
     105,   194,   192,   191,     0,     0,   134,   126,   102,     0,
     123,   178,   175,     0,     0,    33,   153,   157,     0,     0,
      21,     0,   146,     0,     0,   138,     0,     0,   107,     0,
     104,   127,     0,   193,     0,     0,     0,     0,   126,     0,
     179,   159,     0,    34,     0,     0,    22,   148,     0,     0,
       0,   111,     0,   109,   106,     0,   129,     0,   133,     0,
       0,   124,   164,   147,     0,     0,     0,     0,   108,     0,
     113,   128,     0,   136,     0,   135,   149,   139,   140,   112,
       0,   110,   130,   137,   114
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -237,  -237,  -237,    91,    23,  -237,    -3,   217,  -237,  -237,
       5,   370,  -237,  -237,  -237,     7,   -64,  -237,  -237,  -237,
    -237,  -237,  -237,  -237,    -1,  -237,  -237,   -63,  -236,  -143,
    -237,  -237,  -237,   283,  -237,  -237,  -237,   295,  -237,  -237,
    -100,   247,  -237,  -237,   -66,  -237,   233,  -237,  -237,  -237,
    -237,  -237,  -237,  -202,     0,   146,  -237,  -237,  -237,  -237,
    -237
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
     184,    84,    60,    22,    23,    24,    25,   161,   162,   163,
     164,   165,    61,    26,    45,    46,    47,    72,   270,   239,
      27,   276,    28,    41,    42,    29,    30,    31,    92,   195,
      77,    78,    79,   174,    80,   245,    38,    32,   111,    36,
      62,   123,   224,   124,    63,    64,    65,    66,    67,    68,
      69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    37,    39,    43,    48,    71,    48,    81,   175,   172,
      90,    93,   211,    83,    87,    33,    70,    89,    44,   118,
      98,   272,   108,   101,   103,   105,   103,   240,    99,   170,
     100,   299,    40,   114,   186,   186,    35,   186,    95,   200,
      43,   321,   -24,   266,   104,   171,   119,    48,   191,     1,
     213,     2,   296,   274,   275,   212,   258,     3,     4,   261,
       5,     6,    74,   210,   324,   340,    11,     7,   297,   168,
      48,   303,    10,     8,    81,   176,   177,    74,     9,    81,
      73,    35,   187,    10,   339,   101,    35,    35,    35,    35,
     298,   189,    11,    74,   277,   349,   217,    75,    76,    74,
     288,   197,    74,    90,    89,    39,   354,   203,   205,    33,
    -162,    35,    81,    35,    90,   208,   216,   219,   107,   -23,
     215,    12,   186,   268,  -162,   300,    35,   186,    75,    76,
      33,   218,    12,   169,    75,    76,   308,   180,   181,   269,
      85,   322,    35,    35,   316,    35,    34,    50,    35,   318,
     116,    35,   -59,   320,    35,   -59,    91,   337,   237,   289,
    -124,    34,    94,   323,   114,    51,   331,   115,    86,   102,
     241,    48,   -59,   350,   -59,   116,  -124,   278,   281,   338,
     248,   249,   341,  -196,    52,    53,    54,    55,    56,    35,
      57,    58,   108,   103,   256,   351,     1,   116,     2,   352,
     206,   319,   107,   -23,     3,     4,    33,     5,     6,    33,
    -167,   -60,   -24,   199,     7,   309,   310,   267,   279,    96,
       8,   227,   192,   109,  -167,     9,   112,    33,   193,    95,
      10,   188,   116,  -196,  -123,   116,   110,   306,   307,    11,
     117,   280,    48,   198,    81,   166,   167,   178,   108,    91,
      95,   179,   186,   204,   194,    34,   183,   287,   209,    81,
      91,   223,    33,    33,   222,   291,    33,   226,   225,   301,
     294,   242,   244,   238,   246,   250,    34,   243,   252,    12,
     254,   255,    81,   311,   257,    95,   259,   260,   263,   264,
     265,   273,    33,    33,    70,    33,   282,   301,   284,   283,
     262,   293,   326,   286,   302,    33,   312,   305,   314,   315,
     269,   325,   332,   330,    33,    95,   334,    33,    95,   335,
     336,   342,   326,   113,   202,   106,   182,    33,    33,     0,
      33,     0,     0,    33,    33,    33,    33,   301,   201,     0,
      95,     0,    82,    33,    33,    33,    33,    33,    33,    50,
     326,    95,    34,    33,   292,    34,    95,   295,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    51,    95,    95,
      95,    95,     0,    34,     0,    59,    95,     0,     0,    88,
       0,   214,     0,     0,   317,     0,    52,    53,    54,    55,
      56,    35,    57,    58,     0,     0,   328,     0,     0,     0,
       0,     0,     0,     0,     0,   333,     0,     0,    34,    34,
       0,     0,    34,     0,     0,     0,     0,     0,   343,   120,
     122,   345,     0,     0,     0,   346,   347,   348,     0,     0,
       0,     0,     0,     0,     0,   353,     0,     0,    34,    34,
       0,    34,     0,   173,     0,     0,     0,     0,     0,     0,
       0,    34,   185,     0,     0,   185,   190,     0,     0,     0,
      34,     0,     0,    34,     0,     0,     0,   185,     0,     0,
       0,     0,     0,    34,    34,     0,    34,     0,     0,    34,
      34,    34,    34,     0,     0,     0,     0,     0,     0,    34,
      34,    34,    34,    34,    34,     0,     1,     0,     2,    34,
       0,     0,     0,   228,     3,     4,     0,     5,     6,     0,
       0,     0,     0,     0,     7,     0,     0,     0,     0,     0,
       8,     0,     0,     0,   229,     9,   230,     0,   231,     0,
      10,   232,   233,   234,   235,   236,     0,     0,     0,    11,
       0,     0,     0,     0,   125,     0,     0,     0,   247,     0,
       0,     0,     0,   251,     0,     0,   253,     0,     0,     0,
       0,     0,     0,     0,   126,   127,     0,   128,   129,   130,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
       0,     0,     0,     0,   131,   132,   133,   134,     0,     0,
       0,   271,     0,   122,     0,   135,   136,   137,     0,   138,
     139,   140,   141,   142,   143,   144,   145,     0,   146,   147,
     148,   149,     0,   150,   151,   152,   153,   154,   155,   156,
     157,     0,   285,   158,   159,   160,     0,     0,   125,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,   304,   -35,     0,     0,   126,   127,
       0,   128,   129,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   131,   132,
     133,   134,     0,     0,     0,     0,   329,     0,     0,   135,
     136,   137,     0,   138,   139,   140,   141,   142,   143,   144,
     145,   125,   146,   147,   148,   149,     0,   150,   151,   152,
     153,   154,   155,   156,   157,     0,     0,   158,   159,   160,
       0,   126,   127,     0,   128,   129,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     220,   131,   132,   133,   134,     0,     0,     0,     0,     0,
       0,     0,   135,   136,   137,     0,   138,   139,   140,   141,
     142,   143,   144,   145,   125,   146,   147,   148,   149,     0,
     150,   151,   152,   153,   154,   155,   156,   157,     0,     0,
     158,   159,   160,     0,   126,   127,     0,   128,   129,   221,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   131,   132,   133,   134,     0,     0,
       0,     0,     0,     0,     0,   135,   136,   137,     0,   138,
     139,   140,   141,   142,   143,   144,   145,   125,   146,   147,
     148,   149,     0,   150,   151,   152,   153,   154,   155,   156,
     157,     0,     0,   158,   159,   160,     0,   126,   127,     0,
     128,   129,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   313,   131,   132,   133,
     134,     0,     0,     0,     0,     0,     0,     0,   135,   136,
     137,     0,   138,   139,   140,   141,   142,   143,   144,   145,
     125,   146,   147,   148,   149,     0,   150,   151,   152,   153,
     154,   155,   156,   157,     0,     0,   158,   159,   160,     0,
     126,   127,     0,   128,   129,   327,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     131,   132,   133,   134,     0,     0,     0,     0,     0,     0,
       0,   135,   136,   137,     0,   138,   139,   140,   141,   142,
     143,   144,   145,   125,   146,   147,   148,   149,     0,   150,
     151,   152,   153,   154,   155,   156,   157,     0,     0,   158,
     159,   160,     0,   126,   127,     0,   128,   129,   344,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   131,   132,   133,   134,     0,     0,     0,
       0,     0,     0,     0,   135,   136,   137,     0,   138,   139,
     140,   141,   142,   143,   144,   145,   125,   146,   147,   148,
     149,     0,   150,   151,   152,   153,   154,   155,   156,   157,
       0,     0,   158,   159,   160,     0,   126,   127,     0,   128,
     129,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   131,   132,   133,   134,
       0,     0,     0,     0,     0,     0,     0,   135,   136,   137,
       0,   138,   139,   140,   141,   142,   143,   144,   145,     0,
     146,   147,   148,   149,     0,   150,   151,   152,   153,   154,
     155,   156,   157,    49,     0,   158,   159,   160,     0,     0,
      50,   121,    82,   196,     0,     0,     0,     0,     0,    50,
      82,   207,     0,     0,     0,     0,     0,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     0,     0,     0,     0,    51,     0,    52,    53,    54,
      55,    56,    35,    57,    58,     0,    52,    53,    54,    55,
      56,    35,    57,    58,    52,    53,    54,    55,    56,    35,
      57,    58,    82,   290,     0,     0,     0,     0,     0,    50,
      49,     0,     0,     0,     0,     0,     0,    50,    82,     0,
       0,     0,     0,     0,     0,    50,     0,    51,     0,     0,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,    52,    53,    54,    55,
      56,    35,    57,    58,    52,    53,    54,    55,    56,    35,
      57,    58,    52,    53,    54,    55,    56,    35,    57,    58,
      97,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,    53,    54,    55,    56,    12,
      57,    58
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,     3,     4,     6,     6,     7,    74,    72,
      10,    11,   112,     8,     9,    15,    23,    10,    24,    24,
      23,   223,    24,    23,    23,    12,    23,   170,    23,     7,
      23,   267,    44,    23,    23,    23,    93,    23,    15,   103,
      40,    45,    44,    31,    43,    23,    47,    47,    45,    10,
     114,    12,     7,    14,    15,    45,    45,    18,    19,    45,
      21,    22,    44,    45,   300,    45,    53,    28,    23,    70,
      70,   273,    44,    34,    74,    75,    76,    44,    39,    79,
      31,    93,    85,    44,   320,    85,    93,    93,    93,    93,
      45,    86,    53,    44,   237,    45,    44,    79,    80,    44,
      45,    96,    44,   103,    97,   105,    45,   107,   108,   109,
      31,    93,   112,    93,   114,   110,   116,   117,    43,    44,
     115,    93,    23,     7,    45,   268,    93,    23,    79,    80,
     130,    79,    93,     7,    79,    80,   279,    79,    80,    23,
      44,    23,    93,    93,    45,    93,     0,    51,    93,    45,
      24,    93,    23,   296,    93,    26,    10,    23,     7,   259,
       7,    15,     0,    45,    23,    69,   309,    26,    72,    23,
     171,   171,    43,    23,    45,    24,    23,   240,   244,    45,
     180,   181,   325,    24,    88,    89,    90,    91,    92,    93,
      94,    95,    24,    23,   194,    45,    10,    24,    12,   342,
     109,    15,    43,    44,    18,    19,   206,    21,    22,   209,
      31,    43,    44,    43,    28,     7,   282,   217,     7,    44,
      34,   130,    44,    31,    45,    39,    44,   227,    50,   206,
      44,    85,    24,    24,    23,    24,    44,    14,    15,    53,
      22,   242,   242,    97,   244,    96,    97,    31,    24,   103,
     227,    23,    23,   107,    24,   109,    43,   257,    31,   259,
     114,    23,   262,   263,    52,   260,   266,    26,    29,   269,
     265,    23,    23,    93,    23,    23,   130,    45,    23,    93,
      45,    45,   282,   283,    24,   262,    44,    44,    31,    45,
      44,    23,   292,   293,    23,   295,    23,   297,    23,    80,
     209,    31,   302,    50,    23,   305,    80,    31,    31,    45,
      23,     7,   312,    31,   314,   292,    31,   317,   295,    31,
      31,     7,   322,    40,   107,    30,    79,   327,   328,    -1,
     330,    -1,    -1,   333,   334,   335,   336,   337,   105,    -1,
     317,    -1,    44,   343,   344,   345,   346,   347,   348,    51,
     350,   328,   206,   353,   263,   209,   333,   266,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   343,    69,   345,   346,
     347,   348,    -1,   227,    -1,     5,   353,    -1,    -1,     9,
      -1,    83,    -1,    -1,   293,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,    -1,   305,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   314,    -1,    -1,   262,   263,
      -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,   327,    49,
      50,   330,    -1,    -1,    -1,   334,   335,   336,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   344,    -1,    -1,   292,   293,
      -1,   295,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   305,    82,    -1,    -1,    85,    86,    -1,    -1,    -1,
     314,    -1,    -1,   317,    -1,    -1,    -1,    97,    -1,    -1,
      -1,    -1,    -1,   327,   328,    -1,   330,    -1,    -1,   333,
     334,   335,   336,    -1,    -1,    -1,    -1,    -1,    -1,   343,
     344,   345,   346,   347,   348,    -1,    10,    -1,    12,   353,
      -1,    -1,    -1,   133,    18,    19,    -1,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,   154,    39,   156,    -1,   158,    -1,
      44,   161,   162,   163,   164,   165,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,   178,    -1,
      -1,    -1,    -1,   183,    -1,    -1,   186,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    29,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    -1,    -1,
      -1,   221,    -1,   223,    -1,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    71,
      72,    73,    -1,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,   252,    85,    86,    87,    -1,    -1,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   273,   274,    23,    -1,    -1,    26,    27,
      -1,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,   306,    -1,    -1,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,     6,    70,    71,    72,    73,    -1,    75,    76,    77,
      78,    79,    80,    81,    82,    -1,    -1,    85,    86,    87,
      -1,    26,    27,    -1,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,     6,    70,    71,    72,    73,    -1,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    -1,
      85,    86,    87,    -1,    26,    27,    -1,    29,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,     6,    70,    71,
      72,    73,    -1,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    -1,    85,    86,    87,    -1,    26,    27,    -1,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
       6,    70,    71,    72,    73,    -1,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    -1,    85,    86,    87,    -1,
      26,    27,    -1,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,     6,    70,    71,    72,    73,    -1,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    -1,    85,
      86,    87,    -1,    26,    27,    -1,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,     6,    70,    71,    72,
      73,    -1,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    -1,    85,    86,    87,    -1,    26,    27,    -1,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    -1,    75,    76,    77,    78,    79,
      80,    81,    82,    44,    -1,    85,    86,    87,    -1,    -1,
      51,    52,    44,    45,    -1,    -1,    -1,    -1,    -1,    51,
      44,    45,    -1,    -1,    -1,    -1,    -1,    51,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    88,    89,    90,    91,    92,    93,
      94,    95,    44,    45,    -1,    -1,    -1,    -1,    -1,    51,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    51,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    88,    89,    90,    91,    92,    93,
      94,    95,    88,    89,    90,    91,    92,    93,    94,    95,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      94,    95
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    12,    18,    19,    21,    22,    28,    34,    39,
      44,    53,    93,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   111,   112,   113,   114,   121,   128,   130,   133,
     134,   135,   145,   152,   153,    93,   147,   152,   144,   152,
      44,   131,   132,   152,    24,   122,   123,   124,   152,    44,
      51,    69,    88,    89,    90,    91,    92,    94,    95,   109,
     110,   120,   148,   152,   153,   154,   155,   156,   157,   158,
      23,   122,   125,    31,    44,    79,    80,   138,   139,   140,
     142,   152,    44,   108,   109,    44,    72,   108,   109,   113,
     152,   153,   136,   152,     0,   102,    44,    44,   104,   108,
     113,   152,   153,    23,    43,    12,   135,    43,    24,    31,
      44,   146,    44,   131,    23,    26,    24,    22,    24,   122,
     109,    52,   109,   149,   151,     6,    26,    27,    29,    30,
      31,    46,    47,    48,    49,    57,    58,    59,    61,    62,
      63,    64,    65,    66,    67,    68,    70,    71,    72,    73,
      75,    76,    77,    78,    79,    80,    81,    82,    85,    86,
      87,   115,   116,   117,   118,   119,    96,    97,   122,     7,
       7,    23,   125,   109,   141,   142,   152,   152,    31,    23,
      79,    80,   139,    43,   108,   109,    23,   104,   153,   108,
     109,    45,    44,    50,    24,   137,    45,   108,   153,    43,
     114,   144,   105,   152,   153,   152,   101,    45,   108,    31,
      45,   138,    45,   114,    83,   108,   152,    44,    79,   152,
      45,    31,    52,    23,   150,    29,    26,   101,   109,   109,
     109,   109,   109,   109,   109,   109,   109,     7,    93,   127,
     127,   122,    23,    45,    23,   143,    23,   109,   152,   152,
      23,   109,    23,   109,    45,    45,   152,    24,    45,    44,
      44,    45,   101,    31,    45,    44,    31,   152,     7,    23,
     126,   109,   151,    23,    14,    15,   129,   127,   125,     7,
     122,   142,    23,    80,    23,   109,    50,   152,    45,   138,
      45,   108,   101,    31,   108,   101,     7,    23,    45,   126,
     127,   152,    23,   151,   109,    31,    14,    15,   127,     7,
     142,   152,    80,    45,    31,    45,    45,   101,    45,    15,
     127,    45,    23,    45,   126,     7,   152,    31,   101,   109,
      31,   127,   152,   101,    31,    31,    31,    23,    45,   126,
      45,   127,     7,   101,    31,   101,   101,   101,   101,    45,
      23,    45,   127,   101,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    98,    99,   100,   100,   101,   101,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   103,   103,   104,
     104,   104,   104,   105,   105,   106,   106,   107,   107,   107,
     107,   107,   107,   108,   108,   108,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   110,   110,   110,
     110,   110,   111,   111,   112,   112,   113,   113,   113,   114,
     114,   114,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   116,   116,   116,   117,   117,   117,   117,
     117,   117,   118,   118,   118,   118,   118,   118,   118,   119,
     119,   119,   119,   119,   119,   120,   120,   120,   120,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   122,   122,   123,   123,
     123,   124,   124,   125,   125,   125,   125,   126,   126,   126,
     126,   127,   128,   128,   128,   128,   129,   129,   130,   130,
     130,   131,   131,   131,   132,   132,   133,   133,   133,   133,
     134,   134,   135,   135,   136,   136,   137,   137,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   139,   139,
     140,   140,   141,   141,   141,   141,   142,   142,   143,   143,
     144,   145,   145,   146,   146,   147,   148,   148,   149,   149,
     149,   149,   150,   150,   151,   152,   153,   153,   154,   154,
     155,   155,   156,   156,   156,   157,   157,   158
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       4,     5,     6,     1,     1,     3,     4,     1,     2,     2,
       3,     3,     4,     3,     5,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     2,     2,     2,     3,     1,     3,     2,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     3,     5,     4,     6,     5,     7,     6,     8,     7,
       9,     7,     9,     8,    10,     4,     3,     1,     1,     2,
       1,     1,     2,     3,     5,     2,     4,     2,     4,     3,
       5,     1,     4,     7,     5,     8,     4,     5,     6,     9,
       9,     1,     3,     2,     1,     3,     6,     7,     7,     8,
       1,     2,     3,     5,     1,     2,     2,     3,     2,     5,
       2,     1,     2,     3,     6,     3,     2,     3,     1,     3,
       2,     3,     1,     2,     2,     3,     1,     3,     2,     3,
       1,     4,     5,     2,     3,     1,     2,     3,     1,     2,
       2,     3,     2,     3,     3,     1,     1,     3,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1
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
  case 28:
#line 126 "parser.y"
                {print((yyvsp[0].nval),&variables); }
#line 1885 "parser.tab.c"
    break;

  case 35:
#line 144 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 1891 "parser.tab.c"
    break;

  case 36:
#line 149 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 1897 "parser.tab.c"
    break;

  case 37:
#line 151 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval);}
#line 1903 "parser.tab.c"
    break;

  case 38:
#line 153 "parser.y"
        {printf("%s eweqweqweqeqwValue\n\n",(yyvsp[0].nval).string); (yyval.nval) = add_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables);  }
#line 1909 "parser.tab.c"
    break;

  case 47:
#line 169 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 1915 "parser.tab.c"
    break;

  case 48:
#line 171 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 1921 "parser.tab.c"
    break;

  case 49:
#line 173 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 1927 "parser.tab.c"
    break;

  case 52:
#line 182 "parser.y"
        {insertArray(&variables,value_assign((yyvsp[-1].nval),(yyvsp[0].nval))); }
#line 1933 "parser.tab.c"
    break;

  case 54:
#line 188 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval); }
#line 1939 "parser.tab.c"
    break;

  case 56:
#line 192 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 1945 "parser.tab.c"
    break;

  case 59:
#line 198 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 1951 "parser.tab.c"
    break;

  case 95:
#line 255 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 1957 "parser.tab.c"
    break;

  case 96:
#line 257 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 1963 "parser.tab.c"
    break;

  case 195:
#line 438 "parser.y"
                {(yyval.nval) = (yyvsp[0].nval);  }
#line 1969 "parser.tab.c"
    break;

  case 196:
#line 442 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval); }
#line 1975 "parser.tab.c"
    break;

  case 197:
#line 444 "parser.y"
        {(yyval.nval) = (yyvsp[-2].nval);  }
#line 1981 "parser.tab.c"
    break;

  case 198:
#line 449 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 1987 "parser.tab.c"
    break;

  case 199:
#line 451 "parser.y"
         {(yyval.nval) = (yyvsp[0].nval);}
#line 1993 "parser.tab.c"
    break;

  case 200:
#line 456 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval);}
#line 1999 "parser.tab.c"
    break;

  case 201:
#line 458 "parser.y"
        {(yyval.nval) = (yyvsp[-1].nval);}
#line 2005 "parser.tab.c"
    break;

  case 202:
#line 464 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2011 "parser.tab.c"
    break;

  case 203:
#line 466 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2017 "parser.tab.c"
    break;

  case 204:
#line 468 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2023 "parser.tab.c"
    break;

  case 205:
#line 473 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2029 "parser.tab.c"
    break;

  case 206:
#line 475 "parser.y"
        {(yyval.nval) = (yyvsp[0].nval);}
#line 2035 "parser.tab.c"
    break;


#line 2039 "parser.tab.c"

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
#line 482 "parser.y"



int main() {

  
  initArray(&variables, 5);  // initially 5 elements
   extern int yydebug;
    //yydebug = 1;
  // Open a file 
  FILE *myfile = fopen("example.py", "r");
  //  is valid?
  if (!myfile) {
    
    return -1;
  }
  // read the file
  yyin = myfile;
  
  // Parse through the input:
  yyparse();
 
}


void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}




