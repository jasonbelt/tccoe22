#ifndef SIREUM_H_t_TemperatureControl_Temperature_i
#define SIREUM_H_t_TemperatureControl_Temperature_i

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// t.TemperatureControl.Temperature_i

#define t_TemperatureControl_Temperature_i_degrees_(this) ((this)->degrees)
#define t_TemperatureControl_Temperature_i_unit_(this) ((this)->unit)

B t_TemperatureControl_Temperature_i__eq(t_TemperatureControl_Temperature_i this, t_TemperatureControl_Temperature_i other);
inline B t_TemperatureControl_Temperature_i__ne(t_TemperatureControl_Temperature_i this, t_TemperatureControl_Temperature_i other) {
  return !t_TemperatureControl_Temperature_i__eq(this, other);
};
void t_TemperatureControl_Temperature_i_string_(STACK_FRAME String result, t_TemperatureControl_Temperature_i this);
void t_TemperatureControl_Temperature_i_cprint(t_TemperatureControl_Temperature_i this, B isOut);

inline B t_TemperatureControl_Temperature_i__is(STACK_FRAME void* this) {
  return ((t_TemperatureControl_Temperature_i) this)->type == Tt_TemperatureControl_Temperature_i;
}

inline t_TemperatureControl_Temperature_i t_TemperatureControl_Temperature_i__as(STACK_FRAME void *this) {
  if (t_TemperatureControl_Temperature_i__is(CALLER this)) return (t_TemperatureControl_Temperature_i) this;
  sfAbortImpl(CALLER "Invalid cast to t.TemperatureControl.Temperature_i.");
  abort();
}

void t_TemperatureControl_Temperature_i_apply(STACK_FRAME t_TemperatureControl_Temperature_i this, F32 degrees, t_TemperatureControl_TempUnit_Type unit);

void t_TemperatureControl_Temperature_i_example(STACK_FRAME t_TemperatureControl_Temperature_i result);

#ifdef __cplusplus
}
#endif

#endif