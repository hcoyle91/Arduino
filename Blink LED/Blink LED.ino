


int led = 9;         
int brightness = 0;  
int fadeAmount = 5;   
 


void setup() {
  Serial.begin(9600);  //sets up the serial moniter
  pinMode(led, OUTPUT); 
}


void loop() {

  analogWrite(led, brightness);  //this send the led the siganl that the variable brightness is recieving

  
  brightness = brightness + fadeAmount; //


  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;  
  



  }
 
  delay(50);

   Serial.println(brightness); //prints the brightness value on the serial moniter

}
