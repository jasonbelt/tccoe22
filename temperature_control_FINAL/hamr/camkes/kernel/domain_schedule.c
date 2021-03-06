#include <config.h>
#include <object/structures.h>
#include <model/statedata.h>

// this file will not be overwritten and is safe to edit

/************************************************************

   This is a kernel data structure containing an example schedule.
   The length is in seL4 ticks (2 ms).
   This schedule should be generated from the AADL model
   using execution time and data flow latency specifications.

   Pacer runs at highest rate and should always be in domain 1

   Properties from AADL Model
   --------------------------

     Timing_Properties::Clock_Period : 2 ms
     Timing_Properties::Frame_Period : 1000 ms

     tempSensor
     ----------

       CASE_Scheduling::Domain : 2
       Thread_Properties::Dispatch_Protocol : Periodic
       Timing_Properties::Compute_Execution_Time : 10 ms
       Timing_Properties::Period : 1000 ms

     tempControl
     -----------

       CASE_Scheduling::Domain : 3
       Thread_Properties::Dispatch_Protocol : Sporadic
       Timing_Properties::Compute_Execution_Time : 10 ms


     fan
     ---

       CASE_Scheduling::Domain : 4
       Thread_Properties::Dispatch_Protocol : Sporadic
       Timing_Properties::Compute_Execution_Time : 10 ms


 *********************************************************/

const dschedule_t ksDomSchedule[] = {
  { .domain = 0, .length = 100 },  // all other seL4 threads, init, 200ms
  { .domain = 2, .length = 5 },    // tempSensor  10ms
  { .domain = 3, .length = 5 },    // tempControl  10ms
  { .domain = 4, .length = 5 },    // fan  10ms
  { .domain = 0, .length = 380 },  // pad rest of frame period
};

const word_t ksDomScheduleLength = sizeof(ksDomSchedule) / sizeof(dschedule_t);
