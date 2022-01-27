#ifndef SIREUM_TYPE_H_org_sireum_Some_040EE4
#define SIREUM_TYPE_H_org_sireum_Some_040EE4

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[t.Cli.RunTopOption]
#include <type-t_Cli_RunTopOption.h>

typedef struct Some_040EE4 *Some_040EE4;
struct Some_040EE4 {
  TYPE type;
  union t_Cli_RunTopOption value;
};

#define DeclNewSome_040EE4(x) struct Some_040EE4 x = { .type = TSome_040EE4 }

#ifdef __cplusplus
}
#endif

#endif