#include "Timer.h"


void Timer::call(){
  nowTime = millis();
  int dt = nowTime - oldTime;
  if ((dt<dtDistance)&&(!distanceFlag)){
    myDistance -> call();
    distanceFlag = true;
  }else if((dt>=dtDistance)&&(dt<=dtExc)&&(!excFlag)){
    myExc ->call();
    excFlag =true;
  }

  // last step: reset flags and reset timestamp
  if (dt>200){
    distanceFlag = false;
    excFlag = false;
    oldTime = nowTime;
  }
}

