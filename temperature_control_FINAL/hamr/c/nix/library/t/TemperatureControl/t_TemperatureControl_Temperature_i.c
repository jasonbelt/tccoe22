#include <all.h>

// t.TemperatureControl.Temperature_i

B t_TemperatureControl_Temperature_i__eq(t_TemperatureControl_Temperature_i this, t_TemperatureControl_Temperature_i other) {
  if (F32__ne(this->degrees, other->degrees)) return F;
  if (t_TemperatureControl_TempUnit_Type__ne(this->unit, other->unit)) return F;
  return T;
}

B t_TemperatureControl_Temperature_i__ne(t_TemperatureControl_Temperature_i this, t_TemperatureControl_Temperature_i other);

void t_TemperatureControl_Temperature_i_string_(STACK_FRAME String result, t_TemperatureControl_Temperature_i this) {
  DeclNewStackFrame(caller, "Temperature_i.scala", "t.TemperatureControl.Temperature_i", "string", 0);
  String_string_(SF result, string("Temperature_i("));
  String sep = string(", ");
  F32_string_(SF result, this->degrees);
  String_string_(SF result, sep);
  t_TemperatureControl_TempUnit_Type_string_(SF result, this->unit);
  String_string_(SF result, string(")"));
}

void t_TemperatureControl_Temperature_i_cprint(t_TemperatureControl_Temperature_i this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Temperature_i("), isOut);
  String sep = string(", ");
  F32_cprint(this->degrees, isOut);
  String_cprint(sep, isOut);
  t_TemperatureControl_TempUnit_Type_cprint(this->unit, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B t_TemperatureControl_Temperature_i__is(STACK_FRAME void* this);
t_TemperatureControl_Temperature_i t_TemperatureControl_Temperature_i__as(STACK_FRAME void *this);

void t_TemperatureControl_Temperature_i_apply(STACK_FRAME t_TemperatureControl_Temperature_i this, F32 degrees, t_TemperatureControl_TempUnit_Type unit) {
  DeclNewStackFrame(caller, "Temperature_i.scala", "t.TemperatureControl.Temperature_i", "apply", 0);
  this->degrees = degrees;
  this->unit = unit;
}

void t_TemperatureControl_Temperature_i_example(STACK_FRAME t_TemperatureControl_Temperature_i result) {
  DeclNewStackFrame(caller, "Temperature_i.scala", "t.TemperatureControl.Temperature_i", "example", 0);
  F32 t_1 = t_Base_Types_Float_32_example(SF_LAST);
  DeclNewOption_40D664(t_2);
  t_TemperatureControl_TempUnit_Type_byOrdinal(SF (Option_40D664) &t_2, Z_C(0));
  t_TemperatureControl_TempUnit_Type t_3 = Option_40D664_get_(SF ((Option_40D664) &t_2));
  DeclNewt_TemperatureControl_Temperature_i(t_0);
  t_TemperatureControl_Temperature_i_apply(SF &t_0, t_1, t_3);
  Type_assign(result, (&t_0), sizeof(struct t_TemperatureControl_Temperature_i));
  return;
}