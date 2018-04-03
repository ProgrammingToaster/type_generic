#include <stdio.h>
#include <stdbool.h>

enum    t_types {
    TYPE_BOOL,
    TYPE_CHAR,
    TYPE_INT,    
    TYPE_SIGNED_CHAR,
    TYPE_UNSIGNED_CHAR,
    TYPE_SIGNED_SHORT,
    TYPE_UNSIGNED_SHORT,
    TYPE_UNSIGNED_INT,
    TYPE_LONG_INT,
    TYPE_UNSIGNED_LONG_INT,
    TYPE_UNSIGNED_LONG_LONG,
    TYPE_LONG_LONG_INT,
    TYPE_FLOAT,
    TYPE_DOUBLE,
    TYPE_LONG_DOUBLE,
    TYPE_POINTER_TO_VOID,
    TYPE_POINTER_TO_INT,
    TYPE_POINTER_TO_CHAR,
    TYPE_UNKNOWN = -1
};

#define get_type(X) _Generic((X),               \
_Bool:              TYPE_BOOL,                  \
char:               TYPE_CHAR,                  \
int:                TYPE_INT,                   \
signed char:        TYPE_SIGNED_CHAR,           \
unsigned char:      TYPE_UNSIGNED_CHAR,         \
signed short:       TYPE_SIGNED_SHORT,          \
unsigned short:     TYPE_UNSIGNED_SHORT,        \
unsigned int:       TYPE_UNSIGNED_INT,          \
long int:           TYPE_LONG_INT,              \
unsigned long int:  TYPE_UNSIGNED_LONG_INT,     \
unsigned long long: TYPE_UNSIGNED_LONG_LONG,    \
long long int:      TYPE_LONG_LONG_INT,         \
float:              TYPE_FLOAT,                 \
double:             TYPE_DOUBLE,                \
long double:        TYPE_LONG_DOUBLE,           \
void *:             TYPE_POINTER_TO_VOID,       \
int *:              TYPE_POINTER_TO_INT,        \
char *:             TYPE_POINTER_TO_CHAR,       \
default:            TYPE_UNKNOWN                \
)

#define get_typename(X) _Generic((X),		\
_Bool:              "TYPE_BOOL",                \
char:               "TYPE_CHAR",                \
int:                "TYPE_INT",                 \
signed char:        "TYPE_SIGNED_CHAR",         \
unsigned char:      "TYPE_UNSIGNED_CHAR",       \
signed short:       "TYPE_SIGNED_SHORT",        \
unsigned short:     "TYPE_UNSIGNED_SHORT",      \
unsigned int:       "TYPE_UNSIGNED_INT",        \
long int:           "TYPE_LONG_INT",            \
unsigned long int:  "TYPE_UNSIGNED_LONG_INT",   \
unsigned long long: "TYPE_UNSIGNED_LONG_LONG",  \
long long int:      "TYPE_LONG_LONG_INT",       \
float:              "TYPE_FLOAT",               \
double:             "TYPE_DOUBLE",              \
long double:        "TYPE_LONG_DOUBLE",         \
void *:             "TYPE_POINTER_TO_VOID",     \
int *:              "TYPE_POINTER_TO_INT",      \
char *:             "TYPE_POINTER_TO_CHAR",     \
default:            "TYPE_UNKNOWN"              \
)
