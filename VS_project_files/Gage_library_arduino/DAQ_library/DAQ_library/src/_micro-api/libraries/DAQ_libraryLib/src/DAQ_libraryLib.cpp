/*
 Name:		DAQ_libraryLib.cpp
 Created:	10/12/2016 8:22:26 PM
 Author:	julian
 Editor:	http://www.visualmicro.com
*/

#include "DAQ_libraryLib.h"


//non default constructor
Gage::Gage(int GageNumber)
{
	pinMode(GageNumber, INPUT);
	digitalWrite(GageNumber, HIGH); //sets pullup resistor high, same as digital pin
}

//gets input voltage of bridge output
/**
*TODO:
*USE THE OFFSET TO 'ZERO' THE BRIDGE IN THE MICROCONTROLLER
**/
int Gage::readGage(int GageNumber)
{
	analogRead(GageNumber);
}

//formats entry in order to store in the data file
//using .csv files, to import directly into VBA/excel programs
String Gage::formatEntry(int value, int time)
{
	//Note String is  non-primitive data type
	String value_str; //create "String" object, different from a string object (primitive)
	String time_str;
	value_str = String(value); //set equals parameter
	time_str = String(time); //hopefully String class will automatically take care of the casting
	String fin = " " + value_str + ", " + time_str;
}

