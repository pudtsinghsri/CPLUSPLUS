//***********************************************************************************************
//P.SINGHSRI
// CS113_Lab7_TICTACTOE_Singhsri.cpp : This exercise is to create a program that will enable you to play the game of tic-tac-toe.You may use an array
//of characters.It should be initialized to all ‘ ’ to represent an empty board.Allow two human players.Wherever the first player moves, place a ‘X’
//in the specified square.Place an ’O’ wherever the second player moves.Each move must be to an empty square.That is, you need to validate the 
//user input.After each move, determine whether the game has been won or is a draw.

//If you like to challenge, the advanced features include :
//•	Modify the program so that the computer makes the moves for one of the players
//•	Allow the player to specify whether he / she wants to go first or second.

//************************************************************************************************

#include <stdafx.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

//Initialize functions that will be used 
char hashtag[10] = { 'o','1','2','3','4','5','6','7','8','9' };
int checkwin();
void game_board();
int play(int player);
char marking(char mark, int player);
int random();
int main()
{
	char mark = NULL;

	//initialize variables used
	int user = 1, i, choice;
	string human = "human";
	string com = "com";
	string opponent;

	//Ask user if they would like to play against a human or a computer
	cout << "Do you want to play against a human or computer(Type human or com)" << endl;
		cin >> opponent;


	//If the opponent is a human allow the user to chooose whether he/she would like to go first
	if (opponent == "human")
	{
		cout << "Which player would like to go first player 1 or 2 ( Enter 1 or 2)" << endl;
		cin >> user;


		//while game isn't over, or while returns 1
		do
		{
			//calls board() function that displays board
			game_board();

			//calls player function that returns a 1 or 2 depending on which player wants to go
			user = play(user);


			//Outputs player and switches player between 1 and 2 using increments and decrements
			//Prompts user input
			cout << "Player " << user << ", enter a number:  ";
			cin >> choice;

			//calls mark function which returns a X or O predetermined for each player
			mark = marking(mark, user);

			//Inputs the mark where the user chose
			if (choice == 1 && hashtag[1] == '1')

				hashtag[1] = mark;
			else if (choice == 2 && hashtag[2] == '2')

				hashtag[2] = mark;
			else if (choice == 3 && hashtag[3] == '3')

				hashtag[3] = mark;
			else if (choice == 4 && hashtag[4] == '4')

				hashtag[4] = mark;
			else if (choice == 5 && hashtag[5] == '5')

				hashtag[5] = mark;
			else if (choice == 6 && hashtag[6] == '6')

				hashtag[6] = mark;
			else if (choice == 7 && hashtag[7] == '7')

				hashtag[7] = mark;
			else if (choice == 8 && hashtag[8] == '8')

				hashtag[8] = mark;
			else if (choice == 9 && hashtag[9] == '9')

				hashtag[9] = mark;
			else
			{
				//if the move is invalid, a display message will appear and instead of incrementing
				//player it decrements and the previous dialogue will show prompting previous player to enter
				//Will continue till valid input is given
				cout << "Invalid move ";

				user--;
				cin.ignore();
				cin.get();
			}
			i = checkwin();

			user++;

		
		} 
		// Game is won when CheckWin() returns -1
		while (i == -1);
		game_board();
		if (i == 1)

			cout << "==>\aPlayer " << --user << " win ";
		else
			cout << "==>\aGame draw";

		cin.ignore();
		cin.get();
		return 0;
	}

	else if (opponent == "com")
	{
			do
		{
			game_board();
			user = play(user);


			if (user == 1)
			{
				cout << "Player " << user << ", enter a number:  ";
				cin >> choice;
			}

			if(user == 2)
			{
				choice = random();

			}

			mark = marking(mark , user);
		

			

			if (choice == 1 && hashtag[1] == '1')

				hashtag[1] = mark;
			else if (choice == 2 && hashtag[2] == '2')

				hashtag[2] = mark;
			else if (choice == 3 && hashtag[3] == '3')

				hashtag[3] = mark;
			else if (choice == 4 && hashtag[4] == '4')

				hashtag[4] = mark;
			else if (choice == 5 && hashtag[5] == '5')

				hashtag[5] = mark;
			else if (choice == 6 && hashtag[6] == '6')

				hashtag[6] = mark;
			else if (choice == 7 && hashtag[7] == '7')

				hashtag[7] = mark;
			else if (choice == 8 && hashtag[8] == '8')

				hashtag[8] = mark;
			else if (choice == 9 && hashtag[9] == '9')

				hashtag[9] = mark;
			else
			{
				cout << "Invalid move made by computer or human press enter to continue" << endl;

				user--;
				cin.ignore();
				cin.get();
			}
			i = checkwin();

			user++;
		} while (i == -1);
		game_board();
		if (i == 1)

			cout << "==>\aPlayer " << --user << " win ";
		else
			cout << "==>\aGame draw";

		cin.ignore();
		cin.get();
		return 0;
	}
}



int play(int player)
{
	//Precondtion: If player mod 2, then return 1. Otherwise return 2 
	//Postcondtion: Returns the player
	if (player % 2)
	{
		return 1;
	}
	else
	{
		return 2;
	}
}


char marking(char mark, int player) {
	//Precondition: Decides which mark each player gets(predeterimined)
	//Postcondition:If player is equal to 1, return X, otherwise return O
	
	if (player == 1)
	{
		return 'X';
	}
	else
	{
		return 'O';
	}
}



int random()
{
	//Precondition: Passes no parameters and uses the random number generator to genearate a number between 1-9
	//Postcondition:Returns a random number between 1-9
	int ran;
	srand(time(NULL));
	ran = rand() % 9 + 1;
	return ran;
}





int checkwin()
{
	//Precondition: Function checks win by comparing the parts of the square array that were already filled in using equality expressions 
	//Postcondition:Returns a 1 or win and a -1 to continue the game, 0 for a draw

	if (hashtag[1] == hashtag[2] && hashtag[2] == hashtag[3])

		return 1;
	else if (hashtag[4] == hashtag[5] && hashtag[5] == hashtag[6])

		return 1;
	else if (hashtag[7] == hashtag[8] && hashtag[8] == hashtag[9])

		return 1;
	else if (hashtag[1] == hashtag[4] && hashtag[4] == hashtag[7])

		return 1;
	else if (hashtag[2] == hashtag[5] && hashtag[5] == hashtag[8])

		return 1;
	else if (hashtag[3] == hashtag[6] && hashtag[6] == hashtag[9])

		return 1;
	else if (hashtag[1] == hashtag[5] && hashtag[5] == hashtag[9])

		return 1;
	else if (hashtag[3] == hashtag[5] && hashtag[5] == hashtag[7])

		return 1;
	else if (hashtag[1] != '1' && hashtag[2] != '2' && hashtag[3] != '3'
		&& hashtag[4] != '4' && hashtag[5] != '5' && hashtag[6] != '6'
		&& hashtag[7] != '7' && hashtag[8] != '8' && hashtag[9] != '9')

		return 0;
	else
		return -1;
}





void game_board()
{
	//Precondition: Displays the board with a series of display statements
	//Postcondition: Prints board when called
	system("cls");
	cout << "\n\n\tTic-Tac-Toe Program\n\n";

	cout << "Player 1 -> (X)  -  Player 2 -> (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << hashtag[1] << "  |  " << hashtag[2] << "  |  " << hashtag[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << hashtag[4] << "  |  " << hashtag[5] << "  |  " << hashtag[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << hashtag[7] << "  |  " << hashtag[8] << "  |  " << hashtag[9] << endl;

	cout << "     |     |     " << endl << endl;
}


