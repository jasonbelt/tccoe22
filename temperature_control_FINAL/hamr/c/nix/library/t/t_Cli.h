#ifndef SIREUM_H_t_Cli
#define SIREUM_H_t_Cli

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// t.Cli

#define t_Cli_pathSep_(this) ((this)->pathSep)

B t_Cli__eq(t_Cli this, t_Cli other);
inline B t_Cli__ne(t_Cli this, t_Cli other) {
  return !t_Cli__eq(this, other);
};
void t_Cli_string_(STACK_FRAME String result, t_Cli this);
void t_Cli_cprint(t_Cli this, B isOut);

inline B t_Cli__is(STACK_FRAME void* this) {
  return ((t_Cli) this)->type == Tt_Cli;
}

inline t_Cli t_Cli__as(STACK_FRAME void *this) {
  if (t_Cli__is(CALLER this)) return (t_Cli) this;
  sfAbortImpl(CALLER "Invalid cast to t.Cli.");
  abort();
}

void t_Cli_apply(STACK_FRAME t_Cli this, C pathSep);

Unit t_Cli_help_(STACK_FRAME t_Cli this);

void t_Cli_parseRun_(STACK_FRAME Option_89E471 result, t_Cli this, IS_948B60 args, Z i);

void t_Cli_parseRunChoice_(STACK_FRAME Option_5F39ED result, t_Cli this, IS_948B60 args, Z i);

void t_Cli_parseRunChoiceH_(STACK_FRAME Option_5F39ED result, t_Cli this, String arg);

#ifdef __cplusplus
}
#endif

#endif