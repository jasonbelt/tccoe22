#ifndef SIREUM_TYPE_H_org_sireum_Some_A13654
#define SIREUM_TYPE_H_org_sireum_Some_A13654

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[art.scheduling.static.Schedule.DScheduleSpec]
#include <type-art_scheduling_static_Schedule_DScheduleSpec.h>

typedef struct Some_A13654 *Some_A13654;
struct Some_A13654 {
  TYPE type;
  struct art_scheduling_static_Schedule_DScheduleSpec value;
};

#define DeclNewSome_A13654(x) struct Some_A13654 x = { .type = TSome_A13654 }

#ifdef __cplusplus
}
#endif

#endif