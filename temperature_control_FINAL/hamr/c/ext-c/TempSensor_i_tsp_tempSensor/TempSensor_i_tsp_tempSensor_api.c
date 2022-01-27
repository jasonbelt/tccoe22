#include <TempSensor_i_tsp_tempSensor_api.h>
#include <TempSensor_i_tsp_tempSensor.h>

static bool apis_initialized = false;
static struct t_TemperatureControl_TempSensor_i_Initialization_Api initialization_api;
static struct t_TemperatureControl_TempSensor_i_Operational_Api operational_api;

static void initialize_apis(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor.c", "", "initialize_apis", 0);

  // Option_87C81A = Option[t.TemperatureControl.TempSensor_i_Initialization_Api]
  Option_87C81A_get_(SF (t_TemperatureControl_TempSensor_i_Initialization_Api) &initialization_api, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_initialization_api(SF_LAST));
  // Option_10368D = Option[t.TemperatureControl.TempSensor_i_Operational_Api]
  Option_10368D_get_(SF (t_TemperatureControl_TempSensor_i_Operational_Api) &operational_api, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_operational_api(SF_LAST));
  apis_initialized = true;
}

// This file was auto-generated.  Do not edit

void api_put_currentTemp__t_TemperatureControl_TempSensor_i_tsp_tempSensor(
  STACK_FRAME
  t_TemperatureControl_Temperature_i value) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_api.c", "", "api_put_currentTemp__t_TemperatureControl_TempSensor_i_tsp_tempSensor", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  t_TemperatureControl_TempSensor_i_Initialization_Api_put_currentTemp_(
    SF
    &initialization_api,
    value);
}

void api_put_tempChanged__t_TemperatureControl_TempSensor_i_tsp_tempSensor(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_api.c", "", "api_put_tempChanged__t_TemperatureControl_TempSensor_i_tsp_tempSensor", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  t_TemperatureControl_TempSensor_i_Initialization_Api_put_tempChanged_(
    SF
    &initialization_api);
}

void api_logInfo__t_TemperatureControl_TempSensor_i_tsp_tempSensor(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_api.c", "", "api_logInfo__t_TemperatureControl_TempSensor_i_tsp_tempSensor", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  t_TemperatureControl_TempSensor_i_Initialization_Api_logInfo_(
    SF
    &initialization_api,
    str);
}

void api_logDebug__t_TemperatureControl_TempSensor_i_tsp_tempSensor(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_api.c", "", "api_logDebug__t_TemperatureControl_TempSensor_i_tsp_tempSensor", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  t_TemperatureControl_TempSensor_i_Initialization_Api_logDebug_(
    SF
    &initialization_api,
    str);
}

void api_logError__t_TemperatureControl_TempSensor_i_tsp_tempSensor(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_api.c", "", "api_logError__t_TemperatureControl_TempSensor_i_tsp_tempSensor", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  t_TemperatureControl_TempSensor_i_Initialization_Api_logError_(
    SF
    &initialization_api,
    str);
}

Unit t_TemperatureControl_TempSensor_i_tsp_tempSensor_initialise(
  STACK_FRAME
  t_TemperatureControl_TempSensor_i_Initialization_Api api) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_api.c", "", "t_TemperatureControl_TempSensor_i_tsp_tempSensor_initialise", 0);

  t_TemperatureControl_TempSensor_i_tsp_tempSensor_initialise_(SF_LAST);
}

Unit t_TemperatureControl_TempSensor_i_tsp_tempSensor_finalise(
  STACK_FRAME
  t_TemperatureControl_TempSensor_i_Operational_Api api) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_api.c", "", "t_TemperatureControl_TempSensor_i_tsp_tempSensor_finalise", 0);

  t_TemperatureControl_TempSensor_i_tsp_tempSensor_finalise_(SF_LAST);
}

Unit t_TemperatureControl_TempSensor_i_tsp_tempSensor_timeTriggered(
  STACK_FRAME
  t_TemperatureControl_TempSensor_i_Operational_Api api) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_api.c", "", "t_TemperatureControl_TempSensor_i_tsp_tempSensor_timeTriggered", 0);

  t_TemperatureControl_TempSensor_i_tsp_tempSensor_timeTriggered_(SF_LAST);
}
