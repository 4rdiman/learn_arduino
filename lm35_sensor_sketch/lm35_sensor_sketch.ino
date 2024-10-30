int pinSetup = A2;
const float scale_f = 0.01;
float Temp_C;
float Temp_F;
float Temp_K;
float readVal;
float calcVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinSetup, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(pinSetup);
  calcVal = readVal * (5.0/1023.0);

  // calculate the temperature in Celsius
  Temp_C = calcVal / scale_f;

  // convert the degree from celsius to Fahrenheit
  Temp_F = (Temp_C * (9.0/5.0)) + 32.0;

  // Convert the the degree from celsius to Kelvin
  Temp_K = Temp_C + 275.15;
  
  // print celsius degree
  Serial.print("C:");
  Serial.println(Temp_C);
  delay(500);

  // print Fahrenheit degree
  Serial.print("F:");
  Serial.println(Temp_F);
  delay(500);

  // print celsius degree
  Serial.print("K:");
  Serial.println(Temp_K);
  delay(500);
  
}
