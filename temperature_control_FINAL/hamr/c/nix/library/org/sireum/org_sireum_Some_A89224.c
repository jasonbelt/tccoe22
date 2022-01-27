#include <all.h>

// Some[t.TemperatureControl.Fan_i_Operational_Api]

B Some_A89224__eq(Some_A89224 this, Some_A89224 other) {
  if (t_TemperatureControl_Fan_i_Operational_Api__ne((t_TemperatureControl_Fan_i_Operational_Api) &this->value, (t_TemperatureControl_Fan_i_Operational_Api) &other->value)) return F;
  return T;
}

B Some_A89224__ne(Some_A89224 this, Some_A89224 other);

void Some_A89224_string_(STACK_FRAME String result, Some_A89224 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  t_TemperatureControl_Fan_i_Operational_Api_string_(SF result, (t_TemperatureControl_Fan_i_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_A89224_cprint(Some_A89224 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  t_TemperatureControl_Fan_i_Operational_Api_cprint((t_TemperatureControl_Fan_i_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_A89224__is(STACK_FRAME void* this);
Some_A89224 Some_A89224__as(STACK_FRAME void *this);

void Some_A89224_apply(STACK_FRAME Some_A89224 this, t_TemperatureControl_Fan_i_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_A89224", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct t_TemperatureControl_Fan_i_Operational_Api));
}