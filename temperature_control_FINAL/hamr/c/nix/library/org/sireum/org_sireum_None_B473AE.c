#include <all.h>

// None[t.TemperatureControl.SetPoint_i]

B None_B473AE__eq(None_B473AE this, None_B473AE other) {
  return T;
}

B None_B473AE__ne(None_B473AE this, None_B473AE other);

void None_B473AE_string_(STACK_FRAME String result, None_B473AE this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_B473AE_cprint(None_B473AE this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_B473AE__is(STACK_FRAME void* this);
None_B473AE None_B473AE__as(STACK_FRAME void *this);

void None_B473AE_apply(STACK_FRAME None_B473AE this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_B473AE", "apply", 0);
}