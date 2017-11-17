// Pi Program.cpp : Lists terms of Pi depending on user input
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int nterms; // accept from user
	char ans;


	cout << "Enter how many terms of pi you would like to see";
	cin >> nterms;


	double sum = 0.0;
	int numerator = -1;
	const int upper_bound = nterms;

	for (int n = 1; n < upper_bound; n += 2) // for each term upto nterms
	{
		numerator *= -1; // alernating +1, -1, +1, -1 ...
		const double term = numerator / double(n); // +1/1.0, -1/3.0, +1/5.0 ...
		sum += term; // +1/1.0 + -1/3.0, + 1/5.0 + -1/7.0 ...
	}

	const double pi = 4 * sum; // 4 * ( 1/1.0 + -1/3.0, + 1/5.0 + -1/7.0 ... )

	cout << "pi upto " << nterms << " terms: " << pi << endl << endl;

	cout << "Would you like to do another calculation(Y/N)" << endl << endl;
	cin >> ans;
	while ((ans == 'Y') || (ans == 'y'))
	{
		cout << "Enter how many terms of pi you would like to see";
		cin >> nterms;

		for (int n = 1; n < upper_bound; n += 2) // for each term upto nterms
		{
			numerator *= -1; // alernating +1, -1, +1, -1 ...
			const double term = numerator / double(n); // +1/1.0, -1/3.0, +1/5.0 ...
			sum += term; // +1/1.0 + -1/3.0, + 1/5.0 + -1/7.0 ...
		}

		const double pi = 4 * sum; // 4 * ( 1/1.0 + -1/3.0, + 1/5.0 + -1/7.0 ... )

		cout << "pi upto " << nterms << " terms: " << pi << endl << endl;

		cout << "Would you like to do another calculation(Y/N)" << endl << endl;
		cin >> ans;
	}

	if ((ans == 'N') || (ans == 'n'))
	{
		cout << "Goodbye.";
		system("pause");
	}

	system("pause");

    return 0;
}

