#include "InformationStore.h"


void InformationStore::setCondition(int Condition)
{
  condition=Condition;
}



int InformationStore::getCondition()
{
  return condition;
}



void InformationStore::setAnalogRightD(int analogRight)
{
  analogRightD=analogRight;
}



int InformationStore::getAnalogRightD()
{
  return analogRightD;
}


void InformationStore::setAnalogLeftD(int analogLeft)
{
  analogLeftD=analogLeft;
}



int InformationStore::getAnalogLeftD()
{
  return analogLeftD;
}



 void InformationStore::setDigitMidD(bool digitMid)
 {
  digitMidD=digitMid;
 }


 
bool InformationStore::getDigitMidD()
{
  return digitMidD;
}



void InformationStore::setDigitRightD(bool digitRight)
 {
  digitRightD=digitRight;
 }


 
bool InformationStore::getDigitRightD()
{
  return digitRightD;
}



void InformationStore::setDigitLeftD(bool digitLeft)
{
  digitLeftD=digitLeft;
}



bool InformationStore::getDigitLeftD()
{
  return digitLeftD;
}
