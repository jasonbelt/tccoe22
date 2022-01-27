#include <all.h>

// (art.UPort, art.UPort)

art_UPort Tuple2_66F7BA_1(Tuple2_66F7BA this);
art_UPort Tuple2_66F7BA_2(Tuple2_66F7BA this);

B Tuple2_66F7BA__ne(Tuple2_66F7BA this, Tuple2_66F7BA other);

void Tuple2_66F7BA_apply(STACK_FRAME Tuple2_66F7BA this, art_UPort _1, art_UPort _2) {
  DeclNewStackFrame(caller, "Tuple2.scala", "org.sireum.Tuple2", "apply", 0);
  Type_assign(&(this->_1), _1, sizeof(union art_UPort));
  Type_assign(&(this->_2), _2, sizeof(union art_UPort));
}

B Tuple2_66F7BA__eq(Tuple2_66F7BA this, Tuple2_66F7BA other) {
  if (art_UPort__ne((art_UPort) &this->_1, (art_UPort) &other->_1)) return F;
  if (art_UPort__ne((art_UPort) &this->_2, (art_UPort) &other->_2)) return F;
  return T;
}

void Tuple2_66F7BA_cprint(Tuple2_66F7BA this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String sep = string(", ");
  String_cprint(string("("), isOut);
  art_UPort_cprint(&this->_1, isOut);
  String_cprint(sep, isOut);
  art_UPort_cprint(&this->_2, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void Tuple2_66F7BA_string_(STACK_FRAME String result, Tuple2_66F7BA this) {
  DeclNewStackFrame(caller, "Tuple2.scala", "org.sireum.Tuple2", "string", 0);
  String sep = string(", ");
  String_string_(SF result, string("("));
  art_UPort_string_(SF result, (art_UPort) &this->_1);
  String_string_(SF result, sep);
  art_UPort_string_(SF result, (art_UPort) &this->_2);
  String_string_(SF result, string(")"));
}