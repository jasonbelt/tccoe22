#ifndef SIREUM_TYPE_H_t_TemperatureControl_Fan_i_Operational_Api
#define SIREUM_TYPE_H_t_TemperatureControl_Fan_i_Operational_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// t.TemperatureControl.Fan_i_Operational_Api

typedef struct t_TemperatureControl_Fan_i_Operational_Api *t_TemperatureControl_Fan_i_Operational_Api;
struct t_TemperatureControl_Fan_i_Operational_Api {
  TYPE type;
  Z id;
  Z fanCmd_Id;
  Z fanAck_Id;
};

#define DeclNewt_TemperatureControl_Fan_i_Operational_Api(x) struct t_TemperatureControl_Fan_i_Operational_Api x = { .type = Tt_TemperatureControl_Fan_i_Operational_Api }

#ifdef __cplusplus
}
#endif

#endif