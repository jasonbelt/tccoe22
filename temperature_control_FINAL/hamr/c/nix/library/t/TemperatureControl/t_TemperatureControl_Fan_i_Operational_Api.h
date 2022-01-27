#ifndef SIREUM_H_t_TemperatureControl_Fan_i_Operational_Api
#define SIREUM_H_t_TemperatureControl_Fan_i_Operational_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// t.TemperatureControl.Fan_i_Operational_Api

#define t_TemperatureControl_Fan_i_Operational_Api_id_(this) ((this)->id)
#define t_TemperatureControl_Fan_i_Operational_Api_fanCmd_Id_(this) ((this)->fanCmd_Id)
#define t_TemperatureControl_Fan_i_Operational_Api_fanAck_Id_(this) ((this)->fanAck_Id)

B t_TemperatureControl_Fan_i_Operational_Api__eq(t_TemperatureControl_Fan_i_Operational_Api this, t_TemperatureControl_Fan_i_Operational_Api other);
inline B t_TemperatureControl_Fan_i_Operational_Api__ne(t_TemperatureControl_Fan_i_Operational_Api this, t_TemperatureControl_Fan_i_Operational_Api other) {
  return !t_TemperatureControl_Fan_i_Operational_Api__eq(this, other);
};
void t_TemperatureControl_Fan_i_Operational_Api_string_(STACK_FRAME String result, t_TemperatureControl_Fan_i_Operational_Api this);
void t_TemperatureControl_Fan_i_Operational_Api_cprint(t_TemperatureControl_Fan_i_Operational_Api this, B isOut);

inline B t_TemperatureControl_Fan_i_Operational_Api__is(STACK_FRAME void* this) {
  return ((t_TemperatureControl_Fan_i_Operational_Api) this)->type == Tt_TemperatureControl_Fan_i_Operational_Api;
}

inline t_TemperatureControl_Fan_i_Operational_Api t_TemperatureControl_Fan_i_Operational_Api__as(STACK_FRAME void *this) {
  if (t_TemperatureControl_Fan_i_Operational_Api__is(CALLER this)) return (t_TemperatureControl_Fan_i_Operational_Api) this;
  sfAbortImpl(CALLER "Invalid cast to t.TemperatureControl.Fan_i_Operational_Api.");
  abort();
}

void t_TemperatureControl_Fan_i_Operational_Api_apply(STACK_FRAME t_TemperatureControl_Fan_i_Operational_Api this, Z id, Z fanCmd_Id, Z fanAck_Id);

void t_TemperatureControl_Fan_i_Operational_Api_get_fanCmd_(STACK_FRAME Option_2B0611 result, t_TemperatureControl_Fan_i_Operational_Api this);

#ifdef __cplusplus
}
#endif

#endif