#include <all.h>

// Some[t.TemperatureControl.FanAck.Type]

B Some_07AD88__eq(Some_07AD88 this, Some_07AD88 other) {
  if (t_TemperatureControl_FanAck_Type__ne(this->value, other->value)) return F;
  return T;
}

B Some_07AD88__ne(Some_07AD88 this, Some_07AD88 other);

void Some_07AD88_string_(STACK_FRAME String result, Some_07AD88 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  t_TemperatureControl_FanAck_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void Some_07AD88_cprint(Some_07AD88 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  t_TemperatureControl_FanAck_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_07AD88__is(STACK_FRAME void* this);
Some_07AD88 Some_07AD88__as(STACK_FRAME void *this);

void Some_07AD88_apply(STACK_FRAME Some_07AD88 this, t_TemperatureControl_FanAck_Type value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_07AD88", "apply", 0);
  this->value = value;
}