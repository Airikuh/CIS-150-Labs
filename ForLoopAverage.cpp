//Program to Populate User Input Array Based on Random Number Generated Using For Loop, Average Displayed
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
int main()
{
	//Variable Declaration
	int R;
	int values;
	double average;
	int sum = 0.0;

	//Random Number Seed
	srand(time(0));


	//Display Random Number
	cout << "Here is a random number between 7 and 12: " << endl;


	R = rand() % 5 + 7;
	cout << R << endl;

	//Create Array
	int randomArray[7];

	//For Loop to populate Array
	cout << "Please enter " << R << " integers ranging from -100 to 100: " << endl;
	for (int i =0; i < R; i++) {

		cout << "Enter Integer: ";
		cin >> randomArray[i];
		while (randomArray[i] < -100 || randomArray[i] > 100) {
			cout << "Enter a number between -100 and 100: " << endl;
		cout << "Enter Integer: ";			
cin >> randomArray[i];
		}
		sum += randomArray[i];

	}
	
	//Average Array and Display Results
	average = static_cast<float>(sum) / R;
	cout << "The average for " << R << " values is : " << average << endl;

	system("pause");

	return 0;
}
