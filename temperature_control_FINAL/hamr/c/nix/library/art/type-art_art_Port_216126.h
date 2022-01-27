#ifndef SIREUM_TYPE_H_art_art_Port_216126
#define SIREUM_TYPE_H_art_art_Port_216126

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.Port[t.TemperatureControl.SetPoint_i]
#include <type-art_PortMode_Type.h>

typedef struct art_Port_216126 *art_Port_216126;
struct art_Port_216126 {
  TYPE type;
  struct StaticString name;
  Z id;
  art_PortMode_Type mode;
};

#define DeclNewart_Port_216126(x) struct art_Port_216126 x = { .type = Tart_Port_216126 }

#ifdef __cplusplus
}
#endif

#endif