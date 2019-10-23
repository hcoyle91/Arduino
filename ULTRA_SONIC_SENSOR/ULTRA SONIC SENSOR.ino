#include <Servo.h>
Servo Servo;
const int trigPin = 7;
const int echoPin = 8;
const int servoPin = 3;
int dist;
int moveServo;
int stopServo;
void setup()
{
	pinMode(trigPin, OUTPUT);
	pinMode(echoPin, INPUT);
	Serial.begin(9600);

Servo.attach(servoPin);

}

void loop()
{
	dist = cmdistance();
	Serial.print("Distance= ");
	Serial.println(dist);
	if (cmdistance() < 5)
		Servo.write(90);
	else
		if (dist < 10)
			Servo.write(180);
	else
		Servo.write(0);
}

int cmdistance()
{
	long duration;
	int distance;
	digitalWrite(trigPin, LOW);
	delayMicroseconds(2);
	digitalWrite(trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(trigPin, LOW);
	duration = pulseIn(echoPin, HIGH);
	distance = duration * 0.034/2;
	return distance;
}
