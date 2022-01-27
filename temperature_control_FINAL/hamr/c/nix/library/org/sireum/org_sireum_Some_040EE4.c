#include <all.h>

// Some[t.Cli.RunTopOption]

B Some_040EE4__eq(Some_040EE4 this, Some_040EE4 other) {
  if (t_Cli_RunTopOption__ne((t_Cli_RunTopOption) &this->value, (t_Cli_RunTopOption) &other->value)) return F;
  return T;
}

B Some_040EE4__ne(Some_040EE4 this, Some_040EE4 other);

void Some_040EE4_string_(STACK_FRAME String result, Some_040EE4 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  t_Cli_RunTopOption_string_(SF result, (t_Cli_RunTopOption) &this->value);
  String_string_(SF result, string(")"));
}

void Some_040EE4_cprint(Some_040EE4 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  t_Cli_RunTopOption_cprint((t_Cli_RunTopOption) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_040EE4__is(STACK_FRAME void* this);
Some_040EE4 Some_040EE4__as(STACK_FRAME void *this);

void Some_040EE4_apply(STACK_FRAME Some_040EE4 this, t_Cli_RunTopOption value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_040EE4", "apply", 0);
  Type_assign(&this->value, value, sizeof(union t_Cli_RunTopOption));
}