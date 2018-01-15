#include <EEPROM.h>
#include <SPI.h>
#include <GD2UE.h>

void setup()
{
  EEPROM.begin(512);  // ONLY FOR ESP8266
  GD.begin();
}

void loop()
{
  GD.ClearColorRGB(0x103000);
  GD.Clear();
  GD.cmd_text(GD.w / 2, GD.h / 2, 31, OPT_CENTER, "Hello world");
  GD.swap();
}
