#ifndef SIREUM_TYPE_H_org_sireum_Some_486E43
#define SIREUM_TYPE_H_org_sireum_Some_486E43

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[t.TemperatureControl.TempUnit.Type]
#include <type-t_TemperatureControl_TempUnit_Type.h>

typedef struct Some_486E43 *Some_486E43;
struct Some_486E43 {
  TYPE type;
  t_TemperatureControl_TempUnit_Type value;
};

#define DeclNewSome_486E43(x) struct Some_486E43 x = { .type = TSome_486E43 }

#ifdef __cplusplus
}
#endif

#endif