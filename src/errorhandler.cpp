#include "errorhandler.hpp"

int16_t printError(uint8_t errorCode)
{
    Serial.print(F(ERROR_PREFIX));
    switch (errorCode)
    {
    case COMMAND_NOT_FOUND:
        Serial.println(F("Unknown command."));
        break;
    case RUN_SUCCESS:
        break;
    case INVALID_PARAMETER:
        Serial.println(F("Invalid parameters. Please check your inputs."));
        break;
    case NOT_YET_IMPLEMENTED:
        Serial.println(F("This command is not implemented yet."));
        break;
    case RADIOLIB_ERROR:
        Serial.println(F("RadioLib encountered an error. Check your code."));
        break;
    }
    return RUN_SUCCESS;
}