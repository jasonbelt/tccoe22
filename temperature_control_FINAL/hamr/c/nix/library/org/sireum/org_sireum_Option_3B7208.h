#ifndef SIREUM_H_org_sireum_Option_3B7208
#define SIREUM_H_org_sireum_Option_3B7208

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[t.TemperatureControl.TempControl_i_Operational_Api]

#define Option_3B7208__eq(this, other) Type__eq(this, other)
#define Option_3B7208__ne(this, other) (!Type__eq(this, other))
#define Option_3B7208_cprint(this, isOut) Type_cprint(this, isOut)
B Option_3B7208__is(STACK_FRAME void *this);
Option_3B7208 Option_3B7208__as(STACK_FRAME void *this);
inline void Option_3B7208_string_(STACK_FRAME String result, Option_3B7208 this) {
  Type_string_(CALLER result, this);
}

void Option_3B7208_get_(STACK_FRAME t_TemperatureControl_TempControl_i_Operational_Api result, Option_3B7208 this);

#ifdef __cplusplus
}
#endif

#endif