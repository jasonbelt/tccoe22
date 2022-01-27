#ifndef SIREUM_H_org_sireum_Some_A13654
#define SIREUM_H_org_sireum_Some_A13654

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[art.scheduling.static.Schedule.DScheduleSpec]

#define Some_A13654_value_(this) ((art_scheduling_static_Schedule_DScheduleSpec) &(this)->value)

B Some_A13654__eq(Some_A13654 this, Some_A13654 other);
inline B Some_A13654__ne(Some_A13654 this, Some_A13654 other) {
  return !Some_A13654__eq(this, other);
};
void Some_A13654_string_(STACK_FRAME String result, Some_A13654 this);
void Some_A13654_cprint(Some_A13654 this, B isOut);

inline B Some_A13654__is(STACK_FRAME void* this) {
  return ((Some_A13654) this)->type == TSome_A13654;
}

inline Some_A13654 Some_A13654__as(STACK_FRAME void *this) {
  if (Some_A13654__is(CALLER this)) return (Some_A13654) this;
  sfAbortImpl(CALLER "Invalid cast to Some[art.scheduling.static.Schedule.DScheduleSpec].");
  abort();
}

void Some_A13654_apply(STACK_FRAME Some_A13654 this, art_scheduling_static_Schedule_DScheduleSpec value);

#ifdef __cplusplus
}
#endif

#endif