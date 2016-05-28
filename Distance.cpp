#include "Distance.h"

void Distance::init(int _distForwardLeftPin, int _distForwardRightPin, int _critik){
   distForwardLeftPin = _distForwardLeftPin ;
   distForwardRightPin = _distForwardRightPin;
   critik = _critik;
   pinMode(distForwardLeftPin, INPUT);
   pinMode(distForwardRightPin, INPUT);
}

bool Distance::isAnythingForward(){
  int distForwardLeft = constrain(round(10000/analogRead(distForwardLeftPin)),0,200);
  int distForwardRight = constrain(round(10000/analogRead(distForwardRightPin)),0,200);
  if((distForwardLeft<critik)||(distForwardRight<critik)){
    return false;
  }else{
    return true;
  }
}


void Distance::setDataStor(DataStor*Data){
  this -> myDataStor = Data;
}

void Distance::call(){
  myDataStor -> setDistance(isAnythingForward());
}

