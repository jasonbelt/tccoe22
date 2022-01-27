#include <all.h>

// Some[IS[Z, art.Bridge]]

B Some_3EC8A4__eq(Some_3EC8A4 this, Some_3EC8A4 other) {
  if (IS_7E8796__ne((IS_7E8796) &this->value, (IS_7E8796) &other->value)) return F;
  return T;
}

B Some_3EC8A4__ne(Some_3EC8A4 this, Some_3EC8A4 other);

void Some_3EC8A4_string_(STACK_FRAME String result, Some_3EC8A4 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  IS_7E8796_string_(SF result, (IS_7E8796) &this->value);
  String_string_(SF result, string(")"));
}

void Some_3EC8A4_cprint(Some_3EC8A4 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  IS_7E8796_cprint((IS_7E8796) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_3EC8A4__is(STACK_FRAME void* this);
Some_3EC8A4 Some_3EC8A4__as(STACK_FRAME void *this);

void Some_3EC8A4_apply(STACK_FRAME Some_3EC8A4 this, IS_7E8796 value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_3EC8A4", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct IS_7E8796));
}