//Program that Opens File, Creates Two Output Files Storing Specific Information in Each
#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

int main()

{
	//File Declaration
	ifstream infile;
	//Variable Declaration
	string line;
	//Input into Vector for Getting Specific Information Later
	char fileName[20];
	//File Open
	infile.open("poem.txt");

	//Create and Print Data into Files
	ofstream myfile("toUpperCase.txt"); 
	ofstream myfile2("statistics.txt"); 
	
	//Variable Declaration for Specific Tests
	int noOfCharacter = 0;
	int linelength[100];
	int count = 0;
	int longestLineLength = 0;

	//Vector for Character Check
	vector<int> charCount;
	for (int i = 0; i < 26; i++) {
		charCount.push_back(0);
	}
	//File Open 
	if (infile.is_open()) 
	{
		//File Conversion to All UpperCase
		while (getline(infile, line, '\n')) { 
			transform(line.begin(), line.end(), line.begin(), ::toupper);
			myfile << line << endl;

				//Character Checks
for (int i = 0; i < line.length(); i++) {
				if (line[i] != ' ') {
					noOfCharacter++;
				}

				int charAscii = line[i];

				if (charAscii >= 65 && charAscii <= 90) {
					charAscii -= 65;
					charCount[charAscii]++;
				}

			}
			//Length Check
			linelength[count] = line.length();

			if (longestLineLength < line.length()) {
				longestLineLength = line.length();
			}

			count++;

		}

		//Writing Information into Second Output File
		myfile2 << "The Number of Characters is: " << noOfCharacter << endl << endl;

		for (int i = 0; i < count; i++) {
			myfile2 << "The Length of Line " << i + 1 << " is : " << linelength[i] << endl;
		}

		myfile2 << "The Length of the Longest Line is : " << longestLineLength << endl;

		myfile2 << "A Count of Each Time a Letter Appears in the File:" << endl;
		for (int i = 0; i < 26; i++) {

			if (charCount[i] != 0) {
				char c = 'A' + i;
				myfile2 << c << "\t" << charCount[i] << endl;

			}

		}

		myfile2 << "The Number of Lines in Original File is : " << count << endl;


		//File Close
		infile.close(); 

	}
	//Else Case if Bad Input
	else 

	{
		cout << "Error Finding File" << endl;
	}
	
	//Open and Display Files
	ifstream myfileOriginal("poem.txt");

	if (myfileOriginal.is_open()) {
		while (getline(myfileOriginal, line)) {
			cout << line << endl;
		}
	}

	cout << endl;

	ifstream upperFile("toUpperCase.txt");

	if (upperFile.is_open()) {
		while (getline(upperFile, line)) {
			cout << line << endl;
		}
	}

	cout << endl;

	ifstream statsFile("statistics.txt");

	if (statsFile.is_open()) {
		while (getline(statsFile, line)) {
			cout << line << endl;
		}
	}


	return 0;

}
