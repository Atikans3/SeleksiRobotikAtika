/*
 Fungsi perkalian
 */

void setup(){
  Serial.begin(9600);
}

void loop() {
  int i = 5;
  int j = 3;
  int k;

  k = myMultiplyFunction(i, j); // k now contains 15
  Serial.println(k);
  delay(1000);
}

int myMultiplyFunction(int x, int y){
  int result;
  result = x * y;
  return result;
}
