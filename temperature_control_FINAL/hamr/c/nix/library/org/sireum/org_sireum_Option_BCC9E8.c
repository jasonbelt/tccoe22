#include <all.h>

// Option[t.TemperatureControl.TempControl_i_Initialization_Api]

B Option_BCC9E8__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_D50AE7: return T;
    case TNone_ACBA15: return T;
    default: return F;
  }
}

Option_BCC9E8 Option_BCC9E8__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_D50AE7: break;
    case TNone_ACBA15: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[t.TemperatureControl.TempControl_i_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_BCC9E8) this;
}

void Option_BCC9E8_string_(STACK_FRAME String result, Option_BCC9E8 this);

void Option_BCC9E8_get_(STACK_FRAME t_TemperatureControl_TempControl_i_Initialization_Api result, Option_BCC9E8 this) {
  switch (this->type) {
    case TSome_D50AE7: Some_D50AE7_get_(CALLER (t_TemperatureControl_TempControl_i_Initialization_Api) result, (Some_D50AE7) this); return;
    case TNone_ACBA15: None_ACBA15_get_(CALLER (t_TemperatureControl_TempControl_i_Initialization_Api) result, (None_ACBA15) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}