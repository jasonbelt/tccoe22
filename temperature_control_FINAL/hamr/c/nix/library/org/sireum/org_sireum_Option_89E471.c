#include <all.h>

// Option[t.Cli.RunTopOption]

B Option_89E471__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_040EE4: return T;
    case TNone_892E2E: return T;
    default: return F;
  }
}

Option_89E471 Option_89E471__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_040EE4: break;
    case TNone_892E2E: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[t.Cli.RunTopOption].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_89E471) this;
}

void Option_89E471_string_(STACK_FRAME String result, Option_89E471 this);