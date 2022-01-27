#ifndef SIREUM_H_org_sireum_Some_040EE4
#define SIREUM_H_org_sireum_Some_040EE4

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[t.Cli.RunTopOption]

#define Some_040EE4_value_(this) ((t_Cli_RunTopOption) &(this)->value)

B Some_040EE4__eq(Some_040EE4 this, Some_040EE4 other);
inline B Some_040EE4__ne(Some_040EE4 this, Some_040EE4 other) {
  return !Some_040EE4__eq(this, other);
};
void Some_040EE4_string_(STACK_FRAME String result, Some_040EE4 this);
void Some_040EE4_cprint(Some_040EE4 this, B isOut);

inline B Some_040EE4__is(STACK_FRAME void* this) {
  return ((Some_040EE4) this)->type == TSome_040EE4;
}

inline Some_040EE4 Some_040EE4__as(STACK_FRAME void *this) {
  if (Some_040EE4__is(CALLER this)) return (Some_040EE4) this;
  sfAbortImpl(CALLER "Invalid cast to Some[t.Cli.RunTopOption].");
  abort();
}

void Some_040EE4_apply(STACK_FRAME Some_040EE4 this, t_Cli_RunTopOption value);

#ifdef __cplusplus
}
#endif

#endif