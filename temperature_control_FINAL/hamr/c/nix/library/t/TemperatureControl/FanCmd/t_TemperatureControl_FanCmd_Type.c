#include <all.h>

// t.TemperatureControl.FanCmd.Type

B t_TemperatureControl_FanCmd_Type__eq(t_TemperatureControl_FanCmd_Type this, t_TemperatureControl_FanCmd_Type other);
B t_TemperatureControl_FanCmd_Type__ne(t_TemperatureControl_FanCmd_Type this, t_TemperatureControl_FanCmd_Type other);
Z t_TemperatureControl_FanCmd_Type__ordinal(t_TemperatureControl_FanCmd_Type this);
void t_TemperatureControl_FanCmd_Type_name_(String result, t_TemperatureControl_FanCmd_Type this);

void t_TemperatureControl_FanCmd_Type_byName(STACK_FRAME Option_2B0611 result, String s) {
  if (String__eq(s, string("On"))) Type_assign(result, &((struct Some_779716) { .type = TSome_779716, .value = t_TemperatureControl_FanCmd_Type_On }), sizeof(union Option_2B0611));
  else if (String__eq(s, string("Off"))) Type_assign(result, &((struct Some_779716) { .type = TSome_779716, .value = t_TemperatureControl_FanCmd_Type_Off }), sizeof(union Option_2B0611));
  else Type_assign(result, &((struct None_380ACD) { .type = TNone_380ACD }), sizeof(union Option_2B0611));
}

void t_TemperatureControl_FanCmd_Type_byOrdinal(STACK_FRAME Option_2B0611 result, Z n) {
  switch ((t_TemperatureControl_FanCmd_Type) n) {
    case t_TemperatureControl_FanCmd_Type_On: Type_assign(result, &((struct Some_779716) { .type = TSome_779716, .value = t_TemperatureControl_FanCmd_Type_On }), sizeof(union Option_2B0611)); return;
    case t_TemperatureControl_FanCmd_Type_Off: Type_assign(result, &((struct Some_779716) { .type = TSome_779716, .value = t_TemperatureControl_FanCmd_Type_Off }), sizeof(union Option_2B0611)); return;
    default: Type_assign(result, &((struct None_380ACD) { .type = TNone_380ACD }), sizeof(union Option_2B0611)); return;
  }
}

Z t_TemperatureControl_FanCmd_Type_numOfElements(void) {
  return Z_C(2);
}

void t_TemperatureControl_FanCmd_Type_cprint(t_TemperatureControl_FanCmd_Type this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  switch (this) {
    case t_TemperatureControl_FanCmd_Type_On: String_cprint(string("On"), isOut); return;
    case t_TemperatureControl_FanCmd_Type_Off: String_cprint(string("Off"), isOut); return;
  }
  #endif
}

void t_TemperatureControl_FanCmd_Type_string_(STACK_FRAME String result, t_TemperatureControl_FanCmd_Type this) {
  DeclNewStackFrame(caller, "FanCmd.scala", "t_TemperatureControl_FanCmd_Type", "string", 0);
  switch (this) {
    case t_TemperatureControl_FanCmd_Type_On: String_string_(SF result, string("On")); return;
    case t_TemperatureControl_FanCmd_Type_Off: String_string_(SF result, string("Off")); return;
  }
}