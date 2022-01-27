#ifndef SIREUM_TYPE_H_org_sireum_Option_5F39ED
#define SIREUM_TYPE_H_org_sireum_Option_5F39ED

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[t.Cli.RunChoice.Type]

#include <type-org_sireum_Some_2040D2.h>
#include <type-org_sireum_None_72E81E.h>

typedef union Option_5F39ED *Option_5F39ED;
union Option_5F39ED {
  TYPE type;
  struct Some_2040D2 Some_2040D2;
  struct None_72E81E None_72E81E;
};

#define DeclNewOption_5F39ED(x) union Option_5F39ED x = { 0 }

#ifdef __cplusplus
}
#endif

#endif