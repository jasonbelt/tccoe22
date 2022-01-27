#ifndef SIREUM_H_t_TemperatureControl_Fan_i_fp_fan
#define SIREUM_H_t_TemperatureControl_Fan_i_fp_fan

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit t_TemperatureControl_Fan_i_fp_fan_initialise(STACK_FRAME t_TemperatureControl_Fan_i_Initialization_Api api);

Unit t_TemperatureControl_Fan_i_fp_fan_handle_fanCmd(STACK_FRAME t_TemperatureControl_Fan_i_Operational_Api api, t_TemperatureControl_FanCmd_Type value);

Unit t_TemperatureControl_Fan_i_fp_fan_finalise(STACK_FRAME t_TemperatureControl_Fan_i_Operational_Api api);

#ifdef __cplusplus
}
#endif

#endif