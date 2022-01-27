#include <all.h>

// Some[t.TemperatureControl.TempSensor_i_Operational_Api]

B Some_82706F__eq(Some_82706F this, Some_82706F other) {
  if (t_TemperatureControl_TempSensor_i_Operational_Api__ne((t_TemperatureControl_TempSensor_i_Operational_Api) &this->value, (t_TemperatureControl_TempSensor_i_Operational_Api) &other->value)) return F;
  return T;
}

B Some_82706F__ne(Some_82706F this, Some_82706F other);

void Some_82706F_string_(STACK_FRAME String result, Some_82706F this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  t_TemperatureControl_TempSensor_i_Operational_Api_string_(SF result, (t_TemperatureControl_TempSensor_i_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_82706F_cprint(Some_82706F this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  t_TemperatureControl_TempSensor_i_Operational_Api_cprint((t_TemperatureControl_TempSensor_i_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_82706F__is(STACK_FRAME void* this);
Some_82706F Some_82706F__as(STACK_FRAME void *this);

void Some_82706F_apply(STACK_FRAME Some_82706F this, t_TemperatureControl_TempSensor_i_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_82706F", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct t_TemperatureControl_TempSensor_i_Operational_Api));
}