#include "cmds/help.hpp"

int16_t help()
{
    // Print information, source, and author information.
    Serial.println(F("Serial-FSK, firmware by William S."));
    Serial.println(F("Interactive wrapper for jgromes/RadioLib"));
    Serial.println(F("Source code: https://github.com/FevenKitsune/Serial-FSK"));
    
    // Print build date.
    Serial.print(F("Build date: "));
    Serial.println(F(__DATE__));
    
    // Print help document.
    Serial.println(F("================================"));
    Serial.println(F("bitr [kbps, float]  Set bitrate in kbps. Range: 1.2≤x≤300.0"));
    Serial.println(F("echo [no arg]       Echo back test data to ensure USB connection is working."));
    Serial.println(F("fqdv [KHz, float]   Set frequency deviation in KHz. Range: x≤200.0"));
    Serial.println(F("freq [MHz, float]   Set carrier frequency in MHz. Range: 862.0≤x≤1020.0"));
    Serial.println(F("help [no arg]       Display this message."));
    Serial.println(F("recv [no arg]       Recieve a message."));
    Serial.println(F("rxbw [KHz, float]   Set FSK reciever bandwidth in KHz. Range: 2.6≤x≤250.0"));
    Serial.println(F("send [msg, String]  Transmit a message over FSK."));
    Serial.println(F("txpw [dBm, int]     Set transmission power in dBm. Range: 2≤x≤17"));
    return ERR_NONE;
}