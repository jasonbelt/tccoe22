#include <all.h>

// Some[t.TemperatureControl.Temperature_i]

B Some_14C467__eq(Some_14C467 this, Some_14C467 other) {
  if (t_TemperatureControl_Temperature_i__ne((t_TemperatureControl_Temperature_i) &this->value, (t_TemperatureControl_Temperature_i) &other->value)) return F;
  return T;
}

B Some_14C467__ne(Some_14C467 this, Some_14C467 other);

void Some_14C467_string_(STACK_FRAME String result, Some_14C467 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  t_TemperatureControl_Temperature_i_string_(SF result, (t_TemperatureControl_Temperature_i) &this->value);
  String_string_(SF result, string(")"));
}

void Some_14C467_cprint(Some_14C467 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  t_TemperatureControl_Temperature_i_cprint((t_TemperatureControl_Temperature_i) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_14C467__is(STACK_FRAME void* this);
Some_14C467 Some_14C467__as(STACK_FRAME void *this);

void Some_14C467_apply(STACK_FRAME Some_14C467 this, t_TemperatureControl_Temperature_i value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_14C467", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct t_TemperatureControl_Temperature_i));
}