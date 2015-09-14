#include "Person.h"

#include<iostream>
#include<string>
#include<assert.h>
#include<stdlib.h>
#include<time.h>

using namespace std;


Person::Person()
{
 player_total_score = 0;
}

void Person::play_game()
{
 string user_input;

 cout << "Player, would you to roll, or will you hold?" << endl;
 cin >> user_input;

 if(user_input == "roll")
 {
  cout << "Player rolled a:" << player_roll() << endl;
 }
 else if(user_input == "hold")
 {
  cout << "player decided to hold" << endl;
 }
 else
 {
  cout << "not an option" << endl;
 }
}

int Person::player_roll()
{
 int dice_roll;
 srand(time(NULL));
 dice_roll = (rand()%6) + 1;
 return dice_roll;
} 

