#ifndef DISTANCE_H
#define DISTANCE_H

#include <Arduino.h>
#include "DataStor.h"

class Distance{
  public:
    void init(int _distForwardLeftPin, int _distForwardRightPin, int _critik);
    bool isAnythingForward();
    void setDataStor(DataStor*);
    void call();
  private:
    int distForwardLeftPin;
    int distForwardRightPin;
    int critik;
    DataStor*myDataStor;
};


#endif
