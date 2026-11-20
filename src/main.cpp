#include <Servo.h>

Servo servos[5];
const byte pins[5] = {1,2,3,4,5};

void setup() {
  for (byte i = 0; i < 5; i++) {
    servos[i].attach(pins[i]);
  }
}

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
