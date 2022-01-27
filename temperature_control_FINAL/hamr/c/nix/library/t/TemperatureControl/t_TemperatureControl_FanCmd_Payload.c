#include <all.h>

// t.TemperatureControl.FanCmd_Payload

B t_TemperatureControl_FanCmd_Payload__eq(t_TemperatureControl_FanCmd_Payload this, t_TemperatureControl_FanCmd_Payload other) {
  if (t_TemperatureControl_FanCmd_Type__ne(this->value, other->value)) return F;
  return T;
}

B t_TemperatureControl_FanCmd_Payload__ne(t_TemperatureControl_FanCmd_Payload this, t_TemperatureControl_FanCmd_Payload other);

void t_TemperatureControl_FanCmd_Payload_string_(STACK_FRAME String result, t_TemperatureControl_FanCmd_Payload this) {
  DeclNewStackFrame(caller, "FanCmd.scala", "t.TemperatureControl.FanCmd_Payload", "string", 0);
  String_string_(SF result, string("FanCmd_Payload("));
  t_TemperatureControl_FanCmd_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void t_TemperatureControl_FanCmd_Payload_cprint(t_TemperatureControl_FanCmd_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("FanCmd_Payload("), isOut);
  t_TemperatureControl_FanCmd_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B t_TemperatureControl_FanCmd_Payload__is(STACK_FRAME void* this);
t_TemperatureControl_FanCmd_Payload t_TemperatureControl_FanCmd_Payload__as(STACK_FRAME void *this);

void t_TemperatureControl_FanCmd_Payload_apply(STACK_FRAME t_TemperatureControl_FanCmd_Payload this, t_TemperatureControl_FanCmd_Type value) {
  DeclNewStackFrame(caller, "FanCmd.scala", "t.TemperatureControl.FanCmd_Payload", "apply", 0);
  this->value = value;
}