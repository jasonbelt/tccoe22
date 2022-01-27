#ifndef SIREUM_TYPE_H_t_TemperatureControl_FanCmd_Type
#define SIREUM_TYPE_H_t_TemperatureControl_FanCmd_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// t.TemperatureControl.FanCmd.Type
typedef enum {
  t_TemperatureControl_FanCmd_Type_On = 0,
  t_TemperatureControl_FanCmd_Type_Off = 1
} t_TemperatureControl_FanCmd_Type;

inline B t_TemperatureControl_FanCmd_Type__eq(t_TemperatureControl_FanCmd_Type this, t_TemperatureControl_FanCmd_Type other) {
  return this == other;
}

inline B t_TemperatureControl_FanCmd_Type__ne(t_TemperatureControl_FanCmd_Type this, t_TemperatureControl_FanCmd_Type other) {
  return this != other;
}

inline Z t_TemperatureControl_FanCmd_Type__ordinal(t_TemperatureControl_FanCmd_Type this) {
  return (Z) this;
}

inline void t_TemperatureControl_FanCmd_Type_name_(String result, t_TemperatureControl_FanCmd_Type this) {
  switch (this) {
    case t_TemperatureControl_FanCmd_Type_On: String_assign(result, string("On")); return;
    case t_TemperatureControl_FanCmd_Type_Off: String_assign(result, string("Off")); return;
  }
}

#ifdef __cplusplus
}
#endif

#endif