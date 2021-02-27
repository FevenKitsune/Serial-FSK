#include "cmds/echo.h"

uint8_t echo()
{
    Serial.println("Hello, world!");
    return RUN_SUCCESS;
}