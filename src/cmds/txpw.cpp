#include "cmds/txpw.hpp"

int16_t txpw(int8_t db, RFM95 &radio)
{
    if ((db < TXPW_MIN) || (db > TXPW_MAX))
    {
        return INVALID_PARAMETER;
    }
    Serial.print(F("[TXPW] Transmit power set to "));
    Serial.println(db);
    return radio.setOutputPower(db);
}