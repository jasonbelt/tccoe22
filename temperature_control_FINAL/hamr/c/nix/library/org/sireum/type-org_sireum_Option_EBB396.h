#ifndef SIREUM_TYPE_H_org_sireum_Option_EBB396
#define SIREUM_TYPE_H_org_sireum_Option_EBB396

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[t.TemperatureControl.SetPoint_i]

#include <type-org_sireum_Some_D8D240.h>
#include <type-org_sireum_None_B473AE.h>

typedef union Option_EBB396 *Option_EBB396;
union Option_EBB396 {
  TYPE type;
  struct Some_D8D240 Some_D8D240;
  struct None_B473AE None_B473AE;
};

#define DeclNewOption_EBB396(x) union Option_EBB396 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif