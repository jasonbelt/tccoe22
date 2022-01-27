#include <Fan_i_fp_fan_api.h>
#include <Fan_i_fp_fan.h>

static bool apis_initialized = false;
static struct t_TemperatureControl_Fan_i_Initialization_Api initialization_api;
static struct t_TemperatureControl_Fan_i_Operational_Api operational_api;

static void initialize_apis(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan.c", "", "initialize_apis", 0);

  // Option_74C297 = Option[t.TemperatureControl.Fan_i_Initialization_Api]
  Option_74C297_get_(SF (t_TemperatureControl_Fan_i_Initialization_Api) &initialization_api, t_TemperatureControl_Fan_i_fp_fan_Bridge_c_initialization_api(SF_LAST));
  // Option_A8F8FC = Option[t.TemperatureControl.Fan_i_Operational_Api]
  Option_A8F8FC_get_(SF (t_TemperatureControl_Fan_i_Operational_Api) &operational_api, t_TemperatureControl_Fan_i_fp_fan_Bridge_c_operational_api(SF_LAST));
  apis_initialized = true;
}

// This file was auto-generated.  Do not edit

bool api_get_fanCmd__t_TemperatureControl_Fan_i_fp_fan(
  STACK_FRAME
  t_TemperatureControl_FanCmd_Type *value){
  DeclNewStackFrame(caller, "Fan_i_fp_fan_api.c", "", "api_get_fanCmd__t_TemperatureControl_Fan_i_fp_fan", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  // Option_2B0611 = Option[t.TemperatureControl.FanCmd.Type]
  // Some_779716 = Some[t.TemperatureControl.FanCmd.Type]
  DeclNewOption_2B0611(t_0);
  t_TemperatureControl_Fan_i_Operational_Api_get_fanCmd_(
    SF
    (Option_2B0611) &t_0,
    &operational_api);

  if(t_0.type == TSome_779716){
    *value = t_0.Some_779716.value;
    return true;
  } else {
    return false;
  }
}

void api_put_fanAck__t_TemperatureControl_Fan_i_fp_fan(
  STACK_FRAME
  t_TemperatureControl_FanAck_Type value) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_api.c", "", "api_put_fanAck__t_TemperatureControl_Fan_i_fp_fan", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  t_TemperatureControl_Fan_i_Initialization_Api_put_fanAck_(
    SF
    &initialization_api,
    value);
}

void api_logInfo__t_TemperatureControl_Fan_i_fp_fan(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_api.c", "", "api_logInfo__t_TemperatureControl_Fan_i_fp_fan", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  t_TemperatureControl_Fan_i_Initialization_Api_logInfo_(
    SF
    &initialization_api,
    str);
}

void api_logDebug__t_TemperatureControl_Fan_i_fp_fan(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_api.c", "", "api_logDebug__t_TemperatureControl_Fan_i_fp_fan", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  t_TemperatureControl_Fan_i_Initialization_Api_logDebug_(
    SF
    &initialization_api,
    str);
}

void api_logError__t_TemperatureControl_Fan_i_fp_fan(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_api.c", "", "api_logError__t_TemperatureControl_Fan_i_fp_fan", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  t_TemperatureControl_Fan_i_Initialization_Api_logError_(
    SF
    &initialization_api,
    str);
}

Unit t_TemperatureControl_Fan_i_fp_fan_initialise(
  STACK_FRAME
  t_TemperatureControl_Fan_i_Initialization_Api api) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_api.c", "", "t_TemperatureControl_Fan_i_fp_fan_initialise", 0);

  t_TemperatureControl_Fan_i_fp_fan_initialise_(SF_LAST);
}

Unit t_TemperatureControl_Fan_i_fp_fan_finalise(
  STACK_FRAME
  t_TemperatureControl_Fan_i_Operational_Api api) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_api.c", "", "t_TemperatureControl_Fan_i_fp_fan_finalise", 0);

  t_TemperatureControl_Fan_i_fp_fan_finalise_(SF_LAST);
}

Unit t_TemperatureControl_Fan_i_fp_fan_handle_fanCmd(
  STACK_FRAME
  t_TemperatureControl_Fan_i_Operational_Api api,
  t_TemperatureControl_FanCmd_Type value) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_api.c", "", "t_TemperatureControl_Fan_i_fp_fan_handle_fanCmd", 0);

  t_TemperatureControl_Fan_i_fp_fan_handle_fanCmd_(SF value);
}
