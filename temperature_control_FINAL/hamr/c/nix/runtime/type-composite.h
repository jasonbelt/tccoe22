#ifndef SIREUM_GEN_TYPE_H
#define SIREUM_GEN_TYPE_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stackframe.h>

typedef enum {
  TTuple2_A29DBA = (int) 0xA29DBA1D, // (Z, (Z, art.ArtSlangMessage))
  TTuple2_EC3B57 = (int) 0xEC3B577E, // (Z, Z)
  TTuple2_4DFC06 = (int) 0x4DFC0619, // (Z, art.ArtSlangMessage)
  TTuple2_66F7BA = (int) 0x66F7BA99, // (art.UPort, art.UPort)
  TIS_4D6DA5 = (int) 0x4D6DA568, // IS[Z, (Z, art.ArtSlangMessage)]
  TIS_948B60 = (int) 0x948B6070, // IS[Z, String]
  TIS_82ABD8 = (int) 0x82ABD805, // IS[Z, Z]
  TIS_7E8796 = (int) 0x7E87969E, // IS[Z, art.Bridge]
  TIS_08117A = (int) 0x08117AAE, // IS[Z, art.UConnection]
  TIS_820232 = (int) 0x82023297, // IS[Z, art.UPort]
  TIS_5AA467 = (int) 0x5AA467BD, // IS[Z, art.scheduling.static.Schedule.Slot]
  TMBox2_1029D1 = (int) 0x1029D116, // MBox2[Z, Option[art.DataContent]]
  TMBox2_1CBFC4 = (int) 0x1CBFC457, // MBox2[Z, art.DataContent]
  TMS_E444B2 = (int) 0xE444B286, // MS[Z, IS[Z, Z]]
  TMS_83D5EB = (int) 0x83D5EBFF, // MS[Z, Option[art.Bridge]]
  TMS_F55A18 = (int) 0xF55A1861, // MS[Z, Option[art.UPort]]
  TMS_1E4216 = (int) 0x1E42166F, // MS[Z, S64]
  TMS_D1ED39 = (int) 0xD1ED39B9, // MS[Z, art.UPort]
  TMap_9C6840 = (int) 0x9C684003, // Map[Z, art.ArtSlangMessage]
  TNone_5C1355 = (int) 0x5C135592, // None[IS[Z, Z]]
  TNone_C92EDC = (int) 0xC92EDC23, // None[IS[Z, art.Bridge]]
  TNone_C2CCA4 = (int) 0xC2CCA408, // None[String]
  TNone_76463B = (int) 0x76463B20, // None[Z]
  TNone_50AF88 = (int) 0x50AF8810, // None[art.ArtSlangMessage]
  TNone_734370 = (int) 0x73437068, // None[art.Bridge]
  TNone_964667 = (int) 0x9646678F, // None[art.DataContent]
  TNone_ED72E1 = (int) 0xED72E191, // None[art.Empty]
  TNone_39BC5F = (int) 0x39BC5F5F, // None[art.UPort]
  TNone_FD0D39 = (int) 0xFD0D394C, // None[art.scheduling.static.Schedule.DScheduleSpec]
  TNone_72E81E = (int) 0x72E81E3B, // None[t.Cli.RunChoice.Type]
  TNone_892E2E = (int) 0x892E2ECB, // None[t.Cli.RunTopOption]
  TNone_831682 = (int) 0x83168279, // None[t.TemperatureControl.FanAck.Type]
  TNone_380ACD = (int) 0x380ACD85, // None[t.TemperatureControl.FanCmd.Type]
  TNone_856E6F = (int) 0x856E6F96, // None[t.TemperatureControl.Fan_i_Initialization_Api]
  TNone_475EF0 = (int) 0x475EF06C, // None[t.TemperatureControl.Fan_i_Operational_Api]
  TNone_B473AE = (int) 0xB473AE66, // None[t.TemperatureControl.SetPoint_i]
  TNone_ACBA15 = (int) 0xACBA1590, // None[t.TemperatureControl.TempControl_i_Initialization_Api]
  TNone_A41F76 = (int) 0xA41F763F, // None[t.TemperatureControl.TempControl_i_Operational_Api]
  TNone_68DB3B = (int) 0x68DB3B35, // None[t.TemperatureControl.TempSensor_i_Initialization_Api]
  TNone_AC21B6 = (int) 0xAC21B63B, // None[t.TemperatureControl.TempSensor_i_Operational_Api]
  TNone_3FD7F9 = (int) 0x3FD7F9B7, // None[t.TemperatureControl.TempUnit.Type]
  TNone_4CBE13 = (int) 0x4CBE1372, // None[t.TemperatureControl.Temperature_i]
  TSome_80A548 = (int) 0x80A5482F, // Some[(Z, Z)]
  TSome_3EC8A4 = (int) 0x3EC8A441, // Some[IS[Z, art.Bridge]]
  TSome_488F47 = (int) 0x488F47F1, // Some[Z]
  TSome_24B656 = (int) 0x24B65679, // Some[art.ArtSlangMessage]
  TSome_482E57 = (int) 0x482E572F, // Some[art.Bridge]
  TSome_D29615 = (int) 0xD29615C0, // Some[art.DataContent]
  TSome_4782C6 = (int) 0x4782C6E2, // Some[art.Empty]
  TSome_3E197E = (int) 0x3E197EB8, // Some[art.UPort]
  TSome_A13654 = (int) 0xA1365482, // Some[art.scheduling.static.Schedule.DScheduleSpec]
  TSome_2040D2 = (int) 0x2040D2E3, // Some[t.Cli.RunChoice.Type]
  TSome_040EE4 = (int) 0x040EE4D4, // Some[t.Cli.RunTopOption]
  TSome_07AD88 = (int) 0x07AD88F2, // Some[t.TemperatureControl.FanAck.Type]
  TSome_779716 = (int) 0x77971601, // Some[t.TemperatureControl.FanCmd.Type]
  TSome_C959A2 = (int) 0xC959A285, // Some[t.TemperatureControl.Fan_i_Initialization_Api]
  TSome_A89224 = (int) 0xA8922465, // Some[t.TemperatureControl.Fan_i_Operational_Api]
  TSome_D8D240 = (int) 0xD8D24078, // Some[t.TemperatureControl.SetPoint_i]
  TSome_D50AE7 = (int) 0xD50AE7AE, // Some[t.TemperatureControl.TempControl_i_Initialization_Api]
  TSome_E49AF0 = (int) 0xE49AF021, // Some[t.TemperatureControl.TempControl_i_Operational_Api]
  TSome_23FE19 = (int) 0x23FE1947, // Some[t.TemperatureControl.TempSensor_i_Initialization_Api]
  TSome_82706F = (int) 0x82706F21, // Some[t.TemperatureControl.TempSensor_i_Operational_Api]
  TSome_486E43 = (int) 0x486E43BF, // Some[t.TemperatureControl.TempUnit.Type]
  TSome_14C467 = (int) 0x14C4678E, // Some[t.TemperatureControl.Temperature_i]
  TString = (int) 0xB6F8E8F6, // String
  Tart_ArchitectureDescription = (int) 0xAD6322F1, // art.ArchitectureDescription
  Tart_ArtSlangMessage = (int) 0xD65AE808, // art.ArtSlangMessage
  Tart_Bridge_Ports = (int) 0x14139493, // art.Bridge.Ports
  Tart_Connection = (int) 0x17385940, // art.Connection
  Tart_DispatchPropertyProtocol_Periodic = (int) 0x4C652984, // art.DispatchPropertyProtocol.Periodic
  Tart_DispatchPropertyProtocol_Sporadic = (int) 0x48F30CFF, // art.DispatchPropertyProtocol.Sporadic
  Tart_Empty = (int) 0x49C5E24D, // art.Empty
  Tart_EventTriggered = (int) 0x5ED6B44C, // art.EventTriggered
  Tart_Port_9CBF18 = (int) 0x9CBF18B7, // art.Port[art.Empty]
  Tart_Port_0A16CC = (int) 0x0A16CC73, // art.Port[t.TemperatureControl.FanAck.Type]
  Tart_Port_2ED9E6 = (int) 0x2ED9E61A, // art.Port[t.TemperatureControl.FanCmd.Type]
  Tart_Port_216126 = (int) 0x21612673, // art.Port[t.TemperatureControl.SetPoint_i]
  Tart_Port_7B28AF = (int) 0x7B28AFB7, // art.Port[t.TemperatureControl.Temperature_i]
  Tart_TimeTriggered = (int) 0x2D35E63C, // art.TimeTriggered
  Tart_scheduling_legacy_Legacy = (int) 0xF8368395, // art.scheduling.legacy.Legacy
  Tart_scheduling_roundrobin_RoundRobin = (int) 0xEDDBEA6E, // art.scheduling.roundrobin.RoundRobin
  Tart_scheduling_static_Explorer_ScheduleState = (int) 0xD48F6249, // art.scheduling.static.Explorer.ScheduleState
  Tart_scheduling_static_Schedule_DSchedule = (int) 0x563BDCF3, // art.scheduling.static.Schedule.DSchedule
  Tart_scheduling_static_Schedule_DScheduleSpec = (int) 0xB1BC7C6D, // art.scheduling.static.Schedule.DScheduleSpec
  Tart_scheduling_static_Schedule_Slot = (int) 0x8F1178D8, // art.scheduling.static.Schedule.Slot
  Tart_scheduling_static_StaticScheduler = (int) 0x48589FD6, // art.scheduling.static.StaticScheduler
  Tops_ISZOps_A6D40E = (int) 0xA6D40E79, // ops.ISZOps[Z]
  Tops_ISZOps_524353 = (int) 0x5243539E, // ops.ISZOps[art.UPort]
  Tt_Base_Types_Boolean_Payload = (int) 0xB84FD195, // t.Base_Types.Boolean_Payload
  Tt_Base_Types_Float_32_Payload = (int) 0x20BB63D8, // t.Base_Types.Float_32_Payload
  Tt_Cli = (int) 0x55B74348, // t.Cli
  Tt_Cli_HelpOption = (int) 0xF823DF61, // t.Cli.HelpOption
  Tt_Cli_RunOption = (int) 0x83AB52FF, // t.Cli.RunOption
  Tt_ProcessorTimingProperties = (int) 0xAFDA49AD, // t.ProcessorTimingProperties
  Tt_TemperatureControl_FanAck_Payload = (int) 0xACF70B0D, // t.TemperatureControl.FanAck_Payload
  Tt_TemperatureControl_FanCmd_Payload = (int) 0x9C2F8951, // t.TemperatureControl.FanCmd_Payload
  Tt_TemperatureControl_Fan_i_Initialization_Api = (int) 0x1251EF08, // t.TemperatureControl.Fan_i_Initialization_Api
  Tt_TemperatureControl_Fan_i_Operational_Api = (int) 0x6AEDB016, // t.TemperatureControl.Fan_i_Operational_Api
  Tt_TemperatureControl_Fan_i_fp_fan_Bridge = (int) 0xAD68AD9F, // t.TemperatureControl.Fan_i_fp_fan_Bridge
  Tt_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints = (int) 0x8E922C92, // t.TemperatureControl.Fan_i_fp_fan_Bridge.EntryPoints
  Tt_TemperatureControl_SetPoint_i = (int) 0xCE57D1CC, // t.TemperatureControl.SetPoint_i
  Tt_TemperatureControl_SetPoint_i_Payload = (int) 0x9E0F168C, // t.TemperatureControl.SetPoint_i_Payload
  Tt_TemperatureControl_TempControl_i_Initialization_Api = (int) 0xB7893A6E, // t.TemperatureControl.TempControl_i_Initialization_Api
  Tt_TemperatureControl_TempControl_i_Operational_Api = (int) 0x8E55FF80, // t.TemperatureControl.TempControl_i_Operational_Api
  Tt_TemperatureControl_TempControl_i_tcp_tempControl_Bridge = (int) 0x9B8C1C23, // t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge
  Tt_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints = (int) 0xC6EB4DBF, // t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge.EntryPoints
  Tt_TemperatureControl_TempSensor_i_Initialization_Api = (int) 0xB39A3BA5, // t.TemperatureControl.TempSensor_i_Initialization_Api
  Tt_TemperatureControl_TempSensor_i_Operational_Api = (int) 0x5C6FF73D, // t.TemperatureControl.TempSensor_i_Operational_Api
  Tt_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge = (int) 0x67B2FE82, // t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge
  Tt_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints = (int) 0x70A97790, // t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge.EntryPoints
  Tt_TemperatureControl_TempUnit_Payload = (int) 0x6024E532, // t.TemperatureControl.TempUnit_Payload
  Tt_TemperatureControl_Temperature_i = (int) 0x9298E540, // t.TemperatureControl.Temperature_i
  Tt_TemperatureControl_Temperature_i_Payload = (int) 0xF629BB66, // t.TemperatureControl.Temperature_i_Payload
  Tt_ThreadTimingProperties = (int) 0x4C04C7D9, // t.ThreadTimingProperties
} TYPE;

char *TYPE_string_(void *type);

typedef struct Type *Type;
struct Type {
  TYPE type;
};

#define MaxString 256

typedef struct String *String;
struct String {
  TYPE type;
  Z size;
  C value[];
};

struct StaticString {
  TYPE type;
  Z size;
  C value[MaxString + 1];
};

#define string(v) ((String) &((struct { TYPE type; Z size; C value[sizeof(v)]; }) { TString, Z_C(sizeof (v) - 1), v }))
#define DeclNewString(x) struct StaticString x = { .type = TString }

#ifdef __cplusplus
}
#endif

#endif