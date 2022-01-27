#ifndef SIREUM_TYPE_H_org_sireum_Some_23FE19
#define SIREUM_TYPE_H_org_sireum_Some_23FE19

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[t.TemperatureControl.TempSensor_i_Initialization_Api]
#include <type-t_TemperatureControl_TempSensor_i_Initialization_Api.h>

typedef struct Some_23FE19 *Some_23FE19;
struct Some_23FE19 {
  TYPE type;
  struct t_TemperatureControl_TempSensor_i_Initialization_Api value;
};

#define DeclNewSome_23FE19(x) struct Some_23FE19 x = { .type = TSome_23FE19 }

#ifdef __cplusplus
}
#endif

#endif