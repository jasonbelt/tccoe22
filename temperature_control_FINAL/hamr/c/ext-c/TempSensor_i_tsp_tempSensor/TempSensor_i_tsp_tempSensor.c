#include <TempSensor_i_tsp_tempSensor_api.h>
#include <TempSensor_i_tsp_tempSensor.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

static char *component_id = "TempControlSystem_i_Instance_tsp_tempSensor";

void senseTemperature(t_TemperatureControl_Temperature_i result);

struct t_TemperatureControl_Temperature_i lastTemperature;
int delta = 4;

Unit t_TemperatureControl_TempSensor_i_tsp_tempSensor_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor.c", "",
                    "t_TemperatureControl_TempSensor_i_tsp_tempSensor_initialise_", 0);

  lastTemperature = createTempInFahrenheit(80.0);

  // initialize outgoing data port
  api_put_currentTemp__t_TemperatureControl_TempSensor_i_tsp_tempSensor(SF
                                                                        &lastTemperature);
}

Unit t_TemperatureControl_TempSensor_i_tsp_tempSensor_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor.c", "",
                    "t_TemperatureControl_TempSensor_i_tsp_tempSensor_timeTriggered_", 0);

  DeclNewt_TemperatureControl_Temperature_i(currTemp);
  senseTemperature(&currTemp);
  if (lastTemperature.degrees != currTemp.degrees) {
    lastTemperature = currTemp;

    api_put_currentTemp__t_TemperatureControl_TempSensor_i_tsp_tempSensor(SF
                                                                          &lastTemperature);

    api_put_tempChanged__t_TemperatureControl_TempSensor_i_tsp_tempSensor(SF_LAST);
  }
}

void senseTemperature(t_TemperatureControl_Temperature_i result) {
  // simulate getting temperature from sensor

  result->degrees = lastTemperature.degrees + delta;
  result->unit = lastTemperature.unit;

#ifndef SIREUM_NO_PRINT
  DeclNewString(_str);
  String str = (String) &_str;
  String__append(str, string("Sensed: "));
  t_TemperatureControl_Temperature_i_string_(SF str, result);
  api_logInfo__t_TemperatureControl_TempSensor_i_tsp_tempSensor(SF str);
#endif

  if (result->degrees < MIN_TEMP) delta = 4;
  else if (result->degrees > MAX_TEMP) delta = -4;
}

Unit t_TemperatureControl_TempSensor_i_tsp_tempSensor_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor.c", "",
                    "t_TemperatureControl_TempSensor_i_tsp_tempSensor_finalise_", 0);
  // do nothing
}
