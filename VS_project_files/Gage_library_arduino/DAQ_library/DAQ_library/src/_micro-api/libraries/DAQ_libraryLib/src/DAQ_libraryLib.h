/*
 Name:		DAQ_libraryLib.h
 Created:	10/12/2016 8:22:26 PM
 Author:	julian
 Editor:	http://www.visualmicro.com
*/

#include "string.h"
#ifndef _DAQ_libraryLib_h
#define _DAQ_libraryLib_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"



class Gage
{
public:
	Gage(int GageNumber); //constructor, takes pin to attach to gauge PRIORITY
	int readGage(int GageNumber); //gaugenumber is pin associated with this gauge PRIORITY 
	void storeInEEPROM(int value, int address); //probably used for calibration only
	void sensorCalFinsihed(int LEDNum); //used for calibration only
	void resetLEDs(int* ledNumber, int arraySize);// resets array states and passes length of array to loop through
	int getTimeStamp(int offset); //subtracts offset from microseconds, used to sync all the boards together
	String formatEntry(int value, int time); //converts sensor reading and timestamp to string, formats with commas seperating //PRIORITY
	//note the above "String" is not a primitive datatype
	void saveData(String entry, String filepath); //opens/closes file stream, creates file if dones't exist, takes care of naming files PRIORITY
	void resetFileName(); //resets EEPROM value responsible for sequentially naming files

						  //note: private will mostly be for variables
private:


};



#else
#include "WProgram.h"
#endif


#endif

