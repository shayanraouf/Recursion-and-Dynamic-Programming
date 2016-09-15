//GreedyRobot.cpp 
//Shayan Raouf 
//Data structures, algorithms and discreet math

#include "stdafx.h"
#include <iostream>
#include "Robot.h"
using namespace std;


int seach(int first, int last, int n);
int mystery(int n);

int main()
{
	int x1;
	int y1;
	int x2;
	int y2;
	cout << "Please enter an x and a y cordinate" << endl;
	cin >> x1;
	cin >> y1;
	cout << "Please enter an x and a y cordinate for the treasure" << endl;
	cin >> x2;
	cin >> y2;
	Robot* r = new Robot(x1, y1, x2, y2);
	cout << *r << endl;
	return 0;
}
