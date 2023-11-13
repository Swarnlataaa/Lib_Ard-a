#include "MotorControl.h"

MotorControl motor1(5, 4, 3);  // Replace with your actual pin numbers
MotorControl motor2(6, 7, 8);

void setup() {
  // Setup code if needed
}

void loop() {
  motor1.forward();
  delay(1000);
  motor1.stop();
  delay(500);

  motor2.backward();
  delay(1000);
  motor2.stop();
  delay(500);
}
