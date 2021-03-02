#ifndef RUN_H
#define RUN_H

#include <Arduino.h>
#include "eval.hpp"
#include "cmds/echo.hpp"
#include "cmds/help.hpp"
#include "cmds/txpw.hpp"
#include "errorcodes.hpp"

uint8_t run(String &input);

#endif