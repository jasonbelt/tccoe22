#ifndef SIREUM_TYPE_H_org_sireum_Option_89E471
#define SIREUM_TYPE_H_org_sireum_Option_89E471

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[t.Cli.RunTopOption]

#include <type-org_sireum_Some_040EE4.h>
#include <type-org_sireum_None_892E2E.h>

typedef union Option_89E471 *Option_89E471;
union Option_89E471 {
  TYPE type;
  struct Some_040EE4 Some_040EE4;
  struct None_892E2E None_892E2E;
};

#define DeclNewOption_89E471(x) union Option_89E471 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif