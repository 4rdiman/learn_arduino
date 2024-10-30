#include <SevSeg.h>

int A = 4;
int B = 2;
int F = 3;

int E = 10;
int D = 9;
int DP = 8;
int C = 7;
int G = 6;

int D1 = 11;
int D2 = 13;
int D3 = 12;
int D4 = 5;

int delayTime = 5;
int buzzPin = A0;
int userInput;

SevSeg sevseg; //Instantiate a seven segment object

byte numDigits = 4;
byte digitPins[] = {D1, D2, D3, D4};
byte segmentPins[] = {A, B, C, D, E, F, G, DP};
bool resistorsOnSegments = true;
byte hardwareConfig = COMMON_CATHODE; // See README.md for options
bool updateWithDelays = false; // Default 'false' is Recommended
bool leadingZeros = false; // Use 'true' if you'd like to keep the leading zeros
bool disableDecPoint = false; // Use 'true' if your decimal point doesn't exist or isn't connected. Then, you only need to specify 7 segmentPins[]

void setup() {

  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments,
  updateWithDelays, leadingZeros, disableDecPoint);
  sevseg.setBrightness(90);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Enter a number (0-9999): ");

  // while disini berfungsi untuk membuat serial monitor menunggu respon dari user
  while(Serial.available() == 0){

  } 

  userInput = Serial.parseInt();

  if(userInput > 0 && userInput <= 9999){
    while(userInput > 0){
      sevseg.setNumber(userInput);

      for(int i = 0; i < 200; i++){
      sevseg.refreshDisplay();
      delay(delayTime);
    }
    userInput--;
    sevseg.refreshDisplay();
    }

    analogWrite(buzzPin, 255);
    delay(5000);
    analogWrite(buzzPin, 0);
    sevseg.blank();

  }

  else{
    Serial.println("You're entering an invalid number!");
  }

}



