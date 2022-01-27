#ifndef SIREUM_TYPE_H_t_Cli_RunChoice_Type
#define SIREUM_TYPE_H_t_Cli_RunChoice_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// t.Cli.RunChoice.Type
typedef enum {
  t_Cli_RunChoice_Type_Default = 0,
  t_Cli_RunChoice_Type_RoundRobin = 1,
  t_Cli_RunChoice_Type_Static = 2,
  t_Cli_RunChoice_Type_Legacy = 3
} t_Cli_RunChoice_Type;

inline B t_Cli_RunChoice_Type__eq(t_Cli_RunChoice_Type this, t_Cli_RunChoice_Type other) {
  return this == other;
}

inline B t_Cli_RunChoice_Type__ne(t_Cli_RunChoice_Type this, t_Cli_RunChoice_Type other) {
  return this != other;
}

inline Z t_Cli_RunChoice_Type__ordinal(t_Cli_RunChoice_Type this) {
  return (Z) this;
}

inline void t_Cli_RunChoice_Type_name_(String result, t_Cli_RunChoice_Type this) {
  switch (this) {
    case t_Cli_RunChoice_Type_Default: String_assign(result, string("Default")); return;
    case t_Cli_RunChoice_Type_RoundRobin: String_assign(result, string("RoundRobin")); return;
    case t_Cli_RunChoice_Type_Static: String_assign(result, string("Static")); return;
    case t_Cli_RunChoice_Type_Legacy: String_assign(result, string("Legacy")); return;
  }
}

#ifdef __cplusplus
}
#endif

#endif