/*
 * Rad Pro
 * Battery
 *
 * (C) 2022-2024 Gissio
 *
 * License: MIT
 */

#if !defined(POWER_H)
#define POWER_H

#include <stdbool.h>
#include <stdint.h>

#include "view.h"

typedef enum
{
    POWERSTATE_ON,
    POWERSTATE_OFF_REQUESTED,
    POWERSTATE_OFF,
} PowerState;

extern const View batteryTypeMenuView;

void initPower(void);
void initPowerController(void);

void setPower(bool value);

int8_t getDeviceBatteryLevel(void);

bool isDevicePowered(void);
bool isBatteryCharging(void);

#endif
