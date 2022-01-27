#ifndef SIREUM_H_org_sireum_Some_486E43
#define SIREUM_H_org_sireum_Some_486E43

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[t.TemperatureControl.TempUnit.Type]

#define Some_486E43_value_(this) ((this)->value)

B Some_486E43__eq(Some_486E43 this, Some_486E43 other);
inline B Some_486E43__ne(Some_486E43 this, Some_486E43 other) {
  return !Some_486E43__eq(this, other);
};
void Some_486E43_string_(STACK_FRAME String result, Some_486E43 this);
void Some_486E43_cprint(Some_486E43 this, B isOut);

inline B Some_486E43__is(STACK_FRAME void* this) {
  return ((Some_486E43) this)->type == TSome_486E43;
}

inline Some_486E43 Some_486E43__as(STACK_FRAME void *this) {
  if (Some_486E43__is(CALLER this)) return (Some_486E43) this;
  sfAbortImpl(CALLER "Invalid cast to Some[t.TemperatureControl.TempUnit.Type].");
  abort();
}

void Some_486E43_apply(STACK_FRAME Some_486E43 this, t_TemperatureControl_TempUnit_Type value);

#ifdef __cplusplus
}
#endif

#endif