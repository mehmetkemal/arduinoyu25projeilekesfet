/*
Program No: 8.2
Program Adı: Yörüngesel üretim
Kullanılan Arduino Modeli: Arduino Nano
Web Adres: www.arduinouygulamalari.com
-------------------------------------------------
*/
#include<Servo.h>
Servo tilt;
Servo pan;
Servo launch;
int pos = 0;
int pot1 = 0;
int pot2 = 0;
void setup() {
  tilt.attach(9);
  pan.attach(8);
  launch.attach(7);
  Serial.begin(9600);

  pinMode(12, INPUT);
  digitalWrite(12, HIGH);
}
void loop() {
  Serial.println(pot2);
  pot1 = analogRead(A2);
  pot2 = analogRead(A3);
  pot1 = map(pot1, 0, 1023, 20, 80);
  pot2 = map(pot2, 0, 1023, 90, 150);
  tilt.write(pot1);
  pan.write(20);
  launch.write(90);
  delay(20);
  if (digitalRead(12) == 0)
  {
    pan.write(90);
    launch.write(pot2);
    delay(1000);
  }
}

