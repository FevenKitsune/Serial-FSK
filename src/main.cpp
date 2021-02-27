#include <Arduino.h>
#include <RadioLib.h>

// LoRa Module pinouts based on https://learn.adafruit.com/assets/46254
RFM95 fsk = new Module(8, 3, 4);

// Serial string buffer
String serial_data;

void setup()
{
  Serial.begin(9600);

  int state = fsk.beginFSK();
  Serial.print(F("fsk.beginFSK() returned "));
  Serial.println(state);

  if (state == ERR_NONE)
  {
    Serial.println(F("fsk.beginFSK() success!"));
  }
}

void loop()
{
  // Do nothing unless serial is available.
  if (Serial.available())
  {
    serial_data = Serial.readString();
    // Echo input back to user.
    Serial.println("> " + serial_data);
  }
}