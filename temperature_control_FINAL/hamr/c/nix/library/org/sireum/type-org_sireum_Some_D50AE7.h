#ifndef SIREUM_TYPE_H_org_sireum_Some_D50AE7
#define SIREUM_TYPE_H_org_sireum_Some_D50AE7

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[t.TemperatureControl.TempControl_i_Initialization_Api]
#include <type-t_TemperatureControl_TempControl_i_Initialization_Api.h>

typedef struct Some_D50AE7 *Some_D50AE7;
struct Some_D50AE7 {
  TYPE type;
  struct t_TemperatureControl_TempControl_i_Initialization_Api value;
};

#define DeclNewSome_D50AE7(x) struct Some_D50AE7 x = { .type = TSome_D50AE7 }

#ifdef __cplusplus
}
#endif

#endif