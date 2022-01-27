#ifndef SIREUM_H_org_sireum_Some_07AD88
#define SIREUM_H_org_sireum_Some_07AD88

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[t.TemperatureControl.FanAck.Type]

#define Some_07AD88_value_(this) ((this)->value)

B Some_07AD88__eq(Some_07AD88 this, Some_07AD88 other);
inline B Some_07AD88__ne(Some_07AD88 this, Some_07AD88 other) {
  return !Some_07AD88__eq(this, other);
};
void Some_07AD88_string_(STACK_FRAME String result, Some_07AD88 this);
void Some_07AD88_cprint(Some_07AD88 this, B isOut);

inline B Some_07AD88__is(STACK_FRAME void* this) {
  return ((Some_07AD88) this)->type == TSome_07AD88;
}

inline Some_07AD88 Some_07AD88__as(STACK_FRAME void *this) {
  if (Some_07AD88__is(CALLER this)) return (Some_07AD88) this;
  sfAbortImpl(CALLER "Invalid cast to Some[t.TemperatureControl.FanAck.Type].");
  abort();
}

void Some_07AD88_apply(STACK_FRAME Some_07AD88 this, t_TemperatureControl_FanAck_Type value);

#ifdef __cplusplus
}
#endif

#endif