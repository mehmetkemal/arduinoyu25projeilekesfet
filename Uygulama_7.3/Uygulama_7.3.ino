/*
Program No: 7.3
Program Adı: Potansiyometre ile Servo motora yön vermek
Kullanılan Arduino Modeli: Arduino Uno
Web Adres: www.arduinouygulamalari.com
-------------------------------------------------
*/
#include <Servo.h> // Servo Kütüphanesi
Servo myservo; // MyServo Nesnesi
int potpin = 0; // Potansiyometremizin Bağlandığı A0 Pini Bilgisi
int aci; // Açi değişkeni tanımlanması
int val;
void setup()
{
  myservo.attach(9); // Servo Motor Pin Tanımı - Sinyal ucu dijital 9 Numaralı Pine bağlanacaktır.
}
void loop()
{
  aci = analogRead(potpin); // Analog Değer okuması 0 ile 1023 arası değer üretir.
  aci = map(val, 0, 1023, 0, 179); // Map fonksiyonuyla Değer Ölçeklendirmesi 0-1023 ==>> 0 - 179 (Açı Değeri)
  myservo.write(aci); // MyServo Nesnesi Açı Değeri Gönderilmesi
  delay(15); // 15 milisaniye Bekleme
}


