#ifndef SIREUM_H_org_sireum_None_B473AE
#define SIREUM_H_org_sireum_None_B473AE

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[t.TemperatureControl.SetPoint_i]


B None_B473AE__eq(None_B473AE this, None_B473AE other);
inline B None_B473AE__ne(None_B473AE this, None_B473AE other) {
  return !None_B473AE__eq(this, other);
};
void None_B473AE_string_(STACK_FRAME String result, None_B473AE this);
void None_B473AE_cprint(None_B473AE this, B isOut);

inline B None_B473AE__is(STACK_FRAME void* this) {
  return ((None_B473AE) this)->type == TNone_B473AE;
}

inline None_B473AE None_B473AE__as(STACK_FRAME void *this) {
  if (None_B473AE__is(CALLER this)) return (None_B473AE) this;
  sfAbortImpl(CALLER "Invalid cast to None[t.TemperatureControl.SetPoint_i].");
  abort();
}

void None_B473AE_apply(STACK_FRAME None_B473AE this);

#ifdef __cplusplus
}
#endif

#endif