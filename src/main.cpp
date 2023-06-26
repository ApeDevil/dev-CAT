#include <Arduino.h>

#include "test.h"


#include "config.h"
Config config;







//test button
#define pI 46
int bRead;





void setup() {

  config.Setup();

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
    // Serial.println(test);
    // testFun();
    Serial.println(config.variant);

  }
}





// // put function declarations here:
// int myFunction(int, int);

// // put function definitions here:
// int myFunction(int x, int y) {
//   return x + y;
// }