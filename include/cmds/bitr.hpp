#ifndef BITR_H
#define BITR_H

#include <Arduino.h>
#include <RadioLib.h>
#include "errorcodes.hpp"

int16_t bitr(float bitrate, RFM95 &radio);

#endif