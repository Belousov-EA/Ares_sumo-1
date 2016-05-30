#include "InfoCentre.h"


InfoCentre::InfoCentre(){
  
}



void InfoCentre::call(){
  if(!myDataStor ->getDistance()){
    if(myDataStor ->getDark()>0){
      if((myDataStor -> getSign() == 'n')&&(myDataStor -> getLight()== 'n')){
        nothing();      
      }else if(myDataStor -> getLight() == 'a'){
        redLight();      
      }else if(myDataStor -> getLight() == 'b'){
        yellowLight();      
      }else if(myDataStor -> getLight() == 'c'){
        greenLight();      
      }else if (myDataStor -> getSign() == 'd'){
        stopSign();    
      }else if(myDataStor ->getSign() == 'e'){
        peopleSign();
      }
      myDataStor -> setPredExc(myDataStor -> getExc());
    }else {
      vozvrat();
  }
    myControl -> setSpeed(0);
  }
}


void InfoCentre::setDataStor(DataStor*Data){
  this -> myDataStor = Data;
}


void InfoCentre::setControl(Control* _myControl){
  this -> myControl = _myControl;
}

void InfoCentre::nothing(){
  myControl ->setSpeed(1);
  myControl -> setAngle(myDataStor->getExc());
}

void InfoCentre::redLight(){
  myControl ->setAngle(myDataStor ->getExc());
  if(myDataStor->getVideo()=='i'){
    myControl ->setSpeed(0);
  }else if (myDataStor->getVideo()=='n'){
    myControl -> setSpeed(0.5);
  }
}

void InfoCentre::yellowLight(){
  myControl ->setSpeed(0.5);
  myControl ->setAngle(myDataStor ->getExc());
}

void InfoCentre::greenLight(){
  nothing();
}

void InfoCentre::stopSign(){
  //next steps: to do go after heving stop
  myControl -> setAngle(myDataStor -> getExc());
  if (myDataStor -> getVideo()=='n'){
    myControl -> setSpeed(0.5);
    stopFlag = true;
  }else if((myDataStor -> getVideo()=='i')&&(stopFlag)){
    myControl -> setSpeed(0.00);
    firstStopTime = millis();
    stopFlag = false;
  }else if((myDataStor -> getVideo()=='i')&&(!stopFlag)&&(millis()-firstStopTime<5000)){
     myControl -> setSpeed(0.00);
  }else if((myDataStor -> getVideo()=='i')&&(!stopFlag)&&(millis()-firstStopTime>5000)){
    nothing();
  }else if((myDataStor -> getVideo()=='i')&&(!stopFlag)&&(millis()-firstStopTime>10000)){
    stopFlag = true;
    nothing();
  }
}

void InfoCentre::peopleSign(){
  myControl -> setAngle(myDataStor -> getExc());
  myControl -> setSpeed(0.5);
}

void InfoCentre::vozvrat(){
  myControl -> setSpeed(0.5);
  if(myDataStor -> getPredExc()>0.00){
    myControl -> setAngle(1.00);
  }else {
    myControl -> setAngle(-1.00);
  }
}

