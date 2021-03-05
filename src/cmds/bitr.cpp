#include "cmds/bitr.hpp"

int16_t bitr(float bitrate, RFM95 &radio)
{
    if ((bitrate < BITR_MIN) || (bitrate > BITR_MAX))
    {
        return INVALID_PARAMETER;
    }
    Serial.print(F("[BITR] Bitrate set to "));
    Serial.print(bitrate);
    Serial.print(F(" kbps"));
    return radio.setBitRate(bitrate);
}