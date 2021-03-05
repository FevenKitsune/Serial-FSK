#include "cmds/bitr.hpp"

int16_t bitr(float bitrate, RFM95 &radio)
{
    if ((bitrate < BITR_MIN) || (bitrate > BITR_MAX))
    {
        return INVALID_PARAMETER;
    }
    int16_t status = radio.setBitRate(bitrate);
    Serial.print(F("[BITR] Bitrate set to "));
    Serial.print(bitrate);
    Serial.print(F(" kbps"));
    if (status < 0)
    {
        return RADIOLIB_ERROR;
    }
    else
    {
        return RUN_SUCCESS;
    }
}