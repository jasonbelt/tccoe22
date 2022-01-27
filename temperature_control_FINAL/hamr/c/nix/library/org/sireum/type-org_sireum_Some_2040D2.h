#ifndef SIREUM_TYPE_H_org_sireum_Some_2040D2
#define SIREUM_TYPE_H_org_sireum_Some_2040D2

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[t.Cli.RunChoice.Type]
#include <type-t_Cli_RunChoice_Type.h>

typedef struct Some_2040D2 *Some_2040D2;
struct Some_2040D2 {
  TYPE type;
  t_Cli_RunChoice_Type value;
};

#define DeclNewSome_2040D2(x) struct Some_2040D2 x = { .type = TSome_2040D2 }

#ifdef __cplusplus
}
#endif

#endif