#include "cmds/recv.hpp"

int16_t recv(RFM95 &radio)
{
    String data;
    int16_t state;
    int8_t attempts = 0;
    Serial.println(F("[RECV] Awaiting data recieve..."));
    state = radio.receive(data); // First attempt
    while (state == ERR_RX_TIMEOUT && attempts < RX_ATTEMPT_COUNT)
    {
        state = radio.receive(data);
        attempts++;
    }
    attempts = 0; // Reset attempts number.
    
    if (state == ERR_NONE)
    {
        Serial.print(F("[RECV] "));
        Serial.println(data);
    }
    return state;
}