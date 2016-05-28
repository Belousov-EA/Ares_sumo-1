#include "Control.h"
#include <Arduino.h>


Control::Control(){
  
}


void Control::setSpeed(float _speed){
  speed = _speed;
}


void Control::setAngle(float _angle){
  angle = _angle;
}

void Control::call(){
  toGo();
  toTurn();
}

void Control::toGo(){
  if(speed>0){
    digitalWrite(motorDirection, LOW);
  }else{
    digitalWrite(motorDirection, HIGH);
  }
  analogWrite(motorPower, constrain(abs(int(speed*255)), 0, 255));
}

void Control::toTurn(){
  int degree = int(angle *PIO_P+ PIO_D*(angle-oldAngle))+90;
  //Servo.write(degree);
  oldAngle = angle;
}

/*
void Control::setServo(Servo*_myServo){
  this->myServo = _myServo;
}
*/

void Control::init(){
  pinMode(motorDirection, OUTPUT);
}

