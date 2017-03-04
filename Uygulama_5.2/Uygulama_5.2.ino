/*
------------------------------------------------
Program No: 5.2
Program Adı: LCD Ekran kontrolü
Kullanılan Geliştirme Kiti: Arduino Uno
Kullanılan Eklenti :
Web Adres: www.arduinouygulamalari.com
Açıklama: LCD bağlantısını gösterilen şemadaki yapınız.
Eğer farklı pinler kullanmak istiyorsanız LiquidCrystal(rs, enable, d4, d5, d6, d7)
fonksiyonu buna göre yazınız.
-------------------------------------------------
*/

#include <LiquidCrystal.h>
// LCD ekranın bağlantı
// LiquidCrystal(rs, enable, d4, d5, d6, d7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  lcd.begin(16, 2); // LCD ekranın sutun ve satır sayısı belirtiliyor
  lcd.setCursor(0, 0); // ilk satır ilk sutundan basla yazmaya
  lcd.print("Merhaba, Dunya!"); // Ekranda yazdırmak istediğiniz yazı
}
void loop() {
}

