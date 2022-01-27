#ifndef SIREUM_H_t_TemperatureControl_Fan_i_fp_fan_Bridge
#define SIREUM_H_t_TemperatureControl_Fan_i_fp_fan_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void t_TemperatureControl_Fan_i_fp_fan_Bridge_init(STACK_FRAME_ONLY);

Option_74C297 t_TemperatureControl_Fan_i_fp_fan_Bridge_c_initialization_api(STACK_FRAME_ONLY);
void t_TemperatureControl_Fan_i_fp_fan_Bridge_c_initialization_api_a(STACK_FRAME Option_74C297 p_c_initialization_api);
Option_A8F8FC t_TemperatureControl_Fan_i_fp_fan_Bridge_c_operational_api(STACK_FRAME_ONLY);
void t_TemperatureControl_Fan_i_fp_fan_Bridge_c_operational_api_a(STACK_FRAME Option_A8F8FC p_c_operational_api);

// t.TemperatureControl.Fan_i_fp_fan_Bridge

#define t_TemperatureControl_Fan_i_fp_fan_Bridge_id_(this) ((this)->id)
#define t_TemperatureControl_Fan_i_fp_fan_Bridge_name_(this) ((String) &(this)->name)
#define t_TemperatureControl_Fan_i_fp_fan_Bridge_dispatchProtocol_(this) ((art_DispatchPropertyProtocol) &(this)->dispatchProtocol)
#define t_TemperatureControl_Fan_i_fp_fan_Bridge_dispatchTriggers_(this) ((Option_9AF35E) &(this)->dispatchTriggers)
#define t_TemperatureControl_Fan_i_fp_fan_Bridge_fanCmd_(this) ((art_Port_2ED9E6) &(this)->fanCmd)
#define t_TemperatureControl_Fan_i_fp_fan_Bridge_fanAck_(this) ((art_Port_0A16CC) &(this)->fanAck)
#define t_TemperatureControl_Fan_i_fp_fan_Bridge_ports_(this) ((art_Bridge_Ports) &(this)->ports)
#define t_TemperatureControl_Fan_i_fp_fan_Bridge_initialization_api_(this) ((t_TemperatureControl_Fan_i_Initialization_Api) &(this)->initialization_api)
#define t_TemperatureControl_Fan_i_fp_fan_Bridge_operational_api_(this) ((t_TemperatureControl_Fan_i_Operational_Api) &(this)->operational_api)
#define t_TemperatureControl_Fan_i_fp_fan_Bridge_entryPoints_(this) ((art_Bridge_EntryPoints) &(this)->entryPoints)

B t_TemperatureControl_Fan_i_fp_fan_Bridge__eq(t_TemperatureControl_Fan_i_fp_fan_Bridge this, t_TemperatureControl_Fan_i_fp_fan_Bridge other);
inline B t_TemperatureControl_Fan_i_fp_fan_Bridge__ne(t_TemperatureControl_Fan_i_fp_fan_Bridge this, t_TemperatureControl_Fan_i_fp_fan_Bridge other) {
  return !t_TemperatureControl_Fan_i_fp_fan_Bridge__eq(this, other);
};
void t_TemperatureControl_Fan_i_fp_fan_Bridge_string_(STACK_FRAME String result, t_TemperatureControl_Fan_i_fp_fan_Bridge this);
void t_TemperatureControl_Fan_i_fp_fan_Bridge_cprint(t_TemperatureControl_Fan_i_fp_fan_Bridge this, B isOut);

inline B t_TemperatureControl_Fan_i_fp_fan_Bridge__is(STACK_FRAME void* this) {
  return ((t_TemperatureControl_Fan_i_fp_fan_Bridge) this)->type == Tt_TemperatureControl_Fan_i_fp_fan_Bridge;
}

inline t_TemperatureControl_Fan_i_fp_fan_Bridge t_TemperatureControl_Fan_i_fp_fan_Bridge__as(STACK_FRAME void *this) {
  if (t_TemperatureControl_Fan_i_fp_fan_Bridge__is(CALLER this)) return (t_TemperatureControl_Fan_i_fp_fan_Bridge) this;
  sfAbortImpl(CALLER "Invalid cast to t.TemperatureControl.Fan_i_fp_fan_Bridge.");
  abort();
}

void t_TemperatureControl_Fan_i_fp_fan_Bridge_apply(STACK_FRAME t_TemperatureControl_Fan_i_fp_fan_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_9AF35E dispatchTriggers, art_Port_2ED9E6 fanCmd, art_Port_0A16CC fanAck);

void t_TemperatureControl_Fan_i_fp_fan_Bridge_init_c_initialization_api(STACK_FRAME_ONLY);

void t_TemperatureControl_Fan_i_fp_fan_Bridge_init_c_operational_api(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif