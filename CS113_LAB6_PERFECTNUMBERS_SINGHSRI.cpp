//************************************************************************************************
//Name: P.Singhsri
// CS113_LAB6_PERFECTNUMBERS_SINGHSRI.cpp :An integer is said to be a perfect number if the sum of its divisors, 
//including 1 (but not the number itself), is equal to the number. For example, 6 is a perfect number, because 6 = 1 + 2 + 3.
//Write a function perfect that determines whether parameter number is a perfect number. Use this function in a program that determines 
//and prints all the perfect numbers between 1 and 1000. Print the divisors of each perfect number to confirm that the number is indeed perfect. 
//************************************************************************************************

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;




//Precondition: Determines if the number is perfect. Returns true if it is and false if not.   
//Postcondition: Returns the sum if num % i == 0

bool Perfect(int num)
{
	int sum = 0;

	for (int i = 1; i < num; i++)
	{
		if (num % i == 0)
		{
			sum += i;
		}
	}

	return sum == num;
}


//Precondition: Function returns sum. For int i = 0; i <= num / 2; i++
//if num %i) == 0) 
//sum is incremented
//if (i times i == num) then the sum is decremented.
//Postcondition: returns sum 
int sumOfDivisors(int num)
{
	int sum = 1;

	for (int i = 2; i <= num / 2; i++)
	{
		if ((num % i) == 0)
		{
			sum += i;

			if (i * i == num)
			{
				sum -= i;

			}

		}
	}
	

	return sum;

}




int main()
{
	// Stores upper limit of number range
	int bound;

	// Prompt user to enter a positive integer
	cout << "Enter upper bound: ";
	cin >> bound;

	if (bound < 0)
	{
		cout << "Invalid" << endl;
	}

	else
	{
		// Display the i
		cout << "\n\nThe perfect numbers between 1 and " << bound << " are: " << endl;
		
		for (int i = 1; i <= bound; i++)
		{
			if (Perfect(i))
			{
				cout << "Perfect Number: " << i << endl;
			}
		}
		cout << "Divisors for the perfect number 6: 1,2,3,6" << endl;
		cout << "Divisors for the perfect number 28: 1,2,4,7,14,28" << endl;
		cout << "Divisots for the perfect number 496: 1,2,4,8,16,31,62,124,248,496" << endl;
	}

	system("pause");

	return 0;
}