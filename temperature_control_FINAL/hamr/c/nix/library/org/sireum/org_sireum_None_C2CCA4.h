#ifndef SIREUM_H_org_sireum_None_C2CCA4
#define SIREUM_H_org_sireum_None_C2CCA4

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[String]


B None_C2CCA4__eq(None_C2CCA4 this, None_C2CCA4 other);
inline B None_C2CCA4__ne(None_C2CCA4 this, None_C2CCA4 other) {
  return !None_C2CCA4__eq(this, other);
};
void None_C2CCA4_string_(STACK_FRAME String result, None_C2CCA4 this);
void None_C2CCA4_cprint(None_C2CCA4 this, B isOut);

inline B None_C2CCA4__is(STACK_FRAME void* this) {
  return ((None_C2CCA4) this)->type == TNone_C2CCA4;
}

inline None_C2CCA4 None_C2CCA4__as(STACK_FRAME void *this) {
  if (None_C2CCA4__is(CALLER this)) return (None_C2CCA4) this;
  sfAbortImpl(CALLER "Invalid cast to None[String].");
  abort();
}

void None_C2CCA4_apply(STACK_FRAME None_C2CCA4 this);

#ifdef __cplusplus
}
#endif

#endif