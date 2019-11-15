#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7); //sets the coordinates for where the lcd screen will print
 
int potPin = 0;
int ledPin = 9;
int brightness = 0;  // defines the variable brigtness which will
 
void setup() {
   brightness = analogRead(0)  // sets the variable "brigntness" to equal the value readoff of analog pin 0

    pinMode(ledPin, OUTPUT);
 
    lcd.begin(16,2); 
    lcd.setBacklightPin(3,POSITIVE)    // these lines of code sets the back light up
    lcd.setBacklight(HIGH);
    lcd.print("Brightnes")  //this line makes the analog read of pin 0 print on the lcd screen
    lcd.print(brightness)
 

}
