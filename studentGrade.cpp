//Program that uses Switch Statement to Display Student Grade after Receiving User Input
#include <iostream>

using namespace std;

int main()
{

	char letterGrade;
	cout << "Please enter the student's grade: " << endl;
	cin >> letterGrade;



//Switch Statement	
switch (letterGrade) {
	case 'a':
	case 'A':
		cout << "Excellent" << endl;
		break;
	case 'b':
	case 'B':
		cout << "Good" << endl;
		break;
	case 'c':
	case 'C':
		cout << "Average" << endl;
		break;
	case 'd':
	case 'D':
	case 'e':
	case 'E':
		cout << "Below Average" << endl;
		break;
	case 'f':
	case 'F':
		cout << "Fail" << endl;
		break;
	default:
		cout << "Invalid Grade" << endl;
	}


	system("pause");
	return 0;
}

