#ifndef TXPW_H
#define TXPW_H

#include <Arduino.h>
#include <RadioLib.h>
#include "errorcodes.hpp"

uint8_t txpw(uint8_t db, RFM95 &radio);

#endif