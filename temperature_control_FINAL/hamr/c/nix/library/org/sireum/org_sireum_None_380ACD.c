#include <all.h>

// None[t.TemperatureControl.FanCmd.Type]

B None_380ACD__eq(None_380ACD this, None_380ACD other) {
  return T;
}

B None_380ACD__ne(None_380ACD this, None_380ACD other);

void None_380ACD_string_(STACK_FRAME String result, None_380ACD this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_380ACD_cprint(None_380ACD this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_380ACD__is(STACK_FRAME void* this);
None_380ACD None_380ACD__as(STACK_FRAME void *this);

void None_380ACD_apply(STACK_FRAME None_380ACD this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_380ACD", "apply", 0);
}