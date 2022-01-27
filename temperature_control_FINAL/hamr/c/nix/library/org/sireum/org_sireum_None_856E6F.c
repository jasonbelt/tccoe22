#include <all.h>

// None[t.TemperatureControl.Fan_i_Initialization_Api]

B None_856E6F__eq(None_856E6F this, None_856E6F other) {
  return T;
}

B None_856E6F__ne(None_856E6F this, None_856E6F other);

void None_856E6F_string_(STACK_FRAME String result, None_856E6F this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_856E6F_cprint(None_856E6F this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_856E6F__is(STACK_FRAME void* this);
None_856E6F None_856E6F__as(STACK_FRAME void *this);

void None_856E6F_apply(STACK_FRAME None_856E6F this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_856E6F", "apply", 0);
}