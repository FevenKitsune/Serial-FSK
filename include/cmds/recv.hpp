#ifndef RECV_H
#define RECV_H

#include <Arduino.h>
#include <RadioLib.h>
#include "errorcodes.hpp"

int16_t recv(RFM95 &radio);

#endif