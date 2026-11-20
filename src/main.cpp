#include <Servo.h>

Servo servos[5];
const byte pins[5] = {1,2,3,4,5}; //pins for the directory


//creates pins for all 5
void setup() {
  for (byte i = 0; i < 5; i++) {
    servos[i].attach(pins[i]);
  }
}

//does a sweeping pin from 0-180. Can be changed. 1000 in milliseconds 1000=1second
void loop() {
  for (byte i = 0; i < 5; i++) {
    servos[i].write(0);
  }
  delay(1000);

  for (byte i = 0; i < 5; i++) {
    servos[i].write(180);
  }
  delay(1000);
}
