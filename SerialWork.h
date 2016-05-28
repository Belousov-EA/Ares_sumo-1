#ifndef SERIAL_WORK_H
#define SERIAL_WORK_H

#include <Arduino.h>
#include "DataStor.h"

class SerialWork{
  public:
    void getSignal();
    void init();
    void setDataStor(DataStor*);
    void call();
    char getVideo();
    char getSign();
    char getLight();
  private:
    char video;
    char sign;
    char light;
    DataStor*myDataStor;
};

#endif 
