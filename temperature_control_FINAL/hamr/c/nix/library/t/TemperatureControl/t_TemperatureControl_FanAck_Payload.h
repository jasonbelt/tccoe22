#ifndef SIREUM_H_t_TemperatureControl_FanAck_Payload
#define SIREUM_H_t_TemperatureControl_FanAck_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// t.TemperatureControl.FanAck_Payload

#define t_TemperatureControl_FanAck_Payload_value_(this) ((this)->value)

B t_TemperatureControl_FanAck_Payload__eq(t_TemperatureControl_FanAck_Payload this, t_TemperatureControl_FanAck_Payload other);
inline B t_TemperatureControl_FanAck_Payload__ne(t_TemperatureControl_FanAck_Payload this, t_TemperatureControl_FanAck_Payload other) {
  return !t_TemperatureControl_FanAck_Payload__eq(this, other);
};
void t_TemperatureControl_FanAck_Payload_string_(STACK_FRAME String result, t_TemperatureControl_FanAck_Payload this);
void t_TemperatureControl_FanAck_Payload_cprint(t_TemperatureControl_FanAck_Payload this, B isOut);

inline B t_TemperatureControl_FanAck_Payload__is(STACK_FRAME void* this) {
  return ((t_TemperatureControl_FanAck_Payload) this)->type == Tt_TemperatureControl_FanAck_Payload;
}

inline t_TemperatureControl_FanAck_Payload t_TemperatureControl_FanAck_Payload__as(STACK_FRAME void *this) {
  if (t_TemperatureControl_FanAck_Payload__is(CALLER this)) return (t_TemperatureControl_FanAck_Payload) this;
  sfAbortImpl(CALLER "Invalid cast to t.TemperatureControl.FanAck_Payload.");
  abort();
}

void t_TemperatureControl_FanAck_Payload_apply(STACK_FRAME t_TemperatureControl_FanAck_Payload this, t_TemperatureControl_FanAck_Type value);

#ifdef __cplusplus
}
#endif

#endif