/*
  ------------------------------------------------
  Program No: 2.2
  Program Adı: Koşul Sorgulama
  Kullanılan Geliştirme Kiti: Arduino Uno
  Web Adres: www.arduinouygulamalari.com
  -------------------------------------------------
*/

int Sayi1;
int Sayi2;

int Sayi3, Sayi4; // tek satırda aynı türden birden fazla değişken tanımlaması yapılabilinir.
int sonuc;
void setup() {

  Serial.begin(9600); // seri monitörü kullanmak için bağlantı hızı seçilir
  Serial.println("Arduino Uygulamalari");

}

void loop() {

  Sayi1 = 50;
  Sayi2 = 100;

  Sayi3 = 20;
  Sayi4 = 2007;

  if (Sayi1 < Sayi2) // Sayi2 Sayi1 den büyük mü ?
  {
    Serial.println(" Sayi2 Sayi1'den buyuktur ");
  } else {
    Serial.println(" Sayi1 Sayi2'den buyuktur ");
  }


  sonuc = Sayi3 + Sayi4;

  if (sonuc == 2027) // sonuc 2027'ye eşit mi ?
  {
    Serial.println(" Sonuc 2027'dir");
  } else {
    Serial.println(" Sonuc 2027 degildir!");
  }

  while(1){  } // program burada bekleyecek ekrana 1 defa yazdırılmış olacaktır.


}

