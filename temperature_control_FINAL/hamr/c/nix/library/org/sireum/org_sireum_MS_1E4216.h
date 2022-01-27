#ifndef SIREUM_H_org_sireum_MS_1E4216
#define SIREUM_H_org_sireum_MS_1E4216

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// MS[Z, S64]

inline S64 MS_1E4216_at(MS_1E4216 this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  return this->value[(int8_t) idx];
}

inline void MS_1E4216_up(MS_1E4216 this, Z i, S64 e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  this->value[(int8_t) idx] = e;
}

inline Z MS_1E4216_size(STACK_FRAME MS_1E4216 this) {
   return (Z) (this)->size;
}

inline Z MS_1E4216_zize(STACK_FRAME MS_1E4216 this) {
   return (Z) (this)->size;
}

inline B MS_1E4216_isEmpty(STACK_FRAME MS_1E4216 this) {
   return (this)->size == 0;
}

inline B MS_1E4216_nonEmpty(STACK_FRAME MS_1E4216 this) {
   return (this)->size != 0;
}

B MS_1E4216__eq(MS_1E4216 this, MS_1E4216 other);
void MS_1E4216_create(STACK_FRAME MS_1E4216 result, Z size, S64 dflt);
void MS_1E4216__append(STACK_FRAME MS_1E4216 result, MS_1E4216 this, S64 value);
void MS_1E4216__prepend(STACK_FRAME MS_1E4216 result, MS_1E4216 this, S64 value);
void MS_1E4216__appendAll(STACK_FRAME MS_1E4216 result, MS_1E4216 this, MS_1E4216 other);
void MS_1E4216__sub(STACK_FRAME MS_1E4216 result, MS_1E4216 this, S64 value);
void MS_1E4216__removeAll(STACK_FRAME MS_1E4216 result, MS_1E4216 this, MS_1E4216 other);
void MS_1E4216_cprint(MS_1E4216 this, B isOut);
void MS_1E4216_string_(STACK_FRAME String result, MS_1E4216 this);

inline B MS_1E4216__ne(MS_1E4216 this, MS_1E4216 other) {
  return !MS_1E4216__eq(this, other);
}


#ifdef __cplusplus
}
#endif

#endif