#ifndef SIREUM_H_t_TemperatureControl_TempControl_i_Initialization_Api
#define SIREUM_H_t_TemperatureControl_TempControl_i_Initialization_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// t.TemperatureControl.TempControl_i_Initialization_Api

#define t_TemperatureControl_TempControl_i_Initialization_Api_id_(this) ((this)->id)
#define t_TemperatureControl_TempControl_i_Initialization_Api_currentTemp_Id_(this) ((this)->currentTemp_Id)
#define t_TemperatureControl_TempControl_i_Initialization_Api_fanAck_Id_(this) ((this)->fanAck_Id)
#define t_TemperatureControl_TempControl_i_Initialization_Api_setPoint_Id_(this) ((this)->setPoint_Id)
#define t_TemperatureControl_TempControl_i_Initialization_Api_fanCmd_Id_(this) ((this)->fanCmd_Id)
#define t_TemperatureControl_TempControl_i_Initialization_Api_tempChanged_Id_(this) ((this)->tempChanged_Id)

B t_TemperatureControl_TempControl_i_Initialization_Api__eq(t_TemperatureControl_TempControl_i_Initialization_Api this, t_TemperatureControl_TempControl_i_Initialization_Api other);
inline B t_TemperatureControl_TempControl_i_Initialization_Api__ne(t_TemperatureControl_TempControl_i_Initialization_Api this, t_TemperatureControl_TempControl_i_Initialization_Api other) {
  return !t_TemperatureControl_TempControl_i_Initialization_Api__eq(this, other);
};
void t_TemperatureControl_TempControl_i_Initialization_Api_string_(STACK_FRAME String result, t_TemperatureControl_TempControl_i_Initialization_Api this);
void t_TemperatureControl_TempControl_i_Initialization_Api_cprint(t_TemperatureControl_TempControl_i_Initialization_Api this, B isOut);

inline B t_TemperatureControl_TempControl_i_Initialization_Api__is(STACK_FRAME void* this) {
  return ((t_TemperatureControl_TempControl_i_Initialization_Api) this)->type == Tt_TemperatureControl_TempControl_i_Initialization_Api;
}

inline t_TemperatureControl_TempControl_i_Initialization_Api t_TemperatureControl_TempControl_i_Initialization_Api__as(STACK_FRAME void *this) {
  if (t_TemperatureControl_TempControl_i_Initialization_Api__is(CALLER this)) return (t_TemperatureControl_TempControl_i_Initialization_Api) this;
  sfAbortImpl(CALLER "Invalid cast to t.TemperatureControl.TempControl_i_Initialization_Api.");
  abort();
}

void t_TemperatureControl_TempControl_i_Initialization_Api_apply(STACK_FRAME t_TemperatureControl_TempControl_i_Initialization_Api this, Z id, Z currentTemp_Id, Z fanAck_Id, Z setPoint_Id, Z fanCmd_Id, Z tempChanged_Id);

#ifdef __cplusplus
}
#endif

#endif