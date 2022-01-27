#include <all.h>

// Option[t.TemperatureControl.Fan_i_Operational_Api]

B Option_A8F8FC__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_A89224: return T;
    case TNone_475EF0: return T;
    default: return F;
  }
}

Option_A8F8FC Option_A8F8FC__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_A89224: break;
    case TNone_475EF0: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[t.TemperatureControl.Fan_i_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_A8F8FC) this;
}

void Option_A8F8FC_string_(STACK_FRAME String result, Option_A8F8FC this);

void Option_A8F8FC_get_(STACK_FRAME t_TemperatureControl_Fan_i_Operational_Api result, Option_A8F8FC this) {
  switch (this->type) {
    case TSome_A89224: Some_A89224_get_(CALLER (t_TemperatureControl_Fan_i_Operational_Api) result, (Some_A89224) this); return;
    case TNone_475EF0: None_475EF0_get_(CALLER (t_TemperatureControl_Fan_i_Operational_Api) result, (None_475EF0) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}