#ifndef SIREUM_TYPE_H_t_TemperatureControl_FanCmd_Payload
#define SIREUM_TYPE_H_t_TemperatureControl_FanCmd_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// t.TemperatureControl.FanCmd_Payload
#include <type-t_TemperatureControl_FanCmd_Type.h>

typedef struct t_TemperatureControl_FanCmd_Payload *t_TemperatureControl_FanCmd_Payload;
struct t_TemperatureControl_FanCmd_Payload {
  TYPE type;
  t_TemperatureControl_FanCmd_Type value;
};

#define DeclNewt_TemperatureControl_FanCmd_Payload(x) struct t_TemperatureControl_FanCmd_Payload x = { .type = Tt_TemperatureControl_FanCmd_Payload }

#ifdef __cplusplus
}
#endif

#endif