#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7);
 
int potPin = 0;
int ledPin = 9;
int brightness = 0;
 
void setup() {
   brightness = analogRead(0)

    pinMode(ledPin, OUTPUT);
 
    lcd.begin(16,2); 
    lcd.setBacklightPin(3,POSITIVE)
    lcd.setBacklight(HIGH);
    lcd.print("Brightnes")
    lcd.print(brightness)
 

}