#ifndef SIREUM_H_t_ProcessorTimingProperties
#define SIREUM_H_t_ProcessorTimingProperties

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// t.ProcessorTimingProperties

#define t_ProcessorTimingProperties_clockPeriod_(this) ((Option_882048) &(this)->clockPeriod)
#define t_ProcessorTimingProperties_framePeriod_(this) ((Option_882048) &(this)->framePeriod)
#define t_ProcessorTimingProperties_maxDomain_(this) ((Option_882048) &(this)->maxDomain)
#define t_ProcessorTimingProperties_slotTime_(this) ((Option_882048) &(this)->slotTime)

B t_ProcessorTimingProperties__eq(t_ProcessorTimingProperties this, t_ProcessorTimingProperties other);
inline B t_ProcessorTimingProperties__ne(t_ProcessorTimingProperties this, t_ProcessorTimingProperties other) {
  return !t_ProcessorTimingProperties__eq(this, other);
};
void t_ProcessorTimingProperties_string_(STACK_FRAME String result, t_ProcessorTimingProperties this);
void t_ProcessorTimingProperties_cprint(t_ProcessorTimingProperties this, B isOut);

inline B t_ProcessorTimingProperties__is(STACK_FRAME void* this) {
  return ((t_ProcessorTimingProperties) this)->type == Tt_ProcessorTimingProperties;
}

inline t_ProcessorTimingProperties t_ProcessorTimingProperties__as(STACK_FRAME void *this) {
  if (t_ProcessorTimingProperties__is(CALLER this)) return (t_ProcessorTimingProperties) this;
  sfAbortImpl(CALLER "Invalid cast to t.ProcessorTimingProperties.");
  abort();
}

void t_ProcessorTimingProperties_apply(STACK_FRAME t_ProcessorTimingProperties this, Option_882048 clockPeriod, Option_882048 framePeriod, Option_882048 maxDomain, Option_882048 slotTime);

#ifdef __cplusplus
}
#endif

#endif