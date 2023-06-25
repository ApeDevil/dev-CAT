#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);



//test button
#define pI 46
int bRead;





void setup() {

  //test buton
  pinMode(pI, INPUT_PULLUP);

  Serial.begin(115200);

}





void loop() {


  Serial.println("loop");
  delay(1000);


bRead = digitalRead(pI);

  if (bRead == 0) {

    Serial.println("b");

  }
}







// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}