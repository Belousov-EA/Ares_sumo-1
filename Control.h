#ifndef CONTROL_H
#define CONTROL_H

#include <Arduino.h>

class Control{
  public:
    Control();
    void setSpeed(float _speed);
    void setAngle(float _angle);
    void call();
  private:
    float speed;
    float angle;
};


##endif
