#ifndef SIREUM_TYPE_H_art_scheduling_static_StaticScheduler
#define SIREUM_TYPE_H_art_scheduling_static_StaticScheduler

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.static.StaticScheduler
#include <type-org_sireum_IS_7E8796.h>
#include <type-art_scheduling_static_Schedule_DScheduleSpec.h>

typedef struct art_scheduling_static_StaticScheduler *art_scheduling_static_StaticScheduler;
struct art_scheduling_static_StaticScheduler {
  TYPE type;
  struct art_scheduling_static_Schedule_DScheduleSpec staticSchedule;
  struct IS_7E8796 bridges;
};

#define DeclNewart_scheduling_static_StaticScheduler(x) struct art_scheduling_static_StaticScheduler x = { .type = Tart_scheduling_static_StaticScheduler }

#ifdef __cplusplus
}
#endif

#endif