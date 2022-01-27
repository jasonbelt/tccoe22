#ifndef SIREUM_TYPE_H_t_Cli_RunTopOption
#define SIREUM_TYPE_H_t_Cli_RunTopOption

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// t.Cli.RunTopOption

#include <type-t_Cli_RunOption.h>
#include <type-t_Cli_HelpOption.h>

typedef union t_Cli_RunTopOption *t_Cli_RunTopOption;
union t_Cli_RunTopOption {
  TYPE type;
  struct t_Cli_RunOption t_Cli_RunOption;
  struct t_Cli_HelpOption t_Cli_HelpOption;
};

#define DeclNewt_Cli_RunTopOption(x) union t_Cli_RunTopOption x = { 0 }

#ifdef __cplusplus
}
#endif

#endif