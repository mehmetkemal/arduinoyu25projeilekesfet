/*
------------------------------------------------
Program No: 5.3
Program Adı: LCD Ekran kontrolü
Kullanılan Geliştirme Kiti: Arduino Uno
Web Adres: www.arduinouygulamalari.com
Açıklama: LCD bağlantısını gösterilen şemadaki yapınız.
Eğer farklı pinler kullanmak istiyorsanız LiquidCrystal(rs, enable, d4, d5, d6, d7)7
fonksiyonu buna göre yazınız.
------------------------------------------------
*/
#include <LiquidCrystal.h>
// LCD ekranın bağlantı
// LiquidCrystal(rs, enable, d4, d5, d6, d7)
// lcd.setCursor(sutun,satır);
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  lcd.begin(16, 2); // LCD ekranın sutun ve satır sayısı belirtiliyor
  lcd.setCursor(0, 0); // ilk satır ilk sutundan basla yazmaya
  lcd.print("Merhaba, Dunya!"); // Ekranda yazdırmak istediğiniz yazı
  delay(2000);
}
int i = 0;
void loop() {
  lcd.clear(); // ekrandaki tüm karakterleri sil
  for (i = 0; i <= 100; i++)
  {
    lcd.setCursor(0, 0); // ilk satır ilk sutundan basla yazmaya
    lcd.print("Program 2"); // Ekranda yazdırmak istediğiniz yazı
    lcd.setCursor(1, 0); // ikinci satır ilk sutundan basla yazmaya
    lcd.print("Sayi :"); // Ekranda yazdırmak istediğiniz yazı
    lcd.setCursor(1, 8); // ikinci satır ilk sutundan basla yazmaya
    lcd.print(i); // Ekranda yazdırmak istediğiniz yazı
    delay(500);
  }
}

