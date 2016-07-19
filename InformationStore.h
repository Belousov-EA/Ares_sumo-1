#ifndef INFORMATION_STORE
#define INFORMATION_STORE

class InformationStore
{
  public:
    void setCondition(int Condition);
    int getCondition();
    
    void setAnalogRightD(int analogRight);
    int getAnalogRightD();

    void setAnalogLeftD(int analogLeft);
    int getAnalogLeftD();

    void setDigitRightD(bool digitRight);
    bool getDigitRightD();

    void setDigitMidD(bool digitMid);
    bool getDigitMidD();

    void setDigitLeftD(bool digitLeft);
    bool getDigitLeftD();
    
  private:
    int condition;
    int analogRightD;
    int analogLeftD;
    bool digitRightD;
    bool digitMidD;
    bool digitLeftD;
};
#endif
