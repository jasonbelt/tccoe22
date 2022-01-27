#include <Fan_i_fp_fan_api.h>
#include <Fan_i_fp_fan.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

static char *component_id = "TempControlSystem_i_Instance_fp_fan";

Unit t_TemperatureControl_Fan_i_fp_fan_handle_fanCmd_(STACK_FRAME
                                                      t_TemperatureControl_FanCmd_Type value) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan.c", "", "t_TemperatureControl_Fan_i_fp_fan_handle_fanCmd_", 0);

  DeclNewString(_str1);
  String str = (String) &_str1;
  String__append(str, string("received fanCmd "));
  t_TemperatureControl_FanCmd_Type_string_(SF str, value);
  api_logInfo__t_TemperatureControl_Fan_i_fp_fan(SF str);

  // always return 'Ok'
  t_TemperatureControl_FanAck_Type ack =
      t_TemperatureControl_FanAck_Type_Ok;

  api_put_fanAck__t_TemperatureControl_Fan_i_fp_fan(SF ack);

  DeclNewString(_str2);
  str = (String) &_str2;
  String__append(str, string("Actuation result: "));
  t_TemperatureControl_FanAck_Type_string_(SF str, ack);
  api_logInfo__t_TemperatureControl_Fan_i_fp_fan(SF str);
}

Unit t_TemperatureControl_Fan_i_fp_fan_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan.c", "", "t_TemperatureControl_Fan_i_fp_fan_initialise_", 0);
  // do nothing
}

Unit t_TemperatureControl_Fan_i_fp_fan_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan.c", "", "t_TemperatureControl_Fan_i_fp_fan_finalise_", 0);
  // do nothing
}
