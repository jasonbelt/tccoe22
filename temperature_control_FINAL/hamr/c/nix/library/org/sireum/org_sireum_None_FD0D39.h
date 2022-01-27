#ifndef SIREUM_H_org_sireum_None_FD0D39
#define SIREUM_H_org_sireum_None_FD0D39

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[art.scheduling.static.Schedule.DScheduleSpec]


B None_FD0D39__eq(None_FD0D39 this, None_FD0D39 other);
inline B None_FD0D39__ne(None_FD0D39 this, None_FD0D39 other) {
  return !None_FD0D39__eq(this, other);
};
void None_FD0D39_string_(STACK_FRAME String result, None_FD0D39 this);
void None_FD0D39_cprint(None_FD0D39 this, B isOut);

inline B None_FD0D39__is(STACK_FRAME void* this) {
  return ((None_FD0D39) this)->type == TNone_FD0D39;
}

inline None_FD0D39 None_FD0D39__as(STACK_FRAME void *this) {
  if (None_FD0D39__is(CALLER this)) return (None_FD0D39) this;
  sfAbortImpl(CALLER "Invalid cast to None[art.scheduling.static.Schedule.DScheduleSpec].");
  abort();
}

void None_FD0D39_apply(STACK_FRAME None_FD0D39 this);

#ifdef __cplusplus
}
#endif

#endif