#include <all.h>

// t.Base_Types.Float_32_Payload

B t_Base_Types_Float_32_Payload__eq(t_Base_Types_Float_32_Payload this, t_Base_Types_Float_32_Payload other) {
  if (F32__ne(this->value, other->value)) return F;
  return T;
}

B t_Base_Types_Float_32_Payload__ne(t_Base_Types_Float_32_Payload this, t_Base_Types_Float_32_Payload other);

void t_Base_Types_Float_32_Payload_string_(STACK_FRAME String result, t_Base_Types_Float_32_Payload this) {
  DeclNewStackFrame(caller, "Base_Types.scala", "t.Base_Types.Float_32_Payload", "string", 0);
  String_string_(SF result, string("Float_32_Payload("));
  F32_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void t_Base_Types_Float_32_Payload_cprint(t_Base_Types_Float_32_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Float_32_Payload("), isOut);
  F32_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B t_Base_Types_Float_32_Payload__is(STACK_FRAME void* this);
t_Base_Types_Float_32_Payload t_Base_Types_Float_32_Payload__as(STACK_FRAME void *this);

void t_Base_Types_Float_32_Payload_apply(STACK_FRAME t_Base_Types_Float_32_Payload this, F32 value) {
  DeclNewStackFrame(caller, "Base_Types.scala", "t.Base_Types.Float_32_Payload", "apply", 0);
  this->value = value;
}