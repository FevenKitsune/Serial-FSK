#include "run.hpp"

int16_t run(String &serial_data, RFM95 &radio)
{
    // Extract the command provided
    String command = arg(serial_data, 0);
    // Search command and return status code.
    if (command == "bitr") return bitr(arg(serial_data, 1).toFloat(), radio);
    if (command == "echo") return echo();
    if (command == "fqdv") return fqdv(arg(serial_data, 1).toFloat(), radio);
    if (command == "freq") return freq(arg(serial_data, 1).toFloat(), radio);
    if (command == "help") return help();
    if (command == "recv") return recv(radio);
    if (command == "rxbw") return rxbw(arg(serial_data, 1).toFloat(), radio);
    if (command == "send") return send(argToEnd(serial_data, 1), radio);
    if (command == "txpw") return txpw(arg(serial_data, 1).toInt(), radio);
    return COMMAND_NOT_FOUND;
}