#ifndef SIREUM_TYPE_H_t_TemperatureControl_TempUnit_Type
#define SIREUM_TYPE_H_t_TemperatureControl_TempUnit_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// t.TemperatureControl.TempUnit.Type
typedef enum {
  t_TemperatureControl_TempUnit_Type_Fahrenheit = 0,
  t_TemperatureControl_TempUnit_Type_Celsius = 1,
  t_TemperatureControl_TempUnit_Type_Kelvin = 2
} t_TemperatureControl_TempUnit_Type;

inline B t_TemperatureControl_TempUnit_Type__eq(t_TemperatureControl_TempUnit_Type this, t_TemperatureControl_TempUnit_Type other) {
  return this == other;
}

inline B t_TemperatureControl_TempUnit_Type__ne(t_TemperatureControl_TempUnit_Type this, t_TemperatureControl_TempUnit_Type other) {
  return this != other;
}

inline Z t_TemperatureControl_TempUnit_Type__ordinal(t_TemperatureControl_TempUnit_Type this) {
  return (Z) this;
}

inline void t_TemperatureControl_TempUnit_Type_name_(String result, t_TemperatureControl_TempUnit_Type this) {
  switch (this) {
    case t_TemperatureControl_TempUnit_Type_Fahrenheit: String_assign(result, string("Fahrenheit")); return;
    case t_TemperatureControl_TempUnit_Type_Celsius: String_assign(result, string("Celsius")); return;
    case t_TemperatureControl_TempUnit_Type_Kelvin: String_assign(result, string("Kelvin")); return;
  }
}

#ifdef __cplusplus
}
#endif

#endif