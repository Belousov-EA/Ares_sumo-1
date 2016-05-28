#include "DataStor.h"

DataStor::DataStor(){
  sign = 'n';
  light = 'n';
  exc = 0.00;
  distance = false;
}

void DataStor::setSign(char _sign){
  sign = _sign;
}


char DataStor::getSign(){
  return sign;
}

char DataStor::getLight(){
  return light;
}

void DataStor::setLight(char _light){
  light = _light;
}

float DataStor::getExc(){
  return exc;
}

void DataStor::setExc(float _exc){
  _exc = exc;
}

bool DataStor::getDistance(){
  return distance;
}

void DataStor::setDistance(bool _distance){
  _distance = distance;
}

float DataStor::getDark(){
  return dark;
}

void DataStor::setDark(float _dark){
  dark = _dark;
}

