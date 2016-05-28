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
  private:
    DataStor*myDataStor;
    Control*myControl;
    
};




#endif
