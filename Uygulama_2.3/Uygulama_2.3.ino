/*
  ------------------------------------------------
  Program No: 2.3
  Program Adı: Döngülerin Kullanımı
  Kullanılan Geliştirme Kiti: Arduino Uno
  Web Adres: www.arduinouygulamalari.com
  -------------------------------------------------
*/



int donguSayisi;
int Sayi1, Sayi2;

void setup() {
  Serial.begin(9600); // seri monitörü kullanmak için bağlantı hızı seçilir
  Serial.println("Arduino Uygulamalari");

  Sayi1 = 50;
  Sayi2 = 100;
}

void loop() {

  for (int i = 0; i < 10; i++)
  {
    Serial.print("i =");
    Serial.println(i);
  }

  while (donguSayisi < 10)
  {
    Serial.print("Dongu Sayisi:");
    Serial.println(donguSayisi);
    donguSayisi++; // donguSayisi'ni bir artır
  }

  while (1) {}

}

