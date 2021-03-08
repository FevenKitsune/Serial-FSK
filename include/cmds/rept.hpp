#ifndef REPT_H
#define REPT_H

#include <Arduino.h>
#include <RadioLib.h>
#include "errorcodes.hpp"

int16_t rept(uint8_t interval, uint16_t millisDelay, String data, RFM95 &radio);

#endif