
int potPin = 0;     // This sets a variable Potpin in sinc with pin 0
int motorPin = 5;   // This sets a variable  motorPin in sinc with pin 5
int speed;      // This sets a variable Speed. THis will be used to refer to the signal that the motor pin is givingg
int potVal;  // This sets a variable  Pot val. this will be used to refer to as the value that the potpin is giving
 
void setup() {
    Serial.begin(9600);   // sets the serial monitor
    pinMode(potPin, INPUT);    // sets the potentiometer pin to input
    pinMode(motorPin, OUTPUT);   //sets the motor pin to output
    
}
 
void loop() {
    speed = analogRead(potPin); // sets the variable speed equal to the value being recived from the the potwentiometers pin.
    potVal = map(speed, 0, 1023, 0, 255); //scaleing the valu from the potentiometer 
    analogWrite(motorPin, potVal);  
    Serial.println(potVal);  // printing the value of potrntiometer in the serial moniter.
}                                          
