#ifndef SIREUM_H_t_TemperatureControl_SetPoint_i
#define SIREUM_H_t_TemperatureControl_SetPoint_i

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// t.TemperatureControl.SetPoint_i

#define t_TemperatureControl_SetPoint_i_low_(this) ((t_TemperatureControl_Temperature_i) &(this)->low)
#define t_TemperatureControl_SetPoint_i_high_(this) ((t_TemperatureControl_Temperature_i) &(this)->high)

B t_TemperatureControl_SetPoint_i__eq(t_TemperatureControl_SetPoint_i this, t_TemperatureControl_SetPoint_i other);
inline B t_TemperatureControl_SetPoint_i__ne(t_TemperatureControl_SetPoint_i this, t_TemperatureControl_SetPoint_i other) {
  return !t_TemperatureControl_SetPoint_i__eq(this, other);
};
void t_TemperatureControl_SetPoint_i_string_(STACK_FRAME String result, t_TemperatureControl_SetPoint_i this);
void t_TemperatureControl_SetPoint_i_cprint(t_TemperatureControl_SetPoint_i this, B isOut);

inline B t_TemperatureControl_SetPoint_i__is(STACK_FRAME void* this) {
  return ((t_TemperatureControl_SetPoint_i) this)->type == Tt_TemperatureControl_SetPoint_i;
}

inline t_TemperatureControl_SetPoint_i t_TemperatureControl_SetPoint_i__as(STACK_FRAME void *this) {
  if (t_TemperatureControl_SetPoint_i__is(CALLER this)) return (t_TemperatureControl_SetPoint_i) this;
  sfAbortImpl(CALLER "Invalid cast to t.TemperatureControl.SetPoint_i.");
  abort();
}

void t_TemperatureControl_SetPoint_i_apply(STACK_FRAME t_TemperatureControl_SetPoint_i this, t_TemperatureControl_Temperature_i low, t_TemperatureControl_Temperature_i high);

void t_TemperatureControl_SetPoint_i_example(STACK_FRAME t_TemperatureControl_SetPoint_i result);

#ifdef __cplusplus
}
#endif

#endif