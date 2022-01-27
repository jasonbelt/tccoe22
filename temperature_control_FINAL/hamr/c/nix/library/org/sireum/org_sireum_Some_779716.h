#ifndef SIREUM_H_org_sireum_Some_779716
#define SIREUM_H_org_sireum_Some_779716

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[t.TemperatureControl.FanCmd.Type]

#define Some_779716_value_(this) ((this)->value)

B Some_779716__eq(Some_779716 this, Some_779716 other);
inline B Some_779716__ne(Some_779716 this, Some_779716 other) {
  return !Some_779716__eq(this, other);
};
void Some_779716_string_(STACK_FRAME String result, Some_779716 this);
void Some_779716_cprint(Some_779716 this, B isOut);

inline B Some_779716__is(STACK_FRAME void* this) {
  return ((Some_779716) this)->type == TSome_779716;
}

inline Some_779716 Some_779716__as(STACK_FRAME void *this) {
  if (Some_779716__is(CALLER this)) return (Some_779716) this;
  sfAbortImpl(CALLER "Invalid cast to Some[t.TemperatureControl.FanCmd.Type].");
  abort();
}

void Some_779716_apply(STACK_FRAME Some_779716 this, t_TemperatureControl_FanCmd_Type value);

#ifdef __cplusplus
}
#endif

#endif