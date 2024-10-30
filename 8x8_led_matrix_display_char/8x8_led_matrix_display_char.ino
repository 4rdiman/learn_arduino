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

int delaytime = 100;
const byte rows[] = {
  ROW1, ROW2, ROW3, ROW4, ROW5, ROW6, ROW7, ROW8
};

byte star1[] = {B00000110, B11000010, B10100100, B00011000, B00011000, B00100101, B01000011, B01100000};
byte star2[] = {B00110000, B00100000, B00100111, B00011001, B10011000, B11100100, B00000100, B00001100};
byte star3[] = {B00000110, B10001000, B10010000, B01011100, B00111010, B00001001, B00010001, B01100000};
byte ALL[] = {B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111};
byte EX[] = {B00000000, B00010000, B00010000, B00010000, B00010000, B00000000, B00010000, B00000000};
byte A[] = {0b00000000,0b00111100,0b01100110,0b01100110,0b01111110,0b01100110,0b01100110,0b01100110};
byte B[] = {B01111000, B01001000, B01001000, B01110000, B01001000, B01000100, B01000100, B01111100};
byte C[] = {B00000000, B00011110, B00100000, B01000000, B01000000, B01000000, B00100000, B00011110};
byte D[] = {B00000000, B00111000, B00100100, B00100010, B00100010, B00100100, B00111000, B00000000};

byte E[] = {B00000000, B00111100, B00100000, B00111000, B00100000, B00100000, B00111100, B00000000};

byte F[] = {0b00000000,0b00111110,0b00100000,0b00100000,0b00111100,0b00100000,0b00100000,0b00100000};
byte G[] = {B00000000, B00111110, B00100000, B00100000, B00101110, B00100010, B00111110, B00000000};
byte H[] = {B00000000, B00100100, B00100100, B00111100, B00100100, B00100100, B00100100, B00000000};
byte I[] = {B00000000, B00111000, B00010000, B00010000, B00010000, B00010000, B00111000, B00000000};
byte J[] = {B00000000, B00011100, B00001000, B00001000, B00001000, B00101000, B00111000, B00000000};
byte K[] = {B00000000, B00100100, B00101000, B00110000, B00101000, B00100100, B00100100, B00000000};
byte L[] = {B00000000, B00100000, B00100000, B00100000, B00100000, B00100000, B00111100, B00000000};
byte M[] = {B00000000, B00000000, B01000100, B10101010, B10010010, B10000010, B10000010, B00000000};
byte N[] = {B00000000, B00100010, B00110010, B00101010, B00100110, B00100010, B00000000, B00000000};
byte O[] = {B00000000, B00111100, B01000010, B01000010, B01000010, B01000010, B00111100, B00000000};
byte P[] = {B00000000, B00111000, B00100100, B00100100, B00111000, B00100000, B00100000, B00000000};
byte Q[] = {B00000000, B00111100, B01000010, B01000010, B01000010, B01000110, B00111110, B00000001};
byte R[] = {B00000000, B00111000, B00100100, B00100100, B00111000, B00100100, B00100100, B00000000};
byte S[] = {B00000000, B00111100, B00100000, B00111100, B00000100, B00000100, B00111100, B00000000};
byte T[] = {B00000000, B01111100, B00010000, B00010000, B00010000, B00010000, B00010000, B00000000};
byte U[] = {0b00000000,0b00100010,0b00100010,0b00100010,0b00100010,0b00100010,0b00100010,0b00011100};
byte V[] = {B00000000, B00100010, B00100010, B00100010, B00010100, B00010100, B00001000, B00000000};
byte W[] = {B00000000, B10000010, B10010010, B01010100, B01010100, B00101000, B00000000, B00000000};
byte X[] = {B00000000, B01000010, B00100100, B00011000, B00011000, B00100100, B01000010, B00000000};
byte Y[] = {B00000000, B01000100, B00101000, B00010000, B00010000, B00010000, B00010000, B00000000};
byte Z[] = {B00000000, B00111100, B00000100, B00001000, B00010000, B00100000, B00111100, B00000000};
byte _[] = {0XFF, 0XFF, 0XFF, 0XFF, 0XFF , 0XFF, 0XFF, 0XFF};
byte heart[] = {0b00000000,0b01100110,0b11111111,0b11111111,0b01111110,0b00111100,0b00011000,0b00000000}; 
byte Uexc[] = {0b00000000,0b01000101,0b01000101,0b01000101,0b01000101,0b01000101, 0b01000100,0b00111001};
byte a[] = {0b00111110,0b00100010,0b00100010,0b00100010,0b00100010,0b00100010,0b00111110,0b00000000};
byte b[] = {0b00001000,0b00011000,0b00101000,0b00001000,0b00001000,0b00001000,0b00111110,0b00000000};
byte c[] = {0b00011000,0b00100100,0b00000100,0b00001000,0b00010000,0b00100000,0b00111100,0b00000000};
byte d[] ={0b00111100,0b00000010,  0b00000010,0b00111100,0b00000010,0b00000010,0b00111100,0b00000000};
byte e[]= {0b00100100,0b00100100,0b00100100,0b00111100,0b00000100,0b00000100,0b00000100, 0b00000000};
byte f[] = {0b00111100,0b00100000,0b00111000,0b00000100,0b00000100,0b00000100,0b00111000,0b00000000};
byte g[] = {0b00111100,0b00100000,0b00100000,0b00111100,0b00100100,0b00100100,0b00111100,0b00000000};
byte h[]= {0b00111110,0b00100010,0b00000100,0b00001000,0b00001000,0b00001000,0b00001000,0b00000000};
byte i[]={0b00111110,0b00100010,0b00100010,0b00111110,0b00100010,0b00100010,0b00111110,0b00000000};
byte j[] ={0b00111100,0b00100100,0b00100100,0b00111100,0b00000100,0b00000100,0b00111000,0b00000000};
byte Smiley[] = {0b00111000,0b01000100, 0b10101010,0b10000010,0b11000110,0b10111010,0b01000100,0b00111000};

int counter = 0;

void setup() {
    pinMode(ROW1, OUTPUT);
    pinMode(ROW2, OUTPUT);
    pinMode(ROW3, OUTPUT);
    pinMode(ROW4, OUTPUT);
    pinMode(ROW5, OUTPUT);
    pinMode(ROW6, OUTPUT);
    pinMode(ROW7, OUTPUT);
    pinMode(ROW8, OUTPUT);
    pinMode(COL1, OUTPUT);
    pinMode(COL2, OUTPUT);
    pinMode(COL3, OUTPUT);
    pinMode(COL4, OUTPUT);
    pinMode(COL5, OUTPUT);
    pinMode(COL6, OUTPUT);
    pinMode(COL7, OUTPUT);
    pinMode(COL8, OUTPUT);

}

void loop() {
 for(int i = 0; i < delaytime;i++){
  drawScreen(F);
 }

 for(int i = 0; i < delaytime;i++){
  drawScreen(U);
 }

  for(int i = 0; i < delaytime;i++){
  drawScreen(C);
 }

  for(int i = 0; i < delaytime;i++){
  drawScreen(K);
 }

  for(int i = 0; i < delaytime;i++){
  drawScreen(Y);
 }

  for(int i = 0; i < delaytime;i++){
  drawScreen(O);
 }

  for(int i = 0; i < delaytime;i++){
  drawScreen(U);
 }

 for(int i = 0; i < 1000;i++){
  drawScreen(ALL);
 }

}

void  drawScreen(byte buffer2[]) {


  // Turn on each row in series
  for (int i = 0; i < 8; i++) {
    setColumns(buffer2[i]); // Set columns for this specific row

    digitalWrite(rows[i], HIGH);
    delay(1); // Set this to 50 or 100 if you want to see the multiplexing effect!
    digitalWrite(rows[i], LOW);

  }
}


void setColumns(byte b) {
  digitalWrite(COL1, (~b >> 7) & 0x01); // Get the 1st bit: 10000000
  digitalWrite(COL2, (~b >> 6) & 0x01); // Get the 2nd bit: 01000000
  digitalWrite(COL3, (~b >> 5) & 0x01); // Get the 3rd bit: 00100000
  digitalWrite(COL4, (~b >> 4) & 0x01); // Get the 4th bit: 00010000
  digitalWrite(COL5, (~b >> 3) & 0x01); // Get the 5th bit: 00001000
  digitalWrite(COL6, (~b >> 2) & 0x01); // Get the 6th bit: 00000100
  digitalWrite(COL7, (~b >> 1) & 0x01); // Get the 7th bit: 00000010
  digitalWrite(COL8, (~b >> 0) & 0x01); // Get the 8th bit: 00000001

  // If the polarity of your matrix is the opposite of mine
  // remove all the '~' above.
}
