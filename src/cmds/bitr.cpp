#include "cmds/bitr.hpp"

int16_t bitr(float bitrate, RFM95 &radio)
{
    Serial.print(F("[BITR] Bitrate set to "));
    Serial.print(bitrate);
    Serial.println(F(" kbps."));
    return radio.setBitRate(bitrate);
}