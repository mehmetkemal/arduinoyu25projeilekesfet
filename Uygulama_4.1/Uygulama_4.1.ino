/*
------------------------------------------------
Program No: 4.1
Program Adı: Led Yak Söndür
Kullanılan Geliştirme Kiti: Arduino Uno
Kullanılan Eklenti: -
Web Adres: www.ArduinoUygulamalari.com
-------------------------------------------------
*/
// Pin 13 ve Pin 8 pinlerine birer led bağlanmıştır.
int KirmiziLed = 13;
int SariLed = 8;
void setup() {
  // Hangi dijital pinleri output olarak seçeceğimizi belirtiyoruz.
  pinMode(KirmiziLed, OUTPUT);
  pinMode(SariLed, OUTPUT);
}
// Loop Döngüsü ile sonsuz defa bu fonksiyon işlem yapacak
void loop() {
  digitalWrite(KirmiziLed, HIGH); // LED Yak (HIGH seçeneği ile KirmiziLed(pin 13) 5 Volt yapmış oluyoruz )
  digitalWrite(SariLed, LOW); // LED Sondur (LOW seçeneği ile SariLed(pin 9) 0 Volt yapmış oluyoruz )
  delay(1000); // 1000 mikrosaniye bekle
  digitalWrite(KirmiziLed, LOW); // LED Yak (HIGH seçeneği ile KirmiziLed(pin 13) 5 Volt yapmış oluyoruz )
  digitalWrite(SariLed, HIGH); // LED Sondur (LOW seçeneği ile SariLed(pin 9) 0 Volt yapmış oluyoruz )
  delay(1000); // 1000 mikrosaniye bekle
}

