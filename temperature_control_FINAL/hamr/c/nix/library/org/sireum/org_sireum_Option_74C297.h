#ifndef SIREUM_H_org_sireum_Option_74C297
#define SIREUM_H_org_sireum_Option_74C297

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[t.TemperatureControl.Fan_i_Initialization_Api]

#define Option_74C297__eq(this, other) Type__eq(this, other)
#define Option_74C297__ne(this, other) (!Type__eq(this, other))
#define Option_74C297_cprint(this, isOut) Type_cprint(this, isOut)
B Option_74C297__is(STACK_FRAME void *this);
Option_74C297 Option_74C297__as(STACK_FRAME void *this);
inline void Option_74C297_string_(STACK_FRAME String result, Option_74C297 this) {
  Type_string_(CALLER result, this);
}

void Option_74C297_get_(STACK_FRAME t_TemperatureControl_Fan_i_Initialization_Api result, Option_74C297 this);

#ifdef __cplusplus
}
#endif

#endif