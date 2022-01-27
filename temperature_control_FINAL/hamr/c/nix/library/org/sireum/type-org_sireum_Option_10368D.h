#ifndef SIREUM_TYPE_H_org_sireum_Option_10368D
#define SIREUM_TYPE_H_org_sireum_Option_10368D

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[t.TemperatureControl.TempSensor_i_Operational_Api]

#include <type-org_sireum_Some_82706F.h>
#include <type-org_sireum_None_AC21B6.h>

typedef union Option_10368D *Option_10368D;
union Option_10368D {
  TYPE type;
  struct Some_82706F Some_82706F;
  struct None_AC21B6 None_AC21B6;
};

#define DeclNewOption_10368D(x) union Option_10368D x = { 0 }

#ifdef __cplusplus
}
#endif

#endif