#ifndef SIREUM_H_art_art_Port_2ED9E6
#define SIREUM_H_art_art_Port_2ED9E6

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.Port[t.TemperatureControl.FanCmd.Type]

#define art_Port_2ED9E6_id_(this) ((this)->id)
#define art_Port_2ED9E6_name_(this) ((String) &(this)->name)
#define art_Port_2ED9E6_mode_(this) ((this)->mode)

B art_Port_2ED9E6__eq(art_Port_2ED9E6 this, art_Port_2ED9E6 other);
inline B art_Port_2ED9E6__ne(art_Port_2ED9E6 this, art_Port_2ED9E6 other) {
  return !art_Port_2ED9E6__eq(this, other);
};
void art_Port_2ED9E6_string_(STACK_FRAME String result, art_Port_2ED9E6 this);
void art_Port_2ED9E6_cprint(art_Port_2ED9E6 this, B isOut);

inline B art_Port_2ED9E6__is(STACK_FRAME void* this) {
  return ((art_Port_2ED9E6) this)->type == Tart_Port_2ED9E6;
}

inline art_Port_2ED9E6 art_Port_2ED9E6__as(STACK_FRAME void *this) {
  if (art_Port_2ED9E6__is(CALLER this)) return (art_Port_2ED9E6) this;
  sfAbortImpl(CALLER "Invalid cast to art.Port[t.TemperatureControl.FanCmd.Type].");
  abort();
}

void art_Port_2ED9E6_apply(STACK_FRAME art_Port_2ED9E6 this, Z id, String name, art_PortMode_Type mode);

#ifdef __cplusplus
}
#endif

#endif