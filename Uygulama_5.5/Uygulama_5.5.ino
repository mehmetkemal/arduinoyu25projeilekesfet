/*
------------------------------------------------
Program No: 5.5
Program Adı: Dokunmatik Sensör kullanımı
Kullanılan Geliştirme Kiti: Arduino Uno
Kullanılan Eklenti : Touch Shield
Web Adres: www.arduinouygulamalari.com
Gerekli Kütüphaneler : mpr121.h - i2c.h
-------------------------------------------------
*/
#include "mpr121.h"
#include <Wire.h>
#include "i2c.h" // Atmel'in I2C kütüphanesini kullanıyoruz
// En fazla 11 tane giriş kullanabiliyoruz
#define GirisSayisi 11
// Her yüzeyin mrp121 sensöründeki pin numarası
#define BIR 8
#define IKI 5
#define UC 2
#define DORT 7
#define BES 4
#define ALTI 1
#define YEDI 6
#define SEKIZ 3
#define DOKUZ 0
//Fazladan pin olarak çıkılmış kablo ile bağlantı yapabileceğiniz uçlar
#define Diger9 9
#define Diger10 10
#define Diger11 11
void setup()
{
  Serial.begin(9600);
  DDRC |= 0b00010011; //SDA output ayarlaır ADC4 (PC4, SDA)
  PORTC = 0b00110000; //SCL I2C hattı Pull-ups o
  i2cInit(); // I2C başlangıç ayaları
  delay(100);
  mpr121QuickConfig(); // MPR121 Konfigurasyon Ayarları
  Serial.println("Hazirim...");
}

void loop()
{
  int i = 0;
  int yuzeyNumarasi = 0;
  uint16_t yuzeyDurum;
  char yuzey[GirisSayisi];
  yuzeyDurum = mpr121Read(0x01) << 8;
  yuzeyDurum |= mpr121Read(0x00);
  for (int j = 0; j < 12; j++) // hangi yüzeyde değişim olduğunu kontrol et
  {
    if ((yuzeyDurum & (1 << j)))
      yuzeyNumarasi++;
  }
  if (yuzeyNumarasi == 1)
  {
    if (yuzeyDurum & (1 << YEDI))
      yuzey[i] = '7';
    else if (yuzeyDurum & (1 << DORT))
      yuzey[i] = '4';
    else if (yuzeyDurum & (1 << BIR))
      yuzey[i] = '1';
    else if (yuzeyDurum & (1 << SEKIZ))
      yuzey[i] = '8';
    else if (yuzeyDurum & (1 << BES))
      yuzey[i] = '5';
    else if (yuzeyDurum & (1 << IKI))
      yuzey[i] = '2';
    else if (yuzeyDurum & (1 << DOKUZ))
      yuzey[i] = '9';
    else if (yuzeyDurum & (1 << ALTI))
      yuzey[i] = '6';
    else if (yuzeyDurum & (1 << UC))
      yuzey[i] = '3';

    Serial.print(yuzey[i]);
    i++;
  }
  //hiç bir butona basılmadıysa
  else if (yuzeyNumarasi == 0) {}
}

