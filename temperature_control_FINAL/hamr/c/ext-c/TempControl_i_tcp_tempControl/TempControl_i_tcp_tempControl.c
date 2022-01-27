#include <TempControl_i_tcp_tempControl_api.h>
#include <TempControl_i_tcp_tempControl.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

static char *component_id = "TempControlSystem_i_Instance_tcp_tempControl";

struct t_TemperatureControl_SetPoint_i setPoint;

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl.c", "",
                    "t_TemperatureControl_TempControl_i_tcp_tempControl_initialise_", 0);

  // setPoint port not currently hooked up so create default value
  DeclNewt_TemperatureControl_Temperature_i(low);
  low.degrees = MIN_TEMP;
  low.unit = t_TemperatureControl_TempUnit_Type_Fahrenheit;

  DeclNewt_TemperatureControl_Temperature_i(high);
  high.degrees = MAX_TEMP;
  high.unit = t_TemperatureControl_TempUnit_Type_Fahrenheit;

  setPoint.low = low;
  setPoint.high = high;
}

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_handle_fanAck_(STACK_FRAME
                                                                       t_TemperatureControl_FanAck_Type value) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl.c", "",
                    "t_TemperatureControl_TempControl_i_tcp_tempControl_handle_fanAck_", 0);

  DeclNewString(_str);
  String str = (String) &_str;
  String__append(str, string("received fanAck "));
  t_TemperatureControl_FanAck_Type_string_(SF str, value);
  api_logInfo__t_TemperatureControl_TempControl_i_tcp_tempControl(SF str);

  if (value == t_TemperatureControl_FanAck_Type_Error) {
    str = string("Actuation failed!");
  } else {
    str = string("Actuation worked!");
  }
  api_logInfo__t_TemperatureControl_TempControl_i_tcp_tempControl(SF str);
}

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_handle_setPoint_(
    STACK_FRAME
    t_TemperatureControl_SetPoint_i value) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl.c", "",
                    "t_TemperatureControl_TempControl_i_tcp_tempControl_handle_setPoint_", 0);

  DeclNewString(_str);
  String str = (String) &_str;
  String__append(str, string("received setPoint "));
  t_TemperatureControl_SetPoint_i_string_(SF str, value);
  api_logInfo__t_TemperatureControl_TempControl_i_tcp_tempControl(SF str);

  setPoint = convertSetPointToFahrenheit(value);
}

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_handle_tempChanged_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl.c", "",
                    "t_TemperatureControl_TempControl_i_tcp_tempControl_handle_tempChanged_", 0);

  DeclNewt_TemperatureControl_Temperature_i(currTemp);
  if (api_get_currentTemp__t_TemperatureControl_TempControl_i_tcp_tempControl(SF &currTemp)) {
    struct t_TemperatureControl_Temperature_i currTempInF =
        convertTemperatureToFahrenheit(&currTemp);

    DeclNewString(_str1);
    String str = (String) &_str1;
    String__append(str, string("Received: "));
    t_TemperatureControl_Temperature_i_string_(SF str, &currTempInF);
    api_logInfo__t_TemperatureControl_TempControl_i_tcp_tempControl(SF str);

    DeclNewString(_str2);
    str = (String) &_str2;
    if (currTempInF.degrees > setPoint.high.degrees) {
      String__append(str, string("Sent fan command: "));
      api_put_fanCmd__t_TemperatureControl_TempControl_i_tcp_tempControl(SF
                                                                         t_TemperatureControl_FanCmd_Type_On);
      t_TemperatureControl_FanCmd_Type_string_(SF str,
                                               t_TemperatureControl_FanCmd_Type_On);
    } else if (currTempInF.degrees < setPoint.low.degrees) {
      String__append(str, string("Sent fan command: "));
      api_put_fanCmd__t_TemperatureControl_TempControl_i_tcp_tempControl(SF
                                                                         t_TemperatureControl_FanCmd_Type_Off);
      t_TemperatureControl_FanCmd_Type_string_(SF str,
                                               t_TemperatureControl_FanCmd_Type_Off);
    } else {
      String__append(str, string("Temperature ok:"));
    }

    api_logInfo__t_TemperatureControl_TempControl_i_tcp_tempControl(SF str);
  }
}

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl.c", "",
                    "t_TemperatureControl_TempControl_i_tcp_tempControl_finalise_", 0);
  // do nothing
}