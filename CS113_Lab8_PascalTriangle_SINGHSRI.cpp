//**************************************************************************************************
// Name: P.Singhsri
// CS113_Lab8_PascalTriangle_SINGHSRI.cpp : This exercise is to produce Pascal’s Triangle displayed in a symmetric shape. Pascal’s triangle is a way
//of representing the coefficients of the terms in an expansion of  , where k varies from 0 to one less than the number of lines printed out and 
//where the numbers in the kth row of the triangle are the coefficients of  . 

//The program
//•	Use a function to get input from user and validate user input
//•	Basic error checking of input.
//o	For given user input, the program must check the number being in the correct range(2 – 14)
//o	For invalid number, it keeps looping until user enters a correct input.

//•	Uses a function and pass number of lines to print


//The program has two versions : basic and advanced.


//Pascal – Basic

//The basic version teaches or reinforces
//•	Two - dimensional arrays
//•	Nested for loop where limit of inner loop is determined by outer loop
//•	Displays coefficients in simple format, line by line


//Pascal – Symmetric

//•	Use Switch statement
//•	Advanced Output formatting – coefficients are displayed in a symmetric shape


//**************************************************************************************************

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	bool flag = false;
	int i, j, n, array[50][50];

	
	cout << "Enter the # of lines: " << endl;
	cin >> n;

	if ((n < 0) || (n > 50))
	{
		cout << "Invalid" << endl;
	}

	else
	{
		array[0][0] = 1;
		cout << array[0][0] << endl;
		for (i = 0; i < n - 1; i++)
		{
			array[i + 1][0] = 1;
			cout << array[i + 1][0] << " ";
			for (j = 0; j < i; j++)
			{
				array[i + 1][j + 1] = array[i][j] + array[i][j + 1];
				cout << array[i + 1][j + 1] << " ";
			}

			array[i + 1][i + 1] = 1;
			cout << array[i + 1][i + 1] << endl;
		}
	}

	system("pause");
	return 0;
}





