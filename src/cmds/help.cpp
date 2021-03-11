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
    Serial.println(F("bitr [kbps, float]\n  Set bitrate in kbps. Range: 1.2≤x≤300.0"));
    Serial.println(F("echo [no arg]\n  Echo back test data to ensure USB connection is working."));
    Serial.println(F("fqdv [KHz, float]\n  Set frequency deviation in KHz. Range: x≤200.0"));
    Serial.println(F("freq [MHz, float]\n  Set carrier frequency in MHz. Range: 862.0≤x≤1020.0"));
    Serial.println(F("help [no arg]\n  Display this message."));
    Serial.println(F("recv [no arg]\n  Recieve a message."));
    Serial.println(F("rept [#, int] [ms, int] [msg, String]\n  Send a message # number of times, with a ms delay between each transmission."));
    Serial.println(F("rxbw [KHz, float]\n  Set FSK reciever bandwidth in KHz. Range: 2.6≤x≤250.0"));
    Serial.println(F("scrc [CRCenable, bool]\n  Enable or disable CRC. Range: 0≤x≤1"));
    Serial.println(F("send [msg, String]\n  Transmit a message over FSK."));
    Serial.println(F("txpw [dBm, int]\n  Set transmission power in dBm. Range: 2≤x≤17"));
    return ERR_NONE;
}