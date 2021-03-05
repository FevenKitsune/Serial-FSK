#include "cmds/fqdv.hpp"

int16_t fqdv(float deviation, RFM95 &radio)
{
    Serial.print(F("[FQDV] Deviation set to "));
    Serial.print(deviation);
    Serial.println(F(" kHz"));
    return radio.setFrequencyDeviation(deviation);
}