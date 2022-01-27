#ifndef SIREUM_H_org_sireum_Some_23FE19
#define SIREUM_H_org_sireum_Some_23FE19

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[t.TemperatureControl.TempSensor_i_Initialization_Api]

#define Some_23FE19_value_(this) ((t_TemperatureControl_TempSensor_i_Initialization_Api) &(this)->value)

B Some_23FE19__eq(Some_23FE19 this, Some_23FE19 other);
inline B Some_23FE19__ne(Some_23FE19 this, Some_23FE19 other) {
  return !Some_23FE19__eq(this, other);
};
void Some_23FE19_string_(STACK_FRAME String result, Some_23FE19 this);
void Some_23FE19_cprint(Some_23FE19 this, B isOut);

inline B Some_23FE19__is(STACK_FRAME void* this) {
  return ((Some_23FE19) this)->type == TSome_23FE19;
}

inline Some_23FE19 Some_23FE19__as(STACK_FRAME void *this) {
  if (Some_23FE19__is(CALLER this)) return (Some_23FE19) this;
  sfAbortImpl(CALLER "Invalid cast to Some[t.TemperatureControl.TempSensor_i_Initialization_Api].");
  abort();
}

void Some_23FE19_apply(STACK_FRAME Some_23FE19 this, t_TemperatureControl_TempSensor_i_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif