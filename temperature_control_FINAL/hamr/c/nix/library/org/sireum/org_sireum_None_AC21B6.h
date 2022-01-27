#ifndef SIREUM_H_org_sireum_None_AC21B6
#define SIREUM_H_org_sireum_None_AC21B6

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[t.TemperatureControl.TempSensor_i_Operational_Api]


B None_AC21B6__eq(None_AC21B6 this, None_AC21B6 other);
inline B None_AC21B6__ne(None_AC21B6 this, None_AC21B6 other) {
  return !None_AC21B6__eq(this, other);
};
void None_AC21B6_string_(STACK_FRAME String result, None_AC21B6 this);
void None_AC21B6_cprint(None_AC21B6 this, B isOut);

inline B None_AC21B6__is(STACK_FRAME void* this) {
  return ((None_AC21B6) this)->type == TNone_AC21B6;
}

inline None_AC21B6 None_AC21B6__as(STACK_FRAME void *this) {
  if (None_AC21B6__is(CALLER this)) return (None_AC21B6) this;
  sfAbortImpl(CALLER "Invalid cast to None[t.TemperatureControl.TempSensor_i_Operational_Api].");
  abort();
}

void None_AC21B6_apply(STACK_FRAME None_AC21B6 this);

#ifdef __cplusplus
}
#endif

#endif