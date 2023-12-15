//Program that Populates Array Based on Random Number, User Input Values, Averages them
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;
int main()
{	
	//Variable Declaration
	int R;
	int values;
	double average;
	int sum = 0.0;
	
	//Seed Random Number
	srand(time(0));

	//Get and Display Random Number
	cout << "Here is a random number between 7 and 12: " << endl;
	R = rand() % 5 + 7;
	cout << R << endl;
	
	//Create Array
	int randomArray[7];

	cout << "Please enter " << R << " integers ranging from -100 to 100: " << endl;
	int i = 0;
	
	//While Loop 
	while (i < R) {
		cout << "Enter Integer: ";
		cin >> randomArray[i];
		while (randomArray[i] < -100 || randomArray[i] > 100) {
			cout << "Enter a number between -100 and 100: " << endl;
			cout << "Enter Integer: ";
			cin >> randomArray[i];
		}
		sum = sum + randomArray[i];
		i++;
	}

	
//Get and Display Average
	average = static_cast<float>(sum) / R;
	cout << "The average for " << R << " values is : " << average << endl;

	system("pause");

	return 0;
}
 
