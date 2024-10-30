#include <Servo.h>
#include <SoftwareSerial.h>

Servo myServo;
SoftwareSerial Bluetooth(10, 11); 

void setup() {
  // put your setup code here, to run once:
  myServo.attach(7);
  Serial.begin(38400);
  Bluetooth.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Bluetooth.available() > 0){
    char dataBluetooth = Bluetooth.read();

    switch(dataBluetooth){
      case '1':
        for(int pos = 0; pos <= 180; pos++){
          myServo.write(pos);
          delay(10);
        }
        break;
      case '0':
      for(int pos = 180; pos >= 0; pos--){
          myServo.write(pos);
          delay(10);
        }
        break;
      default:
        break;

    }


  }

}
