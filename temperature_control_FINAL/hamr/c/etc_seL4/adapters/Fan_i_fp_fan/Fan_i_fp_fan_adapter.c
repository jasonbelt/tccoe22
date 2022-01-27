#include <Fan_i_fp_fan_adapter.h>

Unit t_TemperatureControl_Fan_i_fp_fan_adapter_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_adapter.c", "", "t_TemperatureControl_Fan_i_fp_fan_adapter_initialiseArchitecture", 0);

  t_Fan_i_fp_fan_fan_initialiseArchitecture(SF_LAST);
}

Unit t_TemperatureControl_Fan_i_fp_fan_adapter_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_adapter.c", "", "t_TemperatureControl_Fan_i_fp_fan_adapter_initialiseEntryPoint", 0);

  t_Fan_i_fp_fan_fan_initialiseEntryPoint(SF_LAST);
}

Unit t_TemperatureControl_Fan_i_fp_fan_adapter_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_adapter.c", "", "t_TemperatureControl_Fan_i_fp_fan_adapter_computeEntryPoint", 0);

  t_Fan_i_fp_fan_fan_computeEntryPoint(SF_LAST);
}

art_Bridge_EntryPoints t_TemperatureControl_Fan_i_fp_fan_adapter_entryPoints(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_adapter.c", "", "t_TemperatureControl_Fan_i_fp_fan_adapter_entryPoints", 0);

  return t_Fan_i_fp_fan_fan_entryPoints(SF_LAST);
}
