#include <TempControl_i_tcp_tempControl_api.h>
#include <TempControl_i_tcp_tempControl.h>

static bool apis_initialized = false;
static struct t_TemperatureControl_TempControl_i_Initialization_Api initialization_api;
static struct t_TemperatureControl_TempControl_i_Operational_Api operational_api;

static void initialize_apis(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl.c", "", "initialize_apis", 0);

  // Option_BCC9E8 = Option[t.TemperatureControl.TempControl_i_Initialization_Api]
  Option_BCC9E8_get_(SF (t_TemperatureControl_TempControl_i_Initialization_Api) &initialization_api, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_initialization_api(SF_LAST));
  // Option_3B7208 = Option[t.TemperatureControl.TempControl_i_Operational_Api]
  Option_3B7208_get_(SF (t_TemperatureControl_TempControl_i_Operational_Api) &operational_api, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_operational_api(SF_LAST));
  apis_initialized = true;
}

// This file was auto-generated.  Do not edit

bool api_get_currentTemp__t_TemperatureControl_TempControl_i_tcp_tempControl(
  STACK_FRAME
  t_TemperatureControl_Temperature_i value){
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_api.c", "", "api_get_currentTemp__t_TemperatureControl_TempControl_i_tcp_tempControl", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  // Option_78CB14 = Option[t.TemperatureControl.Temperature_i]
  // Some_14C467 = Some[t.TemperatureControl.Temperature_i]
  DeclNewOption_78CB14(t_0);
  t_TemperatureControl_TempControl_i_Operational_Api_get_currentTemp_(
    SF
    (Option_78CB14) &t_0,
    &operational_api);

  if(t_0.type == TSome_14C467){
    Type_assign(value, &t_0.Some_14C467.value, sizeof(struct t_TemperatureControl_Temperature_i));
    return true;
  } else {
    return false;
  }
}

bool api_get_fanAck__t_TemperatureControl_TempControl_i_tcp_tempControl(
  STACK_FRAME
  t_TemperatureControl_FanAck_Type *value){
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_api.c", "", "api_get_fanAck__t_TemperatureControl_TempControl_i_tcp_tempControl", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  // Option_C5A124 = Option[t.TemperatureControl.FanAck.Type]
  // Some_07AD88 = Some[t.TemperatureControl.FanAck.Type]
  DeclNewOption_C5A124(t_0);
  t_TemperatureControl_TempControl_i_Operational_Api_get_fanAck_(
    SF
    (Option_C5A124) &t_0,
    &operational_api);

  if(t_0.type == TSome_07AD88){
    *value = t_0.Some_07AD88.value;
    return true;
  } else {
    return false;
  }
}

bool api_get_setPoint__t_TemperatureControl_TempControl_i_tcp_tempControl(
  STACK_FRAME
  t_TemperatureControl_SetPoint_i value){
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_api.c", "", "api_get_setPoint__t_TemperatureControl_TempControl_i_tcp_tempControl", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  // Option_EBB396 = Option[t.TemperatureControl.SetPoint_i]
  // Some_D8D240 = Some[t.TemperatureControl.SetPoint_i]
  DeclNewOption_EBB396(t_0);
  t_TemperatureControl_TempControl_i_Operational_Api_get_setPoint_(
    SF
    (Option_EBB396) &t_0,
    &operational_api);

  if(t_0.type == TSome_D8D240){
    Type_assign(value, &t_0.Some_D8D240.value, sizeof(struct t_TemperatureControl_SetPoint_i));
    return true;
  } else {
    return false;
  }
}

void api_put_fanCmd__t_TemperatureControl_TempControl_i_tcp_tempControl(
  STACK_FRAME
  t_TemperatureControl_FanCmd_Type value) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_api.c", "", "api_put_fanCmd__t_TemperatureControl_TempControl_i_tcp_tempControl", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  t_TemperatureControl_TempControl_i_Initialization_Api_put_fanCmd_(
    SF
    &initialization_api,
    value);
}

bool api_get_tempChanged__t_TemperatureControl_TempControl_i_tcp_tempControl(STACK_FRAME_ONLY){
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_api.c", "", "api_get_tempChanged__t_TemperatureControl_TempControl_i_tcp_tempControl", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  // Option_C622DB = Option[art.Empty]
  // Some_4782C6 = Some[art.Empty]
  DeclNewOption_C622DB(t_0);
  t_TemperatureControl_TempControl_i_Operational_Api_get_tempChanged_(
    SF
    (Option_C622DB) &t_0,
    &operational_api);

  if(t_0.type == TSome_4782C6){
    return true;
  } else {
    return false;
  }
}

void api_logInfo__t_TemperatureControl_TempControl_i_tcp_tempControl(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_api.c", "", "api_logInfo__t_TemperatureControl_TempControl_i_tcp_tempControl", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  t_TemperatureControl_TempControl_i_Initialization_Api_logInfo_(
    SF
    &initialization_api,
    str);
}

void api_logDebug__t_TemperatureControl_TempControl_i_tcp_tempControl(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_api.c", "", "api_logDebug__t_TemperatureControl_TempControl_i_tcp_tempControl", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  t_TemperatureControl_TempControl_i_Initialization_Api_logDebug_(
    SF
    &initialization_api,
    str);
}

void api_logError__t_TemperatureControl_TempControl_i_tcp_tempControl(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_api.c", "", "api_logError__t_TemperatureControl_TempControl_i_tcp_tempControl", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  t_TemperatureControl_TempControl_i_Initialization_Api_logError_(
    SF
    &initialization_api,
    str);
}

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_initialise(
  STACK_FRAME
  t_TemperatureControl_TempControl_i_Initialization_Api api) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_api.c", "", "t_TemperatureControl_TempControl_i_tcp_tempControl_initialise", 0);

  t_TemperatureControl_TempControl_i_tcp_tempControl_initialise_(SF_LAST);
}

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_finalise(
  STACK_FRAME
  t_TemperatureControl_TempControl_i_Operational_Api api) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_api.c", "", "t_TemperatureControl_TempControl_i_tcp_tempControl_finalise", 0);

  t_TemperatureControl_TempControl_i_tcp_tempControl_finalise_(SF_LAST);
}

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_handle_fanAck(
  STACK_FRAME
  t_TemperatureControl_TempControl_i_Operational_Api api,
  t_TemperatureControl_FanAck_Type value) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_api.c", "", "t_TemperatureControl_TempControl_i_tcp_tempControl_handle_fanAck", 0);

  t_TemperatureControl_TempControl_i_tcp_tempControl_handle_fanAck_(SF value);
}

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_handle_setPoint(
  STACK_FRAME
  t_TemperatureControl_TempControl_i_Operational_Api api,
  t_TemperatureControl_SetPoint_i value) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_api.c", "", "t_TemperatureControl_TempControl_i_tcp_tempControl_handle_setPoint", 0);

  t_TemperatureControl_TempControl_i_tcp_tempControl_handle_setPoint_(SF value);
}

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_handle_tempChanged(
  STACK_FRAME
  t_TemperatureControl_TempControl_i_Operational_Api api) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_api.c", "", "t_TemperatureControl_TempControl_i_tcp_tempControl_handle_tempChanged", 0);

  t_TemperatureControl_TempControl_i_tcp_tempControl_handle_tempChanged_(SF_LAST);
}
