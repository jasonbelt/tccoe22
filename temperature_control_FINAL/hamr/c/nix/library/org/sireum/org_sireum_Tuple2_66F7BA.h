#ifndef SIREUM_H_org_sireum_Tuple2_66F7BA
#define SIREUM_H_org_sireum_Tuple2_66F7BA

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// (art.UPort, art.UPort)
void Tuple2_66F7BA_apply(STACK_FRAME Tuple2_66F7BA this, art_UPort _1, art_UPort _2);
B Tuple2_66F7BA__eq(Tuple2_66F7BA this, Tuple2_66F7BA other);
void Tuple2_66F7BA_cprint(Tuple2_66F7BA this, B isOut);
void Tuple2_66F7BA_string_(STACK_FRAME String result, Tuple2_66F7BA this);

inline art_UPort Tuple2_66F7BA_1(Tuple2_66F7BA this) {
  return (art_UPort) &this->_1;
}

inline art_UPort Tuple2_66F7BA_2(Tuple2_66F7BA this) {
  return (art_UPort) &this->_2;
};

inline B Tuple2_66F7BA__ne(Tuple2_66F7BA this, Tuple2_66F7BA other) {
  return !Tuple2_66F7BA__eq(this, other);
}

#ifdef __cplusplus
}
#endif

#endif