#include "cmds/freq.hpp"

int16_t freq(float freq, RFM95 &radio)
{
    Serial.print(F("[FREQ] Carrier frequency set to "));
    Serial.print(freq);
    Serial.println(" MHz.");
    return radio.setFrequency(freq);
}