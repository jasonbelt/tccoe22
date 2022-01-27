#ifndef TEMPCONTROL_I_TCP_TEMPCONTROL_API_H
#define TEMPCONTROL_I_TCP_TEMPCONTROL_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_currentTemp__t_TemperatureControl_TempControl_i_tcp_tempControl(
  STACK_FRAME
  t_TemperatureControl_Temperature_i value);

bool api_get_fanAck__t_TemperatureControl_TempControl_i_tcp_tempControl(
  STACK_FRAME
  t_TemperatureControl_FanAck_Type *value);

bool api_get_setPoint__t_TemperatureControl_TempControl_i_tcp_tempControl(
  STACK_FRAME
  t_TemperatureControl_SetPoint_i value);

void api_put_fanCmd__t_TemperatureControl_TempControl_i_tcp_tempControl(
  STACK_FRAME
  t_TemperatureControl_FanCmd_Type value);

bool api_get_tempChanged__t_TemperatureControl_TempControl_i_tcp_tempControl(STACK_FRAME_ONLY);

void api_logInfo__t_TemperatureControl_TempControl_i_tcp_tempControl(
  STACK_FRAME
  String str);

void api_logDebug__t_TemperatureControl_TempControl_i_tcp_tempControl(
  STACK_FRAME
  String str);

void api_logError__t_TemperatureControl_TempControl_i_tcp_tempControl(
  STACK_FRAME
  String str);

#endif
