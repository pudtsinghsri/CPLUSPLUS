// Game of 23.cpp : Plays the game of 23 toothpicks
//
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int game_total = 23;                                                                      //Initialize Variables
	int input;
	int computer;
	bool flag = true;

	cout << "Game of 23";

	while (game_total > 0)                                                                 // Decrements by 4 - X
	{

		if (flag = true)
		{
			cout << "Choose a number: ( 1, 2, or 3)";
			cin >> input;

			while ((input > 4) || (input < 0))
			{
				cout << "Try again.";
				cin >> input;
			}
			if (input < 4)
			{
				if (game_total >= 4)
				{
					computer = 4 - input;
					cout << "I choose " << computer << ".\n";
					game_total -= (input + computer);
					cout << "Game total: " << game_total << endl;
				}
				else if ((game_total <= 4) && (game_total > 0))                     //Determines who wins or loses when there are 3 toothpicks left
				{
				
					if (input == 3)
					{
						cout << "You lose" << endl;
						game_total -= input;
						cout << "Game Total: " << game_total << endl;
						system("pause");
					}
					else if (input == 2)
					{
						cout << "I choose 1, I lose" << endl;
						game_total -= (input + 1);
						cout << "Game Total: " << game_total << endl;
						system("pause");
					}
					else if (input == 1)
					{
						cout << "I choose 1, you lose" << endl;
						game_total -= (input + 2);
						cout << "Game Total: " << game_total << endl;
						system("pause");
					}
					
					
				}
				
			
		}
			
			
			flag = false;

	}

}


system("pause");
return 0;
}


