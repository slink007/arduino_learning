// A slightly more complicated "Hello World" program.
// Instead of blinking an LED on and off this will do so with 
// a Morse Code pattern.  S-O-S

// 'dit' is 1 unit long
// 'dah' is 3 units long
//  pause between letters is 3 units
//  pause between words is 7 units

#define LED 8
#define UNIT 250
#define DIT UNIT
#define DAH (UNIT * 3)
#define NEXTLETTER (UNIT * 3)
#define NEXTWORD (UNIT * 7)

void setup() {
  pinMode(LED, OUTPUT);    // LED on pin 8
}

void loop() {
  // Show 'S'
  digitalWrite(LED, HIGH);
  delay(DIT);
  digitalWrite(LED, LOW);
  delay(UNIT);
  digitalWrite(LED, HIGH);
  delay(DIT);
  digitalWrite(LED, LOW);
  delay(UNIT);
  digitalWrite(LED, HIGH);
  delay(DIT);
  digitalWrite(LED, LOW);
  delay(NEXTLETTER);

  // Show 'O'
  digitalWrite(LED, HIGH);
  delay(DAH);
  digitalWrite(LED, LOW);
  delay(UNIT);
  digitalWrite(LED, HIGH);
  delay(DAH);
  digitalWrite(LED, LOW);
  delay(UNIT);
  digitalWrite(LED, HIGH);
  delay(DAH);
  digitalWrite(LED, LOW);
  delay(UNIT);
  delay(NEXTLETTER);

  // Show 'S'
  digitalWrite(LED, HIGH);
  delay(DIT);
  digitalWrite(LED, LOW);
  delay(UNIT);
  digitalWrite(LED, HIGH);
  delay(DIT);
  digitalWrite(LED, LOW);
  delay(UNIT);
  digitalWrite(LED, HIGH);
  delay(DIT);
  digitalWrite(LED, LOW);
  
  delay(NEXTWORD);
}
