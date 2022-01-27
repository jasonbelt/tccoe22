#include <all.h>

Unit t_TemperatureControl_TempSensor_i_Initialization_Api_logInfo_(STACK_FRAME t_TemperatureControl_TempSensor_i_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "TempSensor_i_Api.scala", "t.TemperatureControl.TempSensor_i_Api", "logInfo", 0);

  sfUpdateLoc(23);
  {
    art_Art_logInfo(SF t_TemperatureControl_TempSensor_i_Initialization_Api_id_(this), (String) msg);
  }
}

Unit t_TemperatureControl_TempSensor_i_Initialization_Api_logDebug_(STACK_FRAME t_TemperatureControl_TempSensor_i_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "TempSensor_i_Api.scala", "t.TemperatureControl.TempSensor_i_Api", "logDebug", 0);

  sfUpdateLoc(27);
  {
    art_Art_logDebug(SF t_TemperatureControl_TempSensor_i_Initialization_Api_id_(this), (String) msg);
  }
}

Unit t_TemperatureControl_TempSensor_i_Initialization_Api_logError_(STACK_FRAME t_TemperatureControl_TempSensor_i_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "TempSensor_i_Api.scala", "t.TemperatureControl.TempSensor_i_Api", "logError", 0);

  sfUpdateLoc(31);
  {
    art_Art_logError(SF t_TemperatureControl_TempSensor_i_Initialization_Api_id_(this), (String) msg);
  }
}

Unit t_TemperatureControl_TempSensor_i_Operational_Api_logInfo_(STACK_FRAME t_TemperatureControl_TempSensor_i_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "TempSensor_i_Api.scala", "t.TemperatureControl.TempSensor_i_Api", "logInfo", 0);

  sfUpdateLoc(23);
  {
    art_Art_logInfo(SF t_TemperatureControl_TempSensor_i_Operational_Api_id_(this), (String) msg);
  }
}

Unit t_TemperatureControl_TempSensor_i_Operational_Api_logDebug_(STACK_FRAME t_TemperatureControl_TempSensor_i_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "TempSensor_i_Api.scala", "t.TemperatureControl.TempSensor_i_Api", "logDebug", 0);

  sfUpdateLoc(27);
  {
    art_Art_logDebug(SF t_TemperatureControl_TempSensor_i_Operational_Api_id_(this), (String) msg);
  }
}

Unit t_TemperatureControl_TempSensor_i_Operational_Api_logError_(STACK_FRAME t_TemperatureControl_TempSensor_i_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "TempSensor_i_Api.scala", "t.TemperatureControl.TempSensor_i_Api", "logError", 0);

  sfUpdateLoc(31);
  {
    art_Art_logError(SF t_TemperatureControl_TempSensor_i_Operational_Api_id_(this), (String) msg);
  }
}

Unit t_TemperatureControl_TempSensor_i_Initialization_Api_put_currentTemp_(STACK_FRAME t_TemperatureControl_TempSensor_i_Initialization_Api this, t_TemperatureControl_Temperature_i value) {
  DeclNewStackFrame(caller, "TempSensor_i_Api.scala", "t.TemperatureControl.TempSensor_i_Api", "put_currentTemp", 0);

  sfUpdateLoc(15);
  {
    DeclNewt_TemperatureControl_Temperature_i_Payload(t_0);
    t_TemperatureControl_Temperature_i_Payload_apply(SF &t_0, (t_TemperatureControl_Temperature_i) value);
    art_Art_putValue(SF t_TemperatureControl_TempSensor_i_Initialization_Api_currentTemp_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit t_TemperatureControl_TempSensor_i_Operational_Api_put_currentTemp_(STACK_FRAME t_TemperatureControl_TempSensor_i_Operational_Api this, t_TemperatureControl_Temperature_i value) {
  DeclNewStackFrame(caller, "TempSensor_i_Api.scala", "t.TemperatureControl.TempSensor_i_Api", "put_currentTemp", 0);

  sfUpdateLoc(15);
  {
    DeclNewt_TemperatureControl_Temperature_i_Payload(t_0);
    t_TemperatureControl_Temperature_i_Payload_apply(SF &t_0, (t_TemperatureControl_Temperature_i) value);
    art_Art_putValue(SF t_TemperatureControl_TempSensor_i_Operational_Api_currentTemp_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit t_TemperatureControl_TempSensor_i_Initialization_Api_put_tempChanged_(STACK_FRAME t_TemperatureControl_TempSensor_i_Initialization_Api this) {
  DeclNewStackFrame(caller, "TempSensor_i_Api.scala", "t.TemperatureControl.TempSensor_i_Api", "put_tempChanged", 0);

  sfUpdateLoc(19);
  {
    DeclNewart_Empty(t_0);
    art_Empty_apply(SF &t_0);
    art_Art_putValue(SF t_TemperatureControl_TempSensor_i_Initialization_Api_tempChanged_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit t_TemperatureControl_TempSensor_i_Operational_Api_put_tempChanged_(STACK_FRAME t_TemperatureControl_TempSensor_i_Operational_Api this) {
  DeclNewStackFrame(caller, "TempSensor_i_Api.scala", "t.TemperatureControl.TempSensor_i_Api", "put_tempChanged", 0);

  sfUpdateLoc(19);
  {
    DeclNewart_Empty(t_0);
    art_Empty_apply(SF &t_0);
    art_Art_putValue(SF t_TemperatureControl_TempSensor_i_Operational_Api_tempChanged_Id_(this), (art_DataContent) (&t_0));
  }
}