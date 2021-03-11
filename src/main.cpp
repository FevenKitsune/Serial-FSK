#include <Arduino.h>
#include <RadioLib.h>
#include "run.hpp"
#include "errorhandler.hpp"

#define BAUD_RATE 9600
#define STATUS_PIN 13
#define STATUS_LIGHT_ON digitalWrite(STATUS_PIN, HIGH)
#define STATUS_LIGHT_OFF digitalWrite(STATUS_PIN, LOW);

// Default encoding: RADIOLIB_ENCODING_NRZ
// Default sync words: 0x12, 0xAD

// LoRa Module pinouts based on https://learn.adafruit.com/assets/46254
RFM95 fsk = new Module(8, 3, 4);

// Serial string buffer
String serial_data;

void setup()
{
  // Status pin output.
  pinMode(STATUS_PIN, OUTPUT);

  // Begin serial connection at specified preprocessor constant baud rate.
  Serial.begin(BAUD_RATE);

  // A lower timeout reduces command latency.
  Serial.setTimeout(50);

  while (!Serial)
  {
    // Enable status light while waiting for Serial.
    STATUS_LIGHT_ON;
  }
  // Disable status light when Serial is connected.
  STATUS_LIGHT_OFF;

  // Indicate that serial connection was a success. Begin FSK connection.
  Serial.println(F("[INIT] Serial connected!"));
  Serial.println(F("[INIT] Starting RFM95 in FSK mode..."));

  // Enable status light while waiting for FSK module to initialize.
  STATUS_LIGHT_ON;

  // Initialize FSK module and retrieve state value.
  int state = fsk.beginFSK();

  // Disable status light once FSK module has finished initializing.
  STATUS_LIGHT_OFF;

  // Print status returned by fsk.beginFSK();
  Serial.print(F("[INIT] fsk.beginFSK() returned "));
  Serial.println(state);

  // Indicate if state code is a success or an error.
  if (state == ERR_NONE)
  {
    Serial.println(F("[INIT] fsk.beginFSK() success!"));
  }
  else
  {
    Serial.println(F("[INIT] fsk.beginFSK() failed!"));
  }
}

void loop()
{
  // Do nothing unless serial is available.
  if (Serial.available())
  {
    // Get serial input as Arduino String.
    serial_data = Serial.readString();
    // Echo input back to user.
    Serial.print(F("> "));
    Serial.println(serial_data);

    /*
     * Begin execution and error handling subroutines.
     * run(serial_data, fsk) processes the provided serial data, extracting arguments passed, and passing those values to the appropriate command subroutine.
     * This chain of function calls (a call stack) will return a signed 16-bit integer representing a pass or error code, which is passed to printError().
     * printError() translates error codes into human-readable errors and prints them to Serial.
     */
    printError(run(serial_data, fsk));
  }
}