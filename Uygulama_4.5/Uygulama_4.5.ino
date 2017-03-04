/*
------------------------------------------------
Program No: 4.5
Program Adı: İki farklı potansiyometreden okunan analog değerleri Seri monitörde göster
Kullanılan Geliştirme Kiti: Arduino Uno
Kullanılan Eklenti: -
Web Adres: www.ArduinoUygulamalari.com
-------------------------------------------------
*/
int potansiyometre1 = A0;
int potansiyometre2 = A1;
int okunanDeger1 = 0;
int okunanDeger2 = 0;
void setup() {
  Serial.begin(9600);
}
void loop() {
  // potansiyometreden analog değer okunması:
  okunanDeger1 = analogRead(potansiyometre1); // A0 pinindeki analog değeri oku
  okunanDeger1 = analogRead(potansiyometre2); // A1 pinindeki analog değeri oku
  Serial.print("Potansiyometre 1 :");
  Serial.print(okunanDeger1);
  Serial.print("/t"); // seri monitörde tab yap.
  Serial.print("Potansiyometre 2 :");
  Serial.print(okunanDeger2);
  Serial.print("/n"); // seri monitörde alt satıra geç
}

