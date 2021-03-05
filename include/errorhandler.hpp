#ifndef ERRORHANDLER_H
#define ERRORHANDLER_H

#define ERROR_PREFIX "[ERROR] "

#include <Arduino.h>
#include "errorcodes.hpp"
int16_t printError(int16_t errorCode);

#endif