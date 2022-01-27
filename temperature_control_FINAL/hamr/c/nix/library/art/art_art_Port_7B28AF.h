#ifndef SIREUM_H_art_art_Port_7B28AF
#define SIREUM_H_art_art_Port_7B28AF

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.Port[t.TemperatureControl.Temperature_i]

#define art_Port_7B28AF_id_(this) ((this)->id)
#define art_Port_7B28AF_name_(this) ((String) &(this)->name)
#define art_Port_7B28AF_mode_(this) ((this)->mode)

B art_Port_7B28AF__eq(art_Port_7B28AF this, art_Port_7B28AF other);
inline B art_Port_7B28AF__ne(art_Port_7B28AF this, art_Port_7B28AF other) {
  return !art_Port_7B28AF__eq(this, other);
};
void art_Port_7B28AF_string_(STACK_FRAME String result, art_Port_7B28AF this);
void art_Port_7B28AF_cprint(art_Port_7B28AF this, B isOut);

inline B art_Port_7B28AF__is(STACK_FRAME void* this) {
  return ((art_Port_7B28AF) this)->type == Tart_Port_7B28AF;
}

inline art_Port_7B28AF art_Port_7B28AF__as(STACK_FRAME void *this) {
  if (art_Port_7B28AF__is(CALLER this)) return (art_Port_7B28AF) this;
  sfAbortImpl(CALLER "Invalid cast to art.Port[t.TemperatureControl.Temperature_i].");
  abort();
}

void art_Port_7B28AF_apply(STACK_FRAME art_Port_7B28AF this, Z id, String name, art_PortMode_Type mode);

#ifdef __cplusplus
}
#endif

#endif