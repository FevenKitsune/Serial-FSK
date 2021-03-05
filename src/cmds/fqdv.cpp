#include "cmds/fqdv.hpp"

int16_t fqdv(float deviation, RFM95 &radio)
{
    if ((deviation < FQDV_MIN) || (deviation > FQDV_MAX))
    {
        return INVALID_PARAMETER;
    }
    switch (radio.setFrequencyDeviation(deviation))
    {
    case ERR_NONE:
        Serial.print(F("[FQDV] deviation set to "));
        Serial.print(deviation);
        Serial.print(F(" kbps"));
        return RUN_SUCCESS;
    case:
        return
    }

    if (status < 0)
    {
        return RADIOLIB_ERROR;
    }
    else
    {
        return RUN_SUCCESS;
    }
}