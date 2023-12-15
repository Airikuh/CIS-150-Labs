//Program that Displays Sum, Average, Lowest, and Highest Numbers in Array
#include <iostream>

using namespace std;

//Function that Calculates Sum 
int CalculateSum(int arr[], int SIZE) {
	int sum= 0;
	for (int i = 0; i < SIZE; i++) {
		sum+= arr[i];
	}
	return sum;
}

//Function that Calculates Average
double CalculateAverage(int arr[], int SIZE) {
	float total = 0;
	int count = 0;

	for (int i = 0; i < SIZE; i++) {
		if (arr[i] > 0) {
			total += arr[i];
			count++;
		}
	}
	return (total / count);
}

//Function that Gets the Lowest Integer
int GetLowest(int arr[], int SIZE) {

	int min;
	min = arr[0];
	for (int i = 1; i < SIZE; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

//Function that Gets the Highest Integer
int GetHighest(int arr[], int SIZE) {

	int max;
	max = arr[0];
	for (int i = 1; i < SIZE; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}




int main() {

	//Array Declaration
	const int SIZE = 20;
	int values[SIZE] = { 0, 23, 34, -7, 110, 42, -350, 424, 25, 99, 10, 05, 50, -5, 1, 200, -350, 437, 25, 147 };


	//Display Results
	cout << "The Sum of All Numbers in the Array is : " << CalculateSum(values, SIZE) << endl;
	cout << "The Average of the Positive Numbers is : " << CalculateAverage(values, SIZE) << endl;
	cout << "The Lowest Number in the Array is : " << GetLowest(values, SIZE) << endl;
	cout << "The Highest Number in the Array is : " << GetHighest(values, SIZE) << endl;

	return 0;
}
