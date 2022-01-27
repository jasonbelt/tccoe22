#ifndef SIREUM_TYPE_H_org_sireum_None_C2CCA4
#define SIREUM_TYPE_H_org_sireum_None_C2CCA4

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// None[String]

typedef struct None_C2CCA4 *None_C2CCA4;
struct None_C2CCA4 {
  TYPE type;
};

#define DeclNewNone_C2CCA4(x) struct None_C2CCA4 x = { .type = TNone_C2CCA4 }

#ifdef __cplusplus
}
#endif

#endif