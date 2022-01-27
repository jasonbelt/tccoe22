#ifndef SIREUM_TYPE_H_t_ProcessorTimingProperties
#define SIREUM_TYPE_H_t_ProcessorTimingProperties

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// t.ProcessorTimingProperties
#include <type-org_sireum_Option_882048.h>
#include <type-org_sireum_Option_882048.h>
#include <type-org_sireum_Option_882048.h>
#include <type-org_sireum_Option_882048.h>

typedef struct t_ProcessorTimingProperties *t_ProcessorTimingProperties;
struct t_ProcessorTimingProperties {
  TYPE type;
  union Option_882048 clockPeriod;
  union Option_882048 framePeriod;
  union Option_882048 maxDomain;
  union Option_882048 slotTime;
};

#define DeclNewt_ProcessorTimingProperties(x) struct t_ProcessorTimingProperties x = { .type = Tt_ProcessorTimingProperties }

#ifdef __cplusplus
}
#endif

#endif