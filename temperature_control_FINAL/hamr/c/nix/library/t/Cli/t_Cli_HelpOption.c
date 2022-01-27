#include <all.h>

// t.Cli.HelpOption

B t_Cli_HelpOption__eq(t_Cli_HelpOption this, t_Cli_HelpOption other) {
  return T;
}

B t_Cli_HelpOption__ne(t_Cli_HelpOption this, t_Cli_HelpOption other);

void t_Cli_HelpOption_string_(STACK_FRAME String result, t_Cli_HelpOption this) {
  DeclNewStackFrame(caller, "Demo.scala", "t.Cli.HelpOption", "string", 0);
  String_string_(SF result, string("HelpOption("));
  String_string_(SF result, string(")"));
}

void t_Cli_HelpOption_cprint(t_Cli_HelpOption this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("HelpOption("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B t_Cli_HelpOption__is(STACK_FRAME void* this);
t_Cli_HelpOption t_Cli_HelpOption__as(STACK_FRAME void *this);

void t_Cli_HelpOption_apply(STACK_FRAME t_Cli_HelpOption this) {
  DeclNewStackFrame(caller, "Demo.scala", "t.Cli.HelpOption", "apply", 0);
}