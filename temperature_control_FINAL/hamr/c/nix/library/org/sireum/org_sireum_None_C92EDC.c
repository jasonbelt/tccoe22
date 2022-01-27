#include <all.h>

// None[IS[Z, art.Bridge]]

B None_C92EDC__eq(None_C92EDC this, None_C92EDC other) {
  return T;
}

B None_C92EDC__ne(None_C92EDC this, None_C92EDC other);

void None_C92EDC_string_(STACK_FRAME String result, None_C92EDC this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_C92EDC_cprint(None_C92EDC this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_C92EDC__is(STACK_FRAME void* this);
None_C92EDC None_C92EDC__as(STACK_FRAME void *this);

void None_C92EDC_apply(STACK_FRAME None_C92EDC this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_C92EDC", "apply", 0);
}