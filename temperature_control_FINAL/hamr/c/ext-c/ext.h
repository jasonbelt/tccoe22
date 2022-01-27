#ifndef EXT_H
#define EXT_H

// This file will not be overwritten so is safe to edit

#include <all.h>

static F32 MIN_TEMP = 55.0;
static F32 MAX_TEMP = 100.0;

struct t_TemperatureControl_Temperature_i convertTemperatureToFahrenheit(
    t_TemperatureControl_Temperature_i t);

struct t_TemperatureControl_SetPoint_i convertSetPointToFahrenheit(
    t_TemperatureControl_SetPoint_i t);

struct t_TemperatureControl_Temperature_i createTempInFahrenheit(F32 value);

#endif