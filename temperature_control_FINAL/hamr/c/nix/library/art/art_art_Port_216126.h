#ifndef SIREUM_H_art_art_Port_216126
#define SIREUM_H_art_art_Port_216126

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.Port[t.TemperatureControl.SetPoint_i]

#define art_Port_216126_id_(this) ((this)->id)
#define art_Port_216126_name_(this) ((String) &(this)->name)
#define art_Port_216126_mode_(this) ((this)->mode)

B art_Port_216126__eq(art_Port_216126 this, art_Port_216126 other);
inline B art_Port_216126__ne(art_Port_216126 this, art_Port_216126 other) {
  return !art_Port_216126__eq(this, other);
};
void art_Port_216126_string_(STACK_FRAME String result, art_Port_216126 this);
void art_Port_216126_cprint(art_Port_216126 this, B isOut);

inline B art_Port_216126__is(STACK_FRAME void* this) {
  return ((art_Port_216126) this)->type == Tart_Port_216126;
}

inline art_Port_216126 art_Port_216126__as(STACK_FRAME void *this) {
  if (art_Port_216126__is(CALLER this)) return (art_Port_216126) this;
  sfAbortImpl(CALLER "Invalid cast to art.Port[t.TemperatureControl.SetPoint_i].");
  abort();
}

void art_Port_216126_apply(STACK_FRAME art_Port_216126 this, Z id, String name, art_PortMode_Type mode);

#ifdef __cplusplus
}
#endif

#endif