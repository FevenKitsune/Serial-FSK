#ifndef ERRORHANDLER_H
#define ERRORHANDLER_H

#define GEN_ERROR(e) "[ERROR] " e

#include <Arduino.h>
#include "errorcodes.hpp"
uint8_t printError(uint8_t errorCode);

#endif