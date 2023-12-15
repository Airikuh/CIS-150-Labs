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

3 a. **Fixed Code in Case of User Error 
