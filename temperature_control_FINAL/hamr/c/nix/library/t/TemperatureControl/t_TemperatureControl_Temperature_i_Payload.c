#include <all.h>

// t.TemperatureControl.Temperature_i_Payload

B t_TemperatureControl_Temperature_i_Payload__eq(t_TemperatureControl_Temperature_i_Payload this, t_TemperatureControl_Temperature_i_Payload other) {
  if (t_TemperatureControl_Temperature_i__ne((t_TemperatureControl_Temperature_i) &this->value, (t_TemperatureControl_Temperature_i) &other->value)) return F;
  return T;
}

B t_TemperatureControl_Temperature_i_Payload__ne(t_TemperatureControl_Temperature_i_Payload this, t_TemperatureControl_Temperature_i_Payload other);

void t_TemperatureControl_Temperature_i_Payload_string_(STACK_FRAME String result, t_TemperatureControl_Temperature_i_Payload this) {
  DeclNewStackFrame(caller, "Temperature_i.scala", "t.TemperatureControl.Temperature_i_Payload", "string", 0);
  String_string_(SF result, string("Temperature_i_Payload("));
  t_TemperatureControl_Temperature_i_string_(SF result, (t_TemperatureControl_Temperature_i) &this->value);
  String_string_(SF result, string(")"));
}

void t_TemperatureControl_Temperature_i_Payload_cprint(t_TemperatureControl_Temperature_i_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Temperature_i_Payload("), isOut);
  t_TemperatureControl_Temperature_i_cprint((t_TemperatureControl_Temperature_i) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B t_TemperatureControl_Temperature_i_Payload__is(STACK_FRAME void* this);
t_TemperatureControl_Temperature_i_Payload t_TemperatureControl_Temperature_i_Payload__as(STACK_FRAME void *this);

void t_TemperatureControl_Temperature_i_Payload_apply(STACK_FRAME t_TemperatureControl_Temperature_i_Payload this, t_TemperatureControl_Temperature_i value) {
  DeclNewStackFrame(caller, "Temperature_i.scala", "t.TemperatureControl.Temperature_i_Payload", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct t_TemperatureControl_Temperature_i));
}