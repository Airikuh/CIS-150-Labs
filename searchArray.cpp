//Program that Gets a Number from a User, Searches a 2D Array
#include <iostream>


using namespace std;

//Function to Get Number from User
int UserNumber() {
	int number;
	cout << "Please Enter an Integer to Search for:  ";
	cin >> number;
	return number;
}


//Pointer to 2D Array and Search for Number
int* SearchNumber(int numberArray[6][6], int number) {

	//Static Declaration to Hold Values Through Program 
	static int values[2];

	//2D Array Row Search
	for (int row = 0; row < 6; row++)
	{
		//2D Array Column Search
		for (int column = 0; column < 6; column++)
		{	
			//If Number is Found Return Values and Location Beginning at One
			if (number == numberArray[row][column])
			{
				values[0] = row + 1;
				values[1] = column + 1;
				return values;
			}

			//If Not Found Return Values
			if (number < numberArray[row][column])
			{
				values[0] = -1;
				values[1] = -1;
				return values;
			}
		}
	}

}

int main()
{
	//Function Call for Number Input
	int number = UserNumber();

	//2D Array
	int numberArray[6][6] = {
		{1,3,5,7,9,11},
	{15,17,19,21,23},
	{27,29,33,37,39,43},
	{47,53,59,61,63,67},
	{73,75,79,85,89,91},
	{93,95,97,99,111,115}
	};

	//Pointer Declaration and Assign to Function Call Along with Function Call
	int* check = SearchNumber(numberArray, number);

	//Value of Pointer Value Return and Display
	if (*check == -1) {
		cout << "Target " << number << " not found";
	}
	else
		cout << "Target " << number << " found at row " << *check << ",  and column " << *(check + 1) << "!";

	return 0;
}
