//Max.cpp Source File and Functions to Get Area and Maximum
#include "triangle2.h"

//Function to Determine Maximum Triangle 
int MaxTriangle (vector<Triangle>& tri) {
	//Variable Declaration
	int maxIndex = 0;
	int i;

	//Function Call
	double max = ComputeArea(tri[maxIndex]), temp;

	//For Loop to Determine Max Triangle
	for (i = 1; i < 5; i++){

		//Temp to hold Value for Check
		temp = ComputeArea(tri[i]);

		//If Check to Compare Areas to Detemine Max
		if (temp > max){
			max = temp;
			maxIndex = i;
		}
	}

	//Return Index of Max Triangle
	return maxIndex;
}

//Function to Determine and Return Each Triangle's Area
float ComputeArea(Triangle& t) {

	//Detemine Triangle Area
	t.area = (t.base * t.height) / 2.0;

	//Return Area
	return t.area;
}
