#ifndef SIREUM_TYPE_H_t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge
#define SIREUM_TYPE_H_t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge
#include <type-art_DispatchPropertyProtocol.h>
#include <type-org_sireum_Option_9AF35E.h>
#include <type-art_art_Port_7B28AF.h>
#include <type-art_art_Port_9CBF18.h>
#include <type-art_Bridge_Ports.h>
#include <type-t_TemperatureControl_TempSensor_i_Initialization_Api.h>
#include <type-t_TemperatureControl_TempSensor_i_Operational_Api.h>
#include <type-art_Bridge_EntryPoints.h>

typedef struct t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge *t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge;
struct t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge {
  TYPE type;
  union art_DispatchPropertyProtocol dispatchProtocol;
  union Option_9AF35E dispatchTriggers;
  union art_Bridge_EntryPoints entryPoints;
  struct StaticString name;
  struct art_Port_7B28AF currentTemp;
  struct art_Port_9CBF18 tempChanged;
  struct art_Bridge_Ports ports;
  struct t_TemperatureControl_TempSensor_i_Initialization_Api initialization_api;
  struct t_TemperatureControl_TempSensor_i_Operational_Api operational_api;
  Z id;
};

#define DeclNewt_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge(x) struct t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge x = { .type = Tt_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge }

#ifdef __cplusplus
}
#endif

#endif