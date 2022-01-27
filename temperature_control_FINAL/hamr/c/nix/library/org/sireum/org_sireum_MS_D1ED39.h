#ifndef SIREUM_H_org_sireum_MS_D1ED39
#define SIREUM_H_org_sireum_MS_D1ED39

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// MS[Z, art.UPort]

inline art_UPort MS_D1ED39_at(MS_D1ED39 this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  return (art_UPort) &(this->value[(int8_t) idx]);
}

inline void MS_D1ED39_up(MS_D1ED39 this, Z i, art_UPort e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  Type_assign(&this->value[(int8_t) idx], e, sizeof(union art_UPort));
}

inline Z MS_D1ED39_size(STACK_FRAME MS_D1ED39 this) {
   return (Z) (this)->size;
}

inline Z MS_D1ED39_zize(STACK_FRAME MS_D1ED39 this) {
   return (Z) (this)->size;
}

inline B MS_D1ED39_isEmpty(STACK_FRAME MS_D1ED39 this) {
   return (this)->size == 0;
}

inline B MS_D1ED39_nonEmpty(STACK_FRAME MS_D1ED39 this) {
   return (this)->size != 0;
}

B MS_D1ED39__eq(MS_D1ED39 this, MS_D1ED39 other);
void MS_D1ED39_create(STACK_FRAME MS_D1ED39 result, Z size, art_UPort dflt);
void MS_D1ED39__append(STACK_FRAME MS_D1ED39 result, MS_D1ED39 this, art_UPort value);
void MS_D1ED39__prepend(STACK_FRAME MS_D1ED39 result, MS_D1ED39 this, art_UPort value);
void MS_D1ED39__appendAll(STACK_FRAME MS_D1ED39 result, MS_D1ED39 this, MS_D1ED39 other);
void MS_D1ED39__sub(STACK_FRAME MS_D1ED39 result, MS_D1ED39 this, art_UPort value);
void MS_D1ED39__removeAll(STACK_FRAME MS_D1ED39 result, MS_D1ED39 this, MS_D1ED39 other);
void MS_D1ED39_cprint(MS_D1ED39 this, B isOut);
void MS_D1ED39_string_(STACK_FRAME String result, MS_D1ED39 this);

inline B MS_D1ED39__ne(MS_D1ED39 this, MS_D1ED39 other) {
  return !MS_D1ED39__eq(this, other);
}

inline void MS_D1ED39_toIS(STACK_FRAME IS_820232 result, MS_D1ED39 this) {
  STATIC_ASSERT(MaxIS_820232 >= MaxMS_D1ED39, "Invalid cast from MS[Z, art.UPort] to IS[...,...].");
  result->type = TIS_820232;
  result->size = this->size;
  memcpy(&result->value, &this->value, this->size * sizeof(union art_UPort));
}

#ifdef __cplusplus
}
#endif

#endif