#include <all.h>

// t.TemperatureControl.FanAck.Type

B t_TemperatureControl_FanAck_Type__eq(t_TemperatureControl_FanAck_Type this, t_TemperatureControl_FanAck_Type other);
B t_TemperatureControl_FanAck_Type__ne(t_TemperatureControl_FanAck_Type this, t_TemperatureControl_FanAck_Type other);
Z t_TemperatureControl_FanAck_Type__ordinal(t_TemperatureControl_FanAck_Type this);
void t_TemperatureControl_FanAck_Type_name_(String result, t_TemperatureControl_FanAck_Type this);

void t_TemperatureControl_FanAck_Type_byName(STACK_FRAME Option_C5A124 result, String s) {
  if (String__eq(s, string("Ok"))) Type_assign(result, &((struct Some_07AD88) { .type = TSome_07AD88, .value = t_TemperatureControl_FanAck_Type_Ok }), sizeof(union Option_C5A124));
  else if (String__eq(s, string("Error"))) Type_assign(result, &((struct Some_07AD88) { .type = TSome_07AD88, .value = t_TemperatureControl_FanAck_Type_Error }), sizeof(union Option_C5A124));
  else Type_assign(result, &((struct None_831682) { .type = TNone_831682 }), sizeof(union Option_C5A124));
}

void t_TemperatureControl_FanAck_Type_byOrdinal(STACK_FRAME Option_C5A124 result, Z n) {
  switch ((t_TemperatureControl_FanAck_Type) n) {
    case t_TemperatureControl_FanAck_Type_Ok: Type_assign(result, &((struct Some_07AD88) { .type = TSome_07AD88, .value = t_TemperatureControl_FanAck_Type_Ok }), sizeof(union Option_C5A124)); return;
    case t_TemperatureControl_FanAck_Type_Error: Type_assign(result, &((struct Some_07AD88) { .type = TSome_07AD88, .value = t_TemperatureControl_FanAck_Type_Error }), sizeof(union Option_C5A124)); return;
    default: Type_assign(result, &((struct None_831682) { .type = TNone_831682 }), sizeof(union Option_C5A124)); return;
  }
}

Z t_TemperatureControl_FanAck_Type_numOfElements(void) {
  return Z_C(2);
}

void t_TemperatureControl_FanAck_Type_cprint(t_TemperatureControl_FanAck_Type this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  switch (this) {
    case t_TemperatureControl_FanAck_Type_Ok: String_cprint(string("Ok"), isOut); return;
    case t_TemperatureControl_FanAck_Type_Error: String_cprint(string("Error"), isOut); return;
  }
  #endif
}

void t_TemperatureControl_FanAck_Type_string_(STACK_FRAME String result, t_TemperatureControl_FanAck_Type this) {
  DeclNewStackFrame(caller, "FanAck.scala", "t_TemperatureControl_FanAck_Type", "string", 0);
  switch (this) {
    case t_TemperatureControl_FanAck_Type_Ok: String_string_(SF result, string("Ok")); return;
    case t_TemperatureControl_FanAck_Type_Error: String_string_(SF result, string("Error")); return;
  }
}