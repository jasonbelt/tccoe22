#include <all.h>

// None[t.TemperatureControl.TempControl_i_Operational_Api]

B None_A41F76__eq(None_A41F76 this, None_A41F76 other) {
  return T;
}

B None_A41F76__ne(None_A41F76 this, None_A41F76 other);

void None_A41F76_string_(STACK_FRAME String result, None_A41F76 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_A41F76_cprint(None_A41F76 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_A41F76__is(STACK_FRAME void* this);
None_A41F76 None_A41F76__as(STACK_FRAME void *this);

void None_A41F76_apply(STACK_FRAME None_A41F76 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_A41F76", "apply", 0);
}