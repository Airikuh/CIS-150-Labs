//House.cpp File for Complete Class Definition 
#include "House.h"
#include<iostream>
#include<string>

//Default Constructor
void House::getAll(string& adr, int& sq, int& rm, float& bth) {

	adr = streetAddress;
	sq = squareFootage;
	rm = numberOfBedrooms;
	bth = numberOfBathrooms;

}

//Constructor That Takes Four Parameters Using Constructor Initializer List Style
House::House(string address, int squareFoot, int bedRooms, float bathRooms) : streetAddress(address), squareFootage(squareFoot), numberOfBedrooms(bedRooms), numberOfBathrooms(bathRooms) {}

//Method to Set Square Footage
void House::setSquareFootage(const int s) {
	this->squareFootage = s;
}

//Method to Get Square Footage
int House::getSquareFootage()const{
	return squareFootage;
}

//Destructor
House::~House(){
	cout << "Destroying House with Square Footage: " << squareFootage << endl;
}

