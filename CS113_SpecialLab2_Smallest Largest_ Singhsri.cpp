// Largest and Smallest Integers.cpp : States the largest and smallest numbers
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	int num1, num2, num3, num4, num5, largest , smallest;                                    //Initialize Variables

	cout << "Enter 5 Integers"<< endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;
	cin >> num5;

	if ((num1 > num2) && (num1 > num3) && (num1 > num4) && (num1 > num5))                   //Calculations to find largest number
	{
		largest = num1;
	}
	else if ((num2 > num1) && (num2 > num3) && (num2 > num4) && (num2 > num5))
	{
		largest = num2;
	}
	else if ((num3 > num1) && (num3 > num2) && (num3 > num4) && (num3 > num5))
	{
		largest = num3;
	}
	else if ((num4 > num1) && (num4 > num2) && (num4 > num3) && (num4 > num5))
	{
		largest = num4;
	}
	else
	{
		largest = num5;
	}



	if ((num1 < num2) && (num1 < num3) && (num1 < num4) && (num1 < num5))                    //Calculations to find smallest number
	{
		smallest = num1;
	}
	else if ((num2 < num1) && (num2 < num3) && (num2 < num4) && (num2 < num5))
	{
		smallest = num2;
	}
	else if ((num3 < num1) && (num3 < num2) && (num3 < num4) && (num3 < num5))
	{
		smallest = num3;
	}
	else if ((num4 < num1) && (num4 < num2) && (num4 < num3) && (num4 < num5))
	{
		smallest = num4;
	}
	else
	{
		smallest = num5;
	}
	
	cout << "Largest number: " << largest << endl;
	cout << "Smallest number: " << smallest << endl;

	system("pause");
    return 0;
}

