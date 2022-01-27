#ifndef SIREUM_TYPE_H_org_sireum_Some_82706F
#define SIREUM_TYPE_H_org_sireum_Some_82706F

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[t.TemperatureControl.TempSensor_i_Operational_Api]
#include <type-t_TemperatureControl_TempSensor_i_Operational_Api.h>

typedef struct Some_82706F *Some_82706F;
struct Some_82706F {
  TYPE type;
  struct t_TemperatureControl_TempSensor_i_Operational_Api value;
};

#define DeclNewSome_82706F(x) struct Some_82706F x = { .type = TSome_82706F }

#ifdef __cplusplus
}
#endif

#endif