// Catalan.cpp : Defines the entry point for the console application.
//Shayan Raouf

#include "stdafx.h"
#include <iostream>
using namespace std;

int catalan(int n);

int main(int argc, char* argv[])
{
	int input = 0;

	if (argc == 2)
	{
		input = atoi(argv[1]);
	}
	else
	{
		cout << "Please enter a positive number: " << endl;
		cin >> input;
	}


	
	cout << "Catalan Number: " << catalan(input) << endl;
	cin.ignore();
    return 0;
}

int catalan(int n)
{
	if (n <= 1) {
		return 1;
	}
	int retVal = 0;
	for (int i = 0; i < n; i++)
	{
		retVal += catalan(i) * catalan(n - i - 1);
	}

	return retVal;
}