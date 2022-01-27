#ifndef SIREUM_H_org_sireum_Some_E49AF0
#define SIREUM_H_org_sireum_Some_E49AF0

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[t.TemperatureControl.TempControl_i_Operational_Api]

#define Some_E49AF0_value_(this) ((t_TemperatureControl_TempControl_i_Operational_Api) &(this)->value)

B Some_E49AF0__eq(Some_E49AF0 this, Some_E49AF0 other);
inline B Some_E49AF0__ne(Some_E49AF0 this, Some_E49AF0 other) {
  return !Some_E49AF0__eq(this, other);
};
void Some_E49AF0_string_(STACK_FRAME String result, Some_E49AF0 this);
void Some_E49AF0_cprint(Some_E49AF0 this, B isOut);

inline B Some_E49AF0__is(STACK_FRAME void* this) {
  return ((Some_E49AF0) this)->type == TSome_E49AF0;
}

inline Some_E49AF0 Some_E49AF0__as(STACK_FRAME void *this) {
  if (Some_E49AF0__is(CALLER this)) return (Some_E49AF0) this;
  sfAbortImpl(CALLER "Invalid cast to Some[t.TemperatureControl.TempControl_i_Operational_Api].");
  abort();
}

void Some_E49AF0_apply(STACK_FRAME Some_E49AF0 this, t_TemperatureControl_TempControl_i_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif