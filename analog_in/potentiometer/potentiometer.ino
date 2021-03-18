// The outer legs of a 10 k-ohm potentiomer are
// connected across 5V and Gnd.  The wiper is 
// connected to A0.

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(A0));
}
