#include <all.h>

// MS[Z, art.UPort]
art_UPort MS_D1ED39_at(MS_D1ED39 this, Z i);
void MS_D1ED39_up(MS_D1ED39 this, Z i, art_UPort e);
Z MS_D1ED39_size(STACK_FRAME MS_D1ED39 this);
Z MS_D1ED39_zize(STACK_FRAME MS_D1ED39 this);

B MS_D1ED39__eq(MS_D1ED39 this, MS_D1ED39 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (art_UPort__ne((art_UPort) &this->value[i], (art_UPort) &other->value[i])) return F;
  }
  return T;
}

void MS_D1ED39_create(STACK_FRAME MS_D1ED39 result, Z size, art_UPort dflt) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "create", 0);
  sfAssert((Z) size <= MaxMS_D1ED39, "Insufficient maximum for MS[Z, art.UPort] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(union art_UPort));
  }
  result->size = zize;
}

void MS_D1ED39__append(STACK_FRAME MS_D1ED39 result, MS_D1ED39 this, art_UPort value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", ":+", 0);
  sfAssert(this->size + 1 <= MaxMS_D1ED39, "Insufficient maximum for MS[Z, art.UPort] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct MS_D1ED39));
  Type_assign(&result->value[thisSize], value, sizeof(union art_UPort));
  result->size = (int8_t) (thisSize + 1);
}

void MS_D1ED39__prepend(STACK_FRAME MS_D1ED39 result, MS_D1ED39 this, art_UPort value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "+:", 0);
  sfAssert(this->size + 1 <= MaxMS_D1ED39, "Insufficient maximum for MS[Z, art.UPort] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(union art_UPort));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(union art_UPort));
  result->size = (int8_t) thisSize + 1;
}

void MS_D1ED39__appendAll(STACK_FRAME MS_D1ED39 result, MS_D1ED39 this, MS_D1ED39 other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "++", 0);
  sfAssert(this->size + other->size <= MaxMS_D1ED39, "Insufficient maximum for MS[Z, art.UPort] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct MS_D1ED39));
  result->size = (int8_t) thisSize + otherSize;
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i + 1], sizeof(union art_UPort));
}

void MS_D1ED39__sub(STACK_FRAME MS_D1ED39 result, MS_D1ED39 this, art_UPort value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    art_UPort o = (art_UPort) &this->value[i];
    if (art_UPort__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(union art_UPort));
  }
  result->size = k;
}

void MS_D1ED39__removeAll(STACK_FRAME MS_D1ED39 result, MS_D1ED39 this, MS_D1ED39 other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    art_UPort o = (art_UPort) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (art_UPort__eq(o, (art_UPort) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(union art_UPort));
  }
  result->size = k;
}

void MS_D1ED39_cprint(MS_D1ED39 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    union art_UPort *value = this->value;
    art_UPort_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      art_UPort_cprint(&value[i], isOut);
    }
  }
  String_cprint(string("]"), isOut);
  #endif
}

void MS_D1ED39_string_(STACK_FRAME String result, MS_D1ED39 this) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "string", 0);
  String_string_(SF result, string("["));
  int8_t size = this->size;
  if (size > 0) {
    union art_UPort *value = this->value;
    art_UPort_string_(SF result, (art_UPort) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string_(SF result, string(", "));
      art_UPort_string_(SF result, (art_UPort) &(value[i]));
    }
  }
  String_string_(SF result, string("]"));
}

B MS_D1ED39__ne(MS_D1ED39 this, MS_D1ED39 other);

void MS_D1ED39_toIS(STACK_FRAME IS_820232 result, MS_D1ED39 this);