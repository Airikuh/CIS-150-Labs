
//Program to Display Random Number within Range 7-12
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() 
{	
	//Variable Declaration
	int R;
	//Seed Random Number
	srand(time(0));

	cout << "Here is a random number between 7 and 12: " << endl;

	//Get and Display Number
	R = rand() % 5 + 7;
	cout << R << endl;

	system("pause");


}
