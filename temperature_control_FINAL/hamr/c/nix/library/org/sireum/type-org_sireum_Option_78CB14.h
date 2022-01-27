#ifndef SIREUM_TYPE_H_org_sireum_Option_78CB14
#define SIREUM_TYPE_H_org_sireum_Option_78CB14

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[t.TemperatureControl.Temperature_i]

#include <type-org_sireum_Some_14C467.h>
#include <type-org_sireum_None_4CBE13.h>

typedef union Option_78CB14 *Option_78CB14;
union Option_78CB14 {
  TYPE type;
  struct Some_14C467 Some_14C467;
  struct None_4CBE13 None_4CBE13;
};

#define DeclNewOption_78CB14(x) union Option_78CB14 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif