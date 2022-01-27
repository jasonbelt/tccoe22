#ifndef SIREUM_H_org_sireum_None_831682
#define SIREUM_H_org_sireum_None_831682

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[t.TemperatureControl.FanAck.Type]


B None_831682__eq(None_831682 this, None_831682 other);
inline B None_831682__ne(None_831682 this, None_831682 other) {
  return !None_831682__eq(this, other);
};
void None_831682_string_(STACK_FRAME String result, None_831682 this);
void None_831682_cprint(None_831682 this, B isOut);

inline B None_831682__is(STACK_FRAME void* this) {
  return ((None_831682) this)->type == TNone_831682;
}

inline None_831682 None_831682__as(STACK_FRAME void *this) {
  if (None_831682__is(CALLER this)) return (None_831682) this;
  sfAbortImpl(CALLER "Invalid cast to None[t.TemperatureControl.FanAck.Type].");
  abort();
}

void None_831682_apply(STACK_FRAME None_831682 this);

#ifdef __cplusplus
}
#endif

#endif