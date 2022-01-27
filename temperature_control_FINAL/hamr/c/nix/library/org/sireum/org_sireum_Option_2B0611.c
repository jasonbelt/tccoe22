#include <all.h>

// Option[t.TemperatureControl.FanCmd.Type]

B Option_2B0611__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_779716: return T;
    case TNone_380ACD: return T;
    default: return F;
  }
}

Option_2B0611 Option_2B0611__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_779716: break;
    case TNone_380ACD: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[t.TemperatureControl.FanCmd.Type].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_2B0611) this;
}

void Option_2B0611_string_(STACK_FRAME String result, Option_2B0611 this);

t_TemperatureControl_FanCmd_Type Option_2B0611_get_(STACK_FRAME Option_2B0611 this) {
  switch (this->type) {
    case TSome_779716: return Some_779716_get_(CALLER (Some_779716) this);
    case TNone_380ACD: return None_380ACD_get_(CALLER (None_380ACD) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}