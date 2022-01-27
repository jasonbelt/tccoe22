#include <all.h>

// t.Cli.RunOption

B t_Cli_RunOption__eq(t_Cli_RunOption this, t_Cli_RunOption other) {
  if (String__ne((String) &this->help, (String) &other->help)) return F;
  if (IS_948B60__ne((IS_948B60) &this->args, (IS_948B60) &other->args)) return F;
  if (t_Cli_RunChoice_Type__ne(this->scheduler, other->scheduler)) return F;
  return T;
}

B t_Cli_RunOption__ne(t_Cli_RunOption this, t_Cli_RunOption other);

void t_Cli_RunOption_string_(STACK_FRAME String result, t_Cli_RunOption this) {
  DeclNewStackFrame(caller, "Demo.scala", "t.Cli.RunOption", "string", 0);
  String_string_(SF result, string("RunOption("));
  String sep = string(", ");
  String_string_(SF result, (String) &this->help);
  String_string_(SF result, sep);
  IS_948B60_string_(SF result, (IS_948B60) &this->args);
  String_string_(SF result, sep);
  t_Cli_RunChoice_Type_string_(SF result, this->scheduler);
  String_string_(SF result, string(")"));
}

void t_Cli_RunOption_cprint(t_Cli_RunOption this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("RunOption("), isOut);
  String sep = string(", ");
  String_cprint((String) &this->help, isOut);
  String_cprint(sep, isOut);
  IS_948B60_cprint((IS_948B60) &this->args, isOut);
  String_cprint(sep, isOut);
  t_Cli_RunChoice_Type_cprint(this->scheduler, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B t_Cli_RunOption__is(STACK_FRAME void* this);
t_Cli_RunOption t_Cli_RunOption__as(STACK_FRAME void *this);

void t_Cli_RunOption_apply(STACK_FRAME t_Cli_RunOption this, String help, IS_948B60 args, t_Cli_RunChoice_Type scheduler) {
  DeclNewStackFrame(caller, "Demo.scala", "t.Cli.RunOption", "apply", 0);
  Type_assign(&this->help, help, sizeof(struct StaticString));
  Type_assign(&this->args, args, sizeof(struct IS_948B60));
  this->scheduler = scheduler;
}