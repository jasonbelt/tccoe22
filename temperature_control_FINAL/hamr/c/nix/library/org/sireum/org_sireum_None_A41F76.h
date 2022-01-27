#ifndef SIREUM_H_org_sireum_None_A41F76
#define SIREUM_H_org_sireum_None_A41F76

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[t.TemperatureControl.TempControl_i_Operational_Api]


B None_A41F76__eq(None_A41F76 this, None_A41F76 other);
inline B None_A41F76__ne(None_A41F76 this, None_A41F76 other) {
  return !None_A41F76__eq(this, other);
};
void None_A41F76_string_(STACK_FRAME String result, None_A41F76 this);
void None_A41F76_cprint(None_A41F76 this, B isOut);

inline B None_A41F76__is(STACK_FRAME void* this) {
  return ((None_A41F76) this)->type == TNone_A41F76;
}

inline None_A41F76 None_A41F76__as(STACK_FRAME void *this) {
  if (None_A41F76__is(CALLER this)) return (None_A41F76) this;
  sfAbortImpl(CALLER "Invalid cast to None[t.TemperatureControl.TempControl_i_Operational_Api].");
  abort();
}

void None_A41F76_apply(STACK_FRAME None_A41F76 this);

#ifdef __cplusplus
}
#endif

#endif