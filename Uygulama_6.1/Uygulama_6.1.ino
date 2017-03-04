/*
------------------------------------------------
Program No: 6.1
Program Adı: LDR İle Işık Kontrolü
Kullanılan Geliştirme Kiti: Arduino Uno
Web Adres: www.arduinouygulamalari.com
-------------------------------------------------
*/
int LDR = A0; // LDR bağlantı pini
int led1 = 2; // Beyaz Led 1
int led2 = 3; // Beyaz Led 2
int led3 = 4; // Beyaz Led 3
int Deger = 0; // Sensör değeri değişkeni
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Deger = analogRead(LDR); //LDR pininden analog coltaj okuma
  if (Deger < 500)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  }
  else
  {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  Serial.print("ISIK DEGERI = " ); //Işık değeri yazısı Seri monitörde görüntülenir.
  Serial.print(Deger); // Değer bilgisi bilgisayara iletilmektedir.
  Serial.println();
  delay(100);
}

