#include <all.h>

// Some[t.TemperatureControl.TempSensor_i_Initialization_Api]

B Some_23FE19__eq(Some_23FE19 this, Some_23FE19 other) {
  if (t_TemperatureControl_TempSensor_i_Initialization_Api__ne((t_TemperatureControl_TempSensor_i_Initialization_Api) &this->value, (t_TemperatureControl_TempSensor_i_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_23FE19__ne(Some_23FE19 this, Some_23FE19 other);

void Some_23FE19_string_(STACK_FRAME String result, Some_23FE19 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  t_TemperatureControl_TempSensor_i_Initialization_Api_string_(SF result, (t_TemperatureControl_TempSensor_i_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_23FE19_cprint(Some_23FE19 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  t_TemperatureControl_TempSensor_i_Initialization_Api_cprint((t_TemperatureControl_TempSensor_i_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_23FE19__is(STACK_FRAME void* this);
Some_23FE19 Some_23FE19__as(STACK_FRAME void *this);

void Some_23FE19_apply(STACK_FRAME Some_23FE19 this, t_TemperatureControl_TempSensor_i_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_23FE19", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct t_TemperatureControl_TempSensor_i_Initialization_Api));
}