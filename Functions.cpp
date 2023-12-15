//Functions.cpp File for all Function Definitions
#include "Computer.h"
#include<string>
#include<iostream>

//Get All Method to Change Private Attribute Information
void Computer::getAll(string& theColor, int& GB) {
	theColor = color;
	GB = sizeOfHardDriveGB;

}
//Get Size Method to Change Private Attribute Information
int Computer::getSizeOfHardDriveGB()const {
	return sizeOfHardDriveGB;

}
//Get Color Method to Change Private Attribute Information
string Computer::getColor()const {
	return color;
}

//Constructor That Takes Parameters Using Constructor Initializer List Style
Computer::Computer(string theColor, int GB) : color(theColor), sizeOfHardDriveGB(GB) {
	cout << "Constructor called with values: " << endl;
	cout << "Color: " << endl;
	cout << "Size Value: " << endl;
}

//Set Color and Size
void Computer::setAll(const string theColor, const int GB) {
	this->color = theColor;
	this->sizeOfHardDriveGB = GB;

}

//Print Method
void Computer::PrintMe() {
	cout << "I'm a " << color << " computer with a " << sizeOfHardDriveGB << " GB hard drive.";
}

//Friend Method for Input
ostream& operator<<(ostream& out, const Computer& c) {
	out << c.color << c.sizeOfHardDriveGB;
	return out;
}

//Friend Method for Output
istream& operator>>(istream& in, Computer& c) {
	in >> c.color;
	in >> c.sizeOfHardDriveGB;
	return in;
}
