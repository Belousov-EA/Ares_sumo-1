#ifndef TIMER_H
#define TIMER_H

#include "Control.h"
#include "Distance.h"
#include "InfoCentre.h"
#include "Exc.h"

#include <Arduino.h>

class Timer{
  public:
    Timer();
    void call();
    void setInfoCentre(InfoCentre*);
    void setDistance(Distance*);
    void setControl(Control*);
    void setExc(Exc*);
    
  private:
    int dtInfoCentre;
    int dtDistance;
    int dtControl;
    int dtExc;
    int dtSerial;
    int dtVideo;
    
    InfoCentre*myInfoCentre;
    Distance*myDistance;
    Control*myControl;
    Exc*myExc;
    
    unsigned long oldTime;
    unsigned long nowTime;

    bool distanceFlag;
    bool excFlag;
    
};


#endif
