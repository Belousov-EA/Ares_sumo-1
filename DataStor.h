#ifndef DATA_STOR_H
#define DATA_STOR_H

class DataStor{
  
  public:
    DataStor();
    char getSign();
    void setSign(char _sign);
    char getLight();
    void setLight(char _Light);
    float getExc();
    void setExc(float _exc);
    bool getDistance();
    void setDistance(bool _distance);
    float getDark();
    void setDark(float _dark);
    char getVideo();
    void setVideo(char _video);
  private:
    //road:
      char sign;
      char light;
      char video;
    //line:
      float exc;
      float dark;
      bool distance;
};



#endif
