#include "DistanceD.h"

DistanceD::DistanceD(int leftPin, int midPin, int rightPin)
:left(leftPin),
mid(midPin),
right(rightPin)
{
  //пустое тело
}


void DistanceD::init(InformationStore* myStore)
{
  this -> store = myStore;
}


void DistanceD::call()
{
  store -> setDigitRightD(digitalRead(right));
  store -> setDigitMidD(digitalRead(mid));
  store -> setDigitLeftD(digitalRead(left));
}

