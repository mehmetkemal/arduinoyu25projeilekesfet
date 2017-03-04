/*
------------------------------------------------
Program No: 5.1
Program Adı: Joystick Kontrol
Kullanılan Geliştirme Kiti: Arduino Uno
Kullanılan Eklenti :
Web Adres: www.arduinouygulamalari.com
-------------------------------------------------
*/

int xEkseni = 0; // xekseni integer tipinde değişken tanımlandı
int yEkseni = 0; // yekseni integer tipinde değişken tanımlandı
void setup() {
  Serial.print(9600);
}//setup
void loop() {
  xEkseni = analogRead(A0); // A0 portu x eksenindeki değişimi algılayacak
  yEkseni = analogRead(A1); // A1 portu y eksenindeki değişimi algılayacak
  Serial.print("X-eksenin: ");
  Serial.print(xEkseni);
  Serial.print("\t");
  Serial.print("Y-Eksenin: ");
  Serial.print(yEkseni);
  Serial.print("\n");
}//loop

