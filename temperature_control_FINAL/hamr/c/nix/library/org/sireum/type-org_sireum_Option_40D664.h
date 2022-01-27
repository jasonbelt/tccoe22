#ifndef SIREUM_TYPE_H_org_sireum_Option_40D664
#define SIREUM_TYPE_H_org_sireum_Option_40D664

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[t.TemperatureControl.TempUnit.Type]

#include <type-org_sireum_Some_486E43.h>
#include <type-org_sireum_None_3FD7F9.h>

typedef union Option_40D664 *Option_40D664;
union Option_40D664 {
  TYPE type;
  struct Some_486E43 Some_486E43;
  struct None_3FD7F9 None_3FD7F9;
};

#define DeclNewOption_40D664(x) union Option_40D664 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif