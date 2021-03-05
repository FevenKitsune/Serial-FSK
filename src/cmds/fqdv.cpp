#include "cmds/fqdv.hpp"

int16_t fqdv(float deviation, RFM95 &radio)
{
    if ((deviation < FQDV_MIN) || (deviation > FQDV_MAX))
    {
        return INVALID_PARAMETER;
    }
    Serial.print(F("[FQDV] deviation set to "));
    Serial.print(deviation);
    Serial.print(F(" kbps"));
    return radio.setFrequencyDeviation(deviation);
}