// Program Arduino dengan pengulangan FOR
// Program Animasi LED dengan PWM

void setup() {
  // set pin 3 sebagai output
  pinMode(3, OUTPUT);

}

void loop() {
  for (byte value = 0; value < 255; value++){
    analogWrite(3, value);
    delay(30);
  }

  for (byte value = 255; value > 0; value--) {
    analogWrite(3, value);
    delay(30);
  }
}
