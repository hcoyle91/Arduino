#include <NewPing.h>
#define TRIGGER_PIN 11
#define ECHO_PIN 12
#define MAX_DISTANCE 200
int ledpin = 13;
NewPing myHCSR04(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
void setup()
{
Serial.begin(9600);
pinMode(ledpin, OUTPUT);
}

void loop()
{
Serial.println(myHCSR04.ping_cm());
delay(50);
if (myHCSR04.ping_cm() < 5)
{
digitalWrite(ledpin, HIGH);
delay(1000);
digitalWrite(ledpin, LOW);
delay(1000);
}
}
