#include "run.h"

uint8_t run(String &input)
{
    // Extract the command provided
    String command = arg(input, 0);
    // Search command and return status code.
    if (command == "echo") return echo();
    if (command == "help") return help();
    if (command == "txpw") return txpw(arg(input, 1).toInt());
    return COMMAND_NOT_FOUND;
}