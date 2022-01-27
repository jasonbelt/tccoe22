#include <all.h>

// t.TemperatureControl.SetPoint_i

B t_TemperatureControl_SetPoint_i__eq(t_TemperatureControl_SetPoint_i this, t_TemperatureControl_SetPoint_i other) {
  if (t_TemperatureControl_Temperature_i__ne((t_TemperatureControl_Temperature_i) &this->low, (t_TemperatureControl_Temperature_i) &other->low)) return F;
  if (t_TemperatureControl_Temperature_i__ne((t_TemperatureControl_Temperature_i) &this->high, (t_TemperatureControl_Temperature_i) &other->high)) return F;
  return T;
}

B t_TemperatureControl_SetPoint_i__ne(t_TemperatureControl_SetPoint_i this, t_TemperatureControl_SetPoint_i other);

void t_TemperatureControl_SetPoint_i_string_(STACK_FRAME String result, t_TemperatureControl_SetPoint_i this) {
  DeclNewStackFrame(caller, "SetPoint_i.scala", "t.TemperatureControl.SetPoint_i", "string", 0);
  String_string_(SF result, string("SetPoint_i("));
  String sep = string(", ");
  t_TemperatureControl_Temperature_i_string_(SF result, (t_TemperatureControl_Temperature_i) &this->low);
  String_string_(SF result, sep);
  t_TemperatureControl_Temperature_i_string_(SF result, (t_TemperatureControl_Temperature_i) &this->high);
  String_string_(SF result, string(")"));
}

void t_TemperatureControl_SetPoint_i_cprint(t_TemperatureControl_SetPoint_i this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("SetPoint_i("), isOut);
  String sep = string(", ");
  t_TemperatureControl_Temperature_i_cprint((t_TemperatureControl_Temperature_i) &this->low, isOut);
  String_cprint(sep, isOut);
  t_TemperatureControl_Temperature_i_cprint((t_TemperatureControl_Temperature_i) &this->high, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B t_TemperatureControl_SetPoint_i__is(STACK_FRAME void* this);
t_TemperatureControl_SetPoint_i t_TemperatureControl_SetPoint_i__as(STACK_FRAME void *this);

void t_TemperatureControl_SetPoint_i_apply(STACK_FRAME t_TemperatureControl_SetPoint_i this, t_TemperatureControl_Temperature_i low, t_TemperatureControl_Temperature_i high) {
  DeclNewStackFrame(caller, "SetPoint_i.scala", "t.TemperatureControl.SetPoint_i", "apply", 0);
  Type_assign(&this->low, low, sizeof(struct t_TemperatureControl_Temperature_i));
  Type_assign(&this->high, high, sizeof(struct t_TemperatureControl_Temperature_i));
}

void t_TemperatureControl_SetPoint_i_example(STACK_FRAME t_TemperatureControl_SetPoint_i result) {
  DeclNewStackFrame(caller, "SetPoint_i.scala", "t.TemperatureControl.SetPoint_i", "example", 0);
  DeclNewt_TemperatureControl_Temperature_i(t_1);
  t_TemperatureControl_Temperature_i_example(SF (t_TemperatureControl_Temperature_i) &t_1);
  DeclNewt_TemperatureControl_Temperature_i(t_2);
  t_TemperatureControl_Temperature_i_example(SF (t_TemperatureControl_Temperature_i) &t_2);
  DeclNewt_TemperatureControl_SetPoint_i(t_0);
  t_TemperatureControl_SetPoint_i_apply(SF &t_0, (t_TemperatureControl_Temperature_i) ((t_TemperatureControl_Temperature_i) &t_1), (t_TemperatureControl_Temperature_i) ((t_TemperatureControl_Temperature_i) &t_2));
  Type_assign(result, (&t_0), sizeof(struct t_TemperatureControl_SetPoint_i));
  return;
}