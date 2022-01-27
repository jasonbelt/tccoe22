#ifndef SIREUM_TYPE_H_org_sireum_Tuple2_66F7BA
#define SIREUM_TYPE_H_org_sireum_Tuple2_66F7BA

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// (art.UPort, art.UPort)
#include <type-art_UPort.h>
#include <type-art_UPort.h>

typedef struct Tuple2_66F7BA *Tuple2_66F7BA;
struct Tuple2_66F7BA {
  TYPE type;
  union art_UPort _1;
  union art_UPort _2;
};

#define DeclNewTuple2_66F7BA(x) struct Tuple2_66F7BA x = { .type = TTuple2_66F7BA }
#define Tuple2_66F7BA_size(this) Z_C(2)

#ifdef __cplusplus
}
#endif

#endif