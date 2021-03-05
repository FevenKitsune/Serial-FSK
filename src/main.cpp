#include <Arduino.h>
#include <RadioLib.h>
#include "run.hpp"
#include "errorhandler.hpp"

#define STATUS_PIN 13

// LoRa Module pinouts based on https://learn.adafruit.com/assets/46254
RFM95 fsk = new Module(8, 3, 4);

// Serial string buffer
String serial_data;

void setup()
{
  pinMode(STATUS_PIN, OUTPUT);

  Serial.begin(9600);
  Serial.setTimeout(50);

  while(!Serial)
  {
    // Enable light while waiting for Serial.
    digitalWrite(STATUS_PIN, HIGH);
  }
  // Disable light when Serial is connected.
  digitalWrite(STATUS_PIN, LOW);

  Serial.println(F("[INIT] Serial connected!"));
  Serial.println(F("[INIT] Starting RFM95 in FSK mode..."));

  int state = fsk.beginFSK();
  Serial.print(F("[INIT] fsk.beginFSK() returned "));
  Serial.println(state);

  if (state == ERR_NONE)
  {
    Serial.println(F("[INIT] fsk.beginFSK() success!"));
  }
}

void loop()
{
  // Do nothing unless serial is available.
  if (Serial.available())
  {
    serial_data = Serial.readString();
    // Echo input back to user.
    Serial.print(F("> "));
    Serial.println(serial_data);
    printError(run(serial_data, fsk));
  }
}