#include "run.hpp"

uint8_t run(String &serial_data, RFM95 &radio)
{
    // Extract the command provided
    String command = arg(serial_data, 0);
    // Search command and return status code.
    if (command == "echo") return echo();
    if (command == "help") return help();
    if (command == "txpw") return txpw(arg(serial_data, 1).toInt());
    if (command == "send") return send(argToEnd(serial_data, 1), radio);
    return COMMAND_NOT_FOUND;
}