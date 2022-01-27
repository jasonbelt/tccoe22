#ifndef SIREUM_TYPE_H_t_TemperatureControl_TempUnit_Payload
#define SIREUM_TYPE_H_t_TemperatureControl_TempUnit_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// t.TemperatureControl.TempUnit_Payload
#include <type-t_TemperatureControl_TempUnit_Type.h>

typedef struct t_TemperatureControl_TempUnit_Payload *t_TemperatureControl_TempUnit_Payload;
struct t_TemperatureControl_TempUnit_Payload {
  TYPE type;
  t_TemperatureControl_TempUnit_Type value;
};

#define DeclNewt_TemperatureControl_TempUnit_Payload(x) struct t_TemperatureControl_TempUnit_Payload x = { .type = Tt_TemperatureControl_TempUnit_Payload }

#ifdef __cplusplus
}
#endif

#endif