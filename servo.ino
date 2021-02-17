/* 
Kontrol posisi servo dengan potensiometer (variable resistor)
*/

#include <Servo.h>
   // buat objek servo untuk mengontrol servo
   Servo myservo; 
   // pin analog yang dihubungkan dengan potensiometer
   int potpin = 0; 
   // variabel untuk membaca nilai dari pin analog
   int val; 

void setup() {
   // objek servo terkoneksi pada pin PWM 6
   myservo.attach(6); 
}

void loop() {
   // membaca nilai dari potensiometer (nilai di antara 0 dan 1023)
   val = analogRead(potpin);
   // diskalakan untuk diaplikasikan pada servo (nilai skala antara 0 dan 180)
   val = map(val, 0, 1023, 0, 180);
   // servo diset berdasarkan nilai skala
   myservo.write(val); 
   delay(20);
}
