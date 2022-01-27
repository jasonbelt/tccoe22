#ifndef SIREUM_TYPE_H_org_sireum_Option_C5A124
#define SIREUM_TYPE_H_org_sireum_Option_C5A124

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[t.TemperatureControl.FanAck.Type]

#include <type-org_sireum_Some_07AD88.h>
#include <type-org_sireum_None_831682.h>

typedef union Option_C5A124 *Option_C5A124;
union Option_C5A124 {
  TYPE type;
  struct Some_07AD88 Some_07AD88;
  struct None_831682 None_831682;
};

#define DeclNewOption_C5A124(x) union Option_C5A124 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif