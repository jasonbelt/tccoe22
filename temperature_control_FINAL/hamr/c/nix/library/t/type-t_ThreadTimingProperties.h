#ifndef SIREUM_TYPE_H_t_ThreadTimingProperties
#define SIREUM_TYPE_H_t_ThreadTimingProperties

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// t.ThreadTimingProperties
#include <type-org_sireum_Option_882048.h>
#include <type-org_sireum_Option_B47750.h>

typedef struct t_ThreadTimingProperties *t_ThreadTimingProperties;
struct t_ThreadTimingProperties {
  TYPE type;
  union Option_882048 domain;
  union Option_B47750 computeExecutionTime;
};

#define DeclNewt_ThreadTimingProperties(x) struct t_ThreadTimingProperties x = { .type = Tt_ThreadTimingProperties }

#ifdef __cplusplus
}
#endif

#endif