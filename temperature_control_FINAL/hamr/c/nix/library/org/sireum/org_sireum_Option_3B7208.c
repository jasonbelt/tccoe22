#include <all.h>

// Option[t.TemperatureControl.TempControl_i_Operational_Api]

B Option_3B7208__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_E49AF0: return T;
    case TNone_A41F76: return T;
    default: return F;
  }
}

Option_3B7208 Option_3B7208__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_E49AF0: break;
    case TNone_A41F76: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[t.TemperatureControl.TempControl_i_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_3B7208) this;
}

void Option_3B7208_string_(STACK_FRAME String result, Option_3B7208 this);

void Option_3B7208_get_(STACK_FRAME t_TemperatureControl_TempControl_i_Operational_Api result, Option_3B7208 this) {
  switch (this->type) {
    case TSome_E49AF0: Some_E49AF0_get_(CALLER (t_TemperatureControl_TempControl_i_Operational_Api) result, (Some_E49AF0) this); return;
    case TNone_A41F76: None_A41F76_get_(CALLER (t_TemperatureControl_TempControl_i_Operational_Api) result, (None_A41F76) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}