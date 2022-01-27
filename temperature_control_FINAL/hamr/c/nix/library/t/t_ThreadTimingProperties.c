#include <all.h>

// t.ThreadTimingProperties

B t_ThreadTimingProperties__eq(t_ThreadTimingProperties this, t_ThreadTimingProperties other) {
  if (Option_882048__ne((Option_882048) &this->domain, (Option_882048) &other->domain)) return F;
  if (Option_B47750__ne((Option_B47750) &this->computeExecutionTime, (Option_B47750) &other->computeExecutionTime)) return F;
  return T;
}

B t_ThreadTimingProperties__ne(t_ThreadTimingProperties this, t_ThreadTimingProperties other);

void t_ThreadTimingProperties_string_(STACK_FRAME String result, t_ThreadTimingProperties this) {
  DeclNewStackFrame(caller, "Schedulers.scala", "t.ThreadTimingProperties", "string", 0);
  String_string_(SF result, string("ThreadTimingProperties("));
  String sep = string(", ");
  Option_882048_string_(SF result, (Option_882048) &this->domain);
  String_string_(SF result, sep);
  Option_B47750_string_(SF result, (Option_B47750) &this->computeExecutionTime);
  String_string_(SF result, string(")"));
}

void t_ThreadTimingProperties_cprint(t_ThreadTimingProperties this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("ThreadTimingProperties("), isOut);
  String sep = string(", ");
  Option_882048_cprint((Option_882048) &this->domain, isOut);
  String_cprint(sep, isOut);
  Option_B47750_cprint((Option_B47750) &this->computeExecutionTime, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B t_ThreadTimingProperties__is(STACK_FRAME void* this);
t_ThreadTimingProperties t_ThreadTimingProperties__as(STACK_FRAME void *this);

void t_ThreadTimingProperties_apply(STACK_FRAME t_ThreadTimingProperties this, Option_882048 domain, Option_B47750 computeExecutionTime) {
  DeclNewStackFrame(caller, "Schedulers.scala", "t.ThreadTimingProperties", "apply", 0);
  Type_assign(&this->domain, domain, sizeof(union Option_882048));
  Type_assign(&this->computeExecutionTime, computeExecutionTime, sizeof(union Option_B47750));
}