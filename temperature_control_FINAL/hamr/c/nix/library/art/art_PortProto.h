#ifndef SIREUM_H_art_PortProto
#define SIREUM_H_art_PortProto

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.PortProto

#define art_PortProto__eq(this, other) Type__eq(this, other)
#define art_PortProto__ne(this, other) (!Type__eq(this, other))
#define art_PortProto_cprint(this, isOut) Type_cprint(this, isOut)
B art_PortProto__is(STACK_FRAME void *this);
art_PortProto art_PortProto__as(STACK_FRAME void *this);
inline void art_PortProto_string_(STACK_FRAME String result, art_PortProto this) {
  Type_string_(CALLER result, this);
}

Z art_PortProto_id_(STACK_FRAME art_PortProto this);

#ifdef __cplusplus
}
#endif

#endif