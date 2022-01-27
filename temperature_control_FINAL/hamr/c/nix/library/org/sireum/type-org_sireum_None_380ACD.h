#ifndef SIREUM_TYPE_H_org_sireum_None_380ACD
#define SIREUM_TYPE_H_org_sireum_None_380ACD

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// None[t.TemperatureControl.FanCmd.Type]

typedef struct None_380ACD *None_380ACD;
struct None_380ACD {
  TYPE type;
};

#define DeclNewNone_380ACD(x) struct None_380ACD x = { .type = TNone_380ACD }

#ifdef __cplusplus
}
#endif

#endif