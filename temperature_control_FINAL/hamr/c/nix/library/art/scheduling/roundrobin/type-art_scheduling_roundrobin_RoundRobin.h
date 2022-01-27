#ifndef SIREUM_TYPE_H_art_scheduling_roundrobin_RoundRobin
#define SIREUM_TYPE_H_art_scheduling_roundrobin_RoundRobin

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.roundrobin.RoundRobin
#include <type-org_sireum_IS_7E8796.h>
#include <type-org_sireum_MS_1E4216.h>
#include <type-org_sireum_MS_1E4216.h>

typedef struct art_scheduling_roundrobin_RoundRobin *art_scheduling_roundrobin_RoundRobin;
struct art_scheduling_roundrobin_RoundRobin {
  TYPE type;
  struct IS_7E8796 bridges;
  struct MS_1E4216 lastDispatch;
  struct MS_1E4216 lastSporadic;
};

#define DeclNewart_scheduling_roundrobin_RoundRobin(x) struct art_scheduling_roundrobin_RoundRobin x = { .type = Tart_scheduling_roundrobin_RoundRobin }

#ifdef __cplusplus
}
#endif

#endif