#include <all.h>

// Some[art.scheduling.static.Schedule.DScheduleSpec]

B Some_A13654__eq(Some_A13654 this, Some_A13654 other) {
  if (art_scheduling_static_Schedule_DScheduleSpec__ne((art_scheduling_static_Schedule_DScheduleSpec) &this->value, (art_scheduling_static_Schedule_DScheduleSpec) &other->value)) return F;
  return T;
}

B Some_A13654__ne(Some_A13654 this, Some_A13654 other);

void Some_A13654_string_(STACK_FRAME String result, Some_A13654 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  art_scheduling_static_Schedule_DScheduleSpec_string_(SF result, (art_scheduling_static_Schedule_DScheduleSpec) &this->value);
  String_string_(SF result, string(")"));
}

void Some_A13654_cprint(Some_A13654 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  art_scheduling_static_Schedule_DScheduleSpec_cprint((art_scheduling_static_Schedule_DScheduleSpec) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_A13654__is(STACK_FRAME void* this);
Some_A13654 Some_A13654__as(STACK_FRAME void *this);

void Some_A13654_apply(STACK_FRAME Some_A13654 this, art_scheduling_static_Schedule_DScheduleSpec value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_A13654", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct art_scheduling_static_Schedule_DScheduleSpec));
}