#include <all.h>

// Option[t.TemperatureControl.FanAck.Type]

B Option_C5A124__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_07AD88: return T;
    case TNone_831682: return T;
    default: return F;
  }
}

Option_C5A124 Option_C5A124__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_07AD88: break;
    case TNone_831682: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[t.TemperatureControl.FanAck.Type].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_C5A124) this;
}

void Option_C5A124_string_(STACK_FRAME String result, Option_C5A124 this);

t_TemperatureControl_FanAck_Type Option_C5A124_get_(STACK_FRAME Option_C5A124 this) {
  switch (this->type) {
    case TSome_07AD88: return Some_07AD88_get_(CALLER (Some_07AD88) this);
    case TNone_831682: return None_831682_get_(CALLER (None_831682) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}