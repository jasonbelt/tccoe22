#ifndef SIREUM_H_org_sireum_Option_40D664
#define SIREUM_H_org_sireum_Option_40D664

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[t.TemperatureControl.TempUnit.Type]

#define Option_40D664__eq(this, other) Type__eq(this, other)
#define Option_40D664__ne(this, other) (!Type__eq(this, other))
#define Option_40D664_cprint(this, isOut) Type_cprint(this, isOut)
B Option_40D664__is(STACK_FRAME void *this);
Option_40D664 Option_40D664__as(STACK_FRAME void *this);
inline void Option_40D664_string_(STACK_FRAME String result, Option_40D664 this) {
  Type_string_(CALLER result, this);
}

t_TemperatureControl_TempUnit_Type Option_40D664_get_(STACK_FRAME Option_40D664 this);

#ifdef __cplusplus
}
#endif

#endif