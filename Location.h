//Location.h 
//Shayan Raouf 
//Data structures, algorithms and discreet math
#pragma once
#include <iostream>
using namespace std;
class Location
{
public:

	Location(); // default 
	Location(int x, int y); // constructor that take in two args
	Location(Location& const location); // copy constructor 

	~Location();
	void setX(int x);
	void setY(int y);

	int getX() const;
	int getY() const;

private:
	int x;
	int y;
};

