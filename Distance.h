#ifndef DISTANCE_H
#define DISTANCE_H

#include <Arduino.h>

class Distance{
  public:
    bool isAnythingForward();
    void setDataStor(DataStor*);
    void call();
  private:
    int distForwardLeft;
    int distForwardRight;
    int critik;
    DataStor*myDataStor;
};


#endif
