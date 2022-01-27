#ifndef SIREUM_TYPE_H_org_sireum_Some_C959A2
#define SIREUM_TYPE_H_org_sireum_Some_C959A2

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[t.TemperatureControl.Fan_i_Initialization_Api]
#include <type-t_TemperatureControl_Fan_i_Initialization_Api.h>

typedef struct Some_C959A2 *Some_C959A2;
struct Some_C959A2 {
  TYPE type;
  struct t_TemperatureControl_Fan_i_Initialization_Api value;
};

#define DeclNewSome_C959A2(x) struct Some_C959A2 x = { .type = TSome_C959A2 }

#ifdef __cplusplus
}
#endif

#endif