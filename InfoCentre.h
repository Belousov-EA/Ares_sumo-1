#ifndef INFO_CENTRE_H
#define INFO_CENTRE_H

#include <Arduino.h>
#include "DataStor.h"
#include "Control.h"


class InfoCentre {
  public:
    InfoCentre();
    void call();
    void setDataStor(DataStor*);
    void setControl(Control*);
    void nothing();
    void greenLight();
    void yellowLight();
    void redLight();
    void stopSign();
    void peopleSign();
    void vozvrat();
  private:
    unsigned long nowTime;
    unsigned long oldTime;
    DataStor*myDataStor;
    Control*myControl;    
};




#endif
