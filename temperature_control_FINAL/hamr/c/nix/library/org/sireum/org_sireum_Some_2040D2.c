#include <all.h>

// Some[t.Cli.RunChoice.Type]

B Some_2040D2__eq(Some_2040D2 this, Some_2040D2 other) {
  if (t_Cli_RunChoice_Type__ne(this->value, other->value)) return F;
  return T;
}

B Some_2040D2__ne(Some_2040D2 this, Some_2040D2 other);

void Some_2040D2_string_(STACK_FRAME String result, Some_2040D2 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  t_Cli_RunChoice_Type_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void Some_2040D2_cprint(Some_2040D2 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  t_Cli_RunChoice_Type_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_2040D2__is(STACK_FRAME void* this);
Some_2040D2 Some_2040D2__as(STACK_FRAME void *this);

void Some_2040D2_apply(STACK_FRAME Some_2040D2 this, t_Cli_RunChoice_Type value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_2040D2", "apply", 0);
  this->value = value;
}