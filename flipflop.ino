// Program LED Flip-Flop

void setup() {
  //set pin 13 sebagai output
  pinMode(13, OUTPUT);
  
}

void loop() {
  //Memberi sinyal HIGH pada LED yang terhubung built-in dengan pin 13
  digitalWrite(13, HIGH);
  //memberi jeda 0,5 detik
  delay(500);
  //memberi sinyal LOW pada pin 13
  digitalWrite(13, LOW);
  //memberi jeda 0,5 detik
  delay(500);
  
}
