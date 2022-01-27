#ifndef SIREUM_TYPE_H_org_sireum_MS_D1ED39
#define SIREUM_TYPE_H_org_sireum_MS_D1ED39

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// MS[Z, art.UPort]
#include <type-art_UPort.h>

#define MaxMS_D1ED39 5
#define MS_D1ED39SizeT int8_t

typedef struct MS_D1ED39 *MS_D1ED39;
struct MS_D1ED39 {
  TYPE type;
  MS_D1ED39SizeT size;
  union art_UPort value[MaxMS_D1ED39];
};

#define DeclNewMS_D1ED39(x) struct MS_D1ED39 x = { .type = TMS_D1ED39 }

#ifdef __cplusplus
}
#endif

#endif