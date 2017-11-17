// CardDrawing.cpp : Write a program that simulates a simple card drawing. For each time, the program should print one value among all 52 possible 
//cards – Ace, 2, 3, … 10, Jack, Queen, and King in each suit. Let the program runs 100 times. Display each card nicely. 
//Advanced version :
//Run it 1000 times and count the number of drawings for each card.
//Display the results – each card and the count.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <cmath>
using namespace std;

string getCard(string faceValue[], string suit[]);

int main()
{
	srand(time(NULL));

	int numberOfCards = 100;

	int deck[] = { 52 };

	int arrSize = sizeof(deck) / sizeof(int);

	string suit[] = { "Diamonds", "Hearts", "Spades", "Clubs" };

	string faceValue[] = { "Two", "Three", "Four", "Five",

		"Six", "Seven", "Eight", "Nine", "Ace", "King",

		"Queen", "Jack" };

	for (int i = 0; i < numberOfCards; i++)
	{

		cout << "You drew a: " << getCard(faceValue, suit) << endl;
	}
	system("pause");
	return 0;
}


string getCard(string faceValue[],string suit[])
{
	string card;
	int cardValue = rand() % 12;
	int cardSuite = rand() % 4;
	card += faceValue[cardValue];
	card += " of ";
	card += suit[cardSuite];
	return card;
}


