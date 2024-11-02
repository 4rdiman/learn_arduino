#include <SoftwareSerial.h>

// the step motor
#define IN1 11
#define IN2 10
#define IN3 9
#define IN4 8

SoftwareSerial myBlue(6, 7); // RX | TX
int dir = 1;

void setup() {
  Serial.begin(38400);
  myBlue.begin(9600);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  
  if(myBlue.available() > 0){
    char dataBlue = myBlue.read();

    switch(dataBlue){
      case '1':
      dir = 1;
      break;
      case '0':
      dir = 0;
      break;
    }
  }
  stepMotor(dir);
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
