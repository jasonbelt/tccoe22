#ifndef SIREUM_TYPE_H_art_DataContent
#define SIREUM_TYPE_H_art_DataContent

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.DataContent

#include <type-t_TemperatureControl_SetPoint_i_Payload.h>
#include <type-t_TemperatureControl_FanAck_Payload.h>
#include <type-t_TemperatureControl_FanCmd_Payload.h>
#include <type-t_TemperatureControl_TempUnit_Payload.h>
#include <type-t_Base_Types_Float_32_Payload.h>
#include <type-t_TemperatureControl_Temperature_i_Payload.h>
#include <type-art_Empty.h>
#include <type-t_Base_Types_Boolean_Payload.h>

typedef union art_DataContent *art_DataContent;
union art_DataContent {
  TYPE type;
  struct t_TemperatureControl_SetPoint_i_Payload t_TemperatureControl_SetPoint_i_Payload;
  struct t_TemperatureControl_FanAck_Payload t_TemperatureControl_FanAck_Payload;
  struct t_TemperatureControl_FanCmd_Payload t_TemperatureControl_FanCmd_Payload;
  struct t_TemperatureControl_TempUnit_Payload t_TemperatureControl_TempUnit_Payload;
  struct t_Base_Types_Float_32_Payload t_Base_Types_Float_32_Payload;
  struct t_TemperatureControl_Temperature_i_Payload t_TemperatureControl_Temperature_i_Payload;
  struct art_Empty art_Empty;
  struct t_Base_Types_Boolean_Payload t_Base_Types_Boolean_Payload;
};

#define DeclNewart_DataContent(x) union art_DataContent x = { 0 }

#ifdef __cplusplus
}
#endif

#endif