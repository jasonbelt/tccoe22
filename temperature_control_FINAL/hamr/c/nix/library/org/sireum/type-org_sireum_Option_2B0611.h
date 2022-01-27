#ifndef SIREUM_TYPE_H_org_sireum_Option_2B0611
#define SIREUM_TYPE_H_org_sireum_Option_2B0611

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[t.TemperatureControl.FanCmd.Type]

#include <type-org_sireum_Some_779716.h>
#include <type-org_sireum_None_380ACD.h>

typedef union Option_2B0611 *Option_2B0611;
union Option_2B0611 {
  TYPE type;
  struct Some_779716 Some_779716;
  struct None_380ACD None_380ACD;
};

#define DeclNewOption_2B0611(x) union Option_2B0611 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif