#ifndef SIREUM_TYPE_H_t_TemperatureControl_TempSensor_i_Initialization_Api
#define SIREUM_TYPE_H_t_TemperatureControl_TempSensor_i_Initialization_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// t.TemperatureControl.TempSensor_i_Initialization_Api

typedef struct t_TemperatureControl_TempSensor_i_Initialization_Api *t_TemperatureControl_TempSensor_i_Initialization_Api;
struct t_TemperatureControl_TempSensor_i_Initialization_Api {
  TYPE type;
  Z id;
  Z currentTemp_Id;
  Z tempChanged_Id;
};

#define DeclNewt_TemperatureControl_TempSensor_i_Initialization_Api(x) struct t_TemperatureControl_TempSensor_i_Initialization_Api x = { .type = Tt_TemperatureControl_TempSensor_i_Initialization_Api }

#ifdef __cplusplus
}
#endif

#endif