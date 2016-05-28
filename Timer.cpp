#include "Timer.h"


void Timer::call(){
  nowTime = millis();
  int dt = nowTime - oldTime;
  if ((dt<dt_Distance)&&(!distanceFlag)){
    Distance->call();
    distanceFlag = true
  }

  // last step: reset flags and reset timestamp
  if (dt>200){
    distanceFlag = false;
    oldTime = nowTime;
  }
}

