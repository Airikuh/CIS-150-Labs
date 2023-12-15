//Source File Triangle that Holds Vector, Loop, Call Function Source.cpp
#include <iostream>
#include <iomanip>
#include "triangle2.h"
#include <vector>
using namespace std;
int main(){

	//Vector Declaration
	vector<Triangle>t(5);

	//For Loop to Get Information for Triangles
	for (int i = 0; i < 5; i++){

		//User Input Triangle Base
		cout << "Enter Triangle " << (i + 1) << " Base : ";
		cin >> t[i].base;

		//While Loop to Loop if Input is Invalid
		while (cin.fail()) {
			cout << "Invalid entered!" << endl;

			//Buffer Clear
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Please Enter a Valid Base: ";
			cin >> t[i].base;
		}

		//While Loop in Case of Negative Values
		while (t[i].base < 0) {
			cout << "Please Enter a Positive Value for the Base: ";
			cin >> t[i].base;
		}


		//Get Triangle Height From User
		cout << "Enter Triangle " << (i + 1) << " Height : ";
		cin >> t[i].height;

		//While Loop to Loop if Input is Invalid
		while (cin.fail()) {
			cout << "Invalid entered!" << endl;

			//Buffer Clear
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Please Enter a Valid Height: ";
			cin >> t[i].height;
		}

		//While Loop Because Input Cannot be Negative
		while (t[i].height < 0) {
			cout << "Please Enter a Positive Value for the Height: ";
			cin >> t[i].height;
		}
		cout << endl;

	}

	//Function Call to Get Maximum
	int MaxIndex = MaxTriangle(t);

	//Set Display Information
	cout << setprecision(2) << fixed;

	//Triangle Base, Height, Area, and Maximum Display
	for (int i = 0; i < 5; i++){
		if (i != MaxIndex){
			cout << t[i].base << " x " << t[i].height << " has area " << t[i].area <<endl;
		}
		else{
			cout << t[i].base << " x " << t[i].height << " has area " << t[i].area << " -*Largest" << endl;
		}
	}
	cout << endl;
	return 0;
}
