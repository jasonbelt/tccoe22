#ifndef SIREUM_TYPE_H_art_Bridge_EntryPoints
#define SIREUM_TYPE_H_art_Bridge_EntryPoints

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.Bridge.EntryPoints

#include <type-t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints.h>
#include <type-t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints.h>
#include <type-t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints.h>

typedef union art_Bridge_EntryPoints *art_Bridge_EntryPoints;
union art_Bridge_EntryPoints {
  TYPE type;
  struct t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints;
  struct t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints;
  struct t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints;
};

#define DeclNewart_Bridge_EntryPoints(x) union art_Bridge_EntryPoints x = { 0 }

#ifdef __cplusplus
}
#endif

#endif