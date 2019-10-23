#include <Wire.h>
#include <LiquidCrystal_I2C.h>
const int buttonPin = 4;
int buttonCounter = 0;
int buttonState = 0;
int bpressed = 0;
// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup()
{
	Serial.begin(9600);
	lcd.init();
	lcd.backlight();
}

void loop()
{
	lcd.setCursor(1, 0);
	lcd.print("hello world ");
	buttonState = digitalRead(buttonPin);
	Serial.print(buttonState);
	if ((buttonState == HIGH) && (bpressed == 0))
	{
		buttonCounter = buttonCounter + 1;
		lcd.print(buttonCounter);
		bpressed = 1;
	}
	if (buttonState == LOW)
	{
		bpressed = 0;
	}
	delay(100);
}
#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7);
 
int potPin = 0;
int ledPin = 9;
int brightness = 0;
 
void setup() {
    pinMode(ledPin, OUTPUT);
 
    lcd.begin(16,2); 
    lcd.setBacklightPin(3,POSITIVE);  // LCD setup
    lcd.setBacklight(HIGH);
    lcd.print("Brightness:");  // Prints word "Brightness" on LCD
 
}
 
void loop() {
    brightness = map(analogRead(potPin), 0, 1023, 255, 0); // Maps 1023 into 255
    analogWrite(ledPin, brightness);  // Fades LED on scale with potentiometer
 
    lcd.setCursor(0, 1); 
    lcd.print(map(brightness, 0, 255, 0, 10)); // Maps 255 to 10 and prints on LCD
    lcd.print("   "); //Clearing the screen
    delay(100);
}
