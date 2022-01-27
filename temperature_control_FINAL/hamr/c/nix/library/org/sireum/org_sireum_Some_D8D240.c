#include <all.h>

// Some[t.TemperatureControl.SetPoint_i]

B Some_D8D240__eq(Some_D8D240 this, Some_D8D240 other) {
  if (t_TemperatureControl_SetPoint_i__ne((t_TemperatureControl_SetPoint_i) &this->value, (t_TemperatureControl_SetPoint_i) &other->value)) return F;
  return T;
}

B Some_D8D240__ne(Some_D8D240 this, Some_D8D240 other);

void Some_D8D240_string_(STACK_FRAME String result, Some_D8D240 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  t_TemperatureControl_SetPoint_i_string_(SF result, (t_TemperatureControl_SetPoint_i) &this->value);
  String_string_(SF result, string(")"));
}

void Some_D8D240_cprint(Some_D8D240 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  t_TemperatureControl_SetPoint_i_cprint((t_TemperatureControl_SetPoint_i) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_D8D240__is(STACK_FRAME void* this);
Some_D8D240 Some_D8D240__as(STACK_FRAME void *this);

void Some_D8D240_apply(STACK_FRAME Some_D8D240 this, t_TemperatureControl_SetPoint_i value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_D8D240", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct t_TemperatureControl_SetPoint_i));
}