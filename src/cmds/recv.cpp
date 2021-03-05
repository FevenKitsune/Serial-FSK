#include "cmds/recv.hpp"

int16_t recv(RFM95 &radio)
{
    String data;
    Serial.println(F("[RECV] Awaiting data recieve..."));
    int16_t state = radio.receive(data);
    if (state == ERR_NONE)
    {
        Serial.print(F("[RECV] "));
        Serial.println(data);
    }
    return state;
}