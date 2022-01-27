#include <all.h>

// Option[t.TemperatureControl.SetPoint_i]

B Option_EBB396__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_D8D240: return T;
    case TNone_B473AE: return T;
    default: return F;
  }
}

Option_EBB396 Option_EBB396__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_D8D240: break;
    case TNone_B473AE: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[t.TemperatureControl.SetPoint_i].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_EBB396) this;
}

void Option_EBB396_string_(STACK_FRAME String result, Option_EBB396 this);