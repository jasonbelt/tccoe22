#include <all.h>

// None[String]

B None_C2CCA4__eq(None_C2CCA4 this, None_C2CCA4 other) {
  return T;
}

B None_C2CCA4__ne(None_C2CCA4 this, None_C2CCA4 other);

void None_C2CCA4_string_(STACK_FRAME String result, None_C2CCA4 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_C2CCA4_cprint(None_C2CCA4 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_C2CCA4__is(STACK_FRAME void* this);
None_C2CCA4 None_C2CCA4__as(STACK_FRAME void *this);

void None_C2CCA4_apply(STACK_FRAME None_C2CCA4 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_C2CCA4", "apply", 0);
}