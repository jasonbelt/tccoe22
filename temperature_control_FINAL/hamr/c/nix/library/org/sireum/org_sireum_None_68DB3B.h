#ifndef SIREUM_H_org_sireum_None_68DB3B
#define SIREUM_H_org_sireum_None_68DB3B

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[t.TemperatureControl.TempSensor_i_Initialization_Api]


B None_68DB3B__eq(None_68DB3B this, None_68DB3B other);
inline B None_68DB3B__ne(None_68DB3B this, None_68DB3B other) {
  return !None_68DB3B__eq(this, other);
};
void None_68DB3B_string_(STACK_FRAME String result, None_68DB3B this);
void None_68DB3B_cprint(None_68DB3B this, B isOut);

inline B None_68DB3B__is(STACK_FRAME void* this) {
  return ((None_68DB3B) this)->type == TNone_68DB3B;
}

inline None_68DB3B None_68DB3B__as(STACK_FRAME void *this) {
  if (None_68DB3B__is(CALLER this)) return (None_68DB3B) this;
  sfAbortImpl(CALLER "Invalid cast to None[t.TemperatureControl.TempSensor_i_Initialization_Api].");
  abort();
}

void None_68DB3B_apply(STACK_FRAME None_68DB3B this);

#ifdef __cplusplus
}
#endif

#endif