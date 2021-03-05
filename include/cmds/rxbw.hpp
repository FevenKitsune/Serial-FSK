#ifndef RXBW_H
#define RXBW_H

#include <Arduino.h>
#include <RadioLib.h>
#include "errorcodes.hpp"

int16_t rxbw(float bw, RFM95 &radio);

#endif