#include <all.h>

Unit t_TemperatureControl_Fan_i_Initialization_Api_logInfo_(STACK_FRAME t_TemperatureControl_Fan_i_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "Fan_i_Api.scala", "t.TemperatureControl.Fan_i_Api", "logInfo", 0);

  sfUpdateLoc(19);
  {
    art_Art_logInfo(SF t_TemperatureControl_Fan_i_Initialization_Api_id_(this), (String) msg);
  }
}

Unit t_TemperatureControl_Fan_i_Initialization_Api_logDebug_(STACK_FRAME t_TemperatureControl_Fan_i_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "Fan_i_Api.scala", "t.TemperatureControl.Fan_i_Api", "logDebug", 0);

  sfUpdateLoc(23);
  {
    art_Art_logDebug(SF t_TemperatureControl_Fan_i_Initialization_Api_id_(this), (String) msg);
  }
}

Unit t_TemperatureControl_Fan_i_Initialization_Api_logError_(STACK_FRAME t_TemperatureControl_Fan_i_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "Fan_i_Api.scala", "t.TemperatureControl.Fan_i_Api", "logError", 0);

  sfUpdateLoc(27);
  {
    art_Art_logError(SF t_TemperatureControl_Fan_i_Initialization_Api_id_(this), (String) msg);
  }
}

Unit t_TemperatureControl_Fan_i_Operational_Api_logInfo_(STACK_FRAME t_TemperatureControl_Fan_i_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "Fan_i_Api.scala", "t.TemperatureControl.Fan_i_Api", "logInfo", 0);

  sfUpdateLoc(19);
  {
    art_Art_logInfo(SF t_TemperatureControl_Fan_i_Operational_Api_id_(this), (String) msg);
  }
}

Unit t_TemperatureControl_Fan_i_Operational_Api_logDebug_(STACK_FRAME t_TemperatureControl_Fan_i_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "Fan_i_Api.scala", "t.TemperatureControl.Fan_i_Api", "logDebug", 0);

  sfUpdateLoc(23);
  {
    art_Art_logDebug(SF t_TemperatureControl_Fan_i_Operational_Api_id_(this), (String) msg);
  }
}

Unit t_TemperatureControl_Fan_i_Operational_Api_logError_(STACK_FRAME t_TemperatureControl_Fan_i_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "Fan_i_Api.scala", "t.TemperatureControl.Fan_i_Api", "logError", 0);

  sfUpdateLoc(27);
  {
    art_Art_logError(SF t_TemperatureControl_Fan_i_Operational_Api_id_(this), (String) msg);
  }
}

Unit t_TemperatureControl_Fan_i_Initialization_Api_put_fanAck_(STACK_FRAME t_TemperatureControl_Fan_i_Initialization_Api this, t_TemperatureControl_FanAck_Type value) {
  DeclNewStackFrame(caller, "Fan_i_Api.scala", "t.TemperatureControl.Fan_i_Api", "put_fanAck", 0);

  sfUpdateLoc(15);
  {
    DeclNewt_TemperatureControl_FanAck_Payload(t_0);
    t_TemperatureControl_FanAck_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF t_TemperatureControl_Fan_i_Initialization_Api_fanAck_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit t_TemperatureControl_Fan_i_Operational_Api_put_fanAck_(STACK_FRAME t_TemperatureControl_Fan_i_Operational_Api this, t_TemperatureControl_FanAck_Type value) {
  DeclNewStackFrame(caller, "Fan_i_Api.scala", "t.TemperatureControl.Fan_i_Api", "put_fanAck", 0);

  sfUpdateLoc(15);
  {
    DeclNewt_TemperatureControl_FanAck_Payload(t_0);
    t_TemperatureControl_FanAck_Payload_apply(SF &t_0, value);
    art_Art_putValue(SF t_TemperatureControl_Fan_i_Operational_Api_fanAck_Id_(this), (art_DataContent) (&t_0));
  }
}