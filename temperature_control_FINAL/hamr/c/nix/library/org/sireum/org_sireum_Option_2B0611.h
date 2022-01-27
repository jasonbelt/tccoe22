#ifndef SIREUM_H_org_sireum_Option_2B0611
#define SIREUM_H_org_sireum_Option_2B0611

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[t.TemperatureControl.FanCmd.Type]

#define Option_2B0611__eq(this, other) Type__eq(this, other)
#define Option_2B0611__ne(this, other) (!Type__eq(this, other))
#define Option_2B0611_cprint(this, isOut) Type_cprint(this, isOut)
B Option_2B0611__is(STACK_FRAME void *this);
Option_2B0611 Option_2B0611__as(STACK_FRAME void *this);
inline void Option_2B0611_string_(STACK_FRAME String result, Option_2B0611 this) {
  Type_string_(CALLER result, this);
}

t_TemperatureControl_FanCmd_Type Option_2B0611_get_(STACK_FRAME Option_2B0611 this);

#ifdef __cplusplus
}
#endif

#endif