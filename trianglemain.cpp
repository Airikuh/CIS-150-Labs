//Source File Triangle that Holds Array, Loop, Call Function
#include "triangle.h"

using namespace std;

int main() {

	//Structure and Array Declarations
	struct Triangle t[5];
	float area[5];

	//Get User Input for Triangle's Base and Height
	for (int i = 0; i < 5; i++) {
		cout << "Enter Triangle " << (i + 1) << " Base: ";
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

		while (t[i].base < 0) {
			cout << "Please Enter a Positive Value for the Base: ";
			cin >> t[i].base;
		}

		cout << "Enter Triangle " << (i + 1) << " Height: ";
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
		while (t[i].height < 0) {
			cout << "Please Enter a Positive Value for the Height: ";
			cin >> t[i].height;
		}
		cout << endl;

		//Compute Area Function Call
		area[i] = ComputeArea(t[i]);
	}

	//Determine Maximum Triangle Function Call
	int max_Index = Max(t);

	//Display up to Two Decimal Places
	cout << setprecision(2) << fixed;

	//For Loop to Display Triangle's Information
	for (int i = 0; i < 5; i++) {
		if (i != max_Index)
			cout << t[i].base << " x " << t[i].height << " has area " << area[i] << endl;
		else
			cout << t[i].base << " x " << t[i].height << " has area " << area[i] << " -*Largest!" << endl;
	}

	cout << endl;
	return 0;
}
Source File: trianglemax.cpp
//Source File with Functions to Calculate Max and Area
#include "triangle.h"

//Max Triangle Function Passing Array as Parameter
int Max(struct Triangle t[]) {

	//Variable Declarations
	int max_Index = 0;
	int i;
	float temp;

	//Function Call to Calculate Area and Return 
	float Max_Area = ComputeArea(t[max_Index]);

	//Loop to Check for Largest Triangle
	for (i = 1; i < 5; i++) {
		temp = ComputeArea(t[i]);

		if (temp > Max_Area) {
			Max_Area = temp;
			max_Index = i;
		}
	}

	return max_Index;
}


//Compute Area Function with Triangle Structure as Parameter
float ComputeArea(struct Triangle t){
	return (t.base * t.height) / 2.0;
}
