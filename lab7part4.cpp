// lab7Project8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Caitlin Farley, Inflation Rate

#include "pch.h"
#include <iostream>
using namespace std;
//prototype
double inflationRate(double lastYear, double today);

int main()
{//declare variables
	double lastYear, today, rate;
	char answer;

	//create do while to take in prices as user wishes to repeat
	do {
		//get user input
		cout << "Please enter last year and todays prices as doubles" << endl;
		cin >> lastYear >> today;
		//call inflationRate to do calculations
		rate = inflationRate(lastYear, today);
		//set decimals to hundredths place
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		//output rate to user
		cout << "The rate of inflation is %" << rate << endl;

		cout << "Do you want to do another?" << endl;
		cin >> answer;
//close do while loop
	} while (answer == 'y' || answer == 'Y');

}
//pass inflationRate the 2 variables to do calculations
double inflationRate(double lastYear, double today)
{
	double inflation = 0;

	inflation = ((today - lastYear) / lastYear) * 100;
	
	return inflation;

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
