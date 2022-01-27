#ifndef SIREUM_TYPE_H_t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints
#define SIREUM_TYPE_H_t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge.EntryPoints
#include <type-org_sireum_Option_9AF35E.h>
#include <type-t_TemperatureControl_TempSensor_i_Initialization_Api.h>
#include <type-t_TemperatureControl_TempSensor_i_Operational_Api.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>

typedef struct t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints *t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints;
struct t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints {
  TYPE type;
  union Option_9AF35E dispatchTriggers;
  struct t_TemperatureControl_TempSensor_i_Initialization_Api initialization_api;
  struct t_TemperatureControl_TempSensor_i_Operational_Api operational_api;
  struct IS_82ABD8 dataInPortIds;
  struct IS_82ABD8 eventInPortIds;
  struct IS_82ABD8 dataOutPortIds;
  struct IS_82ABD8 eventOutPortIds;
  Z TempSensor_i_tsp_tempSensor_BridgeId;
  Z currentTemp_Id;
  Z tempChanged_Id;
};

#define DeclNewt_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints(x) struct t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints x = { .type = Tt_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints }

#ifdef __cplusplus
}
#endif

#endif