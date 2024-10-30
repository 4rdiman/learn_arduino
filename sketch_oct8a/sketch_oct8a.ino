int analogDigitalPin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(analogDigitalPin, OUTPUT);

}

void loop() {
  //put your main code here, to run repeatedly:
  analogWrite(analogDigitalPin, 255);
  delay(1000);
  analogWrite(analogDigitalPin, 40);
  delay(1000);

  // digitalWrite(analogDigitalPin, HIGH);

}
