#ifndef SIREUM_H_t_Cli_RunChoice_Type
#define SIREUM_H_t_Cli_RunChoice_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// t.Cli.RunChoice.Type
void t_Cli_RunChoice_Type_byName(STACK_FRAME Option_5F39ED result, String s);
void t_Cli_RunChoice_Type_byOrdinal(STACK_FRAME Option_5F39ED result, Z n);
Z t_Cli_RunChoice_Type_numOfElements(void);
void t_Cli_RunChoice_Type_cprint(t_Cli_RunChoice_Type this, B isOut);
void t_Cli_RunChoice_Type_string_(STACK_FRAME String result, t_Cli_RunChoice_Type this);

#ifdef __cplusplus
}
#endif

#endif