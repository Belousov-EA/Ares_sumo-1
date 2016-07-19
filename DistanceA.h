#ifndef DISTANCE_A
#define DISTANCE_A

#include <Arduino.h>

#include "InformationStore.h"

class DistanceA 
{
  public:
    DistanceA(int rightPin, int leftPin);
    void init(InformationStore*);
    void call();
  private:
    const int right;
    const int left;
    InformationStore * store;
    
};

#endif
