#ifndef SIREUM_H_org_sireum_None_ACBA15
#define SIREUM_H_org_sireum_None_ACBA15

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[t.TemperatureControl.TempControl_i_Initialization_Api]


B None_ACBA15__eq(None_ACBA15 this, None_ACBA15 other);
inline B None_ACBA15__ne(None_ACBA15 this, None_ACBA15 other) {
  return !None_ACBA15__eq(this, other);
};
void None_ACBA15_string_(STACK_FRAME String result, None_ACBA15 this);
void None_ACBA15_cprint(None_ACBA15 this, B isOut);

inline B None_ACBA15__is(STACK_FRAME void* this) {
  return ((None_ACBA15) this)->type == TNone_ACBA15;
}

inline None_ACBA15 None_ACBA15__as(STACK_FRAME void *this) {
  if (None_ACBA15__is(CALLER this)) return (None_ACBA15) this;
  sfAbortImpl(CALLER "Invalid cast to None[t.TemperatureControl.TempControl_i_Initialization_Api].");
  abort();
}

void None_ACBA15_apply(STACK_FRAME None_ACBA15 this);

#ifdef __cplusplus
}
#endif

#endif