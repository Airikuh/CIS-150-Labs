//Header File for Triangle Structure
#pragma once
#include <iostream>
#include <iomanip>

//Triangle Structure
struct Triangle {
	//Triangle's Attributes
	float base;
	float height;
};

//Functions for Largest Triangle and Computing Areas
int Max(struct Triangle t[]);
float ComputeArea(struct Triangle t);
