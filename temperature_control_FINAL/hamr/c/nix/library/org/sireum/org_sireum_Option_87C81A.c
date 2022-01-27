#include <all.h>

// Option[t.TemperatureControl.TempSensor_i_Initialization_Api]

B Option_87C81A__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_23FE19: return T;
    case TNone_68DB3B: return T;
    default: return F;
  }
}

Option_87C81A Option_87C81A__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_23FE19: break;
    case TNone_68DB3B: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[t.TemperatureControl.TempSensor_i_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_87C81A) this;
}

void Option_87C81A_string_(STACK_FRAME String result, Option_87C81A this);

void Option_87C81A_get_(STACK_FRAME t_TemperatureControl_TempSensor_i_Initialization_Api result, Option_87C81A this) {
  switch (this->type) {
    case TSome_23FE19: Some_23FE19_get_(CALLER (t_TemperatureControl_TempSensor_i_Initialization_Api) result, (Some_23FE19) this); return;
    case TNone_68DB3B: None_68DB3B_get_(CALLER (t_TemperatureControl_TempSensor_i_Initialization_Api) result, (None_68DB3B) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}