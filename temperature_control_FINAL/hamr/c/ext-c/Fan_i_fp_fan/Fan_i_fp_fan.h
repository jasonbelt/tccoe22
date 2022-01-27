#ifndef FAN_I_FP_FAN_H
#define FAN_I_FP_FAN_H

#include <all.h>

Unit t_TemperatureControl_Fan_i_fp_fan_initialise_(STACK_FRAME_ONLY);

Unit t_TemperatureControl_Fan_i_fp_fan_finalise_(STACK_FRAME_ONLY);

Unit t_TemperatureControl_Fan_i_fp_fan_handle_fanCmd_(
  STACK_FRAME
  t_TemperatureControl_FanCmd_Type value);

#endif
