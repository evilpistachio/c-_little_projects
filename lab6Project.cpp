// lab6Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

//Caitlin Farley, Lab 6 project

int main()
{//declare all variables, set variables being used in calculations to 0
	int numOfStudent, score, highScore = 0, count = 0;
	string firstName, lastName, firstHigh, lastHigh;
	
//ask user for number of students
	cout << "Please input number of students" << endl;
	cin >> numOfStudent;

//create for loop to take in names until num of students is reached 

	for (int n = 0; n < numOfStudent; n++) {

		cout << "Please input student name" << endl;
		cin >> firstName >> lastName;
		cout << "Please input students score" << endl;
		cin >> score;

//add scores in count to use for average later
		count += score;
//use if statement to assign the highest score
		if (score > highScore)
		{
			firstHigh = firstName;
			lastHigh = lastName;
			highScore = score;
		}
	}
//calculate difference and average and output them to user along with highest score  
	cout << firstHigh << " " << lastHigh << "'s score is the highest, it is " << highScore << endl;
	cout << "The average is " << (double)count / numOfStudent << endl;
	cout << "The difference of the highest score from the average is " << highScore - ((double)count / numOfStudent) << endl;

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
