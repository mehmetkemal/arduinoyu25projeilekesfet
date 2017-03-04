/*
Program No: 7.5
Program Adı: ESC motor kontrol
Kullanılan Arduino Modeli: Arduino Uno
Motor Sürücü entegresi:40A ESC
Web Adres: www.arduinouygulamalari.com
-------------------------------------------------
*/
#include <Servo.h>
Servo ESC; // ESC devresini sürmek için servo motor sürme sinyali kullanacağız.
void setup()
{
  ESC.attach(9); // ESC'miz dijital 9 numaralı pine bağlanmıştır.
}

void loop()
{
  for (int i = 0; i <= 200; i++) { //Yaklaşık 3sn fırçasız motoru durdurur.
    ESC.write(0); // ESC'ye 0 derece açısı 1ms genlikli bilgi
    delay(15); // 15 ms bekle
  }
  for (int i = 0; i <= 400; i++) { // Yaklaşık 6ms fırçasız motoru orta hızda çalıştırır.
    ESC.write(90); // ESC'ye 120 derece açısı 1,5ms bilgi (Fırçasız motoru yarım hızda çalıştırır)
    delay(15); // 15 ms bekle
  }
  while (1) { //Son aşamada Devamlı bu döngü gerçekleşcektir. (Fırçasız motoru tam hızda çalıştırır)

    ESC.write(180); // ESC'ye 180 derece açısı 2ms bilgi
    delay(15); // 15 ms bekle
  }
}

