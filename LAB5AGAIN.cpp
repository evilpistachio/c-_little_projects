// LAB5AGAIN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
//Caitlin Farley, Lab 5- Accounting Transaction
int main()
{//declare variables
	char choice, answer;
	int accNum, amount;
	float newAmt;
//create do while loop to continue processing
	
	
	//ask user for acc num, initial balance	

		cout << "Please enter the account number" << endl;
		cin >> accNum;
		cout << "Please enter the intital balance of the account" << endl;
		cin >> newAmt;
//ask user whether they want to deposit, withdrawal, or end trans
		do {
		cout << "Would you like to:" << endl << "(D)eposit" << endl << "(W)ithdrawal" << endl << "(Z) end transaction" << endl;
		cin >> choice;
		//use if to go to z if they dont want to continue
		if ((choice == 'D' || choice == 'd') || (choice =='w' || choice == 'W'))
		{
			cout << "What is the amount?" << endl;
			cin >> amount;
		}
//create switch statement for all possible choices of user
		switch (choice) {
		case 'W':
		case 'w':
//set decimal to hundredths .00
			cout.setf(ios::fixed);
			cout.setf(ios::showpoint);
			cout.precision(2);
			newAmt = newAmt - amount;
			cout << "The balance for this account is now $" << newAmt << endl;
			break;
		case 'D':
		case 'd':
			cout.setf(ios::fixed);
			cout.setf(ios::showpoint);
			cout.precision(2);
			newAmt = newAmt + amount;
			cout << "The balance for this account is now $" << newAmt << endl;
			break;
		case 'Z':
		case 'z':
			
			cout << "The balance for this account is now $" << newAmt << endl;
			cout << "Ending transaction...";
			break;
		}
//ask user if they want to make another transaction
		cout << "Do you want to make another transaction?" << endl;
		cin >> answer;
//end do while loop
	} 
	while(answer == 'y' || answer == 'Y');


	
	
 

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
