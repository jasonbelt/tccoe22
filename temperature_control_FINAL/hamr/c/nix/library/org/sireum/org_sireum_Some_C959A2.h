#ifndef SIREUM_H_org_sireum_Some_C959A2
#define SIREUM_H_org_sireum_Some_C959A2

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[t.TemperatureControl.Fan_i_Initialization_Api]

#define Some_C959A2_value_(this) ((t_TemperatureControl_Fan_i_Initialization_Api) &(this)->value)

B Some_C959A2__eq(Some_C959A2 this, Some_C959A2 other);
inline B Some_C959A2__ne(Some_C959A2 this, Some_C959A2 other) {
  return !Some_C959A2__eq(this, other);
};
void Some_C959A2_string_(STACK_FRAME String result, Some_C959A2 this);
void Some_C959A2_cprint(Some_C959A2 this, B isOut);

inline B Some_C959A2__is(STACK_FRAME void* this) {
  return ((Some_C959A2) this)->type == TSome_C959A2;
}

inline Some_C959A2 Some_C959A2__as(STACK_FRAME void *this) {
  if (Some_C959A2__is(CALLER this)) return (Some_C959A2) this;
  sfAbortImpl(CALLER "Invalid cast to Some[t.TemperatureControl.Fan_i_Initialization_Api].");
  abort();
}

void Some_C959A2_apply(STACK_FRAME Some_C959A2 this, t_TemperatureControl_Fan_i_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif