#include <all.h>

// Option[art.scheduling.static.Schedule.DScheduleSpec]

B Option_188779__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_A13654: return T;
    case TNone_FD0D39: return T;
    default: return F;
  }
}

Option_188779 Option_188779__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_A13654: break;
    case TNone_FD0D39: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[art.scheduling.static.Schedule.DScheduleSpec].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_188779) this;
}

void Option_188779_string_(STACK_FRAME String result, Option_188779 this);