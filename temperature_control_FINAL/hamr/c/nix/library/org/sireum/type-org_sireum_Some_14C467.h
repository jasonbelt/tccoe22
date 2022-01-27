#ifndef SIREUM_TYPE_H_org_sireum_Some_14C467
#define SIREUM_TYPE_H_org_sireum_Some_14C467

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[t.TemperatureControl.Temperature_i]
#include <type-t_TemperatureControl_Temperature_i.h>

typedef struct Some_14C467 *Some_14C467;
struct Some_14C467 {
  TYPE type;
  struct t_TemperatureControl_Temperature_i value;
};

#define DeclNewSome_14C467(x) struct Some_14C467 x = { .type = TSome_14C467 }

#ifdef __cplusplus
}
#endif

#endif