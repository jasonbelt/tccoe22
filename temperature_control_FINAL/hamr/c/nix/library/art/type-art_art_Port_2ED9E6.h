#ifndef SIREUM_TYPE_H_art_art_Port_2ED9E6
#define SIREUM_TYPE_H_art_art_Port_2ED9E6

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.Port[t.TemperatureControl.FanCmd.Type]
#include <type-art_PortMode_Type.h>

typedef struct art_Port_2ED9E6 *art_Port_2ED9E6;
struct art_Port_2ED9E6 {
  TYPE type;
  struct StaticString name;
  Z id;
  art_PortMode_Type mode;
};

#define DeclNewart_Port_2ED9E6(x) struct art_Port_2ED9E6 x = { .type = Tart_Port_2ED9E6 }

#ifdef __cplusplus
}
#endif

#endif