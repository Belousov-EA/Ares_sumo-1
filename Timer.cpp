#include "Timer.h"


void Timer::call(){
  nowTime = millis();
  int dt = nowTime - oldTime;
  if ((dt<dtDistance)&&(!distanceFlag)){
    myDistance -> call();
    distanceFlag = true;
  }else if((dt>=dtDistance)&&(dt<dtExc)&&(!excFlag)){
    myExc ->call();
    excFlag =true;
  }else if ((dt>=dtExc)&&(dt<dtSerialWork)&&(!serialWorkFlag)){
    mySerialWork -> call();
    serialWorkFlag = true;
  }else if ((dt>=dtSerialWork)&&(dt<dtInfoCentre)&&(!infoCentreFlag)){
    myInfoCentre -> call();
    infoCentreFlag = true;
  }else if((dt>=dtInfoCentre)&&(dt<dtControl)&&(!controlFlag)){
    myControl -> call();
    controlFlag = true;
  }else  if (dt>200){ //нужно поставить время выполнения одного цикла
    distanceFlag = false;
    excFlag = false;
    serialWorkFlag = false;
    infoCentreFlag = false;
    controlFlag = false;
    excFlag = false;
    oldTime = nowTime;
  }
}


void Timer::setSerialWork(SerialWork*_mySerialWork){
  this -> mySerialWork = _mySerialWork;
}

void Timer::setExc(Exc*_myExc){
  this -> myExc = _myExc;
}

void Timer::setDistance(Distance*_myDistance){
  this -> myDistance = _myDistance;
}

void Timer::setInfoCentre(InfoCentre*_myInfoCentre){
  this -> myInfoCentre = _myInfoCentre;
}

void Timer::setControl(Control*_myControl){
  this -> myControl = _myControl;
}

