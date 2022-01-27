#ifndef SIREUM_TYPE_H_t_Base_Types_Float_32_Payload
#define SIREUM_TYPE_H_t_Base_Types_Float_32_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// t.Base_Types.Float_32_Payload

typedef struct t_Base_Types_Float_32_Payload *t_Base_Types_Float_32_Payload;
struct t_Base_Types_Float_32_Payload {
  TYPE type;
  F32 value;
};

#define DeclNewt_Base_Types_Float_32_Payload(x) struct t_Base_Types_Float_32_Payload x = { .type = Tt_Base_Types_Float_32_Payload }

#ifdef __cplusplus
}
#endif

#endif