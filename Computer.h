//Computer.h Header File
#pragma once
#include<iostream>
#include<string>
using namespace std;

//Computer Class
class Computer {
	//Computer Class Attribute
private:
	string color;
	int sizeOfHardDriveGB;

	//Computer Class Methods
public:
	//Get All Method with Pass by Reference
	void getAll(string&, int&);

	//Default Constructor with Specfic Values
	Computer() { color = "Magenta"; sizeOfHardDriveGB = 1000; }


	Computer(string theColor, int GB);

	//Set All Method
	void setAll(const string, const int);

	//Method to Get Size
	int getSizeOfHardDriveGB()const;

	//Method to Get Color
	string getColor()const;

	//Method to Print
	void PrintMe();

	//Deconstructor
	~Computer() {
		cout << "Destructor called with values: " << endl;
		cout << "Color: " << endl;
		cout << "Size Value: " << endl;
	}

	//Friend Methods to Read Values
	friend ostream& operator<<(ostream& out, const Computer&);
	friend istream& operator>>(istream& in, Computer&);

};


