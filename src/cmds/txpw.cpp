#include "cmds/txpw.hpp"

int16_t txpw(int8_t db, RFM95 &radio)
{
    Serial.print(F("[TXPW] Transmit power set to "));
    Serial.println(db);
    return radio.setOutputPower(db);
}