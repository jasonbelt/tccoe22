#ifndef SIREUM_TYPE_H_t_Cli_RunOption
#define SIREUM_TYPE_H_t_Cli_RunOption

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// t.Cli.RunOption
#include <type-org_sireum_IS_948B60.h>
#include <type-t_Cli_RunChoice_Type.h>

typedef struct t_Cli_RunOption *t_Cli_RunOption;
struct t_Cli_RunOption {
  TYPE type;
  struct StaticString help;
  struct IS_948B60 args;
  t_Cli_RunChoice_Type scheduler;
};

#define DeclNewt_Cli_RunOption(x) struct t_Cli_RunOption x = { .type = Tt_Cli_RunOption }

#ifdef __cplusplus
}
#endif

#endif