#include <TempControl_i_tcp_tempControl_adapter.h>

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_adapter_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_adapter.c", "", "t_TemperatureControl_TempControl_i_tcp_tempControl_adapter_initialiseArchitecture", 0);

  t_TempControl_i_tcp_tempControl_tempControl_initialiseArchitecture(SF_LAST);
}

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_adapter_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_adapter.c", "", "t_TemperatureControl_TempControl_i_tcp_tempControl_adapter_initialiseEntryPoint", 0);

  t_TempControl_i_tcp_tempControl_tempControl_initialiseEntryPoint(SF_LAST);
}

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_adapter_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_adapter.c", "", "t_TemperatureControl_TempControl_i_tcp_tempControl_adapter_computeEntryPoint", 0);

  t_TempControl_i_tcp_tempControl_tempControl_computeEntryPoint(SF_LAST);
}

art_Bridge_EntryPoints t_TemperatureControl_TempControl_i_tcp_tempControl_adapter_entryPoints(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_adapter.c", "", "t_TemperatureControl_TempControl_i_tcp_tempControl_adapter_entryPoints", 0);

  return t_TempControl_i_tcp_tempControl_tempControl_entryPoints(SF_LAST);
}
