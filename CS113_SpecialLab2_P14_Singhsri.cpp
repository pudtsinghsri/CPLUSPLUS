// 2.14 Grading Program.cpp : Takes user input of exercises and outputs percent and score.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	double score, new_score, total, new_total, total_percent;
	int exercise;

	new_total = 0;
	new_score = 0;
	score = 0;
	total = 0;


	cout << "How many exercises to input?";
	cin >> exercise;

	if (exercise < 0)
	{
		cout << "Invalid";
	}

	for (int i = 0; i < exercise; i++)                                             //Loops specific amount of set by user
	{
		int count = 0;       
		
		cout << "Score recieved for exercise: " << endl;
		cin >> score;

		new_score+= score;                                                          //Stores scores in new_score "+" operator adds new inputs

		cout << "Total points possible for exercise: " << endl;
		cin >> total;

		new_total+= total;

		if (score > total)                                                          //Dummy proof in case user inputs an invalid inputs
		{
			cout << "That is invalid";
		}

		
	}
	
	
	total_percent = (new_score / new_total) * 100;

	cout << "Your total is" << new_score << " out of " << new_total << " , " << total_percent << " % " << endl;        //Prints results
	system("pause");




    return 0;
}

