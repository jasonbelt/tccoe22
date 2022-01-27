#ifndef SIREUM_TYPE_H_org_sireum_Some_07AD88
#define SIREUM_TYPE_H_org_sireum_Some_07AD88

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[t.TemperatureControl.FanAck.Type]
#include <type-t_TemperatureControl_FanAck_Type.h>

typedef struct Some_07AD88 *Some_07AD88;
struct Some_07AD88 {
  TYPE type;
  t_TemperatureControl_FanAck_Type value;
};

#define DeclNewSome_07AD88(x) struct Some_07AD88 x = { .type = TSome_07AD88 }

#ifdef __cplusplus
}
#endif

#endif