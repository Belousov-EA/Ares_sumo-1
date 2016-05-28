#include "InfoCentre.h"


InfoCentre::InfoCentre(){
  
}



void InfoCentre::call(){
  if(bool distance = myDataStor -> getDistance()){
    myControl->setSpeed(0.00);
  }else {
    myContol -> setSpeed(1.00);
  }
}


void setDataStor(DataStor*Data){
  this -> myDataStor = Data;
}


void setControl(Control*_myControl){
  this -> myControl = _myControl;
}

