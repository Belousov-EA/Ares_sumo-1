#include "SerialWork.h"

void SerialWork::init(){
  Serial.begin(115200);
  Serial1.begin(115200);
}

void SerialWork::getSignal(){
 if(Serial.available()!=0){
    char incomming = Serial.read();
    if (incomming == 'f'){
      light = incomming;
      sign = incomming;
    } else if ((incomming == 'a')&&(incomming == 'b')&&(incomming == 'c')){
      light = incomming;
    } else if ((incomming == 'd')&&(incomming == 'e')){
      sign = incomming;
    }
  }
  if(Serial1.available()!=0){
    char _video = Serial1.read();
    if (_video == 'z'){
    video = 'n';
  }else if (_video == 'x'){
    video = 'i'; 
  }
  }
}

void SerialWork::setDataStor(DataStor*_myDataStor){
  this->myDataStor = _myDataStor;
}

char SerialWork::getLight(){
  return light;
}

char SerialWork::getSign(){
  return sign;
}

char SerialWork::getVideo(){
  return video;
}

void SerialWork::call(){
  getSignal();
  myDataStor -> setLight(getLight());
  myDataStor -> setSign(getSign());
  myDataStor -> setVideo(getVideo());
}

