#ifndef SIREUM_H_org_sireum_Option_10368D
#define SIREUM_H_org_sireum_Option_10368D

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[t.TemperatureControl.TempSensor_i_Operational_Api]

#define Option_10368D__eq(this, other) Type__eq(this, other)
#define Option_10368D__ne(this, other) (!Type__eq(this, other))
#define Option_10368D_cprint(this, isOut) Type_cprint(this, isOut)
B Option_10368D__is(STACK_FRAME void *this);
Option_10368D Option_10368D__as(STACK_FRAME void *this);
inline void Option_10368D_string_(STACK_FRAME String result, Option_10368D this) {
  Type_string_(CALLER result, this);
}

void Option_10368D_get_(STACK_FRAME t_TemperatureControl_TempSensor_i_Operational_Api result, Option_10368D this);

#ifdef __cplusplus
}
#endif

#endif