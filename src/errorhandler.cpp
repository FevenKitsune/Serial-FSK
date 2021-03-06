#include "errorhandler.hpp"

int16_t printError(int16_t errorCode)
{
    /*
     * If there is an error, print the error prefix to prepare for error printing.
     * Because all function returns are passed through here, this ensures the return
     * code was actually an error.
     */
    if (errorCode != ERR_NONE) Serial.print(F(ERROR_PREFIX));
    
    // Error handling switch statement.
    switch (errorCode)
    {
    /*
     * System error handling.
     * All error codes implemented by the developer are handled and printed here.
     */
    case COMMAND_NOT_FOUND:
        Serial.println(F("Unknown command."));
        break;
    case INVALID_PARAMETER:
        Serial.println(F("Invalid parameters. Please check your inputs."));
        break;
    case NOT_YET_IMPLEMENTED:
        Serial.println(F("This command is not implemented yet."));
        break;

    /*
     * RadioLib error handling.
     * All error codes implemented by RadioLib are handled and printed here.
     */
    case ERR_NONE:
        break;
    case ERR_INVALID_FREQUENCY_DEVIATION:
        Serial.println(F("Invalid frequency deviation. Allowed values are dependant on bitrate."));
        break;
    case ERR_INVALID_BIT_RATE:
        Serial.println(F("Invalid bitrate."));
        break;
    case ERR_INVALID_RX_BANDWIDTH:
        Serial.println(F("Invalid FSK receiver bandwidth."));
        break;
    case ERR_RX_TIMEOUT:
        Serial.println(F("Timeout while waiting for recieve."));
        break;
    case ERR_INVALID_FREQUENCY:
        Serial.println(F("Invalid carrier frequency."));
        break;
    case ERR_INVALID_OUTPUT_POWER:
        Serial.println(F("Invalid transmission power."));
        break;

    /*
     * Unknown error handling.
     * The error has not been handled. Print error code.
     */
    default:
        Serial.print(F("An unknown error has occured. Code "));
        Serial.println(errorCode);
        break;
    }

    /* 
     * Do not return anynthing except ERR_NONE in error handler.
     * If your error handler is throwing an error, God help you.
     */
    return ERR_NONE;
}