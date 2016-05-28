#ifndef EXC_H
#define EXC_H

#include <Arduino.h>
#include "DataStor.h"


class Exc{
  public:
    float getExc();
    void call();
    float getDark();
    void setDataStor(DataStor*);
  private:
    float dark;
    DataStor*myDataStor;
    
};

#endif
