#ifndef SIREUM_TYPE_H_t_Cli_HelpOption
#define SIREUM_TYPE_H_t_Cli_HelpOption

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// t.Cli.HelpOption

typedef struct t_Cli_HelpOption *t_Cli_HelpOption;
struct t_Cli_HelpOption {
  TYPE type;
};

#define DeclNewt_Cli_HelpOption(x) struct t_Cli_HelpOption x = { .type = Tt_Cli_HelpOption }

#ifdef __cplusplus
}
#endif

#endif