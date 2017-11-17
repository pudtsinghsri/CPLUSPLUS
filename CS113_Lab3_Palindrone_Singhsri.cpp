// Integer Palindrone.cpp : Determines whether user input is a palindrone
//

#include "stdafx.h"
#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int num1, num2, num3, num4, num5, integer;                           // Initialize Variables
	cout << "Enter an integer" << endl;

	cin >> integer;
 
	while ((integer > 99999) || (integer < 0))
	{
		cout << "Enter an integer again." << endl;

		cin >> integer;
	}

	num1 = integer % 10;                                                 // Parsing Calculations
	integer /= 10;
	num2 = integer % 10;
	integer /= 10;
	num3 = integer % 10;
	integer /= 10;
	num4 = integer % 10;
	integer /= 10;
	num5 = integer % 10;
	integer /= 10;

	if ((num1 == num5) && (num2 == num4))
	{
		cout << "Palindrone"<< endl;
		cout << "Integer 1:  " << num5 << endl;                              // Prints each number determines if it isnt a palindrone
		cout << "Integer 2:  " << num4 << endl;
		cout << "Integer 3:  " << num3 << endl;
		cout << "Integer 4:  " << num2 << endl;
		cout << "Integer 5:  " << num1 << endl;

	}
	
	else
	{
		cout << "Not a Palindrone" << endl;
	}


	
	system("pause");

	return 0;
}



