#include "cmds/rxbw.hpp"

int16_t rxbw(float bw, RFM95 &radio)
{
    Serial.print(F("[RXBW] FSK receiver bandwidth set to "));
    Serial.print(bw);
    Serial.println(F(" KHz."));
    return radio.setRxBandwidth(bw);
}