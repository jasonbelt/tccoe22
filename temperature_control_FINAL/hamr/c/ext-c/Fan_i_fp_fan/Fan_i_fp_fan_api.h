#ifndef FAN_I_FP_FAN_API_H
#define FAN_I_FP_FAN_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_fanCmd__t_TemperatureControl_Fan_i_fp_fan(
  STACK_FRAME
  t_TemperatureControl_FanCmd_Type *value);

void api_put_fanAck__t_TemperatureControl_Fan_i_fp_fan(
  STACK_FRAME
  t_TemperatureControl_FanAck_Type value);

void api_logInfo__t_TemperatureControl_Fan_i_fp_fan(
  STACK_FRAME
  String str);

void api_logDebug__t_TemperatureControl_Fan_i_fp_fan(
  STACK_FRAME
  String str);

void api_logError__t_TemperatureControl_Fan_i_fp_fan(
  STACK_FRAME
  String str);

#endif
