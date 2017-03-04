
/*
------------------------------------------------
Program No: 5.4
Program Adı: I2C LCD Ekran kontrolü
Kullanılan Geliştirme Kiti: Arduino Uno
Kullanılan Eklenti : I2C LCD Modülü
Web Adres: www.arduinouygulamalari.com
Açıklama: Programda kullanılan kütüphaneleri
www.arduinouygulamalari.com adresinden indirebilirsiniz.
-------------------------------------------------
*/
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
// I2C modülünün adresini yazınız. ( Bu her modelde değişebilir ürünün datasheetinden bakınız. )
// 20 x 4 lcd için 0x27 olarak kullanılmıştır.
// addr, en,rw,rs,d4,d5,d6,d7,bl,blpol
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
void setup()
{
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.backlight(); // LCD nin parlaklığını artır
  //lcd.noBacklight(); LCD nin parlaklığını kapat
  lcd.setCursor(0, 0);
  lcd.print("Merhaba,Dunya!");
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print("Arduino");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Seri Monitorden");
  lcd.setCursor(0, 1);
  lcd.print("Karakter girin");
} // Setup döngüsünün sonu
void loop()
{
  {
    if (Serial.available())
    { // seri monitorden yeni bir karakter geldi
      delay(100);
      lcd.clear(); // ekranı temizle
      while (Serial.available() > 0)
      {
        lcd.write(Serial.read()); // lcd ekranda gelen karakteri göster
      }
    }
  }
}// Loop döngüsünün sonu

