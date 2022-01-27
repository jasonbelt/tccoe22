#ifndef SIREUM_H_org_sireum_Option_A8F8FC
#define SIREUM_H_org_sireum_Option_A8F8FC

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[t.TemperatureControl.Fan_i_Operational_Api]

#define Option_A8F8FC__eq(this, other) Type__eq(this, other)
#define Option_A8F8FC__ne(this, other) (!Type__eq(this, other))
#define Option_A8F8FC_cprint(this, isOut) Type_cprint(this, isOut)
B Option_A8F8FC__is(STACK_FRAME void *this);
Option_A8F8FC Option_A8F8FC__as(STACK_FRAME void *this);
inline void Option_A8F8FC_string_(STACK_FRAME String result, Option_A8F8FC this) {
  Type_string_(CALLER result, this);
}

void Option_A8F8FC_get_(STACK_FRAME t_TemperatureControl_Fan_i_Operational_Api result, Option_A8F8FC this);

#ifdef __cplusplus
}
#endif

#endif