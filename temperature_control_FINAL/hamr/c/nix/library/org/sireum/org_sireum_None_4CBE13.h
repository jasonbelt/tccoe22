#ifndef SIREUM_H_org_sireum_None_4CBE13
#define SIREUM_H_org_sireum_None_4CBE13

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[t.TemperatureControl.Temperature_i]


B None_4CBE13__eq(None_4CBE13 this, None_4CBE13 other);
inline B None_4CBE13__ne(None_4CBE13 this, None_4CBE13 other) {
  return !None_4CBE13__eq(this, other);
};
void None_4CBE13_string_(STACK_FRAME String result, None_4CBE13 this);
void None_4CBE13_cprint(None_4CBE13 this, B isOut);

inline B None_4CBE13__is(STACK_FRAME void* this) {
  return ((None_4CBE13) this)->type == TNone_4CBE13;
}

inline None_4CBE13 None_4CBE13__as(STACK_FRAME void *this) {
  if (None_4CBE13__is(CALLER this)) return (None_4CBE13) this;
  sfAbortImpl(CALLER "Invalid cast to None[t.TemperatureControl.Temperature_i].");
  abort();
}

void None_4CBE13_apply(STACK_FRAME None_4CBE13 this);

#ifdef __cplusplus
}
#endif

#endif