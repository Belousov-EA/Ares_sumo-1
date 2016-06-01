#include "Exc.h"

float Exc::getExc(){
  const int SENSOR_COUNT = 8;
  int WHITE[SENSOR_COUNT]= {72,  61,  61 , 65,  62,  60,  62,  65  };
  int BLACK[SENSOR_COUNT]= {783,  683, 647, 711, 670, 600, 663, 734 };
  int Sensors[SENSOR_COUNT] = {8, 9, 10, 11, 12, 13, 14, 15};
  int Weight[SENSOR_COUNT]= {-4,-3,-2,-1,1,2,3,4};
  int znachenia_sensorov[SENSOR_COUNT];
  float line_pro[SENSOR_COUNT];
  
  float sum = 0;
  dark=0;
  int perehod=0;

  for (int i=0 ; i < SENSOR_COUNT; i++ ){
    znachenia_sensorov[i]=analogRead(Sensors[i]);
  }
  Serial.println();
  for (int i=0;i<SENSOR_COUNT;i++){
    if (znachenia_sensorov[i]> BLACK[i]){
      line_pro[i]=1;
    }else if (znachenia_sensorov[i]<WHITE[i]) {
      line_pro[i]=0;
    }else{
      line_pro[i]=float(znachenia_sensorov[i]-WHITE[i])/float(BLACK[i]-WHITE[i]);
      line_pro[i]=constrain(line_pro[i],0,1);
    }
  }
  
  
  for (int i=0 ; i < SENSOR_COUNT; i++ ){
    sum=sum+Weight[i]*line_pro[i];
    dark=dark+line_pro[i];
    if(i>0){
      if(abs(line_pro[i]-line_pro[i-1])>0.7){
        perehod++;
      }
    }
  }
  
  if ((dark>0)&&(perehod<3)){
    sum=sum/(dark*4);
    return sum;
  }else{
    return 0.00;
  }  
}

void Exc::call(){
  myDataStor -> setExc( getExc());
  myDataStor ->setDark(getDark());
}

void Exc::setDataStor(DataStor*_myDataStor){
  this -> myDataStor = _myDataStor;
}

float Exc::getDark(){
  return dark;
}

