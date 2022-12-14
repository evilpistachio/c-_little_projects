// test2Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

//Caitlin Farley, Test 2 Judge Program

//prototypes for functions
void getJudgeData(double &);
double calcScore(double, double, double, double, double);
int findHighest(double, double, double, double, double);
int findLowest(double, double, double, double, double);

int main()
{
	double Score1, Score2, Score3, Score4, Score5;


	// call function getJudgeData once for each judge of 5 judges
	getJudgeData(Score1);
	getJudgeData(Score2);
	getJudgeData(Score3);
	getJudgeData(Score4);
	getJudgeData(Score5);

//set decimal to hundredths place
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << " The contestants score is ";
// call function calcScore and pass it the 5 judge scores
	cout << calcScore(Score1, Score2, Score3, Score4, Score5) << endl;

	

	return 0;
}

//getJudgeData asks for input from user for judges score

void getJudgeData(double &Score)
{
	//use do while loop to ensure score is between 0 and 10
	do
	{
		cout << "Enter a judges score: ";
		cin >> Score;

		if (Score < 0 || Score > 10)
		{
			cout << "Error! Score must be between 0 and 10. " << endl;
		
		}

	} while (Score < 0 || Score > 10);
}

//calcScore calculates the contestants final score, using the high and low functions

double calcScore(double Score1, double Score2, double Score3, double Score4,
	double Score5)
{
	int High, Low;
	double  Avg;

	//call functions findhighest and findlowest and pass them the 5 scores 

	High = findHighest(Score1, Score2, Score3, Score4, Score5);
	Low = findLowest(Score1, Score2, Score3, Score4, Score5);

	//use else if to determine average for all possible high and low scores
	if (High == Score1)
	{
		if (Low == Score2)
			Avg = (Score3 + Score4 + Score5) / 3;
		else if (Low == Score3)
			Avg = (Score2 + Score4 + Score5) / 3;
		else if (Low == Score4)
			Avg = (Score3 + Score2 + Score5) / 3;
		else
			Avg = (Score2 + Score3 + Score4) / 3;
	}
	else if (High == Score2)
	{
		if (Low == Score1)
			Avg = (Score3 + Score4 + Score5) / 3;
		else if (Low == Score3)
			Avg = (Score1 + Score4 + Score5) / 3;
		else if (Low == Score4)
			Avg = (Score3 + Score1 + Score5) / 3;
		else
			Avg = (Score1 + Score3 + Score4) / 3;
	}
	else if (High == Score3)
	{
		if (Low == Score2)
			Avg = (Score1 + Score4 + Score5) / 3;
		else if (Low == Score1)
			Avg = (Score2 + Score4 + Score5) / 3;
		else if (Low == Score4)
			Avg = (Score1 + Score2 + Score5) / 3;
		else
			Avg = (Score2 + Score1 + Score4) / 3;
	}
	else if (High == Score4)
	{
		if (Low == Score2)
			Avg = (Score3 + Score1 + Score5) / 3;
		else if (Low == Score3)
			Avg = (Score2 + Score1 + Score5) / 3;
		else if (Low == Score1)
			Avg = (Score3 + Score2 + Score5) / 3;
		else
			Avg = (Score2 + Score3 + Score1) / 3;
	}
	else
	{
		if (Low == Score2)
			Avg = (Score3 + Score4 + Score1) / 3;
		else if (Low == Score3)
			Avg = (Score2 + Score4 + Score1) / 3;
		else if (Low == Score4)
			Avg = (Score3 + Score2 + Score1) / 3;
		else
			Avg = (Score2 + Score3 + Score4) / 3;
	}

	return Avg;
}

//findHighest finds the highest score of the 5 scores passed to it 

int findHighest(double Score1, double Score2, double Score3, double Score4,
	double Score5)
{
	//use else if to determine highest score
	if (Score1 > Score2 && Score1 > Score3 && Score1 > Score4 && Score1 > Score5)
		return Score1;
	else if (Score2 > Score1 && Score2 > Score3 && Score2 > Score4 &&
		Score2 > Score5)
		return Score2;
	else if (Score3 > Score2 && Score3 > Score1 && Score3 > Score4 &&
		Score3 > Score5)
		return Score3;
	else if (Score4 > Score2 && Score4 > Score3 && Score4 > Score1 &&
		Score4 > Score5)
		return Score4;
	else
		return Score5;
}

//findLowest finds the lowest score of the 5 scores passed to it 

int findLowest(double Score1, double Score2, double Score3, double Score4,
	double Score5)
{
	//use else if to determine lowest score
	if (Score1 < Score2 && Score1 < Score3 && Score1 < Score4 && Score1 < Score5)
		return Score1;
	else if (Score2 < Score1 && Score2 < Score3 && Score2 < Score4 &&
		Score2 < Score5)
		return Score2;
	else if (Score3 < Score2 && Score3 < Score1 && Score3 < Score4 &&
		Score3 < Score5)
		return Score3;
	else if (Score4 < Score2 && Score4 < Score3 && Score4 < Score1 &&
		Score4 < Score5)
		return Score4;
	else
		return Score5;
}