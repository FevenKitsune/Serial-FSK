#ifndef ERRORHANDLER_H
#define ERRORHANDLER_H


#include <Arduino.h>
#include <RadioLib.h>
#include "errorcodes.hpp"

#define ERROR_PREFIX "[ERROR] "

int16_t printError(int16_t errorCode);

#endif