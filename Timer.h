#ifndef TIMER_H
#define TIMER_H

#include "Control.h"
#include "Distance.h"
#include "InfoCentre.h"

#include <Arduino.h>

class Timer{
  public:
    Timer();
    void call();
    void setInfoCentre(InfoCentre*);
    void setDistance(Distance*);
    void setControl(Control*);
    
  private:
    int dt_InfoCentre;
    int dt_Distance;
    int dt_Control;
    
    InfoCentre*myInfoCentre;
    Distance*myDistance;
    Control*myControl;
    
    unsigned long oldTime;
    unsigned long nowTime;

    bool distanceFlag;
    
};


#endid
