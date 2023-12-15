//Program that Displays Sum, Average, Lowest, and Highest Numbers in Vector
#include <iostream>
#include <vector>

using namespace std;

//Function that Calculates Sum 
int CalculateSum(vector<int> vec) {
	int sum = 0;
	for (int i = 0; i < vec.size(); i++) {
		sum += vec[i];
	}
	return sum;
}

//Function that Calculates Average
double CalculateAverage(vector<int> vec) {
	float total = 0;
	int count = 0;

	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] > 0) {
			total += vec[i];
			count++;
		}
	}
	return (total / count);
}

//Function that Gets the Lowest Integer
int GetLowest(vector<int> vec) {

	int min;
	min = vec[0];
	for (int i = 1; i < vec.size(); i++) {
		if (vec[i] < min) {
			min = vec[i];
		}
	}
	return min;
}

//Function that Gets the Highest Integer
int GetHighest(vector<int> vec) {

	int max;
	max = vec[0];
	for (int i = 1; i < vec.size(); i++) {
		if (vec[i] > max)
			max = vec[i];
	}
	return max;
}




int main() {

	//Vector Declaration and Fill
	vector<int> values;
	values.push_back(0);
	values.push_back(23);
	values.push_back(34);
	values.push_back(-7);
	values.push_back(110);
	values.push_back(42);
	values.push_back(-350);
	values.push_back(424);
	values.push_back(25);
	values.push_back(99);
	values.push_back(10);
	values.push_back(05);
	values.push_back(50);
	values.push_back(-5);
	values.push_back(1);
	values.push_back(200);
	values.push_back(-350);
	values.push_back(437);
	values.push_back(25);
	values.push_back(147);



	//Display Results
	cout << "The Sum of All Numbers in the Vector is : " << CalculateSum(values) << endl;
	cout << "The Average of the Positive Numbers is : " << CalculateAverage(values) << endl;
	cout << "The Lowest Number in the Vector is : " << GetLowest(values) << endl;
	cout << "The Highest Number in the Vector is : " << GetHighest(values) << endl;

	return 0;
}
