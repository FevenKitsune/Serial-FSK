#include "cmds/send.hpp"

uint8_t send(String data, RFM95 &radio)
{
    int16_t status = radio.transmit(data);
    Serial.print(F("[SEND] "));
    Serial.println(data);
    if (status < 0)
    {
        return RADIOLIB_ERROR;
    } else {
        return RUN_SUCCESS;
    }
}