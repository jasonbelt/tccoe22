#include <all.h>

// Option[IS[Z, art.Bridge]]

B Option_E65AA5__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_3EC8A4: return T;
    case TNone_C92EDC: return T;
    default: return F;
  }
}

Option_E65AA5 Option_E65AA5__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_3EC8A4: break;
    case TNone_C92EDC: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[IS[Z, art.Bridge]].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_E65AA5) this;
}

void Option_E65AA5_string_(STACK_FRAME String result, Option_E65AA5 this);