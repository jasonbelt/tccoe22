#ifndef SIREUM_H_org_sireum_Option_89E471
#define SIREUM_H_org_sireum_Option_89E471

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[t.Cli.RunTopOption]

#define Option_89E471__eq(this, other) Type__eq(this, other)
#define Option_89E471__ne(this, other) (!Type__eq(this, other))
#define Option_89E471_cprint(this, isOut) Type_cprint(this, isOut)
B Option_89E471__is(STACK_FRAME void *this);
Option_89E471 Option_89E471__as(STACK_FRAME void *this);
inline void Option_89E471_string_(STACK_FRAME String result, Option_89E471 this) {
  Type_string_(CALLER result, this);
}

#ifdef __cplusplus
}
#endif

#endif