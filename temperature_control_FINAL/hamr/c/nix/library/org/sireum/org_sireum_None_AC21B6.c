#include <all.h>

// None[t.TemperatureControl.TempSensor_i_Operational_Api]

B None_AC21B6__eq(None_AC21B6 this, None_AC21B6 other) {
  return T;
}

B None_AC21B6__ne(None_AC21B6 this, None_AC21B6 other);

void None_AC21B6_string_(STACK_FRAME String result, None_AC21B6 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_AC21B6_cprint(None_AC21B6 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_AC21B6__is(STACK_FRAME void* this);
None_AC21B6 None_AC21B6__as(STACK_FRAME void *this);

void None_AC21B6_apply(STACK_FRAME None_AC21B6 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_AC21B6", "apply", 0);
}