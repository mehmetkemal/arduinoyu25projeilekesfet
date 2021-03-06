/*
  ------------------------------------------------
  Program No: 2.1
  Program Adı: Değişkenler ve Aritmetik İşlemler
  Kullanılan Geliştirme Kiti: Arduino Uno
  Web Adres: www.arduinouygulamalari.com
  -------------------------------------------------
*/

int Sayi1 = 20; // tamsayi tipinde değişken tanımlanır içerisine 20 değeri yazılır
int Sayi2 = 25;
int toplam = 0;

float bolum; // ondalik sonuç olması için float olarak tanımlanır

void setup() {

  Serial.begin(9600); // seri monitörü kullanmak için bağlantı hızı seçilir
  Serial.println("Arduino Uygulamalari");
}

void loop() {

  toplam = Sayi1 + Sayi2;
  Serial.print("Toplam : ");
  Serial.println(toplam); // Seri ekrana toplam değerini yazdırır.


  bolum = Sayi2 / Sayi1;
  Serial.print("Bolum : ");
  Serial.println(bolum); // Seri ekrana bolum değerini yazdırır.


}

