#include "errorhandler.hpp"

int16_t printError(int16_t errorCode)
{
    Serial.print(F(ERROR_PREFIX));
    switch (errorCode)
    {
    case ERR_NONE:
        break;
    case COMMAND_NOT_FOUND:
        Serial.println(F("Unknown command."));
        break;
    case INVALID_PARAMETER:
        Serial.println(F("Invalid parameters. Please check your inputs."));
        break;
    case NOT_YET_IMPLEMENTED:
        Serial.println(F("This command is not implemented yet."));
        break;
    case ERR_INVALID_FREQUENCY_DEVIATION:
        Serial.println(F("Invalid frequency deviation. Allowed values are dependant on bitrate."));
        break;
    case ERR_INVALID_BIT_RATE:
        Serial.println(F("Invalid bitrate."));
    default:
        Serial.print(F("An unknown error has occured. Code "));
        Serial.println(errorCode);
        break;
    }
    return ERR_NONE;
}