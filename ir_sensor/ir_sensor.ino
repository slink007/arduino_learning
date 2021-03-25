// This is a basic interface for the Adafruit 1918 which is a board
// that utilizes the GUVA-S12SD infrared sensor.
// The sensor's output is very small (microamps or uA hereafter) so
// the board includes an op-amp to boost the signal.
//
// Vo = 4.3 * uA_output.
//
// Output can also be converted into UV Index by multiplying the
// board's output voltage by 10.
//
// The sensor measures 240 nm up to 370 nm so it covers all of the UV-B 
// spectrum and most of UV-A.

void setup() {
  Serial.begin(9600);
}

void loop() {
  float voltage = analogRead(A0) / 201.4; // Use actual Vcc instead of assuming 5 V
  float sensor = analogRead(A1) * voltage/1023;

  Serial.print("Sensor voltage = ");
  Serial.print(sensor);
  Serial.print(", board voltage = ");
  Serial.print(voltage);
  Serial.print(", UV Index = ");
  Serial.println(sensor * 100);
  delay(1000);
}
