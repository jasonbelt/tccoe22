#ifndef SIREUM_TYPE_H_org_sireum_MS_1E4216
#define SIREUM_TYPE_H_org_sireum_MS_1E4216

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// MS[Z, S64]
#include <type-org_sireum_S64.h>

#define MaxMS_1E4216 13
#define MS_1E4216SizeT int8_t

typedef struct MS_1E4216 *MS_1E4216;
struct MS_1E4216 {
  TYPE type;
  MS_1E4216SizeT size;
  S64 value[MaxMS_1E4216];
};

#define DeclNewMS_1E4216(x) struct MS_1E4216 x = { .type = TMS_1E4216 }

#ifdef __cplusplus
}
#endif

#endif