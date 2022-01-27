#ifndef SIREUM_H_org_sireum_Option_87C81A
#define SIREUM_H_org_sireum_Option_87C81A

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[t.TemperatureControl.TempSensor_i_Initialization_Api]

#define Option_87C81A__eq(this, other) Type__eq(this, other)
#define Option_87C81A__ne(this, other) (!Type__eq(this, other))
#define Option_87C81A_cprint(this, isOut) Type_cprint(this, isOut)
B Option_87C81A__is(STACK_FRAME void *this);
Option_87C81A Option_87C81A__as(STACK_FRAME void *this);
inline void Option_87C81A_string_(STACK_FRAME String result, Option_87C81A this) {
  Type_string_(CALLER result, this);
}

void Option_87C81A_get_(STACK_FRAME t_TemperatureControl_TempSensor_i_Initialization_Api result, Option_87C81A this);

#ifdef __cplusplus
}
#endif

#endif