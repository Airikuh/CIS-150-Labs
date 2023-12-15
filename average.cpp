//Program that Prompts User for File Input then Gets and Displays Average
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Function Prototype
void testResults(ifstream& ins, ofstream& ofs);

int main()
{	
	//Variable Declaration
	string fileName1;
string fileName2;
	string first, last;
	float average;
	float grade1;
	float maxGrade;

	//File Streams
	ifstream ins;
	ofstream ofs;

	//User File Input
	cout << "Please Enter the File Name:" << endl;
	cin >> fileName1;
	
	//Open File and Convert to String with str
	ins.open(fileName1.c_str());
	
	//Function Call
	testResults(ins, ofs);

	//Close Files
	ins.close();
	return 0;
}

//Function for Accepting File Input and Calculating and Displaying Average
void testResults(ifstream& ins, ofstream& ofs)
{
	//Variable Declaration
	float sum = 0;
	string first, last;
	float grade1;
	float average;
	
	//While Loop to Sum Input As Long as it is Not the End of File
	while (!ins.eof())
	{
		ins >> first >> last >> grade1;
		sum = sum + grade1;
	}

	//Calculate Average and Display
	average = sum / 6;
	cout << "The Average student score is: ";
	cout << average;
	}

