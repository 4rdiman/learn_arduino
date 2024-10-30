#define COL4 4
#define COL6 3
#define COL1 2
#define COL7 1
#define COL8 0
#define COL2 7
#define COL3 6
#define COL5 5

#define ROW1 8
#define ROW4 9
#define ROW2 10
#define ROW3 11
#define ROW6 A0
#define ROW8 12
#define ROW7 13 
#define ROW5 A1

void setup() {
  // put your setup code here, to run once:
  pinMode(COL1, OUTPUT);
  pinMode(COL2, OUTPUT);
  pinMode(COL3, OUTPUT);
  pinMode(COL4, OUTPUT);
  pinMode(COL5, OUTPUT);
  pinMode(COL6, OUTPUT);
  pinMode(COL7, OUTPUT);
  pinMode(COL8, OUTPUT);

  pinMode(ROW1, OUTPUT);
  pinMode(ROW2, OUTPUT);
  pinMode(ROW3, OUTPUT);
  pinMode(ROW4, OUTPUT);
  pinMode(ROW5, OUTPUT);
  pinMode(ROW6, OUTPUT);
  pinMode(ROW7, OUTPUT);
  pinMode(ROW8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(COL1, LOW);
  digitalWrite(COL2, LOW);
  digitalWrite(COL3, LOW);
  digitalWrite(COL4, LOW);
  digitalWrite(COL5, LOW);
  digitalWrite(COL6, LOW);
  digitalWrite(COL7, LOW);
  digitalWrite(COL8, LOW);

  analogWrite(ROW6, 255);
  analogWrite(ROW5, 255);
  digitalWrite(ROW1, HIGH);
  digitalWrite(ROW2, HIGH);
  digitalWrite(ROW3, HIGH);
  digitalWrite(ROW4, HIGH);
  digitalWrite(ROW7, HIGH);
  digitalWrite(ROW8, HIGH);

}
