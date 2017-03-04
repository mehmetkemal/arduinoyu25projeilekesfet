/*
  ------------------------------------------------
  Program No: 8.3
  Program Adı: Etkileşimli yüzeyler
  Kullanılan Geliştirme Kiti: Arduino Nano
  Web Adres: www.arduinouygulamalari.com
  -------------------------------------------------
*/
#include <Servo.h>
Servo servo11, servo12, servo13;

Servo servo21, servo22, servo23;
Servo servo31, servo32, servo33;
void setup()
{
  servo11.attach(3);
  servo12.attach(4);
  servo13.attach(5);
  servo21.attach(6);
  servo22.attach(7);
  servo23.attach(8);
  servo31.attach(9);
  servo32.attach(10);
  servo33.attach(11);
  pinMode(2, INPUT);
  digitalWrite(2, HIGH);
  pinMode(12, INPUT);
  digitalWrite(2, HIGH);
  pinMode(13, INPUT);
  digitalWrite(2, HIGH);
  Serial.begin(9600);

}
int aci1 = 10;
int aci2 = 80;
void loop()
{
  if (digitalRead(2) == 0)
  {
    servo11.write(aci1);
    servo12.write(aci1);
    servo13.write(aci1);
    servo21.write(aci1);
    servo22.write(aci1);
    servo23.write(aci1);
    servo31.write(aci1);
    servo32.write(aci1);
    servo33.write(aci1);
  } else {
    servo11.write(aci2);
    servo12.write(aci2);
    servo13.write(aci2);
    servo21.write(aci2);
    servo22.write(aci2);
    servo23.write(aci2);
    servo31.write(aci2);
    servo32.write(aci2);
    servo33.write(aci2);
  }
}

