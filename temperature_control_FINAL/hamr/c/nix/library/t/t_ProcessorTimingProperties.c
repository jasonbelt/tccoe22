#include <all.h>

// t.ProcessorTimingProperties

B t_ProcessorTimingProperties__eq(t_ProcessorTimingProperties this, t_ProcessorTimingProperties other) {
  if (Option_882048__ne((Option_882048) &this->clockPeriod, (Option_882048) &other->clockPeriod)) return F;
  if (Option_882048__ne((Option_882048) &this->framePeriod, (Option_882048) &other->framePeriod)) return F;
  if (Option_882048__ne((Option_882048) &this->maxDomain, (Option_882048) &other->maxDomain)) return F;
  if (Option_882048__ne((Option_882048) &this->slotTime, (Option_882048) &other->slotTime)) return F;
  return T;
}

B t_ProcessorTimingProperties__ne(t_ProcessorTimingProperties this, t_ProcessorTimingProperties other);

void t_ProcessorTimingProperties_string_(STACK_FRAME String result, t_ProcessorTimingProperties this) {
  DeclNewStackFrame(caller, "Schedulers.scala", "t.ProcessorTimingProperties", "string", 0);
  String_string_(SF result, string("ProcessorTimingProperties("));
  String sep = string(", ");
  Option_882048_string_(SF result, (Option_882048) &this->clockPeriod);
  String_string_(SF result, sep);
  Option_882048_string_(SF result, (Option_882048) &this->framePeriod);
  String_string_(SF result, sep);
  Option_882048_string_(SF result, (Option_882048) &this->maxDomain);
  String_string_(SF result, sep);
  Option_882048_string_(SF result, (Option_882048) &this->slotTime);
  String_string_(SF result, string(")"));
}

void t_ProcessorTimingProperties_cprint(t_ProcessorTimingProperties this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("ProcessorTimingProperties("), isOut);
  String sep = string(", ");
  Option_882048_cprint((Option_882048) &this->clockPeriod, isOut);
  String_cprint(sep, isOut);
  Option_882048_cprint((Option_882048) &this->framePeriod, isOut);
  String_cprint(sep, isOut);
  Option_882048_cprint((Option_882048) &this->maxDomain, isOut);
  String_cprint(sep, isOut);
  Option_882048_cprint((Option_882048) &this->slotTime, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B t_ProcessorTimingProperties__is(STACK_FRAME void* this);
t_ProcessorTimingProperties t_ProcessorTimingProperties__as(STACK_FRAME void *this);

void t_ProcessorTimingProperties_apply(STACK_FRAME t_ProcessorTimingProperties this, Option_882048 clockPeriod, Option_882048 framePeriod, Option_882048 maxDomain, Option_882048 slotTime) {
  DeclNewStackFrame(caller, "Schedulers.scala", "t.ProcessorTimingProperties", "apply", 0);
  Type_assign(&this->clockPeriod, clockPeriod, sizeof(union Option_882048));
  Type_assign(&this->framePeriod, framePeriod, sizeof(union Option_882048));
  Type_assign(&this->maxDomain, maxDomain, sizeof(union Option_882048));
  Type_assign(&this->slotTime, slotTime, sizeof(union Option_882048));
}