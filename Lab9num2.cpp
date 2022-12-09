// Lab9num2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;



void input(double& feet, double& inches);

void conversion(double &feet, double& inches, double& meters, double& centimeters);//prototype

void output(double meters, double centimeters);   //prototype



int main() //Input Function

{
	
		
	
	double feet, inches, centimeters, meters;
	
		char answer;
	

		
		do
			
		{
			
				cout << "Convert?(Y/N): ";
			
				cin >> answer;
			
				input(feet, inches);
			
				conversion(feet, inches, meters, centimeters);
			
				output(meters, centimeters);
			

				
		}while (answer == 'Y' || answer == 'y');
			
}



void input(double& feet, double& inches)

{
	
		cout << "Enter number of feet: ";
	
		cin >> feet;
	
		cout << "Enter number of inches: ";
	
		cin >> inches;
	
}



void conversion(double feet, double& inches, double& meters, double& centimeters)

{
	
		inches += 12 * feet;
	
		centimeters = inches * 2.54;
	
		meters = centimeters / 100;
	
		centimeters -= meters * 100;
	
}



void output(double meters, double centimeters)

{
	
		cout << meters << " meters and " << centimeters << "cm " << endl;
	
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
