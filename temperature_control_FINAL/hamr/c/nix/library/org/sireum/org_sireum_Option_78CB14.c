#include <all.h>

// Option[t.TemperatureControl.Temperature_i]

B Option_78CB14__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_14C467: return T;
    case TNone_4CBE13: return T;
    default: return F;
  }
}

Option_78CB14 Option_78CB14__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_14C467: break;
    case TNone_4CBE13: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[t.TemperatureControl.Temperature_i].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_78CB14) this;
}

void Option_78CB14_string_(STACK_FRAME String result, Option_78CB14 this);