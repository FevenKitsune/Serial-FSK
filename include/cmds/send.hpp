#ifndef SEND_H
#define SEND_H

#include <Arduino.h>
#include <RadioLib.h>
#include "errorcodes.hpp"

uint8_t send(String data, RFM95 &radio);

#endif