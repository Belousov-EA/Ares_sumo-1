#ifndef TIMER_H
#define TIMER_H

#include "Control.h"
#include "Distance.h"
#include "InfoCentre.h"
#include "Exc.h"
#include "SerialWork.h"


#include <Arduino.h>

class Timer{
  public:
    Timer();
    void call();
    void setInfoCentre(InfoCentre*);
    void setDistance(Distance*);
    void setControl(Control*);
    void setExc(Exc*);
    void setSerialWork(SerialWork*);
    
  private:
    int dtInfoCentre;
    int dtDistance;
    int dtControl;
    int dtExc;
    int dtSerial;
    int dtVideo;
    int dtSerialWork;
    
    InfoCentre*myInfoCentre;
    Distance*myDistance;
    Control*myControl;
    Exc*myExc;
    SerialWork*mySerialWork;
    
    unsigned long oldTime;
    unsigned long nowTime;

    bool distanceFlag;
    bool excFlag;
    bool serialWorkFlag;
    bool infoCentreFlag;
    bool controlFlag;
    
};


#endif
