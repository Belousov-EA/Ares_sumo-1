#include "Control.h"
#include "DataStor.h"
#include "Distance.h"
#include "Exc.h"
#include "InfoCentre.h"
#include "SerialWork.h"
#include "Timer.h"
//#include <Servo.h>

Control myControl;
DataStor myDataStor;
Distance myDistance;
Exc myExc;
InfoCentre myInfoCentre;
SerialWork mySerialWork;
Timer myTimer;
//Servo myServo;


void setup() {
  //Servo:
    //myServo.init();

  //Control:
    myControl.init();
    //myControl.setServo(&myServo);

  //Distance:
    myDistance.init(1, 2, 3);//нужно поставить пины дальномеров
    myDistance.setDataStor(&myDataStor);

  //Exc:
    myExc.setDataStor(&myDataStor);

  //InfoCentre:
    myInfoCentre.setControl(&myControl);
    myInfoCentre.setDataStor(&myDataStor);

  //SerialWork:
    mySerialWork.init();
    mySerialWork.setDataStor(&myDataStor);

  //Timer:
    myTimer.setControl(&myControl);
    myTimer.setDistance(&myDistance);
    myTimer.setExc(&myExc);
    myTimer.setInfoCentre(&myInfoCentre);
    myTimer.setSerialWork(&mySerialWork);
}

void loop() {
  myTimer.call();
}
