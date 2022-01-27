#include <all.h>

// Some[t.TemperatureControl.FanCmd.Type]

B Some_779716__eq(Some_779716 this, Some_779716 other) {
  if (t_TemperatureControl_FanCmd_Type__ne(this->value, other->value)) return F;
  return T;
}

B Some_779716__ne(Some_779716 this, Some_779716 other);

void Some_779716_string_(STACK_FRAME String result, Some_779716 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  t_TemperatureControl_FanCmd_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void Some_779716_cprint(Some_779716 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  t_TemperatureControl_FanCmd_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_779716__is(STACK_FRAME void* this);
Some_779716 Some_779716__as(STACK_FRAME void *this);

void Some_779716_apply(STACK_FRAME Some_779716 this, t_TemperatureControl_FanCmd_Type value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_779716", "apply", 0);
  this->value = value;
}