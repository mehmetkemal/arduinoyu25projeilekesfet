/*
Program No: 4.2
Program Adı: Butona basıldığında LED’i yak
Kullanılan Geliştirme Kiti: Arduino Uno
Kullanılan Eklenti: -
Web Adres: www.ArduinoUygulamalari.com
-------------------------------------------------
*/
void setup() {
  // Hangi dijital pinleri output olarak seçeceğimizi belirtiyoruz.
  pinMode(13, OUTPUT);
  pinMode(9, INPUT);
}
int butondegeri = 0;
void loop() {
  butondegeri = digitalRead(9);
  digitalWrite(13, butondegeri);
}

