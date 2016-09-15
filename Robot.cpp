//Robot.cpp 
//Shayan Raouf 
//Data structures, algorithms and discreet math
#include "stdafx.h"
#include "Robot.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;


Robot::Robot() // default constructor 
{
}

Robot::Robot(int x1, int y1, int x2, int y2)
{
	robot = new Location(x1, y1);
	treasure = new Location(x2, y2);
	SearchPath(x1, y1, "");
}


Robot::~Robot() //destructor that deletes the robot and treasure 
{				//and sets them both to NULL so there is no dangling pointer
	delete robot;
	robot = NULL;
	delete treasure;
	treasure = NULL;
}

void Robot::SearchPath(const int x, const int y, const string steps)
{
	if (x == treasure->getX() && y == treasure->getY())
	{
		path.push_back(steps); // adds to vector
		return;
	}
	else
	{
		//recursive calls for NORTH,SOUTH, EAST AND WEST
		if (y < treasure->getY()) 
		{
			SearchPath(x, y + 1, steps + NORTH); 
		}
		if (y > treasure->getY())
		{
			SearchPath(x, y - 1, steps + SOUTH);
		}
		if (x < treasure->getX())
		{
			SearchPath(x + 1, y, steps + EAST);
		}
		if (x > treasure->getX())
		{
			SearchPath(x - 1, y, steps + WEST);
		}
	}
}

ostream& operator<<(ostream& os, const Robot& robot)
{

	for (int i = 0; i < robot.path.size(); i++)
	{
		os << robot.path[i] << endl;
	}
	return os;
}
