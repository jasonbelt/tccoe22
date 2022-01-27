#ifndef SIREUM_H_org_sireum_None_72E81E
#define SIREUM_H_org_sireum_None_72E81E

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[t.Cli.RunChoice.Type]


B None_72E81E__eq(None_72E81E this, None_72E81E other);
inline B None_72E81E__ne(None_72E81E this, None_72E81E other) {
  return !None_72E81E__eq(this, other);
};
void None_72E81E_string_(STACK_FRAME String result, None_72E81E this);
void None_72E81E_cprint(None_72E81E this, B isOut);

inline B None_72E81E__is(STACK_FRAME void* this) {
  return ((None_72E81E) this)->type == TNone_72E81E;
}

inline None_72E81E None_72E81E__as(STACK_FRAME void *this) {
  if (None_72E81E__is(CALLER this)) return (None_72E81E) this;
  sfAbortImpl(CALLER "Invalid cast to None[t.Cli.RunChoice.Type].");
  abort();
}

void None_72E81E_apply(STACK_FRAME None_72E81E this);

#ifdef __cplusplus
}
#endif

#endif