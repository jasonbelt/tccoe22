#include <all.h>

// Option[t.Cli.RunChoice.Type]

B Option_5F39ED__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_2040D2: return T;
    case TNone_72E81E: return T;
    default: return F;
  }
}

Option_5F39ED Option_5F39ED__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_2040D2: break;
    case TNone_72E81E: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[t.Cli.RunChoice.Type].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_5F39ED) this;
}

void Option_5F39ED_string_(STACK_FRAME String result, Option_5F39ED this);