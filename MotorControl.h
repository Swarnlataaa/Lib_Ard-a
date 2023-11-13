
#ifndef MotorControl_h
#define MotorControl_h

#include "Arduino.h"

class MotorControl {
public:
  MotorControl(int pwmPin, int dirPin1, int dirPin2);
  void forward();
  void backward();
  void turnLeft();
  void turnRight();
  void stop();

private:
  int _pwmPin;
  int _dirPin1;
  int _dirPin2;
};

#endif
