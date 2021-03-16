// Add a button to the morse code setup.
// When the button is pressed the code is sent.  When the 
// button is not pressed the LED remains off.

// 'dit' is 1 unit long
// 'dah' is 3 units long
//  pause between letters is 3 units
//  pause between words is 7 units

#define LED 8
#define BUTTON 10
#define UNIT 250
#define DIT UNIT
#define DAH (UNIT * 3)
#define NEXTLETTER (UNIT * 3)
#define NEXTWORD (UNIT * 7)

void setup() {
  pinMode(LED, OUTPUT);    // LED on pin 8
  pinMode(BUTTON, INPUT);  // button on pin 2
}

void loop() {
  int buttonState = digitalRead(BUTTON);
  if (buttonState == HIGH)
  {
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
  }
}
