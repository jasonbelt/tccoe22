#ifndef SIREUM_TYPE_H_t_TemperatureControl_FanAck_Type
#define SIREUM_TYPE_H_t_TemperatureControl_FanAck_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// t.TemperatureControl.FanAck.Type
typedef enum {
  t_TemperatureControl_FanAck_Type_Ok = 0,
  t_TemperatureControl_FanAck_Type_Error = 1
} t_TemperatureControl_FanAck_Type;

inline B t_TemperatureControl_FanAck_Type__eq(t_TemperatureControl_FanAck_Type this, t_TemperatureControl_FanAck_Type other) {
  return this == other;
}

inline B t_TemperatureControl_FanAck_Type__ne(t_TemperatureControl_FanAck_Type this, t_TemperatureControl_FanAck_Type other) {
  return this != other;
}

inline Z t_TemperatureControl_FanAck_Type__ordinal(t_TemperatureControl_FanAck_Type this) {
  return (Z) this;
}

inline void t_TemperatureControl_FanAck_Type_name_(String result, t_TemperatureControl_FanAck_Type this) {
  switch (this) {
    case t_TemperatureControl_FanAck_Type_Ok: String_assign(result, string("Ok")); return;
    case t_TemperatureControl_FanAck_Type_Error: String_assign(result, string("Error")); return;
  }
}

#ifdef __cplusplus
}
#endif

#endif