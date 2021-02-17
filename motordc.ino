/*
 Program menggerakkan Motor DC pada PIN PWM 5 dengan kontrol kecepatan
 */

int motorPin = 5;

void setup() {
  //set motorPin sebagai output
  pinMode(motorPin, OUTPUT);
  /*
   menampilkan pada layar komputer kemudian isi kecepatan
   di antara nilai 0 sampai 255 
   */
  Serial.begin(9600);
  while(! Serial);
  Serial.println("Speed 0 to 255");
  
}

void loop() {
  // motor bergerak sesuai kecepatan yang dimasukkan
  if (Serial.available()) {
    int speed = Serial.parseInt();
    int (speed >= 0 && speed <= 255); {
      analogWrite(motorPin, speed);
    }
  }

}
