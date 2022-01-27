#ifndef SIREUM_H_org_sireum_None_380ACD
#define SIREUM_H_org_sireum_None_380ACD

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[t.TemperatureControl.FanCmd.Type]


B None_380ACD__eq(None_380ACD this, None_380ACD other);
inline B None_380ACD__ne(None_380ACD this, None_380ACD other) {
  return !None_380ACD__eq(this, other);
};
void None_380ACD_string_(STACK_FRAME String result, None_380ACD this);
void None_380ACD_cprint(None_380ACD this, B isOut);

inline B None_380ACD__is(STACK_FRAME void* this) {
  return ((None_380ACD) this)->type == TNone_380ACD;
}

inline None_380ACD None_380ACD__as(STACK_FRAME void *this) {
  if (None_380ACD__is(CALLER this)) return (None_380ACD) this;
  sfAbortImpl(CALLER "Invalid cast to None[t.TemperatureControl.FanCmd.Type].");
  abort();
}

void None_380ACD_apply(STACK_FRAME None_380ACD this);

#ifdef __cplusplus
}
#endif

#endif