/*
------------------------------------------------
Program No: 4.3
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
void loop() {
  int butondegeri = digitalRead(9);
  if (butondegeri == 0) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
}

