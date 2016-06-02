#include "Control.h"



Control::Control(){
  
}

void Control::setMotor(DualVNH5019MotorShield*_myMotor){
  this -> myMotor =_myMotor;
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
   myMotor -> setM2Speed(constrain(int(speed*400), 0, 400));
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


