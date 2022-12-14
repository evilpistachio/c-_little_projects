// Lab10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Caitlin Farley, Lab10

#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;


int main()
{//declare variable to 
	ifstream fin;

	

	fin.open("numbers.dat");

	// If the file will not open prompt user of error-
	if (!fin)
	{
		cout << "Unable to open file!" << endl << endl;
		
	}

	// If the file opens, sum values and find the largest and smallest values-
	
	int next;
	int largest = 0;
	int smallest;
	
	smallest = largest = next;

	while (!fin.eof())
	{
		fin >> next;
		if (next < smallest)
			smallest = next;
		else if (largest < next)
			largest = next;
		fin >> next;
	}
	cout << "The largest number in the file is " << largest << endl;
	cout << "The smallest number in the file " << smallest << endl;
	fin.close();

	
	return 0;
}
	

	

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
