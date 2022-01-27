#include <all.h>

// ops.ISZOps[art.UPort]

B ops_ISZOps_524353__eq(ops_ISZOps_524353 this, ops_ISZOps_524353 other) {
  if (IS_820232__ne((IS_820232) &this->s, (IS_820232) &other->s)) return F;
  return T;
}

B ops_ISZOps_524353__ne(ops_ISZOps_524353 this, ops_ISZOps_524353 other);

void ops_ISZOps_524353_string_(STACK_FRAME String result, ops_ISZOps_524353 this) {
  DeclNewStackFrame(caller, "SOps.scala", "org.sireum.ops.ISZOps", "string", 0);
  String_string_(SF result, string("ISZOps("));
  IS_820232_string_(SF result, (IS_820232) &this->s);
  String_string_(SF result, string(")"));
}

void ops_ISZOps_524353_cprint(ops_ISZOps_524353 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("ISZOps("), isOut);
  IS_820232_cprint((IS_820232) &this->s, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B ops_ISZOps_524353__is(STACK_FRAME void* this);
ops_ISZOps_524353 ops_ISZOps_524353__as(STACK_FRAME void *this);

void ops_ISZOps_524353_apply(STACK_FRAME ops_ISZOps_524353 this, IS_820232 s) {
  DeclNewStackFrame(caller, "SOps.scala", "org.sireum.ops.ops_ISZOps_524353", "apply", 0);
  Type_assign(&this->s, s, sizeof(struct IS_820232));
}