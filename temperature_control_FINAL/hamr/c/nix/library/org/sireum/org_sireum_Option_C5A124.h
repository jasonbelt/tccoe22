#ifndef SIREUM_H_org_sireum_Option_C5A124
#define SIREUM_H_org_sireum_Option_C5A124

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[t.TemperatureControl.FanAck.Type]

#define Option_C5A124__eq(this, other) Type__eq(this, other)
#define Option_C5A124__ne(this, other) (!Type__eq(this, other))
#define Option_C5A124_cprint(this, isOut) Type_cprint(this, isOut)
B Option_C5A124__is(STACK_FRAME void *this);
Option_C5A124 Option_C5A124__as(STACK_FRAME void *this);
inline void Option_C5A124_string_(STACK_FRAME String result, Option_C5A124 this) {
  Type_string_(CALLER result, this);
}

t_TemperatureControl_FanAck_Type Option_C5A124_get_(STACK_FRAME Option_C5A124 this);

#ifdef __cplusplus
}
#endif

#endif