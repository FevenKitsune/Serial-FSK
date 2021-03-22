#ifndef RECV_H
#define RECV_H

#include <Arduino.h>
#include <RadioLib.h>
#include "errorcodes.hpp"

#define RX_ATTEMPT_COUNT 20

int16_t recv(RFM95 &radio);

#endif