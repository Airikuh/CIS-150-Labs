//Source.cpp
#include "Computer.h"
#include"Functions.cpp"
#include<iostream>
#include<fstream>
#include<vector>
#include<string>

//Function for Vector and File
void ComputerAndFile(vector<Computer*> sevenObjects, string& name, ofstream& file);
using namespace std;

int main() {

	//Variable Declaration
	string name;
	ofstream file;

	//Single Computer
	Computer singleComputer("Carbon", 124);

	//Print for Single Computer
	singleComputer.PrintMe();

	//Vector Declaration
	vector<Computer*> sevenObjects(7);

	//Function Call
	ComputerAndFile(sevenObjects, name, file);




	return 0;
}


//Function to Open File and Fill Vector
void ComputerAndFile(vector<Computer*> sevenObjects, string& name, ofstream& file) {
	
	//Variable Declaration
	string color;
	int size;

	cout << "Please enter the Name of the File You Would Like the Output to be Written: ";
	cin >> name;

	//Explicit File Open
	file.open(name);

	//Iterate to Fill Vector
	cout << "Please Enter Colors and Numbers for Each Computer: " << endl;
	for (int i = 0; i < 7; i++) {
		//Get Color from User
		cout << "Computer " << sevenObjects[i] << "Color: ";
		getline(cin, color);
		//Change Information at 4th Index if Size is Larger than 6 Characters
		while (i = 3) {
			if (color.size() > 6) {
				color.replace(1, 1, "@");
			}
		}
		//Get Size from User
		cout << "Size: ";
		cin >> size;
		while (size < 0) {
			cout << "Please Enter a Non-Negative Number: ";
			cin >> size;
		}

		//Write to File
		Computer* newComputer = nullptr;
		Computer* tmp = nullptr;
		newComputer = new Computer(color, size);
		while (file << newComputer) {
			sevenObjects.push_back(newComputer);
		}
	
	

	}


	file.close(name);
}


