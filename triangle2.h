//Header File for Triangle Structure triangle2.h
#pragma once
#include <iostream>
#include <iomanip>
#include<string>
#include<vector>

using namespace std;
//Triangle Structure
struct Triangle
{
	//Triangle's Attributes
	double base;
	double height;
	double area;
};

//Functions for Largest Triangle and Computing Areas
int MaxTriangle(vector<Triangle>& t);
float ComputeArea(Triangle& t);
