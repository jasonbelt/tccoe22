#ifndef SIREUM_TYPE_H_org_sireum_Option_87C81A
#define SIREUM_TYPE_H_org_sireum_Option_87C81A

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[t.TemperatureControl.TempSensor_i_Initialization_Api]

#include <type-org_sireum_Some_23FE19.h>
#include <type-org_sireum_None_68DB3B.h>

typedef union Option_87C81A *Option_87C81A;
union Option_87C81A {
  TYPE type;
  struct Some_23FE19 Some_23FE19;
  struct None_68DB3B None_68DB3B;
};

#define DeclNewOption_87C81A(x) union Option_87C81A x = { 0 }

#ifdef __cplusplus
}
#endif

#endif