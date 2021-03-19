// The outer legs of a 10 k-ohm potentiomer are
// connected across 5V and Gnd.  The wiper is 
// connected to A0.
//
// An LED is connected on pin 9.  Pin 9 is one of
// the pins with a ~ symbol and therefore it is
// capable of PWM output.
//
// We will read the potentiometer position and use
// PWM to increase or decrease the LED brightness.

#define LED 9
#define POT A0

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  int mapped = map(analogRead(POT), 0, 1023, 0, 255);
  // Mapping is required since analogRead can generate a number
  // from 0 to 1023 but analogWrite can only output 0 to 255.
  // Mapping scales the input value so it fits the output.
  
  analogWrite(LED, mapped);
  // Yes, we're using an analog write command on a digital pin.
  // Ain't Arduino terminology great?
}
