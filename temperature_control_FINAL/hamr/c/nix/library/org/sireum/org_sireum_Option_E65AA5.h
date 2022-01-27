#ifndef SIREUM_H_org_sireum_Option_E65AA5
#define SIREUM_H_org_sireum_Option_E65AA5

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[IS[Z, art.Bridge]]

#define Option_E65AA5__eq(this, other) Type__eq(this, other)
#define Option_E65AA5__ne(this, other) (!Type__eq(this, other))
#define Option_E65AA5_cprint(this, isOut) Type_cprint(this, isOut)
B Option_E65AA5__is(STACK_FRAME void *this);
Option_E65AA5 Option_E65AA5__as(STACK_FRAME void *this);
inline void Option_E65AA5_string_(STACK_FRAME String result, Option_E65AA5 this) {
  Type_string_(CALLER result, this);
}

#ifdef __cplusplus
}
#endif

#endif