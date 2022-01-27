#ifndef SIREUM_H_t_Base_Types_Boolean_Payload
#define SIREUM_H_t_Base_Types_Boolean_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// t.Base_Types.Boolean_Payload

#define t_Base_Types_Boolean_Payload_value_(this) ((this)->value)

B t_Base_Types_Boolean_Payload__eq(t_Base_Types_Boolean_Payload this, t_Base_Types_Boolean_Payload other);
inline B t_Base_Types_Boolean_Payload__ne(t_Base_Types_Boolean_Payload this, t_Base_Types_Boolean_Payload other) {
  return !t_Base_Types_Boolean_Payload__eq(this, other);
};
void t_Base_Types_Boolean_Payload_string_(STACK_FRAME String result, t_Base_Types_Boolean_Payload this);
void t_Base_Types_Boolean_Payload_cprint(t_Base_Types_Boolean_Payload this, B isOut);

inline B t_Base_Types_Boolean_Payload__is(STACK_FRAME void* this) {
  return ((t_Base_Types_Boolean_Payload) this)->type == Tt_Base_Types_Boolean_Payload;
}

inline t_Base_Types_Boolean_Payload t_Base_Types_Boolean_Payload__as(STACK_FRAME void *this) {
  if (t_Base_Types_Boolean_Payload__is(CALLER this)) return (t_Base_Types_Boolean_Payload) this;
  sfAbortImpl(CALLER "Invalid cast to t.Base_Types.Boolean_Payload.");
  abort();
}

void t_Base_Types_Boolean_Payload_apply(STACK_FRAME t_Base_Types_Boolean_Payload this, B value);

#ifdef __cplusplus
}
#endif

#endif