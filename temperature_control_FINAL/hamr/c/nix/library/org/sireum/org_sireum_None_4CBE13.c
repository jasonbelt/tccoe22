#include <all.h>

// None[t.TemperatureControl.Temperature_i]

B None_4CBE13__eq(None_4CBE13 this, None_4CBE13 other) {
  return T;
}

B None_4CBE13__ne(None_4CBE13 this, None_4CBE13 other);

void None_4CBE13_string_(STACK_FRAME String result, None_4CBE13 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_4CBE13_cprint(None_4CBE13 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_4CBE13__is(STACK_FRAME void* this);
None_4CBE13 None_4CBE13__as(STACK_FRAME void *this);

void None_4CBE13_apply(STACK_FRAME None_4CBE13 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_4CBE13", "apply", 0);
}