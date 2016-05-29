#include "InfoCentre.h"


InfoCentre::InfoCentre(){
  
}



void InfoCentre::call(){
  
}


void InfoCentre::setDataStor(DataStor*Data){
  this -> myDataStor = Data;
}


void InfoCentre::setControl(Control* _myControl){
  this -> myControl = _myControl;
}

