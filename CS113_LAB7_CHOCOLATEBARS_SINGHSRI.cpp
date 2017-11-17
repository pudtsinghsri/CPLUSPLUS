
// **********************************************************************************************
// P.Singhsri
// CS113_LAB7_CHOCOLATEBARS_SINGHSRI.cpp : Suppose we can buy chocolate bars from the vending machine for $1 each. Inside every chocolate bar is
//a coupon. We can redeem 7 coupons for 1 chocolate bar from the machine. We would like to know how many chocolate bars can be eaten, including 
//those redeemed via coupon, if we have n dollars.

//For example, if we have $20, then we can initially buy 20 chocolate bars.This gives us 20 coupons.We can deem 14 coupons for 2 additional chocolate
//bars.These two additional chocolate bars have 2 more coupons, so we now have a total of 8 coupons when added to the 6 left over from the original 
//purchase.This gives us enough to redeem for 1 final chocolate bar.As a result we now have 23 chocolate bars and 2 leftover coupons.

//Write a recursive solution to this problem that inputs from the user the number of dollars to spend on chocolate bars and outputs how many chocolate bars you can collect after spending all your money and redeeming as many coupons as possible.Your recursive function will be based upon the number of coupons owned.


//***********************************************************************************************

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


double choc_total(double cash, double& number_of_bars, double& xtra, double& coupon)
//Precondition:		the variable cash is input by the user,
//					the variables number of bars, coupon, and extra are only initalized to 0
//					and are call be reference.
//					The program recursively calls the function until the user
//					runs out of money (money = 0)
//Postcontion:		the program returns the number of bars and amount of coupons
//					left over  the main program
{

	

	if (cash == 0)
	{
		cout << "You get nothing for free ";

	}

	//loop to continue check while user still has cash
	while (cash > 0)
	{


		//if cash is less than or equal to 7 the below is executed
		if (cash <= 7)
		{



			//determines if an extra bar can be bought with 7 coupons
			if (cash + xtra >= 7)
			{
				xtra++;
				coupon = (cash + xtra) - 7;
				
				if (coupon >= 7)
				{
					xtra++;
					coupon = coupon - 7;
				}
			}

			else
			{
				coupon = cash + xtra;
			}

			
			number_of_bars += (cash / 1) + xtra;


			cash = cash - (cash / 1);

			break;

		}
		//if more than 7 dollars is entered, it adds value to extra, and number of bars
		//it will then recursively call the function
		else
		{

			number_of_bars += 7;

			xtra++;

			//function call

			choc_total(cash - 7, number_of_bars, xtra, coupon);

			break;
		}
	}

	return number_of_bars;
}


int main()
{

	cout << "Welcome to the chocolate bars vending machine" << endl;
	cout << "Each chocolate bar costs $1 and they come with a coupon" << endl;
	cout << "After 7 coupons you get a free chocolate bar" << endl;

	string choice;

	do {

		//declare variables
		double money, num_of_bars = 0, leftover = 0, coupon = 0;


		cout << "How much money would you like to spend? ";
		cin >> money;

		////calls function
		//choc_total(cash, num_of_bars, xtra) to return the amount of chocolate bars the user gets

		cout << "The amount of chocolate bars you will own for " << money << " dollars" << endl;
		cout << "is " << choc_total(money, num_of_bars, leftover, coupon);
		
		cout << endl;
		
		cout << "You have " << coupon << " coupons left toward your next free bar";

		cout << endl << endl;

		cout << "Run the program again?(Y/N) ";
		cin >> choice;

	} while (choice == "y" || choice == "Y");
	

	system("pause");

	return 0;
}

