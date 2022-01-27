#ifndef SIREUM_TYPE_H_t_Base_Types_Boolean_Payload
#define SIREUM_TYPE_H_t_Base_Types_Boolean_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// t.Base_Types.Boolean_Payload

typedef struct t_Base_Types_Boolean_Payload *t_Base_Types_Boolean_Payload;
struct t_Base_Types_Boolean_Payload {
  TYPE type;
  B value;
};

#define DeclNewt_Base_Types_Boolean_Payload(x) struct t_Base_Types_Boolean_Payload x = { .type = Tt_Base_Types_Boolean_Payload }

#ifdef __cplusplus
}
#endif

#endif