#ifndef ERRORHANDLER_H
#define ERRORHANDLER_H

#define ERROR_PREFIX "[ERROR] "

#include <Arduino.h>
#include "errorcodes.hpp"
uint8_t printError(uint8_t errorCode);

#endif