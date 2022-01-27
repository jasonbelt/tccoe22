#include <all.h>

// Some[t.TemperatureControl.TempControl_i_Operational_Api]

B Some_E49AF0__eq(Some_E49AF0 this, Some_E49AF0 other) {
  if (t_TemperatureControl_TempControl_i_Operational_Api__ne((t_TemperatureControl_TempControl_i_Operational_Api) &this->value, (t_TemperatureControl_TempControl_i_Operational_Api) &other->value)) return F;
  return T;
}

B Some_E49AF0__ne(Some_E49AF0 this, Some_E49AF0 other);

void Some_E49AF0_string_(STACK_FRAME String result, Some_E49AF0 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  t_TemperatureControl_TempControl_i_Operational_Api_string_(SF result, (t_TemperatureControl_TempControl_i_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_E49AF0_cprint(Some_E49AF0 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  t_TemperatureControl_TempControl_i_Operational_Api_cprint((t_TemperatureControl_TempControl_i_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_E49AF0__is(STACK_FRAME void* this);
Some_E49AF0 Some_E49AF0__as(STACK_FRAME void *this);

void Some_E49AF0_apply(STACK_FRAME Some_E49AF0 this, t_TemperatureControl_TempControl_i_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_E49AF0", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct t_TemperatureControl_TempControl_i_Operational_Api));
}