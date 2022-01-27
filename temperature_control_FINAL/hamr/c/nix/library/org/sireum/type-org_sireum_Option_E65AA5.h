#ifndef SIREUM_TYPE_H_org_sireum_Option_E65AA5
#define SIREUM_TYPE_H_org_sireum_Option_E65AA5

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[IS[Z, art.Bridge]]

#include <type-org_sireum_Some_3EC8A4.h>
#include <type-org_sireum_None_C92EDC.h>

typedef union Option_E65AA5 *Option_E65AA5;
union Option_E65AA5 {
  TYPE type;
  struct Some_3EC8A4 Some_3EC8A4;
  struct None_C92EDC None_C92EDC;
};

#define DeclNewOption_E65AA5(x) union Option_E65AA5 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif