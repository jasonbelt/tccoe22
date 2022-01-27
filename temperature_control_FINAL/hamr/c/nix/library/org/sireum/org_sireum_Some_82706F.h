#ifndef SIREUM_H_org_sireum_Some_82706F
#define SIREUM_H_org_sireum_Some_82706F

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[t.TemperatureControl.TempSensor_i_Operational_Api]

#define Some_82706F_value_(this) ((t_TemperatureControl_TempSensor_i_Operational_Api) &(this)->value)

B Some_82706F__eq(Some_82706F this, Some_82706F other);
inline B Some_82706F__ne(Some_82706F this, Some_82706F other) {
  return !Some_82706F__eq(this, other);
};
void Some_82706F_string_(STACK_FRAME String result, Some_82706F this);
void Some_82706F_cprint(Some_82706F this, B isOut);

inline B Some_82706F__is(STACK_FRAME void* this) {
  return ((Some_82706F) this)->type == TSome_82706F;
}

inline Some_82706F Some_82706F__as(STACK_FRAME void *this) {
  if (Some_82706F__is(CALLER this)) return (Some_82706F) this;
  sfAbortImpl(CALLER "Invalid cast to Some[t.TemperatureControl.TempSensor_i_Operational_Api].");
  abort();
}

void Some_82706F_apply(STACK_FRAME Some_82706F this, t_TemperatureControl_TempSensor_i_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif