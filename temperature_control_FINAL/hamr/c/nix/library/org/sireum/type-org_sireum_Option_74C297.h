#ifndef SIREUM_TYPE_H_org_sireum_Option_74C297
#define SIREUM_TYPE_H_org_sireum_Option_74C297

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[t.TemperatureControl.Fan_i_Initialization_Api]

#include <type-org_sireum_Some_C959A2.h>
#include <type-org_sireum_None_856E6F.h>

typedef union Option_74C297 *Option_74C297;
union Option_74C297 {
  TYPE type;
  struct Some_C959A2 Some_C959A2;
  struct None_856E6F None_856E6F;
};

#define DeclNewOption_74C297(x) union Option_74C297 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif