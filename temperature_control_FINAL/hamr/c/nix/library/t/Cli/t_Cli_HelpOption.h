#ifndef SIREUM_H_t_Cli_HelpOption
#define SIREUM_H_t_Cli_HelpOption

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// t.Cli.HelpOption


B t_Cli_HelpOption__eq(t_Cli_HelpOption this, t_Cli_HelpOption other);
inline B t_Cli_HelpOption__ne(t_Cli_HelpOption this, t_Cli_HelpOption other) {
  return !t_Cli_HelpOption__eq(this, other);
};
void t_Cli_HelpOption_string_(STACK_FRAME String result, t_Cli_HelpOption this);
void t_Cli_HelpOption_cprint(t_Cli_HelpOption this, B isOut);

inline B t_Cli_HelpOption__is(STACK_FRAME void* this) {
  return ((t_Cli_HelpOption) this)->type == Tt_Cli_HelpOption;
}

inline t_Cli_HelpOption t_Cli_HelpOption__as(STACK_FRAME void *this) {
  if (t_Cli_HelpOption__is(CALLER this)) return (t_Cli_HelpOption) this;
  sfAbortImpl(CALLER "Invalid cast to t.Cli.HelpOption.");
  abort();
}

void t_Cli_HelpOption_apply(STACK_FRAME t_Cli_HelpOption this);

#ifdef __cplusplus
}
#endif

#endif