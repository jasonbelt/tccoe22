#ifndef SIREUM_TYPE_H_t_TemperatureControl_FanAck_Payload
#define SIREUM_TYPE_H_t_TemperatureControl_FanAck_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// t.TemperatureControl.FanAck_Payload
#include <type-t_TemperatureControl_FanAck_Type.h>

typedef struct t_TemperatureControl_FanAck_Payload *t_TemperatureControl_FanAck_Payload;
struct t_TemperatureControl_FanAck_Payload {
  TYPE type;
  t_TemperatureControl_FanAck_Type value;
};

#define DeclNewt_TemperatureControl_FanAck_Payload(x) struct t_TemperatureControl_FanAck_Payload x = { .type = Tt_TemperatureControl_FanAck_Payload }

#ifdef __cplusplus
}
#endif

#endif