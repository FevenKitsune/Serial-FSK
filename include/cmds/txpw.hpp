#ifndef TXPW_H
#define TXPW_H

#include <Arduino.h>
#include <RadioLib.h>
#include "errorcodes.hpp"

#define TXPW_MIN 2
#define TXPW_MAX 17

int16_t txpw(int8_t db, RFM95 &radio);

#endif