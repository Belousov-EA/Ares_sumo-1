#include "Distance.h"

Distance::Distance(){
   distForwardLeft = 1;
   distForwardRight = 2;
   critik = 200;
   pinMode(1, INPUT);
   pinMode(2, INPUT);
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

