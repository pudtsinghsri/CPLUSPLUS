// Area of Triangle.cpp : Finds area of a triangle given user input
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;
double Area1(double base, double height) {
	return base * height * .5;
}
double Area2(double side1, double side2, double side3) {
	double semi_perim;
	double area;

	semi_perim = (side1 + side2 + side3) / 2;
	double x = semi_perim * (semi_perim - side1) * (semi_perim - side2) * (semi_perim - side3);
	area = sqrt(x);
	return area;
}
double Area3(double side1, double side2, int angle) {
	const double PI = 3.14159;
	double radian = angle * (PI / 180);
	double x = sin(radian);
	return .5 * side1 * side2 * x;
}
int main()
{
	double base, height, side1, side2, side3;
	int angle = 0;
	int input;
	char ans;
		cout << "Pick the number of the corresponding function you would like to do" << endl;
	cout << "1. Input a base and height" << endl;
	cout << "2. Three Sides of the Triangle" << endl;
	cout << "3. Two sides and included angle" << endl;
	cin >> input;

	if ((input > 3) || (input < 0)) {
		cout << "Invalid";
	}
	
	if (input == 1) {
		cout << "1. Input a base and height" << endl;
		cout << "Base: " << endl;
			cin >> base;
			cout << "Height: " << endl;
			cin >> height;

			cout << "Area: " << Area1(base, height) << endl;
			cout << "Would you like to do another calculation"
				cin >> ans;

			if (((ans != 'N') && (ans != 'n') && (ans != 'Y') && (ans != 'y')))
			{
				cout << "goodbye" << endl;
				system("pause");
			}

			if ((ans == 'N') || (ans == 'n'))
			{
				cout << "goodbye" << endl;
				system("pause");
			}

			while ((ans == 'Y') || (ans == 'y'))
			{
	}
	else if (input == 2) {
		cout << "2. Three Sides of the Triangle" << endl;
		cout << "Side One: " << endl;
		cin >> side1;
			cout << "Side Two: " << endl;
			cin >> side2;
			cout << "Side Three: " << endl;
			cin >> side3;
			

			if ((side1 < 0) || (side2 < 0) || (side3 < 0) || (side1 >= side2 + side3) || (side2 >= side1 + side3) || (side3 >= side1 + side2)) {
				cout << "Invalid" << endl;
			}
			else
			cout << "Area: " << Area2(side1, side2, side3) << endl;
	}
	else if (input == 3) {
		cout << "3. Two sides and included angle" << endl;
		cout << "Side 1: " << endl;
		cin >> side1;
			cout << "Side 2: " << endl;
			cin >> side2;
			cout << "Angle: " << endl;a
			cin >> angle;

			cout << "Area: " << Area3(side1, side2, angle) << endl;
	}

	system("pause");


    return 0;
}

