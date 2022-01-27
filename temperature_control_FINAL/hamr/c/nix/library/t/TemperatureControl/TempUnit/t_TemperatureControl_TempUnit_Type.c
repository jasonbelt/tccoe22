#include <all.h>

// t.TemperatureControl.TempUnit.Type

B t_TemperatureControl_TempUnit_Type__eq(t_TemperatureControl_TempUnit_Type this, t_TemperatureControl_TempUnit_Type other);
B t_TemperatureControl_TempUnit_Type__ne(t_TemperatureControl_TempUnit_Type this, t_TemperatureControl_TempUnit_Type other);
Z t_TemperatureControl_TempUnit_Type__ordinal(t_TemperatureControl_TempUnit_Type this);
void t_TemperatureControl_TempUnit_Type_name_(String result, t_TemperatureControl_TempUnit_Type this);

void t_TemperatureControl_TempUnit_Type_byName(STACK_FRAME Option_40D664 result, String s) {
  if (String__eq(s, string("Fahrenheit"))) Type_assign(result, &((struct Some_486E43) { .type = TSome_486E43, .value = t_TemperatureControl_TempUnit_Type_Fahrenheit }), sizeof(union Option_40D664));
  else if (String__eq(s, string("Celsius"))) Type_assign(result, &((struct Some_486E43) { .type = TSome_486E43, .value = t_TemperatureControl_TempUnit_Type_Celsius }), sizeof(union Option_40D664));
  else if (String__eq(s, string("Kelvin"))) Type_assign(result, &((struct Some_486E43) { .type = TSome_486E43, .value = t_TemperatureControl_TempUnit_Type_Kelvin }), sizeof(union Option_40D664));
  else Type_assign(result, &((struct None_3FD7F9) { .type = TNone_3FD7F9 }), sizeof(union Option_40D664));
}

void t_TemperatureControl_TempUnit_Type_byOrdinal(STACK_FRAME Option_40D664 result, Z n) {
  switch ((t_TemperatureControl_TempUnit_Type) n) {
    case t_TemperatureControl_TempUnit_Type_Fahrenheit: Type_assign(result, &((struct Some_486E43) { .type = TSome_486E43, .value = t_TemperatureControl_TempUnit_Type_Fahrenheit }), sizeof(union Option_40D664)); return;
    case t_TemperatureControl_TempUnit_Type_Celsius: Type_assign(result, &((struct Some_486E43) { .type = TSome_486E43, .value = t_TemperatureControl_TempUnit_Type_Celsius }), sizeof(union Option_40D664)); return;
    case t_TemperatureControl_TempUnit_Type_Kelvin: Type_assign(result, &((struct Some_486E43) { .type = TSome_486E43, .value = t_TemperatureControl_TempUnit_Type_Kelvin }), sizeof(union Option_40D664)); return;
    default: Type_assign(result, &((struct None_3FD7F9) { .type = TNone_3FD7F9 }), sizeof(union Option_40D664)); return;
  }
}

Z t_TemperatureControl_TempUnit_Type_numOfElements(void) {
  return Z_C(3);
}

void t_TemperatureControl_TempUnit_Type_cprint(t_TemperatureControl_TempUnit_Type this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  switch (this) {
    case t_TemperatureControl_TempUnit_Type_Fahrenheit: String_cprint(string("Fahrenheit"), isOut); return;
    case t_TemperatureControl_TempUnit_Type_Celsius: String_cprint(string("Celsius"), isOut); return;
    case t_TemperatureControl_TempUnit_Type_Kelvin: String_cprint(string("Kelvin"), isOut); return;
  }
  #endif
}

void t_TemperatureControl_TempUnit_Type_string_(STACK_FRAME String result, t_TemperatureControl_TempUnit_Type this) {
  DeclNewStackFrame(caller, "TempUnit.scala", "t_TemperatureControl_TempUnit_Type", "string", 0);
  switch (this) {
    case t_TemperatureControl_TempUnit_Type_Fahrenheit: String_string_(SF result, string("Fahrenheit")); return;
    case t_TemperatureControl_TempUnit_Type_Celsius: String_string_(SF result, string("Celsius")); return;
    case t_TemperatureControl_TempUnit_Type_Kelvin: String_string_(SF result, string("Kelvin")); return;
  }
}