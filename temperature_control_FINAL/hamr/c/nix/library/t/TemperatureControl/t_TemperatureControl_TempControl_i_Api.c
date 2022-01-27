#include <all.h>

Unit t_TemperatureControl_TempControl_i_Initialization_Api_logInfo_(STACK_FRAME t_TemperatureControl_TempControl_i_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "TempControl_i_Api.scala", "t.TemperatureControl.TempControl_i_Api", "logInfo", 0);

  sfUpdateLoc(22);
  {
    art_Art_logInfo(SF t_TemperatureControl_TempControl_i_Initialization_Api_id_(this), (String) msg);
  }
}

Unit t_TemperatureControl_TempControl_i_Initialization_Api_logDebug_(STACK_FRAME t_TemperatureControl_TempControl_i_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "TempControl_i_Api.scala", "t.TemperatureControl.TempControl_i_Api", "logDebug", 0);

  sfUpdateLoc(26);
  {
    art_Art_logDebug(SF t_TemperatureControl_TempControl_i_Initialization_Api_id_(this), (String) msg);
  }
}

Unit t_TemperatureControl_TempControl_i_Initialization_Api_logError_(STACK_FRAME t_TemperatureControl_TempControl_i_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "TempControl_i_Api.scala", "t.TemperatureControl.TempControl_i_Api", "logError", 0);

  sfUpdateLoc(30);
  {
    art_Art_logError(SF t_TemperatureControl_TempControl_i_Initialization_Api_id_(this), (String) msg);
  }
}

Unit t_TemperatureControl_TempControl_i_Operational_Api_logInfo_(STACK_FRAME t_TemperatureControl_TempControl_i_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "TempControl_i_Api.scala", "t.TemperatureControl.TempControl_i_Api", "logInfo", 0);

  sfUpdateLoc(22);
  {
    art_Art_logInfo(SF t_TemperatureControl_TempControl_i_Operational_Api_id_(this), (String) msg);
  }
}

Unit t_TemperatureControl_TempControl_i_Operational_Api_logDebug_(STACK_FRAME t_TemperatureControl_TempControl_i_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "TempControl_i_Api.scala", "t.TemperatureControl.TempControl_i_Api", "logDebug", 0);

  sfUpdateLoc(26);
  {
    art_Art_logDebug(SF t_TemperatureControl_TempControl_i_Operational_Api_id_(this), (String) msg);
  }
}

Unit t_TemperatureControl_TempControl_i_Operational_Api_logError_(STACK_FRAME t_TemperatureControl_TempControl_i_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "TempControl_i_Api.scala", "t.TemperatureControl.TempControl_i_Api", "logError", 0);

  sfUpdateLoc(30);
  {
    art_Art_logError(SF t_TemperatureControl_TempControl_i_Operational_Api_id_(this), (String) msg);
  }
}

Unit t_TemperatureControl_TempControl_i_Initialization_Api_put_fanCmd_(STACK_FRAME t_TemperatureControl_TempControl_i_Initialization_Api this, t_TemperatureControl_FanCmd_Type value) {
  DeclNewStackFrame(caller, "TempControl_i_Api.scala", "t.TemperatureControl.TempControl_i_Api", "put_fanCmd", 0);

  sfUpdateLoc(18);
  {
    DeclNewt_TemperatureControl_FanCmd_Payload(t_0);
    t_TemperatureControl_FanCmd_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF t_TemperatureControl_TempControl_i_Initialization_Api_fanCmd_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit t_TemperatureControl_TempControl_i_Operational_Api_put_fanCmd_(STACK_FRAME t_TemperatureControl_TempControl_i_Operational_Api this, t_TemperatureControl_FanCmd_Type value) {
  DeclNewStackFrame(caller, "TempControl_i_Api.scala", "t.TemperatureControl.TempControl_i_Api", "put_fanCmd", 0);

  sfUpdateLoc(18);
  {
    DeclNewt_TemperatureControl_FanCmd_Payload(t_0);
    t_TemperatureControl_FanCmd_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF t_TemperatureControl_TempControl_i_Operational_Api_fanCmd_Id_(this), (art_DataContent) (&t_0));
  }
}