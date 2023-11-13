
#include "Arduino.h"
#include "MotorControl.h"

MotorControl::MotorControl(int pwmPin, int dirPin1, int dirPin2) {
  _pwmPin = pwmPin;
  _dirPin1 = dirPin1;
  _dirPin2 = dirPin2;

  pinMode(_pwmPin, OUTPUT);
  pinMode(_dirPin1, OUTPUT);
  pinMode(_dirPin2, OUTPUT);
}

void MotorControl::forward() {
  digitalWrite(_dirPin1, HIGH);
  digitalWrite(_dirPin2, LOW);
}

void MotorControl::backward() {
  digitalWrite(_dirPin1, LOW);
  digitalWrite(_dirPin2, HIGH);
}

void MotorControl::turnLeft() {
  digitalWrite(_dirPin1, LOW);
  digitalWrite(_dirPin2, HIGH);
}

void MotorControl::turnRight() {
  digitalWrite(_dirPin1, HIGH);
  digitalWrite(_dirPin2, LOW);
}

void MotorControl::stop() {
  digitalWrite(_dirPin1, LOW);
  digitalWrite(_dirPin2, LOW);
}
