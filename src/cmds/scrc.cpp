#include "cmds/scrc.hpp"

int16_t scrc(bool enableCRC, RFM95 &radio)
{
    Serial.print(F("[SCRC] CRC set to: "));
    Serial.println(enableCRC);
    return radio.setCRC(enableCRC);
}