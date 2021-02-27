#include "run.h"

uint8_t run(String &input)
{
    // Extract the command provided
    String command = arg(input, 0);
    // Search command and return status code.
    if (command == "echo") return echo();
    return COMMAND_NOT_FOUND;
}