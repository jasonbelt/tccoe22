#ifndef SIREUM_H_org_sireum_Some_14C467
#define SIREUM_H_org_sireum_Some_14C467

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[t.TemperatureControl.Temperature_i]

#define Some_14C467_value_(this) ((t_TemperatureControl_Temperature_i) &(this)->value)

B Some_14C467__eq(Some_14C467 this, Some_14C467 other);
inline B Some_14C467__ne(Some_14C467 this, Some_14C467 other) {
  return !Some_14C467__eq(this, other);
};
void Some_14C467_string_(STACK_FRAME String result, Some_14C467 this);
void Some_14C467_cprint(Some_14C467 this, B isOut);

inline B Some_14C467__is(STACK_FRAME void* this) {
  return ((Some_14C467) this)->type == TSome_14C467;
}

inline Some_14C467 Some_14C467__as(STACK_FRAME void *this) {
  if (Some_14C467__is(CALLER this)) return (Some_14C467) this;
  sfAbortImpl(CALLER "Invalid cast to Some[t.TemperatureControl.Temperature_i].");
  abort();
}

void Some_14C467_apply(STACK_FRAME Some_14C467 this, t_TemperatureControl_Temperature_i value);

#ifdef __cplusplus
}
#endif

#endif