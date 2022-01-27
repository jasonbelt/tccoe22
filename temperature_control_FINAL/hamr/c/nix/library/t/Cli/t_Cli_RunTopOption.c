#include <all.h>

// t.Cli.RunTopOption

B t_Cli_RunTopOption__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tt_Cli_RunOption: return T;
    case Tt_Cli_HelpOption: return T;
    default: return F;
  }
}

t_Cli_RunTopOption t_Cli_RunTopOption__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tt_Cli_RunOption: break;
    case Tt_Cli_HelpOption: break;
    default:
      fprintf(stderr, "Invalid cast from %s to t.Cli.RunTopOption.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (t_Cli_RunTopOption) this;
}

void t_Cli_RunTopOption_string_(STACK_FRAME String result, t_Cli_RunTopOption this);