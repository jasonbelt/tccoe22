#ifndef SIREUM_H_org_sireum_Option_BCC9E8
#define SIREUM_H_org_sireum_Option_BCC9E8

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[t.TemperatureControl.TempControl_i_Initialization_Api]

#define Option_BCC9E8__eq(this, other) Type__eq(this, other)
#define Option_BCC9E8__ne(this, other) (!Type__eq(this, other))
#define Option_BCC9E8_cprint(this, isOut) Type_cprint(this, isOut)
B Option_BCC9E8__is(STACK_FRAME void *this);
Option_BCC9E8 Option_BCC9E8__as(STACK_FRAME void *this);
inline void Option_BCC9E8_string_(STACK_FRAME String result, Option_BCC9E8 this) {
  Type_string_(CALLER result, this);
}

void Option_BCC9E8_get_(STACK_FRAME t_TemperatureControl_TempControl_i_Initialization_Api result, Option_BCC9E8 this);

#ifdef __cplusplus
}
#endif

#endif