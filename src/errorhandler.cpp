#include "errorhandler.h"

uint8_t printError(uint8_t errorCode)
{
    switch (errorCode)
    {
    case COMMAND_NOT_FOUND:
        Serial.println(F(GEN_ERROR("Unknown command.")));
        break;
    case RUN_SUCCESS:
        break;
    case INVALID_PARAMETER:
        Serial.println(F(GEN_ERROR("Invalid parameters. Please check your inputs.")));
        break;
    }
}