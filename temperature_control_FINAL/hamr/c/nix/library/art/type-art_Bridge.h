#ifndef SIREUM_TYPE_H_art_Bridge
#define SIREUM_TYPE_H_art_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.Bridge

#include <type-t_TemperatureControl_Fan_i_fp_fan_Bridge.h>
#include <type-t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge.h>
#include <type-t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge.h>

typedef union art_Bridge *art_Bridge;
union art_Bridge {
  TYPE type;
  struct t_TemperatureControl_Fan_i_fp_fan_Bridge t_TemperatureControl_Fan_i_fp_fan_Bridge;
  struct t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge;
  struct t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge;
};

#define DeclNewart_Bridge(x) union art_Bridge x = { 0 }

#ifdef __cplusplus
}
#endif

#endif