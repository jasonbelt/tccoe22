#ifndef SIREUM_H_t_TemperatureControl_TempControl_i_Operational_Api
#define SIREUM_H_t_TemperatureControl_TempControl_i_Operational_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// t.TemperatureControl.TempControl_i_Operational_Api

#define t_TemperatureControl_TempControl_i_Operational_Api_id_(this) ((this)->id)
#define t_TemperatureControl_TempControl_i_Operational_Api_currentTemp_Id_(this) ((this)->currentTemp_Id)
#define t_TemperatureControl_TempControl_i_Operational_Api_fanAck_Id_(this) ((this)->fanAck_Id)
#define t_TemperatureControl_TempControl_i_Operational_Api_setPoint_Id_(this) ((this)->setPoint_Id)
#define t_TemperatureControl_TempControl_i_Operational_Api_fanCmd_Id_(this) ((this)->fanCmd_Id)
#define t_TemperatureControl_TempControl_i_Operational_Api_tempChanged_Id_(this) ((this)->tempChanged_Id)

B t_TemperatureControl_TempControl_i_Operational_Api__eq(t_TemperatureControl_TempControl_i_Operational_Api this, t_TemperatureControl_TempControl_i_Operational_Api other);
inline B t_TemperatureControl_TempControl_i_Operational_Api__ne(t_TemperatureControl_TempControl_i_Operational_Api this, t_TemperatureControl_TempControl_i_Operational_Api other) {
  return !t_TemperatureControl_TempControl_i_Operational_Api__eq(this, other);
};
void t_TemperatureControl_TempControl_i_Operational_Api_string_(STACK_FRAME String result, t_TemperatureControl_TempControl_i_Operational_Api this);
void t_TemperatureControl_TempControl_i_Operational_Api_cprint(t_TemperatureControl_TempControl_i_Operational_Api this, B isOut);

inline B t_TemperatureControl_TempControl_i_Operational_Api__is(STACK_FRAME void* this) {
  return ((t_TemperatureControl_TempControl_i_Operational_Api) this)->type == Tt_TemperatureControl_TempControl_i_Operational_Api;
}

inline t_TemperatureControl_TempControl_i_Operational_Api t_TemperatureControl_TempControl_i_Operational_Api__as(STACK_FRAME void *this) {
  if (t_TemperatureControl_TempControl_i_Operational_Api__is(CALLER this)) return (t_TemperatureControl_TempControl_i_Operational_Api) this;
  sfAbortImpl(CALLER "Invalid cast to t.TemperatureControl.TempControl_i_Operational_Api.");
  abort();
}

void t_TemperatureControl_TempControl_i_Operational_Api_apply(STACK_FRAME t_TemperatureControl_TempControl_i_Operational_Api this, Z id, Z currentTemp_Id, Z fanAck_Id, Z setPoint_Id, Z fanCmd_Id, Z tempChanged_Id);

void t_TemperatureControl_TempControl_i_Operational_Api_get_currentTemp_(STACK_FRAME Option_78CB14 result, t_TemperatureControl_TempControl_i_Operational_Api this);

void t_TemperatureControl_TempControl_i_Operational_Api_get_fanAck_(STACK_FRAME Option_C5A124 result, t_TemperatureControl_TempControl_i_Operational_Api this);

void t_TemperatureControl_TempControl_i_Operational_Api_get_setPoint_(STACK_FRAME Option_EBB396 result, t_TemperatureControl_TempControl_i_Operational_Api this);

void t_TemperatureControl_TempControl_i_Operational_Api_get_tempChanged_(STACK_FRAME Option_C622DB result, t_TemperatureControl_TempControl_i_Operational_Api this);

#ifdef __cplusplus
}
#endif

#endif