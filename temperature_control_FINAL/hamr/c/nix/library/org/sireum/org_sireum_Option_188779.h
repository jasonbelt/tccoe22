#ifndef SIREUM_H_org_sireum_Option_188779
#define SIREUM_H_org_sireum_Option_188779

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[art.scheduling.static.Schedule.DScheduleSpec]

#define Option_188779__eq(this, other) Type__eq(this, other)
#define Option_188779__ne(this, other) (!Type__eq(this, other))
#define Option_188779_cprint(this, isOut) Type_cprint(this, isOut)
B Option_188779__is(STACK_FRAME void *this);
Option_188779 Option_188779__as(STACK_FRAME void *this);
inline void Option_188779_string_(STACK_FRAME String result, Option_188779 this) {
  Type_string_(CALLER result, this);
}

#ifdef __cplusplus
}
#endif

#endif