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
		cout << "Enter Triangle " << (i + 1) << " Height: ";
		cin >> t[i].height;
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
}
