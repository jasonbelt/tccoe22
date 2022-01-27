#ifndef SIREUM_H_org_sireum_Some_A89224
#define SIREUM_H_org_sireum_Some_A89224

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[t.TemperatureControl.Fan_i_Operational_Api]

#define Some_A89224_value_(this) ((t_TemperatureControl_Fan_i_Operational_Api) &(this)->value)

B Some_A89224__eq(Some_A89224 this, Some_A89224 other);
inline B Some_A89224__ne(Some_A89224 this, Some_A89224 other) {
  return !Some_A89224__eq(this, other);
};
void Some_A89224_string_(STACK_FRAME String result, Some_A89224 this);
void Some_A89224_cprint(Some_A89224 this, B isOut);

inline B Some_A89224__is(STACK_FRAME void* this) {
  return ((Some_A89224) this)->type == TSome_A89224;
}

inline Some_A89224 Some_A89224__as(STACK_FRAME void *this) {
  if (Some_A89224__is(CALLER this)) return (Some_A89224) this;
  sfAbortImpl(CALLER "Invalid cast to Some[t.TemperatureControl.Fan_i_Operational_Api].");
  abort();
}

void Some_A89224_apply(STACK_FRAME Some_A89224 this, t_TemperatureControl_Fan_i_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif