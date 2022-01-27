#include <all.h>
#include <signal.h>

// This file will not be overwritten so is safe to edit

// Transpiled signature of the Slang variable t.Schedulers.roundRobinSchedule
// in architecture/t/Schedulers.scala.  This weak function declaration allows
// t_ScheduleProviderI_getRoundRobinOrder to detect whether the Slang variable was deleted
__attribute__((weak)) IS_7E8796 t_Schedulers_roundRobinSchedule(STACK_FRAME_ONLY);

volatile sig_atomic_t shouldStop = 0;

/*!
 * Example C implementation of the Slang extension method t.ScheduleProviderI.getRoundRobinOrder()
 * defined in architecture/t/Schedulers.scala
 *
 * @param result an empty schedule.  Add components in the order you want them to be dispatched.
 *               IS_7E8796=ISZ[art.Bridge], i.e. an immutable sequence of art.Bridge
 */
void t_ScheduleProviderI_getRoundRobinOrder(STACK_FRAME IS_7E8796 result) {
  DeclNewStackFrame(caller, "round_robin.c", "", "t_ScheduleProviderI_getRoundRobinOrder", 0);

  if(t_Schedulers_roundRobinSchedule) {
    printf("Using the round robin order provided in architecture/t/Schedulers.scala. Edit method \n");
    printf("  t_ScheduleProviderI_getRoundRobinOrder located in round_robin.c\n");
    printf("to supply your own\n");

    IS_7E8796 order = t_Schedulers_roundRobinSchedule(SF_LAST);
    memcpy(result->value, order->value, sizeof(union art_Bridge) * order->size);
    result->size = order->size;

  } else {
    printf("Transpiled Slang variable t.Schedulers.roundRobinSchedule not found.  Using an example schedule from method");
    printf("  t_ScheduleProviderI_getRoundRobinOrder located in round_robin.c\n");

    // example schedule
    int i = 0;
    IS_7E8796_up(result, i++, (art_Bridge) t_Arch_TempControlSystem_i_Instance_tsp_tempSensor(SF_LAST));
    IS_7E8796_up(result, i++, (art_Bridge) t_Arch_TempControlSystem_i_Instance_tcp_tempControl(SF_LAST));
    IS_7E8796_up(result, i++, (art_Bridge) t_Arch_TempControlSystem_i_Instance_fp_fan(SF_LAST));

    result->size = i;
  }
}

/*!
 * signal handler that sets shouldStop to true when invoked
 */
void sigHandler(int signo) {
  shouldStop = 1;
}

/*!
 * Example C implementation of Slang extension method art.scheduling.roundrobin.RoundRobinExtensions.init()
 * defined in art/scheduling/roundrobin/RoundRobin.scala.  The scheduler calls this
 * during the initialization phase
 *
 * It registers a signal handler that is used to shut down the demo when it receives
 * SIGINT (CTRL+C), SIGTERM
 */
Unit art_scheduling_roundrobin_RoundRobinExtensions_init(STACK_FRAME_ONLY){
  int sigs[] = {SIGINT, SIGTERM};
  for(int i = 0; i < sizeof(sigs) / sizeof(int); i++){
    if(signal(sigs[i], sigHandler) == SIG_ERR) {
      printf("Error occurred while setting signal handler for %i\n", sigs[i]);
      exit(-1);
    }
  }
}

/*!
 * Example C implementation of Slang extension method art.scheduling.roundrobin.RoundRobinExtensions.shouldStop()
 * defined in art/scheduling/roundrobin/RoundRobin.scala.  The scheduler calls this
 * during the compute phase to determine when it should transition to the finalize phase
 */
B art_scheduling_roundrobin_RoundRobinExtensions_shouldStop(STACK_FRAME_ONLY){
    return shouldStop == 1;
}
