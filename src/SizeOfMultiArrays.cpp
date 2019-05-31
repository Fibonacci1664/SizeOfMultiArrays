/*
 * SizeOfMultiArrays.cpp
 *
 *  Created on: 29 May 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

int main()
{
	string animals[2][3] = {
			{"Cat", "Dog", "Mouse"},
			{"Rabbit", "Pig", "Horse"}
	};

	cout << sizeof(animals) << endl;
	cout << sizeof(animals[0]) << endl;


	int arrayRowLength = sizeof(animals)/sizeof(animals[0]);
	int arrayColsLength = sizeof(animals[0])/sizeof(string);

	// Rows
	for(int i = 0; i < arrayRowLength; i ++)
	{
		// Cols
		for(int j = 0; j < arrayColsLength; j ++)
		{
			cout << "[ " << animals[i][j] << " ],\t\t" << flush;
		}

		cout << endl;
	}




	return 0;
}


