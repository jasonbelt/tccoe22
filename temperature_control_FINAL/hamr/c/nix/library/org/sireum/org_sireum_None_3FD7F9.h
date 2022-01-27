#ifndef SIREUM_H_org_sireum_None_3FD7F9
#define SIREUM_H_org_sireum_None_3FD7F9

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[t.TemperatureControl.TempUnit.Type]


B None_3FD7F9__eq(None_3FD7F9 this, None_3FD7F9 other);
inline B None_3FD7F9__ne(None_3FD7F9 this, None_3FD7F9 other) {
  return !None_3FD7F9__eq(this, other);
};
void None_3FD7F9_string_(STACK_FRAME String result, None_3FD7F9 this);
void None_3FD7F9_cprint(None_3FD7F9 this, B isOut);

inline B None_3FD7F9__is(STACK_FRAME void* this) {
  return ((None_3FD7F9) this)->type == TNone_3FD7F9;
}

inline None_3FD7F9 None_3FD7F9__as(STACK_FRAME void *this) {
  if (None_3FD7F9__is(CALLER this)) return (None_3FD7F9) this;
  sfAbortImpl(CALLER "Invalid cast to None[t.TemperatureControl.TempUnit.Type].");
  abort();
}

void None_3FD7F9_apply(STACK_FRAME None_3FD7F9 this);

#ifdef __cplusplus
}
#endif

#endif