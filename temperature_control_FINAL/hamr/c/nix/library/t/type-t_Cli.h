#ifndef SIREUM_TYPE_H_t_Cli
#define SIREUM_TYPE_H_t_Cli

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// t.Cli

typedef struct t_Cli *t_Cli;
struct t_Cli {
  TYPE type;
  C pathSep;
};

#define DeclNewt_Cli(x) struct t_Cli x = { .type = Tt_Cli }

#ifdef __cplusplus
}
#endif

#endif