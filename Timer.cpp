#include "Timer.h"


void Timer::call(){
  nowTime = millis();
  int dt = nowTime - oldTime;
  if ((dt<dt_Distance)&&(!distanceFlag)){
    Distance->call();
    distanceFlag = true
  }
  if (dt>200){
    distanceFlag = false;
    oldTime = nowTime;
  }
}

