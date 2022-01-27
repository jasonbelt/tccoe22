#ifndef SIREUM_H_t_TemperatureControl_TempUnit_Payload
#define SIREUM_H_t_TemperatureControl_TempUnit_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// t.TemperatureControl.TempUnit_Payload

#define t_TemperatureControl_TempUnit_Payload_value_(this) ((this)->value)

B t_TemperatureControl_TempUnit_Payload__eq(t_TemperatureControl_TempUnit_Payload this, t_TemperatureControl_TempUnit_Payload other);
inline B t_TemperatureControl_TempUnit_Payload__ne(t_TemperatureControl_TempUnit_Payload this, t_TemperatureControl_TempUnit_Payload other) {
  return !t_TemperatureControl_TempUnit_Payload__eq(this, other);
};
void t_TemperatureControl_TempUnit_Payload_string_(STACK_FRAME String result, t_TemperatureControl_TempUnit_Payload this);
void t_TemperatureControl_TempUnit_Payload_cprint(t_TemperatureControl_TempUnit_Payload this, B isOut);

inline B t_TemperatureControl_TempUnit_Payload__is(STACK_FRAME void* this) {
  return ((t_TemperatureControl_TempUnit_Payload) this)->type == Tt_TemperatureControl_TempUnit_Payload;
}

inline t_TemperatureControl_TempUnit_Payload t_TemperatureControl_TempUnit_Payload__as(STACK_FRAME void *this) {
  if (t_TemperatureControl_TempUnit_Payload__is(CALLER this)) return (t_TemperatureControl_TempUnit_Payload) this;
  sfAbortImpl(CALLER "Invalid cast to t.TemperatureControl.TempUnit_Payload.");
  abort();
}

void t_TemperatureControl_TempUnit_Payload_apply(STACK_FRAME t_TemperatureControl_TempUnit_Payload this, t_TemperatureControl_TempUnit_Type value);

#ifdef __cplusplus
}
#endif

#endif