#ifndef RUN_H
#define RUN_H

#include <Arduino.h>
#include "eval.h"
#include "cmds/echo.h"
#include "cmds/help.h"
#include "cmds/txpw.h"
#include "directives.h"

uint8_t run(String &input);

#endif