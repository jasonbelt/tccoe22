#include <all.h>

// art.Bridge

B art_Bridge__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tt_TemperatureControl_Fan_i_fp_fan_Bridge: return T;
    case Tt_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge: return T;
    case Tt_TemperatureControl_TempControl_i_tcp_tempControl_Bridge: return T;
    default: return F;
  }
}

art_Bridge art_Bridge__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tt_TemperatureControl_Fan_i_fp_fan_Bridge: break;
    case Tt_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge: break;
    case Tt_TemperatureControl_TempControl_i_tcp_tempControl_Bridge: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.Bridge.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (art_Bridge) this;
}

void art_Bridge_string_(STACK_FRAME String result, art_Bridge this);

Z art_Bridge_id_(STACK_FRAME art_Bridge this) {
  switch (this->type) {
    case Tt_TemperatureControl_Fan_i_fp_fan_Bridge: return t_TemperatureControl_Fan_i_fp_fan_Bridge_id_((t_TemperatureControl_Fan_i_fp_fan_Bridge) this);
    case Tt_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge: return t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_id_((t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge) this);
    case Tt_TemperatureControl_TempControl_i_tcp_tempControl_Bridge: return t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_id_((t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

void art_Bridge_dispatchProtocol_(STACK_FRAME art_DispatchPropertyProtocol result, art_Bridge this) {
  switch (this->type) {
    case Tt_TemperatureControl_Fan_i_fp_fan_Bridge: Type_assign(result, t_TemperatureControl_Fan_i_fp_fan_Bridge_dispatchProtocol_((t_TemperatureControl_Fan_i_fp_fan_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    case Tt_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge: Type_assign(result, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_dispatchProtocol_((t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    case Tt_TemperatureControl_TempControl_i_tcp_tempControl_Bridge: Type_assign(result, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_dispatchProtocol_((t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

void art_Bridge_name_(STACK_FRAME String result, art_Bridge this) {
  switch (this->type) {
    case Tt_TemperatureControl_Fan_i_fp_fan_Bridge: Type_assign(result, t_TemperatureControl_Fan_i_fp_fan_Bridge_name_((t_TemperatureControl_Fan_i_fp_fan_Bridge) this), sizeof(struct StaticString)); return;
    case Tt_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge: Type_assign(result, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_name_((t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge) this), sizeof(struct StaticString)); return;
    case Tt_TemperatureControl_TempControl_i_tcp_tempControl_Bridge: Type_assign(result, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_name_((t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge) this), sizeof(struct StaticString)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

void art_Bridge_ports_(STACK_FRAME art_Bridge_Ports result, art_Bridge this) {
  switch (this->type) {
    case Tt_TemperatureControl_Fan_i_fp_fan_Bridge: Type_assign(result, t_TemperatureControl_Fan_i_fp_fan_Bridge_ports_((t_TemperatureControl_Fan_i_fp_fan_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    case Tt_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge: Type_assign(result, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_ports_((t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    case Tt_TemperatureControl_TempControl_i_tcp_tempControl_Bridge: Type_assign(result, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_ports_((t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

void art_Bridge_entryPoints_(STACK_FRAME art_Bridge_EntryPoints result, art_Bridge this) {
  switch (this->type) {
    case Tt_TemperatureControl_Fan_i_fp_fan_Bridge: Type_assign(result, t_TemperatureControl_Fan_i_fp_fan_Bridge_entryPoints_((t_TemperatureControl_Fan_i_fp_fan_Bridge) this), sizeof(union art_Bridge_EntryPoints)); return;
    case Tt_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge: Type_assign(result, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_entryPoints_((t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge) this), sizeof(union art_Bridge_EntryPoints)); return;
    case Tt_TemperatureControl_TempControl_i_tcp_tempControl_Bridge: Type_assign(result, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_entryPoints_((t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge) this), sizeof(union art_Bridge_EntryPoints)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}