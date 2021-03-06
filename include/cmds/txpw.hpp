#ifndef TXPW_H
#define TXPW_H

#include <Arduino.h>
#include <RadioLib.h>
#include "errorcodes.hpp"

int16_t txpw(int8_t db, RFM95 &radio);

#endif