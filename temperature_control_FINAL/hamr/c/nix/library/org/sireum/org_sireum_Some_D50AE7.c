#include <all.h>

// Some[t.TemperatureControl.TempControl_i_Initialization_Api]

B Some_D50AE7__eq(Some_D50AE7 this, Some_D50AE7 other) {
  if (t_TemperatureControl_TempControl_i_Initialization_Api__ne((t_TemperatureControl_TempControl_i_Initialization_Api) &this->value, (t_TemperatureControl_TempControl_i_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_D50AE7__ne(Some_D50AE7 this, Some_D50AE7 other);

void Some_D50AE7_string_(STACK_FRAME String result, Some_D50AE7 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  t_TemperatureControl_TempControl_i_Initialization_Api_string_(SF result, (t_TemperatureControl_TempControl_i_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_D50AE7_cprint(Some_D50AE7 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  t_TemperatureControl_TempControl_i_Initialization_Api_cprint((t_TemperatureControl_TempControl_i_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_D50AE7__is(STACK_FRAME void* this);
Some_D50AE7 Some_D50AE7__as(STACK_FRAME void *this);

void Some_D50AE7_apply(STACK_FRAME Some_D50AE7 this, t_TemperatureControl_TempControl_i_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_D50AE7", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct t_TemperatureControl_TempControl_i_Initialization_Api));
}