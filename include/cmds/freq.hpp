#ifndef FREQ_H
#define FREQ_H

#include <Arduino.h>
#include <RadioLib.h>
#include "errorcodes.hpp"

int16_t freq(float freq, RFM95 &radio);

#endif