#ifndef SIREUM_TYPE_H_org_sireum_Option_BCC9E8
#define SIREUM_TYPE_H_org_sireum_Option_BCC9E8

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[t.TemperatureControl.TempControl_i_Initialization_Api]

#include <type-org_sireum_Some_D50AE7.h>
#include <type-org_sireum_None_ACBA15.h>

typedef union Option_BCC9E8 *Option_BCC9E8;
union Option_BCC9E8 {
  TYPE type;
  struct Some_D50AE7 Some_D50AE7;
  struct None_ACBA15 None_ACBA15;
};

#define DeclNewOption_BCC9E8(x) union Option_BCC9E8 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif