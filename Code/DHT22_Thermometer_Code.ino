#include <LiquidCrystal.h>
#include "ABlocks_DHT.h"

LiquidCrystal lcd(12,11,5,4,3,2);

DHT dhtA1(A1,DHT22);

void setup()
{
  lcd.begin(16, 2);
Serial.begin(9600);
pinMode(A1, INPUT);
dhtA1.begin();

    lcd.setCursor(4, 0);
    lcd.print(String("DHT22"));
    lcd.setCursor(0, 1);
    lcd.print(String("Thermometer "));
    delay(4000);
    lcd.clear();
}

void loop()
{
    delay(500);
    Serial.println(dhtA1.readTemperature());
    lcd.setCursor(0, 0);
    lcd.print(String("Temp:"));
    lcd.setCursor(6, 0);
    lcd.print(dhtA1.readTemperature());
    lcd.setCursor(12, 0);
    lcd.print(String("'C"));
    lcd.setCursor(0, 1);
    lcd.print(String("Humidity:"));
    lcd.setCursor(10, 1);
    lcd.print(dhtA1.readHumidity());
    lcd.setCursor(15, 1);
    lcd.print(String("%"));
  
}
