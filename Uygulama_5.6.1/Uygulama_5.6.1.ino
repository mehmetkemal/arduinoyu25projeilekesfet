/*
------------------------------------------------
Program No: 5.6.1
Program Adı: Kablosuz Haberlesme Alıcı Modulu
Kullanılan Geliştirme Kiti: Arduino Uno
Kullanılan Eklenti : ArduCom Shield
Web Adres: www.arduinouygulamalari.com
Gerekli Kütüphaneler : nRF24L01p.h
------------------------------------------------
*/
#include <SPI.h>
#include <nRF24L01p.h>
nRF24L01p transmitter(7, 8); //CSN,CE
void setup() {
  delay(150);
  Serial.begin(9600);
  SPI.begin();
  SPI.setBitOrder(MSBFIRST);
  transmitter.channel(90);
  transmitter.TXaddress("ArduCom1"); // haberlesme adresi. Bu adres alıcı ArduCom'da aynı olmalıdır
  transmitter.init();
  Serial.print("verici");
}
int ilkData = 100;
int ikinciData = 555;
String ileti = "Mert!";
unsigned long time;
void loop() {
  transmitter.txPL(ilkData);
  transmitter.txPL(ikinciData);
  transmitter.send(SLOW); // haberleşme hızı Slow/Fast
  Serial.println("gonderildi");
  delay(1000);
}


