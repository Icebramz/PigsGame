
//new 
#include "pigsgame.h"

#include <iostream>
using namespace std; 

int Player::rollDice()
{
	score = 0; 
	sran(time(NULL)); // reset the random generatorcounter seed to generate random numbers 
	while (true) // keep looping 
	{
		int num = (rand() % 6) + 1; 
		count << " Dice rolled to " << num << "." << endl; 
		if (num == 1) //fail 
			return 0; // turn ends with 0 score, so we end this function right away with 0  

		score += num; // for values other than 1, add it onto the score 

		cout << "Do you want to hold (y for yess) : "; 
		cin >> hold; 

		if (hold == "y")
			return score; // hold the score and return it 
		// otherwise if the user chose not to hold, we loop back to generate dice value again 


	}
}

int main()
{
	Player p; 
	int pvalue = p.rollDice(); 
	cout << " Final score of the player p is : " << pvalue << endl; 


    return 0;

 }
