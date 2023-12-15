//Program that uses Recursive Function to Supply Power Answer 
#include <iostream>


using namespace std;

//Recursive Function
int powerRaised(int x, int n)
{
	//Base Case
	if (n == 0) {
		return 1;
	}
	//Base Case
	if (n == 1) {
		return x;
	}
	 //Recursive case
	else
		return x * powerRaised(x, n - 1);
}

int main()
{
	//Variable Declaration
	int x;
	int n;

	cout <<	"Please Input the Base Value: " << endl;
	cin >> x;
	
//While Loop for Invalid Input
	while (x < 0) {
		cout << "Please Input a Positive Integer: ";
		cin >> x;
	}

	cout << "Please Input the Exponent Integer: " << endl;
	cin >> n;
	//While Loop for Invalid Input
	while (n < 0) {
		cout << "Please Type a Positive Integer: ";
		cin >> n;
	}

	//Function Call and Display
	cout << x << " raised to the power of " << n << " is " << powerRaised(x,n) << endl;

	return 0;
}

1.-FIXED CODE 6b.
//Program that uses Recursive Function to Supply Power Answer 
#include <iostream>


using namespace std;

//Recursive Function
int powerRaised(int x, int n)
{
	//Base Case
	if (n == 0) {
		return 1;
	}
	//Base Case
	if (n == 1) {
		return x;
	}
	 //Recursive case
	else
		return x * powerRaised(x, n - 1);
}

int main()
{
	//Variable Declaration
	int x;
	int n;

	cout <<	"Please Input the Base Value: " << endl;
	cin >> x;
	
//While Loop for Invalid Input WITH FIXED VALUE
	while (x <= 0) {
		cout << "Please Input a Positive Integer: ";
		cin >> x;
	}

	cout << "Please Input the Exponent Integer: " << endl;
	cin >> n;
	//While Loop for Invalid Input
	while (n < 0) {
		cout << "Please Type a Positive Integer: ";
		cin >> n;
	}

	//Function Call and Display
	cout << x << " raised to the power of " << n << " is " << powerRaised(x,n) << endl;

	return 0;
}
