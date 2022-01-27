#ifndef SIREUM_TYPE_H_art_UrgentPortProto
#define SIREUM_TYPE_H_art_UrgentPortProto

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.UrgentPortProto


typedef union art_UrgentPortProto *art_UrgentPortProto;
union art_UrgentPortProto {
  TYPE type;
};

#define DeclNewart_UrgentPortProto(x) union art_UrgentPortProto x = { 0 }

#ifdef __cplusplus
}
#endif

#endif