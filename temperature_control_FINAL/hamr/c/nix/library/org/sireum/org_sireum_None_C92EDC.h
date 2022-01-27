#ifndef SIREUM_H_org_sireum_None_C92EDC
#define SIREUM_H_org_sireum_None_C92EDC

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[IS[Z, art.Bridge]]


B None_C92EDC__eq(None_C92EDC this, None_C92EDC other);
inline B None_C92EDC__ne(None_C92EDC this, None_C92EDC other) {
  return !None_C92EDC__eq(this, other);
};
void None_C92EDC_string_(STACK_FRAME String result, None_C92EDC this);
void None_C92EDC_cprint(None_C92EDC this, B isOut);

inline B None_C92EDC__is(STACK_FRAME void* this) {
  return ((None_C92EDC) this)->type == TNone_C92EDC;
}

inline None_C92EDC None_C92EDC__as(STACK_FRAME void *this) {
  if (None_C92EDC__is(CALLER this)) return (None_C92EDC) this;
  sfAbortImpl(CALLER "Invalid cast to None[IS[Z, art.Bridge]].");
  abort();
}

void None_C92EDC_apply(STACK_FRAME None_C92EDC this);

#ifdef __cplusplus
}
#endif

#endif