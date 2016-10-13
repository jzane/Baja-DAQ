/**
 * CLASS GAGE
 * TO BE USED WITH 2016/17 WESTERN ENGINEERING BAJA-SAE DAQ SYSTEM
 * CREATED BY JULIAN ZANE, OCTOBER 09,2016
 * 
 */
 #ifndef Gage_h
 #define Gage_h
//#include "C:\Program Files (x86)\Arduino\hardware\arduino\avr\cores\arduino\Arduino.h"
#include <String.h>
#include <string>
 
using namespace std; //namespace <string> lives in

class Gage
{
public:
	Gage(int GageNumber); //constructor, takes pin to attach to gauge PRIORITY
int readGage(int GageNumber); //gaugenumber is pin associated with this gauge PRIORITY 
void storeInEEPROM(int value, int address); //probably used for calibration only
void sensorCalFinsihed(int LEDNum); //used for calibration only
void resetLEDs(int* ledNumber, int arraySize);// resets array states and passes length of array to loop through
int getTimeStamp(int offset); //subtracts offset from microseconds, used to sync all the boards together
void formatEntry(int value, int time); //converts sensor reading and timestamp to string, formats with commas seperating //PRIORITY
void saveData(string entry, string filepath); //opens/closes file stream, creates file if dones't exist, takes care of naming files PRIORITY
void resetFileName(); //resets EEPROM value responsible for sequentially naming files

//note: private will mostly be for variables
private:

  
};

 #endif Gage_h
