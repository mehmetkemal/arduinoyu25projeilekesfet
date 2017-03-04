/*
------------------------------------------------
Program No: 6.3
Program Adı: İvme sensörü ile roboPan kullanımı
Kullanılan Geliştirme Kiti: Arduino Uno
Web Adres: www.arduinouygulamalari.com
-------------------------------------------------
*/
#include <Servo.h> //Servo Kütüphanesini ekliyoruz
#include<Wire.h> // I2C Kütüphanesini ekliyoruz.
/* Sensör için Bağlantı Pinleri
• Vcc:5V
• Gnd: Gnd
• SDA:A4
• SCL:A5
*/
/* Servo Motor için Bağlantı Pinleri
• Kahverengi ya da siyah Kablolar:GND
• Kırmıcı Kablo: 5V
• Servo 1 Sinyali: D9
• Servo 2 Sinyali: D10
*/
const int MPU = 0x68; // I2C address of the MPU-6050
int AcX, AcY, AcZ;
Servo PanServo; // Pan (Yatay) Dönüş Servosu
Servo TiltServo; // Tilt (Dikey) Dönüş Servosu

int TiltDeger; // Servo Degeri
int PanDeger; // Servo Degeri
void setup() {
  Wire.begin();
  Wire.beginTransmission(MPU);
  Wire.write(0x6B); // PWR_MGMT_1 register
  Wire.write(0); // set to zero (wakes up the MPU-6050)
  Wire.endTransmission(true);
  PanServo.attach(9); // PanServosu Dijital 9 Numaralı Pine Bağlandı
  TiltServo.attach(10); // PanServosu Dijital 10 Numaralı Pine Bağlandı
  Serial.begin(9600);
}
void loop() {
  Wire.beginTransmission(MPU); // Sensör ile iletişimi başlatıyoruz.
  Wire.write(0x3B); //
  Wire.endTransmission(false);
  Wire.requestFrom(MPU, 14, true); //
  AcX = Wire.read() << 8 | Wire.read(); // 0x3B (ACCEL_XOUT_H) & 0x3C (ACCEL_XOUT_L)
  AcY = Wire.read() << 8 | Wire.read(); // 0x3D (ACCEL_YOUT_H) & 0x3E (ACCEL_YOUT_L)
  TiltDeger = map(AcX, -16000, 16000, 0, 179);
  PanDeger = map(AcY, -16000, 16000, 0, 179);
  TiltServo.write(TiltDeger);
  PanServo.write(PanDeger);
  delay(50);
}

