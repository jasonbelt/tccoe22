#ifndef SIREUM_TYPE_H_org_sireum_Some_D8D240
#define SIREUM_TYPE_H_org_sireum_Some_D8D240

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[t.TemperatureControl.SetPoint_i]
#include <type-t_TemperatureControl_SetPoint_i.h>

typedef struct Some_D8D240 *Some_D8D240;
struct Some_D8D240 {
  TYPE type;
  struct t_TemperatureControl_SetPoint_i value;
};

#define DeclNewSome_D8D240(x) struct Some_D8D240 x = { .type = TSome_D8D240 }

#ifdef __cplusplus
}
#endif

#endif