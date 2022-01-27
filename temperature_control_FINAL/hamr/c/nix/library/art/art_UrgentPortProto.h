#ifndef SIREUM_H_art_UrgentPortProto
#define SIREUM_H_art_UrgentPortProto

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.UrgentPortProto

#define art_UrgentPortProto__eq(this, other) Type__eq(this, other)
#define art_UrgentPortProto__ne(this, other) (!Type__eq(this, other))
#define art_UrgentPortProto_cprint(this, isOut) Type_cprint(this, isOut)
B art_UrgentPortProto__is(STACK_FRAME void *this);
art_UrgentPortProto art_UrgentPortProto__as(STACK_FRAME void *this);
inline void art_UrgentPortProto_string_(STACK_FRAME String result, art_UrgentPortProto this) {
  Type_string_(CALLER result, this);
}

Z art_UrgentPortProto_urgency_(STACK_FRAME art_UrgentPortProto this);

Z art_UrgentPortProto_id_(STACK_FRAME art_UrgentPortProto this);

#ifdef __cplusplus
}
#endif

#endif