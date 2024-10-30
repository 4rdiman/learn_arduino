int pinRed = 6;
int pinGreen = 3;
int pinBlue = 5;
String colorPick;

void setup() {
    pinMode(pinRed, OUTPUT);
    pinMode(pinGreen, OUTPUT);
    pinMode(pinBlue, OUTPUT);
    Serial.begin(9600);
}

void loop() {

  colorPick = Serial.readString();
  Serial.print(colorPick);
  if(colorPick == "red\n"){
      analogWrite(pinRed, 255);
      analogWrite(pinGreen, 0);
      analogWrite(pinBlue, 0);
  }

  else if(colorPick == "green\n"){
      analogWrite(pinRed, 0);
      analogWrite(pinGreen, 255);
      analogWrite(pinBlue, 0);
  }

  else if(colorPick == "blue\n"){
      analogWrite(pinRed, 0);
      analogWrite(pinGreen, 0);
      analogWrite(pinBlue, 255);
  }

  else if(colorPick == "cyan\n"){
      analogWrite(pinRed, 0);
      analogWrite(pinGreen, 100);
      analogWrite(pinBlue, 100);
  }

}
