// variables is using to reference data
int delayTime = 5000;
int digitalPin7_hijau = 7;
int digitalPin4_kuning = 4;
int digitalPin1_merah = 1;


void setup() {
  // put your setup code here, to run once:
  pinMode(digitalPin7_hijau, OUTPUT);
  pinMode(digitalPin4_kuning, OUTPUT);
  pinMode(digitalPin1_merah, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // hijau
  digitalWrite(digitalPin7_hijau, HIGH); // high means 5v
  delay(delayTime);
  digitalWrite(digitalPin7_hijau, LOW); // low means 0v, turn off

  // Kuning
  digitalWrite(digitalPin4_kuning, HIGH);
  delay(1000);
  digitalWrite(digitalPin4_kuning, LOW);

  // Merah
  digitalWrite(digitalPin1_merah, HIGH);
  delay(delayTime);
  digitalWrite(digitalPin1_merah, LOW);
  
}
