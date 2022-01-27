#ifndef SIREUM_TYPE_H_org_sireum_Some_A89224
#define SIREUM_TYPE_H_org_sireum_Some_A89224

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[t.TemperatureControl.Fan_i_Operational_Api]
#include <type-t_TemperatureControl_Fan_i_Operational_Api.h>

typedef struct Some_A89224 *Some_A89224;
struct Some_A89224 {
  TYPE type;
  struct t_TemperatureControl_Fan_i_Operational_Api value;
};

#define DeclNewSome_A89224(x) struct Some_A89224 x = { .type = TSome_A89224 }

#ifdef __cplusplus
}
#endif

#endif