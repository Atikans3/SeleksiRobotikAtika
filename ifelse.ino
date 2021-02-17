/* 
 Program kontrol LED dengan Push Button (mengandung If else)
 */

//mendefinisikan pin 3 dengan nama LED
#define LED 3
//mendefinisikan pin 5 bernama PB
#define PB 4

void setup() {
  //set pin LED sebagai Output
  pinMode(LED, OUTPUT);
  //set pin PB sebagai input dengan Pull Up Resistor
  pinMode(PB, INPUT_PULLUP);
  //kondisi awal LED mati
  digitalWrite(LED, LOW);

}

void loop() {
  // jika pin PB (push button) ditekan (kondisi LOW)
  if(digitalRead(PB == LOW)){
    //maka yang akan terjadi adalah LED menyala
    digitalWrite(LED, HIGH);
  }
  // jika kondisi pada if tidak terpenuhi (PB HIGH)
  else {
    //maka LED dalam kondisi mati
    digitalWrite(LED, LOW);
  }

}
