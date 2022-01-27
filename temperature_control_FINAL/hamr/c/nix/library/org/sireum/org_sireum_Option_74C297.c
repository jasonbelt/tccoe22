#include <all.h>

// Option[t.TemperatureControl.Fan_i_Initialization_Api]

B Option_74C297__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_C959A2: return T;
    case TNone_856E6F: return T;
    default: return F;
  }
}

Option_74C297 Option_74C297__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_C959A2: break;
    case TNone_856E6F: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[t.TemperatureControl.Fan_i_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_74C297) this;
}

void Option_74C297_string_(STACK_FRAME String result, Option_74C297 this);

void Option_74C297_get_(STACK_FRAME t_TemperatureControl_Fan_i_Initialization_Api result, Option_74C297 this) {
  switch (this->type) {
    case TSome_C959A2: Some_C959A2_get_(CALLER (t_TemperatureControl_Fan_i_Initialization_Api) result, (Some_C959A2) this); return;
    case TNone_856E6F: None_856E6F_get_(CALLER (t_TemperatureControl_Fan_i_Initialization_Api) result, (None_856E6F) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}