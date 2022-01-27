#ifndef SIREUM_H_org_sireum_Option_78CB14
#define SIREUM_H_org_sireum_Option_78CB14

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[t.TemperatureControl.Temperature_i]

#define Option_78CB14__eq(this, other) Type__eq(this, other)
#define Option_78CB14__ne(this, other) (!Type__eq(this, other))
#define Option_78CB14_cprint(this, isOut) Type_cprint(this, isOut)
B Option_78CB14__is(STACK_FRAME void *this);
Option_78CB14 Option_78CB14__as(STACK_FRAME void *this);
inline void Option_78CB14_string_(STACK_FRAME String result, Option_78CB14 this) {
  Type_string_(CALLER result, this);
}

#ifdef __cplusplus
}
#endif

#endif