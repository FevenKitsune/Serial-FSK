#include "cmds/freq.hpp"

int16_t freq(float freq, RFM95 &radio)
{
    Serial.print(F("[FREQ] Carrier frequency set to "));
    Serial.println(freq);
    return radio.setFrequency(freq);
}