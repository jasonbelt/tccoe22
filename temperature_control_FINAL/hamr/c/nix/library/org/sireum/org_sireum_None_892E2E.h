#ifndef SIREUM_H_org_sireum_None_892E2E
#define SIREUM_H_org_sireum_None_892E2E

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[t.Cli.RunTopOption]


B None_892E2E__eq(None_892E2E this, None_892E2E other);
inline B None_892E2E__ne(None_892E2E this, None_892E2E other) {
  return !None_892E2E__eq(this, other);
};
void None_892E2E_string_(STACK_FRAME String result, None_892E2E this);
void None_892E2E_cprint(None_892E2E this, B isOut);

inline B None_892E2E__is(STACK_FRAME void* this) {
  return ((None_892E2E) this)->type == TNone_892E2E;
}

inline None_892E2E None_892E2E__as(STACK_FRAME void *this) {
  if (None_892E2E__is(CALLER this)) return (None_892E2E) this;
  sfAbortImpl(CALLER "Invalid cast to None[t.Cli.RunTopOption].");
  abort();
}

void None_892E2E_apply(STACK_FRAME None_892E2E this);

#ifdef __cplusplus
}
#endif

#endif