#include <all.h>

// Some[t.TemperatureControl.TempUnit.Type]

B Some_486E43__eq(Some_486E43 this, Some_486E43 other) {
  if (t_TemperatureControl_TempUnit_Type__ne(this->value, other->value)) return F;
  return T;
}

B Some_486E43__ne(Some_486E43 this, Some_486E43 other);

void Some_486E43_string_(STACK_FRAME String result, Some_486E43 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  t_TemperatureControl_TempUnit_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void Some_486E43_cprint(Some_486E43 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  t_TemperatureControl_TempUnit_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_486E43__is(STACK_FRAME void* this);
Some_486E43 Some_486E43__as(STACK_FRAME void *this);

void Some_486E43_apply(STACK_FRAME Some_486E43 this, t_TemperatureControl_TempUnit_Type value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_486E43", "apply", 0);
  this->value = value;
}