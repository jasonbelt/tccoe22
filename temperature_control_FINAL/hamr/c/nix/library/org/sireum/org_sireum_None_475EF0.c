#include <all.h>

// None[t.TemperatureControl.Fan_i_Operational_Api]

B None_475EF0__eq(None_475EF0 this, None_475EF0 other) {
  return T;
}

B None_475EF0__ne(None_475EF0 this, None_475EF0 other);

void None_475EF0_string_(STACK_FRAME String result, None_475EF0 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_475EF0_cprint(None_475EF0 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_475EF0__is(STACK_FRAME void* this);
None_475EF0 None_475EF0__as(STACK_FRAME void *this);

void None_475EF0_apply(STACK_FRAME None_475EF0 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_475EF0", "apply", 0);
}