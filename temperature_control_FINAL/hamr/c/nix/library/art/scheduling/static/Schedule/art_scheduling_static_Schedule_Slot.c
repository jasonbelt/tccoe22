#include <all.h>

// art.scheduling.static.Schedule.Slot

B art_scheduling_static_Schedule_Slot__eq(art_scheduling_static_Schedule_Slot this, art_scheduling_static_Schedule_Slot other) {
  if (Z__ne(this->bridgeId, other->bridgeId)) return F;
  if (Z__ne(this->length, other->length)) return F;
  return T;
}

B art_scheduling_static_Schedule_Slot__ne(art_scheduling_static_Schedule_Slot this, art_scheduling_static_Schedule_Slot other);

void art_scheduling_static_Schedule_Slot_string_(STACK_FRAME String result, art_scheduling_static_Schedule_Slot this) {
  DeclNewStackFrame(caller, "Schedule.scala", "art.scheduling.static.Schedule.Slot", "string", 0);
  String_string_(SF result, string("Slot("));
  String sep = string(", ");
  Z_string_(SF result, this->bridgeId);
  String_string_(SF result, sep);
  Z_string_(SF result, this->length);
  String_string_(SF result, string(")"));
}

void art_scheduling_static_Schedule_Slot_cprint(art_scheduling_static_Schedule_Slot this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Slot("), isOut);
  String sep = string(", ");
  Z_cprint(this->bridgeId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->length, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_static_Schedule_Slot__is(STACK_FRAME void* this);
art_scheduling_static_Schedule_Slot art_scheduling_static_Schedule_Slot__as(STACK_FRAME void *this);

void art_scheduling_static_Schedule_Slot_apply(STACK_FRAME art_scheduling_static_Schedule_Slot this, Z bridgeId, Z length) {
  DeclNewStackFrame(caller, "Schedule.scala", "art.scheduling.static.Schedule.Slot", "apply", 0);
  this->bridgeId = bridgeId;
  this->length = length;
}