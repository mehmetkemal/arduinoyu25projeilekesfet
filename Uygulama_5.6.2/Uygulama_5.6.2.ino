/*
------------------------------------------------
Program No: 5.6.2
Program Adı: Kablosuz Haberlesme Alıcı Modulu
Kullanılan Geliştirme Kiti: Arduino Uno
Kullanılan Eklenti : ArduCom Shield
Web Adres: www.arduinouygulamalari.com
Gerekli Kütüphaneler : nRF24L01p.h
------------------------------------------------
*/
#include <SPI.h>
#include <nRF24L01p.h>
nRF24L01p receiver(7, 8); //CSN,CE
void setup() {
  delay(150);
  Serial.begin(9600);
  SPI.begin();
  SPI.setBitOrder(MSBFIRST);
  receiver.channel(90);
  receiver.RXaddress("ArduCom1"); // haberlesme adresi. Bu adres verici ArduCom'da aynı olmalıdır.
  receiver.init();
}
String message;
int data1, data2, data3;
void loop() {
  if (receiver.available()) { // nrf üzerinden herhangi bir data geldi mi?
    receiver.read(); // data geldiyse bunları oku.
    //receiver.rxPL(message); // string tipinde haberleşme datası almak için
    receiver.rxPL(data1); // gelen ilk veri data1 isimli değişkene yazılır.
    receiver.rxPL(data2); // gelen ikinci veri data2 isimli değişkene yazılır.
    Serial.print("Ilk veri :");
    Serial.print(data1);
    Serial.print("\t Ikinci veri :");
    Serial.println(data2);
  }
}


