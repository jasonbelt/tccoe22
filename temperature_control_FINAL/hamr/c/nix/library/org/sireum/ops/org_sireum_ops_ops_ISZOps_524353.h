#ifndef SIREUM_H_org_sireum_ops_ops_ISZOps_524353
#define SIREUM_H_org_sireum_ops_ops_ISZOps_524353

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// ops.ISZOps[art.UPort]

#define ops_ISZOps_524353_s_(this) ((IS_820232) &(this)->s)

B ops_ISZOps_524353__eq(ops_ISZOps_524353 this, ops_ISZOps_524353 other);
inline B ops_ISZOps_524353__ne(ops_ISZOps_524353 this, ops_ISZOps_524353 other) {
  return !ops_ISZOps_524353__eq(this, other);
};
void ops_ISZOps_524353_string_(STACK_FRAME String result, ops_ISZOps_524353 this);
void ops_ISZOps_524353_cprint(ops_ISZOps_524353 this, B isOut);

inline B ops_ISZOps_524353__is(STACK_FRAME void* this) {
  return ((ops_ISZOps_524353) this)->type == Tops_ISZOps_524353;
}

inline ops_ISZOps_524353 ops_ISZOps_524353__as(STACK_FRAME void *this) {
  if (ops_ISZOps_524353__is(CALLER this)) return (ops_ISZOps_524353) this;
  sfAbortImpl(CALLER "Invalid cast to ops.ISZOps[art.UPort].");
  abort();
}

void ops_ISZOps_524353_apply(STACK_FRAME ops_ISZOps_524353 this, IS_820232 s);

#ifdef __cplusplus
}
#endif

#endif