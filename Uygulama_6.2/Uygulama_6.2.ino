/*
------------------------------------------------
Program No: 6.2
Program Adı: Ultrasonik sensör kullanımı
Kullanılan Geliştirme Kiti: Arduino Uno
Web Adres: www.arduinouygulamalari.com
-------------------------------------------------
*/
#define eko 7 // Eko pini
#define tetik 8 // Tetik Pini
#define LED 13 // Dahil Led
int maksimum = 300; // Maksimum Mesafe Sınırı
int minimum = 0; // Minimum Mesafe Sınırı
long sure, mesafe; // Sure ve Mesafe değişkenleri tanımlanıyor.

void setup() {
  Serial.begin (9600);
  pinMode(tetik, OUTPUT); // Pin Giriş Çıkış Tanımlamaları
  pinMode(eko, INPUT);
  pinMode(LED, OUTPUT);
}
void loop() {
  digitalWrite(tetik, LOW); //2us 0V, sonraki kısımda 10US 5V sinyali gonderilmektedir.
  delayMicroseconds(2);
  digitalWrite(tetik, HIGH);
  delayMicroseconds(10);
  digitalWrite(tetik, LOW);
  sure = pulseIn(eko, HIGH); //Eko pininde 5V gelme suresi olculmekte, sure degiskenine atanmaktadir.
  mesafe = sure / 58.2; // Sinyal bilgisini Mesafe'ye çeviriyoruz.
  if (mesafe >= maksimum || mesafe <= minimum) { //Mesafe Değişkeni sınırlar dışında ise
    Serial.println("-1");
    digitalWrite(LED, HIGH);
  }
  else { //Mesafe Değişkeni sınırlar içinde ise
    Serial.println(mesafe);
    digitalWrite(LED, LOW);
  }
  //Verilerin rahat okunması ve sensörün sağlıklı
  //çalışması için her çevrim sonrası 100ms beklemektedir.
  delay(100);
}

