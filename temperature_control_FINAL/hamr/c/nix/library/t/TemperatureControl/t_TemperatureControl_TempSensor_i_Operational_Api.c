#include <all.h>

// t.TemperatureControl.TempSensor_i_Operational_Api

B t_TemperatureControl_TempSensor_i_Operational_Api__eq(t_TemperatureControl_TempSensor_i_Operational_Api this, t_TemperatureControl_TempSensor_i_Operational_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->currentTemp_Id, other->currentTemp_Id)) return F;
  if (Z__ne(this->tempChanged_Id, other->tempChanged_Id)) return F;
  return T;
}

B t_TemperatureControl_TempSensor_i_Operational_Api__ne(t_TemperatureControl_TempSensor_i_Operational_Api this, t_TemperatureControl_TempSensor_i_Operational_Api other);

void t_TemperatureControl_TempSensor_i_Operational_Api_string_(STACK_FRAME String result, t_TemperatureControl_TempSensor_i_Operational_Api this) {
  DeclNewStackFrame(caller, "TempSensor_i_Api.scala", "t.TemperatureControl.TempSensor_i_Operational_Api", "string", 0);
  String_string_(SF result, string("TempSensor_i_Operational_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->currentTemp_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->tempChanged_Id);
  String_string_(SF result, string(")"));
}

void t_TemperatureControl_TempSensor_i_Operational_Api_cprint(t_TemperatureControl_TempSensor_i_Operational_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("TempSensor_i_Operational_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->currentTemp_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->tempChanged_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B t_TemperatureControl_TempSensor_i_Operational_Api__is(STACK_FRAME void* this);
t_TemperatureControl_TempSensor_i_Operational_Api t_TemperatureControl_TempSensor_i_Operational_Api__as(STACK_FRAME void *this);

void t_TemperatureControl_TempSensor_i_Operational_Api_apply(STACK_FRAME t_TemperatureControl_TempSensor_i_Operational_Api this, Z id, Z currentTemp_Id, Z tempChanged_Id) {
  DeclNewStackFrame(caller, "TempSensor_i_Api.scala", "t.TemperatureControl.TempSensor_i_Operational_Api", "apply", 0);
  this->id = id;
  this->currentTemp_Id = currentTemp_Id;
  this->tempChanged_Id = tempChanged_Id;
}