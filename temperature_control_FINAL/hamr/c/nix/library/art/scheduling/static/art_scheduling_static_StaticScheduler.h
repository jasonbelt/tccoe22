#ifndef SIREUM_H_art_scheduling_static_StaticScheduler
#define SIREUM_H_art_scheduling_static_StaticScheduler

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.static.StaticScheduler

#define art_scheduling_static_StaticScheduler_bridges_(this) ((IS_7E8796) &(this)->bridges)
#define art_scheduling_static_StaticScheduler_staticSchedule_(this) ((art_scheduling_static_Schedule_DScheduleSpec) &(this)->staticSchedule)

B art_scheduling_static_StaticScheduler__eq(art_scheduling_static_StaticScheduler this, art_scheduling_static_StaticScheduler other);
inline B art_scheduling_static_StaticScheduler__ne(art_scheduling_static_StaticScheduler this, art_scheduling_static_StaticScheduler other) {
  return !art_scheduling_static_StaticScheduler__eq(this, other);
};
void art_scheduling_static_StaticScheduler_string_(STACK_FRAME String result, art_scheduling_static_StaticScheduler this);
void art_scheduling_static_StaticScheduler_cprint(art_scheduling_static_StaticScheduler this, B isOut);

inline B art_scheduling_static_StaticScheduler__is(STACK_FRAME void* this) {
  return ((art_scheduling_static_StaticScheduler) this)->type == Tart_scheduling_static_StaticScheduler;
}

inline art_scheduling_static_StaticScheduler art_scheduling_static_StaticScheduler__as(STACK_FRAME void *this) {
  if (art_scheduling_static_StaticScheduler__is(CALLER this)) return (art_scheduling_static_StaticScheduler) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.static.StaticScheduler.");
  abort();
}

void art_scheduling_static_StaticScheduler_apply(STACK_FRAME art_scheduling_static_StaticScheduler this, IS_7E8796 bridges, art_scheduling_static_Schedule_DScheduleSpec staticSchedule);

Unit art_scheduling_static_StaticScheduler_initialize_(STACK_FRAME art_scheduling_static_StaticScheduler this);

Unit art_scheduling_static_StaticScheduler_initializationPhase_(STACK_FRAME art_scheduling_static_StaticScheduler this);

Unit art_scheduling_static_StaticScheduler_computePhase_(STACK_FRAME art_scheduling_static_StaticScheduler this);

Unit art_scheduling_static_StaticScheduler_finalizePhase_(STACK_FRAME art_scheduling_static_StaticScheduler this);

#ifdef __cplusplus
}
#endif

#endif