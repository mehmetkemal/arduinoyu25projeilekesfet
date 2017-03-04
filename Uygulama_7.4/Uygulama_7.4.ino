/*
Program No: 7.4
Program Adı: step motor kontrolu
Kullanılan Arduino Modeli: Arduino Uno
Motor Sürücü entegresi:ULN2003
Web Adres: www.arduinouygulamalari.com
-------------------------------------------------
*/
#include <Stepper.h>
#include <Stepper.h>
const int stepsPerRevolution = 200; // step motorun 1 tam turunu 200 adımda döner
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11); // step motorun bağlantı uçları
void setup() {
  // dönüş hızı 60 rpm
  myStepper.setSpeed(60);
  Serial.begin(9600);
}
void loop() {
  // 200 adım dön.
  Serial.println("saat yönünde dönüş");
  myStepper.step(stepsPerRevolution);
  delay(500);
  // step one revolution in the other direction:
  Serial.println("saat yönü tersine dönüş");
  myStepper.step(-stepsPerRevolution);
  delay(500);
}

