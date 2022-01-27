#include <all.h>

// None[t.TemperatureControl.FanAck.Type]

B None_831682__eq(None_831682 this, None_831682 other) {
  return T;
}

B None_831682__ne(None_831682 this, None_831682 other);

void None_831682_string_(STACK_FRAME String result, None_831682 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_831682_cprint(None_831682 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_831682__is(STACK_FRAME void* this);
None_831682 None_831682__as(STACK_FRAME void *this);

void None_831682_apply(STACK_FRAME None_831682 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_831682", "apply", 0);
}