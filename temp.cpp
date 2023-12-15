//Program that get User Input Temperature, Does if Comparisons, and Displays Output Based on Temperature Value
#include <iostream>

using namespace std;

int main()
{
	//Variable Declaration
	int temperature;

	//Temperature Input
	cout << "Please enter the current temperature(F) : ";
	cin >> temperature;

	//If and Else Statements Judging Input Value
	if (temperature > -9) {
		if ((temperature > 83) && (temperature < 200))
			cout << "Go swimming."<< endl;
		if ((temperature > 76) && (temperature <=83))
			cout << "Turn on air conditioning." << endl;
		if ((temperature > 68) && (temperature <= 76))
			cout << "Do nothing." << endl;
		if ((temperature > 48) && (temperature <= 68))
			cout << "Turn on heat." << endl;
		if ((temperature > 30) && (temperature <= 48))
			cout << "Wear a heavy coat." << endl;
		if (temperature < -10)
			cout << "Wear gloves." << endl;
	}
	else
		cout << "Stay inside, make a hot fire."<< endl;


	system("pause");
	return 0;
}

