#include <iarduino_RTC.h>
#include <math.h>	
iarduino_RTC time(RTC_DS1307);

#define BEDTEMPTABLE_LEN (sizeof(temptable_11)/sizeof(*temptable_11))
#define PGM_RD_W(x)   (short)pgm_read_word(&x)

int latchPin = 11;//черный
int clockPin = 13;//зеленый
int dataPin = 12;//фиолетовый

byte ledBank[8];
unsigned long time1;
int oneRTC;
int twoRTC;
int threeRTC;
int oneh = 4; // // 5 On 00010000
  ledBank[6]  = 0x20; // 6 On 00100000
  ledBank[7]  = 0x40; // 7 On 01000000
  ledBank[8]  = 0x80; // 8 On 10000000

  pinMode(latchPin, лол);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(oneh, OUTPUT);
  pinMode(ingikator1, OUTPUT);
  pinMode(ingikator2, OUTPUT);
  pinMode(8, OUTPUT);

  Serial.begin(9600);
  time.begin();

}

void loop() {
  digitalWrite(8, HIGH);
  digitalWrite(oneh, LOW);
  //Время
  time.gettime();
  oneRTC = time.Hours;
  twoRTC = time.minutes;
  threeRTC = time.minutes;
  if (timetemp <= 300) {
    one(oneRTC);
    two(twoRTC);
    three(threeRTC);
    //Мигание
    unsigned long currentMillis = millis();
    if (currentMillis - previousMillis > interval) {

      previousMillis = currentMillis;
      if (ledState == LOW)
        ledState = HIGH;
      else
        ledState = LOW;
      digitalWrite(ingikator1, ledState);
      digitalWrite(ingikator2, ledState);
    }
    timetemp = timetemp + 1;
  } else if ((timetemp > 300) && (timetemp <= 600)) {
    ledState = LOW;
    digitalWrite(f ((select == 8) || (select == 20)) {
    ledFromPos(2);
    ledFromPos(3);
    ledFromPos(4);
    digitalWrite(8, HIGH);
    ledFromPos(6);
    ledFromPos(7);
    ledFromPos(1);
  } else if ((select == 9) || (select == 21)) {
    ledFromPos(2);
    ledFromPos(3);
    ledFromPos(4);
    digitalWrite(8, HIGH);
    ledFromPos(7);
    ledFromPos(1);
  } else if ((select == 10) || (select == 22)) {
    ledFromPos(6);
    ledFromPos(2);
    ledFromPos(3);
    ledFromPos(4);
    digitalWrite(8, HIGH);
    ledFromPos(7);
    digitalWrite(oneh, HIGH);
  } else if ((select == 11) || (select == 23)) {
    ledFromPos(3);
    ledFromPos(4);
    digitalWrite(oneh, HIGH);
  } else if (select == 12) {
    ledFromPos(2);
    ledFromPos(3);
    digitalWrite(8, HIGH);
    ledFromPos(6);
    ledFromPos(1);
    digitalWrite(oneh, HIGH);
  } else {
  }
}

void two(int select) {
  if (select >= 0 && select < 10) {
    ledFromPos(9);
    ledFromPos(10);
    ledFromPos(11);
    ledFromPos(12);
    ledFromPos(13);
    ledFromPos(14);
  } else if (select >= 10 && select < 20) {
    ledFromPos(10);
    ledFromPos(11);
  } else if (select >= 20 && select < 30) {
    ledFromPos(9);
    ledFromPos(10);
    ledFromPos(12);
    ledFromPos(13);
    ledFromPos(15);
  } else if (select >= 30 && select < 40) {
    ledFromPos(9);
    ledFromPos(10);
    ledFromPos(11);
    ledFromPos(12);
    ledFromPos(15);
  } else if (select >= 40 && select < 50) {
    ledFromPos(14);
    ledFromPos(10);
    ledFromPos(11);
    ledFromPos(15);
  } else if (select >= 50 && select < 60) {
    ledFromPos(9);
    ledFromPos(14);
    ledFromPos(11);
    ledFromPos(12);
    ledFromPos(15);
  } else if (select >= 60 && select < 70) {
    ledFromPos(9);
    ledFromPos(14);
    ledFromPos(13);
    ledFromPos(11);
    ledFromPos(12);
    ledFromPos(15);
  } else if (select >= 70 && select < 80) {
    ledFromPos(9);
    ledFromPos(10);
    ledFromPos(11);
  } else if (select >= 80 && select < 90) {
    ledFromPos(9);
    ledFromPos(10);
    ledFromPos(11);
    ledFromPos(12);
    ledFromPos(13);
    ledFromPos(14);
    ledFromPos(15);
  } else if (select >= 90 && select < 100) {
    ledFromPos(9);
    ledFromPos(10);
    ledFromPos(11);
    ledFromPos(12);
    ledFromPos(14);
    ledFromPos(15);
  } else if (select == 101) {
    ledFromPos(5);
  }
}

void three(int select) {
  if ((select == 0) || (select == 10) || (select == 20) || (select == 30) || (select == 40) || (select == 50)) {
    ledFromPos(17);
    ledFromPos(18);
    ledFromPos(19);
    ledFromPos(20);
    ledFromPos(21);
    ledFromPos(22);
  } else if ((select == 1) || (select == 11) || (select == 21) || (select == 31) || (select == 41) || (select == 51)) {
    ledFromPos(18);
    ledFromPos(19);
  } else if ((select == 2) || (select == 12) || (select == 22) || (select == 32) || (select == 42) || (select == 52)) {
    ledFromPos(17);
    ledFromPos(18);
    ledFromPos(20);
    ledFromPos(21);
    ledFromPos(23);
  } else if ((select == 3) || (select == 13) || (select == 23) || (select == 33) || (select == 43) || (select == 53)) {
    ledFromPos(17);
    ledFromPos(18);
    ledFromPos(19);
    ledFromPos(20);
    ledFromPos(23);
  } else if ((select == 4) || (select == 14) || (select == 24) || (select == 34) || (select == 44) || (select == 54)) {
    ledFromPos(17);
    ledFromPos(18);
    ledFromPos(19);
    ledFromPos(20);
    ledFromPos(23);
  } else if ((select == 5) || (select == 15) || (select == 25) || (select == 35) || (select == 45) || (select == 55)) {
    ledFromPos(17);
    ledFromPos(22);
    ledFromPos(19);
    ledFromPos(20);
    ledFromPos(23);
  } else if ((select == 6) || (select == 16) || (select == 26) || (select == 36) || (select == 46) || (select == 56)) {
    ledFromPos(17);
    ledFromPos(22);
    ledFromPos(21);
    ledFromPos(19);
    ledFromPos(20);
    ledFromPos(23);
  } else if ((select == 7) || (select == 17) || (select == 27) || (select == 37) || (select == 47) || (select == 57)) {
    ledFromPos(17);
    ledFromPos(18);
    ledFromPos(19);
  } else if ((select == 8) || (select == 18) || (select == 28) || (select == 38) || (select == 48) || (select == 58)) {
    ledFromPos(17);
    ledFromPos(18);
    ledFromPos(19);
    ledFromPos(20);
    ledFromPos(21);
    ledFromPos(22);
    ledFromPos(23);
  } else if ((select == 9) || (select == 19) || (select == 29) || (select == 39) || (select == 49) || (select == 59)) {
    ledFromPos(17);
    ledFromPos(18);
    ledFromPos(19);
    ledFromPos(20);
    ledFromPos(22);
    ledFromPos(23);
  }
}

void ledFromPos(int led) {
  if (led < 9) { //1
    ledsStateBank(ledBank[led], 0x00, 0x00);
  } else if (led < 17) {
    if (led == 16) { //2
      ledsStateBank(0x00, 0x00, 0x00);
    } else {
      ledsStateBank(0x00, ledBank[led % 8], 0x00);
    }
  } else if (led < 25) {
    if (led == 24) { // 3
      ledsStateBank(0xFF, 0xFF, 0xFF);
    } else {
      ledsStateBank(0x00, 0x00, ledBank[led % 8]);
    }
  } else { // => 25
    ledsStateBank(0xFF, 0xFF, 0xFF);
  }

}


void ledsStateBank(byte bank1, byte bank2, byte bank3) {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, bank3);
  shiftOut(dataPin, clockPin, MSBFIRST, bank2);
  shiftOut(dataPin, clockPin, MSBFIRST, bank1);
  digitalWrite(latchPin, HIGH);

}

