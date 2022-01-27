#ifndef SIREUM_TYPE_H_art_art_Port_0A16CC
#define SIREUM_TYPE_H_art_art_Port_0A16CC

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.Port[t.TemperatureControl.FanAck.Type]
#include <type-art_PortMode_Type.h>

typedef struct art_Port_0A16CC *art_Port_0A16CC;
struct art_Port_0A16CC {
  TYPE type;
  struct StaticString name;
  Z id;
  art_PortMode_Type mode;
};

#define DeclNewart_Port_0A16CC(x) struct art_Port_0A16CC x = { .type = Tart_Port_0A16CC }

#ifdef __cplusplus
}
#endif

#endif