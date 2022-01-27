#ifndef SIREUM_H_org_sireum_Some_D8D240
#define SIREUM_H_org_sireum_Some_D8D240

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[t.TemperatureControl.SetPoint_i]

#define Some_D8D240_value_(this) ((t_TemperatureControl_SetPoint_i) &(this)->value)

B Some_D8D240__eq(Some_D8D240 this, Some_D8D240 other);
inline B Some_D8D240__ne(Some_D8D240 this, Some_D8D240 other) {
  return !Some_D8D240__eq(this, other);
};
void Some_D8D240_string_(STACK_FRAME String result, Some_D8D240 this);
void Some_D8D240_cprint(Some_D8D240 this, B isOut);

inline B Some_D8D240__is(STACK_FRAME void* this) {
  return ((Some_D8D240) this)->type == TSome_D8D240;
}

inline Some_D8D240 Some_D8D240__as(STACK_FRAME void *this) {
  if (Some_D8D240__is(CALLER this)) return (Some_D8D240) this;
  sfAbortImpl(CALLER "Invalid cast to Some[t.TemperatureControl.SetPoint_i].");
  abort();
}

void Some_D8D240_apply(STACK_FRAME Some_D8D240 this, t_TemperatureControl_SetPoint_i value);

#ifdef __cplusplus
}
#endif

#endif