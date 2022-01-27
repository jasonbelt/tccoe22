#ifndef SIREUM_TYPE_H_t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints
#define SIREUM_TYPE_H_t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// t.TemperatureControl.Fan_i_fp_fan_Bridge.EntryPoints
#include <type-org_sireum_Option_9AF35E.h>
#include <type-t_TemperatureControl_Fan_i_Initialization_Api.h>
#include <type-t_TemperatureControl_Fan_i_Operational_Api.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>

typedef struct t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints *t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints;
struct t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints {
  TYPE type;
  union Option_9AF35E dispatchTriggers;
  struct t_TemperatureControl_Fan_i_Initialization_Api initialization_api;
  struct t_TemperatureControl_Fan_i_Operational_Api operational_api;
  struct IS_82ABD8 dataInPortIds;
  struct IS_82ABD8 eventInPortIds;
  struct IS_82ABD8 dataOutPortIds;
  struct IS_82ABD8 eventOutPortIds;
  Z Fan_i_fp_fan_BridgeId;
  Z fanCmd_Id;
  Z fanAck_Id;
};

#define DeclNewt_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints(x) struct t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints x = { .type = Tt_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints }

#ifdef __cplusplus
}
#endif

#endif