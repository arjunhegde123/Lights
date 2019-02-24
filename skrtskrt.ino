#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int count = 0;
String bE[31];
int pin1 = 8;
int pin2 = 9;
int pin3 = 0;
int pin4 = 1;
int pin5 = 13;
int i = 0;
String Arr = "00314141405050505050055545104500550401140505050505000515155010445014440505050505050505005054510450055001444141405155050550414111045511010015050505050555005550151045105500535510500550051550051004154515105411415141505150505005551104500550005415141414151505150514414451004502441140550005050555555505451150005452105150505050000045504341105104440313151415050500555500035105551544003541405050414001504105100555054001305041504050505055500110540155000425141405050515050504101444024510441140405055555000550555";
void setup() {
  lcd.begin(16, 2);
bE[0] = "Murda on the";
bE[1] = "Beat so it's";
bE[2] = "Not nice for";
bE[3] = "This life, i";
bE[4] = "Cannot change";
bE[5] = "Hidden hills,";
bE[6] = "Deep off in the";
bE[7] = "Main m&m's,";
bE[8] = "Sweet like";
bE[9] = "Candy cane drop";
bE[10] = "The top, pop";
bE[11] = "It, let it bang";
bE[12] = "(pop it, pop";
bE[13] = "It) for this";
bE[14] = "Life, i cannot";
bE[15] = "Change hidden";
bE[16] = "Hills, deep off";
bE[17] = "In the main";
bE[18] = "M&m's, sweet";
bE[19] = "Like candy cane";
bE[20] = "Drop the top,";
bE[21] = "Pop it, let it";
bE[22] = "Bang (pop it,";
bE[23] = "Pop it) drop";
bE[24] = "The top, play";
bE[25] = "Hide and seek";
bE[26] = "Jump inside,";
bE[27] = "Jump straight";
bE[28] = "To the lake";
bE[29] = "Take a sip,";
bE[30] = "Feel just how i";


  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  delay(1000);
}

void loop() {
  for(int k = 0; k < 15; k++) {
    switch(Arr.charAt(i)) {
      case '0':
      lt0();
      break;
      case '1':
      lt1();
      break;
      case '2':
      lt2();
      break;
      case '3':
      lt3();
      break;
      case '4':
      lt4();
      break;
      case '5':
      lt5();
      break;
    }
    lcd.clear();
    lcd.print(bE[count]);
    i++;
  }
  i++;
  count++;
  lcd.clear();
}

void lt1() {
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin1, HIGH);
  delay(100);  
}

void lt2() {
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin1, HIGH); 
  digitalWrite(pin2, HIGH);
  delay(100);
}

void lt3() {
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin1, HIGH); 
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  delay(100);,,
}

void lt4() {
  digitalWrite(pin5, LOW);
  digitalWrite(pin1, HIGH); 
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  delay(100);
}

void lt5() {
  digitalWrite(pin1, HIGH); 
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin5, HIGH);
  delay(100);
}

void lt0() {
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin5, LOW);
  digitalWrite(pin1, LOW);
  delay(100);  
}
