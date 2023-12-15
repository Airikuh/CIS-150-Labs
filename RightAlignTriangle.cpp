//User Character Input, Height of Triangle, Output Right-Align Triangle
#include <iostream>
#include <iomanip>


using namespace std;
int main() {
	//Variable Declaration
	char character;
	int height;

	//Get User Input
	cout << "Please enter a character: " << endl;
	cin >> character;

	cout << "Please enter the height of a right triangle: " << endl;
	cin >> height;

	//Loop to ask until Integer in Range Received
	while (height <= 0) {
		cout << "Please enter a positive integer greater than 0: " << endl;
		cin >> height;
	}

	//Nested For Loops to Create and Display Triangle
	for (int i = 0; i < height; i++)
	{
		for (int j = 1; j < height - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < i + 1; j++) {
			cout << character;
		}

		cout << "\n";
	}
	return 0;


}

