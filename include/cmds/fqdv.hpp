#ifndef FQDV_H
#define FQDV_H

#include <Arduino.h>
#include <RadioLib.h>
#include "errorcodes.hpp"

int16_t fqdv(float deviation, RFM95 &radio);

#endif