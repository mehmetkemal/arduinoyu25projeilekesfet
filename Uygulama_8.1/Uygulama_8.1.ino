/*
Program No: 8.1
Program Adı: Animatronik Kafa

Kullanılan Arduino Modeli: Arduino Nano
Web Adres: www.arduinouygulamalari.com
-------------------------------------------------
*/
#include <Servo.h>
Servo BoyunPan;
Servo BoyunTilt;
Servo SagKas;
Servo SolKas;
Servo SolGozTilt;
Servo SolGozPan;
Servo SagGozTilt;
Servo SagGozPan;
Servo Agiz;
int SagSens = A2;
int SolSens = A3;
int SesKayit = 1;
int SesCal = 13;
int SesCal2 = 0;

int bekleme = 15;
int pos;
int x;
void setup()
{
  pinMode(SolSens, INPUT);
  pinMode(SagSens, INPUT);

  pinMode(SesKayit, OUTPUT);
  pinMode(SesCal, OUTPUT);
  pinMode(SesCal2, OUTPUT);
  digitalWrite(SesCal2, LOW);
  //pinMode(OnSens, INPUT);
  BoyunPan.attach(12); // 85 Orta
  BoyunTilt.attach(11);
  SolKas.attach(2);
  SagKas.attach(3);
  SolGozTilt.attach(4);
  SagGozPan.attach(5);
  SagGozTilt.attach(6);
  SolGozPan.attach(7);
  Agiz.attach(8);
  digitalWrite(SagSens, HIGH);
  digitalWrite(SolSens, HIGH);
  digitalWrite(SesCal, LOW);
  digitalWrite(SesCal2, LOW);
  digitalWrite(SesKayit, LOW);
}

void SagYukari() {
  for (x = 1; x <= 150; x += 1) {
    BoyunPan.write(150);
    BoyunTilt.write(10);
    SagKas.write(50);
    SolKas.write(150);
    SagGozTilt.write(60);
    SolGozTilt.write(135);
    SagGozPan.write(80);
    SolGozPan.write(190);
    Agiz.write(120);
    delay(bekleme);

  }
}

void Sasirma() {
  for (x = 1; x <= 50; x += 1) {
    BoyunPan.write(105);
    BoyunTilt.write(100);
    SagKas.write(75);
    SolKas.write(120);
    SagGozTilt.write(105);
    SolGozTilt.write(105);
    SagGozPan.write(50);
    SolGozPan.write(160);
    Agiz.write(100);
    delay(bekleme);
  }
}

void KafaPan() {
  for (x = 35; x <= 135; x += 1) {
    BoyunPan.write(x);
    BoyunTilt.write(20);
    SagKas.write(150);
    SolKas.write(50);
    SagGozTilt.write(105);
    SolGozTilt.write(105);
    SagGozPan.write(50);
    SolGozPan.write(160);
    Agiz.write(135);
    delay(15);
  }
  for (x = 135; x <= 35; x -= 1) {
    BoyunPan.write(x);
    BoyunTilt.write(20);
    SagKas.write(150);

    SolKas.write(50);
    SagGozTilt.write(105);
    SolGozTilt.write(105);
    SagGozPan.write(50);
    SolGozPan.write(160);
    Agiz.write(135);
    delay(15);
  }
}
void Sekil() {
  for (x = 35; x <= 135; x += 1) {
    BoyunPan.write(x);
    /*BoyunTilt.write(20);
    SagKas.write(150);
    SolKas.write(50);
    SagGozTilt.write(105);
    SolGozTilt.write(105);
    SagGozPan.write(50);
    SolGozPan.write(160);
    Agiz.write(135);*/
    delay(15);
  }

  for (x = 135; x <= 35; x -= 1) {
    BoyunPan.write(x);
    /*
    BoyunTilt.write(20);
    SagKas.write(150);
    SolKas.write(50);
    SagGozTilt.write(105);
    SolGozTilt.write(105);
    SagGozPan.write(50);
    SolGozPan.write(160);
    Agiz.write(135);
    */ delay(15);
  }
}

void SolaBak() {
  BoyunPan.write(35);
  BoyunTilt.write(20);
  SagKas.write(150);
  SolKas.write(50);
  SagGozTilt.write(105);
  SolGozTilt.write(105);
  SagGozPan.write(50);
  SolGozPan.write(160);
  Agiz.write(135);
  delay(15);
}

void SagaBak() {
  BoyunPan.write(135);
  BoyunTilt.write(20);
  SagKas.write(150);
  SolKas.write(50);
  SagGozTilt.write(105);
  SolGozTilt.write(105);
  SagGozPan.write(50);
  SolGozPan.write(160);
  Agiz.write(135);
  delay(15);
}
void Duz() {
  BoyunPan.write(80);
  BoyunTilt.write(20);
  SagKas.write(150);
  SolKas.write(50);
  SagGozTilt.write(105);
  SolGozTilt.write(105);
  SagGozPan.write(50);
  SolGozPan.write(160);

  Agiz.write(135);
  delay(15);
}
void Konusma() {
  digitalWrite(SesCal, LOW);
  digitalWrite(SesCal, HIGH);
  delay(100);
  digitalWrite(SesCal, LOW);
  delay(5);
  for (x = 1; x <= 20; x += 1) {
    for (pos = 100; pos <= 135; pos += 1) // goes from 0 degrees to 180 degrees
    { // in steps of 1 degree
      SagKas.write(75);
      SolKas.write(120);
      Agiz.write(pos); // tell servo to go to position in variable 'pos'
      delay(5); // waits 15ms for the servo to reach the position
    }
    for (pos = 135; pos >= 100; pos -= 1) // goes from 180 degrees to 0 degrees
    {
      SagKas.write(125);
      SolKas.write(80);
      Agiz.write(pos); // tell servo to go to position in variable 'pos'
      delay(5); // waits 15ms for the servo to reach the position
    }
  }
  digitalWrite(SesCal, LOW);
}

void SesAl () {
  digitalWrite(SesCal2, LOW);
  digitalWrite(SesKayit, HIGH);
  delay(5000);
  digitalWrite(SesKayit, LOW);
  delay(500);

}
void SesVer () {
  digitalWrite(SesCal2, LOW);
  digitalWrite(SesCal, HIGH);
  delay(200);
  digitalWrite(SesCal, LOW);
  delay(100);
}
void SesVer2 () {
  digitalWrite(SesCal2, HIGH);
  delay(8000);
  digitalWrite(SesCal2, LOW);
  delay(100);
}

void MotorlarBosta () {
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(SesCal, LOW);
  digitalWrite(SesCal2, LOW);
  delay(200);
}

void loop()
{
  KafaPan();
  KafaPan();
  SesVer2(); //Ezberden
  SesAl();
  delay(500);
  SesVer();
  while (1) {
    if (digitalRead(SolSens) == 0 && digitalRead(SagSens) == 1 ) {
      SolaBak();
    } else if (digitalRead(SagSens) == 0 && digitalRead(SolSens) == 1 ) {
      SagaBak();
    }
    else if (digitalRead(SagSens) == 0 && digitalRead(SolSens) == 0 ) {
      Konusma();
      KafaPan();
    }
    else
    {
      Duz();
    }
  }/*
//Duz();*/
  // Sasirma();
  //Konusma();
  // SagYukari();
  //KafaPan();
}
