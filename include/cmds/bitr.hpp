#ifndef BITR_H
#define BITR_H

#include <Arduino.h>
#include <RadioLib.h>
#include "errorcodes.hpp"

#define BITR_MIN 1.2
#define BITR_MAX 300.0

uint8_t bitr(float bitrate, RFM95 &radio);

#endif