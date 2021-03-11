#ifndef RUN_H
#define RUN_H

#include <Arduino.h>
#include <RadioLib.h>
#include "eval.hpp"
#include "cmds/bitr.hpp"
#include "cmds/echo.hpp"
#include "cmds/fqdv.hpp"
#include "cmds/freq.hpp"
#include "cmds/help.hpp"
#include "cmds/recv.hpp"
#include "cmds/rept.hpp"
#include "cmds/rxbw.hpp"
#include "cmds/scrc.hpp"
#include "cmds/send.hpp"
#include "cmds/txpw.hpp"
#include "errorcodes.hpp"

int16_t run(String &serial_data, RFM95 &radio);

#endif