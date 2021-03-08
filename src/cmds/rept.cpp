#include "cmds/rept.hpp"

int16_t rept(uint8_t interval, uint16_t millisDelay, String data, RFM95 &radio)
{
    int16_t status;
    for (uint8_t i = 0; i < interval; i++)
    {
        Serial.print(F("[REPT] ["));
        Serial.print(i+1);
        Serial.print(F("/"));
        Serial.print(interval);
        Serial.print(F("] "));
        Serial.println(data);
        status = radio.transmit(data);
        if (status != ERR_NONE)
        {
            break;
        }
        delay(millisDelay);
    }
    return status;
}