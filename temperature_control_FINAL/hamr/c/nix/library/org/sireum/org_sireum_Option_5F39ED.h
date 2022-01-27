#ifndef SIREUM_H_org_sireum_Option_5F39ED
#define SIREUM_H_org_sireum_Option_5F39ED

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[t.Cli.RunChoice.Type]

#define Option_5F39ED__eq(this, other) Type__eq(this, other)
#define Option_5F39ED__ne(this, other) (!Type__eq(this, other))
#define Option_5F39ED_cprint(this, isOut) Type_cprint(this, isOut)
B Option_5F39ED__is(STACK_FRAME void *this);
Option_5F39ED Option_5F39ED__as(STACK_FRAME void *this);
inline void Option_5F39ED_string_(STACK_FRAME String result, Option_5F39ED this) {
  Type_string_(CALLER result, this);
}

#ifdef __cplusplus
}
#endif

#endif