//********************************************************************************************
// Name:P.Singhsri
// CS113_BONUSPROGRAM_SINGHSRI.cpp : Create a C++ program that draws a half - size triangle or a full - size triangle with a size selected by the user
//through the keyboard.The drawing of different triangles is done through two different functions.The user should be provided with two options : (1) 
//half - size triangle(2) full - size triangle.Then the user will be asked to select the size of the triangle.After the selected triangle is drawn, 
//the user will be allowed to repeat or quit.In order to receive full credit, your program should be functionally complete and exercise good software engineering practices.
//********************************************************************************************

#include "stdafx.h"
#include <iostream>

using namespace std;



void star(int choice)
//Precondition: Function accepts user defined rows and prints while i is less then choice
//Postcondition: Prints stars according to number of rows
{
	for (int i = 0; i < choice; i++) {
		cout << "*";
	}
}

void drawHalf(int choice)
//Precondition: Function accepts the user defined row and prints half the triangle
//Postcondition: Returns half triangle printed
{
	for (int i = 0; i <= choice; i++)
	{
		star(i);
		cout << endl;
	}

}
void drawFull(int choice)
//Precondition: Function accepts user defined choice and prints the array backward
//Postcondition: Function returns 
{
	for (int i = choice - 1; i > 0; i--)
	{
		star(i);
		cout << endl;
	}
}


int main()
{
	//initialize variables
	int choice, choice_2;

	//Prompt user defined input
	cout << "What size triangle would you like draw?" << endl;
	cin >> choice;

	//Ask user to enter the number
	cout << "Choose a number from the menu." << endl;
	cout << "1. Half Triangle" << endl;
	cout << "2.Full Triangle" << endl;

	cin >> choice_2;

	//Prints half a triangle if the number 1 is chosen
	if (choice_2 == 1)
	{
		cout << "Half Triangle:" << endl;
		drawHalf(choice);
	}

	//Prints full triangle if number 2 is chosen
	else if (choice_2 == 2)
	{
		cout << "Full Triangle:" << endl;
		drawHalf(choice);
		drawFull(choice);
	}


	system("pause");

	return 0;
}

