#ifndef SIREUM_H_t_ThreadTimingProperties
#define SIREUM_H_t_ThreadTimingProperties

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// t.ThreadTimingProperties

#define t_ThreadTimingProperties_domain_(this) ((Option_882048) &(this)->domain)
#define t_ThreadTimingProperties_computeExecutionTime_(this) ((Option_B47750) &(this)->computeExecutionTime)

B t_ThreadTimingProperties__eq(t_ThreadTimingProperties this, t_ThreadTimingProperties other);
inline B t_ThreadTimingProperties__ne(t_ThreadTimingProperties this, t_ThreadTimingProperties other) {
  return !t_ThreadTimingProperties__eq(this, other);
};
void t_ThreadTimingProperties_string_(STACK_FRAME String result, t_ThreadTimingProperties this);
void t_ThreadTimingProperties_cprint(t_ThreadTimingProperties this, B isOut);

inline B t_ThreadTimingProperties__is(STACK_FRAME void* this) {
  return ((t_ThreadTimingProperties) this)->type == Tt_ThreadTimingProperties;
}

inline t_ThreadTimingProperties t_ThreadTimingProperties__as(STACK_FRAME void *this) {
  if (t_ThreadTimingProperties__is(CALLER this)) return (t_ThreadTimingProperties) this;
  sfAbortImpl(CALLER "Invalid cast to t.ThreadTimingProperties.");
  abort();
}

void t_ThreadTimingProperties_apply(STACK_FRAME t_ThreadTimingProperties this, Option_882048 domain, Option_B47750 computeExecutionTime);

#ifdef __cplusplus
}
#endif

#endif