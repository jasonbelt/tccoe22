#ifndef TEMPSENSOR_I_TSP_TEMPSENSOR_API_H
#define TEMPSENSOR_I_TSP_TEMPSENSOR_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

void api_put_currentTemp__t_TemperatureControl_TempSensor_i_tsp_tempSensor(
  STACK_FRAME
  t_TemperatureControl_Temperature_i value);

void api_put_tempChanged__t_TemperatureControl_TempSensor_i_tsp_tempSensor(STACK_FRAME_ONLY);

void api_logInfo__t_TemperatureControl_TempSensor_i_tsp_tempSensor(
  STACK_FRAME
  String str);

void api_logDebug__t_TemperatureControl_TempSensor_i_tsp_tempSensor(
  STACK_FRAME
  String str);

void api_logError__t_TemperatureControl_TempSensor_i_tsp_tempSensor(
  STACK_FRAME
  String str);

#endif
