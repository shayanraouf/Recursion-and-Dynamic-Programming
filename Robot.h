//Robot.cpp 
//Shayan Raouf 
//Data structures, algorithms and discreet math
#pragma once
#include "Location.h"
#include <vector>
#include <string>

const string NORTH = "N";
const string EAST = "E";
const string SOUTH = "S";
const string WEST = "W";
class Robot
{
public:
	friend ostream& operator<<(ostream& os, const Robot& robot);

	Robot();
	Robot(int x1, int y1, int x2, int y2);
	~Robot();

	void SearchPath(const int x, const int y, const string steps);


private:
	vector<string> path;
	Location* robot;
	Location* treasure;


};

