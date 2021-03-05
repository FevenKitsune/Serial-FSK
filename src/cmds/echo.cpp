#include "cmds/echo.hpp"

uint8_t echo()
{
    Serial.println(F("Hello, world!"));
    return RUN_SUCCESS;
}