#include <all.h>

// None[t.Cli.RunChoice.Type]

B None_72E81E__eq(None_72E81E this, None_72E81E other) {
  return T;
}

B None_72E81E__ne(None_72E81E this, None_72E81E other);

void None_72E81E_string_(STACK_FRAME String result, None_72E81E this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_72E81E_cprint(None_72E81E this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_72E81E__is(STACK_FRAME void* this);
None_72E81E None_72E81E__as(STACK_FRAME void *this);

void None_72E81E_apply(STACK_FRAME None_72E81E this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_72E81E", "apply", 0);
}