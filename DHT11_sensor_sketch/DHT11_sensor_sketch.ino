#include <DHT.h>
#include <DHT_U.h>

#define dhtType DHT11
#define dhtPin 2

DHT HT(dhtPin, dhtType);
float humidity;
float tempC;
float tempF;
float tempK;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  HT.begin();

}

void loop() {
  // put your main code here, to run repeatedly:

  // using the HT library to read humidity and temperature in celsius
  humidity = HT.readHumidity();
  tempC = HT.readTemperature();

  // convert the celsius to Fahrenheit and Kelvin
  tempF = (tempC * (9.0/5.0)) + 32.0;
  tempK = tempC + 275.15;

  // Display celsius degree
  Serial.print("Temp. C: ");
  Serial.println(tempC);
  delay(500);

  // Display Fahrenheit degree
  Serial.print("Temp. F: ");
  Serial.println(tempF);
  delay(500);

  // Display Kelvin degree
  Serial.print("Temp. K: ");
  Serial.println(tempK);
  delay(500);

  // Display Humidity
  Serial.print("Humid: ");
  Serial.println(humidity);
  delay(500);

}
