#ifndef SIREUM_TYPE_H_org_sireum_None_C92EDC
#define SIREUM_TYPE_H_org_sireum_None_C92EDC

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// None[IS[Z, art.Bridge]]

typedef struct None_C92EDC *None_C92EDC;
struct None_C92EDC {
  TYPE type;
};

#define DeclNewNone_C92EDC(x) struct None_C92EDC x = { .type = TNone_C92EDC }

#ifdef __cplusplus
}
#endif

#endif