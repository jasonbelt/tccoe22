#ifndef SIREUM_H_org_sireum_None_856E6F
#define SIREUM_H_org_sireum_None_856E6F

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[t.TemperatureControl.Fan_i_Initialization_Api]


B None_856E6F__eq(None_856E6F this, None_856E6F other);
inline B None_856E6F__ne(None_856E6F this, None_856E6F other) {
  return !None_856E6F__eq(this, other);
};
void None_856E6F_string_(STACK_FRAME String result, None_856E6F this);
void None_856E6F_cprint(None_856E6F this, B isOut);

inline B None_856E6F__is(STACK_FRAME void* this) {
  return ((None_856E6F) this)->type == TNone_856E6F;
}

inline None_856E6F None_856E6F__as(STACK_FRAME void *this) {
  if (None_856E6F__is(CALLER this)) return (None_856E6F) this;
  sfAbortImpl(CALLER "Invalid cast to None[t.TemperatureControl.Fan_i_Initialization_Api].");
  abort();
}

void None_856E6F_apply(STACK_FRAME None_856E6F this);

#ifdef __cplusplus
}
#endif

#endif