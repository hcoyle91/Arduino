
int potPin = 0;
int motorPin = 5;
int speed;
int potVal;
 
void setup() {
    Serial.begin(9600);
    pinMode(potPin, INPUT);
    pinMode(motorPin, OUTPUT);
    
}
 
void loop() {
    speed = analogRead(potPin);
    potVal = map(speed, 0, 1023, 0, 255);
    analogWrite(motorPin, potVal);
    Serial.println(potVal); 
}                                          