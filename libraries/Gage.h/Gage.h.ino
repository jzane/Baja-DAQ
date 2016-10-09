/**
 * CLASS GAGE
 * TO BE USED WITH 2016/17 WESTERN ENGINEERING BAJA-SAE DAQ SYSTEM
 * CREATED BY JULIAN ZANE, OCTOBER 09,2016
 * 
 */
 #ifndef Gage_h
 #define Gage_h
#include "Arduino.h"
 
class Gage
{
public:
int readGage(int GageNumber); //gaugenumber is pin associated with this gauge
void storeInEEPROM(int value, int address); //probably used for calibration only
void sensorCalFinsihed(int LEDNum); //used for calibration only


//note: private will mostly be for variables
private:

  
};

 #endif Gage_h
