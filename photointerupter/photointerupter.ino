const byte ledPin = 13;       // Defines the led pin as pin 13
const byte interruptPin = 2;   // Defines the photo interupter pin as pin 2
volatile byte state = LOW;       

void setup() {
  pinMode(ledPin, OUTPUT);      // sets the variable "ledPin" pin to OUTPUT
  pinMode(interruptPin, INPUT_PULLUP);    
  attachInterrupt(digitalPinToInterrupt(interruptPin), blink, CHANGE); 
}

void loop() {
  digitalWrite(ledPin, state);  // makes the ledpin give the signal of a variable calledd state
Serial.println(state); // prints state in the serial moniter

}

void blink() {    // THis defines the function known as blink which allows the photointerupter to read signal faster without delay.
  state = !state;
}
