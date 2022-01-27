#include <all.h>

// Option[t.TemperatureControl.TempUnit.Type]

B Option_40D664__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_486E43: return T;
    case TNone_3FD7F9: return T;
    default: return F;
  }
}

Option_40D664 Option_40D664__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_486E43: break;
    case TNone_3FD7F9: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[t.TemperatureControl.TempUnit.Type].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_40D664) this;
}

void Option_40D664_string_(STACK_FRAME String result, Option_40D664 this);

t_TemperatureControl_TempUnit_Type Option_40D664_get_(STACK_FRAME Option_40D664 this) {
  switch (this->type) {
    case TSome_486E43: return Some_486E43_get_(CALLER (Some_486E43) this);
    case TNone_3FD7F9: return None_3FD7F9_get_(CALLER (None_3FD7F9) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}