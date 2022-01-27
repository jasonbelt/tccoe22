#ifndef SIREUM_H_org_sireum_Some_D50AE7
#define SIREUM_H_org_sireum_Some_D50AE7

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[t.TemperatureControl.TempControl_i_Initialization_Api]

#define Some_D50AE7_value_(this) ((t_TemperatureControl_TempControl_i_Initialization_Api) &(this)->value)

B Some_D50AE7__eq(Some_D50AE7 this, Some_D50AE7 other);
inline B Some_D50AE7__ne(Some_D50AE7 this, Some_D50AE7 other) {
  return !Some_D50AE7__eq(this, other);
};
void Some_D50AE7_string_(STACK_FRAME String result, Some_D50AE7 this);
void Some_D50AE7_cprint(Some_D50AE7 this, B isOut);

inline B Some_D50AE7__is(STACK_FRAME void* this) {
  return ((Some_D50AE7) this)->type == TSome_D50AE7;
}

inline Some_D50AE7 Some_D50AE7__as(STACK_FRAME void *this) {
  if (Some_D50AE7__is(CALLER this)) return (Some_D50AE7) this;
  sfAbortImpl(CALLER "Invalid cast to Some[t.TemperatureControl.TempControl_i_Initialization_Api].");
  abort();
}

void Some_D50AE7_apply(STACK_FRAME Some_D50AE7 this, t_TemperatureControl_TempControl_i_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif