#ifndef SIREUM_TYPE_H_t_TemperatureControl_Temperature_i
#define SIREUM_TYPE_H_t_TemperatureControl_Temperature_i

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// t.TemperatureControl.Temperature_i
#include <type-t_TemperatureControl_TempUnit_Type.h>

typedef struct t_TemperatureControl_Temperature_i *t_TemperatureControl_Temperature_i;
struct t_TemperatureControl_Temperature_i {
  TYPE type;
  F32 degrees;
  t_TemperatureControl_TempUnit_Type unit;
};

#define DeclNewt_TemperatureControl_Temperature_i(x) struct t_TemperatureControl_Temperature_i x = { .type = Tt_TemperatureControl_Temperature_i }

#ifdef __cplusplus
}
#endif

#endif