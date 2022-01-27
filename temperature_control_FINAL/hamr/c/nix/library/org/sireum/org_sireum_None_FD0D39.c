#include <all.h>

// None[art.scheduling.static.Schedule.DScheduleSpec]

B None_FD0D39__eq(None_FD0D39 this, None_FD0D39 other) {
  return T;
}

B None_FD0D39__ne(None_FD0D39 this, None_FD0D39 other);

void None_FD0D39_string_(STACK_FRAME String result, None_FD0D39 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_FD0D39_cprint(None_FD0D39 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_FD0D39__is(STACK_FRAME void* this);
None_FD0D39 None_FD0D39__as(STACK_FRAME void *this);

void None_FD0D39_apply(STACK_FRAME None_FD0D39 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_FD0D39", "apply", 0);
}