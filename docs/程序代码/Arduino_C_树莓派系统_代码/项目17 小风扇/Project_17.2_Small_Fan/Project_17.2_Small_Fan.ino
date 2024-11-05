//**********************************************************************
/* 
 * Filename    : Small_Fan
 * Description : S8550 triode drives the motor working
 * Auther      : http//www.keyestudio.com
*/

void setup() {
  
  pinMode(15, OUTPUT); // Initialize pin 15 as output.
}

void loop() {
  digitalWrite(15, LOW);   // Turn on the motor (LOW means LOW level)
  delay(4000);              // Delay 4 seconds
  digitalWrite(15, HIGH);    // Raise the voltage and turn off the motor
  delay(2000);              // Delay 2 seconds
}
//**********************************************************************************
