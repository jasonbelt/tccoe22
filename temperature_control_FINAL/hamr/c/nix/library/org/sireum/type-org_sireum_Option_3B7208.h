#ifndef SIREUM_TYPE_H_org_sireum_Option_3B7208
#define SIREUM_TYPE_H_org_sireum_Option_3B7208

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[t.TemperatureControl.TempControl_i_Operational_Api]

#include <type-org_sireum_Some_E49AF0.h>
#include <type-org_sireum_None_A41F76.h>

typedef union Option_3B7208 *Option_3B7208;
union Option_3B7208 {
  TYPE type;
  struct Some_E49AF0 Some_E49AF0;
  struct None_A41F76 None_A41F76;
};

#define DeclNewOption_3B7208(x) union Option_3B7208 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif