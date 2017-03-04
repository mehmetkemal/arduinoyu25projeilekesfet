/*
------------------------------------------------
Program No: 4.4
Program Adı: Röle Kontrollü Uygulamalar
Programın Açıklaması :
Buton 1’e basıldığında DC motor buton 2 ye basılıncaya kadar çalışacaktır.
Buton 3’e basıldığında Selenoidin pimi dışarı çıkacak ve
Buton 4’e basıldığında Selenoid pimi içeri çekilecekir.
Kullanılan Geliştirme Kiti: Arduino Uno
Kullanılan Eklenti: 4'lü Röle Kontrol Kartı
Web Adres: www.ArduinoUygulamalari.com
-------------------------------------------------
*/

int buton1 = 5; // 5 nolu dijital pin buton1 olarak tanımlandı
int buton2 = 4; // 4 nolu dijital pin buton2 olarak tanımlandı
int buton3 = 3; // 3 nolu dijital pin buton3 olarak tanımlandı
int buton4 = 2; // 2 nolu dijital pin buton4 olarak tanımlandı
int role1 = 11; // 11 nolu dijital pin role1 olarak tanımlandı
int role2 = 10;
int role3 = 9;
int role4 = 8;
void setup() {
  pinMode(buton1, INPUT); // 5 nolu pin dijital giriş olarak tanımlandı
  pinMode(buton2, INPUT);
  pinMode(buton3, INPUT);
  pinMode(buton4, INPUT);
  pinMode(buton1, INPUT_PULLUP); // 5 nolu pin için dahili pull_up tanımlandı
  pinMode(buton2, INPUT_PULLUP);
  pinMode(buton3, INPUT_PULLUP);
  pinMode(buton4, INPUT_PULLUP);
  pinMode(role1, OUTPUT); // 11 nolu pin çıkış olarak tanımlandı.
  pinMode(role2, OUTPUT);
  pinMode(role3, OUTPUT);
  pinMode(role4, OUTPUT);
}

void loop() {
  if (buton1 == 0)
  {
    while (buton2 == 1)
    {
      digitalWrite(role1, HIGH);
      digitalWrite(role2, HIGH);
    }
    digitalWrite(role1, LOW);
    digitalWrite(role2, LOW);
  }
  else if (buton3 == 0)
  {
    digitalWrite(role1, HIGH);
    digitalWrite(role2, LOW);
  }
  else if (buton4 == 0)
  {
    digitalWrite(role1, LOW);
    digitalWrite(role2, HIGH);
  }
}

