#include <ext.h>

// This file will not be overwritten so is safe to edit

// add c extension code here

struct t_TemperatureControl_Temperature_i convertTemperatureToFahrenheit(
    t_TemperatureControl_Temperature_i t){

  struct t_TemperatureControl_Temperature_i ret = *t;

  if(t->unit == t_TemperatureControl_TempUnit_Type_Celsius) {
    ret.degrees = t->degrees * 9.0 / 5.0 + 32.0;
  }
  else if(t->unit == t_TemperatureControl_TempUnit_Type_Kelvin) {
    ret.degrees = t->degrees * 9.0 / 5.0 - 459.67;
  }

  ret.unit = t_TemperatureControl_TempUnit_Type_Fahrenheit;

  return ret;
}

struct t_TemperatureControl_SetPoint_i convertSetPointToFahrenheit(
    t_TemperatureControl_SetPoint_i t){

  struct t_TemperatureControl_Temperature_i low = convertTemperatureToFahrenheit(&t->low);
  struct t_TemperatureControl_Temperature_i high = convertTemperatureToFahrenheit(&t->high);

  DeclNewt_TemperatureControl_SetPoint_i(ret);
  ret.low = low;
  ret.high = high;

  return *t;
}

struct t_TemperatureControl_Temperature_i createTempInFahrenheit(F32 value) {
  DeclNewt_TemperatureControl_Temperature_i(ret);
  ret.degrees = value;
  ret.unit = t_TemperatureControl_TempUnit_Type_Fahrenheit;
  return ret;
}