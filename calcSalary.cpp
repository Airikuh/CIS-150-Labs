//Program that Computes Weekly Salary With Files
#include <iostream>
#include <fstream>

using namespace std;

//Function prototype
void calculateSalary(ifstream& fin, ofstream& fout);

int main()
{
	//Create input file stream object
	ifstream fin;
	//Create output file stream object
	ofstream fout;

	//Open file for Reading
	fin.open("employees.txt");
	//Open file for Writing
	fout.open("results.txt");

	//Successful Input File Check
	if (!fin)
	{
		cout << "File cannot be opened for reading" << endl;
		exit(1);
	}

	//Successful Output File Check
	if (!fout)
	{
		cout << "File cannot be opened for writing" << endl;
		exit(1);
	}

	//Function Call
	calculateSalary(fin, fout);
}

//Function that Reads and Processes data from Input File and Writes and Computes to Output File with Parameters
void calculateSalary(ifstream& fin, ofstream& fout)
{	
	//Variable Declaration
	string fname;
string lname;
	double hours;
double rate;
double weeklySalary;

	//While Loop Execute Until End of File
	while (!fin.eof())
	{
		//Read Data
		fin >> fname >> lname >> hours >> rate;

		//Weekly Salary Calculation
		if (hours > 40)
		{	
			//Overtime Calculation
			double overtime = hours - 40;
			weeklySalary = rate * 40 + rate * overtime * 1.5;
		}
		else
		{
			//Normal Calculation
			weeklySalary = rate * hours;
		}

		//Data into Output File
		fout << lname << " " << fname << " " << weeklySalary << endl;
	}
}

