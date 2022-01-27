#include <all.h>

// MS[Z, S64]
S64 MS_1E4216_at(MS_1E4216 this, Z i);
void MS_1E4216_up(MS_1E4216 this, Z i, S64 e);
Z MS_1E4216_size(STACK_FRAME MS_1E4216 this);
Z MS_1E4216_zize(STACK_FRAME MS_1E4216 this);

B MS_1E4216__eq(MS_1E4216 this, MS_1E4216 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (S64__ne(this->value[i], other->value[i])) return F;
  }
  return T;
}

void MS_1E4216_create(STACK_FRAME MS_1E4216 result, Z size, S64 dflt) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "create", 0);
  sfAssert((Z) size <= MaxMS_1E4216, "Insufficient maximum for MS[Z, S64] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    result->value[i] = dflt;
  }
  result->size = zize;
}

void MS_1E4216__append(STACK_FRAME MS_1E4216 result, MS_1E4216 this, S64 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", ":+", 0);
  sfAssert(this->size + 1 <= MaxMS_1E4216, "Insufficient maximum for MS[Z, S64] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct MS_1E4216));
  result->value[thisSize] = value;
  result->size = (int8_t) (thisSize + 1);
}

void MS_1E4216__prepend(STACK_FRAME MS_1E4216 result, MS_1E4216 this, S64 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "+:", 0);
  sfAssert(this->size + 1 <= MaxMS_1E4216, "Insufficient maximum for MS[Z, S64] elements.");
  int8_t thisSize = this->size;
  result->value[0] = value;
  for (int8_t i = 0; i < thisSize; i++)
    result->value[i + 1] = this->value[i];
  result->size = (int8_t) (thisSize + 1);
}

void MS_1E4216__appendAll(STACK_FRAME MS_1E4216 result, MS_1E4216 this, MS_1E4216 other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "++", 0);
  sfAssert(this->size + other->size <= MaxMS_1E4216, "Insufficient maximum for MS[Z, S64] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct MS_1E4216));
  result->size = (int8_t) (thisSize + otherSize);
  for (int8_t i = 0; i < otherSize; i++)
    result->value[thisSize + i] = other->value[i];
}

void MS_1E4216__sub(STACK_FRAME MS_1E4216 result, MS_1E4216 this, S64 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    S64 o = this->value[i];
    if (S64__ne(o, value)) result->value[k++] = o;
  }
  result->size = k;
}

void MS_1E4216__removeAll(STACK_FRAME MS_1E4216 result, MS_1E4216 this, MS_1E4216 other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    S64 o = this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (S64__eq(o, other->value[j])) found = T;
    if (!found) result->value[k++] = o;
  }
  result->size = k;
}

void MS_1E4216_cprint(MS_1E4216 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    S64 *value = this->value;
    S64_cprint(value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      S64_cprint(value[i], isOut);
    }
  }
  String_cprint(string("]"), isOut);
  #endif
}

void MS_1E4216_string_(STACK_FRAME String result, MS_1E4216 this) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "string", 0);
  String_string_(SF result, string("["));
  int8_t size = this->size;
  if (size > 0) {
    S64 *value = this->value;
    S64_string_(SF result, value[0]);
    for (int8_t i = 1; i < size; i++) {
      String_string_(SF result, string(", "));
      S64_string_(SF result, value[i]);
    }
  }
  String_string_(SF result, string("]"));
}

B MS_1E4216__ne(MS_1E4216 this, MS_1E4216 other);
