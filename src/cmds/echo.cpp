#include "cmds/echo.hpp"

uint8_t echo()
{
    Serial.println("Hello, world!");
    return RUN_SUCCESS;
}