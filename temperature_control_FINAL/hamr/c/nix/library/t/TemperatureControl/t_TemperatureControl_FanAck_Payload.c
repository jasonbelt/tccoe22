#include <all.h>

// t.TemperatureControl.FanAck_Payload

B t_TemperatureControl_FanAck_Payload__eq(t_TemperatureControl_FanAck_Payload this, t_TemperatureControl_FanAck_Payload other) {
  if (t_TemperatureControl_FanAck_Type__ne(this->value, other->value)) return F;
  return T;
}

B t_TemperatureControl_FanAck_Payload__ne(t_TemperatureControl_FanAck_Payload this, t_TemperatureControl_FanAck_Payload other);

void t_TemperatureControl_FanAck_Payload_string_(STACK_FRAME String result, t_TemperatureControl_FanAck_Payload this) {
  DeclNewStackFrame(caller, "FanAck.scala", "t.TemperatureControl.FanAck_Payload", "string", 0);
  String_string_(SF result, string("FanAck_Payload("));
  t_TemperatureControl_FanAck_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void t_TemperatureControl_FanAck_Payload_cprint(t_TemperatureControl_FanAck_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("FanAck_Payload("), isOut);
  t_TemperatureControl_FanAck_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B t_TemperatureControl_FanAck_Payload__is(STACK_FRAME void* this);
t_TemperatureControl_FanAck_Payload t_TemperatureControl_FanAck_Payload__as(STACK_FRAME void *this);

void t_TemperatureControl_FanAck_Payload_apply(STACK_FRAME t_TemperatureControl_FanAck_Payload this, t_TemperatureControl_FanAck_Type value) {
  DeclNewStackFrame(caller, "FanAck.scala", "t.TemperatureControl.FanAck_Payload", "apply", 0);
  this->value = value;
}