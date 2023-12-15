//Program That Gets Answer Key From File, Compares Key to Student's Grades in Another File, Then Writes Grades into New File
#include <iostream>
#include<fstream>
#include <sstream>
#include<iomanip>
#include<string>

using namespace std;

// Author: Erika Valle-Baird
// Creation Date: 10/31/2019
// Last Modification Date:11/1/2019
// Purpose: compares answer with key (character per character). 
//          Each character represents the answer to a question. 
//          The number of questions is numOfQuestions.
//          Returns the number of correct answers

int gradeAnswer(string answers, string key, int numOfQuestions){
	int correctAnswers = 0; // Holds number of correct answers by user

	for (int i = 0; i < numOfQuestions; i++){
		if (answers[i] == key[i]){
			correctAnswers += 1;
		}
	}
	return correctAnswers;
}

// Author: Erika Valle-Baird
// Creation Date: 10/31/2019
// Last Modification Date:11/1/2019
// Purpose: Gets the number of correct questions and the total 
//          number of questions. Returns the grade out of 100

float calculatePointGrade(int numOfCorrectAnswers, int numOfQuestions){

	return ((float)numOfCorrectAnswers * 100 / numOfQuestions);
}

// Author: Erika Valle-Baird
// Creation Date: 10/31/2019
// Last Modification Date:11/1/2019
// Purpose: Returns the letter grade using the following:
//          >=91				A
//          <91 and >=82		B
//          <82 and >= 73		C
//          <73 and >= 64		D
//          <64 and >= 55		E
//          <55 				F
char calculateLetterGrade(float pointGrade){

	if (pointGrade >= 90){
		return 'A';
	}
	else if (pointGrade >= 80){
		return 'B';
	}
	else if (pointGrade >= 70){
		return 'C';
	}
	else if (pointGrade >= 60){
		return 'D';
	}
	else if (pointGrade >= 50){
		return 'E';
	}
	else if (pointGrade < 50){
		return 'F';
	}
}


// Author: Erika Valle-Baird
// Creation Date: 10/31/2019
// Last Modification Date:11/1/2019
// Purpose: Returns the number of questions and answer 
//          key of the exam (both as reference parameters)
//          We presume the file settings contains only two data:
//          Number of questions (in line 1 of the file)
//          Answer key (line 2 of the file)
void readSettings(ifstream& settings, string& key, int& numQuestions){

	settings.open("settings.txt");

	 //Error if Setting's File Does not Exist
	if (!settings){
		cout << "Error in Opening File!" << endl;
		return;
	}

	//Empty File Check
	if (settings.peek() == std::ifstream::traits_type::eof())
	{
		cout << "Empty File!"<< endl;

	}

	//Read File 
	settings >> numQuestions;
	settings >> key;
}


int main()
{
	//File and Variable Declarations
	ifstream settings;
	ifstream exam;
	ofstream gradesOutputFile;
	string key;
	int numQuestions;

	//Function Call
	readSettings(settings, key, numQuestions);

	//Open File
	exam.open("exam.txt");

	//Display if Error Opening File
	if (!exam)
	{
		cout << "Error in opening file!!!" << endl;
		return 0;
	}

	//Empty File Check
	if (exam.peek() == std::ifstream::traits_type::eof())
	{
		cout << "Empty File!" << endl;

	}

	//Create and Write Into Output File
	gradesOutputFile.open("grades.txt");

	//Declarations
	int noOfCorrectAnswers = 0; 
	float grade = 0; 
	char letterGrade;
	string line = ""; 
	string fname;
	string lname;
	string answer;

	//While Loop to Compare, Grade, and Write
	while (getline(exam, line)){

		istringstream iss(line);
		iss >> fname >> lname >> answer;

		//Function Call
		noOfCorrectAnswers = gradeAnswer(answer, key, numQuestions);

		//Function Call 
		grade = calculatePointGrade(noOfCorrectAnswers, numQuestions);

		//Function Call
		letterGrade = calculateLetterGrade(grade);

		//Output File Display
		gradesOutputFile << fname << " " << lname << " " << fixed << setprecision(1) << grade << "% " << letterGrade << endl;
		cout << fname << " " << lname << " " << fixed << setprecision(2) << grade << "% " << letterGrade << endl;
	}

	//Close Files
	exam.close();
	gradesOutputFile.close();
	return 0;

}
