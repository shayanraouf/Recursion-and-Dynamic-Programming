//Location.cpp 
//Shayan Raouf 
//Data structures, algorithms and discreet math
#include "stdafx.h"
#include "Location.h"
using namespace std;

Location::Location()
{
	x = 0;
	y = 0;
}

Location::Location(int x, int y)
{
	setX(x);
	setY(y);
}

Location::Location(Location& const location) // copy constructor 
{
	setX(location.x);
	setY(location.y);
}
Location::~Location()
{
}

void Location::setX(int x)
{
	this->x = x;
}

void Location::setY(int y)
{
	this->y = y;
}

int Location::getX() const
{
	return x;
}

int Location::getY() const
{
	return y;
}

