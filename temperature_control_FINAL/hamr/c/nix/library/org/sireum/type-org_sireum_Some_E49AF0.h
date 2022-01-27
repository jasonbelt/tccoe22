#ifndef SIREUM_TYPE_H_org_sireum_Some_E49AF0
#define SIREUM_TYPE_H_org_sireum_Some_E49AF0

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[t.TemperatureControl.TempControl_i_Operational_Api]
#include <type-t_TemperatureControl_TempControl_i_Operational_Api.h>

typedef struct Some_E49AF0 *Some_E49AF0;
struct Some_E49AF0 {
  TYPE type;
  struct t_TemperatureControl_TempControl_i_Operational_Api value;
};

#define DeclNewSome_E49AF0(x) struct Some_E49AF0 x = { .type = TSome_E49AF0 }

#ifdef __cplusplus
}
#endif

#endif