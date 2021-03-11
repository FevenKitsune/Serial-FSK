#include "cmds/scrc.hpp"

int16_t scrc(bool enableCRC, RFM95 &radio)
{
    return radio.setCRC(enableCRC);
}