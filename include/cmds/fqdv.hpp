#ifndef FQDV_H
#define FQDV_H

#include <Arduino.h>
#include <RadioLib.h>
#include "errorcodes.hpp"

#define FQDV_MIN 0.0
#define FQDV_MAX 200.0

int16_t fqdv(float deviation, RFM95 &radio);

#endif