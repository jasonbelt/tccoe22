#ifndef SIREUM_H_art_ArtNativeSlang
#define SIREUM_H_art_ArtNativeSlang

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void art_ArtNativeSlang_init(STACK_FRAME_ONLY);

Map_9C6840 art_ArtNativeSlang_inInfrastructurePorts(STACK_FRAME_ONLY);
void art_ArtNativeSlang_inInfrastructurePorts_a(STACK_FRAME Map_9C6840 p_inInfrastructurePorts);
Map_9C6840 art_ArtNativeSlang_outInfrastructurePorts(STACK_FRAME_ONLY);
void art_ArtNativeSlang_outInfrastructurePorts_a(STACK_FRAME Map_9C6840 p_outInfrastructurePorts);
Map_9C6840 art_ArtNativeSlang_inPortVariables(STACK_FRAME_ONLY);
void art_ArtNativeSlang_inPortVariables_a(STACK_FRAME Map_9C6840 p_inPortVariables);
Map_9C6840 art_ArtNativeSlang_outPortVariables(STACK_FRAME_ONLY);
void art_ArtNativeSlang_outPortVariables_a(STACK_FRAME Map_9C6840 p_outPortVariables);

Unit art_ArtNativeSlang_setUpSystemState(STACK_FRAME_ONLY);

Unit art_ArtNativeSlang_initializePhase(STACK_FRAME_ONLY);

Unit art_ArtNativeSlang_computePhase(STACK_FRAME_ONLY);

Unit art_ArtNativeSlang_finalizePhase(STACK_FRAME_ONLY);

Unit art_ArtNativeSlang_tearDownSystemState(STACK_FRAME_ONLY);

Unit art_ArtNativeSlang_logInfo(STACK_FRAME String title, String msg);

Unit art_ArtNativeSlang_logDebug(STACK_FRAME String title, String msg);

Unit art_ArtNativeSlang_logError(STACK_FRAME String title, String msg);

Unit art_ArtNativeSlang_putValue(STACK_FRAME Z portId, art_DataContent data);

void art_ArtNativeSlang_getValue(STACK_FRAME Option_8E9F45 result, Z portId);

B art_ArtNativeSlang_shouldDispatch(STACK_FRAME Z bridgeId);

S64 art_ArtNativeSlang_time(STACK_FRAME_ONLY);

Unit art_ArtNativeSlang_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

void art_ArtNativeSlang_dispatchStatus(STACK_FRAME art_DispatchStatus result, Z bridgeId);

Unit art_ArtNativeSlang_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

void art_ArtNativeSlang_sort_insert(STACK_FRAME IS_820232 result, art_UPort p, IS_820232 sorted);

void art_ArtNativeSlang_sort(STACK_FRAME IS_820232 result, IS_820232 ports);

B art_ArtNativeSlang_lt(STACK_FRAME art_UPort a, art_UPort b);

void art_ArtNativeSlang_init_inInfrastructurePorts(STACK_FRAME_ONLY);

void art_ArtNativeSlang_init_outInfrastructurePorts(STACK_FRAME_ONLY);

void art_ArtNativeSlang_init_inPortVariables(STACK_FRAME_ONLY);

void art_ArtNativeSlang_init_outPortVariables(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif