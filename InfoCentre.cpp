#include "InfoCentre.h"


InfoCentre::InfoCentre(){
  
}



void InfoCentre::call(){
  if(bool distance = myDataStor -> getDistance()){
    myControl->setSpeed(0.00);
  }else {
    myControl -> setSpeed(1.00);
  }
}


void InfoCentre::setDataStor(DataStor*Data){
  this -> myDataStor = Data;
}


void InfoCentre::setControl(Control* _myControl){
  this -> myControl = _myControl;
}

