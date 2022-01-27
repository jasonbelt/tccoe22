#ifndef SIREUM_TYPE_H_org_sireum_Some_779716
#define SIREUM_TYPE_H_org_sireum_Some_779716

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[t.TemperatureControl.FanCmd.Type]
#include <type-t_TemperatureControl_FanCmd_Type.h>

typedef struct Some_779716 *Some_779716;
struct Some_779716 {
  TYPE type;
  t_TemperatureControl_FanCmd_Type value;
};

#define DeclNewSome_779716(x) struct Some_779716 x = { .type = TSome_779716 }

#ifdef __cplusplus
}
#endif

#endif