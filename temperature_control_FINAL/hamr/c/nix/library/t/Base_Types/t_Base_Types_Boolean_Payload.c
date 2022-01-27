#include <all.h>

// t.Base_Types.Boolean_Payload

B t_Base_Types_Boolean_Payload__eq(t_Base_Types_Boolean_Payload this, t_Base_Types_Boolean_Payload other) {
  if (B__ne(this->value, other->value)) return F;
  return T;
}

B t_Base_Types_Boolean_Payload__ne(t_Base_Types_Boolean_Payload this, t_Base_Types_Boolean_Payload other);

void t_Base_Types_Boolean_Payload_string_(STACK_FRAME String result, t_Base_Types_Boolean_Payload this) {
  DeclNewStackFrame(caller, "Base_Types.scala", "t.Base_Types.Boolean_Payload", "string", 0);
  String_string_(SF result, string("Boolean_Payload("));
  B_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void t_Base_Types_Boolean_Payload_cprint(t_Base_Types_Boolean_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Boolean_Payload("), isOut);
  B_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B t_Base_Types_Boolean_Payload__is(STACK_FRAME void* this);
t_Base_Types_Boolean_Payload t_Base_Types_Boolean_Payload__as(STACK_FRAME void *this);

void t_Base_Types_Boolean_Payload_apply(STACK_FRAME t_Base_Types_Boolean_Payload this, B value) {
  DeclNewStackFrame(caller, "Base_Types.scala", "t.Base_Types.Boolean_Payload", "apply", 0);
  this->value = value;
}