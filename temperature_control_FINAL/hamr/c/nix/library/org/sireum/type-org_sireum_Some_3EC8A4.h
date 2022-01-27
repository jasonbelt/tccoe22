#ifndef SIREUM_TYPE_H_org_sireum_Some_3EC8A4
#define SIREUM_TYPE_H_org_sireum_Some_3EC8A4

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[IS[Z, art.Bridge]]
#include <type-org_sireum_IS_7E8796.h>

typedef struct Some_3EC8A4 *Some_3EC8A4;
struct Some_3EC8A4 {
  TYPE type;
  struct IS_7E8796 value;
};

#define DeclNewSome_3EC8A4(x) struct Some_3EC8A4 x = { .type = TSome_3EC8A4 }

#ifdef __cplusplus
}
#endif

#endif