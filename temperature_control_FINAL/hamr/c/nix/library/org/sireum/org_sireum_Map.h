#ifndef SIREUM_H_org_sireum_Map
#define SIREUM_H_org_sireum_Map

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void Map_empty_595DD7(STACK_FRAME Map_9C6840 result);

void Map_9C6840__add_(STACK_FRAME Map_9C6840 result, Map_9C6840 this, Tuple2_4DFC06 p);

B Map_9C6840_contains_(STACK_FRAME Map_9C6840 this, Z key);

void Map_9C6840_get_(STACK_FRAME Option_376396 result, Map_9C6840 this, Z key);

Z Map_9C6840_indexOf_(STACK_FRAME Map_9C6840 this, Z key);

void Map_9C6840__sub_(STACK_FRAME Map_9C6840 result, Map_9C6840 this, Tuple2_4DFC06 p);

#ifdef __cplusplus
}
#endif

#endif