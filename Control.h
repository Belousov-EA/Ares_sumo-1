#ifndef CONTROL_H
#define CONTROL_H

#include <Arduino.h>
//#include "Servo.h"

class Control{
  public:
    Control();
    //void setServo(Servo*);
    void init();
    void setSpeed(float _speed);
    void setAngle(float _angle);
    void call();
    void toGo();
    void toTurn();
  private:
    float speed;
    float angle;
    float oldAngle;
    //Servo*myServo;
    int motorDirection;
    int motorPower;
    float PIO_P;
    float PIO_D;
};


#endif
