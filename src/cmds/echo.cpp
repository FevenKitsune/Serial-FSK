#include "cmds/echo.hpp"

int16_t echo()
{
    Serial.println(F("Hello, world!"));
    return ERR_NONE;
}