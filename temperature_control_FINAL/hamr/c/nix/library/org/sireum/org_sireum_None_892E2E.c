#include <all.h>

// None[t.Cli.RunTopOption]

B None_892E2E__eq(None_892E2E this, None_892E2E other) {
  return T;
}

B None_892E2E__ne(None_892E2E this, None_892E2E other);

void None_892E2E_string_(STACK_FRAME String result, None_892E2E this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_892E2E_cprint(None_892E2E this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_892E2E__is(STACK_FRAME void* this);
None_892E2E None_892E2E__as(STACK_FRAME void *this);

void None_892E2E_apply(STACK_FRAME None_892E2E this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_892E2E", "apply", 0);
}