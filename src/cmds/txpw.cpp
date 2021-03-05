#include "cmds/txpw.hpp"

uint8_t txpw(int8_t db, RFM95 &radio)
{
    if ((db < TXPW_MIN) || (db > TXPW_MAX))
    {
        return INVALID_PARAMETER;
    }
    int16_t status = radio.setOutputPower(db);
    Serial.print(F("[TXPW] Transmit power set to "));
    Serial.println(db);
    if (status < 0)
    {
        return RADIOLIB_ERROR;
    }
    else
    {
        return RUN_SUCCESS;
    }
}