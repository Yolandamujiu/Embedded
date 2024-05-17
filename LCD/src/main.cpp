#include <Arduino.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
void setup()
{
  lcd.begin(16, 2);
  lcd.print("hello,world!");
  lcd.setCursor(0, 1);
  lcd.print("sx");
}

void loop()
{
  lcd.setCursor(4, 1);
  lcd.print(millis() / 1000);
}
