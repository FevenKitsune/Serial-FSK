#include "run.hpp"

int16_t run(String &serial_data, RFM95 &radio)
{
    // Extract the command provided
    String command = arg(serial_data, 0);
    // Search command and return status code.
    if ( (command == "bitr") || (command == "bitrate") ) return bitr(arg(serial_data, 1).toFloat(), radio);
    if (command == "echo") return echo();
    if ( (command == "fqdv") || (command == "frequencydeviation") ) return fqdv(arg(serial_data, 1).toFloat(), radio);
    if ( (command == "freq") || (command == "frequency") ) return freq(arg(serial_data, 1).toFloat(), radio);
    if (command == "help") return help();
    if ( (command == "recv") || (command == "receive") ) return recv(radio);
    if ( (command == "rept") || (command == "repeat") ) return rept(arg(serial_data, 1).toInt(), arg(serial_data, 2).toInt(), argToEnd(serial_data, 3), radio);
    if ( (command == "rxbw") || (command == "receivebandwidth") ) return rxbw(arg(serial_data, 1).toFloat(), radio);
    if ( (command == "scrc") || (command == "setcrc") ) return scrc(arg(serial_data, 1).toInt(), radio);
    if ( (command == "send") || (command == "send") ) return send(argToEnd(serial_data, 1), radio);
    if ( (command == "txpw") || (command == "transmissionpower") ) return txpw(arg(serial_data, 1).toInt(), radio);
    return COMMAND_NOT_FOUND;
}