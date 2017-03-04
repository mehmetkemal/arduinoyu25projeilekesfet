/*
Program No: 7.2
Program Adı: İki adet dc motorun hız kontrolü
Kullanılan Arduino Modeli: Arduino Uno
Kullanılan Shield : Ardumoto
Web Adres: www.arduinouygulamalari.com
-------------------------------------------------
*/
void setup() {
  pinMode(12, OUTPUT); //A kanalının Yön belirleme pini
  pinMode(13, OUTPUT); //B kanalının Yön belirleme pini
}
void loop() {
  int PWM1 = analogRead(0); //Analog 0 pinine bağlı pot değerinin okunması 0 ile 1023 arası değer
  int PWM2 = analogRead(1);
  PWM1 = PWM1 / 4; // Skala 4'e bölünketedir. Motor PWM değeri maksimum 255 olabilir.
  PWM2 = PWM2 / 4; // Skala 4'e bölünketedir Motor PWM değeri maksimum 255 olabilir.
  analogWrite(3, PWM1); // A kanalının Motor hızı
  analogWrite(11, PWM2); // B kanalının Motor hızı
  digitalWrite(12, HIGH); //A kanalının dönüş yönü saat yönünde
  digitalWrite(13, HIGH); // B kanalının dönüş yönü saat yönünde
  delay(100); //100 milisaniye bekle
}
//void loop

