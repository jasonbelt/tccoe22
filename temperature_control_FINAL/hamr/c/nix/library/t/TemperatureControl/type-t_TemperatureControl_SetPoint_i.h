#ifndef SIREUM_TYPE_H_t_TemperatureControl_SetPoint_i
#define SIREUM_TYPE_H_t_TemperatureControl_SetPoint_i

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// t.TemperatureControl.SetPoint_i
#include <type-t_TemperatureControl_Temperature_i.h>
#include <type-t_TemperatureControl_Temperature_i.h>

typedef struct t_TemperatureControl_SetPoint_i *t_TemperatureControl_SetPoint_i;
struct t_TemperatureControl_SetPoint_i {
  TYPE type;
  struct t_TemperatureControl_Temperature_i low;
  struct t_TemperatureControl_Temperature_i high;
};

#define DeclNewt_TemperatureControl_SetPoint_i(x) struct t_TemperatureControl_SetPoint_i x = { .type = Tt_TemperatureControl_SetPoint_i }

#ifdef __cplusplus
}
#endif

#endif