int pinSetup = A5;
float calcVal;
void setup() {
  // put your setup code here, to run once:
  pinMode(pinSetup, INPUT);
  Serial.begin(9600);
}

void loop() {
  calcVal = (5.0/1023.0) * (analogRead(pinSetup));
  Serial.println(calcVal);
  delay(500);
}
