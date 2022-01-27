#include <all.h>

B art_scheduling_static_Schedule_initialized_ = F;

struct art_scheduling_static_Schedule_DScheduleSpec _art_scheduling_static_Schedule_emptyDScheduleSpec;
struct art_scheduling_static_Schedule_DScheduleSpec _art_scheduling_static_Schedule_dScheduleSpec;

void art_scheduling_static_Schedule_init(STACK_FRAME_ONLY) {
  if (art_scheduling_static_Schedule_initialized_) return;
  art_scheduling_static_Schedule_initialized_ = T;
  DeclNewStackFrame(caller, "Schedule.scala", "art.scheduling.static.Schedule", "<init>", 0);
  art_scheduling_static_Schedule_init_emptyDScheduleSpec(SF_LAST);
  art_scheduling_static_Schedule_init_dScheduleSpec(SF_LAST);
}

art_scheduling_static_Schedule_DScheduleSpec art_scheduling_static_Schedule_emptyDScheduleSpec(STACK_FRAME_ONLY) {
  art_scheduling_static_Schedule_init(CALLER_LAST);
  return (art_scheduling_static_Schedule_DScheduleSpec) &_art_scheduling_static_Schedule_emptyDScheduleSpec;
}

art_scheduling_static_Schedule_DScheduleSpec art_scheduling_static_Schedule_dScheduleSpec(STACK_FRAME_ONLY) {
  art_scheduling_static_Schedule_init(CALLER_LAST);
  return (art_scheduling_static_Schedule_DScheduleSpec) &_art_scheduling_static_Schedule_dScheduleSpec;
}

void art_scheduling_static_Schedule_dScheduleSpec_a(STACK_FRAME art_scheduling_static_Schedule_DScheduleSpec p_dScheduleSpec) {
  art_scheduling_static_Schedule_init(CALLER_LAST);
  Type_assign(&_art_scheduling_static_Schedule_dScheduleSpec, p_dScheduleSpec, sizeof(struct art_scheduling_static_Schedule_DScheduleSpec));
}

void art_scheduling_static_Schedule_init_emptyDScheduleSpec(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(34);
  STATIC_ASSERT(0 <= MaxIS_5AA467, "Insufficient maximum for IS[Z, art.scheduling.static.Schedule.Slot] elements.");
  DeclNewIS_5AA467(t_2);
  t_2.size = (int8_t) 0;
  DeclNewart_scheduling_static_Schedule_DSchedule(t_1);
  art_scheduling_static_Schedule_DSchedule_apply(SF &t_1, (IS_5AA467) (&t_2));
  DeclNewart_scheduling_static_Schedule_DScheduleSpec(t_0);
  art_scheduling_static_Schedule_DScheduleSpec_apply(SF &t_0, Z_C(0), Z_C(0), (art_scheduling_static_Schedule_DSchedule) (&t_1));
  Type_assign(&_art_scheduling_static_Schedule_emptyDScheduleSpec, (&t_0), sizeof(struct art_scheduling_static_Schedule_DScheduleSpec));
};

void art_scheduling_static_Schedule_init_dScheduleSpec(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(38);
  Type_assign(&_art_scheduling_static_Schedule_dScheduleSpec, art_scheduling_static_Schedule_emptyDScheduleSpec(SF_LAST), sizeof(struct art_scheduling_static_Schedule_DScheduleSpec));
};