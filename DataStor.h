#ifndef DATA_STOR_H
#define DATA_STOR_H

class DataStor{
  private:
    //road:
      char sign;
      char light;
    //line:
      float exc;
      bool distance;
  public:
    char getSign();
    void setSign(char _sign);
    char getLight();
    void setLight(char _Light);
    float getExc();
    void setExc(float _exc);
    bool getDistance();
    void setDistance(bool _distance);
};



#endif
