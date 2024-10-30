#define IN1 11
#define IN2 10
#define IN3 9
#define IN4 8

void setup() {
  // Mengatur pin sebagai output
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  // Memutar motor searah jarum jam
  for (int i = 0; i < 256; i++) { // 512 langkah = 1 putaran penuh
    stepMotor(1);
  }
  
  delay(1000); // Jeda 1 detik
  
  // Memutar motor berlawanan arah jarum jam
  for (int i = 0; i < 256; i++) {
    stepMotor(-1);
  }
  
  delay(1000); // Jeda 1 detik
}

void stepMotor(int direction) {
  // Jika direction = 1, searah jarum jam; jika -1, berlawanan arah
  if (direction == 1) {
    // Urutan untuk gerakan searah jarum jam
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    delay(2);
    
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    delay(2);
    
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    delay(2);
    
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    delay(2);
  } else {
    // Urutan untuk gerakan berlawanan arah jarum jam
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    delay(2);
    
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    delay(2);
    
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    delay(2);
    
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    delay(2);
  }
}