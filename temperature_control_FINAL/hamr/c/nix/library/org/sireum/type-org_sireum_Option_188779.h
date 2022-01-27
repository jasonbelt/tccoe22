#ifndef SIREUM_TYPE_H_org_sireum_Option_188779
#define SIREUM_TYPE_H_org_sireum_Option_188779

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[art.scheduling.static.Schedule.DScheduleSpec]

#include <type-org_sireum_Some_A13654.h>
#include <type-org_sireum_None_FD0D39.h>

typedef union Option_188779 *Option_188779;
union Option_188779 {
  TYPE type;
  struct Some_A13654 Some_A13654;
  struct None_FD0D39 None_FD0D39;
};

#define DeclNewOption_188779(x) union Option_188779 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif