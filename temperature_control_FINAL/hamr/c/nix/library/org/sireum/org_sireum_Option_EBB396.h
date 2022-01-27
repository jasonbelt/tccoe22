#ifndef SIREUM_H_org_sireum_Option_EBB396
#define SIREUM_H_org_sireum_Option_EBB396

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[t.TemperatureControl.SetPoint_i]

#define Option_EBB396__eq(this, other) Type__eq(this, other)
#define Option_EBB396__ne(this, other) (!Type__eq(this, other))
#define Option_EBB396_cprint(this, isOut) Type_cprint(this, isOut)
B Option_EBB396__is(STACK_FRAME void *this);
Option_EBB396 Option_EBB396__as(STACK_FRAME void *this);
inline void Option_EBB396_string_(STACK_FRAME String result, Option_EBB396 this) {
  Type_string_(CALLER result, this);
}

#ifdef __cplusplus
}
#endif

#endif