#ifndef SIREUM_H_t_Cli_RunOption
#define SIREUM_H_t_Cli_RunOption

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// t.Cli.RunOption

#define t_Cli_RunOption_help_(this) ((String) &(this)->help)
#define t_Cli_RunOption_args_(this) ((IS_948B60) &(this)->args)
#define t_Cli_RunOption_scheduler_(this) ((this)->scheduler)

B t_Cli_RunOption__eq(t_Cli_RunOption this, t_Cli_RunOption other);
inline B t_Cli_RunOption__ne(t_Cli_RunOption this, t_Cli_RunOption other) {
  return !t_Cli_RunOption__eq(this, other);
};
void t_Cli_RunOption_string_(STACK_FRAME String result, t_Cli_RunOption this);
void t_Cli_RunOption_cprint(t_Cli_RunOption this, B isOut);

inline B t_Cli_RunOption__is(STACK_FRAME void* this) {
  return ((t_Cli_RunOption) this)->type == Tt_Cli_RunOption;
}

inline t_Cli_RunOption t_Cli_RunOption__as(STACK_FRAME void *this) {
  if (t_Cli_RunOption__is(CALLER this)) return (t_Cli_RunOption) this;
  sfAbortImpl(CALLER "Invalid cast to t.Cli.RunOption.");
  abort();
}

void t_Cli_RunOption_apply(STACK_FRAME t_Cli_RunOption this, String help, IS_948B60 args, t_Cli_RunChoice_Type scheduler);

#ifdef __cplusplus
}
#endif

#endif