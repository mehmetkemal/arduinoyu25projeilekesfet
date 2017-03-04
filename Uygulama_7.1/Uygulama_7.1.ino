/*
------------------------------------------------
Program No: 7.1
Program Adı: İki Yönlü Motor Kontrolü
Kullanılan Geliştirme Kiti: Arduino Uno
Kullanılan Eklenti: Arduino Motor Shield R3
Web Adres: www.arduinouygulamalari.com
-------------------------------------------------
*/
void setup() {
  pinMode(12, OUTPUT); //A kanalının Yön belirleme pini
  pinMode(9, OUTPUT); //A kanalının Fren durumunu belirme pini
  pinMode(13, OUTPUT); //B kanalının Yön belirleme pini
  pinMode(8, OUTPUT); //B kanalının Fren durumunu belirme pini
}
void loop() {
  analogWrite(3, 255); // A kanalının Motor hızını belirleyen PWM değeri 0-255 -- Hızı azaltmak istiyorsak 255den //daha küçük bir değer seçiniz.
  analogWrite(11, 255); // B kanalının Motor hızını belirleyen PWM değeri 0-255
  digitalWrite(9, LOW); //A Kanalının fren durumu kapalı
  digitalWrite(8, LOW); //B Kanalının fren durumu kapalı
  digitalWrite(12, HIGH); //A kanalının dönüş yönü saat yönünde
  digitalWrite(13, HIGH); //B kanalının dönüş yönü saat yönünde
  delay(5000); // 5000 mili saniye = 5 saniye bekle
  digitalWrite(12, LOW); //A kanalının dönüş yönü saat yönünün tersinde
  digitalWrite(13, LOW); //B kanalının dönüş yönü saat yönünün tersinde
  delay(5000);
}//void loop

