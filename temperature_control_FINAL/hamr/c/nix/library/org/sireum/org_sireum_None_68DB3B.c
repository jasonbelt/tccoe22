#include <all.h>

// None[t.TemperatureControl.TempSensor_i_Initialization_Api]

B None_68DB3B__eq(None_68DB3B this, None_68DB3B other) {
  return T;
}

B None_68DB3B__ne(None_68DB3B this, None_68DB3B other);

void None_68DB3B_string_(STACK_FRAME String result, None_68DB3B this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_68DB3B_cprint(None_68DB3B this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_68DB3B__is(STACK_FRAME void* this);
None_68DB3B None_68DB3B__as(STACK_FRAME void *this);

void None_68DB3B_apply(STACK_FRAME None_68DB3B this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_68DB3B", "apply", 0);
}