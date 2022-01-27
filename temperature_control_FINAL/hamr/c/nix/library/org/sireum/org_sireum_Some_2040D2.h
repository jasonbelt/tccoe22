#ifndef SIREUM_H_org_sireum_Some_2040D2
#define SIREUM_H_org_sireum_Some_2040D2

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[t.Cli.RunChoice.Type]

#define Some_2040D2_value_(this) ((this)->value)

B Some_2040D2__eq(Some_2040D2 this, Some_2040D2 other);
inline B Some_2040D2__ne(Some_2040D2 this, Some_2040D2 other) {
  return !Some_2040D2__eq(this, other);
};
void Some_2040D2_string_(STACK_FRAME String result, Some_2040D2 this);
void Some_2040D2_cprint(Some_2040D2 this, B isOut);

inline B Some_2040D2__is(STACK_FRAME void* this) {
  return ((Some_2040D2) this)->type == TSome_2040D2;
}

inline Some_2040D2 Some_2040D2__as(STACK_FRAME void *this) {
  if (Some_2040D2__is(CALLER this)) return (Some_2040D2) this;
  sfAbortImpl(CALLER "Invalid cast to Some[t.Cli.RunChoice.Type].");
  abort();
}

void Some_2040D2_apply(STACK_FRAME Some_2040D2 this, t_Cli_RunChoice_Type value);

#ifdef __cplusplus
}
#endif

#endif