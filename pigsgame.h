

#ifndef PIGSGAME_H
#define PIGSGAME_H


#include <iostream>
using namespace std;

class Player
{
  private:  // class fields should be kept as private, if we need to modify them we can use the get/set methods for the respective fields
    string roll;
    string hold;
    int score;
    string choice; 
	// adding a few functions 
  public: 
	  int rollDice(); // function to roll a dice and generate a score 
};

#endif
