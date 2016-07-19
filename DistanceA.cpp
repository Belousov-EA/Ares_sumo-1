#include "DistanceA.h"

DistanceA::DistanceA(int rightPin, int leftPin)
:right(rightPin),
left(leftPin)
{
  //пустое тело
}


void DistanceA::init(InformationStore*myStore)
{
  this -> store = myStore;
}



void DistanceA::call()
{
  store -> setAnalogRightD(analogRead(right));
  store -> setAnalogLeftD(analogRead(left));
}

