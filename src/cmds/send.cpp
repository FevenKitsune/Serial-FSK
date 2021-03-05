#include "cmds/send.hpp"

int16_t send(String data, RFM95 &radio)
{
    Serial.print(F("[SEND] "));
    Serial.println(data);
    return radio.transmit(data);
}