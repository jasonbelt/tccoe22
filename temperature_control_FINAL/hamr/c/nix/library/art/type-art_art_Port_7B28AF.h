#ifndef SIREUM_TYPE_H_art_art_Port_7B28AF
#define SIREUM_TYPE_H_art_art_Port_7B28AF

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.Port[t.TemperatureControl.Temperature_i]
#include <type-art_PortMode_Type.h>

typedef struct art_Port_7B28AF *art_Port_7B28AF;
struct art_Port_7B28AF {
  TYPE type;
  struct StaticString name;
  Z id;
  art_PortMode_Type mode;
};

#define DeclNewart_Port_7B28AF(x) struct art_Port_7B28AF x = { .type = Tart_Port_7B28AF }

#ifdef __cplusplus
}
#endif

#endif