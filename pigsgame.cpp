#include "pigsgame.h"
        #include<stdlib.h>	
        #include<time.h>
	#include <iostream>
	#include <ctime>
	#include <string>
	using namespace std;
	
	int Player::rollDice()
	{
		score = 0;
		srand(time(NULL)); // reset the random generator counter seed to generate unique random numbers
		while (true) // keep looping
		{
			int num = (rand()%6)+1;
			cout << " Dice rolled to " << num << "." << endl;

			if (num==1) // fail
				return 0; // turn ends with 0 score, so we end this function right away with 0

			score += num; // for values other than 1, add it onto the score
	
			cout << "Do you want to hold (y for YES) : ";
			cin >> hold;

			if (hold == "y")
				return score; // hold the score and return it

			// otherwise, if the user choses not to hold, we loop back to generate dice value again
		}
	}

	void play(Player p1, Player p2)
	{
		int p1value=0, p2value=0; // value of the 2 dices
		int currp1, currp2;

		while (true)
		{
			// PLAYER 1
			cout << "Player 1 turn... " << endl;
			currp1 = p1.rollDice(); // roll the p1 dice 
			if (currp1==0) // if it is 0
				p1value = 0; // total value reset to 0
			else
				p1value += currp1; // otherwise added
			if (p1value >= 100) // check for win
			{
				cout << "Player 1 wins!!" << endl;
				break;
			}
			else
			{
				cout << "Current Scores:" <<endl;
				cout << "PLAYER 1:" << p1value << endl;
				cout << "PLAYER 2:" << p2value << endl;
			}

			cout << endl;

			// PLAYER 2
			cout << "Player 2 turn... " << endl;
			currp2 = p2.rollDice(); // roll the p2 dice 
			if (currp2==0) 
				p2value = 0; 
			else
				p2value += currp2; 
			if (p2value >= 100) 
			{
				cout << "Player 2 wins!!" << endl;
				break;
			}
			else
			{
				cout << "Current Scores:" <<endl;
				cout << "PLAYER 1:" << p1value << endl;
				cout << "PLAYER 2:" << p2value << endl;
			}

			cout << endl;

			// loop repeats until either p1 or p2 reach a value of 100 wherein the "break" statement will break the loop
		}		
	}

	int main()
	{
	
		Player p1, p2; // create 2 players
		play(p1, p2); // play the game via the play function
				
	    return 0;
			
	 }
