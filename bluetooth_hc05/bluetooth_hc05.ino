#include <SoftwareSerial.h>

#define RED 2
#define GREEN 4
#define YELLOW 7


SoftwareSerial Bluetooth(10, 11); // RX, TX untuk HC-05

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  Serial.begin(9600);         // Untuk komunikasi dengan komputer (debugging)
  Bluetooth.begin(9600);      // Mulai komunikasi Bluetooth dengan HC-05
}

void loop() {
  if(Bluetooth.available() > 0){
      String dataBluetooth = Bluetooth.readString();
      dataBluetooth.trim(); // Menghapus karakter ekstra

      if(dataBluetooth == "red"){
        digitalWrite(RED, HIGH);
      }

      else if(dataBluetooth == "green"){
        digitalWrite(GREEN, HIGH);
      }

      else if(dataBluetooth == "yellow"){
        digitalWrite(YELLOW, HIGH);
      }

      else if (dataBluetooth == "alloff"){
        digitalWrite(RED, LOW);
        digitalWrite(GREEN, LOW);
        digitalWrite(YELLOW, LOW);
      }

      else{
        Serial.print(dataBluetooth);
      }
  }
}



