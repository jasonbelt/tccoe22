#include <all.h>

// None[t.TemperatureControl.TempControl_i_Initialization_Api]

B None_ACBA15__eq(None_ACBA15 this, None_ACBA15 other) {
  return T;
}

B None_ACBA15__ne(None_ACBA15 this, None_ACBA15 other);

void None_ACBA15_string_(STACK_FRAME String result, None_ACBA15 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_ACBA15_cprint(None_ACBA15 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_ACBA15__is(STACK_FRAME void* this);
None_ACBA15 None_ACBA15__as(STACK_FRAME void *this);

void None_ACBA15_apply(STACK_FRAME None_ACBA15 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_ACBA15", "apply", 0);
}