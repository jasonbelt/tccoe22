#include <all.h>

// art.DataContent

B art_DataContent__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tt_TemperatureControl_SetPoint_i_Payload: return T;
    case Tt_TemperatureControl_FanAck_Payload: return T;
    case Tt_TemperatureControl_FanCmd_Payload: return T;
    case Tt_TemperatureControl_TempUnit_Payload: return T;
    case Tt_Base_Types_Float_32_Payload: return T;
    case Tt_TemperatureControl_Temperature_i_Payload: return T;
    case Tart_Empty: return T;
    case Tt_Base_Types_Boolean_Payload: return T;
    default: return F;
  }
}

art_DataContent art_DataContent__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tt_TemperatureControl_SetPoint_i_Payload: break;
    case Tt_TemperatureControl_FanAck_Payload: break;
    case Tt_TemperatureControl_FanCmd_Payload: break;
    case Tt_TemperatureControl_TempUnit_Payload: break;
    case Tt_Base_Types_Float_32_Payload: break;
    case Tt_TemperatureControl_Temperature_i_Payload: break;
    case Tart_Empty: break;
    case Tt_Base_Types_Boolean_Payload: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.DataContent.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (art_DataContent) this;
}

void art_DataContent_string_(STACK_FRAME String result, art_DataContent this);