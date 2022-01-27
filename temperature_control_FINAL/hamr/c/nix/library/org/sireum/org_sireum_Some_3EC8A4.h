#ifndef SIREUM_H_org_sireum_Some_3EC8A4
#define SIREUM_H_org_sireum_Some_3EC8A4

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[IS[Z, art.Bridge]]

#define Some_3EC8A4_value_(this) ((IS_7E8796) &(this)->value)

B Some_3EC8A4__eq(Some_3EC8A4 this, Some_3EC8A4 other);
inline B Some_3EC8A4__ne(Some_3EC8A4 this, Some_3EC8A4 other) {
  return !Some_3EC8A4__eq(this, other);
};
void Some_3EC8A4_string_(STACK_FRAME String result, Some_3EC8A4 this);
void Some_3EC8A4_cprint(Some_3EC8A4 this, B isOut);

inline B Some_3EC8A4__is(STACK_FRAME void* this) {
  return ((Some_3EC8A4) this)->type == TSome_3EC8A4;
}

inline Some_3EC8A4 Some_3EC8A4__as(STACK_FRAME void *this) {
  if (Some_3EC8A4__is(CALLER this)) return (Some_3EC8A4) this;
  sfAbortImpl(CALLER "Invalid cast to Some[IS[Z, art.Bridge]].");
  abort();
}

void Some_3EC8A4_apply(STACK_FRAME Some_3EC8A4 this, IS_7E8796 value);

#ifdef __cplusplus
}
#endif

#endif