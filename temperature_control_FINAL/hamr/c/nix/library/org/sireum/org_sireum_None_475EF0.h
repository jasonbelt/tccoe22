#ifndef SIREUM_H_org_sireum_None_475EF0
#define SIREUM_H_org_sireum_None_475EF0

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[t.TemperatureControl.Fan_i_Operational_Api]


B None_475EF0__eq(None_475EF0 this, None_475EF0 other);
inline B None_475EF0__ne(None_475EF0 this, None_475EF0 other) {
  return !None_475EF0__eq(this, other);
};
void None_475EF0_string_(STACK_FRAME String result, None_475EF0 this);
void None_475EF0_cprint(None_475EF0 this, B isOut);

inline B None_475EF0__is(STACK_FRAME void* this) {
  return ((None_475EF0) this)->type == TNone_475EF0;
}

inline None_475EF0 None_475EF0__as(STACK_FRAME void *this) {
  if (None_475EF0__is(CALLER this)) return (None_475EF0) this;
  sfAbortImpl(CALLER "Invalid cast to None[t.TemperatureControl.Fan_i_Operational_Api].");
  abort();
}

void None_475EF0_apply(STACK_FRAME None_475EF0 this);

#ifdef __cplusplus
}
#endif

#endif