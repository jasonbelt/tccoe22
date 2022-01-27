#include <all.h>

// Some[t.TemperatureControl.Fan_i_Initialization_Api]

B Some_C959A2__eq(Some_C959A2 this, Some_C959A2 other) {
  if (t_TemperatureControl_Fan_i_Initialization_Api__ne((t_TemperatureControl_Fan_i_Initialization_Api) &this->value, (t_TemperatureControl_Fan_i_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_C959A2__ne(Some_C959A2 this, Some_C959A2 other);

void Some_C959A2_string_(STACK_FRAME String result, Some_C959A2 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  t_TemperatureControl_Fan_i_Initialization_Api_string_(SF result, (t_TemperatureControl_Fan_i_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_C959A2_cprint(Some_C959A2 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  t_TemperatureControl_Fan_i_Initialization_Api_cprint((t_TemperatureControl_Fan_i_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_C959A2__is(STACK_FRAME void* this);
Some_C959A2 Some_C959A2__as(STACK_FRAME void *this);

void Some_C959A2_apply(STACK_FRAME Some_C959A2 this, t_TemperatureControl_Fan_i_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_C959A2", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct t_TemperatureControl_Fan_i_Initialization_Api));
}